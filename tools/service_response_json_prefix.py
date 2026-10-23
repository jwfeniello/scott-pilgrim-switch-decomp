"""Synthetic JSON boundary checks for compare_service_response --json-prefix.

Stops at ios_base::init. Does not validate formatting or a complete function.
"""
import hashlib
import itertools
import json


def run_fixture(m):
    b, D = m.b, m.D
    heap = D + 0x30000
    names = {}
    documents = {}
    allocated = set()
    freed = set()
    cursor = heap
    top = 0

    class PrefixComplete(Exception):
        pass

    def cstring(p):
        data = bytearray()
        for _ in range(256):
            value = b.read(p, '<B')[0]
            if not value:
                return data.decode('ascii')
            data.append(value)
            p += 1
        raise AssertionError('Unterminated fixture string')

    def reserve(size=128):
        nonlocal cursor
        p = cursor
        cursor += 256
        assert cursor < D + 0x40000
        b.mu.mem_write(p, bytes(size))
        allocated.add(p)
        return p

    def object_for(text):
        p = reserve()
        b.write(p, '<QII', m.OV, 1, 0)
        names[p] = text
        return p

    def text_value(p):
        return names[m.get(p)]

    def allocate():
        assert [b.arg(i) for i in range(4)] == [64, 4, 0, 0x40c00000]
        p = reserve()
        m.trace.append(('allocate_document',))
        return {b.x(0): p}

    def document(p, key):
        owner, root, value = reserve(), reserve(), reserve()
        b.put(p + 24, owner)
        b.put(owner, root)
        b.put(owner + 16, value)
        b.write(root, '<QIIQ', m.OV, m.current['json_refs'], 0, value)
        # Poison value: object initialization must clear every field.
        b.mu.mem_write(value, b'\xa5' * 24)
        if m.current['scratch']:
            scratch = reserve()
            b.write(scratch + 12, '<I', 16)
            b.put(p + 40, scratch + 16)
        documents[p] = (key, owner, root, value)

    def initialize():
        nonlocal top
        top = b.arg(0)
        document(top, 'root')
        m.trace.append(('initialize_document',))

    def field():
        parent = m.get(b.arg(0) + 8)
        assert parent == top
        _, owner, _, value = documents[top]
        assert m.get(owner + 16) == value
        assert bytes(b.mu.mem_read(value, 24)) == bytes(22) + b'\x03\x00'
        assert b.read(top + 48, '<B')[0] == 0
        key = cstring(b.arg(1))
        p = reserve()
        document(p, key)
        b.write(b.arg(8), '<QQ', 0x17c43c8, p)
        m.trace.append(('field', key))

    def set_value():
        key = documents[b.arg(0)][0]
        value = bytes(b.mu.mem_read(b.arg(1), 24))
        m.trace.append(('number', key, value.hex()))

    def set_text():
        key = documents[m.get(b.arg(0) + 8)][0]
        m.trace.append(('text', key, text_value(b.arg(1))))

    def construct_text():
        value = cstring(b.arg(1))
        b.put(b.arg(0), object_for(value))
        m.trace.append(('construct_text', value))

    def compare():
        a, z = text_value(b.arg(0)), text_value(b.arg(1))
        result = (a > z) - (a < z)
        m.trace.append(('compare', a, z, result))
        return {b.x(0): result & 0xffffffff}

    def free():
        p = b.arg(0)
        assert p in allocated and p not in freed, ('invalid free', hex(p))
        if p in documents:
            assert m.get(p + 24) == 0 and m.get(p + 40) == 0
            assert m.get(p + 8) == 0x17c4378
        freed.add(p)
        m.trace.append(('free', p - heap))

    def stop():
        raise PrefixComplete()

    m.known.update({
        'Allocate': 0x36ea0, 'InitializeDocument': 0x45180,
        'Free': 0x37030, 'CompareText': 0x7e460,
        'JsonWriterTable': 0x17c43b8, 'JsonViewTable': 0x17c4368,
        '_ZN18ServiceResponseAbi6WriterixEPKc': 0x436b0,
        '_ZN18ServiceResponseAbi12JsonDocument8SetValueERKNS_9JsonValueE': 0x44100,
        '_ZN18ServiceResponseAbi6Writer7SetTextERKNS_4TextE': 0x44730,
        '_ZN18ServiceResponseAbi4TextC1EPKc': 0x7e7e0,
        '_ZNSt3__18ios_base4initEPv': 0xfa3aa0,
    })
    for address, callback in {
        0x36ea0: allocate, 0x45180: initialize, 0x37030: free,
        0x436b0: field, 0x44100: set_value, 0x44730: set_text,
        0x7e7e0: construct_text, 0x7e460: compare, 0xfa3aa0: stop,
    }.items():
        b.stub(address, callback)

    original_parse = m.parse

    def parse():
        original_parse()
        b.write(m.response_address, '<i', m.current['sdk'])
        b.write(m.response_address + 24, '<I', m.current['service'])

    b.stub(0x4c760, parse)
    execute = b.execute

    def prefix_execute(entry, *args):
        nonlocal cursor, top
        cursor, top = heap, 0
        names.clear(); documents.clear(); allocated.clear(); freed.clear()
        b.mu.mem_write(m.INCOMING, bytes(64))
        b.write(m.INCOMING + 48, '<I', m.current['http'])
        b.put(m.INCOMING + 40, object_for('fallback'))
        mode = m.current['header']
        if mode != 'empty':
            node = reserve()
            b.put(m.INCOMING + 24, node)
            key = {'hit': 'Ubi-TransactionId', 'before': 'AAA', 'after': 'ZZZ',
                   'left': 'Ubi-TransactionId', 'right': 'Ubi-TransactionId'}[mode]
            b.put(node + 32, object_for(key))
            b.put(node + 40, object_for('transaction-value'))
            if mode in ('left', 'right'):
                parent = reserve()
                b.put(m.INCOMING + 24, parent)
                b.put(parent + (0 if mode == 'left' else 8), node)
                b.put(parent + 32, object_for('ZZZ' if mode == 'left' else 'AAA'))
                b.put(parent + 40, object_for('wrong-parent-value'))
        try:
            execute(entry, *args)
        except PrefixComplete:
            # Capture heap state as well as calls, excluding uninitialized memory.
            m.trace.append(('heap', bytes(b.mu.mem_read(heap, cursor - heap)).hex()))
        else:
            raise AssertionError('Did not reach stream initialization boundary')

    b.execute = prefix_execute

    def install(source, name):
        code = m.build(source, name)
        b.mu.mem_write(b.MODEL, code)
        b.mu.ctl_remove_cache(b.MODEL, b.MODEL + 0x10000)
        return code

    code = install(m.source, 'json_candidate')
    cases = []
    for http, sdk, service, header, refs, scratch, kind in itertools.product(
            (200, 0xffffffff), (-71, 0, 0x7fffffff), (0, 0xf0000012),
            ('empty', 'hit', 'before', 'after', 'left', 'right'), (1, 3), (False, True), (2, 5)):
        cases.append(dict(complete=False, update=True, flip=False, state=1,
                          stopped=False, owners=1, callback='none', transfer=False,
                          kind=kind, http=http, sdk=sdk, service=service,
                          header=header, json_refs=refs, scratch=scratch))

    def check(case, save_failure=True):
        original, candidate = m.run(0x181f30, case), m.run(b.MODEL, case)
        if original != candidate:
            if save_failure:
                (m.out / 'json_failure.json').write_text(json.dumps(
                    dict(case=case, original=original, candidate=candidate), default=str, indent=2))
            raise AssertionError('JSON prefix differs; see json_failure.json')

    for case in cases:
        check(case)
    print('JSON PREFIX PASSED', len(cases), flush=True)
    source = m.source.read_text(encoding='utf-8')
    rejected = []
    mutants = [
        ('wrong_unsigned_flags', '0x1d6 : 0x1f6', '0x1f6 : 0x1f6', dict(cases[0], http=0xffffffff)),
        ('wrong_signed_flags', '0xb6 : 0x1f6', '0x1f6 : 0x1f6', cases[0]),
        ('wrong_header_direction', 'cmp < 0 ? n->right : n->left', 'cmp > 0 ? n->right : n->left', dict(cases[0], header='left')),
        ('wrong_header_fallback', 'return response->defaultHeader;', 'return candidate->value;', cases[0]),
        ('wrong_scratch_base', 'reinterpret_cast<uint32_t *>(scratch)[-1]', 'reinterpret_cast<uint32_t *>(scratch)[-2]', dict(cases[0], scratch=True)),
    ]
    for name, old, new, case in mutants:
        assert old in source
        path = m.out / (name + '.cpp')
        path.write_text(source.replace(old, new), encoding='utf-8')
        install(path, name)
        try:
            check(case, save_failure=False)
        except (AssertionError, KeyError):
            rejected.append(name)
        else:
            raise AssertionError('Accepted bad implementation ' + name)
    report = dict(cases=len(cases), negative_controls_rejected=rejected,
                  exact_credit=0, original_function='0x181f30', compiled_size=len(code),
                  source_sha256=hashlib.sha256(m.source.read_bytes()).hexdigest(),
                  original_sha256=hashlib.sha256(m.e.data).hexdigest(),
                  source_dependencies={'src/UbisoftStringStream.h': hashlib.sha256(
                      (m.ROOT / 'src/UbisoftStringStream.h').read_bytes()).hexdigest()},
                  compiler_flags=[x.replace(str(m.ROOT), '${REPO}') for x in m.flags],
                  limits=['Execution stops at ios_base::init; no full-function return or stack-restoration check.',
                          'JSON allocation, field lookup, numeric/text setters and text comparison are synthetic.',
                          'Checks numeric payloads, header selection and temporary cleanup before stream initialization.',
                          'Does not check stream formatting, final logging, concurrency or full-game behavior.'])
    (m.ROOT / 'progress/service_response_json_prefix.json').write_text(
        json.dumps(report, indent=2) + '\n', encoding='utf-8')
    print('JSON PREFIX REJECTED', rejected, flush=True)
