// Onyx component references and Transform layout recovered from complete matches.
// Field and method names are provisional; offsets, call order and value semantics
// are fixed by the original code. Type IDs and class names: ComponentTypes.h.
#pragma once
#include <stdint.h>
#include "ComponentTypes.h"

namespace onyx {

// Vector3 has a user-provided copy constructor (returned through memory) and a
// defaulted copy assignment; both forms are visible in the original code.
struct Vector3 {
    float x, y, z;
    Vector3() {}
    Vector3(float x_, float y_, float z_) : x(x_), y(y_), z(z_) {}
    Vector3(const Vector3& o) : x(o.x), y(o.y), z(o.z) {}
    Vector3& operator=(const Vector3&) = default;
    static Vector3 Zero() { static const Vector3 value(0.0f, 0.0f, 0.0f); return value; }
    Vector3 operator-(const Vector3& o) const {
        Vector3 result;
        result.x = x - o.x;
        result.y = y - o.y;
        result.z = z - o.z;
        return result;
    }
    Vector3 operator-() const { return Vector3(-x, -y, -z); }
    Vector3 operator*(float s) const { return Vector3(x * s, y * s, z * s); }
    Vector3 operator/(float s) const { return Vector3(x / s, y / s, z / s); }
    float LengthSquared() const { return x * x + y * y + z * z; }
    float Length() const { return __builtin_sqrtf(LengthSquared()); }
};

struct Component {
    virtual ~Component();
    virtual void EnsureReady();
};
// A shared handle to a component instance; owners cache it per component type.
struct ComponentHandle { void* reserved; Component* object; uint32_t references; };

}  // namespace onyx

extern "C" void* Accessor_Resolver;
extern "C" void Accessor_Resolve(void* resolver, uint32_t type, onyx::ComponentHandle** cache);

namespace onyx {

// Resolve a cached reference for an immediate member access.
template<class T, uint32_t TypeId> __attribute__((always_inline)) inline T* Get(ComponentHandle*& cache) {
    Component* object = cache ? cache->object : nullptr;
    if (!object) {
        Accessor_Resolve(Accessor_Resolver, TypeId, &cache);
        cache->object->EnsureReady();
        object = cache->object;
    }
    return static_cast<T*>(object);
}

// Resolve a cached reference; the result is reread and may be null.
template<class T, uint32_t TypeId> __attribute__((always_inline)) inline T* Find(ComponentHandle*& cache) {
    Component* object = cache ? cache->object : nullptr;
    if (!object) {
        Accessor_Resolve(Accessor_Resolver, TypeId, &cache);
        cache->object->EnsureReady();
        object = cache ? cache->object : nullptr;
    }
    return static_cast<T*>(object);
}

// Allocation manager and handle tracking used when the last reference goes away.
struct Allocator {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2();
    virtual void Slot3(); virtual void Slot4(); virtual void Slot5();
    virtual void Free(void*);
};
struct AllocatorManager { char padding[0x370]; Allocator* allocators[256]; };
struct TrackingNode { void* padding; ComponentHandle* key; char data[0x18]; TrackingNode* next; };
struct TrackingMap { void* mutex; char padding[0x20]; TrackingNode* free_head; TrackingNode* buckets[4003]; };
struct Transform;
}  // namespace onyx

extern "C" onyx::AllocatorManager* Accessor_Allocators;
extern "C" onyx::TrackingMap* Accessor_Tracking;
extern "C" uint8_t Accessor_AllocatorIndex(onyx::AllocatorManager*, void*);
extern "C" void Accessor_Lock(void*);
extern "C" void Accessor_Unlock(void*);

namespace onyx {

__attribute__((always_inline)) inline Allocator* AllocatorFor(void* object) {
    AllocatorManager* manager = Accessor_Allocators;
    return manager->allocators[Accessor_AllocatorIndex(manager, object)];
}
// The unlock runs in a noexcept context, as a lock guard's destructor would.
__attribute__((always_inline)) inline void UnlockTracking(TrackingMap* map) noexcept { Accessor_Unlock(map->mutex); }
// Destroys the component, unregisters the handle and frees both allocations.
__attribute__((always_inline)) inline void DisposeHandle(ComponentHandle* handle) {
    Component* object = handle->object;
    if (object) {
        Allocator* allocator = AllocatorFor(object);
        object->~Component();
        allocator->Free(object);
    }
    Allocator* allocator = AllocatorFor(handle);
    {
        TrackingMap* map = Accessor_Tracking;
        Accessor_Lock(map->mutex);
        TrackingNode** bucket = &map->buckets[(reinterpret_cast<uintptr_t>(handle) >> 2) % 4003];
        TrackingNode* node = *bucket;
        // The bucket load proves the map non-null, so the original's empty-bucket
        // path unlocks without the guard's null check; the goto keeps that shape.
        if (!node) goto unlock;
        {
            TrackingNode* previous = nullptr;
            do {
                TrackingNode* next = node->next;
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
        UnlockTracking(map);
    unlocked:;
    }
    allocator->Free(handle);
}
// Drops an owned reference held in a member slot.
__attribute__((always_inline)) inline void ResetHandle(ComponentHandle*& slot) {
    ComponentHandle* handle = slot;
    slot = nullptr;
    if (handle && __atomic_sub_fetch(&handle->references, 1, __ATOMIC_RELAXED) == 0) DisposeHandle(handle);
}

struct Transform;
}  // namespace onyx

extern "C" void Transform_Invalidate(onyx::Transform* transform);

namespace onyx {

// Onyx::Transform (component type 0x022fe74a).
struct Transform : Component {
    char header[0x50];
    Vector3 vector58, vector64, vector70;
    Vector3 position;   // +0x7c; Z at +0x84 is the depth used by side-scrolling code
    uint8_t dirty;      // +0x88, set by every position write
    void* hierarchy;    // +0x90, children/listeners invalidated after a write

    Vector3 Position() const { return position; }
    Vector3 Vector58() const { return vector58; }
    Vector3 Vector64() const { return vector64; }
    void SetPosition(const Vector3& value) {
        dirty = 1;
        position = value;
        if (hierarchy) Transform_Invalidate(this);
    }
};
static_assert(__builtin_offsetof(Transform, vector58) == 0x58, "Transform vector58");
static_assert(__builtin_offsetof(Transform, position) == 0x7c, "Transform position");
static_assert(__builtin_offsetof(Transform, dirty) == 0x88, "Transform dirty");
static_assert(__builtin_offsetof(Transform, hierarchy) == 0x90, "Transform hierarchy");

const uint32_t kTransform = onyx_types::type_022fe74a;

}  // namespace onyx
