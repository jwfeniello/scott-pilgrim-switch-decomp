// Complete byte-matched component operations. Field/type names are ABI views.
// Generic component-handle resolver recovered from complete original FDEs.
// Structure and helper names are inferred. Component type IDs come from
// original instructions; class labels are attached separately only where RTTI
// proves them.
#include <stddef.h>
#include <stdint.h>

#ifndef COMPONENT_ACCESSOR_ID
#define COMPONENT_ACCESSOR_ID 0x21edbc92u
#endif

namespace ComponentAccess {
struct Object {
  virtual ~Object();
  virtual void EnsureReady();
};
struct Handle {
  void *padding;
  Object *object;
  uint32_t references;
};
struct LookupEntry {
  void *padding;
  Handle *handle;
};
struct Allocator {
  virtual void Slot0();
  virtual void Slot1();
  virtual void Slot2();
  virtual void Slot3();
  virtual void Slot4();
  virtual void Slot5();
  virtual void Free(void *);
};
struct AllocatorManager {
  char padding[0x370];
  Allocator *allocators[256];
};
struct TrackingNode {
  void *padding;
  Handle *key;
  char data[0x18];
  TrackingNode *next;
};
struct TrackingMap {
  void *mutex;
  char padding[0x20];
  TrackingNode *free_head;
  TrackingNode *buckets[4003];
};
static_assert(offsetof(Handle, object) == 8, "handle object");
static_assert(offsetof(Handle, references) == 0x10, "handle references");
static_assert(offsetof(AllocatorManager, allocators) == 0x370,
              "allocator lookup");
static_assert(offsetof(TrackingNode, next) == 0x28, "listener next link");
static_assert(offsetof(TrackingMap, free_head) == 0x28, "listener free list");
static_assert(offsetof(TrackingMap, buckets) == 0x30, "listener hash buckets");
extern "C" {
extern void *Accessor_Resolver;
extern AllocatorManager *Accessor_Allocators;
extern TrackingMap *Accessor_Tracking;
LookupEntry *Accessor_Find(void *, uint32_t);
void Accessor_Resolve(void *, uint32_t, Handle **);
void Accessor_Assign(Handle **, const Handle *const *);
uint8_t Accessor_AllocatorIndex(AllocatorManager *, void *);
void Accessor_Lock(void *);
void Accessor_Unlock(void *);
}

struct MapLock {
  TrackingMap *map;
  __attribute__((always_inline)) MapLock(TrackingMap *value) : map(value) {
    Accessor_Lock(value->mutex);
  }
  __attribute__((always_inline)) ~MapLock() noexcept(false) {
    if (map)
      Accessor_Unlock(map->mutex);
  }
};

static __attribute__((always_inline)) inline Allocator *
allocator_for(void *object) {
  AllocatorManager *manager = Accessor_Allocators;
  return manager->allocators[Accessor_AllocatorIndex(manager, object)];
}

static __attribute__((always_inline)) inline void dispose(Handle *handle) {
  Object *object = handle->object;
  if (object) {
    Allocator *allocator = allocator_for(object);
    object->~Object();
    allocator->Free(object);
  }
  Allocator *allocator = allocator_for(handle);
  {
    TrackingMap *map = Accessor_Tracking;
    MapLock lock(map);
    TrackingNode **bucket =
        &map->buckets[(reinterpret_cast<uintptr_t>(handle) >> 2) % 4003];
    TrackingNode *previous = nullptr;
    TrackingNode *node = *bucket;
    while (node) {
      TrackingNode *next = node->next;
      if (node->key == handle) {
        node->next = map->free_head;
        map->free_head = node;
        *(previous ? &previous->next : bucket) = next;
      } else {
        previous = node;
      }
      node = next;
    }
  }
  allocator->Free(handle);
}

struct TemporaryReference {
  // Keep the owned reference independent from the slot passed to assignment.
  // The original retains it in a register across that call and during unwind.
  Handle *handle;
  Handle **temporary_slot;
  __attribute__((always_inline)) TemporaryReference(Handle *value,
                                                    Handle **slot)
      : handle(value), temporary_slot(slot) {
    if (value)
      __atomic_fetch_add(&value->references, 1, __ATOMIC_RELAXED);
  }
  __attribute__((always_inline)) ~TemporaryReference() {
    if (handle &&
        __atomic_sub_fetch(&handle->references, 1, __ATOMIC_RELAXED) == 0) {
      dispose(handle);
      *temporary_slot = nullptr;
    }
  }
};

__attribute__((always_inline)) inline void AssignOwned(Handle **target,
                                                       Handle *const *input) {
  Handle *value = *input;
  Handle *temporary = value;
  TemporaryReference reference(value, &temporary);
  Accessor_Assign(target, &temporary);
}
template <unsigned Offset>
__attribute__((noinline)) void CopyComponentReference(void *self,
                                                      Handle *const *input) {
  AssignOwned(reinterpret_cast<Handle **>(static_cast<char *>(self) + Offset),
              input);
}
} // namespace ComponentAccess
namespace ComponentAccess {
template void CopyComponentReference<80>(void *, Handle *const *);
template void CopyComponentReference<88>(void *, Handle *const *);
template void CopyComponentReference<104>(void *, Handle *const *);
template void CopyComponentReference<112>(void *, Handle *const *);
template void CopyComponentReference<144>(void *, Handle *const *);
template void CopyComponentReference<152>(void *, Handle *const *);
template void CopyComponentReference<184>(void *, Handle *const *);
} // namespace ComponentAccess
