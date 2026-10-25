// SPTG::BaseCharacter's own states, shared by enemies, bosses and players (see
// docs/GAME_CLASSES.md#basecharacter-states). Names are provisional.
#include "BaseCharacter.h"
#include "ComponentTypes.h"

namespace SPTG {

// Slot 136 (0x974f90): hides the effect while active.
int BaseCharacter::State136(int event) {
    switch (event) {
    case kStateUpdate:
        return kStateHandled;
    case kStateEnter: {
        CharacterEffect* effect = effectHandle ? static_cast<CharacterEffect*>(effectHandle->object) : nullptr;
        if (effect) effect->visible = 0;
        return kStateHandled;
    }
    case kStateExit: {
        CharacterEffect* effect = effectHandle ? static_cast<CharacterEffect*>(effectHandle->object) : nullptr;
        if (effect) effect->visible = 1;
        return kStateHandled;
    }
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

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

// Slot 98 (0x970f00): stops all motion, sets action mode 1 and plays animation
// 12 on entry; exit clears the action mode. Leaving the ground switches to the
// state at slot 102.
int BaseCharacter::State98(int event) {
    switch (event) {
    case kStateUpdate:
        if (!IsOnGround()) {
            states.Transition(State102Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        actionMode = 1;
        PlayAnimation(12, 0, 0, 1.0f);
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        actionMode = 0;
        return kStateHandled;
    }
}

// Slot 102 (0x9713b0): the airborne state. Entry restores the saved depth
// values and plays animation 5, or with a mount (slot 36) animation 56 or 72
// depending on the mount, with the mount playing animation 112. Landing switches
// to the state at slot 104.
int BaseCharacter::State102(int event) {
    switch (event) {
    case kStateUpdate:
        if (IsOnGround()) {
            states.Transition(State104Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        motionTarget.z = savedZ;
        motionC4 = savedC4;
        if (Slot36Check()) {
            if (BaseCharacter* mount = Mount()) {
                PlayAnimation(mount->Slot49() == 0 ? 56 : 72, 1, 0, 1.0f);
                if (Slot36Check()) static_cast<BaseCharacter*>(mountHandle->object)->PlayAnimation(112, 1, 0, 1.0f);
            }
        } else {
            PlayAnimation(5, 1, 0, 1.0f);
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

// Slot 112 (0x972b70): the recovery state. Entry stops all motion, plays
// animation 16 and sets action mode 6; exit clears it. Animation 146 is followed
// by animation 16. Once the timer passes slot 81's limit, a character with
// health moves to slot 122. Otherwise slot 148 picks slot 124 or 122, or else
// slot 156 picks slot 114 or 116.
int BaseCharacter::State112(int event) {
    switch (event) {
    case kStateUpdate:
        if (animation == 146 && AnimationDone()) PlayAnimation(16, 0, 0, 1.0f);
        timer330 += Move_FrameDelta;
        if (timer330 > Slot81()) {
            if (value160 > 0.0f) {
                states.Transition(State122Ptr());
            } else {
                bool second;
                if (Slot148(&second)) {
                    if (second) states.Transition(State124Ptr());
                    else states.Transition(State122Ptr());
                } else if (Slot156()) {
                    states.Transition(State114Ptr());
                } else {
                    states.Transition(State116Ptr());
                }
            }
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(16, 0, 0, 1.0f);
        actionMode = 6;
        timer330 = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
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

// Slot 118 (0x973230): the stun state. Entry starts the timer from the stun
// duration, sets action mode 2, stops all motion and runs slot 86; exit clears
// the action mode. When the timer runs out, switches to the state at slot 96.
int BaseCharacter::State118(int event) {
    switch (event) {
    case kStateUpdate:
        timer330 -= Move_FrameDelta;
        if (timer330 < 0.0f) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        timer330 = stunDuration;
        actionMode = 2;
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        Slot86();
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        actionMode = 0;
        return kStateHandled;
    }
}

// Slot 120 (0x9733e0): a second stun state. Entry starts the timer from the
// second stun duration, sets action mode 4, stops all motion and loops animation
// 18; exit clears the action mode. When the timer runs out, switches to slot 96.
int BaseCharacter::State120(int event) {
    switch (event) {
    case kStateUpdate:
        timer330 -= Move_FrameDelta;
        if (timer330 < 0.0f) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        timer330 = stunDuration2;
        actionMode = 4;
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(18, 1, 0, 1.0f);
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        actionMode = 0;
        return kStateHandled;
    }
}

// Slot 122 (0x9735a0): stops all motion, plays animation 27, sets action mode 7
// and raises the flag at +0x3ba; exit clears both. Once the animation is done,
// switches to the state at slot 96.
int BaseCharacter::State122(int event) {
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
        PlayAnimation(27, 0, 1, 1.0f);
        actionMode = 7;
        flag3ba = 1;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        actionMode = 0;
        flag3ba = 0;
        return kStateHandled;
    }
}

// Slot 124 (0x973740): as slot 122, setting the action mode first; once the
// animation is done, switches to the state at slot 120.
int BaseCharacter::State124(int event) {
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            states.Transition(State120Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        actionMode = 7;
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(27, 0, 1, 1.0f);
        flag3ba = 1;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        actionMode = 0;
        flag3ba = 0;
        return kStateHandled;
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

// Slot 140 (0x975100): landing after a throw. The first update after entry is
// skipped. On the ground in animation 171 or 172, the character slides at the
// throw speed in its facing direction, bounces with the restitution and
// restores the ground depth values; with +0x339 set it also records its
// position and passes +0x340 to slot 69. Then it switches to slot 142.
// Not yet byte-identical, so not credited: the original schedules the fall
// speed load and the two position stores differently.
int BaseCharacter::State140(int event) {
    switch (event) {
    case kStateUpdate:
        if (!skipFrame && IsOnGround() && (animation == 171 || animation == 172)) {
            float fall = motion.z;
            float speed = throwSpeed;
            ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject);
            bool left = onyx::Get<ActorFlags, 0x2eae5813u>(actor->flags)->facingLeft;
            motionTarget.x = 0.0f;
            motionTarget.y = 0.0f;
            motion.x = speed * (left ? -1.0f : 1.0f);
            motionTarget.z = groundZ;
            motionC4 = groundC4;
            motion.z = -(fall * restitution);
            if (flag339) {
                ActorObject* object = onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject);
                onyx::Transform* transform = onyx::Get<onyx::Transform, onyx::kTransform>(object->transform);
                positionX = transform->position.x;
                positionYZ = transform->position.y + transform->position.z;
                Slot69(block340, nullptr);
                flag339 = 0;
            }
            states.Transition(State142Ptr());
            return kStateParentTookOver;
        }
        skipFrame = 0;
        return kStateHandled;
    case kStateEnter:
        skipFrame = 1;
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
