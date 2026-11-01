// The animation component actors keep a dependency on (type 0x29fbe438), as far
// as Pickup and BaseCharacter use it. Names are provisional.
#pragma once
#include "OnyxComponents.h"

namespace SPTG {

struct AnimationController : onyx::Component {
    virtual void Slot3(); virtual void Slot4(); virtual void Slot5(); virtual void Slot6(); virtual void Slot7();
    virtual void Slot8(); virtual void Slot9(); virtual void Slot10(); virtual void Slot11(); virtual void Slot12();
    virtual void Play(int animation, bool loop); virtual void Slot14();
    virtual void SetSpeed(float speed);    // slot 15
    virtual void Slot16(); virtual struct AnimationInstance* Current(); virtual void Slot18(); virtual void Slot19(); virtual void Slot20();
    virtual void SetPaused(bool paused);   // slot 21: sets bit 3 of the current animation's flags
};
constexpr uint32_t kAnimationControllerType = 0x29fbe438u;
// What's playing (slot 17), and the clip behind it (component type 0x0f67b22e).
struct AnimationInstance { char padding_0[0x50]; onyx::ComponentHandle* clip; };   // +0x50
struct AnimationClip : onyx::Component { char padding_8[0x70]; float length; };   // +0x78

}  // namespace SPTG
