"""Discover one registration family; promote only complete compiler-byte matches.

Structural masks only select candidates. The portable linker and whole-FDE
comparison establish exact results, with original GOT pointees validated.
"""
import argparse
import json
import os
from pathlib import Path
import re
import subprocess

from elf import Elf,link_method,require
from project import ROOT,digest,load
import struct

REFERENCE,SIZE = 0x26eef0,236
FLAGS = ['-target','aarch64-none-elf','-std=c++11','-O2','-mcpu=cortex-a57',
         '-fno-strict-aliasing','-fno-omit-frame-pointer','-fPIC']
HIGH = (0xc,0x20,0x4c,0x60,0x64,0x7c,0x90,0xa0,0xb0,0xc0,0xd0,0xd8)
LOW = (0x10,0x24,0x50,0x6c,0x70,0x80,0x94,0xa4,0xb4,0xc4,0xd4,0xe0)
CALLS = (0x34,0x48,0x78,0x98,0xb8,0xc8,0xe4)


def word(raw,offset):return struct.unpack_from('<I',raw,offset)[0]


def discover(original):
    reference = original.at(REFERENCE,SIZE)
    masks = {offset:0x9f00001f for offset in HIGH}
    masks.update({offset:0xffc003ff for offset in LOW})
    masks.update({offset:0xfc000000 for offset in CALLS})
    masks.update({0x38:0xffe0001f,0x3c:0xffe0001f})
    rows = []
    for address,size in sorted(original.unwind_ranges().items()):
        if size != SIZE:continue
        raw = original.at(address,size)
        if any((word(raw,offset)&masks.get(offset,0xffffffff)) !=
               (word(reference,offset)&masks.get(offset,0xffffffff))for offset in range(0,SIZE,4)):continue
        low,high = word(raw,0x38),word(raw,0x3c)
        require(low&0xffe0001f == 0x52800008 and high&0xffe0001f == 0x72a00008,'Unexpected hash encoding')
        rows.append(dict(address=hex(address),size=size,hash=((low>>5)&0xffff)|(((high>>5)&0xffff)<<16),
                         target_sha256=digest(raw)))
    return rows


def call_target(raw,address,offset):
    instruction = word(raw,offset);require(instruction&0xfc000000 == 0x94000000,'Expected BL')
    immediate = instruction&0x3ffffff
    if immediate&0x2000000:immediate -= 0x4000000
    return address+offset+immediate*4


def got_target(raw,address,offset):
    instruction = word(raw,offset);require(instruction&0xffc00000 == 0xf9400000,'Expected 64-bit GOT load')
    base = (instruction>>5)&31
    for high_offset in range(offset-4,-1,-4):
        high = word(raw,high_offset)
        if high&0x9f00001f == 0x90000000|base:
            immediate = ((high>>29)&3)|(((high>>5)&0x7ffff)<<2)
            if immediate&0x100000:immediate -= 0x200000
            return ((address+high_offset)&~0xfff)+(immediate<<12)+((instruction>>10)&0xfff)*8
    raise ValueError('No preceding ADRP for GOT load')


def compile_family(compiler,source,out):
    out.parent.mkdir(parents=True,exist_ok=True)
    command = [str(compiler),*FLAGS,'-I',str(ROOT/'src'),'-c',str(source),'-o',str(out)]
    subprocess.run(command,check=True,capture_output=True,
                   creationflags=getattr(subprocess,'CREATE_NO_WINDOW',0),
                   env=dict(os.environ,TMP=str(out.parent.resolve()),TEMP=str(out.parent.resolve())))
    return Elf(out)


def compare_family(original,rows,obj):
    symbols,names = obj.symbols();methods = {}
    for symbol,name in zip(symbols,names):
        match = re.search(r'RegisterLazyTypeILj([0-9]+)E',name)
        if match and symbol[1]&15 == 2:
            address = int(match.group(1));require(address not in methods,'Duplicate template instance')
            methods[address] = name
    require(set(methods) == {int(row['address'],0)for row in rows},'Missing family instance')
    relative = original.relative_relocations();recipes = [];results = []
    for row in rows:
        address = int(row['address'],0);raw = original.at(address,SIZE)
        name = methods[address];code,relocations = obj.method(name)
        recipe = dict(address=hex(address),size=SIZE,symbol=name,target_sha256=row['target_sha256'],
                      bindings={},got_bindings={})
        for relocation in relocations:
            symbol,kind,offset = (relocation[k]for k in ('symbol','kind','offset'))
            require(relocation['addend'] == 0,'Unexpected addend')
            if kind == 312:
                target = got_target(raw,address,offset)
                require(target in relative,'Original GOT RELATIVE relocation missing')
                binding = dict(cell=hex(target),pointee=hex(relative[target]))
                require(symbol not in recipe['got_bindings'] or recipe['got_bindings'][symbol] == binding,'Inconsistent GOT symbol')
                recipe['got_bindings'][symbol] = binding
            elif kind == 283:
                target = call_target(raw,address,offset)
                require(symbol not in recipe['bindings'] or recipe['bindings'][symbol] == hex(target),'Inconsistent called symbol')
                recipe['bindings'][symbol] = hex(target)
            else:require(kind == 311,'Unsupported family relocation')
        require(recipe['bindings'].get('__cxa_guard_acquire') == '0xfa4130'
                and recipe['bindings'].get('__cxa_guard_release') == '0xfa4140','Original guard call targets differ')
        linked,applied = link_method(obj,recipe,original,relative)
        results.append(dict(address=hex(address),exact=linked == raw,target_size=SIZE,compiled_size=len(linked),
                            target_sha256=digest(raw),compiled_sha256=digest(linked),relocation_count=len(applied),
                            first_different_offsets=[i for i in range(0,min(len(linked),SIZE),4)if linked[i:i+4] != raw[i:i+4]][:8]))
        recipes.append(recipe)
    return recipes,results


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--original',type=Path,required=True)
    parser.add_argument('--clang8',type=Path,required=True)
    parser.add_argument('--build-dir',type=Path,default=ROOT/'build/lazy_registration')
    parser.add_argument('--promote',action='store_true')
    args = parser.parse_args();original = Elf(args.original)
    require(digest(original.data) == load(ROOT/'config/target.json')['sha256'],'Incorrect original ELF')
    rows = discover(original)
    require(bool(rows),'No family candidates')
    instances = '// Real hash immediates; Key is a unique reconstruction label.\n'
    instances += '\n'.join(f"LAZY_TYPE_REGISTRATION({row['address']}u, 0x{row['hash']:08x}u)"for row in rows)+'\n'
    (ROOT/'src/lazy_type_registration_instances.inc').write_text(instances)
    source = ROOT/'src/LazyTypeRegistration.cpp';folder = args.build_dir.resolve()
    obj = compile_family(args.clang8.resolve(),source,folder/'all.o')
    recipes,results = compare_family(original,rows,obj)
    exact = [row for row in results if row['exact']]
    report = dict(target_elf_sha256=digest(original.data),source_sha256=digest(source.read_bytes()),
                  instances_sha256=digest((ROOT/'src/lazy_type_registration_instances.inc').read_bytes()),
                  object_sha256=digest(obj.data),candidate_count=len(rows),exact_count=len(exact),
                  exact_bytes=len(exact)*SIZE,results=results)
    (folder/'discovery_results.json').write_text(json.dumps(report,indent=2)+'\n')
    print(json.dumps({k:v for k,v in report.items()if k!='results'},indent=2),flush=True)
    require(len(exact) == len(rows),'Not every candidate is exact; none promoted')
    if args.promote:
        path = ROOT/'config/builds.json';configuration = load(path)
        existing = {int(row['address'],0)for build in configuration['builds']if build['id'] != 'lazy_type_registration'
                    for row in build['functions']}
        require(not existing.intersection(int(row['address'],0)for row in recipes),'Overlapping reconstruction credit')
        configuration['builds'] = [b for b in configuration['builds']if b['id'] != 'lazy_type_registration']
        configuration['builds'].append(dict(id='lazy_type_registration',source='src/LazyTypeRegistration.cpp',
                                             compiler='8.0.1',flags=FLAGS,functions=recipes))
        path.write_text(json.dumps(configuration,indent=2)+'\n')
        print('Promoted complete function recipes; refresh progress/verified.json with tools/verify.py',flush=True)


if __name__ == '__main__':main()
