"""Compare two player state handlers against decision models; no exact credit."""
import argparse
import itertools
import json
from pathlib import Path

from arm64_behavior import Arm64Behavior
from elf import Elf, require
from project import ROOT, digest, load


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--original', type=Path, required=True)
    parser.add_argument('--clang8', type=Path, required=True)
    parser.add_argument('--build-dir', type=Path, required=True)
    args = parser.parse_args()
    elf = Elf(args.original)
    require(digest(elf.data) == load(ROOT/'config/target.json')['sha256'], 'Wrong original')
    spans = elf.unwind_ranges()
    require(spans[0x98f270] == 484 and spans[0x98f9d0] == 1048, 'Wrong original extents')
    b = Arm64Behavior(elf, args.clang8, args.build_dir.resolve())
    source = ROOT/'src/wip/PlayerActionStates.cpp'
    entries = b.install(source, 'states.o')
    P = b.DATA
    V, R, RV, RH, O, OH, FIELD, FH, FV, CATALOG, LEVEL, LH, MODE, SCENE, SH = [
        P+i*0x1000 for i in range(2, 17)]
    SCRIPT, TRACKER, ALLOCATORS, ALLOC, AV, OWN, OBJECT, OV, NODES, ARRAY = [
        P+x for x in [0x17000, 0x20000, 0x30000, 0x31000, 0x32000, 0x33000,
                     0x34000, 0x35000, 0x36000, 0x37000]]
    IN, OUT, PAIRS = P+0x40000, P+0x41000, P+0x42000
    START, END, MEMBER, RELATED, RELATED_MODE, DETACH, LANDING, TYPE, INIT, DESTROY, FREE = [
        b.STUB+i*16 for i in range(11)]
    trace = []
    def reset():
        b.mu.mem_write(P, bytes(0x78000)); b.handlers.clear(); trace.clear()
        b.put(P, V); b.put(R, RV); b.put(P+0x238, RH); b.put(RH+8, R)
        b.put(P+0x78, OH); b.put(OH+8, O); b.put(O, FV)
        b.put(O+0x50, FH); b.put(FH+8, FIELD); b.put(FIELD, FV)
        for off, fn in [(0x238, START), (0x240, END), (0x750, MEMBER),
                        (0x120, RELATED), (0xf8, DETACH), (0x1a0, LANDING)]: b.put(V+off, fn)
        b.put(RV+0x190, RELATED_MODE); b.put(FV+0x60, TYPE); b.put(FV+0x10, INIT)
        b.put(LEVEL+0xa0, LH); b.put(LH+8, CATALOG); b.put(CATALOG, FV)
        b.put(SCENE+0xa8, SH); b.put(SH+8, MODE)
        b.put(0x191cd10, P+0x18000)
        b.write(0x191f8b8, '<B', 1); b.mu.mem_write(0x191f8c0, bytes(12))
        b.write(P+0x500, '<I', 77); b.write(P+0x3ba, '<B', 9); b.write(P+0x1525, '<B', 8)
        b.write(P+0x1a4, '<6f', 1, 2, 3, 4, 5, 6)
        b.write(P+0x1c4, '<f', 7); b.write(P+0x2bc, '<ff', -0.25, 9)
        b.write(FIELD+0x199, '<B', 7)
    def event(name, receiver, result=0):
        require(b.arg(0) == receiver, 'Wrong receiver: '+name)
        trace.append(name); return {b.x(0): result}

    # Independently connect the resolver ID to its registered factory and RTTI.
    # The registration slice ends before guard release; it is not a full-function claim.
    reset()
    b.stub(0x646958, lambda: event('registration_end', 0x1920bc8))
    b.execute(0x646930)
    require(b.read(0x1920bd0, '<I')[0] == 0x0bf4a9b7 and
            b.read(0x1920bd8, '<QQ') == (0x744c00, 0), 'Catalog registration differs')
    b.put(0x191c9c8, ALLOCATORS); b.put(0x1935058, P+0x18000)
    b.put(ALLOC, AV); b.put(AV+0x10, START)
    def factory_lookup():
        require(b.arg(0) == ALLOCATORS, 'Wrong factory allocator registry')
        require(b.arg(1) in [0x07b73c94, 0x1486d4e8], 'Wrong factory allocator type')
        return {b.x(0): ALLOC}
    def allocate_catalog():
        require((b.arg(0), b.arg(1)) == (ALLOC, 160), 'Wrong catalog allocation')
        return {b.x(0): CATALOG}
    b.stub(0x676160, factory_lookup); b.stub(START, allocate_catalog)
    b.stub(0x6c89a0, lambda: event('base_constructor', CATALOG))
    require(b.execute(0x744c00) == CATALOG, 'Factory returned wrong object')
    catalog_table = b.read(CATALOG, '<Q')[0]
    relative = elf.relative_relocations()
    rtti = relative[catalog_table-8]
    require(elf.at(relative[rtti+8], 35).split(b'\0')[0] == b'N4SPTG25ControllablePlayerCatalogE',
            'Factory class differs')
    catalog_identity = dict(resolver_id='0x0bf4a9b7', factory='0x744c00',
                            registration_slice=['0x646930', '0x646958'],
                            primary_vtable=hex(catalog_table), rtti=hex(rtti),
                            class_name='SPTG::ControllablePlayerCatalog',
                            caveat='Allocator and base constructor stubbed; normal factory return only')

    def game_over(code, scene_mode, pairs, cache):
        reset()
        b.write(MODE+0x118, '<I', scene_mode)
        if cache == 1: b.put(LEVEL+0xa0, 0)
        if cache == 2: b.put(LH+8, 0)
        b.put(CATALOG+0x80, len(pairs)); b.put(CATALOG+0x90, ARRAY)
        members = {}
        for i, (current, required) in enumerate(pairs):
            actor = P+0x50000+i*0x1000
            b.put(actor, V); b.write(actor+0x210, '<QQ', *current)
            b.put(ARRAY+i*8, actor); members[actor] = required
            b.write(PAIRS+i*32, '<QQQQ', *current, *required)
        def member():
            require(b.arg(0) in members, 'Unexpected catalog actor')
            first, second = members[b.arg(0)]
            trace.append('member'); return {b.x(0): first, b.x(1): second}
        def resolve():
            require((b.arg(0), b.arg(1), b.arg(2)) == (P+0x18000, 0x0bf4a9b7, LEVEL+0xa0), 'Wrong catalog resolution')
            b.put(LEVEL+0xa0, LH); b.put(LH+8, CATALOG); trace.append('resolve')
        def movie_hash():
            require(elf.at(b.arg(0), 14) == b'GameOverMovie\0', 'Wrong movie name')
            trace.append('hash'); return {b.x(0): 0x12345678}
        def movie():
            require((b.arg(0), b.arg(2), b.arg(3)) == (SCRIPT, 32, 0), 'Wrong movie request arguments')
            require(b.read(b.arg(1), '<I')[0] == 0x12345678, 'Wrong movie hash')
            trace.append('movie')
        for address, handler in {
            START: lambda: event('start', P), END: lambda: event('end', P), MEMBER: member,
            0x7725e0: lambda: event('level', P+0x90, LEVEL), 0x67edd0: resolve,
            INIT: lambda: event('init', CATALOG),
            0x770d70: lambda: event('scene', P+0x7a0, SCENE),
            0x6ea720: lambda: event('script', P+0x7c0, SCRIPT),
            0x7731c0: lambda: event('prepare', SCRIPT), 0xbfbce0: movie_hash, 0x778670: movie,
        }.items(): b.stub(address, handler)
        before = bytes(b.mu.mem_read(P, 0x1800))
        returned = b.execute(0x98f270, P, code)
        b.write(IN, '<III4xQ', code, scene_mode, len(pairs), PAIRS)
        b.execute(entries['EvaluateGameOverState'], IN, OUT)
        handled, changes, mode, enabled, request = b.read(OUT, '<5I')
        require(returned == handled, 'Game-over return differs')
        expected_memory = bytearray(before)
        import struct
        if changes:
            struct.pack_into('<I', expected_memory, 0x500, mode)
            expected_memory[0x3ba] = enabled; expected_memory[0x1525] = enabled
        require(bytes(b.mu.mem_read(P, 0x1800)) == expected_memory, 'Game-over field writes differ')
        expected = []
        if code == 10001:
            expected = ['start', 'level']+(['resolve', 'init'] if cache else [])+['member']*len(pairs)
            equal = lambda pair: pair[0][0] == pair[1][0] and (pair[0][1] == pair[1][1] or
                        pair[0][0] == 0 and (pair[0][1] | pair[1][1]) & 1 == 0)
            if all(equal(pair) for pair in pairs): expected += ['scene']
            if request: expected += ['script', 'prepare', 'script', 'hash', 'movie']
        elif code == 10002: expected = ['end']
        require(trace == expected, 'Game-over trace differs: '+repr((trace, expected)))

    def action(code, related, related_mode, landing, ownership, has_object, cache, chain):
        reset()
        if cache == 1: b.put(P+0x78, 0)
        if cache == 2: b.put(OH+8, 0)
        b.put(P+0x240, OWN if ownership else 0)
        b.put(OWN+8, OBJECT if has_object else 0); b.write(OWN+0x10, '<I', ownership)
        b.put(OBJECT, OV); b.put(OV, DESTROY)
        b.put(0x1926bd8, ALLOCATORS); b.put(ALLOCATORS+0x370+5*8, ALLOC)
        b.put(ALLOC, AV); b.put(AV+0x30, FREE)
        b.put(0x1935068, TRACKER); b.put(TRACKER, P+0x19000)
        bucket = TRACKER+0x30+((OWN >> 2) % 4003)*8
        # A matching node is either absent, first, or between two nonmatching nodes.
        nodes = [] if chain == 0 else ([OWN] if chain == 1 else [OWN+8, OWN, OWN+16])
        for i, key in enumerate(nodes):
            address = NODES+i*0x100
            b.put(address+8, key); b.put(address+0x28, NODES+(i+1)*0x100 if i+1 < len(nodes) else 0)
        b.put(bucket, NODES if nodes else 0); b.put(TRACKER+0x28, P+0x38000)
        def resolve():
            require((b.arg(0), b.arg(1), b.arg(2)) == (P+0x18000, 0x6492d61d, P+0x78), 'Wrong ActorObject resolution')
            b.put(P+0x78, OH); b.put(OH+8, O); trace.append('resolve')
        def typed():
            require(b.arg(1) == 0x21350526, 'Wrong playfield type')
            return event('type', FIELD, 1)
        def allocator():
            require(b.arg(0) == ALLOCATORS and b.arg(1) in [OWN, OBJECT], 'Wrong allocator lookup')
            trace.append('lookup_object' if b.arg(1) == OBJECT else 'lookup_handle')
            return {b.x(0): 5}
        def free():
            require(b.arg(0) == ALLOC and b.arg(1) in [OWN, OBJECT], 'Wrong free')
            trace.append('free_object' if b.arg(1) == OBJECT else 'free_handle')
        for address, handler in {
            RELATED: lambda: event('related', P, related),
            RELATED_MODE: lambda: event('related_mode', R, related_mode),
            DETACH: lambda: event('detach', P), LANDING: lambda: event('landing', P, landing),
            TYPE: typed, 0x67edd0: resolve, INIT: lambda: event('init', O),
            0xa82b30: allocator, DESTROY: lambda: event('destroy', OBJECT), FREE: free,
            0xfa4950: lambda: event('lock', P+0x19000), 0xfa4960: lambda: event('unlock', P+0x19000),
        }.items(): b.stub(address, handler)
        before = bytes(b.mu.mem_read(P, 0x1800))
        result = b.execute(0x98f9d0, P, code)
        b.write(IN, '<7I', code, related, related_mode, landing, bool(ownership), ownership, has_object)
        b.execute(entries['EvaluateActionState'], IN, OUT)
        handled, change, mode, clear, detach, restore, field, clear_handle, release, destroy = b.read(OUT, '<10I')
        require(result == handled, 'Action return differs')
        expected = bytearray(before)
        import struct
        if change:
            struct.pack_into('<I', expected, 0x500, mode)
            struct.pack_into('<Q', expected, 0x78, OH)
        if clear: expected[0x1a4:0x1bc] = bytes(24)
        if restore:
            struct.pack_into('<f', expected, 0x1b8, -0.25); struct.pack_into('<f', expected, 0x1c4, 9)
        if clear_handle: struct.pack_into('<Q', expected, 0x240, 0)
        require(bytes(b.mu.mem_read(P, 0x1800)) == expected, 'Action memory writes differ')
        require(b.read(FIELD+0x199, '<B')[0] == (field if change else 7), 'Playfield flag differs')
        require(b.read(OWN+0x10, '<I')[0] == (ownership-1 if clear_handle and ownership else ownership), 'Reference count differs')
        expected_trace = []
        if code == 10001:
            expected_trace = ['related']+(['related_mode'] if related & 1 else [])
            if detach: expected_trace += ['detach']
            expected_trace += ['landing']
        if release:
            if destroy: expected_trace += ['lookup_object', 'destroy', 'free_object']
            expected_trace += ['lookup_handle', 'lock', 'unlock', 'free_handle']
        if change: expected_trace += (['resolve', 'init'] if cache else [])+['type']
        require(trace == expected_trace, 'Action trace differs: '+repr((trace, expected_trace)))
        if release and nodes:
            index = 0 if chain == 1 else 1
            require(b.read(TRACKER+0x28, '<Q')[0] == NODES+index*0x100, 'Removed node missing from free list')
            require(b.read(NODES+index*0x100+0x28, '<Q')[0] == P+0x38000, 'Old free list lost')
            if chain == 1: require(b.read(bucket, '<Q')[0] == 0, 'Bucket not emptied')
            else: require(b.read(bucket, '<Q')[0] == NODES and b.read(NODES+0x28, '<Q')[0] == NODES+0x200, 'Middle node unlink differs')
        else:
            require(b.read(TRACKER+0x28, '<Q')[0] == P+0x38000, 'Unexpected free-list change')

    counts = dict(game_over=0, action_state=0)
    equal = ((0x748, 1), (0x748, 1)); different = ((0x788, 1), (0x748, 1))
    patterns = [[], [equal], [different], [equal, equal], [equal, different],
                [different, equal], [((0, 0), (0, 2))], [((0, 0), (0, 1))],
                [equal, equal, equal], [equal, different, equal]]
    for case in itertools.product([0, 9999, 10000, 10001, 10002, 10003, 10004, 0xffffffff],
                                  [0, 7, 8, 9, 12, 13, 0xffffffff], patterns, range(3)):
        game_over(*case); counts['game_over'] += 1
    for case in itertools.product([0, 10000, 10001, 10002, 10003, 10004, 0xffffffff],
                                  [0, 1, 2, 3], [0, 1, 2], [0, 1, 2, 3],
                                  [0, 1, 2], [0, 1], range(3), range(3)):
        action(*case); counts['action_state'] += 1
    controls = [
        ('movie_gate', 'in->sceneMode <= 12', 'in->sceneMode <= 13', lambda: game_over(10001, 13, [equal], 0)),
        ('member_null', '(a.second | b.second) & 1', '(a.second | b.second) & 2', lambda: game_over(10001, 0, [((0, 0), (0, 2))], 0)),
        ('airborne', '!(in->landingQuery & 1)', '(in->landingQuery & 1)', lambda: action(10001, 0, 0, 0, 0, 0, 0, 0)),
        ('ownership', 'in->references == 1', 'in->references == 2', lambda: action(10002, 0, 0, 0, 1, 1, 0, 2)),
    ]
    rejected = []
    for name, old, new, check in controls:
        require(source.read_text().count(old) == 1, 'Invalid negative mutation')
        path = b.folder/(name+'.cpp'); path.write_text(source.read_text().replace(old, new))
        entries = b.install(path, name+'.o')
        try: check()
        except ValueError: rejected.append(name)
        else: raise ValueError('Wrong source accepted: '+name)
    report = dict(original_sha256=digest(elf.data), source=source.relative_to(ROOT).as_posix(),
                  source_sha256=digest(source.read_bytes()), passed_cases=counts,
                  negative_controls_rejected=rejected, exact_credit=0, catalog_identity=catalog_identity,
                  original_functions=[dict(address=hex(a), size=spans[a], sha256=digest(elf.at(a, spans[a])))
                                      for a in [0x98f270, 0x98f9d0]],
                  limitations=['Bounded stable catalog and component identities; external calls stubbed',
                               'No real movie execution, collision simulation, or concurrent reference updates',
                               'PlayfieldActor type query succeeds; required related actor exists',
                               'Static zero-vector guard preinitialized; exception paths excluded',
                               'Tracker chains contain at most one matching node; allocators deterministic'])
    (ROOT/'progress/player_action_states_behavior.json').write_text(json.dumps(report, indent=2)+'\n')
    print(json.dumps(report, indent=2))


if __name__ == '__main__': main()
