// States of the game's character, enemy, boss, striker and player classes, a third file beside GameStates2.cpp.
// Names are provisional.
#include "Striker.h"
#include "BossClasses.h"
#include "EnemyClasses.h"

namespace SPTG {

// ControllablePlayer slot 163 (0x9872c0): walking. Entry plays the walk (on a mount, the rider's walk and the mount's
// animation 98); each frame the stick sets the speed along both axes, a dash goes to state 161, letting go to standing
// (state 96), and 3 s of idling to state 229.
// Not yet matched: the two products kept across SpeedScale() sit in s8 (the original's in s9, d9 saved) and the first
// lands in s1 rather than s0; everything else matches.
int ControllablePlayer::State163(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate: {
        if (idleTime > 3.0f) {
            idleTime = 0.0f;
            flag13fa = 1;
            states.Transition(State229Ptr());
            result = kStateParentTookOver;
            break;
        }
        result = Call993350();
        if (result == kStateParentTookOver) break;
        onyx::Vector3 depth;
        onyx::Vector3 move;
        if (ReadMoveInput(input, &move)) {
            ReadMoveInput(input, &depth);
            motion.y = depth.y * jumpBackSpeed * SpeedScale();
            TurnToMoveInput();
            uint64_t dash = input->held & 0x300000000ull;
            if (persistentData.Get()->players[playerIndex].value154) {
                if (dash) {
                    states.Transition(State161Ptr());
                    result = kStateParentTookOver;
                    break;
                }
            } else if ((input->value1b0 & 1) | dash | (input->value1b0 & 2)) {
                states.Transition(State161Ptr());
                result = kStateParentTookOver;
                break;
            }
            motion.x = move.x * jumpBackSpeed * SpeedScale();
            if (!IsOnGround()) {
                states.Transition(State102Ptr());
                result = kStateParentTookOver;
                break;
            }
            result = Slot255(kStateUpdate);
            if (result == kStateParentTookOver) break;
            if (Call9936a0() != kStateParentTookOver) {
                result = kStateHandled;
            } else {
                states.AssertOwner(this);
                result = kStateParentTookOver;
            }
            break;
        }
        states.Transition(State96Ptr());
        result = kStateParentTookOver;
        break;
    }
    case kStateEnter:
        value13b8 = value11f4;
        value334 = 0.0f;
        value1bc = 0.0f;
        motionTarget.x = 0.0f;
        motionTarget.y = 0.0f;
        if (IsMounted()) {
            if (BaseCharacter* mount = Mount()) {
                PlayAnimation(mount->Slot49() ? 58 : 42, true, false, 1.0f);
                if (IsMounted()) static_cast<BaseCharacter*>(mountHandle->object)->PlayAnimation(98, true, false, 1.0f);
            }
        } else {
            PlayAnimation(7, true, false, 1.0f);
        }
        break;
    case kStateExit:
        value13b8 = 0;
        if (!flag13f0) motion.y = 0.0f;
        break;
    case kStateEvent3:
        break;
    default:
        result = kStateUnhandled;
        break;
    }
    return result;
}

// RoxyMirror slot 96 (0xa3a920): standing, as her reflection. Entry hides the shadow; each frame, once the animation is
// over and the actor's flags show it visible with bit 0 set, the flags' blink-on event is sent.
int RoxyMirror::State96(int event) {
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            ActorFlags* shown = onyx::Find<ActorFlags, 0x2eae5813u>(onyx::Find<ActorObject, 0x6492d61du>(actorObject)->flags);
            if (shown->visible && (shown->componentFlags & 1)) {
                ActorFlags* flags = onyx::Find<ActorFlags, 0x2eae5813u>(onyx::Find<ActorObject, 0x6492d61du>(actorObject)->flags);
                onyx::SendEvent<0x44174b43u>(flags->blinkOnCallback, flags->blinkOnTarget);
            }
        }
        return kStateHandled;
    case kStateEnter: {
        ShadowAnimatedObject* effect = shadowHandle ? static_cast<ShadowAnimatedObject*>(shadowHandle->object) : nullptr;
        if (effect) effect->visible = 0;
        return kStateHandled;
    }
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);   // keeps the exit case apart from event 3's
        return kStateHandled;
    }
}

// Boss slot 248 (0xa1d0b0): pushed back. Entry stops, slides backwards at slot 170's speed, plays animation 7 with the AI
// mode at 7 and the facing mode at 2. Each frame the timer runs; in the air it falls (state 102), past +0xcb0 it raises
// +0xd25 and goes to state 244, otherwise on a playfield with +0x128 set the slide keeps going forwards. Exit sets the
// AI mode back to 1 and the facing mode to 3.
int Boss::State248(int event) {
    switch (event) {
    case kStateUpdate:
        value7ac += Move_FrameDelta;
        if (!IsOnGround()) {
            states.Transition(State102Ptr());
            return kStateParentTookOver;
        }
        if (value7ac > valueCb0) {
            flagD25 = 1;
            states.Transition(State244Ptr());
            return kStateParentTookOver;
        }
        {
            PlayfieldCollision* field = static_cast<PlayfieldCollision*>(onyx::Get<ActorObject, 0x6492d61du>(actorObject)->playfield->object);
            if ((field->IsA(PlayfieldCollision::kType) ? field : nullptr)->flag128) motion.x = FacingSign() * Slot170();
        }
        return kStateHandled;
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        aiMode = 7;
        motion.x = -(FacingSign() * Slot170());
        PlayAnimation(7, true, false, 1.0f);
        value7ac = 0.0f;
        mode87c = 2;
        return kStateHandled;
    case kStateExit:
        aiMode = 1;
        mode87c = 3;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

}  // namespace SPTG
