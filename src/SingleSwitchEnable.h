// Working names and ABI views; complete original declarations remain unknown.
// Switch enable for one optional target, followed by a refresh.
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
template<unsigned Key, uint32_t Hash, unsigned TargetOffset> struct SingleSwitch {
    char header[0x38]; uint32_t flags; char padding[TargetOffset - 0x3c];
    void* target;
    void Handler(const SwitchEvent&);
    void Refresh();
    void Enable();
};
template<unsigned Key, uint32_t Hash, unsigned TargetOffset> void SingleSwitch<Key, Hash, TargetOffset>::Enable() {
    typedef SwitchCallback<Key, SingleSwitch> Callback;
    flags |= 2u;
    {
        CallbackOwner<Callback> owner{new (SwitchBinding<Key>::Allocate(SwitchBinding<Key>::context + 0x50, 40)) Callback(&SingleSwitch::Handler)};
        Callback* handle = owner.value;
        owner.value->Bind(this);
        if (void* t = target) SwitchBinding<Key>::Register(SwitchBinding<Key>::registry, t, Hash, &handle, 0);
    }
    Refresh();
}
#define SINGLE_SWITCH_ENABLE(Key, Hash, TargetOffset) template struct SingleSwitch<Key, Hash, TargetOffset>;
