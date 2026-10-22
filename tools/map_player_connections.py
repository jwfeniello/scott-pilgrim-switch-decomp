"""Map player-update calls, RTTI owners, state getters, and reviewed regions."""
import argparse
from collections import Counter
import json
from pathlib import Path
import struct

from elf import Elf, require
from project import ROOT, digest, load


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--original', type=Path, required=True)
    p.add_argument('--out', type=Path, required=True)
    args = p.parse_args()
    elf = Elf(args.original)
    require(digest(elf.data) == load(ROOT/'config/target.json')['sha256'], 'Wrong original')
    rel, spans = elf.relative_relocations(), elf.unwind_ranges()
    def name(rtti):
        try: return elf.at(rel[rtti+8], 2000).split(b'\0')[0].decode('ascii')
        except (KeyError, ValueError, UnicodeDecodeError): return None
    def info(a): return dict(address=hex(a), size=spans[a], sha256=digest(elf.at(a, spans[a])))
    owners = []
    for pointer, rtti in rel.items():
        if rel.get(pointer+8) not in spans: continue
        try: header = elf.at(pointer-8, 8)
        except ValueError: continue
        if header != bytes(8): continue
        type_name = name(rtti)
        if not type_name or not type_name.startswith('N'): continue
        table, slot = pointer+8, 0
        # Stop at the first non-function entry; do not walk into adjacent tables.
        while rel.get(table+slot) in spans:
            target = rel[table+slot]
            if target in [0x97af50, 0x7af970]:
                owners.append(dict(type_name=type_name, rtti=hex(rtti), primary_vtable=hex(table),
                                   slot=hex(slot), target=hex(target)))
            slot += 8
    calls = []
    for offset in range(0, spans[0x97af50], 4):
        site = 0x97af50+offset; word = struct.unpack('<I', elf.at(site, 4))[0]
        if word & 0xfc000000 != 0x94000000: continue
        delta = word & 0x3ffffff
        if delta & 0x2000000: delta -= 0x4000000
        calls.append(dict(site=hex(site), target=hex(site+delta*4)))
    counts = Counter(call['target'] for call in calls)
    state_slots = []
    def immediate(word):
        if word & 0xffe0001f == 0x52800000: return (word >> 5) & 65535
        require(word & 0xff8003ff == 0x320003e0, 'Expected W0 logical immediate from WZR')
        imms, immr = (word >> 10) & 63, (word >> 16) & 63
        length = ((~imms) & 63).bit_length()-1
        require(1 <= length <= 5, 'Invalid logical immediate width')
        width = 1 << length; levels = width-1
        s, rotate = imms & levels, immr & levels
        require(s != levels, 'Invalid logical immediate mask')
        mask = (1 << (s+1))-1
        mask = ((mask >> rotate) | (mask << (width-rotate))) & ((1 << width)-1)
        return sum(mask << shift for shift in range(0, 32, width))
    for slot in [0x308, 0x730, 0x750, 0x760, 0x790]:
        getter = rel[0x1873c70+slot]
        # Constant W0 (MOVZ or ORR alias), ORR W1,WZR,#1, and RET.
        require(spans[getter] == 12, 'Getter extent differs')
        words = struct.unpack('<3I', elf.at(getter, 12))
        require(words[1] & 0xffffffe0 == 0x320003e0 and words[1] & 31 == 1 and
                words[2] == 0xd65f03c0, 'Unexpected member getter')
        handler_slot = immediate(words[0])
        state_slots.append(dict(slot=hex(slot), getter=info(getter), member_pointer=[hex(handler_slot), '0x1'],
                                handler=info(rel[0x1873c70+handler_slot])))
    animation_table = 0x18663b0
    rtti = rel[animation_table-8]
    require(name(rtti) == 'N4SPTG25AnimationInfoHolderSwitchE', 'Wrong animation RTTI')
    require(rel[animation_table+0xa0] == 0x8cd9f0, 'Wrong candidate query')
    hierarchy = []
    current = 0x1875500
    for _ in range(16):
        n = name(current)
        if not n: break
        hierarchy.append(dict(rtti=hex(current), type_name=n))
        if n == 'N4Onyx9Component4BaseE': break
        current = rel.get(current+16, 0)
    result = dict(original_sha256=digest(elf.data), exact_credit=0,
                  player_update=info(0x97af50), collision_solver=info(0x7af970),
                  virtual_owners=owners, player_state_getters=state_slots,
                  direct_call_sites=calls,
                  direct_call_counts=sorted([dict(target=k, count=v) for k, v in counts.items()], key=lambda r: (-r['count'], r['target'])),
                  player_hierarchy=hierarchy,
                  animation_candidate=dict(class_name='SPTG::AnimationInfoHolderSwitch', primary_vtable=hex(animation_table),
                      rtti=hex(rtti), query=info(0x8cd9f0), rate_setter=info(0x8cd980),
                      player_resolver_binding_proven=False),
                  reviewed_regions=[
                      dict(start='0x97b10c', end='0x97b134', role='Signed countdown; zero enters reset path', evidence='instruction inspection'),
                      dict(start='0x97b3b0', end='0x97b464', role='Recover action-selected state to getter +0x308', evidence='bounded region comparisons'),
                      dict(start='0x97bc88', end='0x97bcbc', role='Store shifted input bits then transition through +0x760', evidence='instruction inspection'),
                      dict(start='0x97c624', end='0x97c6b8', role='Accumulate timer and conditionally transition through +0x730 after >3', evidence='bounded region comparisons'),
                      dict(start='0x97cc0c', end='0x97cc94', role='Action state suppresses a path to +0x2f0 and helper 0x996c30', evidence='instruction inspection')],
                  limitations=['Direct BL count is not a runtime profile or complete indirect call graph',
                               'Reviewed regions do not establish full function behavior',
                               'Animation candidate is not a proven binding for resolver ID 0x29fbe438'])
    args.out.write_text(json.dumps(result, indent=2)+'\n')
    print(json.dumps(dict(owners=len(owners), direct_calls=len(calls), unique_targets=len(counts)), indent=2))


if __name__ == '__main__': main()
