"""Check RTTI/type-getter and member-function state links in the private original."""
import argparse
import json
from pathlib import Path
import struct

from elf import Elf, require
from project import ROOT, digest, load


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--original', required=True, type=Path)
    parser.add_argument('--out', required=True, type=Path)
    args = parser.parse_args()
    elf = Elf(args.original)
    require(digest(elf.data) == load(ROOT/'config/target.json')['sha256'], 'Wrong original')
    rel, spans = elf.relative_relocations(), elf.unwind_ranges()
    ro = elf.named['.rodata']; data = elf.section_bytes(ro)
    def function(a):
        n = spans[a]
        return dict(address=hex(a), size=n, sha256=digest(elf.at(a, n)))
    def vtable(name):
        needle = name.encode()+b'\0'
        require(data.count(needle) == 1, 'Ambiguous RTTI name')
        address = ro[3]+data.index(needle)
        rttis = [p-8 for p, value in rel.items() if value == address]
        require(len(rttis) == 1, 'Ambiguous RTTI object')
        rtti = rttis[0]
        tables = [p+8 for p, value in rel.items() if value == rtti and
                  rel.get(p+8) in spans and elf.at(p-8, 8) == bytes(8)]
        require(len(tables) == 1, 'Ambiguous primary vtable')
        return tables[0], rtti, address
    def constants(a):
        # Complete straight-line constant getters; include ORR Wd,WZR,#1 alias.
        words = struct.unpack('<'+'I'*(spans[a]//4), elf.at(a, spans[a]))
        require(words[-1] == 0xd65f03c0, 'Getter lacks terminal RET')
        values = {}
        for word in words[:-1]:
            reg, shift, imm = word & 31, ((word >> 21) & 3)*16, (word >> 5) & 65535
            if word & 0xffffffe0 == 0x320003e0:
                values[reg] = 1
                continue
            opcode = word & 0xff800000
            require(shift <= 16 and opcode in [0x52800000, 0x72800000], 'Unexpected getter instruction')
            if opcode == 0x52800000: values[reg] = imm << shift
            else:
                require(reg in values, 'Uninitialized getter register')
                values[reg] = (values[reg] & ~(65535 << shift)) | (imm << shift)
        return values
    components = []
    for name, readable, expected in [
            ('N4Onyx9TransformE', 'Onyx::Transform', 0x022fe74a),
            ('N4SPTG14GraphicsObjectE', 'SPTG::GraphicsObject', 0x2eae5813),
            ('N4SPTG25ControllablePlayerCatalogE', 'SPTG::ControllablePlayerCatalog', 0x0d8ae596),
            ('N4SPTG14PlayfieldActorE', 'SPTG::PlayfieldActor', 0x21350526)]:
        table, rtti, string = vtable(name)
        getter = rel[table+0x58]
        require(constants(getter) == {0: expected}, 'Unexpected component type ID')
        components.append(dict(class_name=readable, type_id=hex(expected), rtti=hex(rtti),
                               type_string=hex(string), primary_vtable=hex(table), type_getter=function(getter)))
    table, rtti, string = vtable('N4SPTG18ControllablePlayerE')
    states = []
    for getter_slot in [0x750, 0x790]:
        getter = rel[table+getter_slot]
        pair = constants(getter)
        require(set(pair) == {0, 1} and pair[1] == 1, 'Expected unadjusted virtual member pointer')
        handler = rel[table+pair[0]]
        states.append(dict(getter_slot=hex(getter_slot), getter=function(getter),
                           member_pointer=[hex(pair[0]), hex(pair[1])], handler_slot=hex(pair[0]),
                           handler=function(handler)))
    remapping = [dict(address=hex(a), ids=list(struct.unpack('<8I', elf.at(a, 32))))
                 for a in [0x1349240, 0x13490e0, 0x1349120]]
    result = dict(original_sha256=digest(elf.data), components=components,
                  player=dict(class_name='SPTG::ControllablePlayer', primary_vtable=hex(table),
                              rtti=hex(rtti), type_string=hex(string), state_members=states),
                  request_remapping=remapping,
                  unresolved=[dict(type_id='0x29fbe438', observed_component_slot='actor+0x70',
                                   query_slot='component vtable+0xa0', class_name=None)], exact_credit=0)
    args.out.parent.mkdir(parents=True, exist_ok=True)
    args.out.write_text(json.dumps(result, indent=2)+'\n')
    print(json.dumps(result, indent=2))


if __name__ == '__main__':
    main()
