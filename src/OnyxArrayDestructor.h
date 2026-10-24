// Working names and ABI views; complete original declarations remain unknown.
// Allocator-managed array destructor.
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
template<unsigned Key> struct OnyxArray {
    void* header; uint64_t capacity; uint64_t size; uint64_t reserved; void** data;
    ~OnyxArray();
};
template<unsigned Key> OnyxArray<Key>::~OnyxArray() {
    void** buffer = data;
    size = 0;
    if (buffer) AllocatorFor(buffer)->Free(buffer);
    data = nullptr; capacity = 0; size = 0;
}
#define ONYX_ARRAY_DESTRUCTOR(Key) template struct OnyxArray<Key>;
