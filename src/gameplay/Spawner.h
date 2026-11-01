// What spawns actors into a level, as the actors see it when they leave: each kind of actor has a catalog of
// spawners, found through LevelItemAccessor, and a spawner keeps the ones it has spawned.
#pragma once
#include <stdint.h>
#include "Level.h"
#include "OnyxComponents.h"

namespace SPTG {

struct UnspawnManager;

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
};

}  // namespace SPTG
