// Onyx::Catalog<T> and Onyx::Director<T> share one member (slot 13 of a
// catalog, slot 14 of a director): it rebuilds the list of T components from
// the component registry. With the holder's key at 1 it takes every component
// in the registry; otherwise only those filed under the filter's keys. A
// component joins when it is active (slot 6) and, unless the registry holds T
// itself, passes IsA(T) (slot 12). The list grows by half its capacity.
// Working names and ABI views; Key labels an original function extent, Type is
// T's component type and ListOffset where the list sits (0x70 in catalogs,
// 0x68 in directors, 0x90 in two others).
#include <stdint.h>
struct Allocator {
    virtual void Slot0(); virtual void Slot1();
    virtual void* Allocate(uint32_t size);
    virtual void Slot3(); virtual void Slot4(); virtual void Slot5();
    virtual void Free(void*);
};
struct AllocatorManager { char padding[0x370]; Allocator* allocators[256]; };
extern "C" AllocatorManager* Accessor_Allocators;
extern "C" uint8_t Accessor_AllocatorIndex(AllocatorManager*, void*);
__attribute__((always_inline)) inline Allocator* AllocatorFor(void* object) {
    AllocatorManager* manager = Accessor_Allocators;
    return manager->allocators[Accessor_AllocatorIndex(manager, object)];
}
struct Holder { uint32_t key; uint32_t id; };
extern Holder NoHolder;
template<class T> struct Vector {
    Allocator* allocator; uint64_t capacity; uint64_t size; T* data;
};

// A list of pointers (0x28 bytes; the data is at +0x20).
template<class T> struct PointerList {
    Allocator* allocator;
    uint64_t capacity;
    uint64_t size;
    void* unknown18;
    T* data;
    __attribute__((always_inline)) T* Grow(uint64_t tail, uint64_t index, uint64_t required) {
        T* old = data;
        void* fresh = uint32_t(required) ? allocator->Allocate(uint32_t(required) * uint32_t(sizeof(T))) : nullptr;
        capacity = required;
        T* result = static_cast<T*>(fresh);
        if (old && fresh) {
            if (fresh != old) __builtin_memcpy(fresh, old, index * sizeof(T));
            uint64_t rest = size - index;
            if (rest) __builtin_memmove(static_cast<T*>(fresh) + tail - rest, old + index, rest * sizeof(T));
            if (fresh != old) AllocatorFor(old)->Free(old);
            else result = old;
        }
        return result;
    }
    __attribute__((always_inline)) void Reserve(uint64_t count) {
        if (capacity < count) {
            uint64_t grown = capacity + (capacity >> 1);
            data = Grow(count, size, grown >= count ? grown : count);
        }
    }
    __attribute__((always_inline)) void PushBack(T item) {
        Reserve(size + 1);
        uint64_t at = size;
        data[at] = item;
        size = at + 1;
    }
};

struct Component {
    virtual void Slot0(); virtual void Slot1(); virtual void Slot2(); virtual void Slot3(); virtual void Slot4(); virtual void Slot5();
    virtual bool IsActive();   // slot 6
    virtual void Slot7(); virtual void Slot8(); virtual void Slot9(); virtual void Slot10(); virtual void Slot11();
    virtual bool IsA(uint32_t type);   // slot 12
};
struct RegistryNode {
    uint32_t key;
    char padding_4[0x14];
    uint64_t count;          // +0x18
    char padding_20[0x8];
    Component** items;       // +0x28
    RegistryNode* next;      // +0x30
};
struct Registry {
    char padding[0x498];
    uint32_t bucketCount;    // +0x498
    RegistryNode** buckets;  // +0x4a0
    char padding_4a8[0x8];
    uint32_t type;           // +0x4b0
};

template<unsigned Key, uint32_t Type, unsigned ListOffset> struct Collection {
    char padding[0x40];
    Holder* holder;                    // +0x40
    char padding_48[ListOffset - 0x48];
    PointerList<Component*> items;     // +ListOffset
    Registry* registry;                // +ListOffset+0x28
    void Refresh(const Vector<uint32_t>* filter);
};
template<unsigned Key, uint32_t Type, unsigned ListOffset>
void Collection<Key, Type, ListOffset>::Refresh(const Vector<uint32_t>* filter) {
    items.size = 0;
    const Holder* h = holder ? holder : &NoHolder;
    if (h->key == 1) {
        Registry* r = registry;
        if (!r->buckets || !r->bucketCount) return;
        RegistryNode* node = nullptr;
        for (uint32_t i = 0; i < r->bucketCount; ++i) {
            if ((node = r->buckets[i])) break;
        }
        if (!node) return;
        for (;;) {
            items.Reserve(items.size + node->count);
            Component** it = node->items;
            if (r->type == Type) {
                for (Component** end = it + node->count; it != end; ++it) {
                    Component* c = *it;
                    if (c->IsActive()) items.PushBack(c);
                }
            } else {
                for (Component** end = it + node->count; it != end; ++it) {
                    Component* c = *it;
                    if (c && c->IsA(Type) && c->IsActive()) items.PushBack(c);
                }
            }
            if (!r->buckets) break;
            RegistryNode* next = node->next;
            if (!next) {
                uint32_t count = r->bucketCount;
                uint32_t i = node->key % count;
                for (;;) {
                    if (++i >= count) return;
                    if ((next = r->buckets[i])) break;
                }
            }
            node = next;
        }
    } else {
        for (const uint32_t *key = filter->data, *end = key + filter->size; key != end; ++key) {
            Registry* r = registry;
            if (!r->buckets) continue;
            RegistryNode* node = r->buckets[*key % r->bucketCount];
            while (node && node->key != *key) node = node->next;
            if (!node) continue;
            items.Reserve(items.size + node->count);
            bool exact = r->type == Type;
            Component** it = node->items;
            if (exact) {
                for (Component** end = it + node->count; it != end; ++it)
                    if ((*it)->IsActive()) items.PushBack(*it);
            } else {
                for (Component** end = it + node->count; it != end; ++it)
                    if ((*it)->IsActive() && *it && (*it)->IsA(Type)) items.PushBack(*it);
            }
        }
    }
}
#define CATALOG_REFRESH(Key, Type, ListOffset) template struct Collection<Key, Type, ListOffset>;
#include "catalog_refresh_instances.inc"
#undef CATALOG_REFRESH
