// Unmatched reconstruction of original 0x4d7390 (688 bytes).
// Handler return uses an eight-byte indirect-result ABI view; see evidence in the docs.
// See docs/REQUEST_STATE_CANDIDATE.md for verified scope and limitations.
#include <stdint.h>
#include "../SdkResultAbi.h"
struct Control {
 virtual ~Control(); virtual void Dispose();
 long owners;
};
extern "C" void ReleaseWeak(Control*);
struct Shared {
 void* object; Control* control;
 Shared(const Shared& from):object(from.object),control(from.control) {
  if(control)__atomic_fetch_add(&control->owners,1,__ATOMIC_RELAXED);
 }
 ~Shared() { Control* c=control; if(c && __atomic_fetch_sub(&c->owners,1,__ATOMIC_ACQ_REL)==0) { c->Dispose(); ReleaseWeak(c); } }
};
using Response = SdkResultAbi::Result;
struct Status { int32_t code, detail; Status(int32_t c,int32_t d=0):code(c),detail(d){} };
struct Payload { void* unknown; void* task; };
struct Event {
 virtual void Anchor(); virtual ~Event() {}
 char unknown[40]; Shared data;
 Event(const Status&,const uint64_t&,const Shared&);
};
struct CallbackResult {
 uint32_t code, detail;
 // Nontrivial copy preserves the observed X8 indirect-return convention.
 CallbackResult(const CallbackResult& other):code(other.code),detail(other.detail) {}
};
static_assert(sizeof(CallbackResult)==8,"handler result ABI view");
struct Callback { virtual void Slot0();virtual void Slot1();virtual void Slot2();virtual void Slot3();virtual CallbackResult Invoke(const Event&); };
struct Operation { char unknown[16];uint32_t state;char unknown14[0x34];Response response; };
extern "C" { extern __attribute__((visibility("hidden"))) uint64_t GlobalToken; const char* DescribeMatchmakingError(const Response&); void DetachTask(void*,void*); void RemoveCallback(void*,void(*)(),void*); void CallbackIdentity(); }
struct Request {
 virtual void Slot0();virtual void Slot1();virtual void Slot2();virtual void Slot3();virtual void OnState2();virtual void OnState34();
 char unknown08[16];void* context;char unknown20[0x24];uint8_t flag44;uint8_t other45[2];uint8_t flag47;char unknown48[0x198];
 void* task; Shared owner; Callback* callback; Operation* operation;
};
static_assert(__builtin_offsetof(Request,task)==0x1e0,"task");
static_assert(__builtin_offsetof(Event,data)==0x30,"event payload");
static inline void Dispatch(Request* self,Event& event) {
 static_cast<Payload*>(event.data.object)->task=self->task;
 self->callback->Invoke(event);
}
extern "C" void UpdateRequestState(Request* self) {
 if(self->flag47 || self->flag44)return;
 unsigned state=self->operation->state;
 switch(state) { case 3: case 4: {
  self->OnState34();
  { Response response(self->operation->response); DescribeMatchmakingError(response); }
  Event event(Status(static_cast<int32_t>(0xfff0be5fu),Response(self->operation->response).code),uint64_t(GlobalToken),Shared(self->owner));
  static_cast<Payload*>(event.data.object)->task=self->task; self->callback->Invoke(event);
 break; } case 2: {
  self->OnState2();
  Event event(Status(1),uint64_t(GlobalToken),Shared(self->owner));
  static_cast<Payload*>(event.data.object)->task=self->task; self->callback->Invoke(event);
 break; } default:return; }
 if(self->task) { DetachTask(self->task,self->context);RemoveCallback(self->task,CallbackIdentity,self);self->task=nullptr; }
}
