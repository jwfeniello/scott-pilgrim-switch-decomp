// Working names and touched-field ABI views; original complete declarations remain unknown.
#include "ReferenceReleaseAbi.h"
void operator delete(void*) noexcept;
namespace SingleRelease {
typedef __uint128_t RawZeroPair __attribute__((aligned(8)));
template<unsigned Key> struct RawBufferBinding {static char table;};
template<unsigned Key,unsigned Offset> struct RawBufferRoot {void* table;char unknown[Offset-32];~RawBufferRoot() noexcept;};
struct RawBuffer {
    size_t capacity,size;void* unknown;void* data;
    __attribute__((always_inline)) ~RawBuffer() noexcept {
        size=0;
        void* memory=data;
        if(memory)allocator_for(memory)->Free(memory);
        data=nullptr;*reinterpret_cast<RawZeroPair*>(&capacity)=0;
    }
};
template<unsigned Key,unsigned Offset> struct RawBufferOwner:RawBufferRoot<Key,Offset> {
    RawBuffer buffer;
    __attribute__((always_inline)) ~RawBufferOwner() noexcept {this->table=&RawBufferBinding<Key>::table;}
};
}
template<unsigned Key,unsigned Offset> __attribute__((noinline)) void DeleteRawBuffer(SingleRelease::RawBufferOwner<Key,Offset>* self) {
    self->~RawBufferOwner();
    ::operator delete(self);
}
#define RAW_BUFFER_DELETING(Key,Offset) template void DeleteRawBuffer<Key,Offset>(SingleRelease::RawBufferOwner<Key,Offset>*);
#include "raw_buffer_deleting_instances.inc"
#undef RAW_BUFFER_DELETING
