"""Bounded ARM64 comparison of original jump decisions and a readable WIP model.

Base-action updates, virtual queries, and completion dispatch are deterministic
stubs. This establishes neither whole-game behavior nor byte-matching credit.
Requires the optional Unicorn Python package and a local original ELF.
"""
import argparse
import itertools
import json
from pathlib import Path
import struct

from discover_engine_families import compile_family
from elf import Elf, require
from project import ROOT, digest, load


def main():
    from unicorn import Uc, UC_ARCH_ARM64, UC_MODE_ARM, UC_HOOK_CODE
    from unicorn import arm64_const as arm
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--original', type=Path, required=True)
    p.add_argument('--clang8', type=Path, required=True)
    p.add_argument('--build-dir', type=Path, required=True)
    args = p.parse_args()
    elf = Elf(args.original)
    require(digest(elf.data) == load(ROOT/'config/target.json')['sha256'], 'Wrong original')
    require(elf.unwind_ranges()[0x8e8ab0] == 788, 'Wrong original extent')
    folder = args.build_dir.resolve()
    folder.mkdir(parents=True, exist_ok=True)
    source = ROOT/'src/wip/ActorJumpPhaseModel.cpp'
    flags = ['-target', 'aarch64-none-elf', '-std=c++11', '-O2', '-mcpu=cortex-a57',
             '-fno-pic', '-fomit-frame-pointer', '-fno-jump-tables',
             '-fno-vectorize', '-fno-slp-vectorize']
    def compile_model(path, name):
        obj = compile_family(args.clang8, path, folder/name, dict(flags=flags))
        code, rels = obj.method('EvaluateJumpPhase')
        require(not rels, 'Model unexpectedly needs external linking')
        return code
    model = compile_model(source, 'model.o')
    negative_source = folder/'negative.cpp'
    negative_source.write_text(source.read_text().replace('output->nextState = 3;',
                                                         'output->nextState = 7;'))
    negative = compile_model(negative_source, 'negative.o')
    nan_source = folder/'negative_nan.cpp'
    nan_source.write_text(source.read_text().replace('input->verticalMotion < 0.0f',
                                                    '!(input->verticalMotion >= 0.0f)'))
    negative_nan = compile_model(nan_source, 'negative_nan.o')
    fixture = folder/'return.cpp'
    fixture.write_text('extern "C" void FixtureReturn() {}\n')
    obj = compile_family(args.clang8, fixture, folder/'return.o', dict(flags=flags))
    ret, rels = obj.method('FixtureReturn')
    require(not rels, 'Unexpected fixture relocation')

    mu = Uc(UC_ARCH_ARM64, UC_MODE_ARM)
    allocated = [s for s in elf.sections if s[2] & 2 and s[5]]
    mu.mem_map(0, (max(s[3]+s[5] for s in allocated)+4095) & ~4095)
    for s in allocated:
        if s[1] != 8:
            mu.mem_write(s[3], elf.section_bytes(s))
    for address, value in elf.relative_relocations().items():
        mu.mem_write(address, struct.pack('<Q', value))
    MODEL, STUB, DATA, STOP = 0x3000000, 0x4000000, 0x5000000, 0x6000000
    for address, size in [(MODEL, 0x2000), (STUB, 0x1000), (DATA, 0x20000), (STOP, 0x1000)]:
        mu.mem_map(address, size)
    ACTION, HANDLE, ACTOR, VTABLE = DATA, DATA+0x1000, DATA+0x2000, DATA+0x3000
    CONTEXT, CALLBACK, INPUT, OUTPUT = DATA+0x4000, DATA+0x5000, DATA+0x6000, DATA+0x7000
    READY, GROUNDED, CHANGE, CALLBACK_FN = STUB, STUB+0x10, STUB+0x20, STUB+0x30
    BASE, DISPATCH = 0x8e17a0, 0xbf6e80
    for address in [READY, GROUNDED, CHANGE, CALLBACK_FN, BASE, DISPATCH, STOP]:
        mu.mem_write(address, ret)
    def put(address, value):
        mu.mem_write(address, struct.pack('<Q', value))
    def reg(index):
        return getattr(arm, 'UC_ARM64_REG_X'+str(index))
    def get_arg(index):
        return mu.reg_read(reg(index))
    put(ACTION+0xa0, HANDLE); put(HANDLE+8, ACTOR); put(ACTOR, VTABLE)
    put(VTABLE+0xd8, READY); put(VTABLE+0x1a0, GROUNDED); put(VTABLE+0xb8, CHANGE)
    put(ACTION+0x80, CALLBACK); put(CALLBACK+8, CALLBACK_FN)
    put(CONTEXT+0x40, DATA+0x8000)
    # Preinitialize both static gates; cold guard construction is out of scope.
    mu.mem_write(0x191f8b8, b'\x01')
    mu.mem_write(0x191f8c0, bytes(12))
    put(0x1935070, DATA+0x9000)
    put(0x1935068, DATA+0xa000)
    trace = []
    current = {}
    def hook(uc, address, size, data):
        if address == STOP:
            uc.emu_stop(); return
        if address not in [READY, GROUNDED, CHANGE, CALLBACK_FN, BASE, DISPATCH]:
            return
        result = None
        if address == BASE:
            require(get_arg(0) == ACTION, 'Wrong base-action receiver')
            trace.append(('base',))
        elif address in (READY, GROUNDED):
            require(get_arg(0) == ACTOR, 'Wrong query receiver')
            key = 'ready' if address == READY else 'grounded'
            result = current[key]
            trace.append((key,))
        elif address == CHANGE:
            require(get_arg(0) == ACTOR, 'Wrong transition receiver')
            trace.append(('change', get_arg(1), get_arg(2), get_arg(3)))
        elif address == CALLBACK_FN:
            require(get_arg(0) == CALLBACK, 'Wrong callback receiver')
            mu.mem_write(get_arg(1), struct.pack('<Q', 0x123456789abcdef0))
            trace.append(('callback',))
        else:
            require(get_arg(0) == DATA+0xa000 and get_arg(1) == DATA+0x8000,
                    'Wrong completion destination')
            require(get_arg(2) == 0x3a6530b8, 'Wrong completion event')
            require(bytes(mu.mem_read(get_arg(3), 8)) == struct.pack('<Q', 0x123456789abcdef0),
                    'Wrong callback payload')
            trace.append(('dispatch',))
        # Caller-saved registers cannot accidentally preserve useful inputs.
        for i in range(19):
            uc.reg_write(reg(i), 0xd000000000000000+i)
        for i in range(8):
            uc.reg_write(getattr(arm, 'UC_ARM64_REG_Q'+str(i)), 0xaaaaaaaaaaaaaaaa)
        if result is not None:
            uc.reg_write(reg(0), result)
        uc.reg_write(arm.UC_ARM64_REG_PC, uc.reg_read(reg(30)))
    mu.hook_add(UC_HOOK_CODE, hook)
    def execute(entry, first, second=0):
        sp = DATA+0x1f000
        mu.mem_write(sp-0x1000, b'\xa5'*0x1000)
        preserved = {i: 0xb000000000000000+i for i in range(19, 30)}
        for i, value in preserved.items():
            mu.reg_write(reg(i), value)
        mu.reg_write(reg(0), first); mu.reg_write(reg(1), second)
        mu.reg_write(arm.UC_ARM64_REG_SP, sp); mu.reg_write(reg(30), STOP)
        mu.emu_start(entry, STOP+4, count=10000)
        require(mu.reg_read(arm.UC_ARM64_REG_PC) == STOP, 'Execution did not return')
        require(mu.reg_read(arm.UC_ARM64_REG_SP) == sp, 'Stack not restored')
        require(all(mu.reg_read(reg(i)) == value for i, value in preserved.items()),
                'Callee-saved register changed')
    def compare(state, vertical, active, ready, grounded, context=True, gate=False,
                context_flags=2, code=model):
        current.update(ready=ready, grounded=grounded)
        mu.mem_write(ACTOR+0x1a0, struct.pack('<I', state))
        motion = struct.pack('<ffffff', 11, 12, vertical, 21, 22, 23)
        mu.mem_write(ACTOR+0x1a4, motion)
        mu.mem_write(ACTION+0x98, bytes([active]))
        put(ACTION+0x88, CONTEXT if context else 0)
        mu.mem_write(CONTEXT+0x38, bytes([context_flags]))
        mu.mem_write(DATA+0x9000, struct.pack('<I', gate))
        trace.clear(); execute(0x8e8ab0, ACTION)
        observed = list(trace)
        reset = bytes(mu.mem_read(ACTOR+0x1a4, 24)) == bytes(24)
        if not reset:
            require(bytes(mu.mem_read(ACTOR+0x1a4, 24)) == motion, 'Unexpected motion change')
        mu.mem_write(MODEL, code)
        mu.ctl_remove_cache(MODEL, MODEL+0x2000)
        mu.mem_write(INPUT, struct.pack('<IIIIf', state, active, ready, grounded, vertical))
        mu.mem_write(OUTPUT, b'\xa5'*16)
        execute(MODEL, INPUT, OUTPUT)
        next_state, flag, expected_reset, complete = struct.unpack('<iIII', mu.mem_read(OUTPUT, 16))
        changes = [event for event in observed if event[0] == 'change']
        expected_changes = [] if next_state == -1 else [('change', next_state, flag, 0)]
        completion_allowed = bool(complete and ((context and context_flags & 2) or gate))
        require(changes == expected_changes and reset == bool(expected_reset),
                'State/motion disagreement: '+repr((state, vertical, active, ready, grounded, observed)))
        require((('callback',) in observed) == completion_allowed, 'Callback disagreement')
        require((('dispatch',) in observed) == bool(completion_allowed and context), 'Dispatch disagreement')
        require(observed[0] == ('base',), 'Missing base update')
    count = 0
    for state, vertical, ready, grounded in itertools.product(range(256), [-1.0, 0.0, 1.0, float('nan')], [0, 1], [0, 1]):
        compare(state, vertical, 1, ready, grounded); count += 1
    for state, active, context, gate, context_flags in itertools.product(
            [2, 3, 4, 5, 6, 0x39, 0x49, 0xffffffff], [0, 1], [False, True], [False, True], [0, 2]):
        compare(state, -1.0, active, 1, 1, context, gate, context_flags); count += 1
    try:
        compare(2, 1.0, 1, 1, 0, code=negative)
    except ValueError:
        negative_rejected = True
    else:
        raise ValueError('Wrong phase transition was not rejected')
    try:
        compare(3, float('nan'), 1, 0, 0, code=negative_nan)
    except ValueError:
        nan_negative_rejected = True
    else:
        raise ValueError('Wrong NaN comparison was not rejected')
    report = dict(original_sha256=digest(elf.data), original_function='0x8e8ab0',
                  original_size=788, source=source.relative_to(ROOT).as_posix(),
                  source_sha256=digest(source.read_bytes()), model_size=len(model),
                  passed_cases=count, negative_control_rejected=negative_rejected,
                  nan_negative_control_rejected=nan_negative_rejected,
                  scope='phase decisions with stubbed base update and virtual queries; warm static gates',
                  exact_match_credit=False)
    (folder/'jump_phase_behavior.json').write_text(json.dumps(report, indent=2)+'\n')
    print(json.dumps(report, indent=2))


if __name__ == '__main__':
    main()
