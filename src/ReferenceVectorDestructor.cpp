// Working names and touched-field ABI views; original complete declarations remain unknown.
#include "ReferenceReleaseAbi.h"
namespace SingleRelease {
template<unsigned Key> struct VectorElement {Handle* handle;~VectorElement() noexcept;};
template<unsigned Key> struct ReferenceVector {
    size_t capacity,size;VectorElement<Key>* data;
    __attribute__((always_inline)) ~ReferenceVector() noexcept {
        if(data && size) {
            data[0].~VectorElement<Key>();
            for(size_t i=1;i<size;++i)data[i].~VectorElement<Key>();
        }
        size=0;
        void* memory=data; if(memory)allocator_for(memory)->Free(memory);
    }
};
template<unsigned Key> struct ReferenceVectorOwner {
    void* unknown;ReferenceVector<Key> values;void* unknown2;Slot extra;
    __attribute__((noinline)) ~ReferenceVectorOwner() noexcept {}
};
}
#define REFERENCE_VECTOR_DESTRUCTOR(Key) template struct SingleRelease::ReferenceVectorOwner<Key>;
#include "reference_vector_destructor_instances.inc"
#undef REFERENCE_VECTOR_DESTRUCTOR
