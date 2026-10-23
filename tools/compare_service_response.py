"""Optional-Unicorn bounded research; never awards exact-match credit."""
import sys,json,hashlib,itertools,struct
from pathlib import Path
import argparse
from project import ROOT
parser=argparse.ArgumentParser(description='Compare service-response paths excluding diagnostic logging; awards no exact credit.')
parser.add_argument('--original',type=Path,required=True)
parser.add_argument('--clang8',type=Path,required=True)
parser.add_argument('--build-dir',type=Path,required=True)
args=parser.parse_args()
repo=ROOT
from elf import Elf,relocate
from arm64_behavior import Arm64Behavior
from discover_engine_families import compile_family
out=args.build_dir.resolve();out.mkdir(parents=True,exist_ok=True)
e=Elf(args.original);compiler=args.clang8.resolve();b=Arm64Behavior(e,compiler,out);D=b.DATA
R=D;CTX=D+0x1000;STATUS=D+0x1100;CLASSIFY=D+0x1200;INCOMING=D+0x2000;HANDLE=D+0x2100;PENDING=D+0x2200;MUTEX=D+0x2400;RV=D+0x3000;FV=D+0x3100;OV=D+0x3200;FN=D+0x3300;CLONE=D+0x3400;RESULT=D+0x3500;OBJECTS=[D+0x4000+i*0x100 for i in range(7)]
get=lambda a:b.read(a,'<Q')[0]
trace=[];current=None;response_address=0
known={'ParseResponse':0x4c760,'Lock':0xfa3970,'Unlock':0xfa39c0,'Complete':0x7acd0}
def forbidden():raise AssertionError('Fixture reached an unmodeled service')
b.stub(b.STUB+0xf00,forbidden)
def parse():
 global response_address
 response_address=b.arg(8);trace.append(('parse',b.arg(0),b.arg(1),b.arg(2),b.arg(3),bool(get(b.arg(4)+32))))
 b.mu.mem_write(response_address,bytes(104));b.write(response_address,'<i',-71);b.write(response_address+0x10,'<i',17);b.write(response_address+0x14,'<B',current['complete']);b.write(response_address+0x18,'<I',0xf0000012);b.write(response_address+0x34,'<B',current['update']);b.write(response_address+0x38,'<I',0x81726354)
 for offset,obj in zip((8,0x20,0x28,0x48,0x50,0x58,0x60),OBJECTS):b.put(response_address+offset,obj if current['owners'] else 0)
def deliver():
 p=b.arg(2);trace.append(('deliver',b.arg(0),b.arg(1),b.read(p,'<i')[0],b.read(p+0x10,'<i')[0],b.read(p+0x14,'<B')[0]))
 if current['flip']:b.write(p+0x14,'<B',not current['complete'])
def handle():trace.append(('handle',));return {b.x(0):HANDLE}
def lock():trace.append(('lock',b.arg(0)))
def unlock():trace.append(('unlock',b.arg(0)))
def complete():
 p=b.arg(1);trace.append(('complete',b.arg(0),b.read(p,'<i')[0],get(p+8),get(p+16),b.read(p+24,'<i')[0]))
 if current['transfer'] and current['owners']:
  obj=get(response_address+8);b.put(response_address+8,0);b.write(obj+8,'<I',b.read(obj+8,'<I')[0]-1)
def dispose():trace.append(('dispose',b.arg(0),b.read(R+12,'<I')[0]))
def clone():trace.append(('clone_heap',));b.put(CLONE,FV);return {b.x(0):CLONE}
def clone_into():trace.append(('clone_inline',));b.put(b.arg(1),FV)
def destroy():trace.append(('destroy_inline',))
def destroy_allocated():trace.append(('destroy_heap',))
for a,f in {0x4c760:parse,0xfa3970:lock,0xfa39c0:unlock,0x7acd0:complete,b.STUB:deliver,b.STUB+16:handle,b.STUB+32:dispose,b.STUB+48:clone,b.STUB+64:clone_into,b.STUB+80:destroy,b.STUB+96:destroy_allocated}.items():b.stub(a,f)
b.put(RV+0x50,b.STUB);b.put(RV+0x28,b.STUB+16);b.put(OV+0x10,b.STUB+32)
for off,a in [(0x10,b.STUB+48),(0x18,b.STUB+64),(0x20,b.STUB+80),(0x28,b.STUB+96)]:b.put(FV+off,a)
flags=['-target', 'aarch64-none-elf', '-std=c++11', '-D_GNU_SOURCE', '-U_WIN32', '-U_WIN64', '-O3', '-mcpu=cortex-a57', '-fno-omit-frame-pointer', '-fPIC', '-fno-strict-aliasing', '-fno-vectorize', '-fno-slp-vectorize', '-fno-exceptions', '-nostdinc++', '-isystem', 'vendor/llvm-libcxx-8/include', '-isystem', 'vendor/musl/include', '-isystem', 'vendor/musl/generated', '-D_LIBCPP_HAS_NO_THREADS', '-D_LIBCPP_HAS_MUSL_LIBC', '-D__CLANG_MAX_ALIGN_T_DEFINED', '-D_LIBCPP_DISABLE_VISIBILITY_ANNOTATIONS', '-funwind-tables']
flags=[str(ROOT/x) if x.startswith("vendor/") else x for x in flags]
flags += ["-iquote", str(ROOT/"src/wip")]
def build(source,name):
 obj=compile_family(compiler,source,out/(name+'.o'),dict(flags=flags));code,rels=obj.method('ProcessServiceResponse');code=bytearray(code);cells={}
 for r in rels:
  symbol=r['symbol'];target=known.get(symbol,b.STUB+0xf00)
  if r['kind'] in (311,312):
   if symbol not in cells:cells[symbol]=D+0x10000+len(cells)*8;b.put(cells[symbol],b.STUB+0xf00)
   target=cells[symbol]
  relocate(code,r['offset'],r['kind'],target+r['addend'],b.MODEL)
 return bytes(code)
source=ROOT/'src/wip/ServiceResponse.cpp';code=build(source,'candidate');b.mu.mem_write(b.MODEL,code);b.mu.ctl_remove_cache(b.MODEL,b.MODEL+len(code))
def run(entry,case):
 global trace,current
 trace=[];current=case;b.mu.mem_write(R,bytes(0x300));b.put(R,RV);b.write(R+12,'<I',2);b.put(R+0x98,CTX);b.put(R+0xd0,0x11223344);b.write(R+0x110,'<II',11,22);b.put(CTX+0x20,STATUS);b.put(CTX+0x28,CLASSIFY);b.mu.mem_write(STATUS,bytes(64));b.mu.mem_write(CLASSIFY,bytes(48));b.write(CLASSIFY+8,'<i',case['kind']);b.put(HANDLE+8,PENDING);b.mu.mem_write(PENDING,bytes(0xa0));b.write(PENDING+0x18,'<I',case['state']);b.write(PENDING+0x88,'<B',case['stopped']);b.put(PENDING+0x90,MUTEX)
 tree=case.get('tree',0)
 if tree:
  node=D+0x6000;parent=D+0x6100;b.mu.mem_write(node,bytes(48));b.mu.mem_write(parent,bytes(48));b.write(node+0x1c,'<ii',17,case['kind']);b.write(CLASSIFY+8,'<i',3)
  if tree==1:b.put(CLASSIFY+24,node)
  else:b.put(CLASSIFY+24,parent);b.write(parent+0x1c,'<ii',20 if tree==2 else 10,3);b.put(parent+(0 if tree==2 else 8),node)
 for obj in OBJECTS:b.write(obj,'<QII',OV,case['owners'],0)
 if case['callback']=='inline':b.put(R+0xe0,FV);b.put(R+0x100,R+0xe0)
 elif case['callback']=='heap':b.put(FN,FV);b.put(R+0x100,FN)
 b.execute(entry,R,INCOMING,RESULT)
 return trace,bytes(b.mu.mem_read(R,0x120)),bytes(b.mu.mem_read(STATUS,64)),bytes(b.mu.mem_read(PENDING,0xa0)),[bytes(b.mu.mem_read(obj,16)) for obj in OBJECTS]
cases=[]
for complete_flag,update,flip,state,stopped,owners,callback,transfer,kind,tree in itertools.product((False,True),(False,True),(False,True),(1,4),(False,True),(0,1,3),('none','inline','heap'),(False,True),(-2,0,6),(0,1,2,3)):
 cases.append(dict(complete=complete_flag,update=update,flip=flip,state=state,stopped=stopped,owners=owners,callback=callback,transfer=transfer,kind=kind,tree=tree))
passed=0
for case in cases:
 original=run(0x181f30,case);model=run(b.MODEL,case)
 if original!=model:
  (out/'failure.json').write_text(json.dumps(dict(case=case,original=str(original),model=str(model)),indent=2));raise AssertionError((case,original,model))
 passed+=1
print('PASSED',passed,flush=True)
report=dict(cases=passed,exact_credit=0,source_sha256=hashlib.sha256(source.read_bytes()).hexdigest(),original_sha256=hashlib.sha256(e.data).hexdigest(),limits=['Only paths whose classification result is outside the logging range 2..5, using empty and one/two-node trees.','Synthetic parser, callbacks, locking and completion service.','No JSON/stream branch, real concurrency, exceptions or full-game validation.'])

rejected=[]
original_source=source.read_text()
basecase=dict(complete=True,update=True,flip=False,state=1,stopped=False,owners=1,callback='none',transfer=True,kind=0)
mutants=[
 ('early_finished_state','Unlock(mutex);\n    }\n    self->state = 4;','Unlock(mutex);\n      self->state = 4;\n    }',basecase),
 ('wrong_completion_gate','p->state != 4','p->state != 5',dict(basecase,state=4)),
 ('wrong_release_predicate','__ATOMIC_ACQ_REL) == 0)','__ATOMIC_ACQ_REL) == 1)',basecase),
 ('wrong_delivery_argument','self->Deliver(result, response)','self->Deliver(nullptr, response)',basecase)]
for name,old,new,case in mutants:
 assert old in original_source,name
 path=out/(name+'.cpp');path.write_text(original_source.replace(old,new));wrong=build(path,name);b.mu.mem_write(b.MODEL,wrong);b.mu.ctl_remove_cache(b.MODEL,b.MODEL+max(len(code),len(wrong)))
 try:assert run(0x181f30,case)==run(b.MODEL,case)
 except (AssertionError,ValueError):rejected.append(name)
 else:raise AssertionError('Fixture accepted bad implementation '+name)
report['negative_controls_rejected']=rejected
report['source_dependencies']={'src/UbisoftStringStream.h':hashlib.sha256((ROOT/'src/UbisoftStringStream.h').read_bytes()).hexdigest()}
report['compiler_flags']=[x.replace(str(ROOT),'${REPO}') for x in flags]
report.update(original_function='0x181f30',original_function_size=3320,compiled_size=len(code),source='src/wip/ServiceResponse.cpp',logging_branch_verified=False)
(ROOT/'progress/service_response_behavior.json').write_text(json.dumps(report,indent=2)+'\n');print('REJECTED',rejected,flush=True)
