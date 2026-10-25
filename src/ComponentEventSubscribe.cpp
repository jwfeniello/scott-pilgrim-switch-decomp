// A component's enable step that subscribes one of its members to an event of
// another component: it creates a member delegate, publishes it through a
// slot (as the callback readers in DeserializeCallbacks.h do: the invoke
// pointer and owner are stored after publishing), hands the slot to the
// manager's Process with the event type, then destroys the delegate. Before
// that it sets the component's active flag, calls the parent's enable, or both.
// The variants after the EventSubscriber instances subscribe to every target
// in a list, or to a source component resolved through a cached handle, or add
// a step before or after.
// Working names and ABI views; Key labels an original function extent.
#include <stdint.h>
#include <stddef.h>
#include "gameplay/OnyxComponents.h"
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

// The subscription steps of EventSubscriber::Enable. The target is read after
// the delegate is built.
template<unsigned Key, class Owner> __attribute__((always_inline)) inline void SubscribeMember(Owner* owner, void (Owner::*member)(const Event&), void* const& target, uint32_t hash) {
    typedef MemberDelegate<Key, Owner> D;
    D* d = new (SubscriptionBinding<Key>::Allocate(SubscriptionBinding<Key>::context + 0x50, 40)) D(member);
    DelegateHolder<Key> callback{d};
    Delegate* slot;
    __atomic_store_n(&slot, d, __ATOMIC_RELAXED);
    d->invoke = SubscriptionBinding<Key>::Invoke;
    d->owner = owner;
    if (target) SubscriptionBinding<Key>::Process(SubscriptionBinding<Key>::manager, target, hash, &slot, 0);
}

// Parent enable, subscribe, then a follow-up step.
template<unsigned Key, uint32_t Hash, unsigned TargetOffset> struct SubscribeThenStep {
    char padding[TargetOffset];
    void* target;
    void BaseEnable();
    void OnEvent(const Event& event);
    void Step();
    void Enable();
};
template<unsigned Key, uint32_t Hash, unsigned TargetOffset> void SubscribeThenStep<Key, Hash, TargetOffset>::Enable() {
    BaseEnable();
    SubscribeMember<Key>(this, &SubscribeThenStep::OnEvent, target, Hash);
    Step();
}
template struct SubscribeThenStep<0xb2cf40u, 0x6c62f499u, 0x108u>;
template struct SubscribeThenStep<0xb5f1d0u, 0x6c62f499u, 0x68u>;

// Parent enable and two more steps, then subscribe.
template<unsigned Key, uint32_t Hash, unsigned TargetOffset> struct StepsThenSubscribe {
    char padding[TargetOffset];
    void* target;
    void BaseEnable();
    void Step1();
    void Step2();
    void OnEvent(const Event& event);
    void Enable();
};
template<unsigned Key, uint32_t Hash, unsigned TargetOffset> void StepsThenSubscribe<Key, Hash, TargetOffset>::Enable() {
    BaseEnable();
    Step1();
    Step2();
    SubscribeMember<Key>(this, &StepsThenSubscribe::OnEvent, target, Hash);
}
template struct StepsThenSubscribe<0x8c0ed0u, 0x6c62f499u, 0x198u>;

// Set active, subscribe to the target handle, then attach to its component.
struct AttachTarget68e830;
extern "C" void AttachTarget68e830_Attach(AttachTarget68e830* target, void* subscriber, bool flag);
struct TargetHandle68e830 { void* reserved; AttachTarget68e830* object; };
struct HandleSubscriber68e830 {
    char padding[0x38];
    uint32_t flags;                   // +0x38
    char padding_3c[0x14];
    TargetHandle68e830* target;       // +0x50
    void OnEvent(const Event& event);
    void Enable();
};
void HandleSubscriber68e830::Enable() {
    flags |= 2;
    SubscribeMember<0x68e830u>(this, &HandleSubscriber68e830::OnEvent, reinterpret_cast<void* const&>(target), 0x6c62f499u);
    if (target && target->object) AttachTarget68e830_Attach(target->object, this, false);
}

// A list of targets; each gets the same delegate.
struct TargetList { uint64_t count; void** items; };
template<unsigned Key, class Owner> __attribute__((always_inline)) inline void SubscribeMemberAll(Owner* owner, void (Owner::*member)(const Event&), const TargetList& targets, uint32_t hash) {
    typedef MemberDelegate<Key, Owner> D;
    D* d = new (SubscriptionBinding<Key>::Allocate(SubscriptionBinding<Key>::context + 0x50, 40)) D(member);
    DelegateHolder<Key> callback{d};
    Delegate* slot;
    __atomic_store_n(&slot, d, __ATOMIC_RELAXED);
    d->invoke = SubscriptionBinding<Key>::Invoke;
    d->owner = owner;
    for (void** it = targets.items, **end = it + targets.count; it != end; ++it) {
        void* target = *it;
        SubscriptionBinding<Key>::Process(SubscriptionBinding<Key>::manager, target, hash, &slot, 0);
    }
}
template<unsigned Key, uint32_t Hash, unsigned ListOffset> struct ListSubscriber {
    char padding[0x38];
    uint32_t flags;                   // +0x38
    char padding_3c[ListOffset - 0x3c];
    TargetList targets;
    void OnEvent(const Event& event);
    void Enable();
};
template<unsigned Key, uint32_t Hash, unsigned ListOffset> void ListSubscriber<Key, Hash, ListOffset>::Enable() {
    flags |= 2;
    SubscribeMemberAll<Key>(this, &ListSubscriber::OnEvent, targets, Hash);
}
template struct ListSubscriber<0xb1cff0u, 0x6c62f499u, 0x60u>;
template struct ListSubscriber<0xb1f5d0u, 0x6c62f499u, 0x60u>;
template struct ListSubscriber<0xb25f50u, 0x6c62f499u, 0x68u>;
template struct ListSubscriber<0xb4b470u, 0x6c62f499u, 0x60u>;

// The same followed by a step.
template<unsigned Key, uint32_t Hash, unsigned ListOffset> struct ListSubscriberThenStep {
    char padding[0x38];
    uint32_t flags;                   // +0x38
    char padding_3c[ListOffset - 0x3c];
    TargetList targets;
    void OnEvent(const Event& event);
    void Step();
    void Enable();
};
template<unsigned Key, uint32_t Hash, unsigned ListOffset> void ListSubscriberThenStep<Key, Hash, ListOffset>::Enable() {
    flags |= 2;
    SubscribeMemberAll<Key>(this, &ListSubscriberThenStep::OnEvent, targets, Hash);
    Step();
}
template struct ListSubscriberThenStep<0xba85d0u, 0x6c62f499u, 0xb0u>;

// Keeps a 32-bit copy of the target count first.
struct CountingListSubscriberb22230 {
    char padding[0x38];
    uint32_t flags;                   // +0x38
    char padding_3c[0x2c];
    TargetList targets;               // +0x68
    char padding_78[8];
    uint32_t pending;                 // +0x80
    void OnEvent(const Event& event);
    void Enable();
};
void CountingListSubscriberb22230::Enable() {
    flags |= 2;
    pending = targets.count;
    SubscribeMemberAll<0xb22230u>(this, &CountingListSubscriberb22230::OnEvent, targets, 0x6c62f499u);
}

// Marks itself subscribed afterwards.
struct FlaggedListSubscriberbc1570 {
    char padding[0x38];
    uint32_t flags;                   // +0x38
    char padding_3c[0x5c];
    TargetList targets;               // +0x98
    char padding_a8[0xd8];
    bool subscribed;                  // +0x180
    void OnEvent(const Event& event);
    void Enable();
};
void FlaggedListSubscriberbc1570::Enable() {
    flags |= 2;
    SubscribeMemberAll<0xbc1570u>(this, &FlaggedListSubscriberbc1570::OnEvent, targets, 0x7cd0fdf8u);
    subscribed = true;
}

// Subscriptions to a source component reached through a cached handle: a
// listener member gets the delegate, the source's +0x40 is the target (not
// null-checked), and a flag is set before the delegate goes away.
struct EventSource : onyx::Component { char padding_8[0x38]; void* events; };   // +0x40
struct MemberListener { void OnEvent(const Event& event); };
template<unsigned Key, uint32_t TypeId, uint32_t Hash, unsigned HandleOffset, unsigned ListenerOffset, unsigned FlagOffset> struct SourceSubscriber {
    char padding[0x38];
    uint32_t flags;                   // +0x38
    char padding_3c[HandleOffset - 0x3c];
    onyx::ComponentHandle* source;
    char padding_listener[ListenerOffset - HandleOffset - 8];
    MemberListener listener;
    char padding_flag[FlagOffset - ListenerOffset - 1];
    bool subscribed;
    void Enable();
};
template<unsigned Key, uint32_t TypeId, uint32_t Hash, unsigned HandleOffset, unsigned ListenerOffset, unsigned FlagOffset> void SourceSubscriber<Key, TypeId, Hash, HandleOffset, ListenerOffset, FlagOffset>::Enable() {
    flags |= 2;
    void* events = onyx::Get<EventSource, TypeId>(source)->events;
    MemberListener* owner = &listener;
    typedef MemberDelegate<Key, MemberListener> D;
    D* d = new (SubscriptionBinding<Key>::Allocate(SubscriptionBinding<Key>::context + 0x50, 40)) D(&MemberListener::OnEvent);
    DelegateHolder<Key> callback{d};
    Delegate* slot;
    __atomic_store_n(&slot, d, __ATOMIC_RELAXED);
    d->invoke = SubscriptionBinding<Key>::Invoke;
    d->owner = owner;
    SubscriptionBinding<Key>::Process(SubscriptionBinding<Key>::manager, events, Hash, &slot, 0);
    subscribed = true;
}
template struct SourceSubscriber<0xca1940u, 0x1aee3fd7u, 0x50e4bb86u, 0x58u, 0x68u, 0x78u>;

// The same with the handle and the listener in one member; the listener's
// address is taken before the handle is resolved. Mode as for EventSubscriber.
template<unsigned Gap> struct SourceLink {
    onyx::ComponentHandle* source;
    char padding[Gap];
    MemberListener listener;
};
template<unsigned Key, uint32_t TypeId, uint32_t Hash, unsigned LinkOffset, unsigned Gap, unsigned FlagOffset, unsigned Mode> struct LinkSubscriber {
    char padding[0x38];
    uint32_t flags;                   // +0x38
    char padding_3c[LinkOffset - 0x3c];
    SourceLink<Gap> link;
    char padding_flag[FlagOffset - LinkOffset - sizeof(SourceLink<Gap>)];
    bool subscribed;
    void BaseEnable();
    void Enable();
};
template<unsigned Key, uint32_t TypeId, uint32_t Hash, unsigned LinkOffset, unsigned Gap, unsigned FlagOffset, unsigned Mode> void LinkSubscriber<Key, TypeId, Hash, LinkOffset, Gap, FlagOffset, Mode>::Enable() {
    if (Mode & 1) flags |= 2;
    if (Mode & 2) BaseEnable();
    MemberListener* owner = &link.listener;
    void* events = onyx::Get<EventSource, TypeId>(link.source)->events;
    typedef MemberDelegate<Key, MemberListener> D;
    D* d = new (SubscriptionBinding<Key>::Allocate(SubscriptionBinding<Key>::context + 0x50, 40)) D(&MemberListener::OnEvent);
    DelegateHolder<Key> callback{d};
    Delegate* slot;
    __atomic_store_n(&slot, d, __ATOMIC_RELAXED);
    d->invoke = SubscriptionBinding<Key>::Invoke;
    d->owner = owner;
    SubscriptionBinding<Key>::Process(SubscriptionBinding<Key>::manager, events, Hash, &slot, 0);
    subscribed = true;
}
template struct LinkSubscriber<0xcd69c0u, 0x50d00692u, 0x333d72f2u, 0x58u, 0u, 0x70u, 1u>;
template struct LinkSubscriber<0xce01e0u, 0x3e148648u, 0x3e256805u, 0x50u, 8u, 0x70u, 1u>;
template struct LinkSubscriber<0x933d50u, 0x1dd19857u, 0x2f64d01du, 0x50u, 0u, 0x68u, 0u>;
template struct LinkSubscriber<0xac68f0u, 0x3e453135u, 0x2c330623u, 0x50u, 0u, 0x68u, 2u>;
