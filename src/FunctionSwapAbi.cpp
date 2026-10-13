// Working names and touched-field ABI views; original complete declarations remain unknown.
// C++ ownership swap algorithm follows LLVM libc++ (see its license).
#include <stdint.h>
struct SwapFunctionBase {
    virtual ~SwapFunctionBase() {}
    virtual SwapFunctionBase* Clone() const =0;
    virtual void CloneInto(SwapFunctionBase*) const =0;
    virtual void Destroy() noexcept =0;
    virtual void DestroyAllocated() noexcept =0;
};
struct FunctionSwapView {
    alignas(16) unsigned char buffer[32];
    SwapFunctionBase* value;
};
template<unsigned Key> __attribute__((noinline)) void SwapFunctionAbi(FunctionSwapView* self,FunctionSwapView* other) {
    if(other==self)return;
    if((void*)self->value==self->buffer && (void*)other->value==other->buffer) {
        alignas(16) unsigned char temporary[32];
        SwapFunctionBase* t=reinterpret_cast<SwapFunctionBase*>(temporary);
        self->value->CloneInto(t);
        self->value->Destroy();
        self->value=nullptr;
        other->value->CloneInto(reinterpret_cast<SwapFunctionBase*>(self->buffer));
        other->value->Destroy();
        other->value=nullptr;
        self->value=reinterpret_cast<SwapFunctionBase*>(self->buffer);
        t->CloneInto(reinterpret_cast<SwapFunctionBase*>(other->buffer));
        t->Destroy();
        other->value=reinterpret_cast<SwapFunctionBase*>(other->buffer);
    } else if((void*)self->value==self->buffer) {
        self->value->CloneInto(reinterpret_cast<SwapFunctionBase*>(other->buffer));self->value->Destroy();self->value=other->value;
        other->value=reinterpret_cast<SwapFunctionBase*>(other->buffer);
    } else if((void*)other->value==other->buffer) {
        other->value->CloneInto(reinterpret_cast<SwapFunctionBase*>(self->buffer));other->value->Destroy();other->value=self->value;
        self->value=reinterpret_cast<SwapFunctionBase*>(self->buffer);
    } else {
        SwapFunctionBase* saved=self->value;self->value=other->value;other->value=saved;
    }
}
#define FUNCTION_SWAP(Key) template void SwapFunctionAbi<Key>(FunctionSwapView*,FunctionSwapView*);
#include "function_swap_instances.inc"
#undef FUNCTION_SWAP
