"""Shared paths and current verification evidence; no original binary in CI."""
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


def input_hashes(root=ROOT):
    root = Path(root);builds = load(root/'config/builds.json')['builds']
    files = {'config/target.json','config/functions.tsv','config/builds.json',
             'tools/elf.py','tools/project.py','tools/verify.py'}
    def add_source(name):
        if name in files:return
        files.add(name);path = safe_path(root,name)
        for include in re.findall(r'^\s*#include\s+"([^"]+)"',path.read_text(),re.MULTILINE):
            dependency = (path.parent/include).resolve()
            require(dependency.is_relative_to(root.resolve()),'Include escapes repository')
            add_source(dependency.relative_to(root.resolve()).as_posix())
    for build in builds:add_source(build['source'])
    return {name:digest(safe_path(root,name).read_bytes())for name in sorted(files)}


def validated_snapshot(root=ROOT):
    root = Path(root);target,functions = inventory(root)
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
    require(len(seen) == snapshot['exact_functions'] and sum(r['size']for r in snapshot['matches']) == snapshot['exact_bytes'],'Snapshot totals disagree')
    return target,functions,snapshot
