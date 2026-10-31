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
    __attribute__((always_inline)) Listener() : registered(false) {}
    __attribute__((always_inline)) explicit Listener(void* o) : registered(false) { owner = o; }
    __attribute__((always_inline)) ~Listener() noexcept { if (registered) Disconnect(this); }
    template<class F> __attribute__((always_inline)) void Bind(void* o, const F& f) {
        owner = o;
        function = MakeFunction<Sig>(f);
    }
    static void Disconnect(void*);
};
}  // namespace Onyx

namespace Onyx { namespace Component { struct Base { Base(); virtual ~Base(); }; } }
namespace SPTG { struct BreakableObject { BreakableObject(); virtual ~BreakableObject(); }; }
namespace Onyx { struct ActionComponent { ActionComponent(); virtual ~ActionComponent(); }; }

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

