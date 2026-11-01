// Component factories whose inlined constructors bind member callbacks.
//
// The same shape as ComponentFactories.cpp, with callback members. RTTI names the callback
// types: Onyx::Details::FunctionInternalHook<Onyx::MemberFunction<T, void(const E&)>>. A Listener
// holds one callback, its owner and a flag. The exception table shows the flag guards a
// disconnect in the destructor (TrackedReferenceCallbacks.cpp has that function's body) and that
// the callback's own destructor runs after it.
//
// The order of the writes follows from how these are built: members initialize in offset order,
// then the constructor body binds each callback and sets its owner. That is why, in a class with
// two listeners, the second owner is written after the first bind.
//
// A Listener's constructor zeroes all three of its fields. The optimizer turns that into one
// 17-byte memset, and code generation expands it back into separate writes that share a position
// in the source. That is why the flag can land before the callback here, and why the order differs
// between listeners of one class. A later write of the owner removes its zero.
//
// Listener is a working name. Event names come from the hooks' RTTI where they are plain; the
// Event_ types stand in for the others.
#include <stdint.h>
#include <stddef.h>
inline void* operator new(size_t, void* address) noexcept { return address; }
struct DecodeAllocator { virtual void Slot0(); virtual void Slot1(); virtual void* Allocate(size_t size); virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Free(void*); };
struct DecodeAllocators { char unknown[0x370]; DecodeAllocator* values[256]; };
extern "C" { extern DecodeAllocators* DecodeAllocatorManager; uint8_t DecodeAllocatorIndex(DecodeAllocators*, void*); }
extern "C" { extern void* GenericFactoryManager; DecodeAllocator* GenericFactoryResolve(void*, uint32_t); }
extern unsigned char* AllocatorContext;
__attribute__((always_inline)) inline void* DefaultAllocator() { return AllocatorContext + 0x50; }
namespace Onyx {
namespace Details {
struct FunctionBase {
    virtual ~FunctionBase() noexcept;
    virtual FunctionBase* Clone() const;
    virtual bool Equals(const FunctionBase* other) const;
};
__attribute__((always_inline)) inline void DestroyFunction(FunctionBase* d) {
    DecodeAllocators* m = DecodeAllocatorManager;
    DecodeAllocator* a = m->values[DecodeAllocatorIndex(m, d)];
    d->~FunctionBase();
    a->Free(d);
}
void* AllocateFunction(void*, size_t);
template<class F> struct FunctionInternalHook : FunctionBase {
    void (*invoke)();
    F function;
    __attribute__((always_inline)) FunctionInternalHook(const F& f) : function(f) { invoke = Invoke; }
    ~FunctionInternalHook() noexcept;
    FunctionBase* Clone() const override;
    bool Equals(const FunctionBase* other) const override;
    static void Invoke();
};
}  // namespace Details
template<class T, class Sig> struct MemberFunction;
template<class T, class R, class... A> struct MemberFunction<T, R(A...)> {
    T* owner;
    R (T::*member)(A...);
    __attribute__((always_inline)) MemberFunction(T* o, R (T::*m)(A...)) : owner(o), member(m) {}
};
template<class T, class Sig> struct MemberFunctionConst;
template<class T, class R, class... A> struct MemberFunctionConst<T, R(A...)> {
    const T* owner;
    R (T::*member)(A...) const;
    __attribute__((always_inline)) MemberFunctionConst(const T* o, R (T::*m)(A...) const) : owner(o), member(m) {}
};
// A callback holder: copying one clones the callable.
template<class Sig> struct Function {
    Details::FunctionBase* value;
    __attribute__((always_inline)) Function() : value(nullptr) {}
    __attribute__((always_inline)) explicit Function(Details::FunctionBase* f) : value(f) {}
    ~Function() noexcept { if (value) Details::DestroyFunction(value); }
    __attribute__((always_inline)) Function(const Function& other) : value(other.value ? other.value->Clone() : nullptr) {}
    __attribute__((always_inline)) Function& operator=(const Function& other) {
        Function copy(other);
        Details::FunctionBase* old = value;
        value = copy.value;
        copy.value = old;
        return *this;
    }
};
template<class Sig, class F> __attribute__((always_inline)) inline Function<Sig> MakeFunction(const F& f) {
    return Function<Sig>(new (Details::AllocateFunction(AllocatorContext + 0x50, 40)) Details::FunctionInternalHook<F>(f));
}
// A callback that also tracks its registration; +0x10 says whether it is registered.
template<class Sig> struct Listener {
    Function<Sig> function;
    void* owner;
    bool registered;
    __attribute__((always_inline)) Listener() : owner(nullptr), registered(false) {}
    __attribute__((always_inline)) ~Listener() noexcept { if (registered) Disconnect(this); }
    template<class F> __attribute__((always_inline)) void Bind(void* o, const F& f) {
        owner = o;
        function = MakeFunction<Sig>(f);
    }
    static void Disconnect(void*);
};
}  // namespace Onyx

namespace Onyx { namespace Component { struct Base { Base(); virtual ~Base(); }; } }
namespace Onyx { namespace Fire { struct FireVisual { FireVisual(); virtual ~FireVisual(); }; } }
struct Base_948e20 { Base_948e20(); virtual ~Base_948e20(); };  // Onyx::Component::Compose<...>
namespace SPTG { struct BreakableObject { BreakableObject(); virtual ~BreakableObject(); }; }
struct Base_b4c840 { Base_b4c840(); virtual ~Base_b4c840(); };  // Onyx::Component::Compose<...>
namespace Onyx { struct ActionComponent { ActionComponent(); virtual ~ActionComponent(); }; }

struct Event_71ded0;
struct Event_unbound_50;
// Onyx::DareAudio::AudioNotificationComponent : Onyx::Component::Compose<...> : Onyx::AIComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace DareAudio {
struct AudioNotificationComponentLayout : ::Onyx::Component::Base {
 char p8[0x48];
 __attribute__((always_inline)) AudioNotificationComponentLayout() {  }
 virtual ~AudioNotificationComponentLayout();
};
struct AudioNotificationComponent : AudioNotificationComponentLayout {
 Onyx::Listener<void(const Event_unbound_50&)> member_50;
 Onyx::Function<void(const Event_71ded0&)> member_68;
 void F68(const Event_71ded0&);
 void F50(const Event_unbound_50&);
 __attribute__((always_inline)) AudioNotificationComponent() : member_50(), member_68() { member_50.owner = this; member_68 = Onyx::MakeFunction<void(const Event_71ded0&)>(Onyx::MemberFunction<AudioNotificationComponent, void(const Event_71ded0&)>(this, &AudioNotificationComponent::F68)); }
 virtual ~AudioNotificationComponent();
};
}  // namespace DareAudio
}  // namespace Onyx
void* Create_Onyx_DareAudio_AudioNotificationComponent() { return new (GenericFactoryResolve(GenericFactoryManager, 0x386d550du)->Allocate(sizeof(Onyx::DareAudio::AudioNotificationComponent))) Onyx::DareAudio::AudioNotificationComponent; }

struct Event_71b140;
// Onyx::DareAudio::AudioWaveMarkerComponent : Onyx::Component::Compose<...> : Onyx::AIComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace DareAudio {
struct AudioWaveMarkerComponentLayout : ::Onyx::Component::Base {
 char p8[0x48];
 __attribute__((always_inline)) AudioWaveMarkerComponentLayout() {  }
 virtual ~AudioWaveMarkerComponentLayout();
};
struct AudioWaveMarkerComponent : AudioWaveMarkerComponentLayout {
 Onyx::Listener<void(const Event_unbound_50&)> member_50;
 Onyx::Function<void(const Event_71b140&)> member_68;
 void F68(const Event_71b140&);
 void F50(const Event_unbound_50&);
 __attribute__((always_inline)) AudioWaveMarkerComponent() : member_50(), member_68() { member_50.owner = this; member_68 = Onyx::MakeFunction<void(const Event_71b140&)>(Onyx::MemberFunction<AudioWaveMarkerComponent, void(const Event_71b140&)>(this, &AudioWaveMarkerComponent::F68)); }
 virtual ~AudioWaveMarkerComponent();
};
}  // namespace DareAudio
}  // namespace Onyx
void* Create_Onyx_DareAudio_AudioWaveMarkerComponent() { return new (GenericFactoryResolve(GenericFactoryManager, 0x386d550du)->Allocate(sizeof(Onyx::DareAudio::AudioWaveMarkerComponent))) Onyx::DareAudio::AudioWaveMarkerComponent; }

struct Event_71a300;
// Onyx::DareAudio::AudioComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace DareAudio {
struct AudioComponentLayout : ::Onyx::Component::Base {
 char p8[0x48];
 struct M { uint64_t word[4]; ~M() noexcept; } member;
 __attribute__((always_inline)) AudioComponentLayout() { member.word[0] = 0; member.word[1] = 0; member.word[2] = 0; member.word[3] = 0; }
 virtual ~AudioComponentLayout() {}
 virtual void Key();
};
struct AudioComponent : AudioComponentLayout {
 Onyx::Function<void(const Event_71a300&)> member_70;
 Onyx::Function<void(const Event_71a300&)> member_78;
 void F70(const Event_71a300&) const;
 void F78(const Event_71a300&) const;
 __attribute__((always_inline)) AudioComponent() : member_70(), member_78() { member_70 = Onyx::MakeFunction<void(const Event_71a300&)>(Onyx::MemberFunctionConst<AudioComponent, void(const Event_71a300&)>(this, &AudioComponent::F70)); member_78 = Onyx::MakeFunction<void(const Event_71a300&)>(Onyx::MemberFunctionConst<AudioComponent, void(const Event_71a300&)>(this, &AudioComponent::F78)); }
 virtual ~AudioComponent();
};
}  // namespace DareAudio
}  // namespace Onyx
void* Create_Onyx_DareAudio_AudioComponent() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::DareAudio::AudioComponent))) Onyx::DareAudio::AudioComponent; }

struct Event_7094a0;
// Onyx::DareAudio::ListenerComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace DareAudio {
struct ListenerComponentLayout : ::Onyx::Component::Base {
 char p8[0x48];
 uint64_t field_50;
 __attribute__((always_inline)) ListenerComponentLayout() {  }
 virtual ~ListenerComponentLayout();
};
struct ListenerComponent : ListenerComponentLayout {
 Onyx::Function<void(const Event_7094a0&)> member_58;
 void F58(const Event_7094a0&) const;
 __attribute__((always_inline)) ListenerComponent() : member_58() { field_50 = 0; member_58 = Onyx::MakeFunction<void(const Event_7094a0&)>(Onyx::MemberFunctionConst<ListenerComponent, void(const Event_7094a0&)>(this, &ListenerComponent::F58)); }
 virtual ~ListenerComponent();
};
}  // namespace DareAudio
}  // namespace Onyx
void* Create_Onyx_DareAudio_ListenerComponent() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::DareAudio::ListenerComponent))) Onyx::DareAudio::ListenerComponent; }

struct EventAudioUpdateWiimote;
struct Event_7051f0;
// Onyx::DareAudio::WiiMoteSpeakerComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace DareAudio {
struct WiiMoteSpeakerComponentLayout : ::Onyx::Component::Base {
 char p8[0x48];
 __attribute__((always_inline)) WiiMoteSpeakerComponentLayout() {  }
 virtual ~WiiMoteSpeakerComponentLayout();
};
struct WiiMoteSpeakerComponent : WiiMoteSpeakerComponentLayout {
 Onyx::Listener<void(const EventAudioUpdateWiimote&)> member_50;
 Onyx::Function<void(const Event_7051f0&)> member_68;
 uint32_t field_70;
 char pe[0x4];
 void F50(const EventAudioUpdateWiimote&);
 void F68(const Event_7051f0&);
 __attribute__((always_inline)) WiiMoteSpeakerComponent() : member_50(), member_68(), field_70(0x1u) { member_50.Bind(this, Onyx::MemberFunction<WiiMoteSpeakerComponent, void(const EventAudioUpdateWiimote&)>(this, &WiiMoteSpeakerComponent::F50)); member_68 = Onyx::MakeFunction<void(const Event_7051f0&)>(Onyx::MemberFunction<WiiMoteSpeakerComponent, void(const Event_7051f0&)>(this, &WiiMoteSpeakerComponent::F68)); }
 virtual ~WiiMoteSpeakerComponent();
};
}  // namespace DareAudio
}  // namespace Onyx
void* Create_Onyx_DareAudio_WiiMoteSpeakerComponent() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::DareAudio::WiiMoteSpeakerComponent))) Onyx::DareAudio::WiiMoteSpeakerComponent; }

struct EventOnEnter;
// SPTG::Piniata : Onyx::Component::Compose<...> : SPTG::BreakableObject : Onyx::Component::Compose<...> : SPTG::AnimatedAiActor
namespace SPTG {
struct PiniataLayout : ::SPTG::BreakableObject {
 char p8[0x2a8];
 __attribute__((always_inline)) PiniataLayout() {  }
 virtual ~PiniataLayout();
};
struct Piniata : PiniataLayout {
 Onyx::Listener<void(const EventOnEnter&)> member_2b0;
 void F2b0(const EventOnEnter&);
 __attribute__((always_inline)) Piniata() : member_2b0() { member_2b0.Bind(this, Onyx::MemberFunction<Piniata, void(const EventOnEnter&)>(this, &Piniata::F2b0)); }
 virtual ~Piniata();
};
}  // namespace SPTG
void* Create_SPTG_Piniata() { return new (GenericFactoryResolve(GenericFactoryManager, 0x1486d4e8u)->Allocate(sizeof(SPTG::Piniata))) SPTG::Piniata; }

struct Event_a0c770;
// SPTG::ControllableRemoteSpawner : Onyx::Component::Compose<...> : SPTG::SPTG_AIComponent : Onyx::Component::Compose<...> : Onyx::AIComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
extern "C" const char Symbol_186a780[];
namespace SPTG {
struct ControllableRemoteSpawnerLayout : ::Onyx::Component::Base {
 char p8[0x48];
 uint8_t field_50;
 uint8_t field_51;
 char p52[0x2];
 int32_t field_54;
 uint64_t field_58;
 __attribute__((always_inline)) ControllableRemoteSpawnerLayout() { field_50 = 0x1; field_51 = 0x1; field_54 = -1; field_58 = 0; }
 virtual ~ControllableRemoteSpawnerLayout();
};
struct ControllableRemoteSpawner : ControllableRemoteSpawnerLayout {
 Onyx::Listener<void(const Event_a0c770&)> member_60;
 const void* field_78;
 int32_t field_80;
 uint32_t field_84;
 char p88[0x14];
 uint32_t field_9c;
 char pe[0x8];
 void F60(const Event_a0c770&);
 __attribute__((always_inline)) ControllableRemoteSpawner() : member_60(), field_78(Symbol_186a780), field_80(-1), field_84(0x7u), field_9c(0x6u) { member_60.Bind(this, Onyx::MemberFunction<ControllableRemoteSpawner, void(const Event_a0c770&)>(this, &ControllableRemoteSpawner::F60)); }
 virtual ~ControllableRemoteSpawner();
};
}  // namespace SPTG
void* Create_SPTG_ControllableRemoteSpawner() { return new (GenericFactoryResolve(GenericFactoryManager, 0x1486d4e8u)->Allocate(sizeof(SPTG::ControllableRemoteSpawner))) SPTG::ControllableRemoteSpawner; }

struct TriggerEvent;
struct Event_unbound_200;
// SPTG::MechanismObject : Onyx::Component::Compose<...> : SPTG::AnimatedAiActor
namespace SPTG {
struct MechanismObjectLayout : Base_948e20 {
 char p8[0x1e0];
 uint64_t field_1e8;
 uint64_t field_1f0;
 uint64_t field_1f8;
 __attribute__((always_inline)) MechanismObjectLayout() { field_1e8 = 0; field_1f0 = 0; field_1f8 = 0; }
 virtual ~MechanismObjectLayout();
};
struct MechanismObject : MechanismObjectLayout {
 Onyx::Listener<void(const Event_unbound_200&)> member_200;
 Onyx::Listener<void(const TriggerEvent&)> member_218;
 char pe[0x8];
 void F218(const TriggerEvent&);
 void F200(const Event_unbound_200&);
 __attribute__((always_inline)) MechanismObject() : member_200(), member_218() { member_200.owner = this; member_218.Bind(this, Onyx::MemberFunction<MechanismObject, void(const TriggerEvent&)>(this, &MechanismObject::F218)); }
 virtual ~MechanismObject();
};
}  // namespace SPTG
void* Create_SPTG_MechanismObject() { return new (GenericFactoryResolve(GenericFactoryManager, 0x1486d4e8u)->Allocate(sizeof(SPTG::MechanismObject))) SPTG::MechanismObject; }

struct Event_936450;
// SPTG::AudioEventComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct AudioEventComponentLayout : ::Onyx::Component::Base {
 char p8[0x48];
 struct M { uint64_t word[2]; ~M() noexcept; } member;
 __attribute__((always_inline)) AudioEventComponentLayout() { member.word[0] = 0; }
 virtual ~AudioEventComponentLayout() {}
 virtual void Key();
};
struct AudioEventComponent : AudioEventComponentLayout {
 Onyx::Listener<void(const Event_936450&)> member_60;
 void F60(const Event_936450&);
 __attribute__((always_inline)) AudioEventComponent() : member_60() { member.word[1] = 0; member_60.Bind(this, Onyx::MemberFunction<AudioEventComponent, void(const Event_936450&)>(this, &AudioEventComponent::F60)); }
 virtual ~AudioEventComponent();
};
}  // namespace SPTG
void* Create_SPTG_AudioEventComponent() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::AudioEventComponent))) SPTG::AudioEventComponent; }

struct EventStep;
// SPTG::ActionStep : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct ActionStepLayout : ::Onyx::ActionComponent {
 char p8[0x98];
 void* field_a0;
 uint64_t field_a8;
 uint64_t field_b0;
 uint64_t field_b8;
 char pc0[0x8];
 uint64_t field_c8;
 uint64_t field_d0;
 __attribute__((always_inline)) ActionStepLayout() { field_a8 = 0; field_b0 = 0; field_b8 = 0; field_a0 = DefaultAllocator(); field_c8 = 0; field_d0 = 0; }
 virtual ~ActionStepLayout();
};
struct ActionStep : ActionStepLayout {
 Onyx::Listener<void(const EventStep&)> member_d8;
 uint32_t field_f0;
 char pe[0x4];
 void Fd8(const EventStep&);
 __attribute__((always_inline)) ActionStep() : member_d8(), field_f0(0) { member_d8.Bind(this, Onyx::MemberFunction<ActionStep, void(const EventStep&)>(this, &ActionStep::Fd8)); }
 virtual ~ActionStep();
};
}  // namespace SPTG
void* Create_SPTG_ActionStep() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::ActionStep))) SPTG::ActionStep; }

struct Event_8df830;
struct Event_unbound_68;
// SPTG::EventTrigger : Onyx::Component::Compose<...> : Onyx::TriggerComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct EventTriggerLayout : ::Onyx::Component::Base {
 char p8[0x42];
 uint8_t field_4a;
 char p4b[0x5];
 __attribute__((always_inline)) EventTriggerLayout() { field_4a = 0x1; }
 virtual ~EventTriggerLayout();
};
struct EventTrigger : EventTriggerLayout {
 Onyx::Listener<void(const Event_8df830&)> member_50;
 Onyx::Listener<void(const Event_unbound_68&)> member_68;
 void F50(const Event_8df830&);
 void F68(const Event_unbound_68&);
 __attribute__((always_inline)) EventTrigger() : member_50(), member_68() { member_68.owner = this; member_50.Bind(this, Onyx::MemberFunction<EventTrigger, void(const Event_8df830&)>(this, &EventTrigger::F50)); }
 virtual ~EventTrigger();
};
}  // namespace SPTG
void* Create_SPTG_EventTrigger() { return new (GenericFactoryResolve(GenericFactoryManager, 0x1af1d642u)->Allocate(sizeof(SPTG::EventTrigger))) SPTG::EventTrigger; }

// SPTG::GamePurchaseMenu : Onyx::Component::Compose<...> : SPTG::FlashMenu : Onyx::Component::Compose<...> : Onyx::Fire::FireVisual : Onyx::Component::Compose<...> : Onyx::Fire::FireVisualBase : Onyx::Component::Compose<...>
namespace SPTG {
struct GamePurchaseMenuLayout : ::Onyx::Fire::FireVisual {
 char p8[0x2a8];
 uint64_t field_2b0;
 uint64_t field_2b8;
 uint64_t field_2c0;
 uint64_t field_2c8;
 uint64_t field_2d0;
 __attribute__((always_inline)) GamePurchaseMenuLayout() { field_2b0 = 0; field_2b8 = 0; field_2c0 = 0; field_2c8 = 0; field_2d0 = 0; }
 virtual ~GamePurchaseMenuLayout();
};
struct GamePurchaseMenu : GamePurchaseMenuLayout {
 Onyx::Function<void()> member_2d8;
 char pe[0x8];
 void F2d8();
 __attribute__((always_inline)) GamePurchaseMenu() : member_2d8() { member_2d8 = Onyx::MakeFunction<void()>(Onyx::MemberFunction<GamePurchaseMenu, void()>(this, &GamePurchaseMenu::F2d8)); }
 virtual ~GamePurchaseMenu();
};
}  // namespace SPTG
void* Create_SPTG_GamePurchaseMenu() { return new (GenericFactoryResolve(GenericFactoryManager, 0x19938f9fu)->Allocate(sizeof(SPTG::GamePurchaseMenu))) SPTG::GamePurchaseMenu; }

struct Event_8485e0;
struct Event_848610;
// SPTG::LoadingNotifier : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct LoadingNotifierLayout : ::Onyx::Component::Base {
 char p8[0x48];
 uint64_t field_50;
 __attribute__((always_inline)) LoadingNotifierLayout() { field_50 = 0; }
 virtual ~LoadingNotifierLayout();
};
struct LoadingNotifier : LoadingNotifierLayout {
 Onyx::Listener<void(const Event_8485e0&)> member_58;
 Onyx::Listener<void(const Event_848610&)> member_70;
 void F58(const Event_8485e0&);
 void F70(const Event_848610&);
 __attribute__((always_inline)) LoadingNotifier() : member_58(), member_70() { member_58.Bind(this, Onyx::MemberFunction<LoadingNotifier, void(const Event_8485e0&)>(this, &LoadingNotifier::F58)); member_70.Bind(this, Onyx::MemberFunction<LoadingNotifier, void(const Event_848610&)>(this, &LoadingNotifier::F70)); }
 virtual ~LoadingNotifier();
};
}  // namespace SPTG
void* Create_SPTG_LoadingNotifier() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::LoadingNotifier))) SPTG::LoadingNotifier; }

struct Event_7fb500;
struct Event_7fb530;
// SPTG::Friend : Onyx::Component::Compose<...> : SPTG::FriendNative : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct FriendLayout : ::Onyx::Component::Base {
 char p8[0x48];
 uint64_t field_50;
 __attribute__((always_inline)) FriendLayout() { field_50 = 0; }
 virtual ~FriendLayout();
};
struct Friend : FriendLayout {
 Onyx::Listener<void(const Event_7fb500&)> member_58;
 Onyx::Listener<void(const Event_7fb530&)> member_70;
 uint8_t field_88;
 char pe[0x7];
 void F58(const Event_7fb500&);
 void F70(const Event_7fb530&);
 __attribute__((always_inline)) Friend() : member_58(), member_70(), field_88(0) { member_58.Bind(this, Onyx::MemberFunction<Friend, void(const Event_7fb500&)>(this, &Friend::F58)); member_70.Bind(this, Onyx::MemberFunction<Friend, void(const Event_7fb530&)>(this, &Friend::F70)); }
 virtual ~Friend();
};
}  // namespace SPTG
void* Create_SPTG_Friend() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::Friend))) SPTG::Friend; }

struct EventNotifyStaticsForAll;
// SPTG::StatisticsNotifier : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace SPTG {
struct StatisticsNotifierLayout : ::Onyx::Component::Base {
 char p8[0x48];
 struct M { uint64_t word[2]; ~M() noexcept; } member;
 __attribute__((always_inline)) StatisticsNotifierLayout() { member.word[0] = 0; }
 virtual ~StatisticsNotifierLayout() {}
 virtual void Key();
};
struct StatisticsNotifier : StatisticsNotifierLayout {
 Onyx::Listener<void(const EventNotifyStaticsForAll&)> member_60;
 uint32_t field_78;
 char p7c[0x4];
 uint64_t field_80;
 uint64_t field_88;
 uint64_t field_90;
 void F60(const EventNotifyStaticsForAll&);
 __attribute__((always_inline)) StatisticsNotifier() : member_60(), field_78(0), field_80(0), field_88(0), field_90(0) { member.word[1] = 0; member_60.Bind(this, Onyx::MemberFunction<StatisticsNotifier, void(const EventNotifyStaticsForAll&)>(this, &StatisticsNotifier::F60)); }
 virtual ~StatisticsNotifier();
};
}  // namespace SPTG
void* Create_SPTG_StatisticsNotifier() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(SPTG::StatisticsNotifier))) SPTG::StatisticsNotifier; }

struct EventStop;
// Onyx::ActionSequence : Onyx::Component::Compose<...> : Onyx::ActionComponent : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct ActionSequenceLayout : ::Onyx::ActionComponent {
 char p8[0x98];
 void* field_a0;
 uint64_t field_a8;
 uint64_t field_b0;
 uint64_t field_b8;
 char pc0[0x8];
 __attribute__((always_inline)) ActionSequenceLayout() { field_a8 = 0; field_b0 = 0; field_b8 = 0; field_a0 = DefaultAllocator(); }
 virtual ~ActionSequenceLayout();
};
struct ActionSequence : ActionSequenceLayout {
 Onyx::Listener<void(const EventStop&)> member_c8;
 uint32_t field_e0;
 char pe[0x4];
 void Fc8(const EventStop&);
 __attribute__((always_inline)) ActionSequence() : member_c8(), field_e0(0) { member_c8.Bind(this, Onyx::MemberFunction<ActionSequence, void(const EventStop&)>(this, &ActionSequence::Fc8)); }
 virtual ~ActionSequence();
};
}  // namespace Onyx
void* Create_Onyx_ActionSequence() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::ActionSequence))) Onyx::ActionSequence; }

struct EventPreRender;
// Onyx::ScreenPositioner : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct ScreenPositionerLayout : ::Onyx::Component::Base {
 char p8[0x48];
 uint64_t field_50;
 __attribute__((always_inline)) ScreenPositionerLayout() { field_50 = 0; }
 virtual ~ScreenPositionerLayout();
};
struct ScreenPositioner : ScreenPositionerLayout {
 Onyx::Listener<void(const EventPreRender&)> member_58;
 uint64_t field_70;
 uint32_t field_78;
 char pe[0x4];
 void F58(const EventPreRender&);
 __attribute__((always_inline)) ScreenPositioner() : member_58(), field_70(0), field_78(0) { member_58.Bind(this, Onyx::MemberFunction<ScreenPositioner, void(const EventPreRender&)>(this, &ScreenPositioner::F58)); }
 virtual ~ScreenPositioner();
};
}  // namespace Onyx
void* Create_Onyx_ScreenPositioner() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::ScreenPositioner))) Onyx::ScreenPositioner; }

struct EventChangeAnimation;
// Onyx::AnimationHolder : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct AnimationHolderLayout : ::Onyx::Component::Base {
 char p8[0x48];
 uint64_t field_50;
 void* field_58;
 uint64_t field_60;
 uint64_t field_68;
 uint64_t field_70;
 char p78[0x8];
 __attribute__((always_inline)) AnimationHolderLayout() { field_50 = 0; field_60 = 0; field_68 = 0; field_70 = 0; field_58 = DefaultAllocator(); }
 virtual ~AnimationHolderLayout();
};
struct AnimationHolder : AnimationHolderLayout {
 Onyx::Listener<void(const EventChangeAnimation&)> member_80;
 char p98[0x10];
 uint64_t field_a8;
 void F80(const EventChangeAnimation&);
 __attribute__((always_inline)) AnimationHolder() : member_80(), field_a8(0) { member_80.Bind(this, Onyx::MemberFunction<AnimationHolder, void(const EventChangeAnimation&)>(this, &AnimationHolder::F80)); }
 virtual ~AnimationHolder();
};
}  // namespace Onyx
void* Create_Onyx_AnimationHolder() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::AnimationHolder))) Onyx::AnimationHolder; }

struct Event_b4d050;
// Onyx::Graphics::MeshSwitch : Onyx::Switch<...> : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Graphics {
struct MeshSwitchLayout : Base_b4c840 {
 char p8[0x80];
 __attribute__((always_inline)) MeshSwitchLayout() {  }
 virtual ~MeshSwitchLayout();
};
struct MeshSwitch : MeshSwitchLayout {
 Onyx::Listener<void(const Event_b4d050&)> member_88;
 uint32_t field_a0;
 char pe[0x4];
 void F88(const Event_b4d050&);
 __attribute__((always_inline)) MeshSwitch() : member_88(), field_a0(0) { member_88.Bind(this, Onyx::MemberFunction<MeshSwitch, void(const Event_b4d050&)>(this, &MeshSwitch::F88)); }
 virtual ~MeshSwitch();
};
}  // namespace Graphics
}  // namespace Onyx
void* Create_Onyx_Graphics_MeshSwitch() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Graphics::MeshSwitch))) Onyx::Graphics::MeshSwitch; }

struct EventChangeLanguage;
// Onyx::Localization::LanguageSelector : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Localization {
struct LanguageSelectorLayout : ::Onyx::Component::Base {
 char p8[0x48];
 uint64_t field_50;
 __attribute__((always_inline)) LanguageSelectorLayout() { field_50 = 0; }
 virtual ~LanguageSelectorLayout();
};
struct LanguageSelector : LanguageSelectorLayout {
 Onyx::Listener<void(const EventChangeLanguage&)> member_58;
 void F58(const EventChangeLanguage&);
 __attribute__((always_inline)) LanguageSelector() : member_58() { member_58.Bind(this, Onyx::MemberFunction<LanguageSelector, void(const EventChangeLanguage&)>(this, &LanguageSelector::F58)); }
 virtual ~LanguageSelector();
};
}  // namespace Localization
}  // namespace Onyx
void* Create_Onyx_Localization_LanguageSelector() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Localization::LanguageSelector))) Onyx::Localization::LanguageSelector; }

struct EventChangeValue;
// Onyx::CounterToText : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct CounterToTextLayout : ::Onyx::Component::Base {
 char p8[0x48];
 struct M { uint64_t word[2]; ~M() noexcept; } member;
 __attribute__((always_inline)) CounterToTextLayout() { member.word[0] = 0; }
 virtual ~CounterToTextLayout() {}
 virtual void Key();
};
struct CounterToText : CounterToTextLayout {
 Onyx::Listener<void(const EventChangeValue&)> member_60;
 void F60(const EventChangeValue&);
 __attribute__((always_inline)) CounterToText() : member_60() { member.word[1] = 0; member_60.Bind(this, Onyx::MemberFunction<CounterToText, void(const EventChangeValue&)>(this, &CounterToText::F60)); }
 virtual ~CounterToText();
};
}  // namespace Onyx
void* Create_Onyx_CounterToText() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::CounterToText))) Onyx::CounterToText; }

struct Event_cc87f0;
// Onyx::Gameplay::Circuits::SwitchCircuit : Onyx::Component::Compose<...> : Onyx::Gameplay::Circuits::BaseCircuit : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Gameplay {
namespace Circuits {
struct SwitchCircuitLayout : ::Onyx::Component::Base {
 char p8[0x48];
 void* field_50;
 uint64_t field_58;
 uint64_t field_60;
 uint64_t field_68;
 char p70[0x8];
 __attribute__((always_inline)) SwitchCircuitLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); }
 virtual ~SwitchCircuitLayout();
};
struct SwitchCircuit : SwitchCircuitLayout {
 Onyx::Listener<void(const Event_cc87f0&)> member_78;
 uint32_t field_90;
 char pe[0x4];
 void F78(const Event_cc87f0&);
 __attribute__((always_inline)) SwitchCircuit() : member_78(), field_90(0) { member_78.Bind(this, Onyx::MemberFunction<SwitchCircuit, void(const Event_cc87f0&)>(this, &SwitchCircuit::F78)); }
 virtual ~SwitchCircuit();
};
}  // namespace Circuits
}  // namespace Gameplay
}  // namespace Onyx
void* Create_Onyx_Gameplay_Circuits_SwitchCircuit() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Gameplay::Circuits::SwitchCircuit))) Onyx::Gameplay::Circuits::SwitchCircuit; }

struct Event_cc73c0;
// Onyx::Gameplay::Circuits::ScaleManipulator : Onyx::Component::Compose<...> : Onyx::Gameplay::Circuits::BaseCircuit : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
namespace Gameplay {
namespace Circuits {
struct ScaleManipulatorLayout : ::Onyx::Component::Base {
 char p8[0x48];
 void* field_50;
 uint64_t field_58;
 uint64_t field_60;
 uint64_t field_68;
 char p70[0x8];
 __attribute__((always_inline)) ScaleManipulatorLayout() { field_58 = 0; field_60 = 0; field_68 = 0; field_50 = DefaultAllocator(); }
 virtual ~ScaleManipulatorLayout();
};
struct ScaleManipulator : ScaleManipulatorLayout {
 Onyx::Listener<void(const Event_cc73c0&)> member_78;
 void F78(const Event_cc73c0&);
 __attribute__((always_inline)) ScaleManipulator() : member_78() { member_78.Bind(this, Onyx::MemberFunction<ScaleManipulator, void(const Event_cc73c0&)>(this, &ScaleManipulator::F78)); }
 virtual ~ScaleManipulator();
};
}  // namespace Circuits
}  // namespace Gameplay
}  // namespace Onyx
void* Create_Onyx_Gameplay_Circuits_ScaleManipulator() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::Gameplay::Circuits::ScaleManipulator))) Onyx::Gameplay::Circuits::ScaleManipulator; }

struct EventGeneric;
// Onyx::GenericMaterialReactor : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct GenericMaterialReactorLayout : ::Onyx::Component::Base {
 char p8[0x48];
 uint64_t field_50;
 uint64_t field_58;
 uint64_t field_60;
 __attribute__((always_inline)) GenericMaterialReactorLayout() { field_50 = 0; field_58 = 0; field_60 = 0; }
 virtual ~GenericMaterialReactorLayout();
};
struct GenericMaterialReactor : GenericMaterialReactorLayout {
 Onyx::Listener<void(const EventGeneric&)> member_68;
 void F68(const EventGeneric&);
 __attribute__((always_inline)) GenericMaterialReactor() : member_68() { member_68.Bind(this, Onyx::MemberFunction<GenericMaterialReactor, void(const EventGeneric&)>(this, &GenericMaterialReactor::F68)); }
 virtual ~GenericMaterialReactor();
};
}  // namespace Onyx
void* Create_Onyx_GenericMaterialReactor() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::GenericMaterialReactor))) Onyx::GenericMaterialReactor; }

struct EventSetTransform;
// Onyx::SaveTransform : Onyx::Component::Compose<...> : Onyx::Component::Base
namespace Onyx {
struct SaveTransformLayout : ::Onyx::Component::Base {
 char p8[0x48];
 struct M { uint64_t word[2]; ~M() noexcept; } member;
 __attribute__((always_inline)) SaveTransformLayout() { member.word[0] = 0; }
 virtual ~SaveTransformLayout() {}
 virtual void Key();
};
struct SaveTransform : SaveTransformLayout {
 Onyx::Listener<void(const EventSetTransform&)> member_60;
 uint32_t field_78;
 char pe[0x4];
 void F60(const EventSetTransform&);
 __attribute__((always_inline)) SaveTransform() : member_60(), field_78(0) { member.word[1] = 0; member_60.Bind(this, Onyx::MemberFunction<SaveTransform, void(const EventSetTransform&)>(this, &SaveTransform::F60)); }
 virtual ~SaveTransform();
};
}  // namespace Onyx
void* Create_Onyx_SaveTransform() { return new (GenericFactoryResolve(GenericFactoryManager, 0x7b73c94u)->Allocate(sizeof(Onyx::SaveTransform))) Onyx::SaveTransform; }

