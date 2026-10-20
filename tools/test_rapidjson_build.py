"""Repeat RapidJSON bodies, check their dispatch table, and reject altered headers."""
import argparse
import json
import re
import shutil
from pathlib import Path

from discover_engine_families import compile_family
from elf import Elf, link_method, require
from project import ROOT, digest, load


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--original', type=Path, required=True)
    parser.add_argument('--clang8', type=Path, required=True)
    parser.add_argument('--build-dir', type=Path, required=True)
    parser.add_argument('--build-id', default='rapidjson_reader')
    args = parser.parse_args()
    folder = args.build_dir.resolve()
    folder.mkdir(parents=True, exist_ok=True)
    original = Elf(args.original)
    require(digest(original.data) == load(ROOT/'config/target.json')['sha256'], 'Wrong original')
    relative = original.relative_relocations()
    build = next(b for b in load(ROOT/'config/builds.json')['builds'] if b['id'] == args.build_id)
    source = ROOT/build['source']
    first = compile_family(args.clang8, source, folder/'first.o', build)
    second = compile_family(args.clang8, source, folder/'second.o', build)
    require(first.data == second.data, 'Repeated objects differ')
    tables = []
    symbols = {name: symbol for symbol, name in zip(*second.symbols())}
    for recipe in build['functions']:
        code, _ = link_method(second, recipe, original, relative)
        require(code == original.at(int(recipe['address'], 0), recipe['size']), 'Repeat differs')
        if '' in recipe['bindings']:
            section = second.named['.rodata.' + recipe['symbol']]
            table = second.section_bytes(section)
            address = int(recipe['bindings'][''], 0)
            require(table == original.at(address, len(table)), 'Dispatch table differs')
            tables.append(dict(function=recipe['address'], address=hex(address),
                               size=len(table), sha256=digest(table)))
        references = dict(recipe['bindings'])
        references.update({name: value['pointee'] for name, value in recipe['got_bindings'].items()})
        for name, target in references.items():
            symbol = symbols.get(name)
            if not symbol or symbol[1] & 15 != 1 or not symbol[3] or not symbol[5]:
                continue
            section = second.sections[symbol[3]]
            require(section[1] == 1 and not section[2] & 1, 'Expected immutable object')
            table = second.section_bytes(section)[symbol[4]:symbol[4] + symbol[5]]
            require(table == original.at(int(target, 0), len(table)), 'Immutable object differs: ' + name)
            tables.append(dict(function=recipe['address'], symbol=name, address=target,
                               size=len(table), sha256=digest(table)))

    # Alter a separate temporary copy; the tracked headers remain unchanged.
    headers = folder/'altered_include'
    shutil.copytree(ROOT/'vendor/rapidjson-1.1.0/include', headers, dirs_exist_ok=True)
    targets = {
        'reader.h': ['ParseFalse', 'ParseTrue', 'ParseHex4', 'ParseValue'],
        'document.h': ['Int64', 'Uint64'],
        'encodings.h': ['Encode'],
    }
    if build['id'].startswith('rapidjson_writer'):
        targets.update({
            'writer.h': ['StartArray', 'StartObject', 'WriteDouble', 'WriteString',
                         'Int', 'Int64', 'Prefix', 'WriteBool', 'WriteNull'],
            'internal/dtoa.h': ['Grisu2', 'DigitGen', 'Prettify'],
            'internal/itoa.h': ['u32toa', 'u64toa'],
        })
        targets['document.h'].append('Accept')
    injections = {}
    for filename, names in targets.items():
        path = headers/'rapidjson'/filename
        text = path.read_text()
        for name in names:
            pattern = r'(\b' + name + r'\s*\([^;{}]*\)\s*(?:const\s*)?\{)'
            text, count = re.subn(pattern, r'\1 ::rapidjson_negative_effect();', text)
            require(count > 0, 'Missing source control target: ' + name)
            injections[filename + ':' + name] = count
        path.write_text('extern "C" void rapidjson_negative_effect();\n' + text)
    flags = [str(headers) if v == 'vendor/rapidjson-1.1.0/include' else v
             for v in build['flags']]
    wrong = compile_family(args.clang8, source, folder/'wrong.o', dict(flags=flags))
    causes = {}
    for recipe in build['functions']:
        try:
            code, _ = link_method(wrong, recipe, original, relative)
        except (ValueError, KeyError) as exc:
            cause = type(exc).__name__ + ': ' + str(exc).split(':')[0]
        else:
            require(code != original.at(int(recipe['address'], 0), recipe['size']),
                    'Altered source unexpectedly matches')
            cause = 'different complete bytes'
        causes[cause] = causes.get(cause, 0) + 1
    report = dict(id=build['id'], source_sha256=digest(source.read_bytes()),
                  header_manifest_sha256=digest((ROOT/'vendor/rapidjson_sha256.json').read_bytes()),
                  identical_repeat_objects=True, repeat_object_sha256=digest(first.data),
                  repeated_exact_functions=len(build['functions']),
                  exact_bytes=sum(r['size'] for r in build['functions']),
                  negative_control='external_side_effect_in_each_credited_template_definition',
                  rejected_functions=sum(causes.values()), rejection_causes=causes,
                  header_injections=injections, immutable_tables=tables)
    (folder/'rapidjson_validation.json').write_text(json.dumps(report, indent=2) + '\n')
    print(json.dumps(report, indent=2))


if __name__ == '__main__':
    main()
