// Working names and ABI views; complete original declarations remain unknown.
// Destructor of a polymorphic owner of an allocator-managed array.
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
template<unsigned Key, unsigned SizeOffset, unsigned DataOffset> struct PolyArrayOwner {
    virtual ~PolyArrayOwner();
    char padding0[SizeOffset - 8]; uint64_t size;
    char padding1[DataOffset - SizeOffset - 8]; void* data;
};
template<unsigned Key, unsigned S, unsigned D> PolyArrayOwner<Key, S, D>::~PolyArrayOwner() {
    void* d = data;
    size = 0;
    if (d) AllocatorFor(d)->Free(d);
}
#define POLY_ARRAY_OWNER(Key, S, D) template struct PolyArrayOwner<Key, S, D>;
