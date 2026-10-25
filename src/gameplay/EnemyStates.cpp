// SPTG::Enemy's own states (see docs/GAME_CLASSES.md#enemy-states). Overrides
// of BaseCharacter states run the base state first and stop when it has already
// switched states. Names are provisional.
#include "ComponentTypes.h"
#include "Enemy.h"

namespace SPTG {

// Slot 100 (0x9cef60): after the base state, on entry, when slot 36 holds,
// runs slot 31 and plays animation 2.
int Enemy::State100(int event) {
    int result = BaseCharacter::State100(event);
    if (result == kStateParentTookOver) return result;
    if (event != kStateEnter) return kStateUnhandled;
    if (Slot36Check()) {
        Slot31Action();
        PlayAnimation(2, 0, 0, 1.0f);
    }
    return kStateHandled;
}

// Slot 102 (0x9cf000): as slot 100, with animation 5 looping.
int Enemy::State102(int event) {
    if (BaseCharacter::State102(event) == kStateParentTookOver) return kStateParentTookOver;
    if (event != kStateEnter) return kStateUnhandled;
    if (Slot36Check()) {
        Slot31Action();
        PlayAnimation(5, 1, 0, 1.0f);
    }
    return kStateHandled;
}

// Slot 126 (0x9cf670): after the base state, handles update and entry, and
// rolls the random chance on exit.
int Enemy::State126(int event) {
    int result = BaseCharacter::State126(event);
    if (result == kStateParentTookOver) return result;
    switch (event) {
    case kStateUpdate:
    case kStateEnter:
        return kStateHandled;
    case kStateExit:
        RollChance();
        return kStateHandled;
    }
    return kStateUnhandled;
}

// Slot 136 (0x9cf6e0): hides the effect on entry and shows it again on exit.
// Once the partner has been held for the partner delay, the partner reacts
// (reaction 2), plays the recovery animation for the one it was in, and is
// released; then the enemy switches to the state at slot 100.
int Enemy::State136(int event) {
    switch (event) {
    case kStateEnter: {
        CharacterEffect* effect = effectHandle ? static_cast<CharacterEffect*>(effectHandle->object) : nullptr;
        if (effect) effect->visible = 0;
        timer330 = 0.0f;
        return kStateHandled;
    }
    case kStateUpdate: {
        timer330 += Move_FrameDelta;
        BaseCharacter* partner = partnerHandle ? static_cast<BaseCharacter*>(partnerHandle->object) : nullptr;
        if (timer330 >= partnerDelay && partner) {
            partner->ReactTo(this, 2, nullptr);
            partner->Slot31Action();
            int recovery = -1;
            switch (partner->animation) {
            case 44: case 60: recovery = 0; break;
            case 43: case 59: recovery = 1; break;
            case 53: case 69: recovery = 2; break;
            case 54: case 70: recovery = 3; break;
            case 55: case 71: recovery = 4; break;
            case 56: case 72: recovery = 5; break;
            case 57: case 73: recovery = 6; break;
            case 42: case 58: recovery = 7; break;
            }
            if (recovery != -1) partner->PlayAnimation(recovery, 1, 0, 1.0f);
            ReleaseHeld(false, 0.0f, 0.0f);
            states.Transition(State100Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    }
    case kStateExit: {
        CharacterEffect* effect = effectHandle ? static_cast<CharacterEffect*>(effectHandle->object) : nullptr;
        if (effect) effect->visible = 1;
        return kStateHandled;
    }
    }
    return kStateUnhandled;
}

// Slot 172 (0x9d03c0): entry sets AI mode 6 and raises the flag at +0xae9, exit
// clears it and the flag at +0x3ba. Once the leave check passes, switches to
// the state at slot 96.
int Enemy::State172(int event) {
    switch (event) {
    case kStateUpdate:
        if (LeaveCheck()) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        aiMode = 6;
        flagAe9 = 1;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        flagAe9 = 0;
        flag3ba = 0;
        return kStateHandled;
    }
}

// Slot 116 (0x9cf500): after the base state, entry sends message 3 from this
// enemy to every player and resets the AI fields (target index 4, AI mode 6).
// Once the animation is done, switches to the state at slot 200.
int Enemy::State116(int event) {
    if (BaseCharacter::State116(event) == kStateParentTookOver) return kStateParentTookOver;
    switch (event) {
    case kStateEnter: {
        CharacterMessage message;
        message.receiver = nullptr;
        message.data = nullptr;
        message.sender = this;
        message.kind = 3;
        PlayerCatalog* catalog = onyx::Get<PlayerCatalog, onyx_types::type_0bf4a9b7>(level.Get()->players);
        for (ControllablePlayer** i = catalog->players; i != catalog->players + catalog->count; ++i) {
            ControllablePlayer* player = *i;
            message.receiver = player;
            player->OnMessage(&message);
        }
        mode87c = 3;
        flag130 = 0;
        targetIndex = 4;
        aiMode = 6;
        flag7b8 = 1;
        flag7b9 = 1;
        break;
    }
    case kStateUpdate:
        if (AnimationDone()) {
            states.Transition(State200Ptr());
            return kStateParentTookOver;
        }
        break;
    default:
        return kStateUnhandled;
    }
    return kStateHandled;
}

// Slot 180 (0x9d1c60): the approach state. Each update counts down; while time
// is left, the targeted player (unless out) is closer than the attack range
// plus 10, the AI mode is 0 or 1 and the target's action mode is not 6, the
// enemy keeps approaching. Otherwise it switches to the state at slot 96.
int Enemy::State180(int event) {
    switch (event) {
    case kStateUpdate:
        if (approachCountdown-- != 0) {
            float distance = 10000.0f;
            uint32_t i = targetIndex;
            if (i < targetCount && !static_cast<BaseCharacter*>(targets[i].actor->object)->IsOut())
                distance = targets[i].distance;
            if (distance < attackRange + 10.0f && (aiMode == 0 || aiMode == 1) &&
                static_cast<BaseCharacter*>(target->object)->actionMode != 6) {
                Approach();
                return kStateHandled;
            }
        }
        states.Transition(State96Ptr());
        return kStateParentTookOver;
    case kStateEnter:
    case kStateExit:
    case kStateEvent3:
        return kStateHandled;
    }
    return kStateUnhandled;
}

// Slot 186 (0x9d28a0): stops all motion, plays animation 114 (looping) and sets
// mode 2 on entry. Each update advances the timer and runs 0x9dc4c0; once the
// animation is done and the timer has reached the delay at +0x984, the target
// gets slot 90 with the value at +0x980 and the enemy switches to slot 96.
int Enemy::State186(int event) {
    switch (event) {
    case kStateUpdate:
        timer330 += Move_FrameDelta;
        if (AnimationDone() && timer330 >= delay984) {
            static_cast<BaseCharacter*>(target->object)->Slot90(value980);
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        Update9dc4c0();
        return kStateHandled;
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(114, 1, 0, 1.0f);
        mode87c = 2;
        timer330 = 0.0f;
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
