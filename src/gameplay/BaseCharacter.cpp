// SPTG::BaseCharacter's own virtuals other than its states, shared by enemies,
// bosses and players (see docs/GAME_CLASSES.md#basecharacter-hooks). Names are
// provisional.
#include "BaseCharacter.h"

extern "C" int32_t Attack_NextId;   // 0x1925328

namespace SPTG {

// Slot 30 (0x96ca30): turns round, and turns the mount with it.
void BaseCharacter::TurnAround() {
    SetFacing(!onyx::Get<ActorFlags, 0x2eae5813u>(onyx::Find<ActorObject, 0x6492d61du>(actorObject)->flags)->facingLeft);
    if (mounted) {
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
    sentEvents = 0;
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

// Slot 25 (0x96c8b0): records the animation speed; while +0x14c is not positive
// it goes to the animation and, with +0x338 set, to the mount.
void BaseCharacter::SetAnimationSpeed(float speed) {
    animationSpeed = speed;
    if (hitStopLeft <= 0.0f) onyx::Get<AnimationController, kAnimationControllerType>(animationHandle)->SetSpeed(speed);
    if (hitStopLeft <= 0.0f && mounted) {
        BaseCharacter* mount = Mount();
        if (mount) mount->SetAnimationSpeed(speed);
    }
}

// Slot 26 (0x96c980): pauses or resumes the animation, and with +0x338 set the
// mount's.
void BaseCharacter::SetAnimationPaused(bool paused) {
    onyx::Get<AnimationController, kAnimationControllerType>(animationHandle)->SetPaused(paused);
    if (mounted) {
        BaseCharacter* mount = Mount();
        if (mount) mount->SetAnimationPaused(paused);
    }
}

// Slot 32 (0x96ce30): after AnimatedAiActor's slot 32, restores the saved
// motion values and switches to the state at slot 108.
void BaseCharacter::OnDismount() {
    AnimatedAiActor::OnDismount();
    motionTarget.z = savedZ;
    motionC4 = savedC4;
    states.Transition(State108Ptr());
}

// Slot 33 (0x96ce90): after AnimatedAiActor's slot 33, switches to the state at
// slot 136.
bool BaseCharacter::OnMount(void* data) {
    AnimatedAiActor::OnMount(data);
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
    ApplyKnockback(data, nullptr);
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
    LevelSecretManager* values = settings.Get();
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
    states.previous = initial;
    states.current = initial;
    (this->*initial)(kStateEnter);
    AnimatedAiActor::Slot7();
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
    AnimatedAiActor::Slot4(archive, source);
    onyx::TransferHandle(spritePrinter, archive, source);
    AssignComponentSlot<9864096u, 42196088u>(&textureLoader, source);
    AssignComponentSlot<7920224u, 493361733u>(&settings, source);
    AssignComponentSlot<8990432u, 1141032170u>(&hudStatus, source);
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
    onyx::Transfer(archive, value320.x);
    onyx::Transfer(archive, value320.y);
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
    return BuyHealth(out);
}

// The first eight animations as a rider plays them (0x1349240 and, when the
// mount's slot 49 is nonzero, 0x13490e0), and the mount's matching animations
// (0x1349120).
static const int kRiderAnimations[8] = {44, 43, 53, 54, 55, 56, 57, 42};
static const int kRiderAnimationsSlot49[8] = {60, 59, 69, 70, 71, 72, 73, 58};
static const int kMountAnimations[8] = {100, 99, 109, 110, 111, 112, 113, 98};

// Slot 23 (0x96c780): on a mount, animations 0-7 play as their rider versions,
// and the mount plays its own version while the character is mounted. Other
// animations get the character off the mount first.
// Not yet matched: the original computes both rider-table entries before slot 49
// and picks between the two addresses; this build picks between the table bases
// and indexes afterwards.
void BaseCharacter::PlayMountedAnimation(int animation, bool a, bool b) {
    BaseCharacter* mount = Mount();
    if (animation <= 7 && mount) {
        const int* rider = mount->Slot49() ? kRiderAnimationsSlot49 : kRiderAnimations;
        PlayAnimation(rider[animation], a, b, 1.0f);
        if (IsMounted()) static_cast<BaseCharacter*>(mountHandle->object)->PlayAnimation(kMountAnimations[animation], a, b, 1.0f);
        return;
    }
    if (mount) Dismount();
    PlayAnimation(animation, a, b, 1.0f);
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

// Gets off the mount: tells it, then points the mount handle at a new empty handle.
void BaseCharacter::Dismount() {
    if (!IsMounted()) return;
    static_cast<BaseCharacter*>(mountHandle->object)->OnDismount();
    onyx::ComponentHandle* empty = onyx::NewHandle();
    if (empty) __atomic_add_fetch(&empty->references, 1, __ATOMIC_RELAXED);
    onyx::ComponentHandle* previous = mountHandle;
    mountHandle = empty;
    onyx::ReleaseHandle(previous);
    onyx::ReleaseHandle(empty);
    mounted = 0;
}

// Gets on: holds a reference to the object's handle and tells the object.
void BaseCharacter::SetMount(onyx::ComponentHandle* mount) {
    __atomic_add_fetch(&mount->references, 1, __ATOMIC_RELAXED);
    if (mount) __atomic_add_fetch(&mount->references, 1, __ATOMIC_RELAXED);
    onyx::ComponentHandle* previous = mountHandle;
    mountHandle = mount;
    onyx::ReleaseHandle(previous);
    onyx::ReleaseHandle(mount);
    mounted = 1;
    static_cast<BaseCharacter*>(mountHandle->object)->OnMount(this);
}

// The first object that takes a rider with `position` in its range.
MountObject* InteractiveCatalog::FindMount(const onyx::Vector3& position) {
    if (!count) return nullptr;
    for (MountObject** i = objects; i != objects + count; ++i) {
        if (!(*i)->CanMount()) continue;
        MountObject* object = *i;
        ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(object->actorObject);
        onyx::Transform* transform = onyx::Get<onyx::Transform, onyx::kTransform>(actor->transform);
        float y = transform->position.y;
        if (__builtin_fabsf(position.y - y) <= object->mountRange) {
            float x = transform->position.x;
            if (__builtin_fabsf(position.x - x) <= object->mountRange) {
                float z = transform->position.z;
                if (__builtin_fabsf(position.z - z) <= object->mountDepth) return *i;
            }
        }
    }
    return nullptr;
}

// Gets on whatever object is in range.
void BaseCharacter::MountNearby() {
    ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject);
    onyx::Vector3 position = onyx::Find<onyx::Transform, onyx::kTransform>(actor->transform)->Position();
    InteractiveCatalog* catalog = onyx::Find<InteractiveCatalog, onyx_types::type_7a93a527>(level.Get()->interactiveObjects);
    if (MountObject* object = catalog->FindMount(position)) SetMount(object->self);
}

// Slot 75 (0x96f7a0): the actor's knockback, and when it takes effect the character starts its knockdown attack with
// the hit's ID, and the attacker remembers that ID.
bool BaseCharacter::ApplyKnockback(void* data, BaseCharacter* other) {
    flag130 = AnimatedAiActor::ApplyKnockback(data, other);
    if (flag130) {
        StartAttack(&attack258, false, 1, nullptr);
        if (other) {
            int32_t id = static_cast<HitRecord*>(data)->id;
            currentAttack->id = id;
            other->recentHits[0] = other->recentHits[1];
            other->recentHits[1] = other->recentHits[2];
            other->recentHits[2] = other->recentHits[3];
            other->recentHits[3] = id;
        }
    }
    return flag130;
}

// Slot 77 (0x970560): what scales an attack as it starts, and using it clears both inputs: the charge held, as a share of
// a full charge, takes it from 1 up to chargeGain, and +0x18c multiplies that.
// Not yet matched: the operations line up, but the registers differ (the original keeps +0x18c in s0 from the start).
float BaseCharacter::Slot77() {
    float charge = value334 / chargeTime;
    float gain = chargeGain + -1.0f;
    value334 = 0.0f;
    float amount = gain * __builtin_fminf(charge, 1.0f);
    float scale = value18c;
    value18c = 1.0f;
    return scale * (amount + 1.0f);
}

// The type tests (slot 12): each class's own type or one of its base's (SPTG_TYPE).
bool BaseCharacter::IsA(uint32_t type) { return IsType(type); }   // 0x96bf20


// 0x976fb0: drops the held reference and starts the jump off: upward at +0x2b0 (+0x2d0 for a throw, which also sets the
// y speed from +0x2cc times y) scaled by 1 + +0x2b4 times x, with the saved height and +0x1c4 back; below the slide
// threshold the x motion is sped up by 1 + +0x2b8. Not yet matched (not credited): the original stores the throw's y
// speed before loading its upward speed, and with that order here the two branches' loads merge into one.
void BaseCharacter::ReleaseHeld(bool flag, float x, float y) {
    onyx::ResetHandle(held);
    float up;
    if (flag) {
        up = value2d0;
        motion.y = value2cc * y;
    } else {
        up = value2b0;
    }
    float scale = value2b4 * x + 1.0f;
    float mx = motion.x;
    float z = savedZ;
    float c4 = savedC4;
    motionTarget.x = 0.0f;
    motionTarget.z = z;
    motionC4 = c4;
    motion.z = up * scale;
    if (__builtin_fabsf(mx) < slideThreshold) motion.x = mx * (value2b8 + 1.0f);
}
}  // namespace SPTG
