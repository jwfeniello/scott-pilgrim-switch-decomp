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

// The spawner in the catalog with this id, or null.
static __attribute__((always_inline)) inline ActorSpawner<InteractiveObject>* FindSpawner(ActorSpawnerCatalog<InteractiveObject>* catalog, uint32_t id) {
    ActorSpawner<InteractiveObject>** i = catalog->spawners;
    ActorSpawner<InteractiveObject>** end = i + catalog->count;
    if (i == end) return nullptr;
    while ((*i)->id != id) {
        ++i;
        if (i == end) return nullptr;
    }
    return *i;
}

// Slot 2 (0x9c0280): AnimatedAiActor's. Then, unless it is held, an object placed with the level (its id is
// not one handed out at run time) releases itself and joins the spawned list of the spawner that placed it.
// +0x9c and the health start over.
void InteractiveObject::EnsureReady() {
    AnimatedAiActor::EnsureReady();
    if (!IsHeld()) {
        const Holder* h = attachment ? attachment : &NoHolder;
        if (h->id - 10001u >= 989999u) {
            Release();
            LevelItemAccessor* items = level.Get();
            ActorSpawnerCatalog<InteractiveObject>* catalog = onyx::Get<ActorSpawnerCatalog<InteractiveObject>, onyx_types::type_43f66d96>(items->interactiveSpawners);
            if (ActorSpawner<InteractiveObject>* owner = FindSpawner(catalog, spawnerId)) owner->spawned.PushFront(this);
        }
    }
    scaled9c = base98;
    health = MaxHealth();
}

// Slot 7 (0x9c03e0): AnimatedAiActor's, then the machine starts in state 78 and the object stands in animation 0
// (170 with +0x3f4 and +0x3f5 set), and takes its fall values. An object of spawner 49 moves to x 150, y 0.
// Not yet matched: the original stores z before it loads the constant pair for x and y, and this build loads
// the pair first. Writing the position as a copy, field by field or in either order doesn't change it.
void InteractiveObject::Slot7() {
    AnimatedAiActor::Slot7();
    states.Start(this, State78Ptr());
    if (emptyLook && flag3f5) PlayAnimation(170, false, false, 1.0f);
    else PlayAnimation(0, false, false, 1.0f);
    motionTarget.z = fallZ;
    motionC4 = fallC4;
    if (spawnerId == 49) {
        float z = onyx::Get<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, 0x6492d61du>(actorObject)->transform)->position.z;
        onyx::Vector3 position(150.0f, 0.0f, z);
        onyx::Find<ActorObject, 0x6492d61du>(actorObject)->MoveTo(position);
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

// InteractiveObjectEx slot 41 (0x9c2010): InteractiveObject's, then motion.y
// grows by |pushFactor * scale| and takes pushFactor's direction.
int InteractiveObjectEx::Slot41(bool a, bool b, bool c, void* data, BaseCharacter* other, float scale, float f1, float f2, float f3) {
    int result = InteractiveObject::Slot41(a, b, c, data, other, scale, f1, f2, f3);
    float factor = pushFactor;
    float push = __builtin_fabsf(factor * scale) + __builtin_fabsf(motion.y);
    motion.y = factor > 0.0f ? push : -push;
    return result;
}

}  // namespace SPTG
