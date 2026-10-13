// Working names and ABI views; complete original declarations remain unknown.
#include <stdint.h>
struct Event;
struct Host;
using Member=void (Host::*)(const Event&);
struct InvokeView { uintptr_t vtable,invoke; Host* owner; Member member; };
template<unsigned Key> __attribute__((noinline)) void InvokeCallback(InvokeView* self,const Event& event) {
    (self->owner->*(self->member))(event);
}
#define CALLBACK_INVOKE(Key) template void InvokeCallback<Key>(InvokeView*,const Event&);
#include "callback_invoke_instances.inc"
#undef CALLBACK_INVOKE
