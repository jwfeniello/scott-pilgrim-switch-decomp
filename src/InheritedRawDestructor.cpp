// Working names and touched-field ABI views; original complete declarations remain unknown.
#include "ReferenceReleaseAbi.h"
using namespace SingleRelease;
template<unsigned Key,unsigned Offset> struct RawOwnerBase {virtual ~RawOwnerBase() noexcept;char unknown[Offset-8];};
template<unsigned Gap> struct RawOwnerBuffer {
    void* value;char unknown[Gap];void* data;
    __attribute__((always_inline)) ~RawOwnerBuffer() noexcept {void* old=data;value=nullptr;if(old)allocator_for(old)->Free(old);}
};
template<unsigned Key,unsigned Offset,unsigned Gap> struct RawOwner : RawOwnerBase<Key,Offset> {
    RawOwnerBuffer<Gap> buffer;
    __attribute__((always_inline)) ~RawOwner() noexcept override {}
};
#define INHERITED_RAW(Key,DataOffset,ClearOffset) template RawOwner<Key,ClearOffset,DataOffset-ClearOffset-8>::~RawOwner();
#include "inherited_raw_destructor_instances.inc"
#undef INHERITED_RAW
