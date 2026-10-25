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
    return CanSlot82();
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

// Slot 7 (0x96be30): starts the state machine in the state at slot 96 (setting
// the owner first, unlike StateMachine::Start), runs
// 0x945c40 and slot 153 on +0x504, and refills +0x328 (slot 149), +0x32c (slot
// 150) and +0x160 (slot 57), resetting the scaled values.
void BaseCharacter::Slot7() {
    State initial = State96Ptr();
    states.owner = this;
    states.next = initial;
    states.current = initial;
    (this->*initial)(kStateEnter);
    Call945c40();
    Slot153(&flags504);
    value328 = Slot149();
    scaled2f8 = base2f4;
    value32c = Slot150();
    scaled9c = base98;
    value160 = Slot57();
}

// Slot 13 (0x96bf80): AnimatedAiActor's slot 13; copies +0x54 to +0x230 and
// updates the state machine. Outside the state at slot 106, +0x328 regains
// +0x518 per second up to slot 149. Then slot 154.
void BaseCharacter::Slot13() {
    ActorSlot13();
    value230 = value54;
    states.Update();
    State state = State106Ptr();
    if (!(states.current == state)) {
        value328 += rate518 * Move_FrameDelta;
        float limit = Slot149();
        if (value328 > limit) value328 = limit;
    }
    Slot154();
}

// Slot 90 (0x970be0): lowers +0x32c by `value`, kept between 0 and +0x2f8.
void BaseCharacter::Slot90(float value) {
    float lowered = value32c - value;
    float clamped = lowered < 0.0f ? 0.0f : lowered;
    value32c = scaled2f8 < clamped ? scaled2f8 : clamped;
}

// BaseCharacter 0x96a2f0: AnimatedAiActor's, a handle and three component
// slots, the attack at +0x258, the settings, nine event slots (read in place)
// and the two attacks of slot 35.
void BaseCharacter::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    ActorSlot4(archive, source);
    onyx::TransferHandle(handle1e8, archive, source);
    AssignComponentSlot<9864096u, 42196088u>(&slot1f0, source);
    AssignComponentSlot<7920224u, 493361733u>(&settings, source);
    AssignComponentSlot<8990432u, 1141032170u>(&slot200, source);
    attack258.Serialize(archive);
    onyx::Transfer(archive, value2b0);
    onyx::Transfer(archive, value2b4);
    onyx::Transfer(archive, value2b8);
    onyx::Transfer(archive, savedZ);
    onyx::Transfer(archive, savedC4);
    onyx::Transfer(archive, value2c4);
    onyx::Transfer(archive, value2c8);
    onyx::Transfer(archive, value2cc);
    onyx::Transfer(archive, value2d0);
    onyx::Transfer(archive, value2d4);
    onyx::Transfer(archive, value2d8);
    onyx::Transfer(archive, value2dc);
    onyx::Transfer(archive, jumpBackSpeed);
    onyx::Transfer(archive, slideThreshold);
    onyx::Transfer(archive, value2e8);
    onyx::Transfer(archive, slideSpeed);
    onyx::Transfer(archive, value2f0);
    onyx::Transfer(archive, base2f4);
    onyx::Transfer(archive, value2fc);
    onyx::Transfer(archive, value300);
    onyx::Transfer(archive, value304);
    onyx::Transfer(archive, value308);
    onyx::Transfer(archive, value30c);
    onyx::Transfer(archive, value310);
    onyx::Transfer(archive, value314);
    onyx::Transfer(archive, value318);
    onyx::Transfer(archive, value31c);
    onyx::Transfer(archive, value320);
    onyx::Transfer(archive, value324);
    onyx::Transfer(archive, restitution);
    onyx::Transfer(archive, value3b4);
    ReadEventSlot<9872112u, 2018975792u>(archive, source, event3c0, this);
    ReadEventSlot<9872113u, 259057763u>(archive, source, event3d8, this);
    ReadEventSlot<9872114u, 455822691u>(archive, source, event3f0, this);
    ReadEventSlot<9872115u, 1975766783u>(archive, source, event408, this);
    ReadEventSlot<9872116u, 2050208753u>(archive, source, event420, this);
    ReadEventSlot<9872117u, 1251657038u>(archive, source, event438, this);
    ReadEventSlot<9872118u, 1740419639u>(archive, source, event450, this);
    ReadEventSlot<9872119u, 870019213u>(archive, source, event468, this);
    onyx::Transfer(archive, value50c);
    onyx::Transfer(archive, value514);
    onyx::Transfer(archive, rate518);
    onyx::Transfer(archive, stunDuration);
    onyx::Transfer(archive, stunDuration2);
    onyx::Transfer(archive, value524);
    onyx::Transfer(archive, value528);
    attack530.Serialize(archive);
    attack588.Serialize(archive);
    onyx::Transfer(archive, value5e0);
    onyx::Transfer(archive, value5e4);
    onyx::Transfer(archive, value5e8);
    onyx::Transfer(archive, value5ec);
    ReadEventSlot<9872120u, 740840452u>(archive, source, event750, this);
    onyx::Transfer(archive, flag775);
    onyx::Transfer(archive, value778);
}

}  // namespace SPTG
