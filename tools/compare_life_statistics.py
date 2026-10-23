"""Execute original factory/constructor wiring and nine gameplay-statistics events."""
import argparse
import itertools
import json
from pathlib import Path
import struct

from arm64_behavior import Arm64Behavior
from elf import Elf, require
from project import ROOT, digest, load


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--original', type=Path, required=True)
    p.add_argument('--clang8', type=Path, required=True)
    p.add_argument('--build-dir', type=Path, required=True)
    p.add_argument('--integrated', action='store_true', help='Execute rebuilt ABI implementation instead of original handlers')
    args = p.parse_args()
    elf = Elf(args.original)
    spans = elf.unwind_ranges()
    require(digest(elf.data) == load(ROOT/'config/target.json')['sha256'], 'Wrong original')
    b = Arm64Behavior(elf, args.clang8, args.build_dir.resolve())
    source = ROOT/'src/wip/GameStatisticsLifeEvents.cpp'
    entries = b.install(source, 'statistics.o')
    compiled = []
    if args.integrated:
        from gameplay_statistics_build import compile_statistics
        compiled = compile_statistics(elf, args.clang8, b.folder)
        for recipe, code, exact in compiled:
            address = int(recipe['address'], 0)
            b.mu.mem_write(address, code)
            b.mu.ctl_remove_cache(address, address+recipe['size'])
    B = b.DATA
    P, H, LOCAL, RECORD, MESSAGE, IN, OUT = [B+i*0x2000 for i in range(1, 8)]
    ALLOCATORS, ALLOC, AV, HEAP = B+0x18000, B+0x19000, B+0x1a000, B+0x20000
    ALLOCATE, FREE = b.STUB, b.STUB+16
    cursor, freed = [HEAP], []
    b.put(0x191c9c8, ALLOCATORS); b.put(0x1926bd8, ALLOCATORS)
    b.put(0x1935058, B+0x17000)
    b.put(ALLOCATORS+0x370, ALLOC); b.put(ALLOC, AV)
    b.put(AV+0x10, ALLOCATE); b.put(AV+0x30, FREE)
    def allocate_factory():
        require((b.arg(0), b.arg(1)) == (ALLOC, 560), 'Wrong factory allocation')
        return {b.x(0): B}
    def lookup_allocator():
        require((b.arg(0), b.arg(1)) == (ALLOCATORS, 0x07b73c94), 'Wrong allocator lookup')
        return {b.x(0): ALLOC}
    def allocate_hook():
        require((b.arg(0), b.arg(1)) == (B+0x17050, 40), 'Wrong callback allocation')
        address = cursor[0]; cursor[0] += 0x40
        return {b.x(0): address}
    def free_hook():
        require(b.arg(0) == ALLOC, 'Wrong allocator free receiver')
        freed.append(b.arg(1))
    b.stub(0x676160, lookup_allocator); b.stub(ALLOCATE, allocate_factory)
    b.stub(0xa972b0, allocate_hook); b.stub(0xa82b30, lambda: {b.x(0): 0})
    b.stub(FREE, free_hook)
    # External initialization, synchronization, destructor and clock effects only.
    # Original hook copying, object stores and constructor control flow execute.
    rel = elf.relative_relocations()
    for address in [0x6764e0, 0x79fa30, 0x7a02f0, 0x677400, 0xfa4920, 0xfa3eb0,
                    rel[0x184d770]]:
        b.stub(address, lambda: {b.x(0): 0})
    b.execute(0x7613c0)
    table = b.read(B, '<Q')[0]; rtti = rel[table-8]
    name = elf.at(rel[rtti+8], 200).split(b'\0')[0].decode()
    require(name == 'N4SPTG20GameStatisticsBureauE', 'Wrong constructed class')
    hooks = []
    for index in range(32):
        ptr = b.read(B+0x98+index*8, '<Q')[0]
        if not ptr:
            hooks.append(dict(event=index, handler=None))
            continue
        vt, trampoline, receiver, first, second = b.read(ptr, '<5Q')
        require(vt == 0x184d770 and trampoline == 0x79e020 and receiver == B and second == 0,
                'Unexpected installed callback layout: '+repr((index, vt, trampoline, receiver, first, second)))
        hooks.append(dict(event=index, handler=hex(first)))
    stats = {17: ('damagedealt', 'damage', 0x1846508),
             18: ('itemsbought', 'amount', 0x1846548),
             19: ('lifetakenbyplayer', 'amount', 0x1846568),
             20: ('lifetakenfromplayer', 'amount', 0x1846588),
             25: ('objectsthrown', 'amount', 0x1846648),
             26: ('timesgotkilled', 'amount', 0x1846668),
             27: ('timesreanimatedbyplayer', 'amount', 0x1846688),
             28: ('timestaunted', 'amount', 0x18466c8)}
    expected_handlers = {11: 0x79ef90, 17: 0x79f0e0, 18: 0x79f170,
                         19: 0x79f1f0, 20: 0x79f270, 25: 0x79f430,
                         26: 0x79f4b0, 27: 0x79f530, 28: 0x79f5b0}
    for code, handler in expected_handlers.items():
        require(hooks[code]['handler'] == hex(handler), 'Wrong life event registration')
    require(len(freed) == 28 and len(set(freed)) == 28, 'Unexpected temporary hook cleanup')
    require(cursor[0] == HEAP+56*0x40, 'Unexpected hook allocation count')
    require(sum(h['handler'] is not None for h in hooks) == 28, 'Wrong installed event count')
    saved_bureau = bytes(b.mu.mem_read(B, 560))
    b.put(P+0x7a8, H); b.put(H+8, B)
    trace = []
    def case(code, player, local, amount, cold, damage=1):
        trace.clear(); b.mu.mem_write(B, saved_bureau)
        b.write(P+0x1508, '<I', player); b.write(P+0x870, '<I', 5)
        b.write(LOCAL+0x182c, '<I', local)
        b.write(MESSAGE, '<I4xQQQ', code, P, damage, 0)
        b.mu.mem_write(RECORD, b'\xa5'*32); b.write(RECORD+4, '<I', amount)
        b.put(0x191c980, B+0x15000); b.put(0x191c988, B+0x15000 if cold else B+0x15008)
        def context():
            require(b.arg(0) == B+0x88, 'Wrong statistics context')
            trace.append('context'); return {b.x(0): LOCAL}
        def initialize():
            trace.append('initialize'); b.put(0x191c980, B+0x15100)
        def statistic():
            key = b.mu.mem_read(b.arg(1), 64).split(b'\0')[0].decode()
            require(key == stats[code][0], 'Wrong statistics key')
            require(b.arg(0) == B+(0x15100 if cold else 0x15000), 'Wrong statistics container')
            trace.append('statistic'); return {b.x(0): RECORD}
        b.stub(0x777710, context); b.stub(0x6f3340, initialize); b.stub(0x6f3670, statistic)
        # Execute player wrapper -> cached singleton accessor -> original installed
        # member trampoline -> original handler. None of these layers is stubbed.
        before_player = bytes(b.mu.mem_read(P, 0x1800))
        before_record = bytearray(b.mu.mem_read(RECORD, 32))
        b.execute(0x986410, P, MESSAGE)
        b.write(IN, '<5I', code, player, local, amount, damage)
        b.execute(entries['EvaluateLifeEvent'], IN, OUT)
        mark, update, kind, value = b.read(OUT, '<4I')
        expected_bureau = bytearray(saved_bureau)
        if mark: expected_bureau[0x1a1+player] = 1
        if update:
            struct.pack_into('<II', before_record, 0, kind, value)
            table_address = stats[code][2]
            pointers = (rel[table_address], rel[table_address+8])
            require(elf.at(pointers[0], 64).split(b'\0')[0].decode() == stats[code][0], 'Wrong record name')
            require(elf.at(pointers[1], 64).split(b'\0')[0].decode() == stats[code][1], 'Wrong statistic attribute')
            struct.pack_into('<QQ', before_record, 8, *pointers)
            before_record[24] = 1
        require(bytes(b.mu.mem_read(B, 560)) == expected_bureau, 'Bureau memory differs')
        require(bytes(b.mu.mem_read(RECORD, 32)) == before_record, 'Statistics record differs')
        require(bytes(b.mu.mem_read(P, 0x1800)) == before_player, 'Installed statistics event changed player')
        expected_trace = [] if code == 11 else ['context']
        if update: expected_trace += (['initialize'] if cold else [])+['statistic']
        require(trace == expected_trace, 'Statistics call trace differs')
    count = 0
    for values in itertools.product(expected_handlers, range(4), [0, 1, 2, 3, 0xffffffff],
                                     [0, 1, 0xffffffff], [False, True], [0, 1, 0xffffffff]):
        case(*values); count += 1
    rejected = []
    for tag, old, new, values in [
        ('local_gate', 'in->playerIndex != in->localIndex', 'in->playerIndex == in->localIndex', (19, 0, 0, 0, False)),
        ('event_kind', 'case 20: out->kind = 4', 'case 20: out->kind = 3', (20, 1, 1, 0, False)),
        ('amount', 'in->amount + (in->event == 17 ? in->damage : 1)', 'in->amount', (19, 0, 0, 0xffffffff, True)),
        ('damage', 'in->event == 17 ? in->damage : 1', '1', (17, 0, 0, 9, False, 7)),
        ('mark', 'in->event == 11;', 'in->event == 19;', (11, 2, 0, 0, False)),
    ]:
        text = source.read_text(); require(old in text, 'Missing mutation marker')
        path = b.folder/(tag+'.cpp'); path.write_text(text.replace(old, new))
        entries = b.install(path, tag+'.o')
        try: case(*values)
        except ValueError: rejected.append(tag)
        else: raise ValueError('Incorrect model accepted: '+tag)
    report = dict(exact_match_credit=False, source_sha256=digest(source.read_bytes()),
        original_sha256=digest(elf.data), cases=count, negative_controls_rejected=rejected,
        factory='0x7613c0', constructor='0x79bc80', class_name='SPTG::GameStatisticsBureau',
        primary_vtable=hex(table), rtti=hex(rtti), installed_events=hooks,
        verified_statistics={str(k): dict(key=v[0], attribute=v[1]) for k, v in stats.items()},
        executed_chain=['0x986410', '0x772920 (cached path)', '0x79e020', 'installed handler'],
        original_functions={hex(a): dict(size=spans[a],
            sha256=digest(elf.at(a, spans[a]))) for a in
            [0x7613c0, 0x79bc80, 0x7a1f10, 0x986410, 0x772920, 0x79e020]+list(expected_handlers.values())},
        limits=['Normal factory/constructor path; allocator, base/subobject initialization, mutex, clock and destruction effects stubbed.',
                'Event inputs limited to 11,17,18,19,20,25,26,27,28 and player indices0..3; singleton handle populated.',
                'Statistics context, lazy container initialization and key lookup are deterministic stubs.',
                'Installed handlers tested; runtime replacement of callbacks is not excluded.'])
    if args.integrated:
        # Reject defects in the executable reconstruction itself, not only in
        # the independent decision oracle used by the earlier research harness.
        entries = b.install(source, 'statistics.o')
        implementation = ROOT/'src/gameplay/Statistics.cpp'
        (b.folder/'Statistics.h').write_bytes((ROOT/'src/gameplay/Statistics.h').read_bytes())
        implementation_rejected = []
        for tag, old, new, values in [
            ('decrement_instead_of_increment', 'record->amount += increment;', 'record->amount -= increment;', (19, 0, 0, 9, False)),
            ('wrong_mark_value', 'bureau->playerMarked[message.subject->index] = 1;', 'bureau->playerMarked[message.subject->index] = 2;', (11, 1, 0, 0, False)),
        ]:
            text = implementation.read_text(); require(old in text, 'Missing implementation mutation')
            path = b.folder/(tag+'.cpp'); path.write_text(text.replace(old, new))
            for recipe, code, exact in compile_statistics(elf, args.clang8, b.folder, path):
                address = int(recipe['address'], 0)
                b.mu.mem_write(address, code); b.mu.ctl_remove_cache(address, address+recipe['size'])
            try: case(*values)
            except ValueError: implementation_rejected.append(tag)
            else: raise ValueError('Incorrect executable implementation accepted: '+tag)
        compiled = compile_statistics(elf, args.clang8, b.folder)
        report['implementation_negative_controls_rejected'] = implementation_rejected
        report['implementation'] = 'src/gameplay/Statistics.cpp'
        report['implementation_sha256'] = digest((ROOT/report['implementation']).read_bytes())
        report['layout_sha256'] = digest((ROOT/'src/gameplay/Statistics.h').read_bytes())
        report['compiled_functions'] = [dict(symbol=r['symbol'], address=r['address'],
            size=len(c), exact=e, compiled_sha256=digest(c)) for r, c, e in compiled]
        report['executed_chain'][0] = 'rebuilt DispatchPlayerStatistic'
        report['executed_chain'][-1] = 'rebuilt handler selected by original constructor'
    filename = 'integrated_statistics_behavior.json' if args.integrated else 'life_statistics_behavior.json'
    (ROOT/'progress'/filename).write_text(json.dumps(report, indent=2)+'\n')
    print(json.dumps(report, indent=2))


if __name__ == '__main__': main()
