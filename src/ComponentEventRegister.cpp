// A component's enable step: it builds a delegate to its own callback and appends
// it to a listener list, the counterpart of ComponentEventUnsubscribe.cpp. Some also
// set the active flag (0x2 in +0x38) or make a call first. The list lives in a global
// or a singleton, at an offset that depends on the owner class.
//
// The node is built on the stack and then copied into allocated memory: a link hooks
// itself between two neighbours, and copying one takes the original's place. Copying a
// delegate holder clones the delegate, which is why the code clones and frees once
// around the append.
//
// Working names and ABI views; Key labels an original function extent.
#include <stdint.h>
#include <stddef.h>
inline void* operator new(size_t, void* address) noexcept { return address; }
struct DecodeAllocator { virtual void Slot0(); virtual void Slot1(); virtual void* Allocate(size_t size); virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Free(void*); };
struct DecodeAllocators { char unknown[0x370]; DecodeAllocator* values[256]; };
extern "C" { extern DecodeAllocators* DecodeAllocatorManager; uint8_t DecodeAllocatorIndex(DecodeAllocators*, void*); }
struct Delegate {
    virtual ~Delegate();
    virtual Delegate* Clone();
    virtual bool Equals(const Delegate* other);
};
__attribute__((always_inline)) inline void DestroyDelegate(Delegate* d) {
    DecodeAllocators* m = DecodeAllocatorManager;
    DecodeAllocator* a = m->values[DecodeAllocatorIndex(m, d)];
    d->~Delegate();
    a->Free(d);
}
template<unsigned Key> struct ListenerBinding {
    static unsigned char* context;
    static void Invoke();
    static void* Allocate(void*, size_t);
};
#define S(n) virtual void S##n();
struct Listener {
    S(0) S(1) S(2) S(3) S(4) S(5) S(6) S(7) S(8) S(9) S(10) S(11) S(12) S(13) S(14)
    virtual void Notify();     // slot 15
    void Handle();
    void Prepare();
};
#undef S
template<unsigned Key> struct ListenerDelegate : Delegate {
    void (*invoke)(); Listener* owner; void (Listener::*member)();
    __attribute__((always_inline)) ListenerDelegate(Listener* o, void (Listener::*m)()) : owner(o), member(m) { invoke = ListenerBinding<Key>::Invoke; }
    ~ListenerDelegate();
};
// Copying a delegate holder clones the delegate.
struct DelegateRef {
    Delegate* value;
    __attribute__((always_inline)) explicit DelegateRef(Delegate* d) : value(d) {}
    __attribute__((always_inline)) DelegateRef(const DelegateRef& other) : value(other.value ? other.value->Clone() : nullptr) {}
    __attribute__((always_inline)) ~DelegateRef() { if (value) DestroyDelegate(value); }
};
// A link that hooks itself in between two neighbours; copying one takes its place.
struct ListenerLink {
    ListenerLink* prev; ListenerLink* next;
    __attribute__((always_inline)) ListenerLink(ListenerLink* before, ListenerLink* after) : prev(before), next(after) {
        before->next = this;
        after->prev = this;
    }
    __attribute__((always_inline)) ListenerLink(const ListenerLink& other) {
        ListenerLink* before = other.prev;
        ListenerLink* after = other.next;
        prev = before;
        next = after;
        before->next = this;
        after->prev = this;
    }
};
struct ListenerNode : ListenerLink {
    DelegateRef delegate;
    __attribute__((always_inline)) ListenerNode(ListenerLink* before, ListenerLink* after, const DelegateRef& value) : ListenerLink(before, after), delegate(value) {}
};
template<unsigned ListOffset> struct ListenerManager {
    char padding[ListOffset - 8];
    DecodeAllocator* allocator;
    ListenerLink head;
    uint64_t count;
    __attribute__((always_inline)) void Add(const DelegateRef& value) {
        ListenerLink* tail = head.prev;
        void* memory = allocator->Allocate(24);
        {
            ListenerNode temp(tail, &head, value);
            new (memory) ListenerNode(temp);
        }
        ++count;
    }
};
template<unsigned Key, unsigned ListOffset> struct GlobalManager { static ListenerManager<ListOffset>* value; };
template<unsigned Key, unsigned ListOffset> ListenerManager<ListOffset>* GetManagerSingleton(void* slot);
struct FollowUpTarget { void FollowUp(void* component); };
template<unsigned Key> FollowUpTarget* FollowUpOwner(void* component);
template<unsigned Key> struct ListenerComponent : Listener {
    char padding_8[0x30];
    uint32_t flags;           // +0x38
    template<bool Virtual, unsigned ListOffset> __attribute__((always_inline)) void Add(ListenerManager<ListOffset>* manager) {
        DelegateRef match(new (ListenerBinding<Key>::Allocate(ListenerBinding<Key>::context + 0x50, 40))
                              ListenerDelegate<Key>(this, Virtual ? &Listener::Notify : &Listener::Handle));
        manager->Add(match);
    }
    __attribute__((always_inline)) uint8_t& Byte(unsigned offset) { return reinterpret_cast<uint8_t*>(this)[offset]; }
    __attribute__((always_inline)) void*& Pointer(unsigned offset) { return *reinterpret_cast<void**>(reinterpret_cast<char*>(this) + offset); }
    template<bool Virtual, unsigned ListOffset> void ToGlobal() {
        flags |= 2;
        ListenerManager<ListOffset>* manager = GlobalManager<Key, ListOffset>::value;
        Add<Virtual, ListOffset>(manager);
    }
    template<bool Virtual, unsigned ListOffset, unsigned Member> void ToGlobalPrepared() {
        flags |= 2;
        if (Pointer(Member)) Prepare();
        Add<Virtual, ListOffset>(GlobalManager<Key, ListOffset>::value);
    }
    template<bool Virtual, unsigned ListOffset, unsigned Guard> void ToGlobalGuarded() {
        if (!Byte(Guard)) {
            Add<Virtual, ListOffset>(GlobalManager<Key, ListOffset>::value);
            Byte(Guard) = 1;
        }
        *reinterpret_cast<uint32_t*>(&Byte(0xb8)) = *reinterpret_cast<uint32_t*>(&Byte(0xbc));
        Byte(0xc5) = 0;
        Byte(0xc0) = 1;
    }
    // Before: 1 sets the active flag, 2 makes the follow-up call, 3 also sets a byte.
    template<bool Virtual, unsigned ListOffset, unsigned Offset, unsigned Before, unsigned Mark> void ToSingleton() {
        if (Before == 1) flags |= 2;
        if (Before >= 2) FollowUpOwner<Key>(this)->FollowUp(this);
        if (Before == 3) Byte(Mark) = 1;
        ListenerManager<ListOffset>* manager = GetManagerSingleton<Key, ListOffset>(reinterpret_cast<char*>(this) + Offset);
        Add<Virtual, ListOffset>(manager);
    }
};
template void ListenerComponent<0x69f3e0u>::ToGlobalPrepared<false, 0x140u, 0x50u>();  // Onyx::ActionPlayerDirector, Onyx::AnimationDirector, Onyx::BaseDirector
template void ListenerComponent<0x6b9320u>::ToGlobal<false, 0x140u>();  // Onyx::Flow::CatalogTable
template void ListenerComponent<0x6c8c60u>::ToGlobal<false, 0x140u>();  // Onyx::BaseCatalog, Onyx::BillboardCatalog, Onyx::Catalog<>
template void ListenerComponent<0x7066d0u>::ToSingleton<false, 0xd0u, 0x0u, 1u, 0u>();  // Onyx::DareAudio::PackageLoader
template void ListenerComponent<0x7af520u>::ToSingleton<false, 0x70u, 0x60u, 2u, 0u>();  // SPTG::PlayfieldCollisionSolver
template void ListenerComponent<0x7ba150u>::ToSingleton<false, 0x70u, 0x50u, 0u, 0u>();  // SPTG::PauseLayerConnector
template void ListenerComponent<0x895b90u>::ToSingleton<false, 0x70u, 0x60u, 0u, 0u>();  // SPTG::PadControllerRepository
template void ListenerComponent<0x897c70u>::ToSingleton<false, 0x70u, 0x60u, 2u, 0u>();  // SPTG::SPTG_HudDirectorPhase
template void ListenerComponent<0x8c4d30u>::ToSingleton<false, 0x70u, 0x50u, 0u, 0u>();  // SPTG::GrayScreenTrigger
template void ListenerComponent<0x8de6d0u>::ToSingleton<false, 0x70u, 0x68u, 3u, 0x5cu>();  // SPTG::GameplayFlow
template void ListenerComponent<0x92cf40u>::ToGlobal<true, 0x140u>();  // SPTG::SimpleMergeStrategy
template void ListenerComponent<0x938410u>::ToSingleton<false, 0x70u, 0x60u, 2u, 0u>();  // SPTG::SPTG_PressPhase
template void ListenerComponent<0x93a0a0u>::ToSingleton<false, 0x70u, 0x60u, 2u, 0u>();  // SPTG::SPTG_AnimatePhase
template void ListenerComponent<0x951630u>::ToSingleton<false, 0x70u, 0x60u, 2u, 0u>();  // SPTG::SPTG_AIDirectorPhase
template void ListenerComponent<0x9aa9d0u>::ToGlobalGuarded<false, 0x190u, 0xc4u>();
template void ListenerComponent<0xa73050u>::ToSingleton<false, 0x70u, 0x60u, 2u, 0u>();  // SPTG::ActorObjectUpdatePhase
