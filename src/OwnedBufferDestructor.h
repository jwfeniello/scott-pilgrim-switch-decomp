// Working names and ABI views; complete original declarations remain unknown.
// Deleting destructor that frees one allocator-managed buffer.
#include <stdint.h>
struct Allocator {
    virtual void Slot0(); virtual void Slot1(); virtual void* Allocate(uint32_t);
    virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Free(void*);
};
struct AllocatorManager { char padding[0x370]; Allocator* allocators[256]; };
extern "C" AllocatorManager* Accessor_Allocators;
extern "C" uint8_t Accessor_AllocatorIndex(AllocatorManager*, void*);
__attribute__((always_inline)) inline Allocator* AllocatorFor(void* object) {
    AllocatorManager* manager = Accessor_Allocators;
    return manager->allocators[Accessor_AllocatorIndex(manager, object)];
}
template<unsigned Key, unsigned Offset> struct OwnedBuffer {
    virtual ~OwnedBuffer();
    char padding[Offset - 8];
    void* buffer;
};
template<unsigned Key, unsigned Offset> OwnedBuffer<Key, Offset>::~OwnedBuffer() {
    if (void* b = buffer) AllocatorFor(b)->Free(b);
}
#define OWNED_BUFFER(Key, Offset) template struct OwnedBuffer<Key, Offset>;
