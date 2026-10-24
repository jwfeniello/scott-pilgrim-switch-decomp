"""Rebuild source and compare whole functions to a user-supplied original ELF."""
import argparse
from concurrent.futures import ThreadPoolExecutor
import datetime as dt
import os
from pathlib import Path
import subprocess

from elf import Elf,link_method,require
from project import ROOT,check_non_fde_evidence,digest,inventory,input_hashes,load,non_fde_inventory


def compiler_version(compiler,expected):
    result = subprocess.run([str(compiler),'--version'],capture_output=True,text=True,check=True,
                            creationflags=getattr(subprocess,'CREATE_NO_WINDOW',0))
    require('clang version '+expected in result.stdout,'Incorrect compiler version: '+result.stdout.splitlines()[0])
    return result.stdout.splitlines()[0]


def linker_version(linker,expected):
    result = subprocess.run([str(linker),'--version'],capture_output=True,text=True,check=True,
                            creationflags=getattr(subprocess,'CREATE_NO_WINDOW',0))
    require(result.stdout.startswith('LLD '+expected+' '),'Incorrect linker version: '+result.stdout.splitlines()[0])
    return result.stdout.splitlines()[0]


def build_output(build,build_dir):
    """Object whose functions the build's recipes describe."""
    if build.get('kind') == 'lto':return Path(build_dir)/(build['id']+'.elf.lto.o')
    return Path(build_dir)/(build['id']+'.o')


def build_commands(build,compiler,root,build_dir,linker=None):
    """Compiler commands for one build. With `codegen_flags`, `flags` optimize the IR
    (emitted as bitcode) and a second step only generates code, as an LTO link does.
    An `lto` build compiles `source` and `lto_sources` to bitcode, a native keep-alive
    object from `keep_source`, and links them with ld.lld; `--save-temps` keeps the
    link-time code-generation object the recipes describe."""
    source,output = str(Path(root)/build['source']),str(Path(build_dir)/(build['id']+'.o'))
    if build.get('kind') == 'lto':
        require(linker is not None,'LTO build needs ld.lld: '+build['id'])
        require('-flto' in build['flags'] and '-flto' not in build['keep_flags'],'LTO flags must mark bitcode objects only: '+build['id'])
        objects,commands = [],[]
        for index,name in enumerate([build['source'],*build['lto_sources']]):
            objects.append(str(Path(build_dir)/f"{build['id']}.{index}.o"))
            commands.append([str(compiler),*build['flags'],'-c',str(Path(root)/name),'-o',objects[-1]])
        keep = str(Path(build_dir)/(build['id']+'.keep.o'))
        commands.append([str(compiler),*build['keep_flags'],'-c',str(Path(root)/build['keep_source']),'-o',keep])
        commands.append([str(linker),'-o',str(Path(build_dir)/(build['id']+'.elf')),*build['link_flags'],'--save-temps',keep,*objects])
        return commands
    if 'codegen_flags' not in build:
        return [[str(compiler),*build['flags'],'-c',source,'-o',output]]
    codegen = build['codegen_flags']
    require(any(codegen[i:i+2] == ['-Xclang','-disable-llvm-optzns'] for i in range(len(codegen))),
            'Code generation step must disable IR optimization: '+build['id'])
    bitcode = str(Path(build_dir)/(build['id']+'.bc'))
    return [[str(compiler),*build['flags'],'-emit-llvm','-c',source,'-o',bitcode],
            [str(compiler),*codegen,'-c',bitcode,'-o',output]]


def verify(original_path,compilers,build_dir,root=ROOT,only=None,jobs=1,linker=None):
    require(jobs > 0,'Compiler job count must be positive')
    root,build_dir = Path(root),Path(build_dir);target,functions = inventory(root)
    original = Elf(original_path)
    require(digest(original.data) == target['sha256'],'Original ELF SHA-256 does not match this target')
    spans = original.unwind_ranges()
    require(spans == {address:row['size']for address,row in functions.items()},'Original complete FDE inventory differs')
    require(original.named['.text'][3] == int(target['text_address'],0) and original.named['.text'][5] == target['text_size'],'Original .text denominator differs')
    extents = non_fde_inventory(root,target,functions)
    check_non_fde_evidence(original,spans,extents)
    spans = {**spans,**{address:row['size']for address,row in extents.items()}}
    builds = load(root/'config/builds.json')['builds']
    addresses = [recipe['address']for build in builds for recipe in build['functions']]
    require(len(addresses) == len(set(addresses)),'Duplicate reconstruction address')
    if only:builds = [b for b in builds if b['id'] == only]
    require(bool(builds),'No selected build')
    require(len({b['id']for b in builds}) == len(builds),'Duplicate build output ID')
    versions = {version:compiler_version(compilers[version],version)for version in {b['compiler']for b in builds}}
    if any(b.get('kind') == 'lto' for b in builds):
        require(linker is not None,'LTO builds need --lld8')
        versions['lld'] = linker_version(linker,'8.0.1')
    build_dir.mkdir(parents=True,exist_ok=True)
    relative = original.relative_relocations();matches = [];failures = [];receipts = []
    def compile_build(build):
        output = build_output(build,build_dir)
        for command in build_commands(build,compilers[build['compiler']],root,build_dir,linker):
            result = subprocess.run(command,capture_output=True,text=True,
                                    cwd=root,
                                    creationflags=getattr(subprocess,'CREATE_NO_WINDOW',0),
                                    env=dict(os.environ,TMP=str(build_dir.resolve()),TEMP=str(build_dir.resolve())))
            require(result.returncode == 0,'Compile failed for '+build['id']+'\n'+result.stderr)
        return build,output
    with ThreadPoolExecutor(max_workers=jobs) as pool:
        for index,(build,output) in enumerate(pool.map(compile_build,builds)):
            obj = Elf(output)
            receipts.append(dict(id=build['id'],compiler=build['compiler'],object_sha256=digest(obj.data)))
            for recipe in build['functions']:
                address = int(recipe['address'],0)
                require(address in spans and recipe['size'] == spans[address],'Recipe does not cover a full FDE or proven extent')
                linked,relocations = link_method(obj,recipe,original,relative)
                expected = original.at(address,spans[address])
                require(digest(expected) == recipe['target_sha256'],'Original function hash differs from manifest')
                exact = linked == expected
                if not exact:
                    failures.append(dict(address=hex(address),target_size=len(expected),compiled_size=len(linked),
                                         first_different_offsets=[i for i in range(0,min(len(linked),len(expected)),4)
                                                                  if linked[i:i+4] != expected[i:i+4]][:8]))
                matches.append(dict(address=hex(address),size=len(expected),exact=exact,
                                    target_sha256=digest(expected),compiled_sha256=digest(linked),
                                    source=build['source'],symbol=recipe['symbol'],
                                    source_review=build.get('source_review','manual_reconstruction'),
                                    relocation_count=len(relocations)))
            if index%50 == 0 or index+1 == len(builds):
                print(f"Compiled {index+1}/{len(builds)} source builds; compared {len(matches)} complete functions",flush=True)
    require(not failures,'Complete byte comparison failed: '+str(failures[:5]))
    snapshot = dict(version=1,generated_at=dt.datetime.now(dt.timezone.utc).isoformat(),
                    target_elf_sha256=target['sha256'],input_sha256=input_hashes(root),
                    compiler_versions=versions,compiler_sha256={k:digest(Path(linker if k == 'lld' else compilers[k]).read_bytes())for k in versions},
                    exact_functions=len(matches),exact_bytes=sum(r['size']for r in matches),
                    builds=receipts,matches=sorted(matches,key=lambda r:int(r['address'],0)))
    if not only:
        import json
        destination = root/'progress/verified.json'
        destination.parent.mkdir(parents=True,exist_ok=True)
        destination.write_text(json.dumps(snapshot,indent=2)+'\n',encoding='utf-8')
    print(f"Verified {len(matches):,} exact functions / {snapshot['exact_bytes']:,} bytes",flush=True)
    return snapshot


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--original',type=Path,default=ROOT/'orig/Scott_Switch.elf')
    parser.add_argument('--clang7',type=Path,default=os.environ.get('SCOTT_CLANG7','toolchains/llvm701/bin/clang++'))
    parser.add_argument('--clang8',type=Path,default=os.environ.get('SCOTT_CLANG8','toolchains/llvm801/bin/clang++'))
    parser.add_argument('--lld8',type=Path,default=os.environ.get('SCOTT_LLD8','toolchains/llvm801/bin/ld.lld'))
    parser.add_argument('--build-dir',type=Path,default=ROOT/'build/verify')
    parser.add_argument('--only',help='Verify one build without updating the public snapshot')
    parser.add_argument('--jobs',type=int,default=1,help='Concurrent compiler processes (default: 1)')
    args = parser.parse_args()
    verify(args.original,{'7.0.1':args.clang7.resolve(),'8.0.1':args.clang8.resolve()},args.build_dir.resolve(),only=args.only,jobs=args.jobs,
           linker=args.lld8.resolve())


if __name__ == '__main__':main()
