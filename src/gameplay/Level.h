// Level services that actors reach through their singleton dependency at
// +0x90 (getter 0x7725e0). Names are provisional.
#pragma once
#include "OnyxComponents.h"

namespace SPTG {

// A singleton dependency slot; Get resolves the service on first use (out of line).
// Object an actor is attached to; its ID decides whether the actor stays held.
struct Holder { uint32_t key; uint32_t id; };
extern Holder NoHolder;   // 0x191b6c0

template<class T> struct Singleton { onyx::ComponentHandle* handle; T* Get(); };

struct LevelItemAccessor {
    char padding[0x68];
    onyx::ComponentHandle* projectileSpawners;  // +0x68, Catalog<ProjectileSpawner>
    onyx::ComponentHandle* pickupSpawners;   // +0x70, Catalog<PickupSpawner>
    onyx::ComponentHandle* interactiveSpawners;  // +0x78, Catalog<InteractiveObjectSpawner>
    char padding_80[0x8];
    onyx::ComponentHandle* enemySpawners;    // +0x88, Catalog<EnemySpawner>
    onyx::ComponentHandle* interactiveObjects;  // +0x90, Catalog<InteractiveObject>
    onyx::ComponentHandle* enemies;          // +0x98, Catalog<Enemy>
    onyx::ComponentHandle* players;          // +0xa0, Catalog<ControllablePlayer>
};
static_assert(__builtin_offsetof(LevelItemAccessor, players) == 0xa0, "LevelItemAccessor players");

}  // namespace SPTG
