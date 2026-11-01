// Steps classes run when they are enabled or disabled: they take their delegate off the hook they
// registered on, switch off the child components they own, and clear the active flag.
//
// Generated from the decompiler's reading of each step and tested against the bytes. Class names
// are RTTI names; the fields carry their offsets, and the events are named by their position. The
// delegate is written to its slot before its call target, as in ComponentEventSubscribe.cpp.
#include <stdint.h>
#include <stddef.h>
inline void* operator new(size_t, void* address) noexcept { return address; }
struct DecodeAllocator { virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Free(void*); };
struct DecodeAllocators { char unknown[0x370]; DecodeAllocator* values[256]; };
extern "C" { extern DecodeAllocators* DecodeAllocatorManager; uint8_t DecodeAllocatorIndex(DecodeAllocators*, void*); }
struct Event;
struct Delegate { virtual ~Delegate(); };
__attribute__((always_inline)) inline void DestroyDelegate(Delegate* value) {
    DecodeAllocators* m = DecodeAllocatorManager;
    DecodeAllocator* a = m->values[DecodeAllocatorIndex(m, value)];
    value->~Delegate();
    a->Free(value);
}
extern "C" { extern unsigned char* HookContext; extern void* HookManager; void* HookAllocate(void*, size_t); void HookRemove(void*, void*, uint32_t, void*); void HookAdd(void*, void*, uint32_t, void*, uint64_t); }
template<unsigned long Key> struct HookInvoke { static void Invoke(); };
template<unsigned long Key, class Owner> struct MemberDelegate : Delegate {
    typedef void (Owner::*Member)(const Event&);
    void (*invoke)(); Owner* owner; Member member;
    __attribute__((always_inline)) explicit MemberDelegate(Member m) : member(m) {}
    virtual ~MemberDelegate();
};
template<unsigned long Key> struct DelegateHolder {
    Delegate* value;
    __attribute__((always_inline)) ~DelegateHolder() { if (value) DestroyDelegate(value); }
};
template<unsigned long Key, class Owner, class F> __attribute__((always_inline)) inline void WithDelegate(Owner* owner, void (Owner::*member)(const Event&), F f) {
    typedef MemberDelegate<Key, Owner> D;
    D* d = new (HookAllocate(HookContext + 0x50, 40)) D(member);
    DelegateHolder<Key> callback{d};
    Delegate* slot;
    __atomic_store_n(&slot, d, __ATOMIC_RELAXED);
    d->invoke = HookInvoke<Key>::Invoke;
    d->owner = owner;
    f(&slot);
}
struct Handle { char padding[8]; struct Child* object; };
struct Child { virtual void S0(); virtual void S1(); virtual void S2(); virtual void Disable(); };
namespace SPTG { 
struct LevelSectionGraphics {
    char padding_0[56]; uint32_t field_38; char padding_3c[292]; Handle* field_160; Handle* field_168; Handle* field_170; char padding_178[32]; void* field_198; char padding_1a0[48]; Handle* field_1d0; Handle* field_1d8; Handle* field_1e0;
    void OnEvent1(const Event&); void Call_sub_AFEA80();
    void Step();
};
void LevelSectionGraphics::Step() {
    WithDelegate<146866433ul, LevelSectionGraphics>(this, &LevelSectionGraphics::OnEvent1, [this](Delegate** slot) { void* target = field_198; if (target) HookRemove(HookManager, target, 0x6c62f499u, slot); });
    if (field_1d0 && field_1d0->object) field_1d0->object->Disable();
    if (field_1d8 && field_1d8->object) field_1d8->object->Disable();
    if (field_1e0 && field_1e0->object) field_1e0->object->Disable();
    if (field_160 && field_160->object) field_160->object->Disable();
    if (field_168 && field_168->object) field_168->object->Disable();
    if (field_170 && field_170->object) field_170->object->Disable();
    Call_sub_AFEA80();
}
}
namespace Onyx { 
struct AttachmentBone {
    char padding_0[56]; uint32_t field_38; char padding_3c[92]; void* field_98;
    void OnEvent1(const Event&); void Call_sub_68E980();
    void Step();
};
void AttachmentBone::Step() {
    WithDelegate<181114881ul, AttachmentBone>(this, &AttachmentBone::OnEvent1, [this](Delegate** slot) { void* target = field_98; if (target) HookRemove(HookManager, target, 0x5f1e78d7u, slot); });
    Call_sub_68E980();
}
}
namespace Onyx { namespace Graphics { namespace Particle { namespace Emitter { 
struct EmitterInstance {
    char padding_0[56]; uint32_t field_38; char padding_3c[84]; void* field_90;
    void OnEvent1(const Event&); void Call_sub_B1F440();
    void Step();
};
void EmitterInstance::Step() {
    WithDelegate<186548481ul, EmitterInstance>(this, &EmitterInstance::OnEvent1, [this](Delegate** slot) { void* target = field_90; if (target) HookRemove(HookManager, target, 0x6c62f499u, slot); });
    Call_sub_B1F440();
    field_38 &= ~2u;
}
}}}}
namespace Onyx { namespace Graphics { namespace Particle { 
struct VolumeMeshGraphics {
    char padding_0[56]; uint32_t field_38; char padding_3c[204]; void* field_108;
    void Call_sub_B2D550(); void OnEvent1(const Event&); void Call_sub_AFEA80();
    void Step();
};
void VolumeMeshGraphics::Step() {
    Call_sub_B2D550();
    WithDelegate<187500545ul, VolumeMeshGraphics>(this, &VolumeMeshGraphics::OnEvent1, [this](Delegate** slot) { void* target = field_108; if (target) HookRemove(HookManager, target, 0x6c62f499u, slot); });
    Call_sub_AFEA80();
}
}}}
namespace Onyx { namespace Graphics { namespace Particle { 
struct EmitterInstanceGraphics {
    char padding_0[56]; uint32_t field_38; char padding_3c[92]; void* field_98;
    void OnEvent1(const Event&); void Call_sub_B39460();
    void Step();
};
void EmitterInstanceGraphics::Step() {
    WithDelegate<188290049ul, EmitterInstanceGraphics>(this, &EmitterInstanceGraphics::OnEvent1, [this](Delegate** slot) { void* target = field_98; if (target) HookRemove(HookManager, target, 0x6c62f499u, slot); });
    Call_sub_B39460();
    field_38 &= ~2u;
}
}}}
namespace Onyx { namespace Graphics { 
struct MorphInstance {
    char padding_0[56]; uint32_t field_38; char padding_3c[260]; void* field_140;
    void OnEvent1(const Event&); void Call_sub_B44A90();
    void Step();
};
void MorphInstance::Step() {
    WithDelegate<188965377ul, MorphInstance>(this, &MorphInstance::OnEvent1, [this](Delegate** slot) { void* target = field_140; if (target) HookRemove(HookManager, target, 0x6c62f499u, slot); });
    Call_sub_B44A90();
}
}}
namespace Onyx { 
struct View {
    char padding_0[56]; uint32_t field_38; char padding_3c[44]; void* field_68;
    void OnEvent1(const Event&); void Call_sub_69F630();
    void Step();
};
void View::Step() {
    WithDelegate<190787841ul, View>(this, &View::OnEvent1, [this](Delegate** slot) { void* target = field_68; if (target) HookRemove(HookManager, target, 0x6c62f499u, slot); });
    Call_sub_69F630();
}
}
namespace Onyx { namespace Graphics { 
struct CameraGraphics {
    char padding_0[56]; uint32_t field_38; char padding_3c[196]; void* field_100; char padding_108[48]; Handle* field_138; Handle* field_140; Handle* field_148;
    void OnEvent1(const Event&); void Call_sub_AFEA80();
    void Step();
};
void CameraGraphics::Step() {
    WithDelegate<194097921ul, CameraGraphics>(this, &CameraGraphics::OnEvent1, [this](Delegate** slot) { void* target = field_100; if (target) HookRemove(HookManager, target, 0x6c62f499u, slot); });
    if (field_138 && field_138->object) field_138->object->Disable();
    if (field_140 && field_140->object) field_140->object->Disable();
    if (field_148 && field_148->object) field_148->object->Disable();
    Call_sub_AFEA80();
}
}}
namespace Onyx { namespace Collision { 
struct SphereGraphics {
    char padding_0[56]; uint32_t field_38; char padding_3c[204]; void* field_108; char padding_110[48]; Handle* field_140; Handle* field_148; Handle* field_150;
    void OnEvent1(const Event&); void Call_sub_AFEA80();
    void Step();
};
void SphereGraphics::Step() {
    WithDelegate<194335233ul, SphereGraphics>(this, &SphereGraphics::OnEvent1, [this](Delegate** slot) { void* target = field_108; if (target) HookRemove(HookManager, target, 0x6c62f499u, slot); });
    if (field_140 && field_140->object) field_140->object->Disable();
    if (field_148 && field_148->object) field_148->object->Disable();
    if (field_150 && field_150->object) field_150->object->Disable();
    Call_sub_AFEA80();
}
}}
namespace Onyx { namespace Collision { 
struct PlaneGraphics {
    char padding_0[56]; uint32_t field_38; char padding_3c[204]; void* field_108; char padding_110[48]; Handle* field_140; Handle* field_148; Handle* field_150;
    void OnEvent1(const Event&); void Call_sub_AFEA80();
    void Step();
};
void PlaneGraphics::Step() {
    WithDelegate<194389761ul, PlaneGraphics>(this, &PlaneGraphics::OnEvent1, [this](Delegate** slot) { void* target = field_108; if (target) HookRemove(HookManager, target, 0x6c62f499u, slot); });
    if (field_140 && field_140->object) field_140->object->Disable();
    if (field_148 && field_148->object) field_148->object->Disable();
    if (field_150 && field_150->object) field_150->object->Disable();
    Call_sub_AFEA80();
}
}}
namespace Onyx { namespace Collision { 
struct CapsuleGraphics {
    char padding_0[56]; uint32_t field_38; char padding_3c[204]; void* field_108; char padding_110[48]; Handle* field_140; Handle* field_148; Handle* field_150;
    void OnEvent1(const Event&); void Call_sub_AFEA80();
    void Step();
};
void CapsuleGraphics::Step() {
    WithDelegate<194445569ul, CapsuleGraphics>(this, &CapsuleGraphics::OnEvent1, [this](Delegate** slot) { void* target = field_108; if (target) HookRemove(HookManager, target, 0x6c62f499u, slot); });
    if (field_140 && field_140->object) field_140->object->Disable();
    if (field_148 && field_148->object) field_148->object->Disable();
    if (field_150 && field_150->object) field_150->object->Disable();
    Call_sub_AFEA80();
}
}}
namespace Onyx { namespace Collision { 
struct AxisAlignedBoxGraphics {
    char padding_0[56]; uint32_t field_38; char padding_3c[204]; void* field_108; char padding_110[48]; Handle* field_140; Handle* field_148; Handle* field_150;
    void OnEvent1(const Event&); void Call_sub_AFEA80();
    void Step();
};
void AxisAlignedBoxGraphics::Step() {
    WithDelegate<194502401ul, AxisAlignedBoxGraphics>(this, &AxisAlignedBoxGraphics::OnEvent1, [this](Delegate** slot) { void* target = field_108; if (target) HookRemove(HookManager, target, 0x6c62f499u, slot); });
    if (field_140 && field_140->object) field_140->object->Disable();
    if (field_148 && field_148->object) field_148->object->Disable();
    if (field_150 && field_150->object) field_150->object->Disable();
    Call_sub_AFEA80();
}
}}
