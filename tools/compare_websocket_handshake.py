"""Bounded original-vs-candidate handshake constructor validation; zero exact credit."""
import argparse, json, itertools, hashlib, base64
from pathlib import Path
from arm64_behavior import Arm64Behavior
from discover_engine_families import compile_family
from elf import Elf, relocate
from project import ROOT
parser = argparse.ArgumentParser(description=__doc__)
parser.add_argument('--original', type=Path, required=True)
parser.add_argument('--clang8', type=Path, required=True)
parser.add_argument('--build-dir', type=Path, required=True)
args = parser.parse_args()
out = args.build_dir.resolve()
out.mkdir(exist_ok=True, parents=True)
source = ROOT / 'src/wip/WebSocketHandshake.cpp'
original = Elf(args.original)
flags = ['-target', 'aarch64-none-elf', '-std=c++11', '-D_GNU_SOURCE', '-U_WIN32', '-U_WIN64', '-O2', '-mcpu=cortex-a57', '-fno-omit-frame-pointer', '-fPIC', '-fno-strict-aliasing', '-fno-vectorize', '-fno-slp-vectorize', '-fno-exceptions', '-nostdinc++', '-isystem', 'vendor/llvm-libcxx-8/include', '-isystem', 'vendor/musl/include', '-isystem', 'vendor/musl/generated', '-D_LIBCPP_HAS_NO_THREADS', '-D_LIBCPP_HAS_MUSL_LIBC', '-D__CLANG_MAX_ALIGN_T_DEFINED', '-D_LIBCPP_DISABLE_VISIBILITY_ANNOTATIONS', '-funwind-tables', '-mllvm', '-tail-dup-placement-threshold=4', '-I', 'src', '-I', 'vendor/rapidjson-1.1.0/include', '-mgeneral-regs-only', '-D__ELF__']
flags = [str(ROOT / x) if x.startswith(('vendor/', 'src')) else x for x in flags]
b = Arm64Behavior(original, args.clang8.resolve(), out)
D = b.DATA
(self, url, config, options, env) = (D, D + 512, D + 768, D + 1024, D + 1280)
rel = original.relative_relocations()

def ptr(a):
    return rel[a] if a in rel else b.read(a, '<Q')[0]
objvt = ptr(26134552)
handvt = ptr(26135376)
globalenv = ptr(26134544)
dispose = ptr(objvt + 32)
trace = []
objects = {}
nodes = {}
freed = []
cursor = D + 131072

def cstr(a):
    result = bytearray()
    while (v := b.read(a, '<B')[0]):
        result.append(v)
        a += 1
        assert len(result) < 2048
    return bytes(result)

def reserve(n):
    global cursor
    a = cursor
    cursor += n + 255 & ~255
    b.mu.mem_write(a, b'\xa5' * (n + 255 & ~255))
    return a

def allocate():
    n = b.arg(0)
    assert [b.arg(i) for i in (1, 2, 3)] == [4, 0, 1086324736]
    assert n == 40
    a = reserve(n)
    objects[a] = ''
    trace.append(('allocate', n))
    return {b.x(0): a}

def put_text(address, text):
    raw = text.encode()
    a = reserve(40)
    objects[a] = text
    b.write(a, '<QII', objvt + 16, 1, 2779096485)
    b.mu.mem_write(a + 16, bytes(24))
    if len(raw) <= 22:
        b.mu.mem_write(a + 16, bytes([len(raw) * 2]) + raw + b'\x00')
    else:
        p = reserve(len(raw) + 1)
        b.mu.mem_write(p, raw + b'\x00')
        b.write(a + 16, '<QQQ', len(raw) + 16 & ~15 | 1, len(raw), p)
    b.put(address, a)

def text_at(address):
    a = b.read(address, '<Q')[0]
    return objects[a]

def destroy():
    a = b.arg(0)
    assert a in objects
    assert b.read(a + 8, '<I')[0] == 0
    freed.append(a)
    trace.append(('dispose', objects[a]))

def construct():
    dest = b.arg(0)
    s = cstr(b.arg(1)).decode()
    trace.append(('text', s))
    put_text(dest, s)

def base_ctor():
    assert (b.arg(0), b.arg(1), b.arg(2)) == (self, url, config)
    trace.append(('base',))
    b.mu.mem_write(self, bytes(152))

def fmt():
    dest = b.arg(8)
    f = cstr(b.arg(0)).decode()
    if f == 'UbiServices_SDK_2020.Release.7_%s64':
        s = f % cstr(b.arg(1)).decode()
    elif f == '%u':
        s = str(b.arg(1) & 4294967295)
    elif f == '%d':
        s = str((b.arg(1) & 2147483647) - (b.arg(1) & 2147483648))
    else:
        raise AssertionError(f)
    trace.append(('format', f, s))
    put_text(dest, s)

def concat():
    dest = b.arg(8)
    s = text_at(b.arg(0)) + cstr(b.arg(1)).decode()
    trace.append(('concat', s))
    put_text(dest, s)

def key():
    trace.append(('generate_key',))
    put_text(b.arg(8), 'AAECAwQFBgcICQoLDA0ODw==')

def lookup():
    assert b.arg(0) == self + 24
    name = text_at(b.arg(1))
    assert b.arg(2) == 20171353
    assert b.read(b.arg(3), '<Q')[0] == b.arg(1)
    trace.append(('lookup', name))
    if name not in nodes:
        node = reserve(48)
        put_text(node + 40, initial.get(name, ''))
        nodes[name] = node
    return {b.x(0): nodes[name]}

def add_lists():
    assert b.arg(0) == self + 16
    offset = b.arg(1) - options
    assert offset in (8, 32)
    name = cstr(b.arg(2)).decode()
    assert name == ('Sec-WebSocket-Protocol' if offset == 8 else 'Sec-WebSocket-Extensions')
    trace.append(('list', name, offset))

def accept():
    value = text_at(b.arg(0))
    s = base64.b64encode(hashlib.sha1((value + '258EAFA5-E914-47DA-95CA-C5AB0DC85B11').encode()).digest()).decode()
    trace.append(('accept', value, s))
    put_text(b.arg(8), s)

def setup():
    assert (b.arg(0), b.arg(1)) == (self, url)
    trace.append(('setup',))
known = {'_ZN11HttpRequestC2EPKvS1_': 1038736, 'EngineAllocate': 224928, 'ConstructSdkText': 518112, 'FormatText': 254592, 'ConcatText': 291008, 'GenerateKey': 533712, 'LookupHeader': 1657792, 'AppendWebSocketHeaders': 535296, 'MakeWebSocketAccept': 534512, 'SetupHandshake': 538768, 'Piecewise': 20171353, 'CurrentEnvironment': globalenv, '_ZTV6Object': objvt, '_ZTV9Handshake': handvt}
for (addr, fn) in [(1038736, base_ctor), (224928, allocate), (518112, construct), (254592, fmt), (291008, concat), (533712, key), (1657792, lookup), (535296, add_lists), (534512, accept), (538768, setup), (dispose, destroy)]:
    b.stub(addr, fn)

def install(src, name):
    obj = compile_family(b.compiler, src, out / (name + '.o'), dict(flags=flags))
    (raw, rels) = obj.method('_ZN9HandshakeC2EPKvS1_PK7Options')
    code = bytearray(raw)
    cells = {}
    sections = {}
    local = D + 65536
    for rr in rels:
        sym = rr['symbol']
        if sym in known:
            target = known[sym]
        else:
            record = rr['symbol_record']
            idx = record[3]
            assert idx
            if idx not in sections:
                sections[idx] = local
                data = obj.section_bytes(obj.sections[idx])
                b.mu.mem_write(local, data)
                local += len(data) + 255 & ~255
            target = sections[idx] + record[4]
        if rr['kind'] in (311, 312):
            if sym not in cells:
                cells[sym] = local
                b.put(local, target)
                local += 8
            target = cells[sym]
        relocate(code, rr['offset'], rr['kind'], target + rr['addend'], b.MODEL)
    b.mu.mem_write(b.MODEL, bytes(code))
    b.mu.ctl_remove_cache(b.MODEL, b.MODEL + 65536)
    return len(raw)

def run(entry, case):
    global cursor, initial
    (kind, version, preset) = case
    trace.clear()
    objects.clear()
    nodes.clear()
    freed.clear()
    cursor = D + 131072
    initial = {'Upgrade': 'old', 'Connection': 'old', 'Sec-WebSocket-Key': 'old', 'User-Agent': 'old'} if preset else {}
    b.mu.mem_write(self, b'\xa5' * 256)
    b.mu.mem_write(options, b'Z' * 64)
    b.write(options + 56, '<I', version)
    b.write(env + 16, '<I', kind)
    b.put(globalenv, env)
    b.execute(entry, self, url, config, options)
    headers = {k: text_at(v + 40) for (k, v) in nodes.items()}
    expected = {'User-Agent': 'UbiServices_SDK_2020.Release.7_SWITCH64' + ('_beta_cn' if kind in (1, 2) else ''), 'Upgrade': 'websocket', 'Connection': 'Upgrade', 'Sec-WebSocket-Key': 'AAECAwQFBgcICQoLDA0ODw==', 'Sec-WebSocket-Version': str(version)}
    assert headers == expected, (headers, expected)
    assert b.read(self, '<Q')[0] == handvt + 16
    assert b.read(self + 160, '<H')[0] == 0
    assert text_at(self + 152) == ''
    assert text_at(self + 168) == base64.b64encode(hashlib.sha1((expected['Sec-WebSocket-Key'] + '258EAFA5-E914-47DA-95CA-C5AB0DC85B11').encode()).digest()).decode()
    live = {b.read(self + 152, '<Q')[0], b.read(self + 168, '<Q')[0]} | {b.read(v + 40, '<Q')[0] for v in nodes.values()}
    for a in objects:
        assert b.read(a + 8, '<I')[0] == (1 if a in live else 0), (hex(a), objects[a], b.read(a + 8, '<I')[0])
    assert set(freed) == set(objects) - live
    return (list(trace), bytes(b.mu.mem_read(self, 176)).hex(), [(a, objects[a], b.read(a + 8, '<I')[0]) for a in objects])
size = install(source, 'candidate')
cases = list(itertools.product([0, 1, 2, 3, 4294967295], [0, 13, 255, 2147483648, 4294967295], [False, True]))
for case in cases:
    expected = run(0x82d10, case)
    actual = run(b.MODEL, case)
    if expected != actual:
        (out / 'failure.json').write_text(json.dumps(dict(case=case, original=expected, candidate=actual), indent=2))
        raise AssertionError('Mismatch; see failure.json')
print('PASS', len(cases), size, flush=True)
rejected = []
for (name, old, new) in [('signed_version', 'FormatText("%u", options->version)', 'FormatText("%d", options->version)'), ('wrong_beta_condition', 'env - 1u < 2', 'env - 1u < 1'), ('bad_retain', 'count, count + 1', 'count, count + 2'), ('wrong_temporary_order', '    Text key("Upgrade");\n    Lookup(&headers, key) = Text("websocket");', '    Lookup(&headers, Text("Upgrade")) = Text("websocket");')]:
    text = source.read_text()
    assert old in text
    p = out / (name + '.cpp')
    p.write_text(text.replace(old, new))
    install(p, name)
    try:
        reference = run(0x82d10, (2, 4294967295, True))
        actual = run(b.MODEL, (2, 4294967295, True))
        assert reference == actual
    except AssertionError:
        rejected.append(name)
    else:
        raise AssertionError('Negative control accepted: ' + name)
report = dict(cases=len(cases), negative_controls_rejected=rejected, source='src/wip/WebSocketHandshake.cpp', compiler_flags=[x.replace(str(ROOT), '${REPO}') for x in flags], source_sha256=hashlib.sha256(source.read_bytes()).hexdigest(), original_sha256=hashlib.sha256(original.data).hexdigest(), candidate_size=size, original_size=2668, exact_credit=0, limits=['Synthetic allocator, SDK text construction/format/concat, map, key and accept helpers, base constructor, list handler and final setup.', 'Complete constructor executes including atomic ownership and cleanup; SP and callee-saved registers checked.', 'No concurrent references, allocation failures, real network, or full-game validation.', 'List dependency arguments/order checked; list contents handled by separately exact helper, not executed here.'])
(out / 'report.json').write_text(json.dumps(report, indent=2) + '\n', encoding='utf-8')
(ROOT / 'progress/websocket_handshake_behavior.json').write_text(json.dumps(report, indent=2) + '\n', encoding='utf-8', newline='\n')
print('REJECTED', rejected)
