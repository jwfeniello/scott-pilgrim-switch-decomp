// SPTG::Boss: the base of the bosses (see docs/GAME_CLASSES.md#bosses). Names
// are provisional.
#include "Boss.h"
#include "ComponentTypes.h"
#include "Random.h"

namespace SPTG {

// Slot 13 (0xa18750): after Enemy's slot 13, counts +0xd0c up to +0xcb8 (once
// there, clears +0xd08), then runs slot 242.
void Boss::Slot13() {
    UpdateBoss13();
}

// Slot 16 (0xa187b0): Enemy's update, then the boss's second attack is
// requested with kind 1.
void Boss::Update() {
    UpdateEnemy();
    RequestAttack(attacks[1], 1);
}

// Slot 33 (0xa188e0): in action mode 6, switches to slot 252 (with +0xcd0) or
// 122 and refuses; otherwise does what BaseCharacter's slot 33 does.
bool Boss::Slot33(void* data) {
    if (actionMode == 6) {
        if (flagCd0) states.Transition(State252Ptr());
        else states.Transition(State122Ptr());
        return false;
    }
    ActorSlot33(data);
    states.Transition(State136Ptr());
    return true;
}

// Slot 69 (0xa18ed0): in action mode 6, a hit from a character whose slot 50 is
// 0 raises +0xd27; then Enemy's damage handling.
float Boss::TakeDamage(const void* hit, BaseCharacter* other) {
    return TakeBossDamage(hit, other);
}

// Slot 82 (0xa18f90): never in slot 85, else BaseCharacter's test.
bool Boss::Slot82() {
    if (Slot85()) return false;
    return CanSlot82();
}

// Slot 86 (0xa19060): plays animation 17 (BaseCharacter's passes 0 where Boss
// passes 1).
void Boss::Slot86() {
    PlayAnimation(17, 1, 0, 1.0f);
}

// Slot 108 (0xa19c20): after Enemy's state; on entry, without +0xd28, with
// +0x160 used up and slot 95 false, runs slot 240. Other events are unhandled.
int Boss::State108(int event) {
    int result = Enemy::State108(event);
    if (result == kStateParentTookOver) return result;
    if (event != kStateEnter) return kStateUnhandled;
    if (!flagD28 && value160 <= 0.0f && !Slot95()) Slot240();
    return kStateHandled;
}

// Slot 200 (0xa1b280): replaces Enemy's blink state. Entry runs 0x996c30 (with
// +0xcd1) or starts the blink timer. An update with +0xd29 removes the boss
// (keeping it when +0xa08 is 25) and raises +0xd2a; with +0xd2a and without
// +0xcd1 it runs Enemy's state.
int Boss::State200(int event) {
    switch (event) {
    case kStateUpdate:
        if (flagD29) {
            if (valueA08 == 25) Remove(false);
            else Remove(removeFlag);
            flagD29 = 0;
            flagD2a = 1;
            return kStateHandled;
        }
        if (!flagD2a || flagCd1) break;
        if (Enemy::State200(kStateUpdate) == kStateParentTookOver) return kStateParentTookOver;
        break;
    case kStateEnter:
        if (flagCd1) Call996c30(value9c8, 0, 0, nullptr);
        else timer330 = blinkDuration;
        break;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        break;
    }
    return kStateHandled;
}

// Slot 234 (0xa1b620): switches to slot 246 for kind 1, else to slot 198.
void Boss::Slot234(int kind) {
    TransitionForKind(kind);
}

// Slot 237 (0xa1b680): accepts an attack request unless its kind is 31, 32, 39,
// 45 or 61.
bool Boss::Slot237(const AttackSlot& request) {
    switch (request.kind) {
    case 31:
    case 32:
    case 39:
    case 45:
    case 61:
        return false;
    }
    return true;
}

// Slot 238 (0xa1b6b0): whether the animation playing is 0, 1 or 7.
bool Boss::Slot238() {
    switch (animation) {
    case 0:
    case 1:
    case 7:
        return true;
    }
    return false;
}

// Slot 256 (0xa1e390): plays animation 283 with +0x3ba raised until exit; when
// it is done, switches to slot 200.
int Boss::State256(int event) {
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            states.Transition(State200Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        flag3ba = 1;
        PlayAnimation(283, 0, 0, 1.0f);
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

// Slot 96 (0xa19080): the boss's idle state. Entry stops it and plays animation
// 0; off the ground it switches to slot 102, and on the ground to slot 244
// unless 0xa1e720 holds or 0xa1e820 fails. Not yet matched (not credited): as
// with slot 116, the original merges the "handled" returns into the exit case.
int Boss::State96(int event) {
    switch (event) {
    case kStateUpdate:
        if (IsOnGround()) {
            if (CheckA1e720() || !CheckA1e820()) return kStateHandled;
            states.Transition(State244Ptr());
        } else {
            states.Transition(State102Ptr());
        }
        return kStateParentTookOver;
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(0, 1, 0, 1.0f);
        mode87c = 2;
        return kStateHandled;
    case kStateExit:
        mode87c = 3;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// Slot 116 (0xa1a000): on entry, after Enemy's state, runs slot 240 unless
// +0xd28 is set, and raises +0x3ba until exit. Without +0xcd1 it goes to slot
// 200 once the animation is done; with it, animation 27 leads to slot 256, and
// a finished animation 16 with +0x14c used up starts animation 27. Not yet
// matched (not credited): the original merges the update's "handled" returns
// into the exit case's tail.
int Boss::State116(int event) {
    switch (event) {
    case kStateUpdate:
        if (!flagCd1) {
            if (!AnimationDone()) return kStateHandled;
            states.Transition(State200Ptr());
            return kStateParentTookOver;
        }
        if (animation == 16) {
            if (AnimationDone() && value14c <= 0.0f) PlayAnimation(27, 0, 1, 1.0f);
            return kStateHandled;
        }
        if (animation == 27) {
            if (!AnimationDone()) return kStateHandled;
            states.Transition(State256Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter: {
        if (Enemy::State116(event) == kStateParentTookOver) return kStateParentTookOver;
        if (!flagD28) Slot240();
        flag3ba = 1;
        return kStateHandled;
    }
    case kStateExit:
        flag3ba = 0;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// Slot 122 (0xa1a170): knocked down: entry stops the boss, plays animation 27 in
// action mode 7. When the animation is done, standing on a playfield
// collision with +0x128 set raises +0xd26; then it switches to slot 244.
int Boss::State122(int event) {
    switch (event) {
    case kStateUpdate: {
        if (!AnimationDone()) return kStateHandled;
        ActorObject* actor = onyx::Get<ActorObject, onyx_types::type_6492d61d>(actorObject);
        onyx::Component* object = actor->playfield->object;
        PlayfieldCollision* collision =
            static_cast<TypedComponent*>(object)->IsA(PlayfieldCollision::kType) ? static_cast<PlayfieldCollision*>(object) : nullptr;
        if (collision->flag128) flagD26 = 1;
        states.Transition(State244Ptr());
        return kStateParentTookOver;
    }
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(27, 0, 1, 1.0f);
        actionMode = 7;
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

// Slot 198 (0xa1b100): the special attack: on entry, after Enemy's state, passes
// the target player's X position to slot 91; once the animation is done,
// switches to slot 244.
int Boss::State198(int event) {
    switch (event) {
    case kStateUpdate:
        if (!AnimationDone()) return kStateHandled;
        states.Transition(State244Ptr());
        return kStateParentTookOver;
    case kStateEnter: {
        int result = Enemy::State198(event);
        if (result == kStateParentTookOver) return result;
        BaseCharacter* player = static_cast<BaseCharacter*>(target->object);
        ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(player->actorObject);
        Slot91(onyx::Get<onyx::Transform, onyx::kTransform>(actor->transform)->position.x);
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

// Slot 233 (0xa1b470): when triggered in the state at slot 244, rolls 1-100
// against +0xccc and raises +0xd26 on success.
void Boss::Slot233(const uint8_t* trigger) {
    if (!*trigger) return;
    State state = State244Ptr();
    if (!(states.current == state)) return;
    int roll = RandomRange(1, 100);
    if (roll <= chanceCcc) flagD26 = 1;
}

// Slot 252 (0xa1da40): entry stops the boss, starts its first attack with
// animation 131 in action mode 6; once the animation is done, switches to slot
// 122.
int Boss::State252(int event) {
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            states.Transition(State122Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        StartAttack(&attacks[0].attack, false, 1, nullptr);
        PlayAnimation(131, 0, 1, 1.0f);
        actionMode = 6;
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

}  // namespace SPTG
