// SPTG::BreakableObject and SPTG::GunTurrets. See BreakableObject.h.
#include "BreakableObject.h"

namespace SPTG {

// Plays the animation of the last stage whose threshold is at least the health ratio; with no health left it breaks.
int BreakableObject::DamagedState(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (health == 0.0f) {
            states.Transition(BrokenStatePtr());
            result = kStateParentTookOver;
        }
        break;
    case kStateEnter:
        UpdateStageAnimation();
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

// Sends the broken event and releases the debris; it goes to the last state once the animation ends, if it is set to.
int BreakableObject::BrokenState(int event) {
    switch (event) {
    case kStateUpdate:
        if (!endsAfterBreaking || !AnimationDone()) return kStateHandled;
        states.Transition(IdleStatePtr());
        return kStateParentTookOver;
    case kStateEnter: {
        solid = false;
        UpdateStageAnimation();
        onyx::SendEvent<0x1b7fbfc1u>(brokenEvent.callback, brokenEvent.target);
        BreakableDebris* d = debris ? static_cast<BreakableDebris*>(debris->object) : nullptr;
        if (d) d->Release(nullptr);
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

// Slot 16: after the actor's, it goes to the waiting state.
void GunTurrets::Update() {
    AnimatedAiActor::Update();
    states.Transition(WaitingStatePtr());
}

// Stays in this state while a target stays in range, and fires once the delay is up.
int GunTurrets::DamagedState(int event) {
    switch (event) {
    case kStateEnter:
        UpdateStageAnimation();
        return kStateUnhandled;
    case kStateUpdate:
        if (health == 0.0f) {
            states.Transition(BrokenStatePtr());
            return kStateParentTookOver;
        }
        if (TargetInRange()) {
            shootTimer += Move_FrameDelta;
            if (shootTimer >= shootDelay) states.Transition(FiringStatePtr());
        } else {
            states.Transition(WaitingStatePtr());
        }
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// A hit of kind 0 or 2 that passes the object's own check while it has health damages it, sends the hit event, updates
// the stage animation, shows the hit effect where the hit landed and fires the trigger.
bool GunTurrets::OnHit(BaseCharacter* other, void* hit) {
    const BreakableHit* record = static_cast<const BreakableHit*>(hit);
    if (!((record->kind | 2) == 2 && BreakableObject::OnHit(other, hit) && health > 0.0f)) return false;
    TakeDamage(hit, other);
    onyx::SendEvent<0x5405ad39u>(hitEvent.callback, hitEvent.target);
    UpdateStageAnimation();
    BreakableTrigger* t = trigger ? static_cast<BreakableTrigger*>(trigger->object) : nullptr;
    BreakableEffect* e = effect ? static_cast<BreakableEffect*>(effect->object) : nullptr;
    if (t && e) {
        e->visible = true;
        onyx::Vector3 position(record->x, record->y, 0.0f);
        onyx::Find<onyx::Transform, onyx::kTransform>(e->transform)->SetPosition(position);
        t->Fire(0, 0);
    }
    return true;
}

// Plays animation 213 and starts aiming as soon as a player is in range.
int GunTurrets::WaitingState(int event) {
    switch (event) {
    case kStateEnter:
        PlayAnimation(213, true, false, 1.0f);
        return kStateHandled;
    case kStateUpdate:
        if (TargetInRange()) {
            states.Transition(AimingStatePtr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// Plays animation 214, then goes to the damaged state.
int GunTurrets::AimingState(int event) {
    switch (event) {
    case kStateEnter:
        PlayAnimation(214, false, false, 1.0f);
        return kStateHandled;
    case kStateUpdate:
        if (AnimationDone()) {
            states.Transition(DamagedStatePtr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// Whether a player stands within `range` across.
bool GunTurrets::TargetInRange() {
    float x = onyx::Get<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject)->transform)->position.x;
    PlayerCatalog* catalog = onyx::Get<PlayerCatalog, onyx_types::type_0bf4a9b7>(level.Get()->players);
    for (ControllablePlayer** i = catalog->players; i != catalog->players + catalog->count; ++i) {
        float px = onyx::Get<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, onyx_types::type_6492d61d>(reinterpret_cast<AnimatedAiActor*>(*i)->actorObject)->transform)->position.x;
        if (__builtin_fabsf(x - px) < range) return true;
    }
    return false;
}

// The type tests (slot 12): each class's own type or one of its base's (SPTG_TYPE).
bool BreakableObject::IsA(uint32_t type) { return IsType(type); }   // 0xa113d0

}  // namespace SPTG
