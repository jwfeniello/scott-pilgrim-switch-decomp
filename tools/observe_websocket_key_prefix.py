import argparse, json, struct, hashlib
from pathlib import Path
from project import ROOT, load, digest
from elf import Elf
from arm64_behavior import Arm64Behavior
parser = argparse.ArgumentParser(description='Observe original WebSocket key input; prefix only, no exact-match credit.')
parser.add_argument('--original', type=Path, required=True)
parser.add_argument('--clang8', type=Path, required=True)
parser.add_argument('--build-dir', type=Path, required=True)
args = parser.parse_args()
out = args.build_dir.resolve()
out.mkdir(parents=True, exist_ok=True)
original = Elf(args.original)
assert digest(original.data) == load(ROOT / 'config/target.json')['sha256']
b = Arm64Behavior(original, args.clang8.resolve(), out)
current = {}
captured = None
b.stub(16399104, lambda : {b.x(0): 0})
b.stub(16399120, lambda : {b.x(0): current['nanoseconds']})

def allocate():
    assert [b.arg(i) for i in range(4)] == [16, 4, 0, 1086324736]
    b.mu.mem_write(b.DATA + 4096, b'\xcc' * 32)
    return {b.x(0): b.DATA + 4096}
b.stub(224928, allocate)

def capture():
    global captured
    (begin, end, capacity) = b.read(b.arg(0), '<QQQ')
    assert end - begin == capacity - begin == 16
    captured = bytes(b.mu.mem_read(begin, 16))
    b.mu.emu_stop()
b.stub(293024, capture)
rows = []
for nanoseconds in [0, 1000000, 1000000000, 17000000000]:
    for saved in [0, 1234605616436508552, 18446744073709551615]:
        current = dict(nanoseconds=nanoseconds)
        captured = None
        sp = b.DATA + 520192
        b.mu.mem_write(sp - 4096, b'\xa5' * 4096)
        b.mu.reg_write(b.arm.UC_ARM64_REG_SP, sp)
        b.mu.reg_write(b.x(30), b.STOP)
        b.mu.reg_write(b.x(8), b.DATA)
        b.mu.reg_write(b.x(24), saved)
        b.mu.emu_start(533712, b.STOP, count=30000)
        assert captured is not None
        seed = int(float(nanoseconds) * 1000000000.0 / 1000000000.0) // 1000000
        first = seed * 1664525 + 1013904223 & 4294967295
        second = first * 1664525 + 1013904223 & 4294967295
        expected = struct.pack('<IIQ', second & 268435455, first & 268435455, saved)
        assert captured == expected, (nanoseconds, saved, captured.hex(), expected.hex())
        rows.append(dict(nanoseconds=nanoseconds, incoming_x24=hex(saved), encoder_input=captured.hex()))
report = dict(cases=len(rows), original_sha256=digest(original.data), exact_credit=False, boundary='Original 0x824d0 entry through call to Base64 encoder; stops before encoder, not complete generator execution', findings='Input bytes 8..15 equal little-endian incoming x24 saved at sp+0x40; bytes0..7 are two masked LCG values stored at sp+0x38', limits=['tick conversion and allocation synthetic', 'only selected representable time values', 'no source reconstruction or compiler matching claim', 'no claim about entropy or exploitability of callers'], observations=rows)
(out / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
(ROOT / 'progress/websocket_key_prefix.json').write_text(json.dumps(report, indent=2) + '\n', encoding='utf-8')
print(json.dumps(report, indent=2))
