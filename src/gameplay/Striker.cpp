// SPTG::Striker: a helper a player calls in. See Striker.h.
#include "Striker.h"
#include "Spawner.h"

namespace SPTG {

// Starts the state machine idle.
void Striker::Slot7() {
    AnimatedAiActor::Slot7();
    states.Start(this, IdleStatePtr());
}

// A striker that is not held is released when its holder's ID is outside 10001-999999.
void Striker::Update() {
    AnimatedAiActor::Update();
    if (!IsHeld()) {
        Holder* h = attachment ? attachment : &NoHolder;
        if (h->id - 10001u < 989999u) return;
        Release();
    }
}

// Forgets its spawner and owner and takes the attack it started with.
void Striker::Slot19() {
    AnimatedAiActor::Slot19();
    spawnerId = 0;
    owner = nullptr;
    attack = baseAttack;
    flag2f8 = 0;
}

// Leaves the level. The spawner that placed it either keeps it to spawn again or removes it.
void Striker::Remove(bool respawn) {
    Release();
    if (spawnerId == 8) return;
    removedForRespawn = respawn;
    LevelItemAccessor* items = level.Get();
    ActorSpawnerCatalog<Striker>* catalog = onyx::Get<ActorSpawnerCatalog<Striker>, onyx_types::type_02a118c5>(items->strikerSpawners);
    const uint32_t id = spawnerId;
    ActorSpawner<Striker>** i = catalog->spawners;
    ActorSpawner<Striker>** end = i + catalog->count;
    if (i == end) return;
    while ((*i)->id != id) {
        ++i;
        if (i == end) return;
    }
    ActorSpawner<Striker>* spawnerOwner = *i;
    if (!spawnerOwner) return;
    if (respawn) {
        spawnerOwner->spawned.PushFront(this);
    } else {
        spawnerOwner->unspawn.Get();
        Spawner* spawner = onyx::Find<Spawner, onyx_types::type_78bdb701>(spawnerOwner->spawner);
        Holder* h = attachment ? attachment : &NoHolder;
        spawner->Remove(h->key);
    }
}

void Striker::AttackDone() {}

// Does nothing but answer every event.
int Striker::IdleState(int event) {
    return event >= kStateUpdate && event <= kStateEvent3;
}

// Whether an enemy is on the screen, by where it stands and how high its feet are.
bool EnemyOnScreen(Enemy* enemy, const ScreenRect* rect) {
    float x = onyx::Get<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, onyx_types::type_6492d61d>(enemy->actorObject)->transform)->position.x;
    float y = onyx::Get<ActorFlags, 0x2eae5813u>(onyx::Find<ActorObject, onyx_types::type_6492d61d>(enemy->actorObject)->flags)->valueFc;
    return y > rect->bottom && y < rect->top && x < rect->right && x > rect->left;
}

bool Striker::FindEnemies(EnemyCatalog* enemies, EnemyList* found, bool justOne) {
    LevelCamera* levelCamera = onyx::Find<LevelCamera, onyx_types::type_67f2aa4d>(camera.Get()->levelCamera);
    onyx::Transform* view = onyx::Get<onyx::Transform, onyx::kTransform>(levelCamera->transform);
    float left = view->position.x;
    float bottom = view->position.y;
    float top = bottom + 216.0f;
    float right = left + 384.0f;
    ScreenRect rect;
    rect.left = left;
    rect.top = top;
    rect.right = right;
    rect.bottom = bottom;
    bool any = false;
    Enemy** i;
    Enemy* enemy;
    for (i = enemies->enemies; i != enemies->enemies + enemies->count; ++i) {
        enemy = *i;
        if ((enemy->componentFlags & 1) && !enemy->IsOut() && enemy->IsHeld() && enemy->actionMode == 0 && !enemy->flag141 && !enemy->flagAe9 && !enemy->Slot85() && enemy->Slot160() != 4 && EnemyOnScreen(enemy, &rect)) {
            if (justOne) return true;
            uint64_t size = found->size;
            uint64_t count = size + 1;
            Enemy** data;
            if (found->capacity < count) {
                uint64_t grown = found->capacity + (found->capacity >> 1);
                uint64_t required = grown >= count ? grown : count;
                Enemy** old = found->data;
                void* fresh = uint32_t(required) ? found->allocator->Allocate(uint32_t(required) * 8) : nullptr;
                found->capacity = required;
                data = static_cast<Enemy**>(fresh);
                if (old && fresh) {
                    if (fresh != old) __builtin_memcpy(fresh, old, size * 8);
                    uint64_t rest = found->size - size;
                    if (rest) __builtin_memmove(data + count - rest, old + size, rest * 8);
                    if (fresh != old) onyx::AllocatorFor(old)->Free(old);
                    else data = old;
                }
                size = found->size;
                count = size + 1;
                found->data = data;
            } else {
                data = found->data;
            }
            data[size] = enemy;
            any = true;
            found->size = count;
        }
    }
    return any;
}

// Towards the middle of the screen from `x`.
__attribute__((always_inline)) inline float Striker::SideOfOwner(const onyx::Vector3& position, float distance) {
    LevelCamera* levelCamera = onyx::Find<LevelCamera, onyx_types::type_67f2aa4d>(camera.Get()->levelCamera);
    return position.x > onyx::Get<onyx::Transform, onyx::kTransform>(levelCamera->transform)->position.x + 192.0f ? -distance : distance;
}

// Appears beside its owner, on the side of the screen with more room, and plays animation 15. When that is over it
// attacks if an enemy was in view and otherwise leaves.
int Striker::ArrivingState(int event) {
    switch (event) {
    case kStateUpdate:
        if (!AnimationDone()) return kStateHandled;
        if (flag2f8) states.Transition(AttackingStatePtr());
        else states.Transition(LeavingStatePtr());
        return kStateParentTookOver;
    case kStateEnter: {
        EnemyCatalog* enemies = onyx::Find<EnemyCatalog, 0x5f5cdd73u>(level.Get()->enemies);
        EnemyList found;
        if (static_cast<int64_t>(enemies->count * sizeof(Enemy*)) >= 1) flag2f8 = FindEnemies(enemies, &found, true);
        onyx::Vector3 position;
        position = onyx::Get<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, onyx_types::type_6492d61d>(owner->actorObject)->transform)->position;
        position.x += SideOfOwner(position, arrivalDistance);
        onyx::Vector3 target;
        target = position;
        onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject)->MoveTo(target);
        PlayAnimation(15, false, false, 1.0f);
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

// Stops, starts the attack for its owner and plays animation 11. When that is over it leaves.
int Striker::AttackingState(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            AttackDone();
            states.Transition(LeavingStatePtr());
            result = kStateParentTookOver;
        }
        break;
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        StartAttack(&attack, false, 1, owner);
        PlayAnimation(11, false, false, 1.0f);
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

// Plays animation 16, then frees its owner to call another striker and goes back to its spawner.
int Striker::LeavingState(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            owner->activeStriker = nullptr;
            Remove(true);
        }
        break;
    case kStateEnter:
        PlayAnimation(16, false, false, 1.0f);
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

void StrikerMrsChau::Slot19() {
    Striker::Slot19();
    value308 = nullptr;
}

// Like Striker's, but the attack is its own and AttackDone runs as it starts.
int StrikerMrsChau::AttackingState(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            states.Transition(LeavingStatePtr());
            result = kStateParentTookOver;
        }
        break;
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        StartAttack(&attack, false, 1, nullptr);
        PlayAnimation(11, false, false, 1.0f);
        AttackDone();
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

void StrikerMrChau::Slot19() {
    Striker::Slot19();
    value31c = 0;
    flag320 = 0;
    value324 = 0;
}

int StrikerMrChau::ArrivingState(int event) {
    int result = Striker::ArrivingState(event);
    if (result != kStateParentTookOver) {
        if (event == kStateExit) {
            value31c = 0;
            return kStateHandled;
        }
        return kStateUnhandled;
    }
    return result;
}

// Calling Stills costs the player guts, and health for what the guts don't cover.
int KnivesStills::AttackingState(int event) {
    int result = Striker::AttackingState(event);
    if (result != kStateParentTookOver) {
        if (event == kStateEnter) {
            ControllablePlayer* player = owner;
            float cost = __builtin_ceilf(player->strikerCost * player->GutsCostScale());
            float paid = player->guts;
            if (cost > paid) {
                player->LoseHealth(cost - paid);
                paid = player->guts;
            }
            if (cost < paid) paid = cost;
            player->LoseGuts(paid);
            return kStateHandled;
        }
        return kStateUnhandled;
    }
    return result;
}

// Facing left, Scott attacks with animation 19.
int KnivesScott::AttackingState(int event) {
    int result = Striker::AttackingState(event);
    if (result != kStateParentTookOver) {
        if (event == kStateEnter) {
            ActorFlags* flags = onyx::Get<ActorFlags, 0x2eae5813u>(onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject)->flags);
            if (flags->facingLeft) PlayAnimation(19, false, false, 1.0f);
            return kStateHandled;
        }
        return kStateUnhandled;
    }
    return result;
}

void KnivesNegaScott::Slot19() {
    Striker::Slot19();
    value330 = 0;
    value338 = 0;
}

void KnivesKim::Slot19() {
    Striker::Slot19();
    value310 = 0;
    flag314 = 0;
}

}  // namespace SPTG
