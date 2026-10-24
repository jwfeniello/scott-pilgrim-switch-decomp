// Working names and ABI views; complete original declarations remain unknown.
// Onyx::Switch enable: registers a member-function callback with every target.
#include <stdint.h>
#include <stddef.h>
inline void* operator new(size_t, void* address) noexcept { return address; }
struct SwitchEvent;
struct Callable { virtual ~Callable(); };
struct Allocator { virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Free(void*); };
struct AllocatorManager { char unknown[0x370]; Allocator* values[256]; };
extern "C" { extern AllocatorManager* Accessor_Allocators; uint8_t Accessor_AllocatorIndex(AllocatorManager*, void*); }
template<unsigned Key> struct SwitchBinding {
    static unsigned char* context; static void* registry;
    static void Invoke();
    static void* Allocate(void*, size_t);
    static void Unregister(void* registry, void* target, uint32_t hash, void* handle);
    static void Register(void* registry, void* target, uint32_t hash, void* handle, uint64_t extra);
};
template<unsigned Key, class Host> struct SwitchCallback : Callable {
    using Member = void (Host::*)(const SwitchEvent&);
    void (*invoke)(); Host* owner; Member member;
    __attribute__((always_inline)) explicit SwitchCallback(Member m) : member(m) {}
    __attribute__((always_inline)) void Bind(Host* h) { invoke = SwitchBinding<Key>::Invoke; owner = h; }
    virtual ~SwitchCallback();
};
template<class T> struct CallbackOwner {
    T* value;
    __attribute__((always_inline)) ~CallbackOwner() {
        if (value) {
            AllocatorManager* m = Accessor_Allocators;
            Allocator* a = m->values[Accessor_AllocatorIndex(m, value)];
            static_cast<Callable*>(value)->~Callable();
            a->Free(value);
        }
    }
};
template<unsigned Key, uint32_t Hash, unsigned CountOffset> struct ComponentSwitch {
    char header[0x38]; uint32_t flags; char padding[CountOffset - 0x3c];
    uint64_t count; void** targets;
    void Handler(const SwitchEvent&);
    void Refresh(bool);
    void Enable();
};
template<unsigned Key, uint32_t Hash, unsigned CountOffset> void ComponentSwitch<Key, Hash, CountOffset>::Enable() {
    typedef SwitchCallback<Key, ComponentSwitch> Callback;
    flags |= 2u;
    {
        CallbackOwner<Callback> owner{new (SwitchBinding<Key>::Allocate(SwitchBinding<Key>::context + 0x50, 40)) Callback(&ComponentSwitch::Handler)};
        Callback* handle = owner.value;
        owner.value->Bind(this);
        for (void** p = targets, **end = targets + count; p != end; ++p) { void* target = *p;
            SwitchBinding<Key>::Register(SwitchBinding<Key>::registry, target, Hash, &handle, 0); }
    }
    if (uint32_t(count)) Refresh(false);
}
#define COMPONENT_SWITCH_ENABLE(Key, Hash, CountOffset) template struct ComponentSwitch<Key, Hash, CountOffset>;
