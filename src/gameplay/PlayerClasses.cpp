// The playable characters: slot 4 is ControllablePlayer's serialization and then the class's own fields (see Archive.h
// and docs/GAME_CLASSES.md), and the rest are each character's own states.
#include "PlayerClasses.h"

namespace SPTG {

// ControllableScott 0x999a80.
void ControllableScott::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ControllablePlayer::Slot4(archive, source);
    onyx::Transfer(archive, value1560);
}

// ControllableKim 0x99e500.
void ControllableKim::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ControllablePlayer::Slot4(archive, source);
    onyx::Transfer(archive, value1564);
    onyx::Transfer(archive, flag1568);
    value1560 = value1564;
    onyx::Transfer(archive, value156c);
    onyx::Transfer(archive, value1574);
    onyx::Transfer(archive, flag1578);
    value1570 = value1574;
}

// ControllableKnives 0x99c7a0.
void ControllableKnives::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ControllablePlayer::Slot4(archive, source);
    onyx::Transfer(archive, value1564);
    onyx::Transfer(archive, value1568);
    onyx::Transfer(archive, value156c);
    onyx::Transfer(archive, value1570);
    onyx::Transfer(archive, value1574);
    onyx::Transfer(archive, value1578);
}

// ControllableRamona 0x99a120.
void ControllableRamona::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ControllablePlayer::Slot4(archive, source);
    onyx::Transfer(archive, value1564);
    onyx::Transfer(archive, chargeLimit);
    onyx::Transfer(archive, value1570);
    onyx::Transfer(archive, value1574);
    onyx::Transfer(archive, value157c);
    onyx::Transfer(archive, flag1580);
    value1578 = value157c;
    onyx::Transfer(archive, value1588);
    onyx::Transfer(archive, value158c);
}

// ControllableWallace 0x997930 and ControllableStephen 0x999060.
void ControllableWallace::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ControllablePlayer::Slot4(archive, source);
    onyx::Transfer(archive, value1560);
    onyx::Transfer(archive, value1564);
    onyx::Transfer(archive, value1568);
    attack1570.Serialize(archive);
    attack15c8.Serialize(archive);
    onyx::Transfer(archive, value1624);
    onyx::Transfer(archive, flag1628);
    value1620 = value1624;
    attack1630.Serialize(archive);
    attack1688.Serialize(archive);
    onyx::Transfer(archive, value16e4);
    onyx::Transfer(archive, flag16e8);
    value16e0 = value16e4;
}
void ControllableStephen::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ControllablePlayer::Slot4(archive, source);
    onyx::Transfer(archive, value1560);
    onyx::Transfer(archive, value1564);
    onyx::Transfer(archive, value1568);
    attack1570.Serialize(archive);
    attack15c8.Serialize(archive);
    onyx::Transfer(archive, value1624);
    onyx::Transfer(archive, flag1628);
    value1620 = value1624;
    attack1630.Serialize(archive);
    attack1688.Serialize(archive);
    onyx::Transfer(archive, value16e4);
    onyx::Transfer(archive, flag16e8);
    value16e0 = value16e4;
}

// ControllableNegaScott 0x99b350.
void ControllableNegaScott::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ControllablePlayer::Slot4(archive, source);
    for (int i = 0; i < 12; ++i) onyx::Transfer(archive, values1560[i]);
}

// Scott's slot 239: the shared state, then on exit updates his theme (0).
int ControllableScott::State239(int event) {
    int result = ControllablePlayer::State239(event);
    if (result != kStateParentTookOver) {
        if (event == kStateExit) {
            Call994b40(Call9983e0(0));
            return kStateHandled;
        }
        return kStateUnhandled;
    }
    return result;
}

int ControllableRamona::State239(int event) {
    int result = ControllablePlayer::State239(event);
    if (result != kStateParentTookOver) {
        if (event == kStateExit) {
            Call994b40(Call9983e0(3));
            return kStateHandled;
        }
        return kStateUnhandled;
    }
    return result;
}

int ControllableNegaScott::State239(int event) {
    int result = ControllablePlayer::State239(event);
    if (result != kStateParentTookOver) {
        if (event == kStateExit) {
            Call994b40(Call9983e0(4));
            return kStateHandled;
        }
        return kStateUnhandled;
    }
    return result;
}

int ControllableKnives::State239(int event) {
    int result = ControllablePlayer::State239(event);
    if (result != kStateParentTookOver) {
        if (event == kStateExit) {
            Call994b40(Call9983e0(6));
            return kStateHandled;
        }
        return kStateUnhandled;
    }
    return result;
}

// Kim's: stands up after animation 96, either free or in the state at slot 242.
int ControllableKim::State239(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            int theme = Call9983e0(2);
            Call994b40(theme);
            if (theme == 2) {
                PlayAnimation(0, true, false, 1.0f);
                flag3ba = 1;
                states.Transition(State241Ptr());
            } else {
                states.Transition(State96Ptr());
            }
            result = kStateParentTookOver;
        }
        break;
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        PlayAnimation(96, false, false, 1.0f);
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

// Kim's slot 253: an attack with her own animations, marked at +0x3ba.
int ControllableKim::State253(int event) {
    int result = kStateUnhandled;
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            states.Transition(State96Ptr());
            result = kStateParentTookOver;
        }
        break;
    case kStateEnter:
        result = kStateHandled;
        flag3ba = 1;
        PlayAnimation(198, false, false, 1.0f);
        StartAttack(&attackF68, true, 1, nullptr);
        value14f4 = value14f0;
        PlayAnimation(121, false, false, 1.0f);
        break;
    case kStateExit:
        flag3ba = 0;
        break;
    }
    return result;
}

// Knives' slot 215: stands still in animation 190 and starts her attack.
int ControllableKnives::State215(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            states.Transition(State96Ptr());
            result = kStateParentTookOver;
        }
        break;
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(190, false, true, 1.0f);
        StartAttack(&attackF68, false, 1, nullptr);
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

void ControllableKim::Slot160(const int* move, int* value) {
    if (static_cast<uint32_t>(*move - 17) < 2) *value += 3;
    else if (*move == 15) *value += 2;
}

void ControllableNegaScott::Slot160(const int* move, int* value) {
    int kind = *move;
    if (static_cast<uint32_t>(kind - 17) <= 1) *value += 3;
    if (kind == 15) *value += 1;
    else if (kind == 16) *value += 2;
}

void ControllableKnives::Slot160(const int* move, int* value) {
    int kind = *move;
    if (static_cast<uint32_t>(kind - 17) <= 1) *value += 3;
    if (kind == 15) *value += 1;
    else if (kind == 16) *value += 3;
}

// Holding the two buttons builds up two timers, and the second one latches once it passes a limit.
void ControllableRamona::Slot257() {
    PlayerInput* from = input;
    int button = value1414;
    uint64_t held = from->held;
    if (held & (1ull << button)) value1410 += Move_FrameDelta;
    else value1410 = 0.0f;
    if (!charged) {
        float time;
        if ((1ull << value1418) & held) {
            time = Move_FrameDelta + chargeTime;
            chargeTime = time;
        } else {
            time = 0.0f;
            chargeTime = 0.0f;
        }
        charged = time > chargeLimit;
    }
}

void ControllableNegaScott::Slot257() {
    PlayerInput* from = input;
    int button = value1414;
    uint64_t held = from->held;
    if (held & (1ull << button)) value1410 += Move_FrameDelta;
    else value1410 = 0.0f;
    if (!charged) {
        float time;
        if ((1ull << value1418) & held) {
            time = Move_FrameDelta + chargeTime;
            chargeTime = time;
        } else {
            time = 0.0f;
            chargeTime = 0.0f;
        }
        charged = time > *reinterpret_cast<float*>(&values1560[0]);
    }
}

// Knives slot 256 (0x99cc60): in the air and not mounted, with her air special
// learned, timer 1 (+0x1430) running and button 8 held, starts the special
// (state 258). Otherwise the shared air input decides.
// Not yet matched: the original tests the learned move and the button together
// after the timer (an `orr` of two flags) and returns 2 through one shared block;
// this build tests the move first and selects the return value.
int ControllableKnives::AirInput(int) {
    PlayerInput* in = input;
    if (in && !IsMounted()) {
        PlayerInfoView* record = onyx::Find<PlayerInfoView, 1180775934u>(playerInfo);
        bool known = (record->moves & kMoveStrikerB) || record->allMoves;
        if (value142c[1] > 0.0f && known && (in->held & 8)) {
            value1560 = 2;
            states.Transition(State258Ptr());
            return kStateParentTookOver;
        }
    }
    if (CheckAirInput() == kStateParentTookOver) return kStateParentTookOver;
    return kStateHandled;
}

// The type tests (slot 12): each class's own type or one of its base's (SPTG_TYPE).
bool ControllableWallace::IsA(uint32_t type) { return IsType(type); }   // 0x997ad0

}  // namespace SPTG
