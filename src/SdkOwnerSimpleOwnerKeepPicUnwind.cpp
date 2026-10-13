// Provisional ownership layout; original full declarations and class names remain unknown.
#ifdef LEAF_NEGATIVE_CONTROL
extern "C" void LeafAddedSideEffect();
#define SDK_CHECK LeafAddedSideEffect();
#else
#define SDK_CHECK
#endif
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

template<unsigned Key,unsigned Width> struct ExternalBase {virtual ~ExternalBase() noexcept;char unknown[Width-8];};
template<unsigned Key,unsigned Width> struct InlineBase {virtual ~InlineBase() noexcept { SDK_CHECK } virtual void KeyMethod();char unknown[Width-8];};
template<unsigned N> struct Slots;
template<> struct Slots<1> {Slot slot0;};
template<> struct Slots<2> {Slot slot0,slot1;};
template<> struct Slots<3> {Slot slot0,slot1,slot2;};
template<> struct Slots<4> {Slot slot0,slot1,slot2,slot3;};
template<> struct Slots<5> {Slot slot0,slot1,slot2,slot3,slot4;};
template<> struct Slots<6> {Slot slot0,slot1,slot2,slot3,slot4,slot5;};
template<> struct Slots<7> {Slot slot0,slot1,slot2,slot3,slot4,slot5,slot6;};
template<> struct Slots<8> {Slot slot0,slot1,slot2,slot3,slot4,slot5,slot6,slot7;};
template<> struct Slots<9> {Slot slot0,slot1,slot2,slot3,slot4,slot5,slot6,slot7,slot8;};
template<> struct Slots<10> {Slot slot0,slot1,slot2,slot3,slot4,slot5,slot6,slot7,slot8,slot9;};
template<> struct Slots<11> {Slot slot0,slot1,slot2,slot3,slot4,slot5,slot6,slot7,slot8,slot9,slot10;};
template<> struct Slots<12> {Slot slot0,slot1,slot2,slot3,slot4,slot5,slot6,slot7,slot8,slot9,slot10,slot11;};

template<unsigned Width,unsigned N> struct SimpleOwner : ExternalBase<100,Width> {
 Slots<N> slots;
 __attribute__((always_inline)) ~SimpleOwner() noexcept override { SDK_CHECK }
};
template<unsigned Width,unsigned N> struct NoBaseOwner : InlineBase<101,Width> {
 Slots<N> slots;
 __attribute__((always_inline)) ~NoBaseOwner() noexcept override { SDK_CHECK }
};
template<unsigned Width,unsigned N> struct HolderOwner : ExternalBase<102,Width> {
 Slots<N> slots;Holder<103> holder;
 __attribute__((always_inline)) ~HolderOwner() noexcept override { SDK_CHECK }
};
template<unsigned Width,unsigned N> struct CallbackOwner : ExternalBase<104,Width> {
 Slots<N> slots;RawPointer raw;Function callback;
 __attribute__((always_inline)) ~CallbackOwner() noexcept override { SDK_CHECK }
};
template struct SimpleOwner<8,1>;
template struct SimpleOwner<8,10>;
template struct SimpleOwner<16,10>;
template struct SimpleOwner<24,10>;
template struct SimpleOwner<32,10>;
template struct SimpleOwner<40,10>;
template struct SimpleOwner<64,10>;
template struct SimpleOwner<144,10>;
template struct SimpleOwner<176,10>;
}
