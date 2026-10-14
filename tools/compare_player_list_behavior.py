"""Compare WIP player-list behavior under bounded, stubbed ARM64 emulation.

Requires the optional Unicorn Python package. This assigns no matching credit.
"""
import argparse
import itertools
import json
from pathlib import Path
import struct
from types import SimpleNamespace

from discover_engine_families import compile_family
from elf import Elf,link_method,require
from project import ROOT,digest,load
from verify import compiler_version

def main():
    from unicorn import Uc,UC_ARCH_ARM64,UC_MODE_ARM,UC_HOOK_CODE
    from unicorn.arm64_const import UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2,UC_ARM64_REG_X30,UC_ARM64_REG_SP,UC_ARM64_REG_PC
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--original',type=Path,required=True)
    parser.add_argument('--clang8',type=Path,required=True)
    parser.add_argument('--build-dir',type=Path,required=True)
    args=parser.parse_args()
    original=Elf(args.original)
    require(digest(original.data)==load(ROOT/'config/target.json')['sha256'],'Wrong original ELF')
    require(original.unwind_ranges().get(0x996ab0)==376,'Original full extent differs')
    P=SimpleNamespace(original=original,relative=original.relative_relocations())
    version=compiler_version(args.clang8,'8.0.1')
    folder=args.build_dir.resolve();folder.mkdir(parents=True,exist_ok=True)
    source=ROOT/'src/wip/PlayerObjectListIndex.cpp'
    flags=['-target','aarch64-none-elf','-std=c++11','-O2','-mcpu=cortex-a57',
           '-fno-strict-aliasing','-fomit-frame-pointer','-fno-pic']
    obj=compile_family(args.clang8,source,folder/'player_lookup.o',dict(flags=flags))
    code,_=obj.method('PlayerObjectListIndex')
    fixture=folder/'fixture_return.cpp'
    fixture.write_text('extern "C" __attribute__((noinline)) void PlayerFixtureReturn() {}\n')
    stub=compile_family(args.clang8,fixture,folder/'fixture_return.o',dict(flags=flags))
    fixture_return,relocations=stub.method('PlayerFixtureReturn')
    require(not relocations,'Fixture return unexpectedly has external dependencies')
    SOURCE_START=0x3000000
    STOP=0x3ff0000
    ENSURE=0x3010000
    FREE=0x3010010
    TYPE=0x4010000
    RESOLVER=0x4020000
    ITEM=0x4030000
    HANDLE=0x4040000
    OBJECT=0x4050000
    OBJECT_VTABLE=0x4060000
    MANAGER=0x4070000
    ALLOCATOR=0x4080000
    ALLOCATOR_VTABLE=0x4090000
    ARRAY=0x4098000
    TARGET=0x40a0000
    OTHER=0x40a1000
    PLAYER=0x40b0000
    bindings=dict(PlayerListTypeInfo=hex(0x1935058),PlayerListResolver=hex(0x191cd10),
                  PlayerListAllocators=hex(0x1926bd8),PlayerGetLevelItem=hex(0x7725e0),
                  PlayerResolve=hex(0x67edd0),PlayerCollectObjects=hex(0x8679f0),
                  PlayerAllocatorIndex=hex(0xa82b30),__clang_call_terminate=hex(0x6768b8),_Unwind_Resume=hex(0xfa4920))
    recipe=dict(address=hex(SOURCE_START),symbol='PlayerObjectListIndex',size=len(code),bindings=bindings,got_bindings={})
    linked,_=link_method(obj,recipe,P.original,P.relative)
    REGS=[UC_ARM64_REG_X0,UC_ARM64_REG_X1,UC_ARM64_REG_X2]

    def run(compiled,values,target,cache_mode,keep_buffer):
        mu=Uc(UC_ARCH_ARM64,UC_MODE_ARM)
        mapped=set()
        def map_page(address):
            page=address&~4095
            if page not in mapped:mu.mem_map(page,4096);mapped.add(page)
        # Import stubs are test-only returns; the credited/project source contains
        # no original instructions and these bytes are never matching evidence.
        ret=fixture_return
        for address in [*[int(v,0)for k,v in bindings.items()if k not in ('PlayerListTypeInfo','PlayerListResolver','PlayerListAllocators')],ENSURE,FREE,STOP]:
            map_page(address);mu.mem_write(address,ret)
        for page in range(0x1910000,0x1940000,4096):map_page(page)
        mu.mem_map(0x4000000,0x200000)
        entry=SOURCE_START if compiled else 0x996ab0
        map_page(entry)
        mu.mem_write(entry,linked if compiled else P.original.at(0x996ab0,376))
        def put(address,value):mu.mem_write(address,struct.pack('<Q',value))
        def get(address):return struct.unpack('<Q',mu.mem_read(address,8))[0]
        put(0x1935058,TYPE);put(0x191cd10,RESOLVER);put(0x1926bd8,MANAGER)
        put(ITEM+0x80,0 if cache_mode in ('missing_handle','cleared_after_init')else HANDLE)
        put(HANDLE+8,0 if cache_mode=='missing_object'else OBJECT)
        put(OBJECT,OBJECT_VTABLE);put(OBJECT_VTABLE+0x10,ENSURE)
        put(MANAGER+0x370+5*8,ALLOCATOR);put(ALLOCATOR,ALLOCATOR_VTABLE);put(ALLOCATOR_VTABLE+0x30,FREE)
        for n,value in enumerate(values):put(ARRAY+8*n,value)
        mu.reg_write(UC_ARM64_REG_X0,PLAYER);mu.reg_write(UC_ARM64_REG_X1,target)
        mu.reg_write(UC_ARM64_REG_SP,0x411f000);mu.reg_write(UC_ARM64_REG_X30,STOP)
        trace=[]
        state={}
        def hook(mu,address,size,data):
            args=[mu.reg_read(r)for r in REGS]
            if address==STOP:mu.emu_stop();return
            if address==0x7725e0:
                assert args[0]==PLAYER+0x60
                trace.append('get_level_item');mu.reg_write(UC_ARM64_REG_X0,ITEM)
            elif address==0x67edd0:
                assert args==[RESOLVER,0x4f08e67a,ITEM+0x80]
                trace.append('resolve');put(ITEM+0x80,HANDLE);put(HANDLE+8,OBJECT)
            elif address==ENSURE:
                assert args[0]==OBJECT
                trace.append('ensure_ready')
                if cache_mode=='cleared_after_init':put(ITEM+0x80,0)
            elif address==0x8679f0:
                expected_object=0 if cache_mode=='cleared_after_init'else OBJECT
                assert args[0]==expected_object
                local=args[1]
                assert get(local)==TYPE+0x50 and get(local+8)==get(local+16)==get(local+32)==0
                state['list']=local
                put(local+16,len(values));put(local+32,ARRAY if values or keep_buffer else 0)
                trace.append('collect')
            elif address==0xa82b30:
                assert args[:2]==[MANAGER,ARRAY]and get(state['list']+16)==0
                trace.append('choose_allocator');mu.reg_write(UC_ARM64_REG_X0,0xdead0005)
            elif address==FREE:
                assert args[:2]==[ALLOCATOR,ARRAY]and get(state['list']+16)==0
                trace.append('free')
            elif address in (0x6768b8,0xfa4920):
                raise AssertionError('Unexpected exception helper on a normal-path fixture')
            else:return
            mu.reg_write(UC_ARM64_REG_PC,mu.reg_read(UC_ARM64_REG_X30))
        mu.hook_add(UC_HOOK_CODE,hook)
        mu.emu_start(entry,STOP+4,count=20000)
        assert mu.reg_read(UC_ARM64_REG_PC)==STOP,'Run did not return'
        value=mu.reg_read(UC_ARM64_REG_X0)&0xffffffff
        result=value if value<0x80000000 else value-0x100000000
        return result,trace

    cases=[]
    patterns=[[],[TARGET],[0],[OTHER,TARGET,TARGET],[TARGET,OTHER],[0,TARGET],[OTHER,0],[TARGET,0]]
    for values,target,cache_mode,keep_buffer in itertools.product(patterns,[TARGET,0],['ready','missing_handle','missing_object','cleared_after_init'],[False,True]):
        # A cleared cache needs initialization to exercise the mutation callback.
        if cache_mode=='cleared_after_init':
            actual_mode='cleared_after_init'
        else:actual_mode=cache_mode
        original=run(False,values,target,actual_mode,keep_buffer)
        candidate=run(True,values,target,actual_mode,keep_buffer)
        expected=next((n for n,value in enumerate(values)if value==target and value),-1)
        assert original==candidate and original[0]==expected,(values,target,cache_mode,keep_buffer,original,candidate)
        cases.append(dict(values=values,target=target,cache_mode=cache_mode,keep_buffer=keep_buffer,result=original[0],trace=original[1]))
    (folder/'behavior.json').write_text(json.dumps(dict(source=source.relative_to(ROOT).as_posix(), source_sha256=digest(source.read_bytes()), target_elf_sha256=digest(P.original.data), original_address='0x996ab0',original_size=376,compiled_size=len(code), compiler=version, compiled_function_sha256=digest(linked), exact_match=False, normal_path_cases=len(cases), limitations='External dependencies are stubbed. No unwinding, full game behavior, linking, or boot proof.',cases=cases),indent=2)+'\n')
    print('Original/C++ normal-path behavior agrees:',len(cases),'cases; zero exact-match credit',flush=True)

if __name__=='__main__':main()
