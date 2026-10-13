// Working names and touched-field ABI views; original complete declarations remain unknown.
// Pool allocator and touched buffer fields; original complete declarations are unknown.
#include <stdint.h>
using Pair=uint64_t __attribute__((vector_size(16),aligned(8)));
struct BufferPool {virtual void Slot0();virtual void Slot1();virtual void Slot2();virtual void Slot3();virtual void Slot4();virtual void Slot5();virtual void Free(void*);};
template<unsigned Key> struct PoolBinding {static volatile uint32_t enabled;static BufferPool* pool;};
template<unsigned Key> struct PoolBuffer {
    uint64_t capacity,size,unknown;void* data;
    __attribute__((always_inline)) ~PoolBuffer() noexcept {
        size=0;
        if(data && PoolBinding<Key>::enabled && PoolBinding<Key>::pool)PoolBinding<Key>::pool->Free(data);
        data=nullptr;*reinterpret_cast<Pair*>(&capacity)=Pair{0,0};
    }
};
template<unsigned Key> __attribute__((noinline)) void DestroyPoolBuffer(PoolBuffer<Key>* self){self->~PoolBuffer<Key>();}
#define POOL_BUFFER(Key) template void DestroyPoolBuffer<Key>(PoolBuffer<Key>*);
#include "pool_buffer_destructor_instances.inc"
#undef POOL_BUFFER
