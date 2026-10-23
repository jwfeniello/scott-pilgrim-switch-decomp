import argparse, json, hashlib, itertools
from pathlib import Path
from project import ROOT
from elf import Elf
from elf import relocate
from arm64_behavior import Arm64Behavior
from discover_engine_families import compile_family
parser = argparse.ArgumentParser(description='Bounded URI parser comparison; no exact-match credit.')
parser.add_argument('--original', type=Path, required=True)
parser.add_argument('--clang8', type=Path, required=True)
parser.add_argument('--build-dir', type=Path, required=True)
args = parser.parse_args()
original_sha256 = hashlib.sha256(args.original.read_bytes()).hexdigest()
assert original_sha256 == 'ea95638e6d6aaa0dc6cddd552a9366799aa1ec3bc07ee201f23f6c151103f5b8', 'Unexpected original ELF'
out = args.build_dir.resolve()
out.mkdir(parents=True, exist_ok=True)
b = Arm64Behavior(Elf(args.original), args.clang8.resolve(), out)
D = b.DATA
SELF = D
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

def slice_text():
    data = read_string(get(b.arg(0)) + 16)
    pos = b.arg(1)
    count = b.arg(2)
    text = data[pos:pos + count].split(b'\x00')[0] if pos < len(data) else b''
    trace.append(('slice', pos, count, text.hex()))
    put_text(b.arg(8), text)

def detach():
    obj = get(b.arg(0))
    assert b.arg(1) == 1 and b.read(obj + 8, '<I')[0] == 1
    trace.append(('detach', read_string(obj + 16).hex()))

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

def memchr():
    data = bytes(b.mu.mem_read(b.arg(0), b.arg(2)))
    pos = data.find(bytes([b.arg(1) & 255]))
    return {b.x(0): 0 if pos < 0 else b.arg(0) + pos}

def forbidden():
    raise AssertionError('unexpected external call')
for (a, f) in {474848: slice_text, 520160: detach, 224928: allocation, 225328: free, 16397680: memchr, 16397104: copy, 16397232: copy, 16397152: lambda : {b.x(0): len(cstr(b.arg(0)))}, dispose: disposed, b.STUB + 3840: forbidden}.items():
    b.stub(a, f)
known = {'SliceText': 474848, 'DetachText': 520160, 'EngineAllocate': 224928, 'EngineFree': 225328, 'memcpy': 16397104, 'memmove': 16397232, 'strlen': 16397152, 'memchr': 16397680}
flags = next((row['flags'] for row in json.loads((ROOT / 'config/builds.json').read_text())['builds'] if row['id'] == 'sdk_uri'))
flags = ['-O3' if x == '-O2' else str(ROOT / x) if x.startswith(('vendor/', 'src')) else x for x in flags]
source = (ROOT / 'src/wip/SdkUriParser.cpp').read_text()

def build(text, name):
    src = out / (name + '.cpp')
    src.write_text(text)
    o = compile_family(b.compiler, src, out / (name + '.o'), dict(flags=flags))
    (code, rels) = o.method('ParseUri')
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

def run(entry, data):
    global cursor
    cursor = HEAP
    trace.clear()
    objects.clear()
    b.mu.mem_write(SELF, b'\xa5' * 160)
    put_text(SELF + 8, data)
    owner = get(SELF + 8)
    b.execute(entry, SELF)
    assert bytes(b.mu.mem_read(SELF, 8)) == bytes([0xa5]) * 8
    assert get(SELF + 8) == owner and read_string(owner + 16) == data and (b.read(owner + 8, '<I')[0] == 1)
    assert all((b.read(o + 8, '<I')[0] == 0 for o in objects[1:]))
    return (b.read(SELF + 16, '<' + 'Q' * 18), list(trace))
cases = [b'', b'/', b'host', b'host/', b'host:80/', b'http://host:80/path', b'https://user:pass@host/a;p?q#f', b'https://u@host/', b':///', b'h/p#x#y', b'h/p?x?y', b'h/p;s;t', b'h/p?x#y;z', b'h/p\x00q', b'h:00080/p', b'h:abc/p', b'h:/p']
cases += [('wss://' + auth + host + port + '/' + path).encode() for (auth, host, port, path) in itertools.product(['', 'user@', 'u:p@', 'u:@', ':p@'], ['h', 'long-host-name.example.test'], ['', ':0', ':80', ':65536', ':123x'], ['', 'a', 'a;p?q#f', 'a#b#c', 'x' * 40])]
raw = build(source, 'candidate')
refs = []
for (i, case) in enumerate(cases):
    expected = run(472448, case)
    actual = run(b.MODEL, case)
    if expected != actual:
        (out / 'failure.json').write_text(json.dumps(dict(index=i, case=case.hex(), original=expected, candidate=actual), indent=2))
        raise AssertionError(('mismatch', i, case))
    refs.append(expected)
print('PASS', len(cases), flush=True)
controls = []
for (name, old, new) in [('query_separator', 'Find(&rest, "?")', 'Find(&rest, "!")'), ('port_offset', 'first = colon + start + 1', 'first = colon + start + 2'), ('fragment_search', 's.rfind("#")', 's.find("#")')]:
    assert old in source
    build(source.replace(old, new), name)
    hit = None
    for (i, (case, expected)) in enumerate(zip(cases, refs)):
        result = run(b.MODEL, case)
        if result != expected:
            hit = i
            break
    assert hit is not None
    controls.append(dict(name=name, case_index=hit))
report = dict(original_sha256=original_sha256, original_function_address='0x73580', original_function_size=2400, cases=len(cases), negative_controls=controls, exact_credit=False, source_sha256=hashlib.sha256(source.encode()).hexdigest(), candidate_sha256=hashlib.sha256(raw).hexdigest(), boundary='complete parser return; all 18 range words, input preservation, refcounts and ordered slice/detach/allocation/free/disposal traces', limitations=['SliceText and DetachText modeled synthetically, with unique owners', 'allocator/free/memory/string-length primitives synthetic', 'no allocation failure, concurrent owner changes, or malformed out-of-bounds accesses', 'not a general URI standards compliance test'])
(out / 'report.json').write_text(json.dumps(report, indent=2))
(ROOT / 'progress/uri_parser_behavior.json').write_text(json.dumps(report, indent=2) + '\n', encoding='utf-8')
print(json.dumps(report, indent=2))
