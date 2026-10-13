// Working names and touched-field ABI views; original complete declarations remain unknown.
#include "ReferenceReleaseAbi.h"
using namespace SingleRelease;
struct PointerArrayView; // Only the two observed fields are addressed by this ABI view.
template<unsigned Key,unsigned CountOffset,unsigned DataOffset> __attribute__((noinline)) void ReleasePointerArray(PointerArrayView* self) {
    size_t count=*reinterpret_cast<size_t*>(reinterpret_cast<char*>(self)+CountOffset);
    if(count)for(Object** i=*reinterpret_cast<Object***>(reinterpret_cast<char*>(self)+DataOffset),**end=i+count;i!=end;++i) {
        Object* object=*i;
        if(object){auto allocator=allocator_for(object);object->~Object();allocator->Free(object);}
    }
}
#define POINTER_ARRAY_RELEASE(Key,CountOffset,DataOffset) template void ReleasePointerArray<Key,CountOffset,DataOffset>(PointerArrayView*);
#include "pointer_array_release_instances.inc"
#undef POINTER_ARRAY_RELEASE
