"""Bounded full-function and interior-region evidence; never matching credit."""
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
    b = Arm64Behavior(elf, args.clang8, args.build_dir.resolve())
    source = ROOT/'src/wip/PlayerConnections.cpp'
    entries = b.install(source, 'connections.o')
    A, H, PLAYER, V, COMPONENT, CH, CV, VALUE = [b.DATA+i*0x2000 for i in range(8)]
    IN, OUT, STACK = b.DATA+0x20000, b.DATA+0x21000, b.DATA+0x70000
    TYPE, TRANSITION, QUERY, INIT, GET_VALUE = b.STUB, 0x812930, b.STUB+16, b.STUB+32, b.STUB+48
    PRIMARY, CONTROLLED, DEFAULT = (0x748, 1), (0x788, 1), (0x300, 1)
    trace, boundaries = [], set()
    def stop(mu, address, size, data):
        if address in boundaries: mu.emu_stop()
    b.mu.hook_add(UC_HOOK_CODE, stop)
    def reset():
        b.mu.mem_write(b.DATA, bytes(0x78000)); b.handlers.clear(); boundaries.clear(); trace.clear()
        b.put(A+0xa0, H); b.put(H+8, PLAYER); b.put(PLAYER, V)
        b.put(V+0x60, TYPE)
        for off, address in [(0x750, 0x98f460), (0x790, 0x98fdf0), (0x308, 0x980d70)]: b.put(V+off, address)
        b.mu.reg_write(b.arm.UC_ARM64_REG_SP, STACK)
        b.mu.reg_write(b.x(19), PLAYER); b.mu.reg_write(b.x(28), PLAYER)
    def region(start, ends):
        boundaries.update(ends)
        b.mu.emu_start(start, b.STOP, count=10000)
        pc = b.mu.reg_read(b.arm.UC_ARM64_REG_PC)
        require(pc in ends, 'Region failed to reach a declared boundary')
        boundaries.clear()
        return pc
    def transition(expected):
        require((b.arg(0), b.arg(1), b.arg(2)) == (PLAYER+0x208, *expected), 'Wrong state transition')
        trace.append('transition')
    def same_float(a, c):
        return (math.isnan(a) and math.isnan(c)) or struct.pack('<f', a) == struct.pack('<f', c)

    def recovery(current, actor_mode=2, type_result=1, enabled=1, interior=False):
        reset(); b.write(PLAYER+0x210, '<QQ', *current)
        b.write(A+0x98, '<BB', 77, 88); b.write(A+0xa9, '<B', enabled)
        if actor_mode == 0: b.put(A+0xa0, 0)
        if actor_mode == 1: b.put(H+8, 0)
        def typed():
            require((b.arg(0), b.arg(1)) == (PLAYER, 0x2f2bf4aa), 'Wrong action type query')
            return {b.x(0): type_result}
        b.stub(TYPE, typed); b.stub(TRANSITION, lambda: transition(DEFAULT))
        if interior: region(0x97b3b0, {0x97b464})
        else:
            b.execute(0x8e1580, A)
            require(b.read(A+0x98, '<BB') == (0, 1), 'Exit flags differ')
        b.write(IN, '<6Q3I', *current, *PRIMARY, *CONTROLLED, actor_mode == 2, type_result, enabled)
        expected = b.execute(entries['EvaluatePlayerRecovery' if interior else 'EvaluateActionExit'], IN)
        require(trace == (['transition'] if expected else []), 'Recovery decision differs')

    def timer(remaining, delta, enabled):
        reset(); b.write(PLAYER+0x12e4, '<f', remaining); b.write(PLAYER+0x12ec, '<B', enabled)
        b.write(0x1924d70, '<f', delta)
        b.stub(TRANSITION, lambda: transition(PRIMARY))
        pc = region(0x98d764, {0x98d7a4, 0x98db20})
        observed = b.read(PLAYER+0x12e4, '<f')[0]
        b.write(IN, '<ffI', remaining, delta, enabled)
        b.execute(entries['EvaluateGameOverTimer'], IN, OUT)
        value, requested = b.read(OUT, '<fI')
        require(same_float(observed, value) and (pc == 0x98db20) == bool(requested), 'Game-over timer differs')
        require(trace == (['transition'] if requested else []), 'Game-over dispatch differs')

    def delayed(elapsed, delta, current):
        reset(); target = (0x728, 1)
        b.write(PLAYER+0x1408, '<f', elapsed); b.write(0x1924d70, '<f', delta)
        b.write(PLAYER+0x210, '<QQ', *current)
        # Actual getter selected by the original player's virtual table.
        b.put(V+0x730, elf.relative_relocations()[0x1873c70+0x730])
        b.stub(TRANSITION, lambda: transition(target))
        region(0x97c624, {0x97c6b8})
        observed = b.read(PLAYER+0x1408, '<f')[0]
        b.write(IN, '<ff4Q', elapsed, delta, *current, *target)
        b.execute(entries['EvaluateDelayedTransition'], IN, OUT)
        value, requested = b.read(OUT, '<fI')
        require(same_float(observed, value) and trace == (['transition'] if requested else []), 'Delayed transition differs')

    def gate(bypass, flag111, result):
        reset(); b.write(PLAYER+0x199, '<B', bypass); b.write(PLAYER+0x111, '<B', flag111)
        b.put(PLAYER+0x160, COMPONENT); b.put(COMPONENT, CV); b.put(CV+0x190, QUERY)
        def query():
            require(b.arg(0) == COMPONENT, 'Wrong collision-query receiver'); trace.append('query')
            return {b.x(0): result}
        b.stub(QUERY, query)
        pc = region(0x7b1180, {0x7b11a0, 0x7b1458})
        b.write(IN, '<3I', bypass, flag111, result)
        b.execute(entries['EvaluatePlayfieldGate'], IN, OUT)
        scan, count, alternate = b.read(OUT, '<3I')
        require((pc == 0x7b11a0) == bool(scan) and trace == ['query']*count, 'Playfield gate differs')
        # Bounds selection itself occurs beyond this region and is not credited here.
        require(alternate == (bool(result) if scan else False), 'Model bounds marker differs')

    def animation(flags, cache):
        reset(); b.put(COMPONENT+0x50, CH if cache != 1 else 0); b.put(CH+8, VALUE if cache != 2 else 0)
        b.put(VALUE, CV); b.put(CV+0x10, INIT); b.put(CV+0x80, GET_VALUE)
        b.write(OUT+0xc, '<B', flags)
        def resolve():
            require((b.arg(1), b.arg(2)) == (0x771ba2ee, COMPONENT+0x50), 'Wrong animation dependency')
            b.put(COMPONENT+0x50, CH); b.put(CH+8, VALUE); trace.append('resolve')
        def init():
            require(b.arg(0) == VALUE, 'Wrong animation initializer'); trace.append('init')
        def get_value():
            require(b.arg(0) == VALUE, 'Wrong animation value receiver'); trace.append('value')
            return {b.x(0): OUT}
        b.stub(0x67edd0, resolve); b.stub(INIT, init); b.stub(GET_VALUE, get_value)
        observed = b.execute(0x8cd9f0, COMPONENT)
        expected = b.execute(entries['EvaluateAnimationFlag'], flags)
        require(observed == expected, 'Animation query differs')
        require(trace == (['resolve', 'init', 'value'] if cache else ['value']), 'Animation query trace differs')

    pairs = [PRIMARY, CONTROLLED, DEFAULT, (0, 0), (0, 2), (0, 1), (0x788, 3)]
    counts = dict(action_exit_full=0, player_recovery_region=0, game_over_timer_region=0,
                  delayed_transition_region=0, playfield_gate_region=0, animation_candidate_full=0)
    for case in itertools.product(pairs, range(3), [0, 1, 2, 3], [0, 1, 255]):
        recovery(*case); counts['action_exit_full'] += 1
    for pair in pairs: recovery(pair, interior=True); counts['player_recovery_region'] += 1
    for case in itertools.product([-1, -0.0, 0, 1e-7, 1e-6, 1.00001e-6, 0.01, 1, math.inf, math.nan],
                                  [0, 0.016, 1, math.nan], [0, 1, 255]):
        timer(*case); counts['game_over_timer_region'] += 1
    for case in itertools.product([0, 2.99, 3, 3.01, math.nan, math.inf], [0, 0.02, -1, math.nan],
                                  [(0x728, 1), CONTROLLED, (0, 0)]):
        delayed(*case); counts['delayed_transition_region'] += 1
    for case in itertools.product([0, 1, 255], [0, 1, 255], [0, 1, 2]):
        gate(*case); counts['playfield_gate_region'] += 1
    for case in itertools.product(range(256), range(3)):
        animation(*case); counts['animation_candidate_full'] += 1
    controls = [
        ('exit_state', 'Equal(in->current, in->controlled);', '!Equal(in->current, in->controlled);', lambda: recovery(CONTROLLED)),
        ('timer_boundary', '<= 0.000001f', '< 0.000001f', lambda: timer(1e-6, 0, 1)),
        ('delayed', '> 3.0f', '>= 3.0f', lambda: delayed(3, 0, CONTROLLED)),
        ('collision', 'if (in->bypass) return;', 'if (!in->bypass) return;', lambda: gate(1, 1, 0)),
        ('animation_bit', '(flags >> 2)', '(flags >> 1)', lambda: animation(4, 0)),
    ]
    rejected = []
    for name, old, new, check in controls:
        path = b.folder/(name+'.cpp'); require(old in source.read_text(), 'Invalid negative control')
        path.write_text(source.read_text().replace(old, new)); entries = b.install(path, name+'.o')
        try: check()
        except ValueError: rejected.append(name)
        else: raise ValueError('Wrong source accepted: '+name)
    spans = elf.unwind_ranges()
    report = dict(original_sha256=digest(elf.data), source=source.relative_to(ROOT).as_posix(),
                  source_sha256=digest(source.read_bytes()), passed_cases=counts,
                  negative_controls_rejected=rejected, exact_credit=0,
                  full_functions=[dict(address=hex(a), size=spans[a], sha256=digest(elf.at(a, spans[a])))
                                  for a in [0x8e1580, 0x8cd9f0]],
                  regions=[dict(start=hex(a), stops=[hex(x) for x in ends], containing_function=hex(fn))
                           for a, ends, fn in [(0x97b3b0, [0x97b464], 0x97af50),
                               (0x98d764, [0x98d7a4, 0x98db20], 0x98d710),
                               (0x97c624, [0x97c6b8], 0x97af50),
                               (0x7b1180, [0x7b11a0, 0x7b1458], 0x7af970)]],
                  limitations=['Interior regions start with injected live registers and stop before downstream behavior',
                               'State transition helper and component resolution are deterministic stubs',
                               'Collision mode queries return stable values; no full collision simulation',
                               'AnimationInfoHolderSwitch implementation tested; binding to resolver 0x29fbe438 is unproven',
                               'No complete large player-update reconstruction or new exact matches'])
    (ROOT/'progress/player_connections_behavior.json').write_text(json.dumps(report, indent=2)+'\n')
    print(json.dumps(report, indent=2))


if __name__ == '__main__': main()
