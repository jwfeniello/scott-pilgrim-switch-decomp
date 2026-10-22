"""Compare revival scan region and complete recovery handler; no exact credit."""
import argparse
import itertools
import json
import math
from pathlib import Path
import struct

from arm64_behavior import Arm64Behavior
from elf import Elf, require
from project import ROOT, digest, load


def main():
    from unicorn import UC_HOOK_CODE
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--original', type=Path, required=True)
    p.add_argument('--clang8', type=Path, required=True)
    p.add_argument('--build-dir', type=Path, required=True)
    args = p.parse_args()
    elf = Elf(args.original)
    require(digest(elf.data) == load(ROOT/'config/target.json')['sha256'], 'Wrong original')
    spans, rel = elf.unwind_ranges(), elf.relative_relocations()
    require(spans[0x98d710] == 3324 and spans[0x98e420] == 396, 'Wrong extents')
    require(rel[0x1873c70+0x708] == 0x98d710 and rel[0x1873c70+0x718] == 0x98e420,
            'Wrong player handlers')
    b = Arm64Behavior(elf, args.clang8, args.build_dir.resolve())
    source = ROOT/'src/wip/PlayerRevival.cpp'
    entries = b.install(source, 'revival.o')
    P, V = b.DATA, b.DATA+0x8000
    LEVEL, CATALOG, ARRAY = P+0x20000, P+0x21000, P+0x22000
    IN, CANDIDATES, OUT, STACK = P+0x30000, P+0x31000, P+0x32000, P+0x70000
    QUERY, EVENT, INIT, READY, RESTORE_A, RESTORE_B, ANIMATION = [b.STUB+16*i for i in range(7)]
    trace, resolved, initialized, ends = [], [], [], set()
    def stop(mu, address, size, data):
        if address in ends: mu.emu_stop()
    b.mu.hook_add(UC_HOOK_CODE, stop)
    def reset():
        b.mu.mem_write(P, bytes(0x78000)); b.handlers.clear()
        trace.clear(); resolved.clear(); initialized.clear(); ends.clear()
        b.put(P, V)
        b.put(V+0x720, rel[0x1873c70+0x720])
        b.put(V+0x308, rel[0x1873c70+0x308])
        for slot, fn in [(0x198, QUERY), (0x4f8, EVENT), (0x10, INIT),
                         (0xd8, READY), (0x1c8, RESTORE_A), (0x4b0, RESTORE_B), (0xb0, ANIMATION)]:
            b.put(V+slot, fn)
        b.write(0x191f8b8, '<B', 1); b.mu.mem_write(0x191f8c0, bytes(12))
        b.put(0x191cd10, P+0x23000)
    def region():
        ends.update([0x98e104, 0x98db20])
        b.mu.reg_write(b.arm.UC_ARM64_REG_SP, STACK)
        for i, value in [(19, P), (20, 0x6492d61d), (21, 0x022fe74a), (22, P+0x78), (23, P+0x90)]:
            b.mu.reg_write(b.x(i), value)
        b.mu.emu_start(0x98dd58, b.STOP, count=20000)
        pc = b.mu.reg_read(b.arm.UC_ARM64_REG_PC)
        require(pc in ends, 'Revival scan did not reach its declared boundary')
        ends.clear()
        return pc
    def transition(pair):
        require((b.arg(0), b.arg(1), b.arg(2)) == (P+0x208, *pair), 'Wrong transition')
        trace.append(('transition', pair[0]))
    def candidate(**kw):
        c = dict(self=0, query=0, group=7, counter=2, after=0, change=0,
                 position=(0, 0, 0), reach=(1, 1, 1))
        c.update(kw)
        return c

    def scan(activation, candidates, cache=0, position=(0, 0, 0)):
        reset()
        slots, actors, addresses = {}, {}, []
        def link(slot, handle, obj, type_id):
            slots[slot] = (handle, obj, type_id)
            b.put(slot, 0 if cache == 1 else handle)
            b.put(handle+8, 0 if cache == 2 else obj)
            b.put(obj, V)
        def components(actor, index, pos):
            base = P+0x10000+index*0x1000
            link(actor+0x78, base, base+0x100, 0x6492d61d)
            link(base+0x160, base+0x200, base+0x300, 0x022fe74a)
            b.write(base+0x37c, '<3f', *pos)
        components(P, 0, position)
        link(LEVEL+0xa0, LEVEL+0x100, CATALOG, 0x0bf4a9b7)
        b.put(CATALOG+0x80, len(candidates)); b.put(CATALOG+0x90, ARRAY)
        b.write(P+0x1434, '<f', activation); b.write(P+0x14e8, '<I', 7)
        for i, c in enumerate(candidates):
            actor = P if c['self'] else P+0x2000*(i+1)
            addresses.append(actor); b.put(ARRAY+8*i, actor)
            if not c['self']:
                b.put(actor, V); components(actor, i+1, c['position'])
                b.write(actor+0x300, '<3f', *c['reach'])
                b.write(actor+0x14e8, '<I', c['group'])
                b.write(actor+0x870, '<I', c['counter']); b.write(actor+0x510, '<B', 9)
                actors[actor] = (i, c)
            b.write(CANDIDATES+i*48, '<6I6f', c['self'], c['query'], c['group'], c['counter'],
                    c['after'], c['change'], *c['position'], *c['reach'])
        def query():
            i, c = actors[b.arg(0)]; trace.append(('query', i))
            return {b.x(0): c['query']}
        def event():
            actor, message = b.arg(0), b.arg(1)
            code, subject, a, z = b.read(message, '<I4xQQQ')
            require(subject == actor and (a, z) == (0, 0), 'Wrong event payload')
            i = -1 if actor == P else actors[actor][0]
            trace.append(('event', i, code))
            if code == 11:
                c = actors[actor][1]
                if c['change']: b.write(actor+0x870, '<I', c['after'])
        def resolve():
            slot = b.arg(2)
            require(slot in slots, 'Unknown resolver slot')
            handle, obj, type_id = slots[slot]
            require((b.arg(0), b.arg(1)) == (P+0x23000, type_id), 'Wrong resolver arguments')
            b.put(slot, handle); b.put(handle+8, obj); resolved.append(slot)
        def level():
            require(b.arg(0) == P+0x90, 'Wrong level accessor')
            return {b.x(0): LEVEL}
        b.stub(QUERY, query); b.stub(EVENT, event); b.stub(0x67edd0, resolve)
        b.stub(INIT, lambda: initialized.append(b.arg(0)))
        b.stub(0x7725e0, level); b.stub(0x812930, lambda: transition((0x718, 1)))
        before = {a: bytes(b.mu.mem_read(a, 0x1800)) for a in [P]+list(actors)}
        pc = region()
        b.write(IN, '<fII3fQ', activation, 7, len(candidates), *position, CANDIDATES)
        b.execute(entries['EvaluateRevivalScan'], IN, OUT)
        queried, selected, changed, counter, clear = b.read(OUT, '<5I')
        expected = [('query', i) for i in range(len(candidates)) if queried & (1 << i)]
        if selected != 0xffffffff:
            expected.append(('event', selected, 11))
            if changed: expected += [('event', selected, 19), ('event', -1, 20), ('transition', 0x718)]
        require(trace == expected, 'Revival event/order differs: '+repr((trace, expected)))
        require((pc == 0x98db20) == bool(changed), 'Revival transition differs')
        accesses = []
        if activation > 0:
            accesses = [LEVEL+0xa0, P+0x78, P+0x10160]
            for i, c in enumerate(candidates):
                if queried & (1 << i) and not (c['query'] & 1):
                    accesses += [addresses[i]+0x78, P+0x10000+(i+1)*0x1000+0x160]
        expected_resolves = accesses if cache else []
        require(resolved == expected_resolves, 'Resolution order differs')
        require(initialized == [slots[s][1] for s in expected_resolves], 'Initialization differs')
        for actor, old in before.items():
            memory = bytearray(old)
            if actor+0x78 in resolved: struct.pack_into('<Q', memory, 0x78, slots[actor+0x78][0])
            if selected != 0xffffffff and actor == addresses[selected]:
                struct.pack_into('<I', memory, 0x870, counter)
                if clear: memory[0x510] = 0
            require(bytes(b.mu.mem_read(actor, 0x1800)) == memory, 'Unexpected player memory changes')

    def recovery(code, ready, a, c):
        reset()
        b.write(P+0x500, '<I', 5); b.write(P+0x160, '<I', 0x12345678)
        b.write(P+0x32c, '<I', 0x87654321); b.write(P+0x1a4, '<6f', 1, 2, 3, 4, 5, 6)
        def value(name, value, floating=False):
            require(b.arg(0) == P, 'Wrong receiver')
            trace.append((name,)); return {b.arm.UC_ARM64_REG_S0 if floating else b.x(0): value}
        def animation():
            require((b.arg(0), b.arg(1), b.arg(2), b.arg(3)) == (P, 201, 0, 0), 'Wrong animation request')
            require(b.mu.reg_read(b.arm.UC_ARM64_REG_S0) == 0x3f800000, 'Wrong animation rate')
            trace.append(('animation',))
        b.stub(READY, lambda: value('ready', ready))
        b.stub(RESTORE_A, lambda: value('restore_a', a, True))
        b.stub(RESTORE_B, lambda: value('restore_b', c, True))
        b.stub(ANIMATION, animation); b.stub(0x812930, lambda: transition((0x300, 1)))
        before = bytearray(b.mu.mem_read(P, 0x1800))
        returned = b.execute(0x98e420, P, code)
        b.write(IN, '<4I', code, ready, a, c)
        b.execute(entries['EvaluateRecoveryState'], IN, OUT)
        result, motion, request, restore, change, av, cv = b.read(OUT, '<7I')
        require(returned == result, 'Recovery return differs')
        expected = [('ready',)] if code == 10000 else []
        if motion: before[0x1a4:0x1bc] = bytes(24)
        if request: expected.append(('animation',))
        if restore:
            struct.pack_into('<I', before, 0x500, 0)
            struct.pack_into('<I', before, 0x160, av); struct.pack_into('<I', before, 0x32c, cv)
            expected += [('restore_a',), ('restore_b',)]
        if change: expected.append(('transition', 0x300))
        require(trace == expected, 'Recovery trace differs')
        require(bytes(b.mu.mem_read(P, 0x1800)) == before, 'Recovery memory differs')

    # Verify the concrete player exclusion query as well as abstract query bits.
    for mode in [0, 1, 4, 5, 6, 13, 0xffffffff]:
        reset(); b.write(P+0x500, '<I', mode)
        require(b.execute(0x96e4a0, P) == (mode == 5), 'Actual exclusion query differs')
    scan_count = 0
    for activation, cache, counter, change in itertools.product(
            [-1, -0.0, 0.5, math.inf, math.nan], range(3), [0, 1, 2, 0xffffffff], [0, 1]):
        for after in ([0, 1, 7] if change else [0]):
            scan(activation, [candidate(counter=counter, change=change, after=after), candidate()], cache)
            scan_count += 1
    # Boundary/NaN geometry, each axis independently; donor reach controls eligibility.
    for axis, distance, reach, cache in itertools.product(range(3),
            [-2, -1, -0.0, 0, 1, 1.00001, 2, math.inf, math.nan],
            [-1, 0, 1, 2, math.inf, math.nan], range(3)):
        pos, extents = [0, 0, 0], [1, 1, 1]
        pos[axis], extents[axis] = distance, reach
        scan(1, [candidate(position=pos, reach=extents), candidate()], cache)
        scan_count += 1
    for cache in range(3):
        for first in [candidate(self=1), candidate(query=1), candidate(query=2), candidate(query=3),
                      candidate(group=8), candidate(counter=0), candidate(position=(4, 0, 0))]:
            scan(1, [first, candidate()], cache); scan_count += 1
        scan(1, [], cache); scan_count += 1
        scan(1, [candidate(self=1)], cache); scan_count += 1
    recovery_count = 0
    for case in itertools.product([0, 9999, 10000, 10001, 10002, 10003, 10004, 0xffffffff],
                                  [0, 1, 2, 3, 0xffffffff], [0, 1, 0xffffffff], [0, 19, 0x80000000]):
        recovery(*case); recovery_count += 1
    controls = [
        ('reach_boundary', '<= c.reach.x', '< c.reach.x', lambda: scan(1, [candidate(position=(1, 0, 0))])),
        ('group', 'c.group != in->group', 'c.group == in->group', lambda: scan(1, [candidate()])),
        ('callback_counter', 'c.changesCounter ? c.counterAfterEvent11 : c.counter', 'c.counter',
         lambda: scan(1, [candidate(counter=0, change=1, after=2)])),
        ('first_match', 'out->selected = i;', 'if (c.counter == 0) continue;\n        out->selected = i;',
         lambda: scan(1, [candidate(counter=0), candidate()])),
        ('recovery_ready', '(in->ready & 1)', '(in->ready != 0)', lambda: recovery(10000, 2, 9, 10)),
    ]
    rejected = []
    for name, old, new, test in controls:
        text = source.read_text(); require(old in text, 'Missing mutation marker')
        path = b.folder/(name+'.cpp'); path.write_text(text.replace(old, new))
        entries = b.install(path, name+'.o')
        try: test()
        except ValueError: rejected.append(name)
        else: raise ValueError('Incorrect model accepted: '+name)
    report = dict(schema_version=1, exact_match_credit=False, source_sha256=digest(source.read_bytes()),
        original_sha256=digest(elf.data), recovery_function=dict(address='0x98e420', size=396,
        sha256=digest(elf.at(0x98e420, 396)), cases=recovery_count),
        revival_region=dict(containing_function='0x98d710', size=3324,
        sha256=digest(elf.at(0x98d710, 3324)), entry='0x98dd58', stops=['0x98e104', '0x98db20'], cases=scan_count),
        concrete_exclusion_query=dict(address='0x96e4a0', cases=7),
        negative_controls_rejected=rejected,
        limits=['Region is not a whole-function reconstruction; live registers injected.',
                'Stable catalog, identities, query results; at most two catalog entries in fixtures.',
                'Event11 callback may change counter only; event19/20 effects and transition helper stubbed.',
                'Resolver repairs missing handles/pointees; object initialization stubbed.',
                'Recovery handler uses warm zero-vector guard and stubbed external virtual calls.',
                'No original state, group, counter or restored-field names proven.'])
    out = ROOT/'progress/player_revival_behavior.json'
    out.write_text(json.dumps(report, indent=2)+'\n')
    print(json.dumps(report, indent=2))


if __name__ == '__main__': main()
