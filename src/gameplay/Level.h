// Level services that actors reach through their singleton dependency at
// +0x90 (getter 0x7725e0). Names are provisional.
#pragma once
#include "OnyxComponents.h"

namespace SPTG {

// A singleton dependency slot; Get resolves the service on first use (out of line).
template<class T> struct Singleton { onyx::ComponentHandle* handle; T* Get(); };

struct LevelItemAccessor {
    char padding[0x70];
    onyx::ComponentHandle* pickupSpawners;   // +0x70, Catalog<PickupSpawner>
    char padding_78[0x28];
    onyx::ComponentHandle* players;          // +0xa0, Catalog<ControllablePlayer>
};
static_assert(__builtin_offsetof(LevelItemAccessor, players) == 0xa0, "LevelItemAccessor players");

}  // namespace SPTG
