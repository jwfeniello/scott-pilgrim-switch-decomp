// SPTG::Enemy's own states (see docs/GAME_CLASSES.md#enemy-states). Overrides
// of BaseCharacter states run the base state first and stop when it has already
// switched states. Names are provisional.
#include "ComponentTypes.h"
#include "Enemy.h"
#include "Random.h"

extern "C" void Move_ApplyPosition(void* component, const void* position);   // 0x85fd70

namespace SPTG {

// Slot 98 (0x9cec40): Enemy's grounded state. Entry stops all motion, sets
// action mode 1, plays animation 29 and sends event 0x78572030; exit clears the
// action mode and +0x813. Animation 29 is followed by animation 12, and half a
// second into 12 the enemy moves to slot 96. Leaving the ground switches to 102.
int Enemy::State98(int event) {
    switch (event) {
    case kStateUpdate:
        if (!IsOnGround()) {
            states.Transition(State102Ptr());
            return kStateParentTookOver;
        }
        switch (animation) {
        case 29:
            if (AnimationDone()) PlayAnimation(12, 1, 0, 1.0f);
            break;
        case 12:
            stateTime += Move_FrameDelta;
            if (stateTime > 0.5f) {
                states.Transition(State96Ptr());
                return kStateParentTookOver;
            }
            break;
        }
        return kStateHandled;
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        actionMode = 1;
        PlayAnimation(29, 0, 0, 1.0f);
        onyx::SendEvent<0x78572030u>(event3c0.callback, event3c0.target);
        stateTime = 0.0f;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        flag813 = 0;
        actionMode = 0;
        return kStateHandled;
    }
}

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

// Slot 108 (0x9dd830): after the base state, on entry, every other enemy on the
// same target that is active, in AI mode 3 or lower, without +0x874 set and with
// bit 3 of +0x978 rolls 1-100 against its assist chance; on success its +0x874
// becomes 3. Not yet byte-identical, so not credited: the original's loop keeps
// the catalog bounds in registers on the paths that skip an enemy early.
int Enemy::State108(int event) {
    if (BaseCharacter::State108(event) == kStateParentTookOver) return kStateParentTookOver;
    if (event != kStateEnter) return kStateUnhandled;
    EnemyCatalog* catalog = onyx::Get<EnemyCatalog, onyx_types::type_5f5cdd73>(level.Get()->enemies);
    for (Enemy** i = catalog->enemies; i != catalog->enemies + catalog->count; ++i) {
        Enemy* other = *i;
        if (other->flag50 || other->targetIndex != targetIndex || other == this || other->aiMode > 3) continue;
        if (other->value874 == 0 && (other->flags978 & 8)) {
            uint32_t roll = RandomRange(1, 100);
            if (roll <= other->assistChance) other->value874 = 3;
        }
    }
    return kStateHandled;
}

// Slot 112 (0x9cf120): after the base recovery state, on entry, every NPC
// reacts to this enemy (reaction 0) and +0x130 is cleared. An enemy without
// +0x874 set may then counter: with bit 1 of +0x978 it rolls 1-100 against one
// of two chances (by health against the threshold); success applies 0x8e5750
// with 124, sets +0x874 to 1 and the special attack's kind to 4. Failing that,
// with bit 5 it rolls against the follow-up chance and sets +0x874 to 5. Mode 3.
int Enemy::State112(int event) {
    if (BaseCharacter::State112(event) == kStateParentTookOver) return kStateParentTookOver;
    if (event != kStateEnter) return kStateUnhandled;
    NpcCatalog* catalog = onyx::Get<NpcCatalog, onyx_types::type_3fb2ecb4>(services.Get()->npcs.Get()->catalog);
    for (BaseCharacter** i = catalog->npcs; i != catalog->npcs + catalog->count; ++i) (*i)->ReactTo(this, 0, nullptr);
    flag130 = 0;
    if (value874 == 0) {
        bool skip = false;
        if (flags978 & 2) {
            uint32_t roll = RandomRange(1, 100);
            float chance = value160 <= counterHealthThreshold ? counterChance : counterChanceHealthy;
            if (roll <= chance) {
                Apply8e5750(124);
                value874 = 1;
                specialType = 4;
                skip = true;
            } else if (value874 != 0) {
                skip = true;
            }
        }
        if (!skip && (flags978 & 0x20)) {
            uint32_t roll2 = RandomRange(1, 100);
            if (roll2 <= followUpChance) value874 = 5;
        }
    }
    mode87c = 3;
    return kStateHandled;
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

// Slot 174 (0x9d0490): entry resets the timer at +0x7ac (clearing +0x813 for
// special attack kinds 2-4), passes the target player's X position to slot 91,
// runs 0x9db480, sets mode 2 and stops the target motion. Each update advances
// the timer and runs 0x9db820 with it and slot 170. Exit sets mode 3 and,
// unless +0x9d2 is set, stops the motion.
int Enemy::State174(int event) {
    switch (event) {
    case kStateUpdate:
        value7ac += Move_FrameDelta;
        Update9db820(value7ac, Slot170());
        return kStateHandled;
    case kStateEnter: {
        value7ac = 0.0f;
        if (specialType >= 2 && specialType <= 4) flag813 = 0;
        BaseCharacter* player = static_cast<BaseCharacter*>(target->object);
        ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(player->actorObject);
        Slot91(onyx::Get<onyx::Transform, onyx::kTransform>(actor->transform)->position.x);
        Enter9db480();
        mode87c = 2;
        flag9d2 = 0;
        motionTarget = onyx::Vector3::Zero();
        return kStateHandled;
    }
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        flag813 = 0;
        if (!flag9d2) motion = onyx::Vector3::Zero();
        mode87c = 3;
        return kStateHandled;
    }
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

// Slot 194 (0x9d3970): a timed dash. Entry stops, loops animation 1, faces the
// dash direction at the dash speed and works out the delay before dashing from
// the target's x offset (at 60 frames a second). After the delay the enemy
// dashes (animation 34, speed scaled by the special attack's scale); after the
// hold time it stops (animation 35) and, once that is done, returns to slot 96.
// Not yet byte-identical, so not credited: the original orders the loads and
// stores of the delay computation differently.
int Enemy::State194(int event) {
    switch (event) {
    case kStateUpdate:
        switch (animation) {
        case 1:
            stateTime += Move_FrameDelta;
            value334 += Move_FrameDelta;
            if (stateTime > dashDelay) {
                ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject);
                float direction = onyx::Get<ActorFlags, 0x2eae5813u>(actor->flags)->facingLeft ? -1.0f : 1.0f;
                motion.x = specialSpeedScale * (dashSpeed * direction);
                PlayAnimation(34, 0, 1, 1.0f);
                stateTime = 0.0f;
            }
            break;
        case 35:
            if (AnimationDone()) {
                states.Transition(State96Ptr());
                return kStateParentTookOver;
            }
            break;
        case 34:
            stateTime += Move_FrameDelta;
            if (stateTime > dashHold) {
                motion = onyx::Vector3::Zero();
                motionTarget = onyx::Vector3::Zero();
                PlayAnimation(35, 0, 1, 1.0f);
            }
            break;
        }
        return kStateHandled;
    case kStateEnter: {
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(1, 1, 0, 1.0f);
        ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject);
        float direction = onyx::Get<ActorFlags, 0x2eae5813u>(actor->flags)->facingLeft ? -1.0f : 1.0f;
        motion.x = dashSpeed * direction;
        stateTime = 0.0f;
        dashDelay = dashDelayBase;
        float perSecond = dashSpeed * 60.0f;
        dashDelay += (__builtin_fabsf(targets[targetIndex].offset.x) - perSecond * (dashHold + dashDelay)) / perSecond;
        return kStateHandled;
    }
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 196 (0x9d3e10): a jump back. Entry releases anything held (with the
// ratio +0x334 / +0x2c4, at most 1), sets the horizontal speed (0 with +0x9c4
// set, else +0x7d4 if positive, else the jump-back speed away from the facing
// direction) and plays animation 2. Each update follows the animation: 2 leads
// to 3; 3 to 8 once falling; 8 to 6 on landing; when 6 is done, slot 96.
int Enemy::State196(int event) {
    switch (event) {
    case kStateUpdate:
        switch (animation) {
        case 2:
            if (AnimationDone()) PlayAnimation(3, 1, 0, 1.0f);
            break;
        case 3:
            if (motion.z <= 0.0f) PlayAnimation(8, 1, 0, 1.0f);
            break;
        case 6:
            if (AnimationDone()) {
                states.Transition(State96Ptr());
                return kStateParentTookOver;
            }
            break;
        case 8:
            if (IsOnGround() && motion.z <= 0.0f) PlayAnimation(6, 1, 0, 1.0f);
            break;
        }
        return kStateHandled;
    case kStateEnter: {
        ReleaseHeld(false, __builtin_fminf(value334 / value2c4, 1.0f), 0.0f);
        float speed = 0.0f;
        if (!flag9c4) {
            speed = savedMotion.x;
            if (!(speed > 0.0f)) {
                ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject);
                float direction = onyx::Get<ActorFlags, 0x2eae5813u>(actor->flags)->facingLeft ? -1.0f : 1.0f;
                speed = jumpBackSpeed * direction;
            }
        }
        motion.x = speed;
        PlayAnimation(2, 1, 0, 1.0f);
        return kStateHandled;
    }
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
}

// Slot 198 (0x9d40b0): plays the special attack's animation, stops all motion
// and starts the special attack; once the animation is done, switches to the
// state at slot 96.
int Enemy::State198(int event) {
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        PlayAnimation(specialAttack.kind, 0, 1, 1.0f);
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        StartAttack(&specialAttack.attack, false, 1, nullptr);
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

// Slot 226 (0x9d98c0): on entry plays animation 0 looping, or with a mount
// (slot 36) animation 44 or 60 depending on the mount, with the mount playing
// animation 100. Then stops all motion and applies 0x8e5750 with 129.
int Enemy::State226(int event) {
    switch (event) {
    case kStateEnter:
        if (Slot36Check()) {
            if (BaseCharacter* mount = Mount()) {
                PlayAnimation(mount->Slot49() == 0 ? 44 : 60, 1, 0, 1.0f);
                if (Slot36Check()) static_cast<BaseCharacter*>(mountHandle->object)->PlayAnimation(100, 1, 0, 1.0f);
            }
        } else {
            PlayAnimation(0, 1, 0, 1.0f);
        }
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        Apply8e5750(129);
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    }
    return kStateUnhandled;
}

// Slot 192 (0x9d3780): sets mode 2, stops all motion, loops animation 117,
// sets AI mode 7 and runs slot 31 on entry; exit clears +0x874 and sets AI mode
// 6. Once the animation is done and the timer has reached the delay at +0x9ac,
// switches to slot 96; when off the ground, to slot 102.
int Enemy::State192(int event) {
    switch (event) {
    case kStateUpdate:
        timer330 += Move_FrameDelta;
        if (AnimationDone() && timer330 >= delay9ac) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        if (!IsOnGround()) {
            states.Transition(State102Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        mode87c = 2;
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(117, 1, 0, 1.0f);
        aiMode = 7;
        timer330 = 0.0f;
        Slot31Action();
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        value874 = 0;
        aiMode = 6;
        return kStateHandled;
    }
}

// Slot 206 (0x9d5450): holding the ring around the back-off point. AI mode 7,
// +0xad8 raised, animation 7 and the target motion stopped on entry. When the
// target comes within the ring distance (how far the target is from the ring,
// rounded up) it switches to slot 208. Otherwise it moves out or in until
// within 1 of the back-off distance, then is placed on the ring (1.1 times the
// distance, toward its side) and switches to slot 204.
int Enemy::State206(int event) {
    switch (event) {
    case kStateUpdate: {
        ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject);
        onyx::Vector3 position = onyx::Get<onyx::Transform, onyx::kTransform>(actor->transform)->position;
        BaseCharacter* player = static_cast<BaseCharacter*>(target->object);
        ActorObject* playerActor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(player->actorObject);
        onyx::Vector3 targetPosition = onyx::Get<onyx::Transform, onyx::kTransform>(playerActor->transform)->position;
        float targetDistance = (targetPosition - position).Length();
        float ring = __builtin_ceilf(__builtin_fabsf((targetPosition - backOffPoint).Length() - backOffDistance));
        if (targetDistance <= ring) {
            states.Transition(State208Ptr());
            return kStateParentTookOver;
        }
        onyx::Vector3 offset = backOffPoint - position;
        float distance = offset.Length();
        onyx::Vector3 direction = offset / offset.Length();
        onyx::Vector3 velocity;
        if (distance < backOffDistance - 1.0f) {
            velocity = -(direction * Slot170());
        } else if (distance > backOffDistance + 1.0f) {
            velocity = direction * Slot170();
        } else {
            onyx::Vector3 point = backOffPoint - direction * (backOffDistance * 1.1f);
            Move_ApplyPosition(onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject), &point);
            states.Transition(State204Ptr());
            return kStateParentTookOver;
        }
        motion = velocity;
        return kStateHandled;
    }
    case kStateEnter:
        flagAd8 = 1;
        aiMode = 7;
        PlayAnimation(7, 1, 0, 1.0f);
        motionTarget = onyx::Vector3::Zero();
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        aiMode = 6;
        flagAd8 = 0;
        return kStateHandled;
    }
}

// Slot 208 (0x9d58d0): backing off. AI mode 7 while active (6 after) and the
// flag at +0xad8 raised. Each update measures the distance to the back-off point
// and to the target; once the target is at least the middle of the current
// attack range away and the enemy is at least the back-off distance from the
// point, it switches to slot 96. Otherwise it moves away from the point at
// slot 170's speed.
int Enemy::State208(int event) {
    switch (event) {
    case kStateUpdate: {
        ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject);
        onyx::Vector3 position = onyx::Get<onyx::Transform, onyx::kTransform>(actor->transform)->position;
        onyx::Vector3 offset = backOffPoint - position;
        float distance = offset.Length();
        BaseCharacter* player = static_cast<BaseCharacter*>(target->object);
        ActorObject* playerActor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(player->actorObject);
        onyx::Vector3 targetPosition = onyx::Get<onyx::Transform, onyx::kTransform>(playerActor->transform)->position;
        float targetDistance = (targetPosition - position).Length();
        float range;
        switch (rangeType) {
        case 0: range = range0.min + (range0.max - range0.min) * 0.5f; break;
        case 1: range = range1.min + (range1.max - range1.min) * 0.5f; break;
        case 2: range = range2.min + (range2.max - range2.min) * 0.5f; break;
        case 3: range = range3.min + (range3.max - range3.min) * 0.5f; break;
        }
        float reach = __builtin_sqrtf(range * range + 0.0f * 0.0f);
        if (distance >= backOffDistance && targetDistance >= reach) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        onyx::Vector3 direction = offset / offset.Length();
        motion = -(direction * Slot170());
        return kStateHandled;
    }
    case kStateEnter:
        aiMode = 7;
        flagAd8 = 1;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        aiMode = 6;
        flagAd8 = 0;
        return kStateHandled;
    }
}

// Slot 218 (0x9d7da0): walking. Each update advances the timer at +0x334, runs
// 0x9db820 with it and slot 171, and turns around (slot 30) when the direction
// of travel and the facing disagree. Entry runs 0x9db480 unless slot 231 holds,
// in which case it plays the walk animation (1, or 43/59 with a mount, the
// mount playing 99); then as slot 174. Exit is as slot 174's.
int Enemy::State218(int event) {
    switch (event) {
    case kStateUpdate: {
        value334 += Move_FrameDelta;
        Update9db820(value334, Slot171());
        float speed = motion.x;
        ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject);
        bool movingRight = speed > 0.0f;
        bool facingRight = !onyx::Get<ActorFlags, 0x2eae5813u>(actor->flags)->facingLeft;
        if (movingRight != facingRight) TurnAround();
        return kStateHandled;
    }
    case kStateEnter:
        value334 = 0.0f;
        if (!Slot231()) {
            Enter9db480();
        } else if (Slot36Check()) {
            if (BaseCharacter* mount = Mount()) {
                PlayAnimation(mount->Slot49() == 0 ? 43 : 59, 1, 0, 1.0f);
                if (Slot36Check()) static_cast<BaseCharacter*>(mountHandle->object)->PlayAnimation(99, 1, 0, 1.0f);
            }
        } else {
            PlayAnimation(1, 1, 0, 1.0f);
        }
        if (specialType >= 2 && specialType <= 4) flag813 = 0;
        mode87c = 2;
        flag9d2 = 0;
        motionTarget = onyx::Vector3::Zero();
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        flag813 = 0;
        if (!flag9d2) motion = onyx::Vector3::Zero();
        mode87c = 3;
        return kStateHandled;
    }
}

// Slot 200 (0x9d4250): blinking out. Entry starts the timer from the blink
// duration. While it runs (and +0x17c is clear) the actor blinks: the parity of
// timer / blink period picks the blink-on or blink-off event of the actor's
// flags component. When it has run out, 0x996c30 runs (unless +0xb78 is set),
// and the enemy is removed (slot 70).
int Enemy::State200(int event) {
    switch (event) {
    case kStateUpdate:
        if (timer330 > 0.0f) {
            if (!flag17c) {
                timer330 -= Move_FrameDelta;
                uint32_t phase = uint32_t(timer330 / blinkPeriod);
                ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject);
                ActorFlags* flags = onyx::Find<ActorFlags, 0x2eae5813u>(actor->flags);
                if (phase & 1)
                    onyx::SendEvent<0x255c0afeu>(flags->blinkOffCallback, flags->blinkOffTarget);
                else
                    onyx::SendEvent<0x44174b43u>(flags->blinkOnCallback, flags->blinkOnTarget);
                return kStateHandled;
            }
        } else if (!flag17c && !flagB78) {
            Call996c30(value9c8, 0, 0, nullptr);
        }
        Remove(removeFlag);
        return kStateHandled;
    case kStateEnter:
        timer330 = blinkDuration;
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

// Slot 222 (0x9d8f00): sets AI mode 7, loops animation 209, hides the effect and
// raises the actor flag at +0x118 on entry; also takes +0x9c8 from the game
// difficulty and clears +0x160 and +0x32c. Exit sets AI mode 6, lowers the actor
// flag and shows the effect again.
int Enemy::State222(int event) {
    switch (event) {
    case kStateUpdate:
        return kStateHandled;
    case kStateEnter: {
        aiMode = 7;
        PlayAnimation(209, 1, 0, 1.0f);
        if (CharacterEffect* effect = Effect()) effect->visible = 0;
        ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject);
        onyx::Get<ActorFlags, 0x2eae5813u>(actor->flags)->flag118 = 1;
        value9c8 = services.Get()->difficulty.Get()->value108;
        value160 = 0.0f;
        value32c = 0.0f;
        flag3ba = 1;
        return kStateHandled;
    }
    case kStateExit: {
        aiMode = 6;
        ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject);
        onyx::Get<ActorFlags, 0x2eae5813u>(actor->flags)->flag118 = 0;
        if (CharacterEffect* effect = Effect()) effect->visible = 1;
        flag3ba = 0;
        return kStateHandled;
    }
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// 0x9dd6b0: when slot 36 holds, rolls 0-100 against the chance at +0x920 and
// records the result; a failed roll sets AI mode 6.
void Enemy::RollChance() {
    if (!Slot36Check()) return;
    uint32_t roll = RandomRange(0u, 100u);
    if (roll <= chance) {
        chanceResult = 1;
    } else {
        aiMode = 6;
        chanceResult = 0;
    }
}

}  // namespace SPTG
