"""Check repository publication inputs and the exact report denominator."""
import argparse
import json
from pathlib import Path
import re
import subprocess

from elf import require
from project import ROOT,validated_snapshot

FORBIDDEN = {'.elf','.nso','.nsp','.xci','.o','.obj','.bin','.exe','.dll','.zip',
             '.mp3','.wav','.mkv','.mp4','.pdb','.s','.asm'}


def check_files(root=ROOT):
    root = Path(root)
    if (root/'.git').exists():
        result = subprocess.run(['git','ls-files','-z'],cwd=root,capture_output=True,check=True)
        names = [s.decode()for s in result.stdout.split(b'\0')if s]
    else:
        names = [p.relative_to(root).as_posix()for p in root.rglob('*')if p.is_file()
                 and not any(part in ('build','toolchains','__pycache__','.git')for part in p.relative_to(root).parts)]
    for name in names:
        path = root/name
        require(path.suffix.lower() not in FORBIDDEN,'Excluded artifact is tracked: '+name)
        require(not name.startswith('orig/') or name == 'orig/README.md','Original file is tracked: '+name)
        if path.suffix in ('.cpp','.inc'):
            require(not re.search(r'\b(?:asm|__asm|__asm__)\s*(?:volatile\s*)?\(',path.read_text()),'Inline assembly is not a reconstruction: '+name)
        if path.suffix == '.json':
            content = path.read_text()
            require(not re.search(r'[CD]:[\\/]',content),'Machine-specific path in public metadata: '+name)
            require(not re.search(r'"(?:assembly|machine_code|original_bytes)"\s*:',content),'Original instruction payload in metadata: '+name)
    return len(names)


def check_report(report,root=ROOT):
    target,functions,snapshot = validated_snapshot(root);measures = report['measures']
    require(report['version'] == 2,'Unsupported objdiff report version')
    require(set(report) == {'version','measures','units','categories'},'Unexpected public report payload')
    require(int(measures['total_code']) == target['text_size'],'Report denominator differs from original .text')
    require(int(measures['matched_code']) == snapshot['exact_bytes'],'Report credited wrong byte count')
    require(measures['total_functions'] == len(functions) and measures['matched_functions'] == snapshot['exact_functions'],'Report function counts differ')
    require(int(measures['complete_code']) == 0 and int(measures['total_data']) == 0,'Unestablished link/data credit')
    require(abs(measures['matched_code_percent']-100*snapshot['exact_bytes']/target['text_size']) < 0.00001,'Report percentage differs')
    require(sum(int(u['measures']['total_code'])for u in report['units']) == target['text_size'],'Unit denominator differs')
    require(sum(int(u['measures']['matched_code'])for u in report['units']) == snapshot['exact_bytes'],'Unit matches differ')
    expected = {int(r['address'],0)for r in snapshot['matches']};seen = set();matched = set()
    for unit in report['units']:
        for function in unit['functions']:
            address = int(function['metadata']['virtual_address'])
            require(address not in seen and address in functions,'Duplicated/unknown report function')
            seen.add(address)
            require(int(function['size']) == functions[address]['size'],'Report function is partial')
            require(function['fuzzy_match_percent'] in (0,100),'Fuzzy score is not exact credit')
            if function['fuzzy_match_percent'] == 100:matched.add(address)
    require(seen == set(functions) and matched == expected,'Report omits unmatched functions or adds matches')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--report',type=Path,default=ROOT/'build/report.json')
    args = parser.parse_args();count = check_files()
    report = json.loads(args.report.read_text());check_report(report)
    print(f'Publication inputs pass: {count} files; complete original denominator and exact match receipts agree')


if __name__ == '__main__':main()
