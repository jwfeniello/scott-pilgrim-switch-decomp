"""Repeat exact family builds and reject deliberately changed source behavior."""
import argparse
import json
from pathlib import Path
import tempfile

from discover_engine_families import compile_family
from elf import Elf,link_method,require
from project import ROOT,digest,load


def compare(obj,build,original,relative):
    results = []
    for recipe in build['functions']:
        code,_ = link_method(obj,recipe,original,relative)
        expected = original.at(int(recipe['address'],0),recipe['size'])
        results.append(dict(exact=code == expected,size=len(code),
                            first_difference=next((i for i in range(0,min(len(code),len(expected)),4)
                                                   if code[i:i+4] != expected[i:i+4]),None)))
    return results


def mutation(family,content):
    identifier = family['id']
    if identifier == 'callback_clone':return 'wrong_initial_invoke','invoke(0)','invoke(1)'
    if identifier == 'callback_invoke':return 'wrong_argument','(event);','(event);' # handled separately
    if identifier == 'deleting_wrapper':return 'missing_destroy','    DeleteBinding<Key>::Destroy(self);',''
    if identifier == 'callback_owner_release':return 'wrong_allocator_index','AllocatorIndex(manager,old)]','AllocatorIndex(manager,old) ^ 1u]'
    if identifier == 'static_factory_construction':return 'wrong_allocation_size','sizeof(ConstructedType<Key>)','sizeof(ConstructedType<Key>)+8'
    if identifier == 'guarded_callback_dispatch':return 'wrong_dispatch_hash',',Hash,payload);',',Hash ^ 1u,payload);'
    if identifier == 'guarded_callback_buffer':return 'wrong_dispatch_hash',',Hash,&payload);',',Hash ^ 1u,&payload);'
    if identifier.startswith('typed_property_access'):return 'wrong_initial_index','index(-1)','index(-2)'
    if identifier == 'type_payload':return 'wrong_payload_offset','self+8','self+16'
    if identifier == 'type_address':return 'wrong_address','&AddressBinding<Key>::table;','&AddressBinding<Key>::table+1;'
    if identifier == 'virtual_result_adapter':return 'wrong_argument','self->Read(value)','self->Read(reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(value)+8))'
    if identifier == 'delete_with_frame':return 'missing_destroy','    FramedDeleteBinding<Key>::Destroy(self);',''
    if identifier == 'hash_capacity':return 'wrong_minimum_capacity','n==1','n==2'
    if identifier == 'hash_rebuild':return 'wrong_allocation_flags','n*8,8,Flags,','n*8,8,Flags ^ 1u,'
    if identifier.startswith('identity_'):
        line = next(line for line in content.splitlines() if family['function']+'(' in line and '__attribute__' in line)
        return 'wrong_identity',line,line.replace('id==A','id==(A ^ 1u)')
    return 'wrong_atomic_order','__ATOMIC_RELAXED','__ATOMIC_ACQ_REL'


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--original',type=Path,required=True)
    parser.add_argument('--clang8',type=Path,required=True)
    parser.add_argument('--build-dir',type=Path,default=ROOT/'build/engine_families')
    parser.add_argument('--family',action='append')
    args = parser.parse_args();original = Elf(args.original)
    require(digest(original.data) == load(ROOT/'config/target.json')['sha256'],'Wrong original ELF')
    folder = args.build_dir.resolve();folder.mkdir(parents=True,exist_ok=True)
    relative = original.relative_relocations();builds = {b['id']:b for b in load(ROOT/'config/builds.json')['builds']}
    families = load(ROOT/'config/engine_family_discovery.json')['families']
    if args.family:families = [f for f in families if f['id']in args.family]
    reports = []
    with tempfile.TemporaryDirectory(dir=folder,prefix='negative_') as temporary:
        for family in families:
            build = builds[family['id']];source = ROOT/build['source']
            first = compile_family(args.clang8.resolve(),source,folder/(family['id']+'_repeat_first.o'),family)
            second = compile_family(args.clang8.resolve(),source,folder/(family['id']+'_repeat_second.o'),family)
            require(first.data == second.data,'Repeated object differs')
            repeated = compare(second,build,original,relative)
            require(all(r['exact']for r in repeated),'Repeated complete-byte comparison failed')
            name,old,new = mutation(family,source.read_text());content = source.read_text()
            if family['id'] == 'callback_invoke':
                old,new = '(self->owner->*(self->member))(event);','(reinterpret_cast<Host*>(reinterpret_cast<uintptr_t>(self->owner)+8)->*(self->member))(event);'
            dependencies = {}
            wrong_source = Path(temporary)/source.name
            if old in content:
                require(content.count(old) == 1,'Mutation is not unique')
                wrong_source.write_text(content.replace(old,new))
            else:
                header = ROOT/'src/ReferenceReleaseAbi.h';text = header.read_text()
                require(old in text and text.count(old) == 1,'Mutation token missing')
                (Path(temporary)/header.name).write_text(text.replace(old,new))
                wrong_source.write_bytes(source.read_bytes())
                dependencies['src/ReferenceReleaseAbi.h'] = digest(header.read_bytes())
            wrong = compile_family(args.clang8.resolve(),wrong_source,folder/(family['id']+'_wrong.o'),family)
            rejected = compare(wrong,build,original,relative)
            require(all(not r['exact']for r in rejected),'Wrong source received credit')
            report = dict(id=family['id'],source_sha256=digest(source.read_bytes()),
                          instances_sha256=digest((ROOT/'src'/family['include']).read_bytes()),
                          dependencies=dependencies,repeated_exact_functions=len(repeated),
                          identical_repeat_objects=True,repeat_object_sha256=digest(second.data),
                          negative_control=name,rejected_functions=len(rejected),
                          wrong_compiled_sizes=sorted({r['size']for r in rejected}),
                          first_different_offset=rejected[0]['first_difference'])
            reports.append(report);print(json.dumps(report),flush=True)
            local_header = Path(temporary)/'ReferenceReleaseAbi.h'
            if local_header.exists():local_header.unlink()
    (folder/'engine_validation.json').write_text(json.dumps(dict(target_elf_sha256=digest(original.data),families=reports),indent=2)+'\n')


if __name__ == '__main__':main()
