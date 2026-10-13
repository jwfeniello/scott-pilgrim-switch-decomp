// Working names and touched-field ABI views; original complete declarations remain unknown.
#include "ReferenceReleaseAbi.h"
namespace SingleRelease {
template<unsigned Key> struct InheritedVectorElement {Handle* handle;~InheritedVectorElement() noexcept;};
template<unsigned Key> struct InheritedVector {
    size_t capacity,size;InheritedVectorElement<Key>* data;
    __attribute__((always_inline)) ~InheritedVector() noexcept {
        if(data && size) {
            data[0].~InheritedVectorElement<Key>();
            for(size_t i=1;i<size;++i)data[i].~InheritedVectorElement<Key>();
        }
        size=0;
        void* memory=data;if(memory)allocator_for(memory)->Free(memory);
    }
};
template<unsigned Key,unsigned Offset> struct InheritedVectorBase {char unknown[Offset-8];virtual ~InheritedVectorBase();};
template<unsigned Key,unsigned Offset> struct InheritedVectorOwner : InheritedVectorBase<Key,Offset> {
    InheritedVector<Key> values;
    ~InheritedVectorOwner() noexcept {}
};
}
#define INHERITED_VECTOR(Key,DataOffset) template SingleRelease::InheritedVectorOwner<Key,DataOffset-16>::~InheritedVectorOwner();
#include "inherited_vector_destructor_instances.inc"
#undef INHERITED_VECTOR
