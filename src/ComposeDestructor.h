// Working names and ABI views; complete original declarations remain unknown.
// Onyx::Component::Compose destructors releasing a component handle.
#include "gameplay/OnyxComponents.h"
// Drops one reference to a handle stored in a member; the member is re-read
// after each external call and cleared at the end.
// In a noexcept caller the unlock shares the caller's terminate handler; elsewhere
// it runs inside a noexcept helper, as the lock guard's destructor would.
template<bool OwnHandler> __attribute__((always_inline)) inline void UnlockFor(onyx::TrackingMap* map) {
    if (OwnHandler) onyx::UnlockTracking(map); else Accessor_Unlock(map->mutex);
}
template<bool OwnHandler> __attribute__((always_inline)) inline void ReleaseMemberHandle(onyx::ComponentHandle*& member) {
    if (member && __atomic_sub_fetch(&member->references, 1, __ATOMIC_RELAXED) == 0) {
        if (member) {
            if (onyx::Component* object = member->object) {
                onyx::Allocator* allocator = onyx::AllocatorFor(object);
                object->~Component();
                allocator->Free(object);
            }
            if (onyx::ComponentHandle* handle = member) {
            onyx::Allocator* allocator = onyx::AllocatorFor(handle);
            {
                onyx::TrackingMap* map = Accessor_Tracking;
                Accessor_Lock(map->mutex);
                onyx::TrackingNode** bucket = &map->buckets[(reinterpret_cast<uintptr_t>(handle) >> 2) % 4003];
                onyx::TrackingNode* node = *bucket;
                // The bucket load proves the map non-null, so the empty-bucket
                // path unlocks without the guard's null check.
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
                UnlockFor<OwnHandler>(map);
            unlocked:;
            }
            allocator->Free(handle);
            }
            member = nullptr;
        }
    }
}
template<unsigned Key, unsigned MemberOffset> struct ComposeBase { virtual ~ComposeBase(); char data[MemberOffset - 8]; };
template<unsigned Key, unsigned Size> struct ComposeMember { ~ComposeMember(); char data[Size]; };
template<unsigned Key> struct ComposeHandle {
    onyx::ComponentHandle* handle;
    __attribute__((always_inline)) ~ComposeHandle() { ReleaseMemberHandle<false>(handle); }
};
template<unsigned Key, unsigned MemberOffset, unsigned HandleOffset> struct Compose : ComposeBase<Key, MemberOffset> {
    ComposeMember<Key, HandleOffset - MemberOffset> member;
    ComposeHandle<Key> reference;
    ~Compose() override;
};
template<unsigned Key, unsigned M, unsigned H> Compose<Key, M, H>::~Compose() {}
#define COMPOSE_DESTRUCTOR(Key, M, H) template struct Compose<Key, M, H>;
