"""Shared paths and current verification evidence; no original binary in CI."""
import bisect
import hashlib
import json
from pathlib import Path
import re

from elf import require

ROOT = Path(__file__).resolve().parents[1]


def load(path):return json.loads(Path(path).read_text(encoding='utf-8'))
def digest(data):return hashlib.sha256(data).hexdigest()


def safe_path(root,name):
    path = (Path(root)/name).resolve()
    require(path.is_relative_to(Path(root).resolve()),'Input path escapes repository')
    return path


def inventory(root=ROOT):
    root = Path(root);target = load(root/'config/target.json')
    functions = {}
    for line in (root/'config/functions.tsv').read_text().splitlines():
        if not line or line.startswith('#'):continue
        address,size,name = line.split('\t');address,size = int(address,0),int(size)
        require(address not in functions and address%4 == 0 and size > 0 and size%4 == 0,'Invalid function inventory')
        require(int(target['text_address'],0) <= address < address+size <= int(target['text_address'],0)+target['text_size'],'Function outside .text')
        functions[address] = dict(address=hex(address),size=size,name=name)
    require(len(functions) == target['function_count'],'Function count differs from original inventory')
    previous = int(target['text_address'],0)
    for address,row in sorted(functions.items()):
        require(address >= previous,'Overlapping function inventory');previous = address+row['size']
    require(sum(row['size']for row in functions.values()) == target['fde_code_bytes'],'Function byte denominator changed')
    return target,functions


START_EVIDENCE = {'call','pointer','tail','after_function'}
END_EVIDENCE = {'call','pointer','tail','before_function'}


def non_fde_inventory(root,target,functions):
    """Exact-match extents in .text code that no FDE covers.

    Each row names the evidence for both boundaries; verify.py rechecks it
    against the original ELF with check_non_fde_evidence."""
    path = Path(root)/'config/non_fde_functions.tsv';extents = {}
    if not path.exists():return extents
    start = int(target['text_address'],0);end = start+target['text_size']
    for line in path.read_text().splitlines():
        if not line or line.startswith('#'):continue
        address,size,name,first,last = line.split('\t');address,size = int(address,0),int(size)
        require(address not in extents and address not in functions and address%4 == 0 and size > 0 and size%4 == 0,'Invalid non-FDE extent')
        require(start <= address < address+size <= end,'Non-FDE extent outside .text')
        require(first in START_EVIDENCE and last in END_EVIDENCE,'Unknown non-FDE boundary evidence')
        extents[address] = dict(address=hex(address),size=size,name=name,start=first,end=last)
    rows = sorted([(a,r['size'])for a,r in functions.items()]+[(a,r['size'])for a,r in extents.items()])
    for (a,n),(b,_) in zip(rows,rows[1:]):require(a+n <= b,'Non-FDE extent overlaps another function')
    require(sum(r['size']for r in extents.values()) <= target['unmatched_text_without_fde_bytes'],'Non-FDE extents exceed uncovered code')
    return extents


def check_non_fde_evidence(original,spans,extents):
    """Recheck boundary evidence in the original: BL targets and tail-call B
    targets count only when the branch lies in an FDE function or another
    listed extent; pointers are R_AARCH64_RELATIVE targets; adjacency means
    the boundary is shared with an FDE function or another listed extent."""
    proven = sorted([(a,n)for a,n in spans.items()]+[(a,r['size'])for a,r in extents.items()])
    starts = [a for a,_ in proven]
    def owner(address):
        index = bisect.bisect_right(starts,address)-1
        return proven[index] if index >= 0 and address < proven[index][0]+proven[index][1] else None
    branches_calls,branches_jumps = original.direct_branches()
    calls = {t for s,t in branches_calls if owner(s)}
    tails = set()
    for s,t in branches_jumps:
        source = owner(s)
        if source and not source[0] <= t < source[0]+source[1]:tails.add(t)
    pointers = set(original.relative_relocations().values())
    ends = {a+n for a,n in proven}
    for address,row in extents.items():
        last = address+row['size']
        first_ok = {'call':address in calls,'pointer':address in pointers,'tail':address in tails,
                    'after_function':address in ends}[row['start']]
        last_ok = {'call':last in calls,'pointer':last in pointers,'tail':last in tails,
                   'before_function':last in set(starts)}[row['end']]
        require(first_ok and last_ok,f'Non-FDE boundary evidence fails at {address:#x}')


def all_functions(root=ROOT):
    target,functions = inventory(root)
    return target,{**functions,**non_fde_inventory(root,target,functions)}


def input_hashes(root=ROOT):
    root = Path(root);builds = load(root/'config/builds.json')['builds']
    files = {'config/target.json','config/functions.tsv','config/builds.json',
             'tools/elf.py','tools/project.py','tools/verify.py'}
    if (root/'config/non_fde_functions.tsv').exists():files.add('config/non_fde_functions.tsv')
    def add_source(name):
        if name in files:return
        files.add(name);path = safe_path(root,name)
        for include in re.findall(r'^\s*#include\s+"([^"]+)"',path.read_text(),re.MULTILINE):
            dependency = (path.parent/include).resolve()
            require(dependency.is_relative_to(root.resolve()),'Include escapes repository')
            add_source(dependency.relative_to(root.resolve()).as_posix())
    header_roots = set()
    for build in builds:
        add_source(build['source'])
        for name in build.get('lto_sources',[])+([build['keep_source']] if 'keep_source' in build else []):
            add_source(name)
        for name in build.get('header_roots',[]):
            if name in header_roots:continue
            header_roots.add(name)
            directory=safe_path(root,name)
            require(directory.is_dir(),'Missing header root: '+name)
            for path in directory.rglob('*'):
                if path.is_file():
                    require(path.resolve().is_relative_to(root.resolve()),'Header escapes repository')
                    files.add(path.relative_to(root).as_posix())
    return {name:digest(safe_path(root,name).read_bytes())for name in sorted(files)}


def validated_snapshot(root=ROOT):
    root = Path(root);target,functions = all_functions(root)
    snapshot = load(root/'progress/verified.json')
    require(snapshot['version'] == 1,'Unsupported verification snapshot')
    require(snapshot['target_elf_sha256'] == target['sha256'],'Snapshot belongs to another original')
    require(snapshot['input_sha256'] == input_hashes(root),'Stale verification inputs; rebuild with tools/verify.py')
    expected = {}
    for build in load(root/'config/builds.json')['builds']:
        for recipe in build['functions']:
            address = int(recipe['address'],0)
            require(address not in expected,'Duplicate reconstruction address')
            expected[address] = (build,recipe)
    seen = set()
    for result in snapshot['matches']:
        address = int(result['address'],0)
        require(address not in seen and address in expected and address in functions,'Duplicate or unknown matched function')
        seen.add(address);build,recipe = expected[address]
        require(result['exact'] is True and result['size'] == functions[address]['size'] == recipe['size'],'Incomplete match')
        require(result['target_sha256'] == result['compiled_sha256'] == recipe['target_sha256'],'Hash is not exact')
        require(result['source'] == build['source'] and result['symbol'] == recipe['symbol'],'Source identity differs')
    require(seen == set(expected),'Missing verified reconstruction')
    require({a for a,row in functions.items()if 'start' in row} <= seen,'Non-FDE extent without an exact match')
    require(len(seen) == snapshot['exact_functions'] and sum(r['size']for r in snapshot['matches']) == snapshot['exact_bytes'],'Snapshot totals disagree')
    return target,functions,snapshot
