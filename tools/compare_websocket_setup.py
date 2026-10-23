import argparse, json, hashlib, itertools
from pathlib import Path
from project import ROOT, load, digest
from elf import Elf
from elf import relocate
from arm64_behavior import Arm64Behavior
from discover_engine_families import compile_family
parser = argparse.ArgumentParser(description='Bounded WebSocket setup validation; no exact-match credit.')
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
flags = next((row['flags'] for row in load(ROOT / 'config/builds.json')['builds'] if row['id'] == 'sdk_uri'))
flags = [str(ROOT / x) if x.startswith(('vendor/', 'src')) else x for x in flags]
source = (ROOT / 'src/wip/WebSocketHandshakeSetup.cpp').read_text()

def build(text, name):
    src = out / (name + '.cpp')
    src.write_text(text)
    o = compile_family(b.compiler, src, out / (name + '.o'), dict(flags=flags))
    (code, rels) = o.method('SetupHandshake')
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
URL = D + 1024
NODE = D + 2048
stream = b''
streambuf = 0
freed = []
known.update({'ParseUri': 472448, 'BuildUriTail': 478336, 'ReadUriPort': 475312, 'FindSdkText': 370256, 'ConstructSdkText': 518112, 'LookupHeader': 1657792, 'Piecewise': 20171353, '_ZTV6Object': vt - 16, 'UbiStreamFree': 225328, '_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEEN11ubiservices18ContainerAllocatorIcEEE3strEv': 1561072, '_ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev': 16399072, '_ZNSt3__115basic_streambufIcNS_11char_traitsIcEEEC2Ev': 16399024, '_ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev': 16399056, '_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m': 1560112, '_ZNSt3__18ios_base4initEPv': 16399008, '_ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev': 16399088, '_ZTCN11ubiservices17BasicStringStreamIcEE0_NSt3__118basic_stringstreamIcNS1_11char_traitsIcEENS_18ContainerAllocatorIcEEEE': get(26134496), '_ZTCN11ubiservices17BasicStringStreamIcEE0_NSt3__113basic_istreamIcNS1_11char_traitsIcEEEE': get(26134504), '_ZTVNSt3__115basic_stringbufIcNS_11char_traitsIcEEN11ubiservices18ContainerAllocatorIcEEEE': get(26134512), '_ZTVN11ubiservices17BasicStringStreamIcEE': get(26134520), '_ZTTN11ubiservices17BasicStringStreamIcEE': D + 20480})

def text_at(owner):
    return read_string(get(owner) + 16)

def ctor():
    data = cstr(b.arg(1))
    trace.append(('text', data.hex()))
    put_text(b.arg(0), data)

def lookup():
    assert b.arg(0) == SELF + 24 and text_at(b.arg(1)) == b'Host'
    assert b.arg(2) == 20171353 and get(b.arg(3)) == b.arg(1)
    trace.append(('lookup', 'Host'))
    return {b.x(0): NODE}

def ios_init():
    b.mu.mem_write(b.arg(0) + 8, bytes(128))
    trace.append(('ios_init',))

def buffer_init():
    global streambuf
    streambuf = b.arg(0)
    b.mu.mem_write(streambuf, bytes(64))
    trace.append(('buffer_init',))

def insert(data):
    global stream
    stream += data
    trace.append(('insert', data.hex()))
    q = alloc(len(stream) + 1)
    b.mu.mem_write(q, stream + b'\x00')
    b.put(streambuf + 40, q)
    b.put(streambuf + 48, q + len(stream))
    b.put(streambuf + 56, q + len(stream))

def put_sequence():
    assert b.arg(0) + 8 == streambuf
    insert(bytes(b.mu.mem_read(b.arg(1), b.arg(2))))
    return {b.x(0): b.arg(0)}

def put_port():
    assert b.arg(0) + 8 == streambuf
    insert(str(b.arg(1) & 65535).encode())
    return {b.x(0): b.arg(0)}

def sdk_insert():
    (a, pos, first, last) = [b.arg(i) for i in range(4)]
    old = read_string(a)
    f = b.read(a, '<B')[0]
    base = get(a + 16) if f & 1 else a + 1
    offset = pos - base
    assert 0 <= offset <= len(old)
    data = bytes(b.mu.mem_read(first, last - first))
    trace.append(('sdk_insert', offset, data.hex()))
    string(a, old[:offset] + data + old[offset:])

def allocate_object():
    result = allocation()
    a = result[b.x(0)]
    if b.arg(0) == 40:
        objects.append(a)
    return result

def destroy():
    a = b.arg(0)
    assert a in objects and b.read(a + 8, '<I')[0] == 0
    freed.append(a)
    trace.append(('dispose', a))

def atoi():
    import re
    m = re.match(b'\\s*([+-]?\\d+)', cstr(b.arg(0)))
    v = int(m.group(1)) if m else 0
    return {b.x(0): v & 4294967295}

def compare():
    n = b.arg(2)
    a = bytes(b.mu.mem_read(b.arg(0), n))
    c = bytes(b.mu.mem_read(b.arg(1), n))
    return {b.x(0): (a > c) - (a < c) & 4294967295}
cfg = json.loads((ROOT / 'config/builds.json').read_text())
port_symbol = '_ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEt'
addresses = {int(f['bindings'][port_symbol], 0) for x in cfg['builds'] for f in x['functions'] if port_symbol in f.get('bindings', {})}
assert not addresses or addresses == {16400272}
port_address = 16400272
known[port_symbol] = port_address
upper_addresses = {int(f['bindings']['toupper'], 0) for x in cfg['builds'] for f in x['functions'] if 'toupper' in f.get('bindings', {})}
assert len(upper_addresses) == 1
upper = upper_addresses.pop()
for (a, f) in {224928: allocate_object, dispose: destroy, 518112: ctor, 1657792: lookup, 16399008: ios_init, 16399024: buffer_init, 1560112: put_sequence, port_address: put_port, 520976: sdk_insert, 16399504: atoi, 16399056: lambda : trace.append(('buffer_destroy',)), 16399072: lambda : trace.append(('iostream_destroy',)), 16399088: lambda : trace.append(('ios_destroy',)), upper: lambda : {b.x(0): b.arg(0) - 32 if 97 <= b.arg(0) <= 122 else b.arg(0)}}.items():
    b.stub(a, f)
memcmp_addresses = {int(f['bindings']['memcmp'], 0) for x in cfg['builds'] for f in x['functions'] if 'memcmp' in f.get('bindings', {})}
assert len(memcmp_addresses) == 1
memcmp_address = memcmp_addresses.pop()
b.stub(memcmp_address, compare)
known['memcmp'] = memcmp_address

def run(entry, case):
    global cursor, stream, streambuf
    (scheme, host, port, path, preset) = case
    data = (scheme + host + port + '/' + path).encode()
    cursor = HEAP
    trace.clear()
    objects.clear()
    freed.clear()
    stream = b''
    streambuf = 0
    b.mu.mem_write(SELF, b'\xa5' * 176)
    b.mu.mem_write(NODE, bytes(48))
    put_text(URL, data)
    input_owner = get(URL)
    put_text(SELF + 152, b'old target')
    put_text(SELF + 168, b'accept sentinel')
    put_text(NODE + 40, b'old host' if preset else b'')
    sentinel = get(SELF + 168)
    b.execute(entry, SELF, URL)
    expected_port = int(port[1:]) & 65535 if port and port[1:].isdigit() else 0
    if not expected_port:
        expected_port = 443 if scheme == 'wss://' else 80
    expected_host = 'public-ws-ubiservices.ubi.com' if 'gaap.ubiservices.ubi.com' in host.lower() else host
    if expected_port not in [80, 443]:
        expected_host += ':' + str(expected_port)
    assert text_at(NODE + 40) == expected_host.encode(), (case, text_at(NODE + 40), expected_host)
    assert text_at(SELF + 152) == path.encode(), (case, text_at(SELF + 152), path)
    assert b.read(SELF + 160, '<H')[0] == expected_port, (case, b.read(SELF + 160, '<H')[0], expected_port)
    assert text_at(URL) == data and get(URL) == input_owner and (get(SELF + 168) == sentinel)
    live = {input_owner, get(SELF + 152), get(SELF + 168), get(NODE + 40)}
    assert all((b.read(o + 8, '<I')[0] == (1 if o in live else 0) for o in objects))
    assert set(freed) == set(objects) - live
    return (list(trace), bytes(b.mu.mem_read(SELF, 176)).hex(), text_at(NODE + 40).hex())
cases = list(itertools.product(['', 'ws://', 'wss://', 'WSS://'], ['h', 'long-host-name.example.test', 'gaap.ubiservices.ubi.com', 'GAAP.UBISERVICES.UBI.COM', 'prefix-gaap.ubiservices.ubi.com.extra'], ['', ':0', ':80', ':443', ':8080', ':65536', ':-1'], ['', 'a;p?q#f', 'x' * 40], [False, True]))
raw = build(source, 'candidate')
refs = []
for (i, case) in enumerate(cases):
    try:
        expected = run(538768, case)
        actual = run(b.MODEL, case)
    except Exception:
        print('FAILED CASE', i, case, flush=True)
        raise
    if expected != actual:
        (out / 'failure.json').write_text(json.dumps(dict(index=i, case=case, original=expected, candidate=actual), indent=2))
        raise AssertionError(('mismatch', i, case))
    refs.append(expected)
print('PASS', len(cases), flush=True)
controls = []
for (name, old, new) in [('port_truncation', 'unsigned short port = ReadUriPort(&u);', 'unsigned port = ReadUriPort(&u);'), ('scheme_case', '== "wss"', '== "WSS"'), ('host_rewrite', 'host << "public-ws-ubiservices.ubi.com"', 'host << "wrong.example"')]:
    assert old in source, name
    build(source.replace(old, new), name)
    detected = None
    for (i, (case, expected)) in enumerate(zip(cases, refs)):
        try:
            actual = run(b.MODEL, case)
        except AssertionError as e:
            assert isinstance(e.args[0], tuple) and e.args[0][0] == case, e
            detected = i
            break
        if actual != expected:
            detected = i
            break
    assert detected is not None, name
    controls.append(dict(name=name, case_index=detected))
report = dict(cases=len(cases), negative_controls=controls, exact_credit=False, original_sha256=digest(original.data), source_sha256=hashlib.sha256(source.encode()).hexdigest(), candidate_sha256=hashlib.sha256(raw).hexdigest(), boundary='Complete setup return; original parser, tail builder, port reader, folded search and stringstream extraction execute; all output fields and ordered lifetime traces compared.', limitations=['SliceText and DetachText modeled with unique owners', 'allocation/free, SDK insertion, stream initialization/insertion/destruction, text construction and header lookup synthetic', 'ASCII toupper and bounded decimal atoi modeled', 'no concurrency, allocation failure, malformed-input safety, or network/game execution'])
(out / 'report.json').write_text(json.dumps(report, indent=2) + '\n')
(ROOT / 'progress/websocket_setup_behavior.json').write_text(json.dumps(report, indent=2) + '\n', encoding='utf-8')
print(json.dumps(report, indent=2))
