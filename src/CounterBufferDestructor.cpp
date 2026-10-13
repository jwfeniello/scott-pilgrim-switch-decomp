// Working names and touched-field ABI views; original complete declarations remain unknown.
#include "ReferenceReleaseAbi.h"
namespace SingleRelease {
struct CounterCell {uint32_t references;};
struct CounterAllocation {
    CounterCell* pointer;
    __attribute__((always_inline)) ~CounterAllocation() noexcept {
        if(pointer) {
            if(__atomic_sub_fetch(&pointer->references,1,__ATOMIC_RELAXED)==0) {
                CounterCell* value=pointer;if(value)allocator_for(value)->Free(value);
            }
            pointer=nullptr;
        }
    }
};
struct CounterRawBuffer {
    uint32_t count,padding;void* data;
    __attribute__((always_inline)) ~CounterRawBuffer() noexcept {
        void* old=data;if(old)allocator_for(old)->Free(old);
        data=nullptr;count=0;
    }
};
template<unsigned Key,unsigned PointerOffset> struct CounterBufferBase {char unknown[PointerOffset-16];virtual ~CounterBufferBase();};
template<unsigned Key,unsigned PointerOffset,unsigned CounterOffset> struct CounterBufferOwner : CounterBufferBase<Key,PointerOffset> {
    CounterRawBuffer buffer;char unknown[CounterOffset-PointerOffset-8];CounterAllocation allocation;
    ~CounterBufferOwner() noexcept {}
};
}
#define COUNTER_BUFFER(Key,PointerOffset,CounterOffset) template SingleRelease::CounterBufferOwner<Key,PointerOffset,CounterOffset>::~CounterBufferOwner();
#include "counter_buffer_destructor_instances.inc"
#undef COUNTER_BUFFER
