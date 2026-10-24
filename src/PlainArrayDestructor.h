// Working names and ABI views; complete original declarations remain unknown.
// Allocator-managed array destructor that only clears its size.
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
template<unsigned Key, unsigned SizeOffset, unsigned DataOffset> struct PlainArray {
    char padding0[SizeOffset]; uint64_t size;
    char padding1[DataOffset - SizeOffset - 8]; void* data;
    ~PlainArray();
};
template<unsigned Key, unsigned S, unsigned D> PlainArray<Key, S, D>::~PlainArray() {
    void* d = data;
    size = 0;
    if (d) AllocatorFor(d)->Free(d);
}
#define PLAIN_ARRAY(Key, S, D) template struct PlainArray<Key, S, D>;
