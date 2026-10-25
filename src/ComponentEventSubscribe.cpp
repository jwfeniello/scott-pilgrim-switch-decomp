// A component's enable step that subscribes one of its members to an event of
// another component: it creates a member delegate, publishes it through a
// slot (as the callback readers in DeserializeCallbacks.h do: the invoke
// pointer and owner are stored after publishing), hands the slot to the
// manager's Process with the event type, then destroys the delegate. Before
// that it sets the component's active flag, calls the parent's enable, or both.
// Working names and ABI views; Key labels an original function extent.
#include <stdint.h>
#include <stddef.h>
inline void* operator new(size_t, void* address) noexcept { return address; }
struct DecodeAllocator { virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Free(void*); };
struct DecodeAllocators { char unknown[0x370]; DecodeAllocator* values[256]; };
extern "C" { extern DecodeAllocators* DecodeAllocatorManager; uint8_t DecodeAllocatorIndex(DecodeAllocators*, void*); }
struct Event;
struct Delegate { virtual ~Delegate(); };
template<unsigned Key> struct SubscriptionBinding {
    static unsigned char* context; static void* manager;
    static void Invoke();
    static void* Allocate(void*, size_t);
    static void Process(void*, void*, uint32_t, void*, uint64_t);
};
template<unsigned Key, class Owner> struct MemberDelegate : Delegate {
    typedef void (Owner::*Member)(const Event&);
    void (*invoke)(); Owner* owner; Member member;
    __attribute__((always_inline)) explicit MemberDelegate(Member m) : member(m) {}
    virtual ~MemberDelegate();
};
template<unsigned Key> struct DelegateHolder {
    Delegate* value;
    __attribute__((always_inline)) ~DelegateHolder() {
        if (value) {
            DecodeAllocators* m = DecodeAllocatorManager;
            DecodeAllocator* a = m->values[DecodeAllocatorIndex(m, value)];
            value->~Delegate();
            a->Free(value);
        }
    }
};
// Mode: 1 sets the active flag (0x2 in +0x38) first, 2 calls the parent's
// enable first, 3 does both.
template<unsigned Key, uint32_t Hash, unsigned TargetOffset, unsigned Mode> struct EventSubscriber {
    char padding_0[0x38];
    uint32_t flags;      // +0x38
    void BaseEnable();
    void OnEvent(const Event& event);
    void Enable();
};
template<unsigned Key, uint32_t Hash, unsigned TargetOffset, unsigned Mode> void EventSubscriber<Key, Hash, TargetOffset, Mode>::Enable() {
    if (Mode & 1) flags |= 2;
    if (Mode & 2) BaseEnable();
    typedef MemberDelegate<Key, EventSubscriber> D;
    D* d = new (SubscriptionBinding<Key>::Allocate(SubscriptionBinding<Key>::context + 0x50, 40)) D(&EventSubscriber::OnEvent);
    DelegateHolder<Key> callback{d};
    Delegate* slot;
    __atomic_store_n(&slot, d, __ATOMIC_RELAXED);
    d->invoke = SubscriptionBinding<Key>::Invoke;
    d->owner = this;
    void* target = *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + TargetOffset);
    if (target) SubscriptionBinding<Key>::Process(SubscriptionBinding<Key>::manager, target, Hash, &slot, 0);
}
#define EVENT_SUBSCRIBER(Key, Hash, TargetOffset, Mode) template struct EventSubscriber<Key, Hash, TargetOffset, Mode>;
#include "event_subscriber_instances.inc"
#undef EVENT_SUBSCRIBER
