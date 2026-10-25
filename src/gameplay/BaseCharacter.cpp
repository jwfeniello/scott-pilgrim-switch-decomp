// SPTG::BaseCharacter's own virtuals other than its states, shared by enemies,
// bosses and players (see docs/GAME_CLASSES.md#basecharacter-hooks). Names are
// provisional.
#include "BaseCharacter.h"

namespace SPTG {

// Slot 25 (0x96c8b0): records the animation speed; while +0x14c is not positive
// it goes to the animation and, with +0x338 set, to the mount.
void BaseCharacter::SetAnimationSpeed(float speed) {
    animationSpeed = speed;
    if (value14c <= 0.0f) onyx::Get<AnimationControl, kAnimationControlType>(animationHandle)->SetSpeed(speed);
    if (value14c <= 0.0f && flag338) {
        BaseCharacter* mount = Mount();
        if (mount) mount->SetAnimationSpeed(speed);
    }
}

// Slot 26 (0x96c980): pauses or resumes the animation, and with +0x338 set the
// mount's.
void BaseCharacter::SetAnimationPaused(bool paused) {
    onyx::Get<AnimationControl, kAnimationControlType>(animationHandle)->SetPaused(paused);
    if (flag338) {
        BaseCharacter* mount = Mount();
        if (mount) mount->SetAnimationPaused(paused);
    }
}

// Slot 32 (0x96ce30): after AnimatedAiActor's slot 32, restores the saved
// motion values and switches to the state at slot 108.
void BaseCharacter::Slot32() {
    ActorSlot32();
    motionTarget.z = savedZ;
    motionC4 = savedC4;
    states.Transition(State108Ptr());
}

// Slot 33 (0x96ce90): after AnimatedAiActor's slot 33, switches to the state at
// slot 136.
bool BaseCharacter::Slot33(void* data) {
    ActorSlot33(data);
    states.Transition(State136Ptr());
    return true;
}

// Slot 35 (0x96cf00): starts one of two attacks.
void BaseCharacter::Slot35(bool flag, BaseCharacter* other) {
    StartAttack(flag ? &attack588 : &attack530, false, 2, other);
}

// Slot 53 (0x96e4b0): drops what the character holds and switches to the state
// at slot 100.
void BaseCharacter::Slot53() {
    ReleaseHeld(false, 0.0f, 0.0f);
    states.Transition(State100Ptr());
}

// Slot 64 (0x96ede0): takes `amount` from +0x160 first, then from +0x32c, and
// returns how much was taken.
float BaseCharacter::Slot64(float amount) {
    float first = value160;
    float taken;
    if (first >= amount) {
        value160 = first - amount;
        taken = amount;
    } else {
        value160 = 0.0f;
        taken = first;
    }
    if (taken < amount && value32c > 0.0f) {
        float rest = value32c - (amount - taken);
        value32c = rest;
        if (!(rest < 0.0f)) return amount;
        taken = rest + amount;
        value32c = 0.0f;
    }
    return taken;
}

// Slot 74 (0x96f740): records a point, a flag and a value, then switches to the
// state at slot 110. The point arrives as three floats, not as a Vector3: copied
// from a Vector3, the first two loads and stores would be merged.
void BaseCharacter::Slot74(const float* point, bool flag, float value) {
    value174 = 0.0f;
    value178 = value;
    point168.x = point[0];
    point168.y = point[1];
    point168.z = point[2];
    flag17c = flag;
    states.Transition(State110Ptr());
}

// Slot 80 (0x970710): whether the current state is the one at slot 106.
bool BaseCharacter::Slot80() {
    State state = State106Ptr();
    return states.current == state;
}

// Slot 82 (0x970770): only while held (slot 55), not slot 85, on the ground,
// without +0x141 and outside action modes 3, 5, 6, 8 and 11.
bool BaseCharacter::Slot82() {
    if (!IsHeld()) return false;
    if (Slot85()) return false;
    if (!IsOnGround()) return false;
    if (flag141) return false;
    switch (actionMode) {
    case 3:
    case 5:
    case 6:
    case 8:
    case 11:
        return false;
    }
    return true;
}

// Slot 83 (0x970820): in action mode 2 or 4, or below the +0x514 threshold while
// in the state at slot 106.
bool BaseCharacter::Slot83() {
    if (actionMode == 2) return true;
    if (value328 < value514) {
        State state = State106Ptr();
        if (states.current == state) return true;
    }
    return actionMode == 4;
}

// Slot 86 (0x9708e0): plays animation 17.
void BaseCharacter::Slot86() {
    PlayAnimation(17, 0, 0, 1.0f);
}

// Slot 89 (0x970b90): adds `amount` to +0x32c, kept between 0 and slot 150. The
// lower bound is a select (it compiles to fmax), not fmaxf (fmaxnm).
void BaseCharacter::Slot89(float amount) {
    float limit = Slot150();
    float value = value32c + amount;
    float clamped = limit < value ? limit : value;
    value32c = clamped < 0.0f ? 0.0f : clamped;
}

// Slot 92 (0x970dd0): passes `data` to slot 75 and switches to the state at
// slot 108.
void BaseCharacter::Slot92(void* data) {
    Slot75(data, nullptr);
    states.Transition(State108Ptr());
}

// Slot 93 (0x970e20): lowers +0x328 by the hit's amount (not below 0); at or
// below +0x514, switches to the state at slot 118.
void BaseCharacter::Slot93(const HitValue* hit) {
    value328 -= hit->amount;
    if (value328 < 0.0f) value328 = 0.0f;
    if (value328 <= value514) states.Transition(State118Ptr());
}

// Slot 154 (0x975f30): with bit 30 of +0x504 and +0x774 set, counts the timer at
// +0x770 down while it is not negative and runs 0x976670.
void BaseCharacter::Slot154() {
    if ((flags504 & 0x40000000u) && flag774) {
        float time = timer770;
        if (time >= 0.0f) {
            timer770 = time - Move_FrameDelta;
            Update976670(timer770);
        }
    }
}

// Slot 158 (0x976630): false while the game state's +0xe0 is set, else the
// settings' +0x5ad.
bool BaseCharacter::Slot158() {
    CharacterSettings* values = settings.Get();
    if (Game_State && Game_State->flagE0) return false;
    return values->flag5ad;
}

}  // namespace SPTG
