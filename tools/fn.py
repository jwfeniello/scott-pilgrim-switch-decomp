"""Function workbench: look at, diff, try and promote one function at a time.

Commands (run from the repository root; see docs/AGENT_GUIDE.md):

  show ADDR                       the original function's disassembly and the vtable slots that point at it
  diff BUILD SYMBOL ADDR          compile BUILD and print an aligned diff against the original, then EXACT or why not
  try FILE "SIGNATURE" ADDR       whole-function variants from stdin, separated by lines "====", with a diff count each;
                                  --keep writes the first exact one back into FILE
  add BUILD SYMBOL=ADDR ...       recheck BUILD's records and add new ones; config/builds.json changes only if all match
  new BUILD SOURCE                add an empty build entry that copies the flags of --like (default gameplay_player_stats)
  check [PATTERN]                 recompile the builds whose id contains PATTERN and check every record
  classes                         write build/dev/vtables.json from the original's RTTI
  unmatched                       unmatched functions with their vtable slots (--class, --min-size, --max-size, --limit)

SYMBOL is a unique substring of a mangled symbol, for example 11TimerAction5Start. Paths default like tools/verify.py:
--original orig/Scott_Switch.elf, compilers from SCOTT_CLANG7 / SCOTT_CLANG8 / SCOTT_LLD8 or toolchains/. Disassembly
uses capstone when it is installed (pip install capstone); without it the tools print instruction words.
"""
import argparse
import copy
import difflib
import json
import os
from pathlib import Path
import re
import struct
import subprocess
import sys

sys.path.insert(0, str(Path(__file__).resolve().parent))
from elf import Elf, link_method, require  # noqa: E402
from project import ROOT, digest, load  # noqa: E402
from discover_engine_families import recipe_for  # noqa: E402
from verify import build_commands, build_output  # noqa: E402

WORK = ROOT / 'build/dev'
NO_WINDOW = getattr(subprocess, 'CREATE_NO_WINDOW', 0)
BRANCHES = ('b', 'bl', 'cbz', 'cbnz', 'tbz', 'tbnz')


# ----------------------------------------------------------------------------------------------------------------------
# Setup

class Context:
    def __init__(self, args):
        self.args = args
        self._original = None
        self._relative = None
        self._spans = None
        self._vtables = None

    @property
    def original(self):
        if self._original is None:
            path = self.args.original
            require(path.exists(), f'Original ELF not found: {path} (place it in orig/ or pass --original)')
            self._original = Elf(path)
            require(digest(self._original.data) == load(ROOT / 'config/target.json')['sha256'],
                    'Original ELF SHA-256 does not match this target')
        return self._original

    @property
    def relative(self):
        if self._relative is None:
            self._relative = self.original.relative_relocations()
        return self._relative

    @property
    def spans(self):
        if self._spans is None:
            self._spans = self.original.unwind_ranges()
        return self._spans

    def compilers(self):
        return {'7.0.1': self.args.clang7.resolve(), '8.0.1': self.args.clang8.resolve()}

    def vtables(self):
        if self._vtables is None:
            path = WORK / 'vtables.json'
            if not path.exists():
                write_vtables(self, path)
            self._vtables = json.loads(path.read_text(encoding='utf-8'))
        return self._vtables


def builds_path():
    return ROOT / 'config/builds.json'


def load_builds():
    return json.loads(builds_path().read_text(encoding='utf-8'))


def save_builds(configuration):
    """Write config/builds.json in the layout and line endings it already has."""
    path = builds_path()
    crlf = b'\r\n' in path.read_bytes()[:4096]
    text = json.dumps(configuration, indent=2) + '\n'
    path.write_bytes((text.replace('\n', '\r\n') if crlf else text).encode('utf-8'))


def find_build(configuration, build_id):
    found = [b for b in configuration['builds'] if b['id'] == build_id]
    require(len(found) == 1, f'No build with id {build_id}')
    return found[0]


def compile_build(context, build, tag=None):
    """Compile a build exactly as tools/verify.py does and return the object to read."""
    folder = WORK / 'objects'
    folder.mkdir(parents=True, exist_ok=True)
    if tag:
        build = dict(build, id=build['id'] + '.' + tag)
    compiler = context.compilers()[build['compiler']]
    for command in build_commands(build, compiler, ROOT, folder, context.args.lld8.resolve()):
        result = subprocess.run(command, capture_output=True, text=True, cwd=ROOT, creationflags=NO_WINDOW,
                                env=dict(os.environ, TMP=str(folder), TEMP=str(folder)))
        if result.returncode:
            errors = [line for line in result.stderr.splitlines() if 'error' in line] or result.stderr.splitlines()
            raise ValueError('Compile failed:\n' + '\n'.join(errors[:12]))
    return Elf(build_output(build, folder))


def function_symbols(obj):
    return [name for record, name in zip(*obj.symbols()) if record[1] & 15 == 2 and record[5]]


def resolve_symbol(obj, part):
    names = function_symbols(obj)
    exact = [n for n in names if n == part]
    found = exact or [n for n in names if part in n]
    require(len(found) == 1, f'Symbol {part!r} matches {len(found)} functions: {found[:6]}')
    return found[0]


def parse_address(text):
    return int(text, 16) if not text.lower().startswith('0x') else int(text, 0)


def check_function(context, obj, symbol, address):
    """('EXACT', recipe) when the whole function matches with checked relocations, else ('fail', reason)."""
    require(address in context.spans, f'{address:#x} is not the start of an original function')
    try:
        recipe, _ = recipe_for(obj, symbol, address, context.spans[address], context.original, context.relative)
        return 'EXACT', recipe
    except (ValueError, AssertionError, KeyError) as error:
        return 'fail', str(error)


# ----------------------------------------------------------------------------------------------------------------------
# Disassembly and diff

def disassemble(raw, address):
    """Lines of 'mnemonic operands'. Uses capstone when available, else raw words."""
    try:
        import capstone
    except ImportError:
        return ['.word %#010x' % w for w in struct.unpack('<%dI' % (len(raw) // 4), raw)]
    engine = capstone.Cs(capstone.CS_ARCH_ARM64, capstone.CS_MODE_ARM)
    lines = []
    for offset in range(0, len(raw), 4):
        decoded = list(engine.disasm(raw[offset:offset + 4], address + offset))
        lines.append(('%s %s' % (decoded[0].mnemonic, decoded[0].op_str)).strip() if decoded
                     else '.word %#010x' % struct.unpack_from('<I', raw, offset)[0])
    return lines


def normalize(lines):
    """Hide what relocation and placement change: branch targets, page addresses and the low 12 bits that follow an
    adrp into the same register. Both sides get the same treatment, so the diff shows only real differences."""
    out = []
    pages = set()
    for line in lines:
        text = ' '.join(line.split())
        text = re.sub(r'#(-?0x[0-9a-f]+)', lambda m: '#%d' % int(m.group(1), 16), text)
        text = re.sub(r'^orr (w\d+|x\d+), (wzr|xzr), #(\d+)$', r'mov \1, #\3', text)
        mnemonic, _, operands = text.partition(' ')
        registers = re.findall(r'\b[wx](\d+)\b', operands)
        if mnemonic in BRANCHES or mnemonic.startswith('b.'):
            text = re.sub(r'#-?\d+$', '#T', text)
        elif mnemonic == 'adrp':
            text = re.sub(r'#-?\d+$', '#P', text)
            pages.add(registers[0])
            out.append(text)
            continue
        elif mnemonic == 'add' and len(registers) >= 2 and registers[1] in pages and re.search(r'#\d+$', text):
            text = re.sub(r'#\d+$', '#L', text)
        else:
            base = re.search(r'\[x(\d+)(, #(\d+))?\]', text)
            if base and base.group(1) in pages:
                text = text.replace(base.group(0), '[x%s, #L]' % base.group(1))
        if registers and mnemonic not in ('str', 'stur', 'stp', 'strb', 'strh', 'cmp', 'cmn', 'tst', 'cbz', 'cbnz',
                                          'tbz', 'tbnz', 'b', 'bl', 'br', 'blr', 'ret') and not mnemonic.startswith('b.'):
            pages.discard(registers[0])
        out.append(text)
    return out


def aligned_diff(original_lines, our_lines, context_lines=2):
    """Unified-style hunks: ' - ' lines are the original, ' + ' ours. Returns (text, changed line count)."""
    a, b = normalize(original_lines), normalize(our_lines)
    matcher = difflib.SequenceMatcher(None, a, b, autojunk=False)
    out, changed = [], 0
    for tag, i1, i2, j1, j2 in matcher.get_opcodes():
        if tag == 'equal':
            continue
        out.append('@@ original %d, ours %d' % (i1, j1))
        out.extend('    ' + a[k] for k in range(max(0, i1 - context_lines), i1))
        out.extend(' -  ' + a[k] for k in range(i1, i2))
        out.extend(' +  ' + b[k] for k in range(j1, j2))
        changed += (i2 - i1) + (j2 - j1)
    return '\n'.join(out), changed


def our_lines(obj, symbol):
    code, relocations = obj.method(symbol)
    lines = disassemble(code, 0)
    for relocation in relocations:
        index = relocation['offset'] // 4
        if 0 <= index < len(lines):
            lines[index] += '  ; ' + (relocation['symbol'] or 'section')
    return [line.split('  ; ')[0] for line in lines], lines


def report_function(context, obj, symbol, address, show=True, limit=200):
    status, detail = check_function(context, obj, symbol, address)
    original = disassemble(context.original.at(address, context.spans[address]), address)
    ours, _ = our_lines(obj, symbol)
    text, changed = aligned_diff(original, ours)
    if show and text:
        print('\n'.join(text.splitlines()[:limit]))
    size = len(obj.method(symbol)[0])
    print('%s %#x %s  original %d bytes, ours %d, %d differing lines%s' % (
        status, address, symbol, context.spans[address], size, changed,
        '' if status == 'EXACT' else '  (' + detail + ')'))
    return status, changed


# ----------------------------------------------------------------------------------------------------------------------
# RTTI

def demangle_type(name):
    """Readable form of a mangled type name for plain nested names (N4SPTG7StrikerE -> SPTG::Striker)."""
    text = name[1:] if name.startswith('N') else name
    parts, i = [], 0
    while i < len(text) and text[i].isdigit():
        j = i
        while j < len(text) and text[j].isdigit():
            j += 1
        length = int(text[i:j])
        parts.append(text[j:j + length])
        i = j + length
        if i < len(text) and text[i] == 'I':
            parts[-1] += '<...>'
            break
    return '::'.join(parts) if parts else name


def write_vtables(context, path):
    """Find primary and secondary vtables through their typeinfo objects and type-name strings."""
    original, relative = context.original, context.relative
    text = original.named['.text']
    text_start, text_end = text[3], text[3] + text[5]
    by_value = {}
    for address, value in relative.items():
        by_value.setdefault(value, []).append(address)

    def type_name(address):
        try:
            raw = original.at(address, 2)
        except ValueError:
            return None
        if not (raw[:1] in (b'N', b'Z') or raw[:1].isdigit()):
            return None
        data = bytearray()
        for offset in range(address, address + 4096, 16):
            try:
                chunk = original.at(offset, 16)
            except ValueError:
                break
            data += chunk
            if b'\0' in chunk:
                break
        name = bytes(data).split(b'\0', 1)[0]
        if not re.fullmatch(rb'(N[0-9A-Za-z_$]+E|Z[0-9A-Za-z_$]+|[1-9][0-9][0-9A-Za-z_$]*|[1-9][A-Za-z_][0-9A-Za-z_$]*)',
                            name):
            return None
        return name.decode()

    classes = {}
    for value in sorted(by_value):
        name = type_name(value)
        if not name:
            continue
        for name_cell in by_value[value]:
            typeinfo = name_cell - 8
            for typeinfo_cell in by_value.get(typeinfo, []):
                vtable = typeinfo_cell - 8
                if vtable in relative or (vtable + 16) not in relative:
                    continue
                if not text_start <= relative[vtable + 16] < text_end:
                    continue
                offset_to_top = struct.unpack('<q', original.at(vtable, 8))[0]
                slots, cell = [], vtable + 16
                while cell in relative and text_start <= relative[cell] < text_end:
                    slots.append(hex(relative[cell]))
                    cell += 8
                entry = dict(vtable=hex(vtable + 16), offset=offset_to_top, slots=slots)
                classes.setdefault(name, []).append(entry)
    result = {}
    for name, entries in sorted(classes.items()):
        entries.sort(key=lambda e: (e['offset'] != 0, -e['offset']))
        result[name] = dict(name=demangle_type(name), vtable=entries[0]['vtable'], slots=entries[0]['slots'],
                            secondary=entries[1:])
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(result, indent=1) + '\n', encoding='utf-8')
    return result


def slot_labels(context):
    """address -> ['Class[slot]', ...] from the primary vtables."""
    labels = {}
    for entry in context.vtables().values():
        for index, slot in enumerate(entry['slots']):
            labels.setdefault(int(slot, 16), []).append('%s[%d]' % (entry['name'], index))
    return labels


def matched_addresses(configuration):
    return {int(r['address'], 0): (b['id'], r['symbol']) for b in configuration['builds'] for r in b['functions']}


# ----------------------------------------------------------------------------------------------------------------------
# Commands

def command_show(context, args):
    address = parse_address(args.address)
    require(address in context.spans, f'{address:#x} is not the start of an original function')
    size = context.spans[address]
    labels = slot_labels(context)
    matched = matched_addresses(load_builds())
    names = {a: s for a, (b, s) in matched.items()}
    print('%#x  %d bytes  %s' % (address, size, 'matched in ' + matched[address][0] if address in matched else 'unmatched'))
    if address in labels:
        print('vtable slots:', ', '.join(labels[address][:8]) + (' (+%d more)' % (len(labels[address]) - 8)
                                                                  if len(labels[address]) > 8 else ''))
    for offset, line in enumerate(disassemble(context.original.at(address, size), address)):
        target = re.search(r'#(0x[0-9a-f]+)$', line)
        note = ''
        if target and line.split(' ')[0] in ('b', 'bl'):
            value = int(target.group(1), 16)
            note = names.get(value) or (labels.get(value) or [''])[0]
            note = '  <%s>' % note if note else ''
        print('%5x  %s%s' % (offset * 4, line, note))


def command_diff(context, args):
    configuration = load_builds()
    build = find_build(configuration, args.build)
    obj = compile_build(context, build)
    symbol = resolve_symbol(obj, args.symbol)
    status, _ = report_function(context, obj, symbol, parse_address(args.address), limit=args.lines)
    return 0 if status == 'EXACT' else 1


def mangled_part(signature):
    name = signature.split('(')[0].split()[-1]
    parts = name.split('::')[-2:]
    return ''.join('%d%s' % (len(p), p) for p in parts)


def command_try(context, args):
    source = (ROOT / args.file) if not Path(args.file).is_absolute() else Path(args.file)
    require(source.exists(), f'No such source file: {args.file}')
    relative_source = source.resolve().relative_to(ROOT.resolve()).as_posix()
    configuration = load_builds()
    candidates = [b for b in configuration['builds'] if b['source'] == relative_source]
    require(len(candidates) == 1 or args.build, f'{relative_source} belongs to {len(candidates)} builds; pass --build')
    build = find_build(configuration, args.build) if args.build else candidates[0]
    raw = source.read_bytes().decode('utf-8')
    crlf = '\r\n' in raw
    text = raw.replace('\r\n', '\n')
    start = text.find(args.signature)
    require(start >= 0, 'Signature not found in ' + relative_source)
    end = text.find('\n}\n', start)
    require(end >= 0, 'No closing brace at the start of a line after the signature')
    end += 3
    variants = [v if v.endswith('\n') else v + '\n' for v in re.split(r'^====\s*$\n?', sys.stdin.read(), flags=re.M)
                if v.strip()]
    require(bool(variants), 'No variants on standard input')
    address = parse_address(args.address)
    part = args.symbol or mangled_part(args.signature)
    temporary = source.with_name(source.stem + '.fn_try' + source.suffix)
    trial = dict(build, source=temporary.relative_to(ROOT.resolve()).as_posix())
    for index, variant in enumerate(variants):
        candidate = text[:start] + variant + text[end:]
        temporary.write_bytes(candidate.encode('utf-8'))
        try:
            obj = compile_build(context, trial, tag='try')
        except ValueError as error:
            print('variant %d: compile error:' % index, ' | '.join(str(error).splitlines()[1:3]))
            continue
        finally:
            temporary.unlink(missing_ok=True)
        symbol = resolve_symbol(obj, part)
        print('variant %d:' % index, end=' ')
        status, changed = report_function(context, obj, symbol, address, show=args.show == index, limit=args.lines)
        if status == 'EXACT' and args.keep:
            final = candidate.replace('\n', '\r\n') if crlf else candidate
            source.write_bytes(final.encode('utf-8'))
            print('kept variant', index, 'in', relative_source)
            return 0
    return 1


def command_add(context, args):
    configuration = load_builds()
    build = find_build(configuration, args.build)
    obj = compile_build(context, build)
    claimed = {int(r['address'], 0): b['id'] for b in configuration['builds'] for r in b['functions']}
    pairs = [(r['symbol'], int(r['address'], 0)) for r in build['functions']]
    for item in args.pairs:
        part, _, text = item.rpartition('=')
        require(bool(part), f'Expected SYMBOL=ADDR, got {item!r}')
        address = parse_address(text)
        require(address not in claimed, f'{address:#x} is already credited in build {claimed.get(address)}')
        pairs.append((resolve_symbol(obj, part), address))
    found, failures = [], []
    for symbol, address in pairs:
        status, detail = check_function(context, obj, symbol, address)
        if status == 'EXACT':
            found.append(detail)
        else:
            failures.append((hex(address), symbol, detail))
    print('%s: %d functions match (%d bytes), %d fail' % (build['id'], len(found), sum(r['size'] for r in found),
                                                          len(failures)))
    for failure in failures:
        print('  fail', *failure)
    if failures:
        print('config/builds.json not changed')
        return 1
    build['functions'] = sorted(found, key=lambda r: int(r['address'], 0))
    save_builds(configuration)
    print('config/builds.json updated')
    return 0


def command_new(context, args):
    configuration = load_builds()
    require(not any(b['id'] == args.build for b in configuration['builds']), f'Build {args.build} already exists')
    require((ROOT / args.source).exists(), f'Write {args.source} first')
    model = find_build(configuration, args.like)
    entry = {key: copy.deepcopy(value) for key, value in model.items()
             if key not in ('id', 'source', 'functions')}
    entry = dict(id=args.build, source=args.source, **entry, functions=[])
    index = configuration['builds'].index(model)
    configuration['builds'].insert(index + 1, entry)
    save_builds(configuration)
    print('added build', args.build, 'with the flags of', args.like)
    return 0


def command_check(context, args):
    configuration = load_builds()
    selected = [b for b in configuration['builds'] if (args.pattern or '') in b['id'] and b['functions']]
    require(bool(selected), 'No matching builds with records')
    problems = 0
    for build in selected:
        try:
            obj = compile_build(context, build)
        except ValueError as error:
            print(build['id'], 'compile failed:', str(error).splitlines()[1:2])
            problems += 1
            continue
        for recipe in build['functions']:
            address = int(recipe['address'], 0)
            try:
                linked, _ = link_method(obj, recipe, context.original, context.relative)
                ok = linked == context.original.at(address, recipe['size'])
            except (ValueError, KeyError) as error:
                ok, linked = False, str(error)
            if not ok:
                problems += 1
                print(build['id'], recipe['address'], recipe['symbol'], 'differs')
    print('%d builds, %d problems' % (len(selected), problems))
    return 1 if problems else 0


def command_classes(context, args):
    path = WORK / 'vtables.json'
    result = write_vtables(context, path)
    print('wrote', path.relative_to(ROOT), 'with', len(result), 'classes')
    return 0


def command_unmatched(context, args):
    labels = slot_labels(context)
    matched = matched_addresses(load_builds())
    pattern = re.compile(args.cls) if args.cls else None
    rows = []
    for address, size in context.spans.items():
        if address in matched or size < args.min_size or (args.max_size and size > args.max_size):
            continue
        names = labels.get(address, [])
        if pattern and not any(pattern.search(n) for n in names):
            continue
        if args.classes_only and not names:
            continue
        rows.append((size, address, names))
    rows.sort()
    for size, address, names in rows[:args.limit]:
        shown = ', '.join(names[:3]) + (' (+%d)' % (len(names) - 3) if len(names) > 3 else '')
        print('%#x %6d  %s' % (address, size, shown))
    print('%d functions, %d bytes' % (len(rows), sum(r[0] for r in rows)))
    return 0


def main(argv=None):
    parser = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument('--original', type=Path, default=ROOT / 'orig/Scott_Switch.elf')
    parser.add_argument('--clang7', type=Path, default=os.environ.get('SCOTT_CLANG7', 'toolchains/llvm701/bin/clang++'))
    parser.add_argument('--clang8', type=Path, default=os.environ.get('SCOTT_CLANG8', 'toolchains/llvm801/bin/clang++'))
    parser.add_argument('--lld8', type=Path, default=os.environ.get('SCOTT_LLD8', 'toolchains/llvm801/bin/ld.lld'))
    commands = parser.add_subparsers(dest='command', required=True)
    p = commands.add_parser('show')
    p.add_argument('address')
    p = commands.add_parser('diff')
    p.add_argument('build')
    p.add_argument('symbol')
    p.add_argument('address')
    p.add_argument('--lines', type=int, default=200)
    p = commands.add_parser('try')
    p.add_argument('file')
    p.add_argument('signature')
    p.add_argument('address')
    p.add_argument('--build')
    p.add_argument('--symbol', help='Mangled substring when the signature does not give Class::Name')
    p.add_argument('--keep', action='store_true')
    p.add_argument('--show', type=int, default=-1, help='Print the diff of this variant')
    p.add_argument('--lines', type=int, default=200)
    p = commands.add_parser('add')
    p.add_argument('build')
    p.add_argument('pairs', nargs='*')
    p = commands.add_parser('new')
    p.add_argument('build')
    p.add_argument('source')
    p.add_argument('--like', default='gameplay_player_stats')
    p = commands.add_parser('check')
    p.add_argument('pattern', nargs='?')
    commands.add_parser('classes')
    p = commands.add_parser('unmatched')
    p.add_argument('--class', dest='cls', help='Regular expression on Class[slot] labels')
    p.add_argument('--classes-only', action='store_true', help='Only functions some vtable points at')
    p.add_argument('--min-size', type=int, default=0)
    p.add_argument('--max-size', type=int, default=0)
    p.add_argument('--limit', type=int, default=60)
    args = parser.parse_args(argv)
    context = Context(args)
    handler = globals()['command_' + args.command]
    try:
        return handler(context, args) or 0
    except ValueError as error:
        print('error:', error, file=sys.stderr)
        return 2


if __name__ == '__main__':
    sys.exit(main())
