// SPTG::Enemy's own virtuals other than its states (see
// docs/GAME_CLASSES.md#enemy-states). Names are provisional.
#include "Camera.h"
#include "Enemy.h"
#include "Random.h"
#include "Spawner.h"

namespace SPTG {

// Slot 16 (0x9e1fa0): the actor update. An enemy that is not held is released
// (slot 71) when its attachment's ID is outside 10001-999999. The scaled values
// are then reset to their bases and scaled again (slot 229).
void Enemy::Update() {
    UpdateEnemy();
}

// Slot 41 (0x9cd820): raises +0x130, runs BaseCharacter's slot 41 and starts the
// attack at +0x258.
int Enemy::Slot41(bool a, bool b, bool c, void* data, BaseCharacter* other, float scale, float f1, float f2, float f3) {
    flag130 = 1;
    BaseCharacter::Slot41(a, b, c, data, other, scale, f1, f2, f3);
    return StartAttack(&attack258, false, 3, other);
}

// Slot 45 (0x9cd870): 0 with +0x130 set, 3 in action mode 8, else the
// partner's slot 45 (1 without a partner).
int Enemy::Slot45() {
    if (flag130) return 0;
    if (actionMode == 8) return 3;
    BaseCharacter* partner = partnerHandle ? static_cast<BaseCharacter*>(partnerHandle->object) : nullptr;
    if (partner) return partner->Slot45();
    return 1;
}

// Slot 69 (0x9e2030): takes the damage through BaseCharacter, raises +0x811,
// sends the current state the damage event and passes the damage to the other
// character (slot 43) and to 0x995a30.
float Enemy::TakeDamage(const void* hit, BaseCharacter* other) {
    return TakeEnemyDamage(hit, other);
}

// Slot 229 (0x9d9bc0): scales the three base values by the scaling's factor and
// adds the bonus for its mode (3, 2 or any other), then runs slot 66 and resets
// +0x32c to slot 150. Not yet matched (not credited): the original computes the
// address of `bonus` before comparing the mode with 2, and every selection
// tried so far computes it after. The rest matches.
void Enemy::Slot229() {
    int mode = scaling.Get()->mode;
    int extra = mode == 3 ? bonusMode3 : mode == 2 ? bonusMode2 : bonus;
    GameDifficultyAccessor* values = scaling.Get();
    scaled9c = base98 * values->scale + extra;
    scaled2f8 = values->scale * base2f4 + extra;
    scaled910 = values->scale * base90c + extra;
    RestoreHealth();
    guts = MaxGuts();
}

// Slot 4 (0x9e06c0): BaseCharacter's serialization, then Enemy's own fields
// (see Archive.h): two handles, two component slots and the settings from
// +0x8f8 to +0xa20.
void Enemy::Slot4(onyx::Archive& archive, ComponentSlot::Source* source) {
    BaseCharacter::Slot4(archive, source);
    onyx::TransferHandle(handle788, archive, source);
    onyx::TransferHandle(handle790, archive, source);
    AssignComponentSlot<7752160u, 1051727473u>(&levelGate, source);
    AssignComponentSlot<7998976u, 1330418336u>(&scaling, source);
    onyx::TransferAs<uint32_t>(archive, value8f8);
    onyx::TransferAs<uint32_t>(archive, value8fc);
    onyx::TransferAs<uint32_t>(archive, value900);
    onyx::TransferAs<uint32_t>(archive, specialType);
    onyx::Transfer(archive, specialSpeedScale);
    onyx::Transfer(archive, base90c);
    onyx::TransferAs<uint32_t>(archive, value914);
    onyx::Transfer(archive, value918);
    onyx::Transfer(archive, attackRange);
    onyx::Transfer(archive, chance);
    onyx::Transfer(archive, value924);
    onyx::Transfer(archive, value928);
    onyx::Transfer(archive, value92c);
    onyx::Transfer(archive, value930);
    onyx::Transfer(archive, value934);
    onyx::Transfer(archive, value938);
    onyx::Transfer(archive, value93c);
    onyx::Transfer(archive, flag940);
    onyx::Transfer(archive, range0.min);
    onyx::Transfer(archive, range0.max);
    onyx::Transfer(archive, range0.depth);
    onyx::Transfer(archive, range1.min);
    onyx::Transfer(archive, range1.max);
    onyx::Transfer(archive, range1.depth);
    onyx::Transfer(archive, range2.min);
    onyx::Transfer(archive, range2.max);
    onyx::Transfer(archive, range2.depth);
    onyx::Transfer(archive, range3.min);
    onyx::Transfer(archive, range3.max);
    onyx::Transfer(archive, range3.depth);
    onyx::Transfer(archive, flag974);
    onyx::Transfer(archive, flags978);
    onyx::Transfer(archive, value97c);
    onyx::Transfer(archive, value980);
    onyx::Transfer(archive, delay984);
    onyx::Transfer(archive, gutsChance);
    onyx::Transfer(archive, gutsChanceLimit);
    onyx::Transfer(archive, value990);
    onyx::Transfer(archive, counterChanceHealthy);
    onyx::Transfer(archive, counterChance);
    onyx::Transfer(archive, counterHealthThreshold);
    onyx::Transfer(archive, followUpChance);
    onyx::Transfer(archive, value9a4);
    onyx::Transfer(archive, assistChance);
    onyx::Transfer(archive, delay9ac);
    onyx::Transfer(archive, dashSpeed);
    onyx::Transfer(archive, dashHold);
    onyx::Transfer(archive, dashDelayBase);
    onyx::Transfer(archive, value9bc);
    onyx::Transfer(archive, value9c8);
    onyx::Transfer(archive, partnerDelay);
    onyx::Transfer(archive, removeFlag);
    onyx::Transfer(archive, flag9d1);
    onyx::Transfer(archive, blinkDuration);
    onyx::Transfer(archive, blinkPeriod);
    onyx::Transfer(archive, value9dc);
    onyx::Transfer(archive, value9e0);
    onyx::Transfer(archive, bonus);
    onyx::Transfer(archive, value9e8);
    onyx::Transfer(archive, bonusMode2);
    onyx::Transfer(archive, value9f0);
    onyx::Transfer(archive, bonusMode3);
    onyx::Transfer(archive, value9f8);
    onyx::Transfer(archive, value9fc);
    onyx::Transfer(archive, valueA00);
    onyx::Transfer(archive, valueA04);
    onyx::TransferAs<uint32_t>(archive, spawnerId);
    onyx::Transfer(archive, valueA0c);
    onyx::Transfer(archive, valueA10);
    onyx::Transfer(archive, valueA14);
    onyx::Transfer(archive, valueA18);
    onyx::Transfer(archive, valueA1c);
    onyx::Transfer(archive, valueA20);
    onyx::Transfer(archive, valueB4c);
    onyx::Transfer(archive, valueB50);
}

// Where a thrower lets go, relative to the actor. During animation 139 it adds this enemy's own offset.
onyx::Vector2 Enemy::Slot147() {
    if (animation != 139) return value320;
    float x = value320.x;
    float sign = FacingSign();
    onyx::Vector2 point;
    point.x = x + valueB4c * sign;
    point.y = value320.y + valueB50;
    return point;
}

// Adds a push set per enemy to its motion, against the way it faces, and goes to the state at slot 108.
void Enemy::Slot228() {
    float backward = pushBack;
    float y = pushY;
    float z = pushZ;
    float sign = FacingSign();
    float x = motion.x - backward * sign;
    float newY = y + motion.y;
    float newZ = z + motion.z;
    motionTarget.z = groundZ;
    motion.x = x;
    motion.y = newY;
    motion.z = newZ;
    motionC4 = groundC4;
    states.Transition(State108Ptr());
}

// Whether this enemy can act on `other`: only when `other`'s slot 45 is 0 or 2. When the level's mode is 12,
// `other` must also have a slot 50 of 3 and no partner.
bool Enemy::Slot46(BaseCharacter* other) {
    if (Slot85()) return false;
    int kind = other->Slot45() | 2;
    bool result = kind == 2;
    if (static_cast<LevelGateState*>(levelGate.Get()->state->object)->mode == 12) {
        bool free = other->Slot50() == 3 && (!other->partnerHandle || !other->partnerHandle->object);
        return free & (kind == 2);
    }
    return result;
}

// Leaves the level. The spawner that placed it either keeps it to spawn again or removes it.
void Enemy::Remove(bool respawn) {
    Release();
    if (spawnerId == 67) return;
    removedForRespawn = respawn;
    LevelItemAccessor* items = level.Get();
    ActorSpawnerCatalog<Enemy>* catalog = onyx::Get<ActorSpawnerCatalog<Enemy>, onyx_types::type_4a2d83cc>(items->enemySpawners);
    const uint32_t id = spawnerId;
    ActorSpawner<Enemy>** i = catalog->spawners;
    ActorSpawner<Enemy>** end = i + catalog->count;
    if (i == end) return;
    while ((*i)->id != id) {
        ++i;
        if (i == end) return;
    }
    ActorSpawner<Enemy>* owner = *i;
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

// Slot 159 (0x9cf9a0): resets the enemy, puts it where the spawn says and records it.
void Enemy::Spawn(const EnemySpawnInfo* info) {
    SpawnFrom(info);
}

// Places a spawning enemy: exactly where the record says, or 30 past the edge of the screen it comes in from. The
// left and right edges keep the lane the record gives, and the top and bottom keep the first player's position.
// Not yet matched: the original carries the height across the move in a general register, without reloading it from the
// position it passed. It seems to know the move doesn't change that position, which these declarations can't express.
void Enemy::PlaceAtSpawn(const EnemySpawnInfo* info) {
    if (info->side == 4) {
        PlaceAt(info->position);
    } else {
        ScreenRect rect;
        GetScreenRect(&rect);
        PlayerCatalog* catalog = onyx::Get<PlayerCatalog, onyx_types::type_0bf4a9b7>(level.Get()->players);
        float x = onyx::Get<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, onyx_types::type_6492d61d>(reinterpret_cast<AnimatedAiActor*>(catalog->players[0])->actorObject)->transform)->position.x;
        onyx::Vector3 position;
        switch (info->side) {
        case 0:
            position = onyx::Vector3(rect.left + -30.0f, info->laneY, info->laneZ);
            break;
        case 1:
            position = onyx::Vector3(rect.right + 30.0f, info->laneY, info->laneZ);
            break;
        case 2:
            position = onyx::Vector3(x, rect.top + 30.0f, info->laneZ);
            break;
        case 3:
            position = onyx::Vector3(x, rect.bottom + -30.0f, info->laneZ);
            break;
        default:
            return;
        }
        onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject)->MoveTo(position);
        groundHeight = static_cast<int>(position.z);
    }
}

// Slot 7 (0x9e0590): BaseCharacter's reset, then clears what the two link handles hold.
void Enemy::Slot7() {
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
    if (handle790 && handle790->object) reinterpret_cast<EnemyLinkFlag*>(handle790->object)->flag78 = 0;
    if (handle788 && handle788->object) {
        reinterpret_cast<EnemyLinkObject*>(handle788->object)->Block()->value4 = 0;
        reinterpret_cast<EnemyLinkObject*>(handle788->object)->Block()->flagsC &= ~8;
        reinterpret_cast<EnemyLinkObject*>(handle788->object)->Block()->flagsC |= 2;
    }
}

// Slot 90 (0x9ce680): takes guts, up to +0x2f8, and with bit 4 of +0x978 set and few enough left it may go to AI mode 4.
void Enemy::LoseGuts(float amount) {
    float left = guts - amount;
    left = left < 0.0f ? 0.0f : left;
    if (scaled2f8 < left) left = scaled2f8;
    guts = left;
    if (value874 == 0 && (flags978 & 0x10) && left <= gutsChanceLimit) {
        float roll = static_cast<uint32_t>(RandomRange<int>(1, 100));
        if (gutsChance >= roll) value874 = 4;
    }
}

// Slot 162 (0x9cfa40): lists the attacks of kinds 31 and 32, unless the target refuses them.
// Not yet matched: the original keeps the index as the next value minus one, so one more register is in use.
bool Enemy::CollectSpecialAttacks(onyx::Vector<uint32_t>* out) {
    if (static_cast<BaseCharacter*>(target->object)->Slot83()) return false;
    bool found = false;
    for (uint32_t i = 0; i < attackList.size; ++i) {
        if (static_cast<uint32_t>(attackList.data[i].kind - 31) <= 1) {
            out->Append(i);
            found = true;
        }
    }
    return found;
}

// Slot 163 (0x9cfbe0): lists the other attacks, leaving out what slot 237 refuses and kind 202.
// Not yet matched, for the same reason as slot 162.
void Enemy::CollectBasicAttacks(onyx::Vector<uint32_t>* out) {
    for (uint32_t i = 0; i < attackList.size; ++i) {
        switch (attackList.data[i].kind) {
        case 31:
        case 32:
        case 39:
        case 45:
        case 61:
        case 202:
            break;
        default:
            out->Append(i);
            break;
        }
    }
}

// A roll from 0 to `total`, the weights of the attacks being picked from.
// Not yet matched: the checker reports a binding conflict that hasn't been looked into.
int Enemy::RollWeight(uint8_t total) {
    return RandomRange<int>(0, total);
}

// Slot 165 (0x9d0040): picks one of the listed attacks, by the weight each carries at +0x10. -1 when none can be picked.
// Not yet matched: the first loop's four running totals sit in different registers.
int Enemy::PickAttack(const onyx::Vector<uint32_t>* candidates) {
    uint8_t total = 0;
    for (uint32_t i = 0; i < candidates->size; ++i) {
        uint32_t index = candidates->data[i];
        total += attackList.data[index].flag10;
    }
    if (total) {
        int roll = RollWeight(total);
        for (uint32_t i = 0; i < candidates->size; ++i) {
            uint32_t index = candidates->data[i];
            uint8_t weight = attackList.data[index].flag10;
            if (weight >= roll) return index;
            roll -= weight;
        }
    }
    return -1;
}

// Slot 169 (0x9d01f0): whether the actor stands within half of one of the four ranges of the origin, along x and in depth.
bool Enemy::TargetInRange(int which) {
    switch (which) {
    case 0: return WithinRange(range0.min, range0.max, range0.depth);
    case 1: return WithinRange(range1.min, range1.max, range1.depth);
    case 2: return WithinRange(range2.min, range2.max, range2.depth);
    case 3: return WithinRange(range3.min, range3.max, range3.depth);
    }
    return false;
}

// Slot 56 (0x9cdf00): becoming solid goes back to the state at slot 96 on the ground or slot 102 in the air, unless it's
// out. Otherwise it stops, keeps falling if in the air, and goes to the state at slot 172.
// Not yet matched: the original tests the inverted value it stored (`tbnz` on the `mvn`), and ours the parameter.
void Enemy::SetSolid(bool solid) {
    flag940 = solid;
    bool notSolid = !solid;
    flagAe9 = notSolid;
    if (notSolid) {
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        if (!IsOnGround()) {
            motionTarget.z = savedZ;
            motionC4 = savedC4;
        }
        states.Transition(State172Ptr());
    } else if (!IsOut()) {
        if (IsOnGround()) states.Transition(State96Ptr());
        else states.Transition(State102Ptr());
    }
}

// Slot 94 (0x9ce820): knocked out. It lets go, loses all health and guts, and goes down: from state 114 to 116, otherwise to 108,
// and not at all from 108, 112, 116, 222 or 200.
void Enemy::Slot94() {
    Dismount();
    health = 0.0f;
    guts = 0.0f;
    if (!states.IsIn(State108Ptr()) && !states.IsIn(State112Ptr()) && !states.IsIn(State116Ptr()) && !states.IsIn(State222Ptr()) && !states.IsIn(State200Ptr())) {
        if (states.IsIn(State114Ptr())) states.Transition(State116Ptr());
        else states.Transition(State108Ptr());
    }
}

// The type tests (slot 12): each class's own type or one of its base's (SPTG_TYPE).
bool Enemy::IsA(uint32_t type) { return IsType(type); }   // 0x9e1f00

// 0x9dc2d0: sets the facing mode (unless it is 3, which holds) and faces the enemy, and the mount it rides, right for
// mode 1 and left for mode 0.
void Enemy::Call9dc2d0(uint32_t mode) {
    if (mode87c == 3) return;
    mode87c = mode;
    ActorFlags* flags = onyx::Find<ActorFlags, 0x2eae5813u>(onyx::Find<ActorObject, 0x6492d61du>(actorObject)->flags);
    ActorFlags* mountFlags = nullptr;
    if (mounted && mountHandle && mountHandle->object) {
        BaseCharacter* mount = static_cast<BaseCharacter*>(mountHandle->object);
        mountFlags = onyx::Find<ActorFlags, 0x2eae5813u>(onyx::Find<ActorObject, 0x6492d61du>(mount->actorObject)->flags);
    }
    if (mode87c == 0) {
        flags->facingLeft = 1;
        if (mountFlags) mountFlags->facingLeft = 1;
    } else if (mode87c == 1) {
        flags->facingLeft = 0;
        if (mountFlags) mountFlags->facingLeft = 0;
    }
}

// 0x9dc4c0: faces the target: mode 1 (right, returning -1) when it is right of the enemy, else mode 0 (left, returning 1).
float Enemy::Update9dc4c0() {
    BaseCharacter* player = static_cast<BaseCharacter*>(target->object);
    float targetX = onyx::Get<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, 0x6492d61du>(player->actorObject)->transform)->position.x;
    float x = onyx::Get<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, 0x6492d61du>(actorObject)->transform)->position.x;
    if (targetX > x) {
        Call9dc2d0(1);
        return -1.0f;
    }
    Call9dc2d0(0);
    return 1.0f;
}

// 0x9daf90: the enemy's position with x just off the screen on the side it faces: `distance` left of the camera's left
// edge, or `distance` right of its right edge (384 further). Not yet matched (not credited): the original loads the 384
// from a page address it set up before the transform lookups and kept across them.
void Enemy::PickPoint(onyx::Vector3* out, float distance) {
    LevelCamera* levelCamera = onyx::Find<LevelCamera, onyx_types::type_67f2aa4d>(camera.Get()->levelCamera);
    float left = onyx::Get<onyx::Transform, onyx::kTransform>(levelCamera->transform)->position.x;
    float x = left - distance;
    *out = onyx::Get<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, 0x6492d61du>(actorObject)->transform)->Position();
    if (!onyx::Get<ActorFlags, 0x2eae5813u>(onyx::Find<ActorObject, 0x6492d61du>(actorObject)->flags)->facingLeft) x = left + 384.0f + distance;
    out->x = x;
}

// 0x9db480: the stance animation. On foot, 1 with +0x974 set, else 7; mounted, 59 or 43 with +0x974 set and 58 or 42
// without (by the mount's slot 49), and while still mounted the mount plays 99 or 98.
void Enemy::Call9db480() {
    if (IsMounted()) {
        if (flag974) {
            if (mountHandle && mountHandle->object) {
                PlayAnimation(static_cast<BaseCharacter*>(mountHandle->object)->Slot49() ? 59 : 43, true, false, 1.0f);
                if (IsMounted()) static_cast<BaseCharacter*>(mountHandle->object)->PlayAnimation(99, true, false, 1.0f);
            }
        } else {
            if (mountHandle && mountHandle->object) {
                PlayAnimation(static_cast<BaseCharacter*>(mountHandle->object)->Slot49() ? 58 : 42, true, false, 1.0f);
                if (IsMounted()) static_cast<BaseCharacter*>(mountHandle->object)->PlayAnimation(98, true, false, 1.0f);
            }
        }
    } else {
        if (flag974) PlayAnimation(1, true, false, 1.0f);
        else PlayAnimation(7, true, false, 1.0f);
    }
}

// 0x9db5c0: the unit direction in x and y from the actor to the point, or zero when they are within 1e-6.
void Enemy::DirectionTo(onyx::Vector2* out, Enemy* self, const onyx::Vector3& point) {
    onyx::Transform* transform = onyx::Get<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, 0x6492d61du>(self->actorObject)->transform);
    float x = transform->position.x;
    float y = transform->position.y;
    onyx::Vector2 offset(point.x - x, point.y - y);
    *out = offset;
    if (__builtin_fabsf(__builtin_sqrtf(offset.x * offset.x + offset.y * offset.y)) <= 1e-6f) {
        *out = onyx::Vector2::Zero();
    } else {
        float length = __builtin_sqrtf(offset.x * offset.x + offset.y * offset.y);
        out->x = offset.x / length;
        out->y = offset.y / length;
    }
}

}  // namespace SPTG
