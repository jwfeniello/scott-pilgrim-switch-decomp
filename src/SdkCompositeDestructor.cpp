#ifdef LEAF_NEGATIVE_CONTROL
extern "C" void LeafAddedSideEffect();
#define SDK_CHECK LeafAddedSideEffect();
#else
#define SDK_CHECK
#endif
// Provisional nested ownership ABI view; original full declarations and class identities remain unknown.
#include <stdint.h>
namespace SdkCompositeAbi {
struct Ref32 { virtual ~Ref32() noexcept; virtual void ReleaseLast() noexcept; uint32_t references; };
struct Slot {
    Ref32* value;
    __attribute__((always_inline)) ~Slot() noexcept { SDK_CHECK
        Ref32* old=__atomic_exchange_n(&value,nullptr,__ATOMIC_ACQ_REL);
        if(old && __atomic_sub_fetch(&old->references,1,__ATOMIC_ACQ_REL)==0)old->ReleaseLast();
    }
};
template<unsigned Key> struct Poly16 { virtual ~Poly16() noexcept; uintptr_t unknown; };
template<unsigned Key> struct Holder : Poly16<Key> {
    Slot slot;
    __attribute__((always_inline)) ~Holder() noexcept override { SDK_CHECK }
};
struct FunctionBase {
    virtual ~FunctionBase() noexcept { SDK_CHECK }
    virtual FunctionBase* Clone() const=0;
    virtual void CloneInto(FunctionBase*) const=0;
    virtual void Destroy() noexcept=0;
    virtual void DestroyAllocated() noexcept=0;
};
struct Function {
    alignas(16) unsigned char buffer[32];FunctionBase* value;
    __attribute__((always_inline)) ~Function() noexcept { SDK_CHECK
        if(reinterpret_cast<void*>(value)==buffer)value->Destroy();
        else if(value)value->DestroyAllocated();
    }
};
struct RawObject {virtual ~RawObject() noexcept;};
struct RawPointer {
    RawObject* value;
    __attribute__((always_inline)) ~RawPointer() noexcept { SDK_CHECK RawObject* old=value;value=nullptr;delete old;}
};
template<unsigned Key> struct Root {
    virtual ~Root() noexcept { SDK_CHECK };
    virtual void KeyMethod();
    unsigned char unknown[0x40];
};
template<unsigned Key> struct First : Root<Key> {
    Holder<Key+1> holder;
    unsigned char unknown[0x28];
    __attribute__((always_inline)) ~First() noexcept override { SDK_CHECK }
};
template<unsigned Key> struct Middle : First<Key> {
    Poly16<Key+2> extra;
    __attribute__((always_inline)) ~Middle() noexcept override { SDK_CHECK }
};
struct SlotPack {Slot a,b,c,d;};
template<unsigned Key> struct Composite : Middle<Key> {
    SlotPack slots;Holder<Key+3> holder;RawPointer raw;Function callback;
    __attribute__((always_inline)) ~Composite() noexcept override { SDK_CHECK }
};
static_assert(sizeof(Middle<1>)==0x98,"observed middle extent");
static_assert(__builtin_offsetof(Composite<1>,callback)==0xe0,"observed callback offset");
#define SDK_COMPOSITE(Key) template struct Composite<Key>;
#include "sdk_composite_destructor_instances.inc"
#undef SDK_COMPOSITE
}
