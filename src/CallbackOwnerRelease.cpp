// Working names and ABI views; complete original declarations remain unknown.
#include <stdint.h>
struct OwnedCallable { virtual ~OwnedCallable(); };
struct ReleaseAllocator {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2();
    virtual void Slot3(); virtual void Slot4(); virtual void Slot5();
    virtual void Free(void*);
};
struct ReleaseAllocators { char padding[0x370]; ReleaseAllocator* entries[256]; };
template<unsigned Key> struct ReleaseBinding {
    static ReleaseAllocators* allocators;
    static uint8_t AllocatorIndex(ReleaseAllocators*,void*);
};
template<unsigned Key> __attribute__((noinline)) void ReleaseCallbackOwner(OwnedCallable** owner) noexcept {
    OwnedCallable* old=*owner;
    if(old) {
        ReleaseAllocators* manager=ReleaseBinding<Key>::allocators;
        ReleaseAllocator* allocator=manager->entries[ReleaseBinding<Key>::AllocatorIndex(manager,old)];
        old->~OwnedCallable();
        allocator->Free(old);
    }
}
#define CALLBACK_OWNER_RELEASE(Key) template void ReleaseCallbackOwner<Key>(OwnedCallable**) noexcept;
#include "callback_owner_release_instances.inc"
#undef CALLBACK_OWNER_RELEASE
