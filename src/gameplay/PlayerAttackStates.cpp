// SPTG::ControllablePlayer's attack states: on entry each starts one of the
// player's Attack members and plays an animation; when the animation ends the
// player returns to State96. The animation numbers and attacks come from the
// original; which move each state is has not been established.
#include "BaseCharacter.h"

namespace SPTG {

// Starts the attack, plays the animation, then stops moving horizontally. The
// exit case is listed last and asserts (see docs/GAME_CLASSES.md#matching-state-handlers).
int ControllablePlayer::State183(int event) {
    switch (event) {
        case kStateUpdate:
            if (AnimationDone()) {
                states.Transition(State96Ptr());
                return kStateParentTookOver;
            }
            return kStateHandled;
        case kStateEnter:
            StartAttack(&attackA40, false, 1, nullptr);
            PlayAnimation(26, false, true, 1.0f);
            motion.x = 0.0f;
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

int ControllablePlayer::State171(int event) {
    int result = kStateHandled;
    switch (event) {
        case kStateUpdate:
            if (AnimationDone()) {
                states.Transition(State96Ptr());
                return kStateParentTookOver;
            }
            if (Slot255(kStateUpdate) == kStateParentTookOver) return kStateParentTookOver;
            result = kStateHandled;
            break;
        case kStateEnter:
            PlayAnimation(23, false, true, 1.0f);
            break;
        case kStateEvent3:
            break;
        default:
            result = kStateUnhandled;
            break;
        case kStateExit:
            states.AssertOwner(this);
            break;
    }
    return result;
}

// Tells the component at +0x480 first.
int ControllablePlayer::State201(int event) {
    switch (event) {
        case kStateUpdate:
            if (AnimationDone()) {
                states.Transition(State96Ptr());
                return kStateParentTookOver;
            }
            return kStateHandled;
        case kStateEnter:
            if (handle480 && handle480->object) static_cast<BaseCharacter*>(handle480->object)->Slot42();
            StartAttack(&attackD58, false, 1, nullptr);
            PlayAnimation(25, false, true, 1.0f);
            return kStateHandled;
        case kStateExit:
            states.AssertOwner(this);
            return kStateHandled;
        case kStateEvent3:
            return kStateHandled;
        default:
            return kStateUnhandled;
    }
}

int ControllablePlayer::State215(int event) {
    switch (event) {
        case kStateUpdate:
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        case kStateEnter:
        case kStateExit:
        case kStateEvent3:
            return kStateHandled;
        default:
            return kStateUnhandled;
    }
}

int ControllablePlayer::State219(int event) {
    switch (event) {
        case kStateUpdate:
            if (AnimationDone()) {
                states.Transition(State96Ptr());
                return kStateParentTookOver;
            }
            return kStateHandled;
        case kStateEnter:
            motion = onyx::Vector3::Zero();
            StartAttack(&attack1018, false, 1, nullptr);
            PlayAnimation(40, false, false, 1.0f);
            return kStateHandled;
        case kStateExit:
            states.AssertOwner(this);
            return kStateHandled;
        case kStateEvent3:
            return kStateHandled;
        default:
            return kStateUnhandled;
    }
}

int ControllablePlayer::State221(int event) {
    switch (event) {
        case kStateUpdate:
            if (AnimationDone()) {
                states.Transition(State96Ptr());
                return kStateParentTookOver;
            }
            return kStateHandled;
        case kStateEnter:
            motion = onyx::Vector3::Zero();
            motionTarget = onyx::Vector3::Zero();
            StartAttack(&attack1120, false, 1, nullptr);
            PlayAnimation(199, false, false, 1.0f);
            return kStateHandled;
        case kStateExit:
            states.AssertOwner(this);
            return kStateHandled;
        case kStateEvent3:
            return kStateHandled;
        default:
            return kStateUnhandled;
    }
}

// Ends by refilling +0x160 and +0x32c to their limits.
int ControllablePlayer::State227(int event) {
    switch (event) {
        case kStateUpdate:
            if (AnimationDone()) {
                actionMode = 0;
                health = MaxHealth();
                guts = MaxGuts();
                states.Transition(State96Ptr());
                return kStateParentTookOver;
            }
            return kStateHandled;
        case kStateEnter:
            motion = onyx::Vector3::Zero();
            motionTarget = onyx::Vector3::Zero();
            PlayAnimation(201, false, false, 1.0f);
            return kStateHandled;
        case kStateExit:
            states.AssertOwner(this);
            return kStateHandled;
        case kStateEvent3:
            return kStateHandled;
        default:
            return kStateUnhandled;
    }
}

int ControllablePlayer::State239(int event) {
    switch (event) {
        case kStateUpdate:
            if (AnimationDone()) {
                states.Transition(State96Ptr());
                return kStateParentTookOver;
            }
            return kStateHandled;
        case kStateEnter:
            motion = onyx::Vector3::Zero();
            PlayAnimation(96, false, false, 1.0f);
            return kStateHandled;
        case kStateExit:
            states.AssertOwner(this);
            return kStateHandled;
        case kStateEvent3:
            return kStateHandled;
        default:
            return kStateUnhandled;
    }
}

int ControllablePlayer::State253(int event) {
    switch (event) {
        case kStateUpdate:
            if (AnimationDone()) {
                states.Transition(State96Ptr());
                return kStateParentTookOver;
            }
            return kStateHandled;
        case kStateEnter:
            flag3ba = 1;
            PlayAnimation(198, false, false, 1.0f);
            StartAttack(&attackF68, true, 1, nullptr);
            value14f4 = value14f0;
            return kStateHandled;
        case kStateExit:
            flag3ba = 0;
            return kStateHandled;
        case kStateEvent3:
            return kStateHandled;
        default:
            return kStateUnhandled;
    }
}

}  // namespace SPTG
