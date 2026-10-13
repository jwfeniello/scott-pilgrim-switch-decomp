"""Export a source-current exact verification snapshot as an objdiff v2 report."""
import argparse
from collections import defaultdict
import json
from pathlib import Path

from project import ROOT,validated_snapshot


def measures(code,matched,functions,matched_functions,units=1):
    percent = 100*matched/code if code else 0
    return dict(fuzzy_match_percent=percent,total_code=str(code),matched_code=str(matched),
                matched_code_percent=percent,total_data='0',matched_data='0',matched_data_percent=0,
                total_functions=functions,matched_functions=matched_functions,
                matched_functions_percent=100*matched_functions/functions if functions else 0,
                complete_code='0',complete_code_percent=0,complete_data='0',complete_data_percent=0,
                total_units=units,complete_units=0)


def make_report(root=ROOT):
    target,functions,snapshot = validated_snapshot(root)
    matched = {int(r['address'],0):r for r in snapshot['matches']}
    groups = defaultdict(list)
    for address,row in sorted(functions.items()):
        result = matched.get(address)
        group = result['source'] if result else f'unmatched/address_{address>>16:04x}'
        groups[group].append((row,result))
    units = []
    for group,rows in sorted(groups.items()):
        size = sum(row['size']for row,_ in rows)
        exact_bytes = sum(row['size']for row,result in rows if result)
        exact_count = sum(result is not None for _,result in rows)
        items = [dict(name=(result['symbol'] if result else row['name']),size=str(row['size']),
                      fuzzy_match_percent=100 if result else 0,
                      address=str(int(row['address'],0)-int(target['text_address'],0)),
                      metadata=dict(virtual_address=str(int(row['address'],0))))for row,result in rows]
        metadata = dict(complete=False)
        if group.startswith('src/'):metadata['source_path'] = group
        units.append(dict(name=group,measures=measures(size,exact_bytes,len(rows),exact_count),
                          sections=[dict(name='.text',size=str(size),fuzzy_match_percent=100*exact_bytes/size)],
                          functions=items,metadata=metadata))
    # Bytes outside validated FDEs stay in the whole-.text denominator at zero.
    unattributed = target['text_size']-target['fde_code_bytes']
    if unattributed:
        units.append(dict(name='unmatched/text_without_fde',measures=measures(unattributed,0,0,0),
                          sections=[dict(name='.text',size=str(unattributed),fuzzy_match_percent=0)],
                          functions=[],metadata=dict(complete=False)))
    return dict(version=2,measures=measures(target['text_size'],snapshot['exact_bytes'],len(functions),
                                           len(matched),len(units)),units=units,categories=[])


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--out',type=Path,default=ROOT/'build/report.json')
    args = parser.parse_args();report = make_report()
    args.out.parent.mkdir(parents=True,exist_ok=True)
    args.out.write_text(json.dumps(report,separators=(',',':'))+'\n',encoding='utf-8')
    m = report['measures']
    print(f"{m['matched_functions']:,}/{m['total_functions']:,} exact functions; "
          f"{int(m['matched_code']):,}/{int(m['total_code']):,} bytes ({m['matched_code_percent']:.6f}%)")


if __name__ == '__main__':main()
