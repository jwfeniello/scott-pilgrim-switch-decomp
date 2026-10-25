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

// Slot 100 (0x971090): the jump. Entry plays animation 2, or with a mount 53 or
// 69 depending on the mount (the mount plays 109). The rise (2, 53, 69) is
// followed by the air animation (3, 54, 70; mount 110) and, once falling, the
// fall (4, 55, 71; mount 111); when the fall animation is done the character
// moves to slot 102. Landing while not rising switches to slot 104.
int BaseCharacter::State100(int event) {
    switch (event) {
    case kStateUpdate:
        switch (animation) {
        case 2: case 53: case 69:
            if (AnimationDone()) {
                if (Slot36Check()) {
                    if (BaseCharacter* mount = Mount()) {
                        PlayAnimation(mount->Slot49() == 0 ? 54 : 70, 1, 0, 1.0f);
                        if (Slot36Check()) static_cast<BaseCharacter*>(mountHandle->object)->PlayAnimation(110, 1, 0, 1.0f);
                    }
                } else {
                    PlayAnimation(3, 1, 0, 1.0f);
                }
            }
            break;
        case 3: case 54: case 70:
            if (motion.z < 0.0f) {
                if (Slot36Check()) {
                    if (BaseCharacter* mount = Mount()) {
                        PlayAnimation(mount->Slot49() == 0 ? 55 : 71, 0, 0, 1.0f);
                        if (Slot36Check()) static_cast<BaseCharacter*>(mountHandle->object)->PlayAnimation(111, 0, 0, 1.0f);
                    }
                } else {
                    PlayAnimation(4, 0, 0, 1.0f);
                }
            }
            break;
        case 4: case 55: case 71:
            if (AnimationDone()) {
                states.Transition(State102Ptr());
                return kStateParentTookOver;
            }
            break;
        }
        if (IsOnGround() && motion.z <= 0.0f) {
            states.Transition(State104Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        if (Slot36Check()) {
            if (BaseCharacter* mount = Mount()) {
                PlayAnimation(mount->Slot49() == 0 ? 53 : 69, 0, 0, 1.0f);
                if (Slot36Check()) static_cast<BaseCharacter*>(mountHandle->object)->PlayAnimation(109, 0, 0, 1.0f);
            }
        } else {
            PlayAnimation(2, 0, 0, 1.0f);
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

// Slot 116 (0x972f30): entry notifies the holder (+0x488, or +0x4e0 unless the
// holder mode is 1): it runs its slot 68 and, if it receives messages, gets
// message 2 from this character. This character gets message 26 if it receives
// messages itself. Then action mode 5, event 0x2c285404, all motion stopped and
// animation 16.
int BaseCharacter::State116(int event) {
    switch (event) {
    case kStateExit:
    case kStateEvent3:
    case kStateUpdate:
        return kStateHandled;
    case kStateEnter: {
        BaseCharacter* other = holder ? static_cast<BaseCharacter*>(holder->object) : nullptr;
        if (other && holderMode != 1) other = holder2 ? static_cast<BaseCharacter*>(holder2->object) : nullptr;
        if (other) {
            other->Slot68();
            if (MessageReceiver* receiver = Cast<MessageReceiver>(other)) {
                CharacterMessage message(2, this);
                message.receiver = receiver;
                receiver->OnMessage(&message);
            }
        }
        if (IsA(MessageReceiver::kType)) {
            CharacterMessage message(26, nullptr);
            message.receiver = this;
            static_cast<MessageReceiver*>(this)->OnMessage(&message);
        }
        actionMode = 5;
        onyx::SendEvent<0x2c285404u>(event750Callback, event750Target);
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(16, 0, 0, 1.0f);
        return kStateHandled;
    }
    }
    return kStateUnhandled;
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

// Slot 130 (0x974590): a slide. Entry stops when the horizontal speed is under
// the slide threshold, otherwise sets the target speed to the slide speed in
// the facing direction. With a mount, the mount gets slot 77's value at +0x18c
// and slot 35, and plays animation 101 while this character plays 45 or 61.
// Exit stops all motion; once the animation is done, back to slot 96.
int BaseCharacter::State130(int event) {
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        if (__builtin_fabsf(motion.x) < slideThreshold) {
            motion = onyx::Vector3::Zero();
        } else {
            ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject);
            float direction = onyx::Get<ActorFlags, 0x2eae5813u>(actor->flags)->facingLeft ? -1.0f : 1.0f;
            motionTarget.x = slideSpeed * direction;
        }
        if (Slot36Check()) {
            float value = Slot77();
            BaseCharacter* mounted = static_cast<BaseCharacter*>(mountHandle->object);
            mounted->value18c = value;
            mounted->Slot35(false, this);
            if (BaseCharacter* mount = Mount()) {
                PlayAnimation(mount->Slot49() == 0 ? 45 : 61, 0, 0, 1.0f);
                if (Slot36Check()) static_cast<BaseCharacter*>(mountHandle->object)->PlayAnimation(101, 0, 0, 1.0f);
            }
        }
        return kStateHandled;
    case kStateExit:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
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
