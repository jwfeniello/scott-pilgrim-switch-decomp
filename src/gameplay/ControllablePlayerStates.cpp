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

void ControllablePlayer::Slot91(float x) {
    BaseCharacter::Slot91(x);
    ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject);
    ActorFlags* flags = onyx::Get<ActorFlags, 0x2eae5813u>(actor->flags);
    flag13c1 = flags->facingLeft ^ 1;
}

bool ControllablePlayer::Slot34Check() {
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

}  // namespace SPTG
