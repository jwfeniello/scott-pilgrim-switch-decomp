"""Optional compiler checks: repeat each complete family and reject source mutations."""
import argparse
import json
from pathlib import Path
import tempfile

from discover_type_and_callback_families import FAMILIES,compile_family
from elf import Elf,link_method,require
from project import ROOT,digest,load

CONTROLS = {
    'type_registration_once':('wrong_initial_index','index(-1)','index(-2)'),
    'factory_construction':('wrong_allocation_size','sizeof(ConstructedType<Key>)','sizeof(ConstructedType<Key>)+8'),
    'callback_identity':('wrong_owner_comparison','first->owner==second->owner','first->owner!=second->owner'),
}


def check_build(obj,build,original,relative):
    results = []
    for recipe in build['functions']:
        code,_ = link_method(obj,recipe,original,relative)
        target = original.at(int(recipe['address'],0),recipe['size'])
        results.append(dict(address=recipe['address'],exact=code == target,
                            target_size=len(target),compiled_size=len(code),
                            first_different_offsets=[i for i in range(0,min(len(code),len(target)),4)
                                                     if code[i:i+4] != target[i:i+4]][:8]))
    return results


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--original',type=Path,required=True)
    parser.add_argument('--clang8',type=Path,required=True)
    parser.add_argument('--build-dir',type=Path,default=ROOT/'build/type_and_callback')
    args = parser.parse_args();original = Elf(args.original)
    require(digest(original.data) == load(ROOT/'config/target.json')['sha256'],'Wrong original ELF')
    relative = original.relative_relocations();folder = args.build_dir.resolve()
    folder.mkdir(parents=True,exist_ok=True)
    builds = {b['id']:b for b in load(ROOT/'config/builds.json')['builds']}
    reports = []
    with tempfile.TemporaryDirectory(dir=folder,prefix='negative_') as temporary:
        for family in FAMILIES:
            build = builds[family['id']];source = ROOT/build['source']
            first = compile_family(args.clang8.resolve(),source,folder/(family['id']+'_repeat_first.o'))
            second = compile_family(args.clang8.resolve(),source,folder/(family['id']+'_repeat_second.o'))
            require(first.data == second.data,'Repeated object differs')
            repeated = check_build(second,build,original,relative)
            require(all(r['exact']for r in repeated),'Repeated complete-body comparison failed')
            control,old,new = CONTROLS[family['id']];content = source.read_text()
            require(content.count(old) == 1,'Mutation token is not unique')
            wrong_source = Path(temporary)/Path(build['source']).name
            wrong_source.write_text(content.replace(old,new))
            wrong = compile_family(args.clang8.resolve(),wrong_source,folder/(family['id']+'_wrong.o'))
            rejected = check_build(wrong,build,original,relative)
            require(all(not r['exact']for r in rejected),'Wrong source received exact credit')
            report = dict(id=family['id'],source_sha256=digest(source.read_bytes()),
                          instances_sha256=digest((ROOT/'src'/family['include']).read_bytes()),
                          repeated_exact_functions=len(repeated),identical_repeat_objects=True,
                          repeat_object_sha256=digest(second.data),negative_control=control,
                          rejected_functions=len(rejected),
                          wrong_compiled_sizes=sorted({r['compiled_size']for r in rejected}),
                          first_different_offsets=rejected[0]['first_different_offsets'])
            reports.append(report);print(json.dumps(report),flush=True)
    validation = dict(target_elf_sha256=digest(original.data),families=reports)
    (folder/'validation.json').write_text(json.dumps(validation,indent=2)+'\n')


if __name__ == '__main__':main()
