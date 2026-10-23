import argparse, json, hashlib, itertools
from pathlib import Path
from project import ROOT, load, digest
from elf import Elf
from elf import relocate
from arm64_behavior import Arm64Behavior
from discover_engine_families import compile_family
parser = argparse.ArgumentParser(description='Bounded WebSocket accept comparison; no exact credit.')
parser.add_argument('--original', type=Path, required=True)
parser.add_argument('--clang8', type=Path, required=True)
parser.add_argument('--build-dir', type=Path, required=True)
args = parser.parse_args()
out = args.build_dir.resolve()
out.mkdir(parents=True, exist_ok=True)
original = Elf(args.original)
assert digest(original.data) == load(ROOT / 'config/target.json')['sha256']
b = Arm64Behavior(original, args.clang8.resolve(), out)
D = b.DATA
HEAP = D + 65536
get = lambda a: b.read(a, '<Q')[0]
vt = get(26134552) + 16
dispose = get(vt + 16)
trace = []
objects = []
cursor = HEAP

def alloc(n):
    global cursor
    a = cursor
    cursor += n + 31 & ~31
    assert cursor < D + 327680
    b.mu.mem_write(a, b'\xcc' * (n + 31 & ~31))
    return a

def cstr(a):
    data = bytearray()
    while (v := b.read(a, '<B')[0]):
        data.append(v)
        a += 1
        assert len(data) < 4096
    return bytes(data)

def string(a, data):
    b.mu.mem_write(a, bytes(24))
    if len(data) <= 22:
        b.write(a, '<B', len(data) * 2)
        b.mu.mem_write(a + 1, data + b'\x00')
    else:
        cap = len(data) + 16 & ~15
        q = alloc(cap)
        b.mu.mem_write(q, data + b'\x00')
        b.write(a, '<QQQ', cap | 1, len(data), q)

def read_string(a):
    f = b.read(a, '<B')[0]
    return bytes(b.mu.mem_read(get(a + 16) if f & 1 else a + 1, get(a + 8) if f & 1 else f >> 1))

def put_text(a, data):
    obj = alloc(40)
    objects.append(obj)
    b.write(obj, '<QII', vt, 1, 3435973836)
    string(obj + 16, data)
    b.put(a, obj)

def allocation():
    assert [b.arg(i) for i in [1, 2, 3]] == [4, 0, 1086324736]
    n = b.arg(0)
    a = alloc(n)
    trace.append(('allocate', n, a))
    return {b.x(0): a}

def free():
    trace.append(('free', b.arg(0)))

def disposed():
    obj = b.arg(0)
    assert b.read(obj + 8, '<I')[0] == 0
    trace.append(('dispose', obj))

def copy():
    (dst, src, n) = [b.arg(i) for i in range(3)]
    data = bytes(b.mu.mem_read(src, n))
    b.mu.mem_write(dst, data)
    return {b.x(0): dst}

def forbidden():
    raise AssertionError('unexpected external call')
for (a, f) in {224928: allocation, 225328: free, 16397104: copy, 16397232: copy, 16397152: lambda : {b.x(0): len(cstr(b.arg(0)))}, dispose: disposed, b.STUB + 3840: forbidden}.items():
    b.stub(a, f)
known = {'EngineAllocate': 224928, 'EngineFree': 225328, 'memcpy': 16397104, 'strlen': 16397152}
flags = next((x['flags'] for x in load(ROOT / 'config/builds.json')['builds'] if x['id'] == 'sdk_uri'))
flags = [str(ROOT / x) if x.startswith(('vendor/', 'src')) else x for x in flags]
source = (ROOT / 'src/wip/WebSocketAccept.cpp').read_text()

def build(text, name):
    src = out / (name + '.cpp')
    src.write_text(text)
    o = compile_family(b.compiler, src, out / (name + '.o'), dict(flags=flags))
    (code, rels) = o.method('MakeWebSocketAccept')
    raw = bytearray(code)
    sections = {}
    cells = {}
    for r in rels:
        sym = r['symbol']
        record = r['symbol_record']
        target = known.get(sym, b.STUB + 3840)
        if 'SimpleLibraryBinding' in sym and 'Allocate' in sym:
            target = 224928
        if 'SimpleLibraryBinding' in sym and 'Free' in sym:
            target = 225328
        if record[3] and sym not in known:
            sec = record[3]
            if sec not in sections:
                sections[sec] = D + 393216 + len(sections) * 4096
                b.mu.mem_write(sections[sec], o.section_bytes(o.sections[sec]))
            target = sections[sec] + record[4]
        if r['kind'] in (311, 312):
            if sym not in cells:
                cells[sym] = D + 360448 + len(cells) * 8
                b.put(cells[sym], target)
            target = cells[sym]
        relocate(raw, r['offset'], r['kind'], target + r['addend'], b.MODEL)
    b.mu.mem_write(b.MODEL, bytes(raw))
    b.mu.ctl_remove_cache(b.MODEL, b.MODEL + 65536)
    return bytes(raw)
import base64
INPUT = D
OUTPUT = D + 256
known.update({'AppendText': 291008, 'EncodeBase64': 293024, 'ShaUpdate': 301088, 'ShaFinish': 301392, '_ZTV6Object': vt - 16, 'memset': 16397120})

def concat():
    data = read_string(get(b.arg(0)) + 16) + cstr(b.arg(1))
    trace.append(('concat', data.hex()))
    put_text(b.arg(8), data)

def allocate_all():
    result = allocation()
    if b.arg(0) == 40:
        objects.append(result[b.x(0)])
    return result

def memset():
    b.mu.mem_write(b.arg(0), bytes([b.arg(1) & 255]) * b.arg(2))
    return {b.x(0): b.arg(0)}
b.stub(224928, allocate_all)
b.stub(291008, concat)
b.stub(16397120, memset)

def run(entry, data):
    global cursor
    cursor = HEAP
    trace.clear()
    objects.clear()
    b.mu.mem_write(OUTPUT, b'\xa5' * 8)
    put_text(INPUT, data)
    owner = get(INPUT)
    b.execute(entry, INPUT, 0, 0, 0, 0, 0, 0, 0, OUTPUT)
    result = read_string(get(OUTPUT) + 16)
    expected = base64.b64encode(hashlib.sha1(data + b'258EAFA5-E914-47DA-95CA-C5AB0DC85B11').digest())
    assert result == expected, (data, result, expected)
    assert get(INPUT) == owner and read_string(owner + 16) == data
    live = {owner, get(OUTPUT)}
    assert all((b.read(o + 8, '<I')[0] == (1 if o in live else 0) for o in objects))
    return (result.hex(), list(trace), [(o, b.read(o + 8, '<I')[0]) for o in objects])
cases = [b'', b'dGhlIHNhbXBsZSBub25jZQ==', b'\x00', b'a\x00b'] + [bytes((j * 37 + n & 255 for j in range(n))) for n in range(129)]
raw = build(source, 'candidate')
refs = []
for (i, case) in enumerate(cases):
    try:
        expected = run(534512, case)
        actual = run(b.MODEL, case)
    except Exception:
        print('FAILED', i, case.hex(), flush=True)
        raise
    if actual != expected:
        (out / 'failure.json').write_text(json.dumps(dict(index=i, case=case.hex(), original=expected, candidate=actual), indent=2))
        raise AssertionError(('trace mismatch', i))
    refs.append(expected)
print('PASS', len(cases), flush=True)
controls = []
for (name, old, new) in [('guid', '258EAFA5-E914-47DA-95CA-C5AB0DC85B11', '258EAFA5-E914-47DA-95CA-C5AB0DC85B12'), ('byte_order', 'out[0] = v >> 24', 'out[0] = v >> 16'), ('initial_state', '0x67452301', '0x67452302')]:
    assert old in source
    build(source.replace(old, new), name)
    detected = None
    for (i, (case, expected)) in enumerate(zip(cases, refs)):
        try:
            actual = run(b.MODEL, case)
        except AssertionError as e:
            assert e.args and isinstance(e.args[0], tuple) and (e.args[0][0] == case), e
            detected = i
            break
        if actual != expected:
            detected = i
            break
    assert detected is not None
    controls.append(dict(name=name, case_index=detected))
report = dict(original_sha256=digest(original.data), original_function='0x827f0', cases=len(cases), negative_controls=controls, exact_credit=False, source_sha256=hashlib.sha256(source.encode()).hexdigest(), candidate_sha256=hashlib.sha256(raw).hexdigest(), boundary='complete accept helper; original SHA1 update/finalize/block and Base64/append execute; Python hashlib/Base64 output oracle; ordered allocations/frees/disposal and owner references checked', limitations=['input concatenation, allocation/free and memory primitives synthetic', 'bounded byte strings up to128bytes', 'no allocation failure, concurrency, or real network execution'])
(out / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
(ROOT / 'progress/websocket_accept_behavior.json').write_text(json.dumps(report, indent=2) + '\n', encoding='utf-8')
print(json.dumps(report, indent=2))
