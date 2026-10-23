"""Optional-Unicorn checks; does not award exact-match credit."""
import sys,json,itertools,struct,hashlib
from pathlib import Path
from project import ROOT
from discover_engine_families import compile_family
import argparse
from elf import Elf,link_method
from arm64_behavior import Arm64Behavior
parser=argparse.ArgumentParser(description='Bounded comparison of an unmatched request-state candidate.')
parser.add_argument('--original',type=Path,required=True)
parser.add_argument('--clang8',type=Path,required=True)
parser.add_argument('--build-dir',type=Path,required=True)
args=parser.parse_args();compiler=args.clang8.resolve();out=args.build_dir.resolve();out.mkdir(parents=True,exist_ok=True)
FLAGS=['-target','aarch64-none-elf','-std=c++11','-O2','-mcpu=cortex-a57','-fno-strict-aliasing','-fno-omit-frame-pointer','-fPIC','-fno-exceptions','-fno-vectorize','-fno-slp-vectorize','-funwind-tables']
e=Elf(args.original);original=e.at(0x4d7390,688)
source_path=ROOT/'src/wip/RequestState.cpp'
obj=compile_family(compiler,source_path,out/'candidate.o',dict(flags=FLAGS))
bindings={'_ZN8ResponseC1ERKS_':0x4f5ce0,'LogResponse':0x4ce310,'_ZN4TailD1Ev':0x4eb5e0,'GlobalToken':0x1914858,'_ZN5EventC1ERK6StatusRKmRK6Shared':0x4d7a80,'ReleaseWeak':0xfa4310,'DetachTask':0x49e0a0,'RemoveCallback':0x49be80}
recipe=dict(address='0x4d7390',size=688,symbol='UpdateRequestState',target_sha256=hashlib.sha256(original).hexdigest(),bindings={k:hex(v)for k,v in bindings.items()},got_bindings={k:dict(cell=hex(a),pointee=hex(e.relative_relocations()[a]))for k,a in {'_ZTV5Event':0x18f8748,'CallbackIdentity':0x18f8908}.items()})
linked,_=link_method(obj,recipe,e,e.relative_relocations());diff=[i for i in range(0,688,4)if original[i:i+4]!=linked[i:i+4]];print('STRICT DIFFERENT WORDS',len(diff),flush=True)
b=Arm64Behavior(e,compiler,out);D=b.DATA;R=D;OP=D+0x1000;OWNER=D+0x2000;EVENTCONTROL=D+0x2100;PAYLOAD=D+0x2200;CALLBACK=D+0x2300;RV=D+0x3000;CV=D+0x3100;BV=D+0x3200;TASK=D+0x4000;trace=[];force=False
get=lambda a:b.read(a,'<Q')[0]
def simple(name):
 def f():trace.append((name,))
 return f
def copy():b.mu.mem_write(b.arg(0),bytes(b.mu.mem_read(b.arg(1),32)));trace.append(('copy',))
def log():trace.append(('log',b.read(b.arg(0),'<h')[0]))
def tail():trace.append(('tail',get(b.arg(0))))
def construct():
 dest=b.arg(0);status=b.read(b.arg(1),'<ii');token=get(b.arg(2));owner=b.read(b.arg(3),'<QQ');trace.append(('construct',status,token,owner))
 b.mu.mem_write(dest,b'\0'*64);b.put(dest,0x1826c98);b.write(dest+8,'<ii',*status);b.write(dest+48,'<QQ',PAYLOAD,EVENTCONTROL)
def invoke():
 event=b.arg(1);trace.append(('invoke',b.read(event+8,'<ii'),get(PAYLOAD+8)))
 b.mu.mem_write(b.arg(8),b'\0'*16)
 if force:b.put(EVENTCONTROL+8,0)
def dispose():trace.append(('dispose',b.arg(0)))
def weak():trace.append(('weak',b.arg(0)))
def detach():trace.append(('detach',b.arg(0),b.arg(1)))
def remove():trace.append(('remove',b.arg(0),b.arg(1),b.arg(2)))
for a,f in {0x4f5ce0:copy,0x4ce310:log,0x4eb5e0:tail,0x4d7a80:construct,0xfa4310:weak,0x49e0a0:detach,0x49be80:remove,b.STUB:simple('state2'),b.STUB+16:simple('state34'),b.STUB+32:invoke,b.STUB+48:dispose}.items():b.stub(a,f)
b.put(RV+32,b.STUB);b.put(RV+40,b.STUB+16);b.put(CV+16,b.STUB+48);b.put(BV+32,b.STUB+32)
def run(code,args):
 global trace,force
 state,flags,task,owner_count,force,response_code=args;trace=[]
 b.mu.mem_write(R,b'\0'*0x300);b.put(R,RV);b.put(R+0x18,1234);b.write(R+0x44,'<B',flags&1);b.write(R+0x47,'<B',flags>>1);b.put(R+0x200,OP);b.put(R+0x1f8,CALLBACK);b.put(CALLBACK,BV);b.put(R+0x1e0,TASK if task else 0)
 b.write(R+0x1e8,'<QQ',PAYLOAD,OWNER if owner_count>=0 else 0);b.write(OWNER,'<Qq',CV,max(owner_count,0));b.write(EVENTCONTROL,'<Qq',CV,1);b.write(PAYLOAD,'<QQ',0,0)
 b.write(OP+16,'<I',state);b.mu.mem_write(OP+0x48,b'\0'*32);b.write(OP+0x48,'<h',response_code);b.put(OP+0x60,0x123456);b.put(0x1914858,77)
 b.mu.mem_write(0x4d7390,code);b.mu.ctl_remove_cache(0x4d7390,0x4d7640);b.execute(0x4d7390,R)
 return trace,bytes(b.mu.mem_read(R,0x300)),bytes(b.mu.mem_read(OWNER,32)),bytes(b.mu.mem_read(EVENTCONTROL,32)),bytes(b.mu.mem_read(PAYLOAD,16))
cases=0
for args in itertools.product((0,2,3,4,5),range(4),(False,True),(-1,0,1),(False,True),(-32768,32767)):
 a=run(original,args);z=run(linked,args);assert a==z,args;cases+=1
report=dict(source_sha256=hashlib.sha256(source_path.read_bytes()).hexdigest(),original_sha256=hashlib.sha256(e.data).hexdigest(),exact=linked==original,exact_credit=0,cases=cases,recipe=recipe,different_word_offsets=diff,compiled_size=len(linked),compiled_sha256=hashlib.sha256(linked).hexdigest(),limits=['Synthetic deterministic external copy, logging, event constructor, callback, weak-release and task-cleanup services.','Callback return extent not recovered; fixture writes 16 bytes only.','No exception, concurrency, real SDK, or whole-game validation.'])
print('PASSED',cases,flush=True)

from discover_engine_families import compile_family
source=source_path.read_text()
flags=['-target','aarch64-none-elf','-std=c++11','-O2','-mcpu=cortex-a57','-fno-strict-aliasing','-fno-omit-frame-pointer','-fPIC','-fno-exceptions','-fno-vectorize','-fno-slp-vectorize','-funwind-tables']
rejected=[]
for name,old,new,args in [('wrong_state','case 2:', 'case 1:',(2,0,True,0,False,32767)),('wrong_disposal','__ATOMIC_ACQ_REL)==0','__ATOMIC_ACQ_REL)==1',(3,0,True,0,True,-32768)),('task_not_cleared','self->task=nullptr','self->task=reinterpret_cast<void*>(1)',(4,0,True,1,False,32767))]:
 assert old in source
 path=out/(name+'.cpp');path.write_text(source.replace(old,new));obj=compile_family(compiler,path,out/(name+'.o'),dict(flags=flags));wrong,_=link_method(obj,recipe,e,e.relative_relocations())
 try:assert run(original,args)==run(wrong,args)
 except (AssertionError,ValueError):rejected.append(name)
 else:raise AssertionError('Bad implementation accepted '+name)
report['negative_controls_rejected']=rejected
(ROOT/'progress/request_state_behavior.json').write_text(json.dumps(report,indent=2));print('REJECTED',rejected,flush=True)
