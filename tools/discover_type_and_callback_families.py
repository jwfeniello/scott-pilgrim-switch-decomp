"""Discover three families and accept only complete compiler-byte matches."""
import argparse
import json
import os
from pathlib import Path
import re
import struct
import subprocess
import tempfile

from elf import Elf,immutable_literal,link_method,require
from project import ROOT,digest,load

FLAGS = ['-target','aarch64-none-elf','-std=c++11','-O2','-mcpu=cortex-a57',
         '-fno-strict-aliasing','-fno-omit-frame-pointer','-fPIC']
FAMILIES = (
    dict(id='type_registration_once',source='src/TypeRegistrationOnce.cpp',
         include='type_registration_once_instances.inc',macro='TYPE_REGISTRATION_ONCE',
         function='RegisterTypeOnce',reference=0x26ee00,size=240),
    dict(id='factory_construction',source='src/FactoryConstruction.cpp',
         include='factory_construction_instances.inc',macro='FACTORY_CONSTRUCTION',
         function='ConstructThroughFactory',reference=0x26ecb0,size=192),
    dict(id='callback_identity',source='src/CallbackIdentity.cpp',
         include='callback_identity_instances.inc',macro='CALLBACK_IDENTITY',
         function='CallbackIdentityEqual',reference=0x677ef0,size=80),
)
MASKS = {275:0x9f00001f,311:0x9f00001f,277:0xffc003ff,
         312:0xffc003ff,282:0xfc000000,283:0xfc000000}


def word(raw,offset):return struct.unpack_from('<I',raw,offset)[0]


def relocation_target(raw,address,offset,kind):
    instruction = word(raw,offset)
    if kind in (282,283):
        require(instruction&0xfc000000 == (0x14000000 if kind == 282 else 0x94000000),'Wrong original branch opcode')
        immediate = instruction&0x3ffffff
        if immediate&0x2000000:immediate -= 0x4000000
        return address+offset+immediate*4
    require(kind in (277,312),'Unsupported discovery relocation')
    require(instruction&0xffc00000 == (0x91000000 if kind == 277 else 0xf9400000),'Wrong original address/load opcode')
    register = (instruction>>5)&31
    for high_offset in range(offset-4,-1,-4):
        high = word(raw,high_offset)
        if high&0x9f00001f == 0x90000000|register:
            immediate = ((high>>29)&3)|(((high>>5)&0x7ffff)<<2)
            if immediate&0x100000:immediate -= 0x200000
            return ((address+high_offset)&~4095)+(immediate<<12)+((instruction>>10)&0xfff)*(8 if kind == 312 else 1)
    raise ValueError('Original ADRP base not found')


def compile_family(compiler,source,output):
    output.parent.mkdir(parents=True,exist_ok=True)
    command = [str(compiler),*FLAGS,'-I',str(ROOT/'src'),'-c',str(source),'-o',str(output)]
    result = subprocess.run(command,capture_output=True,text=True,
                            creationflags=getattr(subprocess,'CREATE_NO_WINDOW',0),
                            env=dict(os.environ,TMP=str(output.parent.resolve()),TEMP=str(output.parent.resolve())))
    require(result.returncode == 0,'Compile failed: '+result.stderr)
    return Elf(output)


def instances(obj,family):
    symbols,names = obj.symbols();result = {}
    prefix = '_Z'+str(len(family['function']))+family['function']+'ILj'
    for symbol,name in zip(symbols,names):
        match = re.match(re.escape(prefix)+r'([0-9]+)E',name)
        if match and symbol[1]&15 == 2:
            address = int(match.group(1));require(address not in result,'Duplicated instance')
            result[address] = name
    return result


def recipe_for(obj,symbol,address,size,original,relative):
    raw = original.at(address,size);code,relocations = obj.method(symbol)
    require(len(code) == size,'Compiler function size differs')
    recipe = dict(address=hex(address),size=size,symbol=symbol,target_sha256=digest(raw),
                  bindings={},got_bindings={})
    for relocation in relocations:
        kind,name,offset,addend = (relocation[k]for k in ('kind','symbol','offset','addend'))
        require(kind in MASKS,'Unsupported family relocation')
        if kind in (275,311):continue
        target = relocation_target(raw,address,offset,kind)
        if kind == 312:
            require(addend == 0 and target in relative,'Original GOT relocation missing')
            value = dict(cell=hex(target),pointee=hex(relative[target]))
            require(name not in recipe['got_bindings'] or recipe['got_bindings'][name] == value,'Conflicting GOT binding')
            recipe['got_bindings'][name] = value
        elif kind == 277:
            literal = immutable_literal(obj,relocation)
            require(original.at(target,len(literal)) == literal,'Original literal differs')
            mapping = recipe.setdefault('literals',{})
            require(literal.hex() not in mapping or mapping[literal.hex()] == hex(target),'Conflicting literal binding')
            mapping[literal.hex()] = hex(target)
        else:
            value = hex(target-addend)
            require(name not in recipe['bindings'] or recipe['bindings'][name] == value,'Conflicting call binding')
            recipe['bindings'][name] = value
    if '__cxa_guard_acquire' in recipe['bindings']:
        require(recipe['bindings']['__cxa_guard_acquire'] == '0xfa4130'
                and recipe['bindings'].get('__cxa_guard_release') == '0xfa4140','Original guard targets differ')
    linked,applied = link_method(obj,recipe,original,relative)
    require(linked == raw,'Complete compiler-byte comparison failed at '+hex(address))
    return recipe,dict(address=hex(address),size=size,exact=True,target_sha256=digest(raw),
                       compiled_sha256=digest(linked),relocation_count=len(applied))


def discover(original,family,obj,symbol):
    size,reference = family['size'],family['reference']
    raw = original.at(reference,size);_,relocations = obj.method(symbol)
    masks = {r['offset']:MASKS[r['kind']]for r in relocations}
    rows = []
    for address,length in sorted(original.unwind_ranges().items()):
        if length != size:continue
        candidate = original.at(address,length)
        if all((word(candidate,o)&masks.get(o,0xffffffff)) ==
               (word(raw,o)&masks.get(o,0xffffffff))for o in range(0,size,4)):
            rows.append(address)
    return rows


def write_instances(path,family,addresses):
    path.write_text('// Keys are unique reconstruction labels.\n'+
                    '\n'.join(f"{family['macro']}({hex(a)}u)"for a in addresses)+'\n')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--original',type=Path,required=True)
    parser.add_argument('--clang8',type=Path,required=True)
    parser.add_argument('--build-dir',type=Path,default=ROOT/'build/type_and_callback')
    parser.add_argument('--promote',action='store_true')
    args = parser.parse_args();original = Elf(args.original)
    require(digest(original.data) == load(ROOT/'config/target.json')['sha256'],'Wrong original ELF')
    relative = original.relative_relocations();folder = args.build_dir.resolve()
    folder.mkdir(parents=True,exist_ok=True);builds = [];reports = [];generated = []
    with tempfile.TemporaryDirectory(dir=folder,prefix='discovery_') as temporary:
        for family in FAMILIES:
            source = Path(temporary)/Path(family['source']).name
            source.write_bytes((ROOT/family['source']).read_bytes())
            include = Path(temporary)/family['include']
            write_instances(include,family,[family['reference']])
            bootstrap = compile_family(args.clang8.resolve(),source,folder/(family['id']+'_reference.o'))
            symbol = instances(bootstrap,family)[family['reference']]
            recipe_for(bootstrap,symbol,family['reference'],family['size'],original,relative)
            addresses = discover(original,family,bootstrap,symbol)
            require(bool(addresses),'No candidates found')
            write_instances(include,family,addresses)
            obj = compile_family(args.clang8.resolve(),source,folder/(family['id']+'.o'))
            methods = instances(obj,family);require(set(methods) == set(addresses),'Incomplete instance batch')
            recipes = [];results = []
            for address in addresses:
                recipe,result = recipe_for(obj,methods[address],address,family['size'],original,relative)
                recipes.append(recipe);results.append(result)
            builds.append(dict(id=family['id'],source=family['source'],compiler='8.0.1',flags=FLAGS,functions=recipes))
            generated.append((family['include'],include.read_bytes()))
            report = dict(id=family['id'],exact_functions=len(results),exact_bytes=len(results)*family['size'],
                          object_sha256=digest(obj.data),results=results)
            reports.append(report)
            print(json.dumps({k:v for k,v in report.items()if k != 'results'}),flush=True)
    configuration = load(ROOT/'config/builds.json');ids = {b['id']for b in builds}
    prior = [b for b in configuration['builds']if b['id'] not in ids]
    existing = {int(r['address'],0)for b in prior for r in b['functions']}
    new = [int(r['address'],0)for b in builds for r in b['functions']]
    require(len(new) == len(set(new)) and not set(new)&existing,'Overlapping code credit')
    (folder/'discovery_results.json').write_text(json.dumps(dict(target_elf_sha256=digest(original.data),families=reports),indent=2)+'\n')
    if args.promote:
        for name,content in generated:(ROOT/'src'/name).write_bytes(content)
        configuration['builds'] = prior+builds
        (ROOT/'config/builds.json').write_text(json.dumps(configuration,indent=2)+'\n')
        print('Promoted all complete matches; refresh the full verification snapshot',flush=True)


if __name__ == '__main__':main()
