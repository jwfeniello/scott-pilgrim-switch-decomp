"""Repeat library ABI builds and reject an added effect in their C++ algorithms."""
import argparse
import json
from pathlib import Path
import re
import shutil
import tempfile

from discover_engine_families import compile_family
from elf import Elf,link_method,require
from project import ROOT,digest,input_hashes,load

METHODS=('push_front','push_back','__add_back_capacity','__add_front_capacity',
         'clear','__move_assign','shrink_to_fit','erase','__rehash','rehash',
         '__node_insert_unique','__node_insert_multi','remove','find','__find_equal','__destroy',
         '__tree_remove','__tree_balance_after_insert','__emplace_unique_key_args',
         '~__deque_base','~__hash_table','~__tree','reserve','insert','replace',
         'append','assign','__grow_by','__grow_by_and_replace','move_backward','copy',
         '__sort','__sort5','__insertion_sort_incomplete','__push_back_slow_path')

def instrument(content):
    names='|'.join(re.escape(n)for n in METHODS)
    expression=r'(?<![A-Za-z_0-9.>])(?:'+names+r')\s*\([^;{}]*?\)\s*[^;{}]*?\{'
    return re.subn(expression,lambda m:m[0]+'\n    ::LibraryAddedSideEffect();\n',content)

def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--original',type=Path,required=True)
    parser.add_argument('--clang8',type=Path,required=True)
    parser.add_argument('--build-dir',type=Path,required=True)
    parser.add_argument('--build-id',action='append')
    args=parser.parse_args();folder=args.build_dir.resolve();folder.mkdir(parents=True,exist_ok=True)
    original=Elf(args.original);require(digest(original.data)==load(ROOT/'config/target.json')['sha256'],'Wrong original')
    relative=original.relative_relocations();builds=[b for b in load(ROOT/'config/builds.json')['builds']if b.get('source_review')=='library_abi_view']
    if args.build_id:builds=[b for b in builds if b['id']in args.build_id]
    require(bool(builds),'No library builds selected');reports=[]
    with tempfile.TemporaryDirectory(dir=folder,prefix='library_negative_')as directory:
        temporary=Path(directory).resolve();require(temporary.is_relative_to(folder),'Temporary directory escaped build folder')
        roots=sorted({n for b in builds for n in b['header_roots']});mutations={}
        for root in roots:
            destination=temporary/root;shutil.copytree(ROOT/root,destination)
            for path in destination.rglob('*'):
                if not path.is_file():continue
                content=path.read_text(encoding='utf-8');changed,count=instrument(content)
                if count:
                    path.write_text(changed,encoding='utf-8');mutations[path.relative_to(temporary).as_posix()]=count
        require(bool(mutations),'No algorithms instrumented')
        for build in builds:
            source=ROOT/build['source'];identifier=build['id']
            first=compile_family(args.clang8,source,folder/(identifier+'_first.o'),build)
            second=compile_family(args.clang8,source,folder/(identifier+'_second.o'),build)
            require(first.data==second.data,'Repeat object differs')
            for recipe in build['functions']:
                code,_=link_method(second,recipe,original,relative)
                require(code==original.at(int(recipe['address'],0),recipe['size']),'Repeat bytes differ')
            negative=temporary/source.name
            negative.write_text('extern "C" void LibraryAddedSideEffect() noexcept;\n'+source.read_text())
            flags=[str(temporary/v)if v in roots else v for v in build['flags']]
            wrong=compile_family(args.clang8,negative,folder/(identifier+'_wrong.o'),dict(flags=flags));rejections={}
            for recipe in build['functions']:
                try:code,_=link_method(wrong,recipe,original,relative)
                except ValueError as exc:cause=str(exc).split(':')[0]
                else:
                    require(code!=original.at(int(recipe['address'],0),recipe['size']),'Wrong library body received credit: '+recipe['symbol'])
                    cause='different complete bytes'
                rejections[cause]=rejections.get(cause,0)+1
            report=dict(id=identifier,source_sha256=digest(source.read_bytes()),identical_repeat_objects=True,
                        repeat_object_sha256=digest(first.data),repeated_exact_functions=len(build['functions']),
                        exact_bytes=sum(r['size']for r in build['functions']),negative_control='added_external_effect_in_library_algorithms',
                        rejected_functions=sum(rejections.values()),rejection_causes=rejections,mutated_headers=mutations)
            reports.append(report);print(identifier,len(build['functions']),'repeated and rejected',flush=True)
    (folder/'library_validation.json').write_text(json.dumps(dict(target_elf_sha256=digest(original.data),builds=reports),indent=2)+'\n')

if __name__=='__main__':main()
