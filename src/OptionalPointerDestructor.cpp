// Working names and touched-field ABI views; original complete declarations remain unknown.
#include "ReferenceReleaseAbi.h"
using namespace SingleRelease;
template<unsigned Key> struct OptionalBinding { static void DestroyListener(void*); };
template<unsigned Key> struct OwnedPointer {
    Object* object;
    ~OwnedPointer() noexcept;
};
template<unsigned Key> OwnedPointer<Key>::~OwnedPointer() noexcept {
    Object* value=object;
    if(value) {
        Allocator* chosen=allocator_for(value);
        value->~Object();
        chosen->Free(value);
    }
}
template<unsigned Key> struct OptionalPointer {
    OwnedPointer<Key> pointer;
    void* unknown;
    bool initialized;
    __attribute__((noinline)) ~OptionalPointer() noexcept { if(initialized) OptionalBinding<Key>::DestroyListener(this); }
};
#define OPTIONAL_POINTER(Key) template OptionalPointer<Key>::~OptionalPointer();
#include "optional_pointer_destructor_instances.inc"
#undef OPTIONAL_POINTER
