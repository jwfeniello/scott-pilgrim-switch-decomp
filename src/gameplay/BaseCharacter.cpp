// SPTG::BaseCharacter's own virtuals other than its states, shared by enemies,
// bosses and players (see docs/GAME_CLASSES.md#basecharacter-hooks). Names are
// provisional.
#include "BaseCharacter.h"

extern "C" int32_t Attack_NextId;   // 0x1925328

namespace SPTG {

// Slot 28 (0x93fcf0): which way the character faces.
void BaseCharacter::SetFacing(int left) {
    ActorFlags* flags = onyx::Get<ActorFlags, 0x2eae5813u>(onyx::Find<ActorObject, 0x6492d61du>(actorObject)->flags);
    flags->facingLeft = left & 1;
}

// Slot 30 (0x96ca30): turns round, and turns the mount with it.
void BaseCharacter::TurnAround() {
    SetFacing(!onyx::Get<ActorFlags, 0x2eae5813u>(onyx::Find<ActorObject, 0x6492d61du>(actorObject)->flags)->facingLeft);
    if (flag338) {
        BaseCharacter* mount = Mount();
        if (mount) mount->TurnAround();
    }
}

// Slot 44 (0x96e360): starts an attack: copies it, gives it a new id, scales its
// damage for whoever is making it and records the id here and on what the
// character holds, so that one attack hits a target only once. Returns the id.
int BaseCharacter::StartAttack(Attack* attack, bool flag, int source, BaseCharacter* attacker) {
    attackLanded = 0;
    *currentAttack = *attack;
    int id = ++Attack_NextId;
    BaseCharacter* scaling = source == 1 ? this : attacker;
    currentAttack->id = id;
    float scale = scaling->Slot58(flag);
    currentAttack->damage = (scale * Slot77()) * currentAttack->damage;
    float value = scaling->Slot40();
    currentAttack->value40 = value;
    currentAttack->SetSource(source, attacker);
    value15c = 0;
    int last = currentAttack->id;
    recentHits[0] = recentHits[1];
    recentHits[1] = recentHits[2];
    recentHits[2] = recentHits[3];
    recentHits[3] = last;
    int started = currentAttack->id;
    BaseCharacter* other = held ? static_cast<BaseCharacter*>(held->object) : nullptr;
    if (other) {
        other->recentHits[0] = other->recentHits[1];
        other->recentHits[1] = other->recentHits[2];
        other->recentHits[2] = other->recentHits[3];
        other->recentHits[3] = started;
    }
    return started;
}

// Slot 65 (0x941790): adds to the value at +0x160, kept between zero and the
// limit from slot 57.
void BaseCharacter::GainHealth(float amount) {
    health += amount;
    float limit = MaxHealth();
    float value = health;
    if (value < 0.0f) {
        value = 0.0f;
    } else if (value > limit) {
        value = limit;
    }
    health = value;
}

// Slot 25 (0x96c8b0): records the animation speed; while +0x14c is not positive
// it goes to the animation and, with +0x338 set, to the mount.
void BaseCharacter::SetAnimationSpeed(float speed) {
    animationSpeed = speed;
    if (hitStopLeft <= 0.0f) onyx::Get<AnimationControl, kAnimationControlType>(animationHandle)->SetSpeed(speed);
    if (hitStopLeft <= 0.0f && flag338) {
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
float BaseCharacter::LoseHealth(float amount) {
    float first = health;
    float taken;
    if (first >= amount) {
        health = first - amount;
        taken = amount;
    } else {
        health = 0.0f;
        taken = first;
    }
    if (taken < amount && guts > 0.0f) {
        float rest = guts - (amount - taken);
        guts = rest;
        if (!(rest < 0.0f)) return amount;
        taken = rest + amount;
        guts = 0.0f;
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
void BaseCharacter::AddGuts(float amount) {
    float limit = MaxGuts();
    float value = guts + amount;
    float clamped = limit < value ? limit : value;
    guts = clamped < 0.0f ? 0.0f : clamped;
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
    guts = MaxGuts();
    scaled9c = base98;
    health = MaxHealth();
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
void BaseCharacter::LoseGuts(float value) {
    float lowered = guts - value;
    float clamped = lowered < 0.0f ? 0.0f : lowered;
    guts = scaled2f8 < clamped ? scaled2f8 : clamped;
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
    onyx::Transfer(archive, chargeGain);
    onyx::Transfer(archive, chargeTime);
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

// Out, in the air or in slot 84's or 85's condition, it only slows for a moment. Otherwise it stops and
// moves to the state at slot 106.
void BaseCharacter::Slot42() {
    if (IsOut() || !IsOnGround() || Slot85() || Slot84()) {
        if (hitStopLeft <= 0.0f) {
            hitStopSpeed = 0.1f;
            float speed = animationSpeed;
            SetAnimationSpeed(0.1f);
            animationSpeed = speed;
            hitStopLeft = 1.0f;
        }
    } else {
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        value12c = 1;
        timer330 = value524;
        states.Transition(State106Ptr());
    }
}

// Buys health with guts: +0x310 health at +0x30c guts each, or as much as the guts left will buy. Returns
// false when there are none, or +0x511 is set.
bool BaseCharacter::HealWithGuts(bool* out) {
    bool healed = false;
    if (flag511 || __builtin_fabsf(guts) <= 0.000001f) {
        healed = false;
    } else {
        float amount = value310;
        float limit = MaxHealth();
        amount = amount < limit ? amount : limit;
        float cost = __builtin_ceilf(value30c * amount * GutsCostScale());
        float available = guts;
        if (cost > available || __builtin_fabsf(cost - available) <= 0.000002f) {
            float rate = value30c;
            if (__builtin_fabsf(rate) <= 0.000001f) amount = value310;
            else amount = __builtin_ceilf(available / rate);
            cost = available;
        }
        if (cost < available || __builtin_fabsf(cost - available) <= 0.000002f) {
            GainHealth(amount);
            LoseGuts(cost);
        }
        healed = true;
    }
    if (out) *out = healed;
    return healed;
}

// Turns around when `x` is on the other side from the way the actor faces.
void BaseCharacter::FaceX(float x) {
    ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject);
    float offset = x - onyx::Get<onyx::Transform, onyx::kTransform>(actor->transform)->position.x;
    ActorFlags* flags = onyx::Get<ActorFlags, 0x2eae5813u>(onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject)->flags);
    if ((offset > 0.0f) != !flags->facingLeft) TurnAround();
}

// Plays an animation and moves onto `other`, facing the way it faces, then switches to the state at slot 144.
void BaseCharacter::PlayAnimationOn(int animation, bool loop, bool flag, BaseCharacter* other, float speed) {
    PlayAnimation(animation, loop, false, 1.0f);
    SetAnimationSpeed(speed);
    flag748 = flag;
    if (other) {
        ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject);
        ActorObject* target = onyx::Find<ActorObject, onyx_types::type_6492d61d>(other->actorObject);
        ActorFlags* flags = onyx::Find<ActorFlags, 0x2eae5813u>(target->flags);
        onyx::Vector3 position = onyx::Get<onyx::Transform, onyx::kTransform>(target->transform)->Position();
        SetFacing(flags->facingLeft);
        onyx::Find<onyx::Transform, onyx::kTransform>(actor->transform)->SetPosition(position);
    }
    states.Transition(State144Ptr());
    states.AssertOwner(this);
}

}  // namespace SPTG
