"""Repeat all recovered leaf bodies and reject an added source side effect."""
import argparse
import json
from pathlib import Path
from discover_engine_families import compile_family
from elf import Elf,link_method,require
from project import ROOT,digest,load

def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--original',type=Path,required=True)
    parser.add_argument('--clang8',type=Path,required=True)
    parser.add_argument('--build-dir',type=Path,required=True)
    args=parser.parse_args();folder=args.build_dir.resolve();folder.mkdir(parents=True,exist_ok=True)
    original=Elf(args.original);require(digest(original.data)==load(ROOT/'config/target.json')['sha256'],'Wrong original')
    relative=original.relative_relocations();build=next(b for b in load(ROOT/'config/builds.json')['builds']if b['id']=='leaf_primitives')
    source=ROOT/build['source'];first=compile_family(args.clang8,source,folder/'leaf_first.o',build)
    second=compile_family(args.clang8,source,folder/'leaf_second.o',build);require(first.data==second.data,'Objects differ')
    for recipe in build['functions']:
        code,_=link_method(second,recipe,original,relative)
        require(code==original.at(int(recipe['address'],0),recipe['size']),'Repeat differs')
    wrong=compile_family(args.clang8,source,folder/'leaf_wrong.o',dict(flags=[*build['flags'],'-DLEAF_NEGATIVE_CONTROL']))
    rejected=0;causes={}
    for recipe in build['functions']:
        try:
            code,_=link_method(wrong,recipe,original,relative)
        except ValueError as exc:
            cause=str(exc).split(':')[0]
        else:
            require(code!=original.at(int(recipe['address'],0),recipe['size']),'Negative unexpectedly matches')
            cause='different complete bytes'
        rejected+=1;causes[cause]=causes.get(cause,0)+1
    report=dict(id=build['id'],source_sha256=digest(source.read_bytes()),identical_repeat_objects=True,
                repeat_object_sha256=digest(first.data),repeated_exact_functions=len(build['functions']),
                exact_bytes=sum(r['size']for r in build['functions']),negative_control='added_external_side_effect',
                rejected_functions=rejected,rejection_causes=causes)
    (folder/'leaf_validation.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report))
if __name__=='__main__':main()
