"""Recover named action inheritance, primary virtual tables, and direct calls."""
import argparse
import json
from pathlib import Path
import struct

from elf import Elf, require
from project import ROOT, digest, load


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--original', type=Path, required=True)
    parser.add_argument('--out', type=Path, required=True)
    args = parser.parse_args()
    elf = Elf(args.original)
    require(digest(elf.data) == load(ROOT/'config/target.json')['sha256'], 'Wrong original')
    rel = elf.relative_relocations()
    dynamic = elf.named['.dynsym']
    strings = elf.section_bytes(elf.sections[dynamic[6]])
    imported = {}
    relocations = elf.named['.rela.dyn']
    for offset in range(relocations[4], relocations[4]+relocations[5], relocations[9]):
        address, info, addend = struct.unpack_from('<QQq', elf.data, offset)
        index = info >> 32
        if not index:
            continue
        name_offset = struct.unpack_from('<I', elf.data, dynamic[4]+index*dynamic[9])[0]
        name = strings[name_offset:].split(b'\0')[0].decode()
        imported[address] = (name, addend)
    spans = elf.unwind_ranges()
    matched = {int(r['address'], 0): b['source']
               for b in load(ROOT/'config/builds.json')['builds'] for r in b['functions']}
    labels = {
        0x8e8890: 'Serialize (inferred)', 0x8e8ab0: 'Update (inferred)',
        0x8e8dd0: 'Setup (inferred)', 0x8e1690: 'ActorActionComponent setup (inferred)',
        0x8e65a0: 'Move serialization (inferred)', 0x8e7c90: 'Move update (inferred)',
        0x8e60c0: 'Move setup (inferred)',
        0x8e17a0: 'ActorActionComponent update (inferred)',
        0x67edd0: 'Component handle resolution (inferred)',
        0x85fd70: 'Apply position (inferred)', 0xbf6e80: 'Dispatch event (inferred)',
    }
    def type_name(rtti):
        address = rel.get(rtti+8)
        if address is None:
            return None
        try:
            return elf.at(address, 256).split(b'\0')[0].decode('ascii')
        except (ValueError, UnicodeDecodeError):
            return None
    def method(address, slot):
        size = spans[address]
        calls = []
        for offset in range(0, size, 4):
            word = struct.unpack('<I', elf.at(address+offset, 4))[0]
            if word & 0xfc000000 != 0x94000000:
                continue
            delta = word & 0x3ffffff
            if delta & 0x2000000:
                delta -= 0x4000000
            target = address+offset+delta*4
            calls.append(dict(site=hex(address+offset), target=hex(target),
                              inferred_role=labels.get(target)))
        return dict(slot=slot, address=hex(address), size=size,
                    original_sha256=digest(elf.at(address, size)),
                    inferred_role=labels.get(address), matched_source=matched.get(address),
                    direct_calls=calls)
    classes = []
    rodata = elf.named['.rodata']
    data = elf.section_bytes(rodata)
    for readable, name in [('SPTG::ActorJumpAction', 'N4SPTG15ActorJumpActionE'),
                           ('SPTG::ActorMoveAction', 'N4SPTG15ActorMoveActionE')]:
        needle = name.encode()+b'\0'
        require(data.count(needle) == 1, 'Ambiguous type name')
        string_address = rodata[3]+data.index(needle)
        candidates = [pointer-8 for pointer, value in rel.items() if value == string_address]
        require(len(candidates) == 1, 'Ambiguous RTTI')
        rtti = candidates[0]
        hierarchy = []
        current = rtti
        while current:
            name_at_current = type_name(current)
            require(name_at_current is not None and current not in [int(x['rtti'], 0) for x in hierarchy],
                    'Invalid/cyclic RTTI chain')
            hierarchy.append(dict(rtti=hex(current), type_name=name_at_current))
            kind = imported.get(current)
            if kind == ('_ZTVN10__cxxabiv117__class_type_infoE', 16):
                break
            require(kind == ('_ZTVN10__cxxabiv120__si_class_type_infoE', 16),
                    'Unexpected RTTI layout: '+repr(kind))
            base = rel.get(current+16)
            require(base is not None, 'Missing single-inheritance base pointer')
            current = base
        tables = []
        for pointer, value in rel.items():
            if value != rtti or rel.get(pointer+8) not in spans:
                continue
            if elf.at(pointer-8, 8) != bytes(8):
                continue
            functions = []
            for slot in range(128):
                address = rel.get(pointer+8+slot*8)
                if address not in spans:
                    break
                functions.append(method(address, slot))
            tables.append(dict(address=hex(pointer+8), functions=functions))
        require(tables, 'Missing primary vtable')
        classes.append(dict(class_name=readable, type_string=hex(string_address),
                            inheritance=hierarchy, primary_vtables=tables))
    player_table = 0x1873c70
    player_rtti = rel[player_table-8]
    require(type_name(player_rtti) == 'N4SPTG18ControllablePlayerE', 'Wrong player class')
    dispatch = []
    for offset, role in [(0x60, 'Type query'), (0xb0, 'Animation/state application'),
                         (0xb8, 'Animation/state request wrapper'),
                         (0xd8, 'Completion query forwarded to component at actor +0x70'),
                         (0xf0, 'Facing-related operation'), (0x1a0, 'Landing predicate'),
                         (0x750, 'Action identity query A'), (0x790, 'Action identity query B')]:
        address = rel[player_table+offset]
        require(address in spans, 'Missing player dispatch function')
        dispatch.append(dict(vtable_offset=hex(offset), inferred_role=role,
                             function=method(address, offset//8)))
    report = dict(original_sha256=digest(elf.data), classes=classes,
                  build_config_sha256=digest((ROOT/'config/builds.json').read_bytes()),
                  player_dispatch=dict(class_name='SPTG::ControllablePlayer',
                                       rtti=hex(player_rtti), vtable=hex(player_table), slots=dispatch),
                  limits='Original RTTI confirms class names; role names are inferred. '
                         'Tables stop at the first entry outside known FDE extents. '
                         'Direct calls omit indirect virtual calls and tail branches.')
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(report, indent=2)+'\n')
    for cls in classes:
        print(cls['class_name'], 'inheritance levels', len(cls['inheritance']),
              'virtual slots', [len(t['functions']) for t in cls['primary_vtables']])


if __name__ == '__main__':
    main()
