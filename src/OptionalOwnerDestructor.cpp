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
    __attribute__((always_inline)) ~OptionalPointer() noexcept { if(initialized) OptionalBinding<Key>::DestroyListener(this); }
};
template<unsigned Key,unsigned Offset> struct OptionalRoot {
    virtual ~OptionalRoot() noexcept;
    char unknown[Offset-8];
};
template<unsigned Key,unsigned FlagOffset> struct OptionalOwner : OptionalRoot<Key,FlagOffset-16> {
    OptionalPointer<Key> member;
    __attribute__((always_inline)) ~OptionalOwner() noexcept {}
};
#define OPTIONAL_OWNER(Key,FlagOffset) template OptionalOwner<Key,FlagOffset>::~OptionalOwner();
#include "optional_owner_destructor_instances.inc"
#undef OPTIONAL_OWNER
