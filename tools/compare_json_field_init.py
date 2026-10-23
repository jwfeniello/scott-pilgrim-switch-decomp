"""Bounded original-vs-candidate JSON view initialization; no exact credit."""
import argparse
import hashlib
import itertools
import json
from pathlib import Path

from arm64_behavior import Arm64Behavior
from discover_engine_families import compile_family
from elf import Elf, relocate
from project import ROOT


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--original', type=Path, required=True)
    parser.add_argument('--clang8', type=Path, required=True)
    parser.add_argument('--build-dir', type=Path, required=True)
    args = parser.parse_args()
    out = args.build_dir.resolve()
    out.mkdir(parents=True, exist_ok=True)
    original = Elf(args.original)
    b = Arm64Behavior(original, args.clang8.resolve(), out)
    D = b.DATA
    destination, view, owner, root, key, heap = [D + n for n in (0, 256, 512, 768, 4096, 16384)]
    trace = []
    allocated = []
    next_block = heap

    def allocate():
        nonlocal next_block
        size = b.arg(0)
        assert 0 < size < 1024
        assert [b.arg(i) for i in range(1, 4)] == [4, 0, 0x40c00000]
        result = next_block
        next_block += 1024
        b.mu.mem_write(result, b'\xa5' * 1024)
        allocated.append((result, size))
        trace.append(('allocate', size))
        return {b.x(0): result}

    def length():
        assert b.arg(0) == key
        n = 0
        while b.read(key + n, '<B')[0]:
            n += 1
            assert n < 1024
        trace.append(('strlen', n))
        return {b.x(0): n}

    def copy():
        dest, src, size = (b.arg(i) for i in range(3))
        assert src == key and 0 < size < 1024
        data = bytes(b.mu.mem_read(src, size))
        trace.append(('memcpy', dest, size))
        b.mu.mem_write(dest, data)
        return {b.x(0): dest}

    for address, callback in ((0x36ea0, allocate), (0xfa3360, length), (0xfa3330, copy)):
        b.stub(address, callback)

    flags = ['-target', 'aarch64-none-elf', '-std=c++11', '-O2', '-mcpu=cortex-a57',
             '-fno-omit-frame-pointer', '-fPIC', '-fno-strict-aliasing',
             '-fno-vectorize', '-fno-slp-vectorize', '-fno-exceptions',
             '-funwind-tables', '-mgeneral-regs-only', '-nostdinc++',
             '-D_GNU_SOURCE', '-U_WIN32', '-U_WIN64', '-D_LIBCPP_HAS_NO_THREADS',
             '-D_LIBCPP_HAS_MUSL_LIBC', '-D__CLANG_MAX_ALIGN_T_DEFINED',
             '-D_LIBCPP_DISABLE_VISIBILITY_ANNOTATIONS']
    for folder in ('vendor/llvm-libcxx-4/include', 'vendor/musl/include', 'vendor/musl/generated'):
        flags += ['-isystem', str(ROOT / folder)]
    known = {'EngineAllocate': 0x36ea0, 'strlen': 0xfa3360, 'memcpy': 0xfa3330,
             'JsonViewTable': 0x17c4368}

    def build(source, name):
        obj = compile_family(args.clang8.resolve(), source, out / (name + '.o'), dict(flags=flags))
        raw, rels = obj.method('InitSdkJsonField')
        code = bytearray(raw)
        at_original = bytearray(raw)
        cells = {}
        for rel in rels:
            target = known[rel['symbol']]
            original_target = target
            if rel['kind'] in (311, 312):
                assert rel['symbol'] == 'JsonViewTable'
                assert original.relative_relocations()[0x18ec808] == target
                original_target = 0x18ec808
                if target not in cells:
                    cells[target] = D + 0x10000 + len(cells) * 8
                    b.put(cells[target], target)
                target = cells[target]
            relocate(code, rel['offset'], rel['kind'], target + rel['addend'], b.MODEL)
            relocate(at_original, rel['offset'], rel['kind'], original_target + rel['addend'], 0x45720)
        b.mu.mem_write(b.MODEL, bytes(code))
        b.mu.ctl_remove_cache(b.MODEL, b.MODEL + 0x10000)
        return bytes(code), bytes(at_original)

    source = ROOT / 'src/wip/JsonFieldInit.cpp'
    code, linked = build(source, 'candidate')
    expected_bytes = original.at(0x45720, 368)
    differing_offsets = [i for i in range(0, max(len(linked), len(expected_bytes)), 4)
                         if linked[i:i + 4] != expected_bytes[i:i + 4]]

    def run(entry, case):
        nonlocal next_block
        size, refs, name_pointer, value_pointer, byte = case
        trace.clear(); allocated.clear(); next_block = heap
        b.mu.mem_write(destination, b'\xa5' * 64)
        b.mu.mem_write(view, b'\xa5' * 24)
        b.put(view + 16, owner)
        b.write(owner, '<QQQ', root if refs else 0, name_pointer, value_pointer)
        b.write(root, '<QII', 0, refs, 0x12345678)
        b.mu.mem_write(key, bytes([byte]) * size + b'\0')
        b.execute(entry, destination, view, key, D + 0x2800)
        return (list(trace), bytes(b.mu.mem_read(destination, 64)),
                bytes(b.mu.mem_read(owner, 24)), bytes(b.mu.mem_read(root, 16)),
                [(p, n, bytes(b.mu.mem_read(p, 1024))) for p, n in allocated])

    cases = list(itertools.product((0, 1, 14, 15, 16, 17, 31, 63, 255),
                                  (0, 1, 3), (0, D + 0x2000), (0, D + 0x2400), (65, 233)))
    for case in cases:
        expected, actual = run(0x45720, case), run(b.MODEL, case)
        if expected != actual:
            (out / 'failure.json').write_text(json.dumps(
                dict(case=case, original=expected, candidate=actual), default=str, indent=2))
            raise AssertionError('Initializer differs; see failure.json')
    print('PASSED', len(cases), flush=True)

    text = source.read_text(encoding='utf-8')
    mutants = [
        ('wrong_reference_increment', 'count + 1', 'count + 2', (17, 1, 0, 0, 65)),
        ('wrong_inline_boundary', 'size > 16', 'size >= 16', (15, 1, 0, 0, 65)),
        ('wrong_allocation_header', 'block[1] = 8', 'block[1] = 12', (17, 1, 0, 0, 65)),
    ]
    rejected = []
    for name, old, new, case in mutants:
        assert old in text, name
        mutant = out / (name + '.cpp')
        mutant.write_text(text.replace(old, new), encoding='utf-8')
        build(mutant, name)
        if run(0x45720, case) == run(b.MODEL, case):
            raise AssertionError('Accepted negative control ' + name)
        rejected.append(name)
    report = dict(cases=len(cases), negative_controls_rejected=rejected, exact_credit=0,
                  source='src/wip/JsonFieldInit.cpp', original_function='0x45720',
                  original_size=368, compiled_size=len(code),
                  diagnostic_different_word_offsets=differing_offsets,
                  source_sha256=hashlib.sha256(source.read_bytes()).hexdigest(),
                  original_sha256=hashlib.sha256(original.data).hexdigest(),
                  compiler_flags=[x.replace(str(ROOT), '${REPO}') for x in flags],
                  limits=['Synthetic allocator, strlen and memcpy; no competing threads or full-game validation.',
                          'Non-null pointers to NUL-terminated names of lengths 0 through 255 at selected boundaries.',
                          'No allocation failure, giant-size overflow or invalid-input cases.',
                          'Behavioral agreement does not award exact byte-match credit.'])
    (ROOT / 'progress/json_field_init_behavior.json').write_text(json.dumps(report, indent=2) + '\n')
    print('REJECTED', rejected, flush=True)


if __name__ == '__main__':
    main()
