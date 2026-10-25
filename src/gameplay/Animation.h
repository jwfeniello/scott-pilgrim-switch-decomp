// The animation component actors keep a dependency on (type 0x29fbe438), as far
// as Pickup and BaseCharacter use it. Names are provisional.
#pragma once
#include "OnyxComponents.h"

namespace SPTG {

struct AnimationControl : onyx::Component {
    virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Slot6(); virtual void Slot7();
    virtual void Slot8(); virtual void Slot9(); virtual void Slot10(); virtual void Slot11(); virtual void Slot12();
    virtual void Slot13(); virtual void Slot14();
    virtual void SetSpeed(float speed);    // slot 15
    virtual void Slot16(); virtual void Slot17(); virtual void Slot18(); virtual void Slot19(); virtual void Slot20();
    virtual void SetPaused(bool paused);   // slot 21: sets bit 3 of the current animation's flags
};
constexpr uint32_t kAnimationControlType = 0x29fbe438u;

}  // namespace SPTG
