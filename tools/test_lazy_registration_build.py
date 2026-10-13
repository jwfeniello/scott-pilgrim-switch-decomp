"""Optional compiler tests: repeat all instances and reject wrong source constants."""
import argparse
import json
import os
from pathlib import Path
import tempfile

from discover_lazy_registration import compile_family
from elf import Elf,link_method,require
from project import ROOT,digest,load


def check_build(obj,build,original,relative):
    results = []
    for recipe in build['functions']:
        code,_ = link_method(obj,recipe,original,relative)
        target = original.at(int(recipe['address'],0),recipe['size'])
        results.append(dict(address=recipe['address'],exact=code == target,compiled_size=len(code),
                            compiled_sha256=digest(code),
                            first_different_offsets=[i for i in range(0,min(len(code),len(target)),4)
                                                     if code[i:i+4] != target[i:i+4]][:8]))
    return results


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--original',type=Path,required=True)
    parser.add_argument('--clang8',type=Path,required=True)
    parser.add_argument('--build-dir',type=Path,default=ROOT/'build/lazy_registration')
    args = parser.parse_args();original = Elf(args.original)
    require(digest(original.data) == load(ROOT/'config/target.json')['sha256'],'Wrong original')
    relative = original.relative_relocations()
    build = next(b for b in load(ROOT/'config/builds.json')['builds']if b['id'] == 'lazy_type_registration')
    folder = args.build_dir.resolve();folder.mkdir(parents=True,exist_ok=True)
    source = ROOT/build['source']
    first = compile_family(args.clang8.resolve(),source,folder/'repeat_first.o')
    second = compile_family(args.clang8.resolve(),source,folder/'repeat_second.o')
    repeated = check_build(second,build,original,relative)
    require(first.data == second.data and all(r['exact']for r in repeated),'Repeated batch differs')
    controls = []
    with tempfile.TemporaryDirectory(dir=folder,prefix='negative_') as temporary:
        content = source.read_text()
        for name,old,new in (
            ('wrong_hash','RegistrationHash type_hash(Hash);','RegistrationHash type_hash(Hash ^ 1u);'),
            ('wrong_index','index(-1)','index(-2)'),
        ):
            require(content.count(old) == 1,'Mutation token is not unique')
            wrong_source = Path(temporary)/(name+'.cpp')
            wrong_source.write_text(content.replace(old,new))
            wrong = compile_family(args.clang8.resolve(),wrong_source,folder/(name+'.o'))
            results = check_build(wrong,build,original,relative)
            require(all(not r['exact'] and r['compiled_size'] == 236 and r['first_different_offsets']for r in results),'Wrong source accepted')
            controls.append(dict(control=name,rejected_functions=len(results),
                                 first_different_offsets=results[0]['first_different_offsets']))
    validation = dict(target_elf_sha256=digest(original.data),source_sha256=digest(source.read_bytes()),
                      instances_sha256=digest((ROOT/'src/lazy_type_registration_instances.inc').read_bytes()),
                      repeated_exact_functions=len(repeated),repeat_object_sha256=digest(second.data),
                      identical_repeat_objects=True,negative_controls=controls)
    (folder/'validation.json').write_text(json.dumps(validation,indent=2)+'\n')
    print(json.dumps(validation,indent=2))


if __name__ == '__main__':main()
