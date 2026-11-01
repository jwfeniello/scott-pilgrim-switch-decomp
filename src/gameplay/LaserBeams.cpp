// SPTG::LaserBeams. See LaserBeams.h.
#include "LaserBeams.h"

namespace SPTG {

// Sends the hit event, then holds like any actor.
void LaserBeams::AttackLanded(AnimatedAiActor* target) {
    onyx::SendEvent<0x5a2c40c0u>(hitEvent.callback, hitEvent.target);
    HoldForLandedAttack();
}

}  // namespace SPTG
