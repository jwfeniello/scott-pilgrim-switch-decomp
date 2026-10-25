// SPTG::BaseCharacter's own states, shared by enemies, bosses and players (see
// docs/GAME_CLASSES.md#basecharacter-states). Names are provisional.
#include "BaseCharacter.h"

namespace SPTG {

// Slot 138 (0x975030): plays animation 116 on entry and clears the action mode
// on exit; once on the ground, switches to the state at slot 96.
int BaseCharacter::State138(int event) {
    switch (event) {
    case kStateUpdate:
        if (IsOnGround()) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        PlayAnimation(116, 0, 0, 1.0f);
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        actionMode = 0;
        return kStateHandled;
    }
}

// Slot 114 (0x972dd0): entry sets action mode 9, stops all motion, plays
// animation 16 and clears the flag at +0x130; exit clears the action mode.
int BaseCharacter::State114(int event) {
    switch (event) {
    case kStateUpdate:
        return kStateHandled;
    case kStateEnter:
        actionMode = 9;
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(16, 0, 0, 1.0f);
        flag130 = 0;
        return kStateHandled;
    case kStateExit:
        actionMode = 0;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// Slot 134 (0x974e00): on entry with a mount (slot 36), tells the mount (slot 35),
// plays animation 48 or 64 depending on the mount's slot 49, and has the mount
// play animation 104. Once the animation is done, switches to slot 102; once on
// the ground, to slot 104.
int BaseCharacter::State134(int event) {
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            states.Transition(State102Ptr());
            return kStateParentTookOver;
        }
        if (IsOnGround()) {
            states.Transition(State104Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        if (Mount() && Slot36Check()) {
            static_cast<BaseCharacter*>(mountHandle->object)->Slot35(false, this);
            if (BaseCharacter* mount = Mount()) {
                PlayAnimation(mount->Slot49() == 0 ? 48 : 64, 0, 0, 1.0f);
                if (Slot36Check()) static_cast<BaseCharacter*>(mountHandle->object)->PlayAnimation(104, 0, 0, 1.0f);
            }
        }
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 144 (0x9757a0): stops all motion on entry; once the animation is done
// and the flag at +0x748 is set, switches to the state at slot 96.
int BaseCharacter::State144(int event) {
    switch (event) {
    case kStateUpdate:
        if (AnimationDone() && flag748) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

}  // namespace SPTG
