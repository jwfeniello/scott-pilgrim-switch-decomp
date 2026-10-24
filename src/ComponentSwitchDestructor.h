// Working names and ABI views; complete original declarations remain unknown.
// Component switch owner destructors that clear the target handle and notify listeners.
#include "gameplay/OnyxComponents.h"
// Change record passed to the listener notification (0xbf6e80); see ComponentSelection.cpp.
struct Change { onyx::Component* current; onyx::Component* previous; };
// The original compiler treats the record as not captured: in 18 functions it
// tail-calls after passing a stack record here, which LLVM only allows for a
// nocapture argument. noescape states that same fact for the declaration.
extern "C" void NotifyChange(onyx::TrackingMap*, onyx::ComponentHandle*, unsigned, const Change& change __attribute__((noescape)));
// Disposes a handle inside a noexcept destructor: the unlock shares the
// destructor's terminate handler instead of a separate noexcept helper.
__attribute__((always_inline)) inline void DisposeHandleInDestructor(onyx::ComponentHandle* handle) {
    onyx::Component* object = handle->object;
    if (object) {
        onyx::Allocator* allocator = onyx::AllocatorFor(object);
        object->~Component();
        allocator->Free(object);
    }
    onyx::Allocator* allocator = onyx::AllocatorFor(handle);
    {
        onyx::TrackingMap* map = Accessor_Tracking;
        Accessor_Lock(map->mutex);
        onyx::TrackingNode** bucket = &map->buckets[(reinterpret_cast<uintptr_t>(handle) >> 2) % 4003];
        onyx::TrackingNode* node = *bucket;
        if (!node) goto unlock;
        {
            onyx::TrackingNode* previous = nullptr;
            do {
                onyx::TrackingNode* next = node->next;
                if (node->key == handle) {
                    node->next = map->free_head;
                    map->free_head = node;
                    *(previous ? &previous->next : bucket) = next;
                } else {
                    previous = node;
                }
                node = next;
            } while (node);
        }
        if (!map) goto unlocked;
    unlock:
        Accessor_Unlock(map->mutex);
    unlocked:;
    }
    allocator->Free(handle);
}
// Holds one extra reference for the duration of the notification.
struct HandleReference {
    onyx::ComponentHandle* handle;
    __attribute__((always_inline)) explicit HandleReference(onyx::ComponentHandle* h) : handle(h) { __atomic_add_fetch(&h->references, 1, __ATOMIC_RELAXED); }
    __attribute__((always_inline)) ~HandleReference() { if (__atomic_sub_fetch(&handle->references, 1, __ATOMIC_RELAXED) == 0) DisposeHandleInDestructor(handle); }
};
template<unsigned Key> struct SwitchBase { virtual ~SwitchBase(); char data[0x48]; };
template<unsigned Key, unsigned Size> struct SwitchMember { ~SwitchMember(); char data[Size]; };
template<unsigned Key, unsigned TargetOffset> struct SwitchMiddle : SwitchBase<Key> {
    SwitchMember<Key, TargetOffset - 0x50> member;
    ~SwitchMiddle() override {}
};
// Clears the switched component's target and notifies listeners of the change.
template<unsigned Key, uint32_t Hash, unsigned TargetOffset> struct ComponentSwitchOwner : SwitchMiddle<Key, TargetOffset> {
    onyx::ComponentHandle* target;
    ~ComponentSwitchOwner() override;
};
template<unsigned Key, uint32_t Hash, unsigned TargetOffset> ComponentSwitchOwner<Key, Hash, TargetOffset>::~ComponentSwitchOwner() {
    if (onyx::ComponentHandle* handle = target) {
        HandleReference reference(handle);
        onyx::Component* previous = handle->object;
        handle->object = nullptr;
        Change change{nullptr, previous};
        NotifyChange(Accessor_Tracking, handle, Hash, change);
    }
}
#define COMPONENT_SWITCH_DESTRUCTOR(Key, Hash, TargetOffset) template struct ComponentSwitchOwner<Key, Hash, TargetOffset>;
