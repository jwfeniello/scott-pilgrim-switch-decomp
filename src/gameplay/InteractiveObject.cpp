// SPTG::InteractiveObject: what a character can get on. See InteractiveObject.h.
#include "InteractiveObject.h"
#include "Spawner.h"

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
        ShadowAnimatedObject* effect = shadowHandle ? static_cast<ShadowAnimatedObject*>(shadowHandle->object) : nullptr;
        if (effect) effect->visible = 0;
        return kStateHandled;
    }
    case kStateExit: {
        ShadowAnimatedObject* effect = shadowHandle ? static_cast<ShadowAnimatedObject*>(shadowHandle->object) : nullptr;
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

// Standing: falls when not on the ground.
int InteractiveObject::State78(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (!IsOnGround()) {
            motionTarget.z = fallZ;
            motionC4 = fallC4;
        }
        result = kStateHandled;
        break;
    case kStateEnter: {
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        int current = animation;
        if (current != 0 && current != 170) {
            if (!emptyLook) PlayAnimation(0, false, false, 1.0f);
            else PlayAnimation(170, false, false, 1.0f);
        }
        flag165 = 0;
        result = kStateHandled;
        break;
    }
    case kStateExit:
        result = kStateHandled;
        flag165 = 1;
        if (ShadowAnimatedObject* shadow = shadowHandle ? static_cast<ShadowAnimatedObject*>(shadowHandle->object) : nullptr) {
            result = kStateHandled;
            shadow->visible = 1;
        }
        break;
    case kStateEvent3:
        return result;
    default:
        result = kStateUnhandled;
        break;
    }
    return result;
}

// Lifted: the animation stops and it rises until it reaches its height, then falls again on the way out.
int InteractiveObject::State88(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate: {
        ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject);
        if (onyx::Get<onyx::Transform, onyx::kTransform>(actor->transform)->position.z >= liftHeight) motion.z = 0.0f;
        return kStateHandled;
    }
    case kStateEnter:
        SetAnimationSpeed(0.0f);
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        motion.z = 1.0f;
        return kStateHandled;
    case kStateExit:
        SetAnimationSpeed(1.0f);
        motionTarget.z = fallZ;
        return kStateHandled;
    case kStateEvent3:
        return result;
    default:
        return kStateUnhandled;
    }
}

// Leaves the level. The spawner that placed it either keeps it to spawn again or removes it.
void InteractiveObject::Remove(bool respawn) {
    Release();
    if (spawnerId == 51) return;
    removedForRespawn = respawn;
    LevelItemAccessor* items = level.Get();
    ActorSpawnerCatalog<InteractiveObject>* catalog = onyx::Get<ActorSpawnerCatalog<InteractiveObject>, onyx_types::type_43f66d96>(items->interactiveSpawners);
    const uint32_t id = spawnerId;
    ActorSpawner<InteractiveObject>** i = catalog->spawners;
    ActorSpawner<InteractiveObject>** end = i + catalog->count;
    if (i == end) return;
    while ((*i)->id != id) {
        ++i;
        if (i == end) return;
    }
    ActorSpawner<InteractiveObject>* owner = *i;
    if (!owner) return;
    if (respawn) {
        owner->spawned.PushFront(this);
    } else {
        owner->unspawn.Get();
        Spawner* spawner = onyx::Find<Spawner, onyx_types::type_78bdb701>(owner->spawner);
        Holder* h = attachment ? attachment : &NoHolder;
        spawner->Remove(h->key);
    }
}

// The type tests (slot 12): each class's own type or one of its base's (SPTG_TYPE).
bool InteractiveObjectEx::IsA(uint32_t type) { return IsType(type); }   // 0x9c05d0
bool InteractiveObject::IsA(uint32_t type) { return IsType(type); }   // 0x9c4f80

}  // namespace SPTG
