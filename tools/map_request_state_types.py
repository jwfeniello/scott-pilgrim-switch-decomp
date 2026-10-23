"""Resolve request-state family identities from original RTTI relocations."""
import argparse
import json
from elf import Elf, require
from project import ROOT, digest

ADDRESSES = [0x4d7390, 0x4d8280, 0x4d8dd0, 0x4dab00, 0x4dc380,
             0x4de050, 0x4df8b0, 0x4e1750, 0x4e30e0, 0x4e4b70,
             0x4e66e0, 0x4e7540, 0x4e9100]

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--original', required=True)
    args = parser.parse_args()
    elf = Elf(args.original)
    relative, spans, rows = elf.relative_relocations(), elf.unwind_ranges(), []
    for address in ADDRESSES:
        require(spans[address] == 688, 'Unexpected function extent')
        matches = []
        for cell, target in relative.items():
            if target != address: continue
            rtti = relative.get(cell - 24)
            name_address = relative.get(rtti + 8) if rtti else None
            if name_address is None: continue
            name = elf.at(name_address, 450).split(b'\0')[0].decode('ascii')
            if not name.startswith('N5storm2mm7helpers36SimpleStormMatchmakingAsyncOperationI'):
                continue
            matches.append(dict(address=hex(address), vtable_address_point=hex(cell-16),
                update_slot='0x10', rtti=hex(rtti), name_address=hex(name_address),
                rtti_name=name, function_sha256=digest(elf.at(address, 688))))
        require(len(matches) == 1, 'RTTI association missing or ambiguous')
        rows.extend(matches)
    report = dict(exact_match_credit=False, original_sha256=digest(elf.data),
        family=rows, limits=['Class identities and vtable slots only; original method names and complete class declarations are not recovered.'])
    (ROOT/'progress/request_state_types.json').write_text(json.dumps(report, indent=2)+'\n')
    print('Verified RTTI associations:', len(rows))

if __name__ == '__main__': main()
