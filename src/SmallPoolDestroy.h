// Working names and ABI views; complete original declarations remain unknown.
// Destroys a pool singleton and returns its storage to the allocator manager.
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
template<unsigned Key> struct PoolObject { virtual ~PoolObject(); };
template<unsigned Key> struct TSmallPool { static PoolObject<Key>* instance; static void Destroy(); };
template<unsigned Key> void TSmallPool<Key>::Destroy() {
    if (PoolObject<Key>* object = instance) {
        Allocator* allocator = AllocatorFor(object);
        object->~PoolObject();
        allocator->Free(object);
    }
}
#define SMALL_POOL_DESTROY(Key) template struct TSmallPool<Key>;
