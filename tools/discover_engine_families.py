"""Compile ordinary C++ families and promote only complete original-byte matches."""
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

MASKS = {275:0x9f00001f,311:0x9f00001f,277:0xffc003ff,278:0xffc003ff,
         284:0xffc003ff,285:0xffc003ff,286:0xffc003ff,299:0xffc003ff,
         312:0xffc003ff,282:0xfc000000,283:0xfc000000}


def word(raw,offset):return struct.unpack_from('<I',raw,offset)[0]


def member_locations(parameter):
    return [dict(offset=parameter['offset'],delta=0,encoding='ldst_uimm',scale=parameter['scale']),
            *[dict(offset=o,delta=0,encoding='ldst_uimm',scale=parameter['scale'])for o in parameter.get('related_offsets',[])],
            *parameter.get('fields',[])]


def member_value(raw,location):
    instruction=word(raw,location['offset']);encoding=location['encoding']
    if encoding=='ldst_uimm':
        require(instruction&0x3b000000==0x39000000,'Unexpected member-offset encoding')
        value=(instruction>>10)&0xfff
    elif encoding=='add_uimm':
        require(instruction&0xffc00000==0x91000000,'Unexpected ADD-member encoding')
        value=(instruction>>10)&0xfff
    else:
        require(encoding=='pair_simm' and instruction&0x3a000000==0x28000000,'Unexpected paired-member encoding')
        value=(instruction>>15)&0x7f
        if value&0x40:value-=0x80
    return value*location['scale']-location.get('delta',0)


def relocation_target(raw,address,offset,kind):
    instruction = word(raw,offset)
    if kind in (282,283):
        require(instruction&0xfc000000 == (0x14000000 if kind == 282 else 0x94000000),'Wrong original branch')
        immediate = instruction&0x3ffffff
        if immediate&0x2000000:immediate -= 0x4000000
        return address+offset+immediate*4
    require(kind in (277,278,284,285,286,299,312),'Unsupported discovery relocation')
    require(instruction&0xffc00000 == 0x91000000 if kind == 277 else instruction&0x3b000000 == 0x39000000,'Wrong original low relocation opcode')
    base = (instruction>>5)&31
    for high_offset in range(offset-4,-1,-4):
        high = word(raw,high_offset)
        if high&0x9f00001f == 0x90000000|base:
            immediate = ((high>>29)&3)|(((high>>5)&0x7ffff)<<2)
            if immediate&0x100000:immediate -= 0x200000
            scale = {277:1,278:1,284:2,285:4,286:8,299:16,312:8}[kind]
            return ((address+high_offset)&~4095)+(immediate<<12)+((instruction>>10)&0xfff)*scale
    raise ValueError('Original ADRP base not found')


def compile_family(compiler,source,output,family):
    output.parent.mkdir(parents=True,exist_ok=True)
    command = [str(compiler),*family['flags'],'-I',str(ROOT/'src'),'-c',str(source),'-o',str(output)]
    result = subprocess.run(command,capture_output=True,text=True,
                            cwd=ROOT,
                            creationflags=getattr(subprocess,'CREATE_NO_WINDOW',0),
                            env=dict(os.environ,TMP=str(output.parent.resolve()),TEMP=str(output.parent.resolve())))
    require(result.returncode == 0,'Compile failed: '+result.stderr)
    return Elf(output)


def instances(obj,family):
    values,names = obj.symbols();result = {}
    prefix = '_Z'+str(len(family['function']))+family['function']+'ILj'
    pattern = family.get('symbol_pattern',re.escape(prefix)+r'([0-9]+)E')
    for symbol,name in zip(values,names):
        match = re.match(pattern,name)
        if match and symbol[1]&15 == 2:
            address = int(match.group(1));require(address not in result,'Duplicated instance')
            result[address] = name
    return result


def recipe_for(obj,symbol,address,size,original,relative):
    raw = original.at(address,size);code,relocations = obj.method(symbol)
    require(len(code) == size,'Compiler size differs')
    recipe = dict(address=hex(address),size=size,symbol=symbol,target_sha256=digest(raw),bindings={},got_bindings={})
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
            continue
        record = relocation['symbol_record']
        storage = obj.sections[record[3]] if 0 < record[3] < len(obj.sections) else None
        if kind not in (282,283) and storage and storage[2]&0x10:
            literal = immutable_literal(obj,relocation)
            require(original.at(target,len(literal)) == literal,'Original literal differs')
            mapping = recipe.setdefault('literals',{})
            require(literal.hex() not in mapping or mapping[literal.hex()] == hex(target),'Conflicting literal binding')
            mapping[literal.hex()] = hex(target)
        else:
            value = hex(target-addend)
            require(name not in recipe['bindings'] or recipe['bindings'][name] == value,'Conflicting symbol binding')
            recipe['bindings'][name] = value
    linked,applied = link_method(obj,recipe,original,relative)
    require(linked == raw,'Complete comparison failed at '+hex(address))
    return recipe,dict(address=hex(address),size=size,exact=True,target_sha256=digest(raw),compiled_sha256=digest(linked),relocation_count=len(applied))


def discover(original,family,obj,symbol):
    reference = int(family['reference'],0);size = family['size'];raw = original.at(reference,size)
    _,relocations = obj.method(symbol);masks = {r['offset']:MASKS[r['kind']]for r in relocations}
    for parameter in family.get('parameters',[]):
        if parameter['kind'] == 'mov32':
            masks[parameter['offset']] = masks[parameter['high_offset']] = 0xffe0001f
        else:
            require(parameter['kind'] == 'ldst_uimm','Unsupported instance parameter')
            for location in member_locations(parameter):
                masks[location['offset']] = 0xffc07fff if location['encoding']=='pair_simm' else 0xffc003ff
    rows = []
    for address,length in sorted(original.unwind_ranges().items()):
        if length != size:continue
        candidate = original.at(address,size)
        if all((word(candidate,o)&masks.get(o,0xffffffff)) == (word(raw,o)&masks.get(o,0xffffffff))for o in range(0,size,4)):
            rows.append(address)
    return rows


def write_instances(path,family,addresses,original):
    rows = []
    for address in addresses:
        args = [hex(address)+'u'];raw = original.at(address,family['size'])
        for parameter in family.get('parameters',[]):
            low = word(raw,parameter['offset'])
            if parameter['kind'] == 'mov32':
                high = word(raw,parameter['high_offset'])
                require(low&0xffe00000 == 0x52800000 and high&0xffe00000 == 0x72a00000,'Unexpected 32-bit parameter encoding')
                value = ((low>>5)&0xffff)|(((high>>5)&0xffff)<<16)
            else:
                require(parameter['kind'] == 'ldst_uimm','Unexpected member-offset parameter')
                locations=member_locations(parameter);value=member_value(raw,locations[0])
                require(all(member_value(raw,location)==value for location in locations),'Inconsistent member-offset parameters')
            args.append(hex(value)+'u')
        rows.append(f"{family['macro']}({', '.join(args)})")
    path.write_text('// Keys label distinct original function extents.\n'+
                    '\n'.join(rows)+'\n')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--original',type=Path,required=True)
    parser.add_argument('--clang8',type=Path,required=True)
    parser.add_argument('--build-dir',type=Path,default=ROOT/'build/engine_families')
    parser.add_argument('--family',action='append',help='Select a discovery family ID; default all')
    parser.add_argument('--promote',action='store_true')
    parser.add_argument('--keep-exact',action='store_true',help='Reject nonmatching candidates, then rebuild only the complete matches')
    args = parser.parse_args();original = Elf(args.original)
    require(digest(original.data) == load(ROOT/'config/target.json')['sha256'],'Wrong original ELF')
    families = load(ROOT/'config/engine_family_discovery.json')['families']
    if args.family:families = [f for f in families if f['id']in args.family]
    require(bool(families),'No selected family')
    ids = {f['id']for f in families};configuration = load(ROOT/'config/builds.json')
    prior = [b for b in configuration['builds']if b['id']not in ids]
    existing = {int(r['address'],0)for b in prior for r in b['functions']}
    relative = original.relative_relocations();folder = args.build_dir.resolve();folder.mkdir(parents=True,exist_ok=True)
    builds = [];reports = [];generated = []
    with tempfile.TemporaryDirectory(dir=folder,prefix='discovery_') as temporary:
        for family in families:
            reference = int(family['reference'],0)
            source = Path(temporary)/Path(family['source']).name;source.write_bytes((ROOT/family['source']).read_bytes())
            include = Path(temporary)/family['include'];write_instances(include,family,[reference],original)
            bootstrap = compile_family(args.clang8.resolve(),source,folder/(family['id']+'_reference.o'),family)
            symbol = instances(bootstrap,family)[reference]
            recipe_for(bootstrap,symbol,reference,family['size'],original,relative)
            addresses = [a for a in discover(original,family,bootstrap,symbol)if a not in existing]
            require(bool(addresses),'No uncredited candidates')
            write_instances(include,family,addresses,original)
            obj = compile_family(args.clang8.resolve(),source,folder/(family['id']+'.o'),family)
            methods = instances(obj,family);require(set(methods) == set(addresses),'Incomplete batch')
            recipes = [];results = [];rejections = []
            for address in addresses:
                try:
                    recipe,result = recipe_for(obj,methods[address],address,family['size'],original,relative)
                except ValueError as exc:
                    if not args.keep_exact:raise
                    rejections.append(dict(address=hex(address),reason=str(exc)))
                    continue
                recipes.append(recipe);results.append(result)
            if rejections:
                require(bool(recipes),'No complete matches to retain')
                addresses=[int(r['address'],0)for r in recipes]
                write_instances(include,family,addresses,original)
                obj=compile_family(args.clang8.resolve(),source,folder/(family['id']+'.o'),family)
                methods=instances(obj,family);require(set(methods)==set(addresses),'Incomplete retained batch')
                recipes=[];results=[]
                for address in addresses:
                    recipe,result=recipe_for(obj,methods[address],address,family['size'],original,relative)
                    recipes.append(recipe);results.append(result)
            builds.append(dict(id=family['id'],source=family['source'],compiler='8.0.1',flags=family['flags'],functions=recipes))
            generated.append((family['include'],include.read_bytes()));existing.update(addresses)
            report = dict(id=family['id'],exact_functions=len(results),exact_bytes=sum(r['size']for r in results),object_sha256=digest(obj.data),results=results)
            if rejections:report['rejected_candidates']=rejections
            reports.append(report);print(json.dumps({k:v for k,v in report.items()if k != 'results'}),flush=True)
    (folder/'engine_discovery_results.json').write_text(json.dumps(dict(target_elf_sha256=digest(original.data),families=reports),indent=2)+'\n')
    if args.promote:
        for name,content in generated:(ROOT/'src'/name).write_bytes(content)
        configuration['builds'] = prior+builds
        (ROOT/'config/builds.json').write_text(json.dumps(configuration,indent=2)+'\n')
        print('Promoted full matches; refresh the full verification snapshot',flush=True)


if __name__ == '__main__':main()
