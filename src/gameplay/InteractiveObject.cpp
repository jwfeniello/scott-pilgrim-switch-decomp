// SPTG::InteractiveObject: what a character can get on. See InteractiveObject.h.
#include "InteractiveObject.h"

namespace SPTG {

// A reaction of kind 5 breaks the object: it loses all its health and moves to the state at slot 86.
void InteractiveObject::ReactTo(BaseCharacter* other, int reaction, void* data) {
    if (reaction == 5) {
        LoseHealth(health);
        states.Transition(State86Ptr());
    }
}

// The rider got off: unless the object is out, it plays its idle animation and goes to the state at slot 84.
void InteractiveObject::OnDismount() {
    AnimatedAiActor::OnDismount();
    if (!IsOut()) {
        PlayAnimation(75, true, false, 1.0f);
        states.Transition(State84Ptr());
    }
}

// A rider got on: goes to the state at slot 80.
bool InteractiveObject::OnMount(void* rider) {
    AnimatedAiActor::OnMount(rider);
    states.Transition(State80Ptr());
    return true;
}

// Takes a rider unless +0x141 is set or it is in the state at slot 86 or 88.
bool InteractiveObject::CanMount() {
    if (flag141) return false;
    State broken = State86Ptr();
    if (states.current == broken) return false;
    State other = State88Ptr();
    return !(states.current == other);
}

// Starts one of two attacks, for another character.
void InteractiveObject::Slot35(bool flag, BaseCharacter* other) {
    StartAttack(flag ? &attack388 : &attack330, false, 2, other);
}

// Whether it is in its idle state.
bool InteractiveObject::Slot37() {
    State idle = State84Ptr();
    return states.current == idle;
}

// Passes on to the partner, or else to the object behind +0x1e0.
void InteractiveObject::Slot43(float value) {
    AnimatedAiActor* partner = partnerHandle ? static_cast<AnimatedAiActor*>(partnerHandle->object) : nullptr;
    AnimatedAiActor* other = handle1e0 ? static_cast<AnimatedAiActor*>(handle1e0->object) : nullptr;
    if (partner) partner->Slot43(value);
    else if (other) other->Slot43(value);
}

// Sets a point to move to, and goes to the state at slot 90.
void InteractiveObject::Slot74(const float* point, bool flag, float value) {
    value174 = 0.0f;
    value178 = value;
    point168.x = point[0];
    point168.y = point[1];
    point168.z = point[2];
    flag17c = flag;
    states.Transition(State90Ptr());
}

// While ridden, the effect is hidden.
int InteractiveObject::State80(int event) {
    switch (event) {
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
    case kStateUpdate:
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

}  // namespace SPTG
