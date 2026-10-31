// A component's disable step: it finds the delegate its enable step registered
// on a listener list, removes every equal entry, then optionally clears the
// component's active flag (0x2 in +0x38, the counterpart of ComponentEventSubscribe.cpp)
// or makes a follow-up call. The list lives in a global, a member or a singleton,
// at an offset that depends on the owner class.
//
// The node holds its delegate in a member with a destructor, and the link is a
// base shared with the list head; the original's exception table shows this. The
// delegate's destruction unwinds to a terminate pad (destructors are noexcept) and
// the node's free to the cleanup pad. One cleanup pad also means `prev` and `next`
// are declared before the loop rather than inside its body.
//
// Working names and ABI views; Key labels an original function extent.
#include <stdint.h>
#include <stddef.h>
inline void* operator new(size_t, void* address) noexcept { return address; }
struct DecodeAllocator { virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Free(void*); };
struct DecodeAllocators { char unknown[0x370]; DecodeAllocator* values[256]; };
extern "C" { extern DecodeAllocators* DecodeAllocatorManager; uint8_t DecodeAllocatorIndex(DecodeAllocators*, void*); }
__attribute__((always_inline)) inline void FreeObject(void* p) {
    DecodeAllocators* m = DecodeAllocatorManager;
    m->values[DecodeAllocatorIndex(m, p)]->Free(p);
}
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
struct Listener { virtual void Notify(); void Handle(); };
template<unsigned Key> struct ListenerDelegate : Delegate {
    void (*invoke)(); Listener* owner; void (Listener::*member)();
    __attribute__((always_inline)) ListenerDelegate(Listener* o, void (Listener::*m)()) : owner(o), member(m) { invoke = ListenerBinding<Key>::Invoke; }
    ~ListenerDelegate();
};
struct DelegateRef {
    Delegate* value;
    __attribute__((always_inline)) ~DelegateRef() { if (value) DestroyDelegate(value); }
};
struct ListenerLink { ListenerLink* prev; ListenerLink* next; };
struct ListenerNode : ListenerLink { DelegateRef delegate; };
template<unsigned ListOffset> struct ListenerManager {
    char padding[ListOffset];
    ListenerLink head;
    uint64_t count;
};
template<unsigned Key, unsigned ListOffset> struct GlobalManager { static ListenerManager<ListOffset>* value; };
template<unsigned Key, unsigned Offset> struct SingletonGet { char padding[Offset]; void* handle; };
template<unsigned Key, unsigned ListOffset> ListenerManager<ListOffset>* GetManagerSingleton(void* slot);
struct FollowUpTarget { void FollowUp(void* component); };
template<unsigned Key> FollowUpTarget* FollowUpOwner(void* component);
template<unsigned Key> struct ListenerComponent : Listener {
    char padding_8[0x30];
    uint32_t flags;           // +0x38
    template<bool Virtual, unsigned ListOffset> __attribute__((always_inline)) void Remove(ListenerManager<ListOffset>* manager) {
        ListenerLink* prev;
        ListenerLink* next;
        DelegateRef match{new (ListenerBinding<Key>::Allocate(ListenerBinding<Key>::context + 0x50, 40))
                              ListenerDelegate<Key>(this, Virtual ? &Listener::Notify : &Listener::Handle)};
        for (ListenerLink* link = manager->head.next; &manager->head != link; link = link->next) {
            ListenerNode* node = static_cast<ListenerNode*>(link);
            if (node->delegate.value->Equals(match.value)) {
                prev = node->prev;
                next = node->next;
                prev->next = next;
                next->prev = prev;
                node->~ListenerNode();
                if (node) FreeObject(node);
                --manager->count;
                link = next;
            }
        }
    }
    template<unsigned After> __attribute__((always_inline)) void Finish() {
        if (After == 1) flags &= ~2u;
        if (After == 2) FollowUpOwner<Key>(this)->FollowUp(this);
    }
    template<bool Virtual, unsigned ListOffset, unsigned After> void FromGlobal() { Remove<Virtual, ListOffset>(GlobalManager<Key, ListOffset>::value); Finish<After>(); }
    template<bool Virtual, unsigned ListOffset, unsigned Offset, unsigned After> void FromMember() {
        ListenerManager<ListOffset>* manager = *reinterpret_cast<ListenerManager<ListOffset>**>(reinterpret_cast<char*>(this) + Offset);
        if (manager) Remove<Virtual, ListOffset>(manager);
        Finish<After>();
    }
    template<bool Virtual, unsigned ListOffset, unsigned Offset, unsigned After> void FromSingleton() {
        ListenerManager<ListOffset>* manager = GetManagerSingleton<Key, ListOffset>(reinterpret_cast<char*>(this) + Offset);
        Remove<Virtual, ListOffset>(manager);
        Finish<After>();
    }
};
template void ListenerComponent<0x69f630u>::FromGlobal<false, 0x140u, 1u>();  // Onyx::ActionPlayerDirector, Onyx::AnimationDirector, Onyx::BaseDirector
template void ListenerComponent<0x6b9ea0u>::FromGlobal<false, 0x140u, 1u>();  // Onyx::Flow::CatalogTable
template void ListenerComponent<0x6c8ea0u>::FromGlobal<false, 0x140u, 1u>();  // Onyx::BaseCatalog, Onyx::BillboardCatalog, Onyx::Catalog<>
template void ListenerComponent<0x77b5c0u>::FromSingleton<false, 0x98u, 0x88u, 1u>();  // SPTG::WorldMapNavigator
template void ListenerComponent<0x7ba390u>::FromSingleton<false, 0x70u, 0x50u, 0u>();  // SPTG::PauseLayerConnector
template void ListenerComponent<0x895dd0u>::FromSingleton<false, 0x70u, 0x60u, 0u>();  // SPTG::PadControllerRepository
template void ListenerComponent<0x8c4f70u>::FromSingleton<false, 0x70u, 0x50u, 0u>();  // SPTG::GrayScreenTrigger
template void ListenerComponent<0x8f0040u>::FromSingleton<false, 0x70u, 0x88u, 0u>();  // SPTG::ActionTrigger
template void ListenerComponent<0xc48580u>::FromGlobal<true, 0x140u, 0u>();
