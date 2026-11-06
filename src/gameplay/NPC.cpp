// SPTG::NPC: a character the player doesn't fight. See NPC.h.
#include "NPC.h"

namespace SPTG {

// Like BaseCharacter's slot 13, but it updates the state machine again at the end.
void NPC::Slot13() {
    AnimatedAiActor::Slot13();
    value230 = value54;
    states.Update();
    State state = State106Ptr();
    if (!(states.current == state)) {
        value328 += rate518 * Move_FrameDelta;
        float limit = Slot149();
        if (value328 > limit) value328 = limit;
    }
    Slot154();
    states.Update();
}

// Idle, it reacts to kinds 0 and 7 with a state of its own, if it is set to.
void NPC::ReactTo(BaseCharacter* other, int reaction, void* data) {
    switch (reaction) {
    case 0:
        if (reactsToReaction0 && states.IsIn(State96Ptr())) states.Transition(ReactionState1());
        break;
    case 7:
        if (reactsToReaction7 && states.IsIn(State96Ptr())) states.Transition(ReactionState3());
        break;
    }
}

// A new hit of kind 2 goes to the state at slot 106, unless it is there already, and is recorded.
bool NPC::OnHit(BaseCharacter* other, void* hit) {
    const int32_t* record = static_cast<const int32_t*>(hit);
    int32_t id = record[17];
    if (recentHits[0] != id && recentHits[1] != id && recentHits[2] != id && recentHits[3] != id && (static_cast<const uint8_t*>(hit)[88] & 2)) {
        if (!states.IsIn(State106Ptr())) {
            states.Transition(State106Ptr());
            int32_t last = record[17];
            recentHits[0] = recentHits[1];
            recentHits[1] = recentHits[2];
            recentHits[2] = recentHits[3];
            recentHits[3] = last;
        }
    }
    return false;
}

// Idle: plays animation 0, looping.
int NPC::State96(int event) {
    if (event == kStateEnter) {
        PlayAnimation(0, true, false, 1.0f);
        return kStateHandled;
    }
    return kStateUnhandled;
}

// Hit: plays animation 29 and goes back to idle.
int NPC::State106(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            states.Transition(State96Ptr());
            result = kStateParentTookOver;
        }
        break;
    case kStateEnter:
        PlayAnimation(29, false, false, 1.0f);
        Apply8e5750(122);
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

// The type tests (slot 12): each class's own type or one of its base's (SPTG_TYPE).
bool NPC::IsA(uint32_t type) { return IsType(type); }   // 0x9b82a0


// The reaction states (the getters at slots 159-161 return them): each plays its animation, 121, the one at
// +0x7ac or 117, and goes back to state 96 once it is done.
int NPC::Reaction1(int event) {
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        PlayAnimation(121, false, false, 1.0f);
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
int NPC::Reaction2(int event) {
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        PlayAnimation(value7ac, false, false, 1.0f);
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
int NPC::Reaction3(int event) {
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            states.Transition(State96Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter:
        PlayAnimation(117, false, false, 1.0f);
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
NPC::State NPC::ReactionState1() { return static_cast<State>(&NPC::Reaction1); }   // 0x9b8770
NPC::State NPC::ReactionState2() { return static_cast<State>(&NPC::Reaction2); }   // 0x9b8780
NPC::State NPC::ReactionState3() { return static_cast<State>(&NPC::Reaction3); }   // 0x9b8790

}  // namespace SPTG
