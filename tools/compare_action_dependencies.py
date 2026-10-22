"""Bounded original/model ARM64 comparisons; does not award matching credit."""
import argparse
import itertools
import json
import math
from pathlib import Path
import struct

from discover_engine_families import compile_family
from elf import Elf, relocate, require
from project import ROOT, digest, load


def main():
    from unicorn import Uc, UC_ARCH_ARM64, UC_MODE_ARM, UC_HOOK_CODE
    from unicorn import arm64_const as arm
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--original', required=True, type=Path)
    parser.add_argument('--clang8', required=True, type=Path)
    parser.add_argument('--build-dir', required=True, type=Path)
    args = parser.parse_args()
    elf = Elf(args.original)
    require(digest(elf.data) == load(ROOT/'config/target.json')['sha256'], 'Wrong original')
    extents = {0x8e1690: 272, 0x8e17a0: 400, 0x96c780: 300,
               0x9415b0: 264, 0x8e8dd0: 1048, 0x93fc90: 92, 0x812930: 200}
    spans = elf.unwind_ranges()
    require(all(spans.get(a) == n for a, n in extents.items()), 'Wrong original extents')
    folder = args.build_dir.resolve()
    folder.mkdir(parents=True, exist_ok=True)
    source = ROOT/'src/wip/ActorActionDependencies.cpp'
    flags = ['-target', 'aarch64-none-elf', '-std=c++11', '-O2', '-mcpu=cortex-a57',
             '-fno-pic', '-fomit-frame-pointer', '-fno-math-errno', '-ffp-contract=off',
             '-fno-vectorize', '-fno-slp-vectorize', '-fno-jump-tables']
    mu = Uc(UC_ARCH_ARM64, UC_MODE_ARM)
    allocated = [s for s in elf.sections if s[2] & 2 and s[5]]
    mu.mem_map(0, (max(s[3]+s[5] for s in allocated)+4095) & ~4095)
    for s in allocated:
        if s[1] != 8:
            mu.mem_write(s[3], elf.section_bytes(s))
    for address, value in elf.relative_relocations().items():
        mu.mem_write(address, struct.pack('<Q', value))
    MODEL, STUB, DATA, STOP = 0x3000000, 0x4000000, 0x5000000, 0x6000000
    for a, n in [(MODEL, 0x100000), (STUB, 0x1000), (DATA, 0x20000), (STOP, 0x1000)]:
        mu.mem_map(a, n)

    def install(path, name):
        obj = compile_family(args.clang8, path, folder/name, dict(flags=flags))
        addresses, contents = {}, {}
        cursor = MODEL
        for index, s in enumerate(obj.sections):
            if s[2] & 2 and s[5]:
                require(s[1] == 1, 'Unexpected model storage')
                cursor = (cursor+4095) & ~4095
                addresses[index] = cursor
                contents[index] = bytearray(obj.section_bytes(s))
                cursor += s[5]
        require(cursor < MODEL+0x100000, 'Model too large')
        symbols, names = obj.symbols()
        for s in obj.sections:
            if s[1] == 4 and s[7] in addresses:
                for off in range(s[4], s[4]+s[5], s[9]):
                    position, info, addend = struct.unpack_from('<QQq', obj.data, off)
                    symbol = symbols[info >> 32]
                    require(symbol[3] in addresses, 'External model dependency')
                    relocate(contents[s[7]], position, info & 0xffffffff,
                             addresses[symbol[3]]+symbol[4]+addend, addresses[s[7]])
        for index, content in contents.items():
            mu.mem_write(addresses[index], bytes(content))
        mu.ctl_remove_cache(MODEL, MODEL+0x100000)
        return {name: addresses[s[3]]+s[4] for s, name in zip(symbols, names)
                if s[1] & 15 == 2 and s[3] in addresses}

    entries = install(source, 'dependencies.o')
    fixture = folder/'return.cpp'
    fixture.write_text('extern "C" void FixtureReturn() {}\n')
    ret, rels = compile_family(args.clang8, fixture, folder/'return.o', dict(flags=flags)).method('FixtureReturn')
    require(not rels, 'Unexpected return dependency')
    A, H, P, V, R, RH, RV = [DATA+i*0x1000 for i in range(7)]
    C, CB, O, OH, T, TH, G, GH = [DATA+i*0x1000 for i in range(7, 15)]
    IN, OUT = DATA+0xf000, DATA+0x10000
    TYPE, PRIMARY, FALLBACK, ASSIGN = STUB, STUB+16, STUB+32, 0x812930
    CALLBACK, DISPATCH = STUB+48, 0xbf6e80
    VARIANT, APPLY, FORWARD, DETACH = STUB+64, STUB+80, STUB+96, STUB+112
    BASE, POSITION, FLIP, SQRT = 0x8e1690, 0x85fd70, STUB+128, 0xfa4a20
    RESOLVE, INIT, READY = 0x67edd0, STUB+144, STUB+160
    handlers = {}
    for address in [TYPE, PRIMARY, FALLBACK, ASSIGN, CALLBACK, DISPATCH, VARIANT,
                    APPLY, FORWARD, DETACH, POSITION, FLIP, SQRT, RESOLVE, INIT, READY, STOP]:
        mu.mem_write(address, ret)

    def x(i): return getattr(arm, 'UC_ARM64_REG_X'+str(i))
    def arg(i): return mu.reg_read(x(i))
    def put(a, v): mu.mem_write(a, struct.pack('<Q', v))
    def read(a, fmt): return struct.unpack(fmt, mu.mem_read(a, struct.calcsize(fmt)))
    def write(a, fmt, *values): mu.mem_write(a, struct.pack(fmt, *values))
    def hook(uc, address, size, data):
        if address == STOP:
            uc.emu_stop()
        elif address in handlers:
            result = handlers[address]()
            for i in range(19):
                uc.reg_write(x(i), 0xd000000000000000+i)
            for i in list(range(8))+list(range(16, 32)):
                uc.reg_write(getattr(arm, 'UC_ARM64_REG_Q'+str(i)), 0xaaaaaaaaaaaaaaaa)
            for reg, value in (result or {}).items():
                uc.reg_write(reg, value)
            uc.reg_write(arm.UC_ARM64_REG_PC, uc.reg_read(x(30)))
    mu.hook_add(UC_HOOK_CODE, hook)

    def execute(entry, *values):
        sp = DATA+0x1f000
        mu.mem_write(sp-0x2000, b'\xa5'*0x2000)
        saved = {x(i): 0xb000000000000000+i for i in range(19, 30)}
        saved.update({getattr(arm, 'UC_ARM64_REG_D'+str(i)): 0x1234000000000000+i for i in range(8, 16)})
        for reg, value in saved.items(): mu.reg_write(reg, value)
        for i, value in enumerate(values): mu.reg_write(x(i), value)
        mu.reg_write(arm.UC_ARM64_REG_SP, sp)
        mu.reg_write(x(30), STOP)
        mu.emu_start(entry, STOP+4, count=20000)
        require(mu.reg_read(arm.UC_ARM64_REG_PC) == STOP, 'Did not return')
        require(mu.reg_read(arm.UC_ARM64_REG_SP) == sp, 'Unbalanced stack')
        require(all(mu.reg_read(reg) == value for reg, value in saved.items()), 'Callee-saved register changed')
        return arg(0) & 0xffffffff

    def reset():
        mu.mem_write(DATA, bytes(0x18000))
        handlers.clear()
        put(A+0xa0, H); put(H+8, P); put(P, V)
        put(P+0x238, RH); put(RH+8, R); put(R, RV)
        put(A+0x88, C); put(A+0x80, CB); put(CB+8, CALLBACK)
        put(C+0x40, DATA+0x17000)
        put(0x1935070, DATA+0x16000); put(0x1935068, DATA+0x15000)
        put(P+0x78, OH); put(OH+8, O)
        put(O+0x60, TH); put(TH+8, T)
        put(O+0x58, GH); put(GH+8, G)
        for slot, fn in [(0x60, TYPE), (0x750, PRIMARY), (0x790, FALLBACK),
                         (0xb0, APPLY), (0x120, FORWARD), (0xf8, DETACH), (0xf0, FLIP)]:
            put(V+slot, fn)
        put(RV+0x188, VARIANT); put(RV+0xb0, APPLY)

    counts = dict(lifecycle=0, remapping=0, landing=0, jump_setup=0, readiness=0, state_transition=0)
    def lifecycle(active, actor_mode, type_result, setup, current, primary, fallback,
                  context, flags_value, gate):
        reset()
        if actor_mode == 0: put(A+0xa0, 0)
        if actor_mode == 1: put(H+8, 0)
        write(P+0x210, '<QQ', *current)
        write(A+0x98, '<BB', active, 0x7f); write(A+0xa8, '<B', setup)
        put(A+0x88, C if context else 0)
        write(C+0x38, '<B', flags_value); write(DATA+0x16000, '<I', gate)
        trace = []
        def typed():
            require(arg(0) == P and arg(1) == 0x2f2bf4aa, 'Wrong type query')
            trace.append('type'); return {x(0): type_result}
        def identity(label, pair):
            require(arg(0) == P, 'Wrong identity receiver')
            trace.append(label); return {x(0): pair[0], x(1): pair[1]}
        def assign():
            require((arg(0), arg(1), arg(2)) == (P+0x208, *fallback), 'Wrong assignment')
            trace.append('assign')
        def callback():
            require(arg(0) == CB, 'Wrong callback receiver')
            put(arg(1), 0x123456789abcdef0); trace.append('callback')
        def dispatch():
            require((arg(0), arg(1), arg(2)) == (DATA+0x15000, DATA+0x17000, 0x3a6530b8), 'Wrong event')
            require(read(arg(3), '<Q')[0] == 0x123456789abcdef0, 'Wrong payload')
            trace.append('dispatch')
        handlers.update({TYPE: typed, PRIMARY: lambda: identity('primary', primary),
                         FALLBACK: lambda: identity('fallback', fallback), ASSIGN: assign,
                         CALLBACK: callback, DISPATCH: dispatch})
        execute(0x8e1690, A)
        require(read(A+0x98, '<BB') == (1, 0), 'Setup flags differ')
        setup_trace = trace[:]
        trace.clear(); write(A+0x98, '<B', active)
        execute(0x8e17a0, A)
        write(IN, '<IIIIQQQQQQIII', active, actor_mode == 2, type_result, setup,
              *current, *primary, *fallback, context, flags_value, gate)
        execute(entries['EvaluateActionLifecycle'], IN, OUT)
        assignment, complete = read(OUT, '<II')
        require(('assign' in setup_trace) == bool(assignment), 'Setup decision mismatch')
        if assignment: require(setup_trace == ['type', 'primary', 'fallback', 'fallback', 'assign'], 'Setup order differs')
        require(('callback' in trace) == bool(complete), 'Completion decision mismatch')
        require(('dispatch' in trace) == bool(complete and context), 'Dispatch decision mismatch')

    pairs = [(0, 0), (0, 2), (0, 1), (16, 0), (16, 2), (16, 1), (32, 0), (16, 0x100000000)]
    for current, primary, fallback in itertools.product(pairs, repeat=3):
        lifecycle(1, 2, 1, 1, current, primary, fallback, 1, 2, 0)
        counts['lifecycle'] += 1
    for active, actor_mode, type_result, setup, context, flags_value, gate in itertools.product(
            [0, 1], range(3), [0, 1, 2, 3], [0, 1], [0, 1], [0, 1, 2, 3], [0, 1]):
        lifecycle(active, actor_mode, type_result, setup, (16, 0), (16, 0), (32, 0), context, flags_value, gate)
        counts['lifecycle'] += 1

    def remapping(request, related_mode, variant, forward, fa, fb):
        reset()
        if related_mode == 0: put(P+0x238, 0)
        if related_mode == 1: put(RH+8, 0)
        trace = []
        def query(receiver, label, value):
            require(arg(0) == receiver, 'Wrong remap query receiver')
            trace.append((label,)); return {x(0): value}
        def apply():
            require(mu.reg_read(arm.UC_ARM64_REG_S0) == 0x3f800000, 'Wrong animation rate')
            trace.append(('apply', arg(0), arg(1), arg(2), arg(3)))
        handlers.update({VARIANT: lambda: query(R, 'variant', variant),
                         FORWARD: lambda: query(P, 'forward', forward),
                         DETACH: lambda: query(P, 'fallback', 0), APPLY: apply})
        execute(0x96c780, P, request, fa, fb)
        write(IN, '<6I', request, related_mode == 2, variant, forward, fa, fb)
        execute(entries['EvaluatePlayerRequest'], IN, OUT)
        own, related, send, detach, flag_a, flag_b = read(OUT, '<6I')
        expected = []
        if related_mode == 2 and request < 8: expected.append(('variant',))
        if detach: expected.append(('fallback',))
        expected.append(('apply', P, own, flag_a, flag_b))
        if related_mode == 2 and request < 8: expected.append(('forward',))
        if send: expected.append(('apply', R, related, flag_a, flag_b))
        require(trace == expected, 'Remap disagreement: '+repr((request, trace, expected)))
    for case in itertools.product([*range(10), 53, 69, 0x7fffffff], range(3), [0, 1, 2], [0, 1, 2, 3], [0, 3], [0, 2, 3]):
        remapping(*case); counts['remapping'] += 1

    def landing(height, z, motion, cache_mode=0):
        reset()
        write(P+0x144, '<i', height); write(P+0x1ac, '<f', motion); write(T+0x84, '<f', z)
        trace = []
        # Exercise absent handles and absent pointees with deterministic resolution.
        if cache_mode == 1: put(P+0x78, 0); put(O+0x60, 0)
        if cache_mode == 2: put(OH+8, 0); put(TH+8, 0)
        put(O, RV); put(T, RV); put(RV+0x10, INIT)
        def resolve():
            typ, slot = arg(1), arg(2)
            require((typ, slot) in [(0x6492d61d, P+0x78), (0x022fe74a, O+0x60)], 'Wrong landing component')
            handle, obj = (OH, O) if slot == P+0x78 else (TH, T)
            put(slot, handle); put(handle+8, obj); trace.append(('resolve', typ))
        def init():
            require(arg(0) in (O, T), 'Wrong initialization receiver'); trace.append(('init', arg(0)))
        handlers.update({RESOLVE: resolve, INIT: init})
        result = execute(0x9415b0, P)
        write(IN, '<iff', height, z, motion)
        expected = execute(entries['EvaluateLanding'], IN)
        require(result == expected, 'Landing mismatch: '+repr((height, z, motion, result, expected)))
        expected_trace = [] if cache_mode == 0 else [('resolve', 0x6492d61d), ('init', O), ('resolve', 0x022fe74a), ('init', T)]
        require(trace == expected_trace, 'Landing resolution order differs')
    for case in itertools.product([-2147483648, -2, -1, 0, 1, 2, 2147483647],
            [-math.inf, -2147483648.0, -2.9, -0.9, 0, 0.9, 2.9, 2147483648.0, math.inf, math.nan],
            [-math.inf, -1, -1e-6, -0.0, 0.0, 1e-7, 1e-6, 1.000001e-6, 1, math.inf, math.nan], range(3)):
        landing(*case); counts['landing'] += 1

    def jump_setup(absolute, force_facing, auto_facing, facing, position, start, target, height, gravity):
        reset()
        trace = []
        write(A+0xab, '<BBB', absolute, force_facing, auto_facing)
        write(A+0xb0, '<fff', height, 7.25, gravity)
        write(A+0xbc, '<ffffff', *start, *target)
        write(A+0xd4, '<fff', 123, 456, 789)
        write(T+0x7c, '<fff', *position); write(G+0x79, '<B', facing)
        put(V+0xb8, APPLY)
        def base():
            require(arg(0) == A, 'Wrong jump base receiver'); trace.append('base')
        def position_set():
            require(arg(0) == O, 'Wrong position receiver')
            values = read(arg(1), '<fff'); trace.append(('position', values))
            write(T+0x7c, '<fff', *values)
        def apply():
            require((arg(0), arg(1), arg(2), arg(3)) == (P, 2, 1, 0), 'Wrong jump request')
            trace.append('request')
        def flip():
            require(arg(0) == P, 'Wrong facing receiver')
            write(G+0x79, '<B', not read(G+0x79, '<B')[0]); trace.append('flip')
        def sqrt_call():
            bits = mu.reg_read(arm.UC_ARM64_REG_S0)
            value = struct.unpack('<f', struct.pack('<I', bits))[0]
            result = math.sqrt(value) if value >= 0 else math.nan
            return {arm.UC_ARM64_REG_S0: struct.unpack('<I', struct.pack('<f', result))[0]}
        handlers.update({BASE: base, POSITION: position_set, APPLY: apply, FLIP: flip, SQRT: sqrt_call})
        execute(0x8e8dd0, A)
        observed = (*read(T+0x7c, '<fff'), read(A+0xe0, '<f')[0],
                    *read(P+0x1a4, '<fff'), read(P+0x1c4, '<f')[0], read(P+0x1b8, '<f')[0])
        write(IN, '<12fI', *position, *start, *target, height, 7.25, gravity, absolute)
        execute(entries['EvaluateJumpSetup'], IN, OUT)
        expected = read(OUT, '<9f')
        require(all((math.isnan(a) and math.isnan(b)) or struct.pack('<f', a) == struct.pack('<f', b)
                    for a, b in zip(observed, expected)), 'Jump arithmetic mismatch: '+repr((observed, expected)))
        require(trace[:3] == ['base', ('position', observed[:3]), 'request'], 'Jump setup order mismatch')
        current_facing, flip_count = bool(facing), 0
        if auto_facing and ((observed[0] <= target[0]) != (not current_facing)):
            current_facing = not current_facing; flip_count += 1
        if force_facing and not current_facing: flip_count += 1; current_facing = True
        require(trace[3:] == ['flip']*flip_count and bool(read(G+0x79, '<B')[0]) == current_facing, 'Facing behavior differs')
        require(read(A+0xd4, '<fff') == ((123, 456, 789) if absolute else position), 'Stored initial position differs')
    for absolute, force_facing, auto_facing, facing, height, gravity, target_x in itertools.product(
            [0, 1], [0, 1], [0, 1], [0, 1], [0, 1, 12.5, -1], [-0.25, 0.25, 0.0], [-20, 13, 80]):
        jump_setup(absolute, force_facing, auto_facing, facing, (10, -20, 30), (3, 4, -5),
                   (target_x, 40, 900), height, gravity)
        counts['jump_setup'] += 1

    # The readiness wrapper forwards the component's return value, with no interpretation.
    for cache_mode, result in itertools.product(range(3), [0, 1, 2, 3, 0xffffffff]):
        reset(); trace = []
        put(P+0x70, 0 if cache_mode == 1 else OH); put(OH+8, 0 if cache_mode == 2 else O)
        put(O, RV); put(RV+0x10, INIT); put(RV+0xa0, READY)
        def resolve_ready():
            require((arg(1), arg(2)) == (0x29fbe438, P+0x70), 'Wrong readiness component')
            put(P+0x70, OH); put(OH+8, O); trace.append('resolve')
        def init_ready():
            require(arg(0) == O, 'Wrong readiness initializer'); trace.append('init')
        def query_ready():
            require(arg(0) == O, 'Wrong readiness receiver'); trace.append('query')
            return {x(0): result}
        handlers.update({RESOLVE: resolve_ready, INIT: init_ready, READY: query_ready})
        require(execute(0x93fc90, P) == result, 'Readiness forwarding mismatch')
        require(trace == (['query'] if cache_mode == 0 else ['resolve', 'init', 'query']), 'Readiness call order differs')
        counts['readiness'] += 1

    # Execute the full shared state transition helper, including ABI this-adjustment.
    mu.mem_write(ASSIGN, elf.at(ASSIGN, 200))
    mu.ctl_remove_cache(ASSIGN, ASSIGN+200)
    OLD_STATE, NEW_STATE = STUB+176, STUB+192
    for address in [OLD_STATE, NEW_STATE]: mu.mem_write(address, ret)
    def state_transition(status, old_virtual, new_virtual, old_adjust, new_adjust):
        reset(); trace = []
        machine = A+0x208
        old_pair = (0x748 if old_virtual else OLD_STATE, (old_adjust*2+old_virtual) & 0xffffffffffffffff)
        new_pair = (0x788 if new_virtual else NEW_STATE, (new_adjust*2+new_virtual) & 0xffffffffffffffff)
        put(machine, P); write(machine+8, '<QQ', *old_pair); write(machine+0x28, '<i', status)
        for adjust in [old_adjust, new_adjust]: put(P+adjust, V)
        put(V+0x748, OLD_STATE); put(V+0x788, NEW_STATE)
        def event(which, adjust):
            require(arg(0) == P+adjust, 'Wrong adjusted state receiver')
            require(read(machine+8, '<QQ') == (old_pair if which == 0 else new_pair), 'State stored at wrong time')
            if which: require(read(machine+0x18, '<QQ') == old_pair, 'Previous state not preserved')
            trace.append((which, arg(1)))
        handlers.update({OLD_STATE: lambda: event(0, old_adjust), NEW_STATE: lambda: event(1, new_adjust)})
        execute(ASSIGN, machine, *new_pair)
        write(OUT, '<9I', *([0]*9))
        execute(entries['EvaluateStateTransition'], status & 0xffffffff, OUT)
        values = read(OUT, '<9I')
        expected = [(values[1+i], values[5+i]) for i in range(values[0])]
        require(trace == expected, 'State event sequence mismatch')
        require(read(machine+8, '<QQQQ') == (*new_pair, *old_pair), 'State pair write mismatch')
    for case in itertools.product([-1, 0, 1, 100], [0, 1], [0, 1], [-16, 0, 24], [-16, 0, 24]):
        state_transition(*case); counts['state_transition'] += 1

    controls = [
        ('identity', '(a.second | b.second) & 1', '(a.second | b.second) & 2',
         lambda: lifecycle(1, 2, 1, 1, (0, 0), (0, 2), (16, 0), 1, 2, 0)),
        ('remapping', '{44, 43, 53,', '{44, 43, 54,', lambda: remapping(2, 2, 0, 1, 1, 0)),
        ('landing', 'in->verticalMotion < 0.0f', 'in->verticalMotion > 0.0f', lambda: landing(0, 0, -1)),
        ('jump_time', 'in->gravity * 60.0f', 'in->gravity * 30.0f',
         lambda: jump_setup(0, 0, 0, 0, (10, -20, 30), (3, 4, -5), (80, 40, 900), 12.5, -0.25)),
        ('state_event', 'out->event[i++] = 10002;', 'out->event[i++] = 10001;',
         lambda: state_transition(0, 1, 1, -16, 24)),
    ]
    rejected = []
    for name, old, new, check in controls:
        require(source.read_text().count(old) == 1, 'Invalid negative mutation')
        path = folder/(name+'.cpp'); path.write_text(source.read_text().replace(old, new))
        entries = install(path, name+'.o')
        try: check()
        except ValueError: rejected.append(name)
        else: raise ValueError('Wrong source accepted: '+name)
    report = dict(original_sha256=digest(elf.data), source=source.relative_to(ROOT).as_posix(),
                  source_sha256=digest(source.read_bytes()), passed_cases=counts,
                  negative_controls_rejected=rejected, exact_credit=0,
                  original_functions=[dict(address=hex(a), size=n, sha256=digest(elf.at(a, n))) for a, n in extents.items()],
                  limitations=['Bounded deterministic stubs; no full game execution',
                               'Identity results stable; callbacks do not replace actors or contexts',
                               'Warm global completion gate; callback and event target present',
                               'Remapping IDs restricted to nonnegative signed 32-bit values',
                               'Jump component handles populated; base setup and position application stubbed',
                               'sqrtf fallback modeled numerically; NaN payloads and errno not compared',
                               'State event handlers do not mutate the status or reenter the state machine',
                               'Readiness component class identity remains unresolved'])
    (ROOT/'progress/action_dependencies_behavior.json').write_text(json.dumps(report, indent=2)+'\n')
    print(json.dumps(report, indent=2))


if __name__ == '__main__':
    main()
