// Working ABI views; original method names and complete types are unknown.
#include <stdint.h>
using LimitVector=uint32_t __attribute__((vector_size(16)));
struct DispatchSettings {
    uint32_t enabled;
    char project_name[128];
    uint32_t unknown,count,padding;
    LimitVector limits;
    uint32_t tail;
    DispatchSettings() noexcept {
        tail=0;
        __builtin_memset(this,0,132);
        using NameWord=char __attribute__((vector_size(8),aligned(1)));
        *reinterpret_cast<NameWord*>(project_name)=NameWord{'U','N','K','N','O','W','N',' '};
        *reinterpret_cast<NameWord*>(project_name+8)=NameWord{'P','R','O','J','E','C','T',' '};
        __builtin_memcpy(project_name+16,"NAME",4);
        project_name[20]=0;
        count=13;
        limits=LimitVector{12,12,0x7fffffff,0x7fffffff};
    }
};
struct DispatchHost { char before_flags[0x38]; uint8_t flags; char padding[7]; void* handle; };
struct DispatchCallable { uintptr_t vtable; void (*invoke)(DispatchCallable*,void*); };
struct DispatchView { DispatchCallable* callback; DispatchHost* host; };
template<unsigned Key> struct DispatchBinding {
    static DispatchSettings* settings;
    static void* tracking;
    static void Dispatch(void*,void*,uint32_t,void*);
};
template<unsigned Key,uint32_t Hash> __attribute__((noinline)) void DispatchGuardedCallback(DispatchView* self,void* payload) {
    DispatchHost* host=self->host;
    if(!(host && (host->flags&2))) {
        DispatchSettings* settings=DispatchBinding<Key>::settings;
        if(!settings) {
            static DispatchSettings fallback;
            settings=&fallback;
            DispatchBinding<Key>::settings=settings;
        }
        if(!settings->enabled) return;
    }
    if(self->callback) self->callback->invoke(self->callback,payload);
    host=self->host;
    if(host && host->handle) DispatchBinding<Key>::Dispatch(DispatchBinding<Key>::tracking,host->handle,Hash,payload);
}
#define GUARDED_CALLBACK_DISPATCH(Key,Hash) template void DispatchGuardedCallback<Key,Hash>(DispatchView*,void*);
#include "guarded_callback_dispatch_instances.inc"
#undef GUARDED_CALLBACK_DISPATCH
