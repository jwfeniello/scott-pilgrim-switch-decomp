"""Repeat complete C library bodies and reject an added external source effect."""
import argparse,json,os,subprocess
from pathlib import Path
from c_source_functions import index,add_side_effect
from discover_engine_families import compile_family
from elf import Elf,link_method,require
from project import ROOT,digest,load

def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--original',type=Path,required=True);p.add_argument('--clang8',type=Path,required=True);p.add_argument('--build-dir',type=Path,required=True);p.add_argument('--build-id',required=True);a=p.parse_args()
    folder=a.build_dir.resolve();folder.mkdir(parents=True,exist_ok=True);original=Elf(a.original);require(digest(original.data)==load(ROOT/'config/target.json')['sha256'],'Wrong original');relative=original.relative_relocations();b=next(b for b in load(ROOT/'config/builds.json')['builds']if b['id']==a.build_id);source=ROOT/b['source']
    first=compile_family(a.clang8,source,folder/'first.o',b);second=compile_family(a.clang8,source,folder/'second.o',b);require(first.data==second.data,'Repeated C objects differ')
    for recipe in b['functions']:
        code,_=link_method(second,recipe,original,relative);require(code==original.at(int(recipe['address'],0),recipe['size']),'Repeated C body differs')
    result=subprocess.run([str(a.clang8),*b['flags'],'-I',str(ROOT/'src'),'-E',str(source)],cwd=ROOT,capture_output=True,text=True,creationflags=getattr(subprocess,'CREATE_NO_WINDOW',0),env=dict(os.environ,TEMP=str(folder),TMP=str(folder)));require(result.returncode==0,'C preprocessing failed: '+result.stderr)
    definitions=index(result.stdout)
    for recipe in b['functions']:
        require(recipe['symbol']in definitions,'C source definition was not indexed')
        require(not definitions[recipe['symbol']]['has_inline_asm'],'Inline assembly in credited C definition')
    wrong_source=folder/'wrong.c';wrong_source.write_text(add_side_effect(result.stdout,definitions));wrong=compile_family(a.clang8,wrong_source,folder/'wrong.o',b);rejected=0;causes={}
    for recipe in b['functions']:
        try:code,_=link_method(wrong,recipe,original,relative)
        except (ValueError,KeyError)as exc:cause=type(exc).__name__+': '+str(exc).split(':')[0]
        else:require(code!=original.at(int(recipe['address'],0),recipe['size']),'Altered C source unexpectedly matches');cause='different complete bytes'
        rejected+=1;causes[cause]=causes.get(cause,0)+1
    report=dict(id=b['id'],source_sha256=digest(source.read_bytes()),identical_repeat_objects=True,repeat_object_sha256=digest(first.data),repeated_exact_functions=len(b['functions']),exact_bytes=sum(r['size']for r in b['functions']),negative_control='added_external_side_effect_in_every_C_definition',rejected_functions=rejected,rejection_causes=causes)
    (folder/'c_validation.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report),flush=True)
if __name__=='__main__':main()
