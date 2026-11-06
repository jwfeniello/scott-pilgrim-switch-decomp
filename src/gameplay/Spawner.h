// What spawns actors into a level, as the actors see it when they leave: each kind of actor has a catalog of
// spawners, found through LevelItemAccessor, and a spawner keeps the ones it has spawned.
#pragma once
#include <stdint.h>
#include "Level.h"
#include "OnyxComponents.h"
#include "OnyxFunction.h"

namespace SPTG {

struct UnspawnManager;
struct InteractiveObject;
struct Projectile;
struct ProjectileSpawnInfo;   // Archive.h
template<class T> struct SpawnedCallbackParam;

// SPTG::InteractiveObjectSpawnInfo (vtable 0x186a5c0, 0x30 bytes): where an interactive object spawner is to place an
// object. The spawner gives the record the next spawn id when it takes it.
struct InteractiveObjectSpawnInfo {
    InteractiveObjectSpawnInfo(uint32_t spawner, const onyx::Vector3& position)
        : id(-1), spawner(spawner), position(position), flag1c(0), flag2c(0) {}
    virtual ~InteractiveObjectSpawnInfo() {}
    int32_t id;                  // +0x8: -1 until the spawner numbers it
    uint32_t spawner;            // +0xc: the id of the spawner that is to place it
    onyx::Vector3 position;      // +0x10
    uint8_t flag1c;              // +0x1c
    uint64_t value20;            // +0x20
    int32_t value28;             // +0x28
    uint8_t flag2c;              // +0x2c
};
// The record each kind of spawner places from (ObjectSpawner's second template argument).
template<class T> struct SpawnInfoOf { typedef struct UnknownSpawnInfo Type; };
template<> struct SpawnInfoOf<InteractiveObject> { typedef InteractiveObjectSpawnInfo Type; };
template<> struct SpawnInfoOf<Projectile> { typedef ProjectileSpawnInfo Type; };

// Allocator that list nodes come from (virtual Allocate at slot 2).
struct NodeAllocator { virtual void Slot0(); virtual void Slot1(); virtual void* Allocate(uint64_t size); };
// Doubly linked list with its allocator stored in front of the sentinel.
template<class T> struct List {
    struct Node { Node* next; Node* previous; T value; };
    NodeAllocator* allocator;
    Node* first;        // sentinel next
    Node* last;         // sentinel previous
    uint64_t size;
    __attribute__((always_inline)) void PushFront(T value) {
        Node* old = first;
        Node* node = static_cast<Node*>(allocator->Allocate(sizeof(Node)));
        node->next = old;
        node->previous = reinterpret_cast<Node*>(&first);
        old->previous = node;
        first = node;
        node->value = value;
        ++size;
    }
};

struct Spawner : onyx::Component { void Remove(uint32_t key); };  // 0x690410
// SPTG::PickupSpawner, InteractiveObjectSpawner and the others: places actors and keeps the ones it spawned.
template<class T> struct ActorSpawner : onyx::Component {
    virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Slot6(); virtual void Slot7();
    virtual void Slot8(); virtual void Slot9(); virtual void Slot10(); virtual void Slot11(); virtual void Slot12();
    virtual void Slot13();
    // Slot 14: takes the record and places an actor from it; `spawned` (when it holds one) hears about the actor.
    virtual void Spawn(typename SpawnInfoOf<T>::Type& info, const onyx::Function<void(const SpawnedCallbackParam<T>&)>& spawned);
    char padding_8[0x48];
    Singleton<UnspawnManager> unspawn;       // +0x50
    onyx::ComponentHandle* spawner;          // +0x58
    char padding_60[0x50];
    List<T*> spawned;                        // +0xb0
    char padding_d0[0x8];
    uint32_t id;                             // +0xd8
};
// Onyx::Catalog<SPTG::PickupSpawner> and so on.
template<class T> struct ActorSpawnerCatalog : onyx::Component {
    char padding_8[0x78];
    uint64_t count;                          // +0x80
    char padding_88[0x8];
    ActorSpawner<T>** spawners;              // +0x90
    // The spawner with this id, which has to be there.
    __attribute__((always_inline)) ActorSpawner<T>* SpawnerWithId(uint32_t id) {
        ActorSpawner<T>** i = spawners;
        while ((*i)->id != id) ++i;
        return *i;
    }
    // Has the spawner the record names place an actor from it, with no callback.
    __attribute__((always_inline)) void Spawn(typename SpawnInfoOf<T>::Type& info) {
        onyx::Function<void(const SpawnedCallbackParam<T>&)> none;
        SpawnerWithId(info.spawner)->Spawn(info, none);
    }
};

}  // namespace SPTG
