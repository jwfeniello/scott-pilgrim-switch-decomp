// Working names and field views; original full class definitions are unknown.
// Reconstructed two-slot reference release; original method names are unknown.
// Atomics, allocator ownership and mutex-protected tracking cleanup follow original bytes.
#include <stdint.h>
#include <stddef.h>

namespace SingleRelease {
struct Object {
    virtual ~Object();
    virtual void EnsureReady();
};
struct Handle { void* padding; Object* object; uint32_t references; };
struct LookupEntry { void* padding; Handle* handle; };
struct Allocator {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2();
    virtual void Slot3(); virtual void Slot4(); virtual void Slot5();
    virtual void Free(void*);
};
struct AllocatorManager { char padding[0x370]; Allocator* allocators[256]; };
struct TrackingNode {
    void* padding;
    Handle* key;
    char data[0x18];
    TrackingNode* next;
};
struct TrackingMap {
    void* mutex;
    char padding[0x20];
    TrackingNode* free_head;
    TrackingNode* buckets[4003];
};
static_assert(offsetof(Handle, object) == 8, "handle object");
static_assert(offsetof(Handle, references) == 0x10, "handle references");
static_assert(offsetof(AllocatorManager, allocators) == 0x370, "allocator lookup");
static_assert(offsetof(TrackingNode, next) == 0x28, "listener next link");
static_assert(offsetof(TrackingMap, free_head) == 0x28, "listener free list");
static_assert(offsetof(TrackingMap, buckets) == 0x30, "listener hash buckets");
extern "C" {
extern AllocatorManager* Accessor_Allocators;
extern TrackingMap* Accessor_Tracking;
uint8_t Accessor_AllocatorIndex(AllocatorManager*, void*);
void Accessor_Lock(void*) noexcept;
void Accessor_Unlock(void*) noexcept;
}

struct MapLock {
    TrackingMap* map;
    __attribute__((always_inline)) MapLock(TrackingMap* value) : map(value) {
        Accessor_Lock(value->mutex);
    }
    __attribute__((always_inline)) ~MapLock() noexcept {
        if (map) Accessor_Unlock(map->mutex);
    }
};

static __attribute__((always_inline)) inline Allocator* allocator_for(void* object) {
    AllocatorManager* manager = Accessor_Allocators;
    return manager->allocators[Accessor_AllocatorIndex(manager, object)];
}

static __attribute__((always_inline)) inline void remove_tracking(TrackingMap* map,Handle* value) {
                        MapLock lock(map);
                        TrackingNode** bucket=&map->buckets[(reinterpret_cast<uintptr_t>(value)>>2)%4003];
                        TrackingNode* previous=nullptr;
                        TrackingNode* node=*bucket;
                        while(node) {
                            TrackingNode* next=node->next;
                            if(node->key==value) {
                                node->next=map->free_head;
                                map->free_head=node;
                                *(previous?&previous->next:bucket)=next;
                            } else previous=node;
                            node=next;
                        }

}
struct Slot {
    Handle* handle;
    __attribute__((always_inline)) ~Slot() noexcept { Release(); }
    __attribute__((always_inline)) void Release() {
        if(handle && __atomic_sub_fetch(&handle->references,1,__ATOMIC_RELAXED)==0) {
            if(handle) {
                Object* object=handle->object;
                if(object) {
                    Allocator* allocator=allocator_for(object);
                    object->~Object();
                    allocator->Free(object);
                }
                if(handle) {
                    Handle* value=handle;
                    Allocator* allocator=allocator_for(value);
                    remove_tracking(Accessor_Tracking,value);
                    allocator->Free(value);
                }
                handle=nullptr;
            }
        }
    }
};

template<unsigned Key,unsigned Offset> struct ReleaseBase { char unknown[Offset-8]; virtual ~ReleaseBase(); };
template<unsigned Key,unsigned Offset> struct ReleaseSingle : ReleaseBase<Key,Offset> {
    Slot slot;
    ~ReleaseSingle() noexcept {}
};
}
#define SINGLE_REFERENCE_DESTRUCTOR(Key,Offset) template SingleRelease::ReleaseSingle<Key,Offset>::~ReleaseSingle();
#include "single_reference_destructor_instances.inc"
#undef SINGLE_REFERENCE_DESTRUCTOR
