// SPTG::LaserBeams (vtable 0x187a970, 78 slots): beams that hurt whoever touches them. ActionEvents.cpp has a view of
// the same class for Update, and ComponentSerialize.cpp one for slot 4. Names are provisional.
#pragma once
#include "BaseCharacter.h"
#include "Archive.h"

namespace SPTG {

struct LaserBeams : AnimatedAiActor {
    void AttackLanded(AnimatedAiActor* target) override;                     // slot 39
    char padding_1e8[0x20];
    EventSlot finishedEvent;         // +0x208: sent once `elapsed` passes `limit`
    EventSlot hitEvent;              // +0x220: sent when an attack lands
    float elapsed;                   // +0x238
    bool running;                    // +0x23c
    char padding_23d[0x3];
    float limit;                     // +0x240
};
static_assert(__builtin_offsetof(LaserBeams, limit) == 0x240, "LaserBeams limit");

}  // namespace SPTG
