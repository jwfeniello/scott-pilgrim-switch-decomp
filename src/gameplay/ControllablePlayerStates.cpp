// SPTG::ControllablePlayer's smaller state handlers and overrides. Slots follow
// the vtable; what most of the states represent is not established yet.
#include "BaseCharacter.h"

namespace SPTG {

// Forwards to the parent, then records the direction the actor now faces.
void ControllablePlayer::TurnAround() {
    BaseCharacter::TurnAround();
    ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject);
    ActorFlags* flags = onyx::Get<ActorFlags, 0x2eae5813u>(actor->flags);
    flag13c1 = flags->facingLeft ^ 1;
}

void ControllablePlayer::FaceX(float x) {
    BaseCharacter::FaceX(x);
    ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject);
    ActorFlags* flags = onyx::Get<ActorFlags, 0x2eae5813u>(actor->flags);
    flag13c1 = flags->facingLeft ^ 1;
}

bool ControllablePlayer::CanMount() {
    if (flag141) return false;
    if (actionMode != 6) return false;
    State state = State251Ptr();
    return states.current != state;
}

// Tells itself the amount with message 17, then applies it.
void ControllablePlayer::Slot43(float value) {
    CharacterMessage message(17, nullptr);
    message.receiver = this;
    *reinterpret_cast<uint32_t*>(&message.data) = static_cast<uint32_t>(value);
    OnMessage(&message);
    BaseCharacter::Slot43(value);
}

int ControllablePlayer::State126(int event) {
    int result = BaseCharacter::State126(event);
    if (result == kStateParentTookOver) return result;
    if (event != kStateEnter) return kStateUnhandled;
    __builtin_memset(value142c, 0, sizeof(value142c));
    return kStateHandled;
}

int ControllablePlayer::State138(int event) {
    switch (event) {
        case kStateUpdate:
            if (IsOnGround()) {
                states.Transition(State96Ptr());
                return kStateParentTookOver;
            }
            return kStateUnhandled;
        case kStateEnter:
            PlayAnimation(116, false, false, 1.0f);
            StartAttack(&attackEb8, false, 1, nullptr);
            return kStateHandled;
        case kStateExit:
            actionMode = 0;
            return kStateUnhandled;
        default:
            return kStateUnhandled;
    }
}

int ControllablePlayer::State243(int event) {
    switch (event) {
        case kStateUpdate:
            if (AnimationDone()) {
                states.Transition(State96Ptr());
                return kStateParentTookOver;
            }
            return kStateHandled;
        case kStateEnter:
            PlayAnimation(288, false, false, 1.0f);
            flag511 = 0;
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

// Counts how long the input bit at +0x1414 has been held.
void ControllablePlayer::Slot257() {
    if (input->held & (1ull << value1414)) value1410 += Move_FrameDelta;
    else value1410 = 0.0f;
}

// A jump attack: plays its rising animation until it lands, ending on the landing state.
int ControllablePlayer::State185(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            int current = animation;
            if (current == 79) PlayAnimation(80, true, false, 1.0f);
            else if (current == 76) PlayAnimation(77, true, false, 1.0f);
        }
        if (IsOnGround() && motion.z <= 0.0f) {
            states.Transition(State104Ptr());
            result = kStateParentTookOver;
            break;
        }
        result = kStateHandled;
        break;
    case kStateEnter:
        result = kStateHandled;
        if (flag13f1) {
            StartAttack(&attackAf0, false, 1, nullptr);
            PlayAnimation(76, false, false, 1.0f);
        } else {
            StartAttack(&attackA98, false, 1, nullptr);
            PlayAnimation(79, false, false, 1.0f);
        }
        break;
    case kStateExit:
        motion.x = 0;
        result = kStateHandled;
        break;
    case kStateEvent3:
        return result;
    default:
        result = kStateUnhandled;
        break;
    }
    return result;
}

// A dash in the direction the actor faces, ending when its animation does.
int ControllablePlayer::State193(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (!AnimationDone()) return kStateHandled;
        states.Transition(State102Ptr());
        return kStateParentTookOver;
    case kStateEnter: {
        float sign = FacingSign();
        motionTarget.z = savedZ;
        motionC4 = savedC4;
        motion.x = sign * dashSpeed;
        motion.y = dashY;
        motion.z = dashZ;
        PlayAnimation(85, false, false, 1.0f);
        return kStateHandled;
    }
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    case kStateEvent3:
        return result;
    default:
        return kStateUnhandled;
    }
}

// Standing attack that can chain: on the animation's end, a held attack input with time left restarts it.
int ControllablePlayer::State167(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate: {
        if (!AnimationDone()) {
            result = kStateHandled;
            break;
        }
        AttackInput input;
        ReadAttackInput(&input);
        if (input.pressed && value142c[1] > 0.0f) goto start;
        states.Transition(State96Ptr());
        result = kStateParentTookOver;
        break;
    }
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
    start:
        result = kStateHandled;
        StartAttack(&attack9e8, false, 1, nullptr);
        PlayAnimation(39, false, true, 1.0f);
        break;
    case kStateExit:
        states.AssertOwner(this);
        result = kStateHandled;
        break;
    case kStateEvent3:
        return result;
    default:
        result = kStateUnhandled;
        break;
    }
    return result;
}

// An attack that keeps some of the run into it: slowly moving it stops dead, otherwise it slides at slideSpeed.
int ControllablePlayer::State173(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (!AnimationDone()) return kStateHandled;
        states.Transition(State96Ptr());
        return kStateParentTookOver;
    case kStateEnter: {
        StartAttack(&attack938, false, 1, nullptr);
        float speed = __builtin_fabsf(motion.x);
        float limit = jumpBackSpeed;
        value1bc = 0.0f;
        float target;
        if (speed > limit) {
            float sign = FacingSign();
            target = slideSpeed * sign;
        } else {
            target = 0.0f;
            motion.x = 0.0f;
        }
        motionTarget.x = target;
        result = kStateHandled;
        PlayAnimation(11, false, true, 1.0f);
        return result;
    }
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    case kStateEvent3:
        return result;
    default:
        return kStateUnhandled;
    }
}

// A jump kick along a set direction, until the character lands.
int ControllablePlayer::State189(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (animation == 82 && AnimationDone()) PlayAnimation(83, false, false, 1.0f);
        if (!IsOnGround()) return kStateHandled;
        states.Transition(State104Ptr());
        return kStateParentTookOver;
    case kStateEnter: {
        float sign = FacingSign();
        float x = sign * kickSpeed;
        float y = kickY;
        float z = kickZ;
        motion.x = x;
        motion.y = y;
        motion.z = z;
        motionTarget = onyx::Vector3::Zero();
        result = kStateHandled;
        StartAttack(&attackB48, false, 1, nullptr);
        PlayAnimation(82, false, false, 1.0f);
        return result;
    }
    case kStateExit:
        motion.x = 0;
        return kStateHandled;
    case kStateEvent3:
        return result;
    default:
        return kStateUnhandled;
    }
}

// A jump kick along the same direction as State189, on its own animations and attack.
int ControllablePlayer::State191(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (animation == 284 && AnimationDone()) PlayAnimation(285, false, false, 1.0f);
        if (!IsOnGround()) return kStateHandled;
        states.Transition(State104Ptr());
        return kStateParentTookOver;
    case kStateEnter: {
        float sign = FacingSign();
        float x = sign * kickSpeed;
        float y = kickY;
        float z = kickZ;
        motion.x = x;
        motion.y = y;
        motion.z = z;
        motionTarget = onyx::Vector3::Zero();
        result = kStateHandled;
        StartAttack(&attackBa0, false, 1, nullptr);
        PlayAnimation(284, false, false, 1.0f);
        return result;
    }
    case kStateExit:
        motion.x = 0;
        return kStateHandled;
    case kStateEvent3:
        return result;
    default:
        return kStateUnhandled;
    }
}

// A special attack: its cost comes out of +0x32c first, and any shortfall out of health.
int ControllablePlayer::State203(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (!AnimationDone()) {
            result = kStateHandled;
            break;
        }
        states.Transition(State96Ptr());
        result = kStateParentTookOver;
        break;
    case kStateEnter: {
        float cost = __builtin_ceilf(specialCost * GutsCostScale());
        float available = guts;
        if (cost > available) {
            LoseHealth(cost - available);
            available = guts;
        }
        LoseGuts(cost < available ? cost : available);
        motion = onyx::Vector3::Zero();
        result = kStateHandled;
        StartAttack(&attackE60, true, 1, nullptr);
        PlayAnimation(28, false, false, 1.0f);
        if (input && !flag13c0) input->Call8fabf0(input->source->owner->value8);
        break;
    }
    case kStateExit:
        if (input && !flag13c0) input->Call8f80d0();
        result = kStateHandled;
        break;
    case kStateEvent3:
        return result;
    default:
        result = kStateUnhandled;
        break;
    }
    return result;
}

// Turns the actor around when the held direction points the other way.
void ControllablePlayer::TurnToMoveInput() {
    onyx::Vector3 move;
    if (!ReadMoveInput(input, &move) || __builtin_fabsf(move.x) <= 0.000001f) return;
    float direction = move.x >= 0.0f ? 1.0f : -1.0f;
    if (direction * FacingSign() < 0.0f) {
        flag13c1 ^= 1;
        TurnAround();
    }
}

// Standing idle without taking input. Leaves the update event unhandled.
int ControllablePlayer::State247(int event) {
    int result;
    switch (event) {
    case kStateEnter:
        flag13b0 = 0;
        value142c[0] = 0.0f;
        value142c[1] = 0.0f;
        value142c[4] = 0.0f;
        value142c[5] = 0.0f;
        value142c[2] = 0.0f;
        value142c[3] = 0.0f;
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        result = kStateHandled;
        if (BaseCharacter* mount = Mount()) {
            int animation = mount->Slot49() ? 60 : 44;
            PlayAnimation(animation, true, false, 1.0f);
            if (IsMounted()) static_cast<BaseCharacter*>(mountHandle->object)->PlayAnimation(100, true, false, 1.0f);
        } else {
            PlayAnimation(0, true, false, 1.0f);
        }
        break;
    case kStateExit:
        flag13b0 = 1;
        value142c[0] = 0.0f;
        value142c[1] = 0.0f;
        value142c[4] = 0.0f;
        value142c[5] = 0.0f;
        value142c[2] = 0.0f;
        value142c[3] = 0.0f;
        result = kStateHandled;
        break;
    case kStateEvent3:
        result = kStateHandled;
        break;
    default:
        result = kStateUnhandled;
        break;
    }
    return result;
}

}  // namespace SPTG
