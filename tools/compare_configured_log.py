"""Optional Unicorn comparison of the unmatched configured logger; no exact credit."""
import argparse, json, itertools, hashlib
from pathlib import Path
from project import ROOT, load, digest
from elf import Elf, relocate, require
from arm64_behavior import Arm64Behavior
from discover_engine_families import compile_family
parser=argparse.ArgumentParser(description=__doc__)
parser.add_argument('--original',type=Path,required=True)
parser.add_argument('--clang8',type=Path,required=True)
parser.add_argument('--build-dir',type=Path,required=True)
args=parser.parse_args()
out=args.build_dir.resolve();out.mkdir(parents=True,exist_ok=True)
target_elf=Elf(args.original)
require(digest(target_elf.data)==load(ROOT/'config/target.json')['sha256'],'Unexpected original ELF')
b=Arm64Behavior(target_elf,args.clang8.resolve(),out);D=b.DATA
R=D;CTX=D+0x1000;CONFIG=D+0x2000;GATE=D+0x3000;NODE=D+0x4000
source=(ROOT/'src/wip/ConfiguredLog.cpp').read_text(encoding='utf-8')
flags=['-target', 'aarch64-none-elf', '-std=c++11', '-D_GNU_SOURCE', '-U_WIN32', '-U_WIN64', '-O2', '-mcpu=cortex-a57', '-fno-omit-frame-pointer', '-fPIC', '-fno-strict-aliasing', '-fno-vectorize', '-fno-slp-vectorize', '-fno-exceptions', '-nostdinc++', '-isystem', 'vendor/llvm-libcxx-8/include', '-isystem', 'vendor/musl/include', '-isystem', 'vendor/musl/generated', '-D_LIBCPP_HAS_NO_THREADS', '-D_LIBCPP_HAS_MUSL_LIBC', '-D__CLANG_MAX_ALIGN_T_DEFINED', '-D_LIBCPP_DISABLE_VISIBILITY_ANNOTATIONS', '-funwind-tables', '-mllvm', '-tail-dup-placement-threshold=4', '-I', 'src', '-I', 'vendor/rapidjson-1.1.0/include', '-mgeneral-regs-only']
flags=[str(ROOT/x) if x.startswith("vendor/") or x=="src" else x for x in flags]
flags += ["-iquote",str(ROOT/"src/wip")]

def build(text,name):
 src=out/(name+'.cpp');src.write_text(text);obj=compile_family(b.compiler,src,out/(name+'.o'),dict(flags=flags));raw,rels=obj.method('LogConfigured');raw=bytearray(raw);sections={};cells={}
 for r in rels:
  symbol=r['symbol'];record=r['symbol_record'];target=b.STUB+0xf00
  if symbol in known:target=known[symbol]
  if record[3] and symbol not in known:
   sec=record[3]
   if sec not in sections:
    sections[sec]=D+0x20000+len(sections)*0x1000;data=obj.section_bytes(obj.sections[sec]);assert len(data)<4096;b.mu.mem_write(sections[sec],data)
   target=sections[sec]+record[4]
  if r['kind'] in (311,312):
   if symbol not in cells:cells[symbol]=D+0x10000+len(cells)*8;b.put(cells[symbol],target)
   target=cells[symbol]
  relocate(raw,r['offset'],r['kind'],target+r['addend'],b.MODEL)
 b.mu.mem_write(b.MODEL,bytes(raw));b.mu.ctl_remove_cache(b.MODEL,b.MODEL+len(raw));return bytes(raw)

known={'Free':0x37030,'UbiStreamFree':0x37030,'LogJson':0x4f1a0,'LogPlain':0x4f310,'strlen':0xfa3360,
'_ZN18ServiceResponseAbi4TextC1EPKc':0x7e7e0,'_ZN18ServiceResponseAbi8JsonViewC1ERKNS_4TextE':0x3ebb0,
'_ZNKSt3__115basic_stringbufIcNS_11char_traitsIcEEN11ubiservices18ContainerAllocatorIcEEE3strEv':0x17d1f0,
'_ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev':0xfa3ae0,
'_ZNSt3__115basic_streambufIcNS_11char_traitsIcEEEC2Ev':0xfa3ab0,
'_ZNSt3__115basic_streambufIcNS_11char_traitsIcEEED2Ev':0xfa3ad0,
'_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m':0x17ce30,
'_ZNSt3__18ios_base4initEPv':0xfa3aa0,'_ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev':0xfa3af0}
HEAP=D+0x8000;INPUT=D+0x6000;OBJ=D+0x6100;VT=D+0x6200
get=lambda a:b.read(a,'<Q')[0]
def string(a):
 data=bytearray()
 while True:
  x=bytes(b.mu.mem_read(a+len(data),1))
  if x==b'\0':return bytes(data)
  data.extend(x);assert len(data)<2048
trace=[];tags={};cursor=HEAP;current={};text=b''
def allocate(size,tag):
 global cursor
 a=cursor;cursor+=(size+15)&~15;b.mu.mem_write(a,bytes(size));tags[a]=tag;return a
def write_string(a,data,tag):
 b.mu.mem_write(a,bytes(24))
 if len(data)<=22:b.write(a,'<B',len(data)*2);b.mu.mem_write(a+1,data+b'\0')
 else:
  q=allocate(len(data)+1,tag);b.mu.mem_write(q,data+b'\0');b.write(a,'<QQQ',(len(data)+1)|1,len(data),q)
def text_bytes(handle):
 a=get(handle)+16
 return string(get(a+16)if b.read(a,'<B')[0]&1 else a+1)
def ios_init():b.mu.mem_write(b.arg(0)+8,bytes(128));trace.append(('ios_init',))
def buffer_init():b.mu.mem_write(b.arg(0),bytes(64));trace.append(('buffer_init',))
def put_text():
 global text
 text=bytes(b.mu.mem_read(b.arg(1),b.arg(2)));trace.append(('insert',text.hex()));buf=b.arg(0)+8;b.put(buf+40,b.arg(1));b.put(buf+48,b.arg(1)+b.arg(2));b.put(buf+56,b.arg(1)+b.arg(2));return {b.x(0):b.arg(0)}
def extract():write_string(b.arg(8),text,'temporary_string');trace.append(('extract',text.hex()))
def text_ctor():
 data=string(b.arg(1));trace.append(('text',data.hex()));q=allocate(40,'text_object');b.put(q,VT);b.write(q+8,'<I',1);write_string(q+16,data,'text_characters');b.put(b.arg(0),q)
def view_ctor():
 trace.append(('view',text_bytes(b.arg(1)).hex()));view=b.arg(0);owner=allocate(24,'json_owner');root=allocate(24,'json_root');value=allocate(24,'json_value');b.put(root,VT);b.write(root+8,'<I',current['json_refs']);b.put(owner,root);b.put(owner+16,value if current['flags'] is not None else 0)
 b.write(value,'<i',current['count']);b.write(value+22,'<H',current['flags'] or 0);b.write(view,'<QQQ',VT,0,owner)
def dispose():trace.append(('dispose',tags.get(b.arg(0),'input'),b.read(b.arg(0)+8,'<I')[0]))
def free():trace.append(('free',tags.get(b.arg(0),'unknown')))
def plain():trace.append(('plain',b.arg(0)==CONFIG,b.arg(1),b.arg(2)&0xffffffff,text_bytes(b.arg(3)).hex()))
def jsonlog():trace.append(('json',b.arg(0)==CONFIG,b.arg(1),b.arg(2)&0xffffffff,text_bytes(b.arg(4)).hex()))
def forbid():raise AssertionError('Unmodeled external call')
for a,callback in {0xfa3aa0:ios_init,0xfa3ab0:buffer_init,0x17ce30:put_text,0x36ea0:lambda:{b.x(0):allocate(b.arg(0),'temporary_string')},0x7e7e0:text_ctor,0x3ebb0:view_ctor,0x37030:free,0x4f310:plain,0x4f1a0:jsonlog,b.STUB:dispose,b.STUB+0xf00:forbid,0xfa3360:lambda:{b.x(0):len(string(b.arg(0)))},0xfa3ad0:lambda:trace.append(('buffer_destroy',)),0xfa3ae0:lambda:trace.append(('iostream_destroy',)),0xfa3af0:lambda:trace.append(('ios_destroy',))}.items():b.stub(a,callback)
b.put(VT+16,b.STUB)
def run(entry,case):
 global cursor,tags,trace,current,text
 current=case;cursor=HEAP;tags={};trace=[];text=b'';b.mu.mem_write(HEAP,bytes(0x10000))
 b.mu.mem_write(R,bytes(0x200));b.put(R+0x98,CTX);b.put(CTX+0x28,CONFIG);b.mu.mem_write(CONFIG,bytes(0x160));b.write(CONFIG+8,'<i',2);b.put(CONFIG+0x150,GATE);b.write(GATE+12,'<B',0)
 b.mu.mem_write(OBJ,bytes(40));b.put(OBJ,VT);b.write(OBJ+8,'<I',case['refs']);write_string(OBJ+16,case['text'],'input_characters');b.put(INPUT,OBJ)
 b.execute(entry,R,case['level'],case['category']&0xffffffff,INPUT)
 return trace,b.read(OBJ+8,'<I')[0],bytes(b.mu.mem_read(HEAP,cursor-HEAP)).hex()
cases=[dict(level=level,category=category,text=text,refs=refs,json_refs=json_refs,flags=flags,count=count)for level,category,text,refs,json_refs,(flags,count)in itertools.product((0,5,6,0xffffffff),(-4,4),(b'',b'hello',b'x'*31),(1,3),(1,3),((None,0),(2,1),(3,0),(3,1),(4,1),(4,-1),(5,1)))]
raw=build(source,'candidate');original=[]
for case in cases:original.append(run(0x1535e0,case))
for case,expected in zip(cases,original):
 actual=run(b.MODEL,case)
 assert actual==expected,(case,expected,actual)
controls=[]
for name,old,new in [('category','category, &view, rendered','category + 1, &view, rendered'),('empty','Text empty("{}")','Text empty("[]")'),('json_count','value->count >= 1','value->count >= 0'),('reference','count, count + 1','count, count + 2')]:
 assert old in source;build(source.replace(old,new),name)
 detected=next((i for i,(case,expected)in enumerate(zip(cases,original))if run(b.MODEL,case)!=expected),None);assert detected is not None,name;controls.append(dict(name=name,case_index=detected))
report=dict(address='0x1535e0',exact_credit=False,cases=len(cases),negative_controls=controls,source_sha256=hashlib.sha256(source.encode()).hexdigest(),target_elf_sha256=digest(target_elf.data),stream_header_sha256=digest((ROOT/'src/UbisoftStringStream.h').read_bytes()),candidate_sha256=hashlib.sha256(raw).hexdigest(),boundary='complete function return; original exact 352-byte string extraction executes; other services synthetic',limitations=['synthetic stream insertion, text/view constructors, allocator, logging and disposal','injected JSON cursor states','no concurrency or exceptions','not whole-game execution'])
(out/'report.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8');print(json.dumps(report,indent=2))
