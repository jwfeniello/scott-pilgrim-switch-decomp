// SPTG::Projectile: something an actor throws or shoots. See Projectile.h.
#include "Projectile.h"
#include "Spawner.h"

namespace SPTG {

// Starts the state machine in the waiting state.
void Projectile::Slot7() {
    AnimatedAiActor::Slot7();
    states.Start(this, WaitingStatePtr());
}

// Clears what the flight left behind.
void Projectile::Slot19() {
    AnimatedAiActor::Slot19();
    burstOver = false;
    bursting = false;
    bounced = false;
    flightLeft = 0.0f;
    attackTimer = 0.0f;
    attackDelayed = false;
    flyAnimation = 0;
}

// Sends the event for how the flight ended, once.
void Projectile::SendFlightOver(bool onCharacter) {
    if (sentEvents & 0x40) return;
    sentEvents |= 0x40;
    if (!onCharacter) onyx::SendEvent<0x48ec2702u>(otherHitEvent.callback, otherHitEvent.target);
    else onyx::SendEvent<0x3a3df2a3u>(characterHitEvent.callback, characterHitEvent.target);
}

// The attack landed on `target`. Ends the flight, starts the burst state if it bursts on a hit, and holds the
// animation like any actor.
void Projectile::AttackLanded(AnimatedAiActor* target) {
    if (target && target->IsA(onyx_types::type_1cfe99c7)) {
        if (!static_cast<BaseCharacter*>(target)->Slot79()) SendFlightOver(true);
    } else {
        SendFlightOver(false);
    }
    if (burstsOnHit && !states.IsIn(BurstStatePtr())) states.Transition(BurstStatePtr());
    Attack* landed = currentAttack;
    attackDelayed = true;
    attackTimer = 0.0f;
    attackLanded = 1;
    uint32_t kind = landed->kind;
    float time = landed->hitStopTime;
    float speed = landed->hitStopSpeed;
    if (kind <= 3 && time > 0.0f && hitStopLeft <= 0.0f) {
        hitStopSpeed = speed;
        float saved = animationSpeed;
        SetAnimationSpeed(speed);
        animationSpeed = saved;
        hitStopLeft = time;
    }
    if (kind == 2) {
        AnimatedAiActor* other = landed->shared ? static_cast<AnimatedAiActor*>(landed->shared->object) : nullptr;
        other->HoldAnimation(time, speed);
    }
}

// Leaves the level. The spawner that placed it either keeps it to spawn again or removes it.
void Projectile::Remove(bool respawn) {
    Release();
    if (spawnerId == 42) return;
    removedForRespawn = respawn;
    LevelItemAccessor* items = level.Get();
    ActorSpawnerCatalog<Projectile>* catalog = onyx::Get<ActorSpawnerCatalog<Projectile>, onyx_types::type_0ae24dd5>(items->projectileSpawners);
    const uint32_t id = spawnerId;
    ActorSpawner<Projectile>** i = catalog->spawners;
    ActorSpawner<Projectile>** end = i + catalog->count;
    if (i == end) return;
    while ((*i)->id != id) {
        ++i;
        if (i == end) return;
    }
    ActorSpawner<Projectile>* owner = *i;
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

// Does nothing but answer events.
int Projectile::GoneState(int event) {
    switch (event) {
    case kStateUpdate:
    case kStateEnter:
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    }
}

// Plays the burst animation and leaves when it is over.
int Projectile::BurstState(int event) {
    switch (event) {
    case kStateUpdate:
        bursting = false;
        if (AnimationDone()) {
            burstOver = true;
            PlayAnimation(0, false, false, 1.0f);
            if (removedAfterBurst) Remove(respawnsAfterBurst);
            else Release();
        }
        return kStateHandled;
    case kStateEnter:
        Slot72();
        PlayAnimation(16, false, false, 1.0f);
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        bursting = true;
        onyx::SendEvent<0x15984b3du>(burstEvent.callback, burstEvent.target);
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

// Waits, with any delayed attack still running, until what it waits for has happened, then flies. Not yet matched
// (not credited): the original tests waitFor 3, then 2, then 1 with the position read between the first two.
int Projectile::WaitingState(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate: {
        UpdateDelayedAttack();
        onyx::Transform* transform = onyx::Get<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject)->transform);
        int wait = waitFor;
        if (wait == 3) {
            LevelCamera* levelCamera = onyx::Find<LevelCamera, onyx_types::type_67f2aa4d>(camera.Get()->levelCamera);
            if (onyx::Get<CameraBlock, onyx_types::type_55e5c01c>(levelCamera->block)->active == 0) return kStateHandled;
        } else {
            onyx::Vector3 position = transform->Position();
            if (wait == 2) {
                PlayerCatalog* catalog = onyx::Get<PlayerCatalog, onyx_types::type_0bf4a9b7>(level.Get()->players);
                if (catalog->count == 0) return kStateHandled;
                ControllablePlayer** i = catalog->players;
                while (true) {
                    onyx::Vector3 other = onyx::Get<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, onyx_types::type_6492d61d>(reinterpret_cast<AnimatedAiActor*>(*i)->actorObject)->transform)->Position();
                    float dx = other.x - position.x;
                    float dy = other.y - position.y;
                    float dz = other.z - position.z;
                    if (dx * dx + dy * dy + dz * dz < triggerRange) break;
                    ++i;
                    if (i == catalog->players + catalog->count) return kStateHandled;
                }
            } else if (wait == 1) {
                LevelCamera* levelCamera = onyx::Find<LevelCamera, onyx_types::type_67f2aa4d>(camera.Get()->levelCamera);
                onyx::Transform* view = onyx::Get<onyx::Transform, onyx::kTransform>(levelCamera->transform);
                float height = position.y + position.z;
                float top = view->position.y;
                if (!(height > top && height < top + 216.0f)) return kStateHandled;
                float left = view->position.x;
                if (!(left < position.x && left + 384.0f > position.x)) return kStateHandled;
            } else {
                return kStateHandled;
            }
        }
        states.Transition(FlyingStatePtr());
        result = kStateParentTookOver;
        break;
    }
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        attackDelayed = false;
        StartOwnAttack();
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

// Flies until its time is up or it lands. A landing can shake the camera, end the flight, bounce it or leave it
// waiting again. Not yet matched (not credited): the entry stores and the place of the common return differ.
int Projectile::FlyingState(int event) {
    switch (event) {
    case kStateUpdate: {
        ActorFlags* flags = onyx::Find<ActorFlags, 0x2eae5813u>(onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject)->flags);
        if (!flags->visible || !(flags->componentFlags & 1)) Slot72();
        float left = flightLeft;
        if (left <= 0.0f) break;
        if (burstsOnPlayfieldFlag) {
            onyx::Component* object = onyx::Get<ActorObject, onyx_types::type_6492d61d>(actorObject)->playfield->object;
            PlayfieldCollision* collision = static_cast<TypedComponent*>(object)->IsA(PlayfieldCollision::kType) ? static_cast<PlayfieldCollision*>(object) : nullptr;
            if (collision->flag128) break;
            left = flightLeft;
        }
        flightLeft = left - Move_FrameDelta;
        if (animation == 189 && AnimationDone()) PlayAnimation(flyAnimation, flyAnimationLoops, false, 1.0f);
        if (IsOnGround()) {
            if (shakesOnLanding) {
                LevelCamera* levelCamera = onyx::Find<LevelCamera, onyx_types::type_67f2aa4d>(camera.Get()->levelCamera);
                if (levelCamera) {
                    uint32_t which = landingShake;
                    CameraShaker* shaker = onyx::Find<CameraShaker, onyx_types::type_3ddae46b>(levelCamera->shaker);
                    onyx::ComponentHandle* handle = shaker->presets[which];
                    ShakePreset* preset = handle ? static_cast<ShakePreset*>(handle->object) : nullptr;
                    int index = shaker->FreeSlot();
                    if (index >= 0) shaker->slots[index].Start(preset->settings);
                }
            }
            if (burstsOnLanding) break;
            if (__builtin_fabsf(motion.z) > landingEventSpeed) onyx::SendEvent<0x7fdc6bb3u>(event220.callback, event220.target);
            if (bounces && !bounced) {
                float speed = motion.z * bounce;
                if (speed < -0.5f) {
                    motion.z = -speed;
                    UpdateDelayedAttack();
                    return kStateHandled;
                }
                motion.z = 0.0f;
            } else if (waitsAfterLanding) {
                PlayAnimation(landingAnimation, false, false, 1.0f);
                states.Transition(WaitingStatePtr());
                return kStateParentTookOver;
            }
        }
        UpdateDelayedAttack();
        return kStateHandled;
    }
    case kStateEnter:
        onyx::Get<AnimationController, kAnimationControllerType>(animationHandle)->SetPaused(false);
        PlayAnimation(189, false, false, 1.0f);
        motion = launchMotion;
        {
            float time = flightTime;
            motionTarget.z = groundZ;
            motionC4 = groundC4;
            flightLeft = time;
        }
        bounced = false;
        attackTimer = 0.0f;
        attackDelayed = false;
        StartOwnAttack();
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        states.AssertOwner(this);
        return kStateHandled;
    }
    states.Transition(BurstStatePtr());
    return kStateParentTookOver;
}

// The type tests (slot 12): each class's own type or one of its base's (SPTG_TYPE).
bool Projectile::IsA(uint32_t type) { return IsType(type); }   // 0x9596e0

}  // namespace SPTG
