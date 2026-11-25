// States of the game's character, enemy, boss and striker classes, a second file
// beside EnemyClassStates.cpp and BossClassStates.cpp. Names are provisional.
#include "Striker.h"
#include "BossClasses.h"
#include "Spawner.h"
#include "InteractiveObject.h"
#include "Random.h"
#include "EnemyClasses.h"

namespace SPTG {

struct Pickup;
// SPTG::PickupSpawnInfo (vtable 0x186a248, 0x28 bytes): where a pickup spawner is to place a pickup. Todd's slot 200
// builds one with the id -1, the spawner and the place, and clears the rest.
struct PickupSpawnInfo {
    PickupSpawnInfo(uint32_t spawner, const onyx::Vector3& position)
        : id(-1), spawner(spawner), position(position), value1c(0), flag20(0), value24(0) {}
    virtual ~PickupSpawnInfo() {}
    int32_t id;                  // +0x8: -1 until the spawner numbers it
    uint32_t spawner;            // +0xc: the id of the spawner that is to place it
    onyx::Vector3 position;      // +0x10
    int32_t value1c;             // +0x1c
    uint8_t flag20;              // +0x20
    int32_t value24;             // +0x24
};
template<> struct SpawnInfoOf<Pickup> { typedef PickupSpawnInfo Type; };

// KnivesNegaScott slot 87 (0x94f940): attacks with animation 11, pays the striker's
// cost and knocks the enemy at +0x330 into its state at slot 226 when its animation
// allows; when the animation is over it leaves.
int KnivesNegaScott::State87(int event) {
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            states.Transition(LeavingStatePtr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter: {
        StartAttack(&attack, false, 1, owner);
        PlayAnimation(11, false, false, 1.0f);
        owner->PayStrikerCost();
        Enemy* enemy = reinterpret_cast<Enemy*>(value330);
        if (enemy->Kind() == 5) return kStateHandled;
        switch (enemy->animation) {
        case 0: case 1: case 7: case 42: case 43: case 44: case 58: case 59: case 60:
            enemy->states.Transition(enemy->State226Ptr());
        }
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

// KnivesKim slot 83 (0x9513b0): after Striker's attack, entry resets the wait. While her owner stays in his state at
// slot 241 the wait runs and then plays his animation 174; once he leaves it she is done. Leaving clears +0x3ba and,
// unless he's in his slot 233 state, moves him out of slot 241's into slot 96's.
int KnivesKim::AttackingState(int event) {
    if (Striker::AttackingState(event) == kStateParentTookOver) return kStateParentTookOver;
    switch (event) {
    case kStateEnter:
        value310 = 0.0f;
        flag314 = 0;
        return kStateHandled;
    case kStateExit: {
        if (flag314) return kStateHandled;
        ControllablePlayer* player = owner;
        if (!player->states.IsIn(player->State233Ptr())) {
            if (player->states.IsIn(player->State241Ptr())) player->states.Transition(player->State96Ptr());
        }
        owner->flag3ba = 0;
        return kStateHandled;
    }
    case kStateUpdate: {
        ControllablePlayer* player = owner;
        if (player->states.IsIn(player->State241Ptr())) {
            if (owner->animation == 174) return kStateHandled;
            value310 += Move_FrameDelta;
            if (value310 >= value30c) owner->PlayAnimation(174, false, false, 1.0f);
            return kStateHandled;
        }
        flag314 = 1;
        owner->flag3ba = 0;
        return kStateHandled;
    }
    }
    return kStateUnhandled;
}

// Todd slot 200 (0xa21ee0): after Boss's, entry with +0x1220 raised has pickup spawner 6 place a pickup at his position
// moved by +0x1214 (read as a vector of floats here; the header keeps the three provisional ints).
int Todd::State200(int event) {
    if (Boss::State200(event) == kStateParentTookOver) return kStateParentTookOver;
    if (event != kStateEnter) return kStateUnhandled;
    if (flag1220) {
        onyx::Vector3 position = onyx::Get<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, 0x6492d61du>(actorObject)->transform)->Position();
        const onyx::Vector3& offset = *reinterpret_cast<const onyx::Vector3*>(&value1214);
        PickupSpawnInfo info(6, onyx::Vector3(position.x + offset.x, position.y + offset.y, position.z + offset.z));
        onyx::Find<ActorSpawnerCatalog<Pickup>, onyx_types::type_279c1a0f>(level.Get()->pickupSpawners)->Spawn(info);
    }
    return kStateHandled;
}

// As in Striker.cpp: the arrival offset's sign, toward the side of the screen with more room.
__attribute__((always_inline)) inline float Striker::SideOfOwner(const onyx::Vector3& position, float distance) {
    LevelCamera* levelCamera = onyx::Find<LevelCamera, onyx_types::type_67f2aa4d>(camera.Get()->levelCamera);
    return position.x > onyx::Get<onyx::Transform, onyx::kTransform>(levelCamera->transform)->position.x + 192.0f ? -distance : distance;
}

// KnivesKim slot 81 (0x950f50): appears beside her owner on the side of the screen with more room, half a unit lower,
// turns herself and her owner toward each other's side and plays animation 15. When that is over she attacks.
int KnivesKim::ArrivingState(int event) {
    switch (event) {
    case kStateUpdate:
        if (AnimationDone()) {
            states.Transition(AttackingStatePtr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    case kStateEnter: {
        onyx::Vector3 position;
        position = onyx::Get<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, onyx_types::type_6492d61d>(owner->actorObject)->transform)->position;
        float x = position.x + SideOfOwner(position, arrivalDistance);
        onyx::Vector3 target(x, position.y + -0.5f, position.z);
        onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject)->MoveTo(target);
        if (!(position.x > x) != !onyx::Get<ActorFlags, 0x2eae5813u>(onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject)->flags)->facingLeft)
            TurnAround();
        if (!(position.x > target.x) != !onyx::Get<ActorFlags, 0x2eae5813u>(onyx::Find<ActorObject, onyx_types::type_6492d61d>(owner->actorObject)->flags)->facingLeft)
            owner->TurnAround();
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

// KnivesStills slot 81 (0x94da10): Striker's arrival, but beside his owner on the side the owner faces and facing the
// same way. On entry he picks an enemy; one that isn't of kind 5, 6 or 8 and is in an animation that allows it is
// knocked into its slot 226 state.
int KnivesStills::ArrivingState(int event) {
    switch (event) {
    case kStateUpdate:
        if (!AnimationDone()) return kStateHandled;
        if (enemyInView) {
            states.Transition(AttackingStatePtr());
        } else {
            states.AssertOwner(this);   // keeps each branch's vtable load in the branch, as the original has it
            states.Transition(LeavingStatePtr());
        }
        return kStateParentTookOver;
    case kStateEnter: {
        if (Enemy* enemy = PickEnemy()) {
            enemyInView = 1;
            int kind = enemy->Kind();
            if (kind != 6 && kind != 8 && enemy->Kind() != 5) {
                switch (enemy->animation) {
                case 0: case 1: case 7: case 42: case 43: case 44: case 58: case 59: case 60:
                    enemy->states.Transition(enemy->State226Ptr());
                }
            }
        } else {
            enemyInView = 0;
        }
        float direction = onyx::Get<ActorFlags, 0x2eae5813u>(onyx::Find<ActorObject, onyx_types::type_6492d61d>(owner->actorObject)->flags)->facingLeft ? -1.0f : 1.0f;
        onyx::Vector3 position;
        position = onyx::Get<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, onyx_types::type_6492d61d>(owner->actorObject)->transform)->position;
        position.x += direction * arrivalDistance;
        onyx::Vector3 target;
        target = position;
        onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject)->MoveTo(target);
        bool ownerLeft = onyx::Get<ActorFlags, 0x2eae5813u>(onyx::Find<ActorObject, onyx_types::type_6492d61d>(owner->actorObject)->flags)->facingLeft;
        if (!ownerLeft != !onyx::Get<ActorFlags, 0x2eae5813u>(onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject)->flags)->facingLeft)
            TurnAround();
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

// StrikerMrChau slot 83 (0x94d400): plays animation 203. When it is over he goes after the enemy Striker::PickEnemy
// gives, appearing beside it on his own side, knocks it into its slot 226 state when it isn't of kind 5 and its
// animation allows, and repeats his attack (slot 87); without an enemy he leaves.
int StrikerMrChau::AttackingState(int event) {
    switch (event) {
    case kStateUpdate: {
        if (!AnimationDone()) return kStateHandled;
        Enemy* enemy = PickEnemy();
        if (!enemy) {
            states.Transition(LeavingStatePtr());
            return kStateParentTookOver;
        }
        onyx::Vector3 position;
        position = onyx::Get<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, onyx_types::type_6492d61d>(enemy->actorObject)->transform)->position;
        float x = onyx::Get<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject)->transform)->position.x;
        onyx::Vector3 target = position;
        target.x = (x > position.x ? 1.0f : -1.0f) * arrivalDistance + position.x;
        onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject)->MoveTo(target);
        if (enemy->Kind() != 5) {
            switch (enemy->animation) {
            case 0: case 1: case 7: case 42: case 43: case 44: case 58: case 59: case 60:
                enemy->states.Transition(enemy->State226Ptr());
            }
        }
        states.Transition(RepeatingStatePtr());
        return kStateParentTookOver;
    }
    case kStateEnter:
        PlayAnimation(203, false, false, 1.0f);
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

// Todd slot 266 (0xa24420): throws what slot 234 lifted. Entry starts the attack at +0xfd0, plays animation 53 and stops.
// 53 leads to 54; after +0x11e4 seconds of 54 (read as a float here; the header keeps a provisional int) he plays 89, and
// when that is done every object still held up in its slot 88 state (and without +0x50) is knocked away from him,
// the result going into his recent hits; then 90, and after it slot 186.
int Todd::State266(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate:
        switch (animation) {
        case 53:
            if (AnimationDone()) PlayAnimation(54, true, true, 1.0f);
            break;
        case 54:
            stateTime += Move_FrameDelta;
            if (AnimationDone() && stateTime > *reinterpret_cast<float*>(&value11e4)) PlayAnimation(89, false, true, 1.0f);
            break;
        case 89:
            if (AnimationDone()) {
                InteractiveCatalog* catalog = onyx::Get<InteractiveCatalog, onyx_types::type_7a93a527>(level.Get()->interactiveObjects);
                for (MountObject** i = catalog->objects; i != catalog->objects + catalog->count; ++i) {
                    InteractiveObject* object = reinterpret_cast<InteractiveObject*>(*i);
                    if (!object->states.IsIn(object->State88Ptr()) || object->flag50) continue;
                    float scale = Slot152();
                    int hit = object->Slot41(false, false, false, nullptr, this, scale, 0.0f, FacingSign(), 1.0f);
                    recentHits[0] = recentHits[1];
                    recentHits[1] = recentHits[2];
                    recentHits[2] = recentHits[3];
                    recentHits[3] = hit;
                }
                PlayAnimation(90, false, true, 1.0f);
            }
            break;
        case 90:
            if (AnimationDone()) {
                states.Transition(State186Ptr());
                result = kStateParentTookOver;
            }
            break;
        }
        break;
    case kStateEnter:
        StartAttack(&attackFb8.attack, false, 1, nullptr);
        PlayAnimation(53, false, true, 1.0f);
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        flag3bb = 1;
        stateTime = 0.0f;
        break;
    case kStateExit:
        flag3bb = 0;
        break;
    case kStateEvent3:
        break;
    default:
        result = kStateUnhandled;
        break;
    }
    return result;
}

// Enemy slot 168 (0x9e3170): whether the enemy may go on, by its mode at +0x914: never while mounted; mode 1 needs
// +0x810 and +0x813, mode 2 +0x813, and modes 3 to 5 +0x813 and a roll of 1 to 100 within the percentage at +0xa0c,
// +0xa10 or +0xa14 (compared unsigned, as the original's `ls` shows).
bool Enemy::Slot168() {
    if (IsMounted()) return false;
    switch (value914) {
    case 1:
        if (!flag810) return false;
        return flag813 != 0;
    case 2:
        return flag813 != 0;
    case 3:
        if (!flag813) return false;
        {
            uint32_t chance = valueA0c;
            return static_cast<uint32_t>(RandomRange(1, 100)) <= chance;
        }
    case 4:
        if (!flag813) return false;
        {
            uint32_t chance = valueA10;
            return static_cast<uint32_t>(RandomRange(1, 100)) <= chance;
        }
    case 5:
        if (!flag813) return false;
        {
            uint32_t chance = valueA14;
            return static_cast<uint32_t>(RandomRange(1, 100)) <= chance;
        }
    }
    return false;
}

// Boss slot 168 (0xa1ad50): a raised +0xd24 answers yes once; otherwise Enemy's test.
bool Boss::Slot168() {
    if (flagD24) {
        flagD24 = 0;
        return true;
    }
    if (IsMounted()) return false;
    switch (value914) {
    case 1:
        if (!flag810) return false;
        return flag813 != 0;
    case 2:
        return flag813 != 0;
    case 3:
        if (!flag813) return false;
        {
            uint32_t chance = valueA0c;
            return static_cast<uint32_t>(RandomRange(1, 100)) <= chance;
        }
    case 4:
        if (!flag813) return false;
        {
            uint32_t chance = valueA10;
            return static_cast<uint32_t>(RandomRange(1, 100)) <= chance;
        }
    case 5:
        if (!flag813) return false;
        {
            uint32_t chance = valueA14;
            return static_cast<uint32_t>(RandomRange(1, 100)) <= chance;
        }
    }
    return false;
}

// EnemyJake slot 168 (0x9f4140): never with +0x11c1 raised; otherwise Enemy's test.
bool EnemyJake::Slot168() {
    if (flag11c1) return false;
    if (IsMounted()) return false;
    switch (value914) {
    case 1:
        if (!flag810) return false;
        return flag813 != 0;
    case 2:
        return flag813 != 0;
    case 3:
        if (!flag813) return false;
        {
            uint32_t chance = valueA0c;
            return static_cast<uint32_t>(RandomRange(1, 100)) <= chance;
        }
    case 4:
        if (!flag813) return false;
        {
            uint32_t chance = valueA10;
            return static_cast<uint32_t>(RandomRange(1, 100)) <= chance;
        }
    case 5:
        if (!flag813) return false;
        {
            uint32_t chance = valueA14;
            return static_cast<uint32_t>(RandomRange(1, 100)) <= chance;
        }
    }
    return false;
}

// ControllablePlayer slot 195 (0x989080): plays animation 86. When an animation is over: after 86 the character at
// +0x1448 gets reaction 1, and unless its slot 82 holds the player plays 87; when it holds, the player goes on to state
// 197 (with +0x13f9 and move bit 5 learned) or 199 (move bit 7). After any other animation the player goes back to
// state 98 while his button +0x141c is held, else to 96.
int ControllablePlayer::State195(int event) {
    switch (event) {
    case kStateUpdate:
        if (!AnimationDone()) return kStateHandled;
        if (animation == 86) {
            static_cast<BaseCharacter*>(handle1448->object)->ReactTo(handle1448 ? static_cast<BaseCharacter*>(handle1448->object) : nullptr, 1, nullptr);
            if (!static_cast<BaseCharacter*>(handle1448->object)->Slot82()) {
                PlayAnimation(87, false, false, 1.0f);
                return kStateHandled;
            }
            if (flag13f9) {
                PlayerInfoView* info = onyx::Find<PlayerInfoView, 1180775934u>(playerInfo);
                if ((info->moves & 0x20) || info->allMoves) {
                    states.Transition(State197Ptr());
                    return kStateParentTookOver;
                }
            } else {
                states.AssertOwner(this);   // keeps the player-info handle's load out of the branch, as the original has it
            }
            PlayerInfoView* info = onyx::Find<PlayerInfoView, 1180775934u>(playerInfo);
            if ((info->moves & 0x80) || info->allMoves) {
                states.Transition(State199Ptr());
                return kStateParentTookOver;
            }
            return kStateHandled;
        }
        if (input->held & (1ull << value141c)) states.Transition(State98Ptr());
        else states.Transition(State96Ptr());
        return kStateParentTookOver;
    case kStateEnter:
        PlayAnimation(86, false, true, 1.0f);
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
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

// GigaGideon slot 96 (0xa58f10): standing by armor mode (+0xd4c). Entry stops and loops animation 12 (mode 1) or 0
// (mode 2). An update that passes Boss's two checks puts him at the mode's height (+0x11e0 or +0x11e4), takes that as
// his ground and goes to state 258 (mode 1) or 244 (mode 2).
// The height is read back from the position after the actor lookup: that keeps the copy of the height an integer copy
// that is then moved to a float register, as in the original.
int GigaGideon::State96(int event) {
    switch (event) {
    case kStateUpdate: {
        if (CheckA1e720()) return kStateHandled;
        if (!CheckA1e820()) return kStateHandled;
        onyx::Vector3 position = onyx::Find<onyx::Transform, onyx::kTransform>(onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject)->transform)->position;
        switch (armorMode) {
        case 1:
            {
                position.z = value11e0;
                ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject);
                float height = position.z;
                actor->MoveTo(position);
                groundHeight = static_cast<int32_t>(height);
            }
            states.Transition(State258Ptr());
            return kStateParentTookOver;
        case 2:
            {
                position.z = value11e4;
                ActorObject* actor = onyx::Find<ActorObject, onyx_types::type_6492d61d>(actorObject);
                float height = position.z;
                actor->MoveTo(position);
                groundHeight = static_cast<int32_t>(height);
            }
            states.Transition(State244Ptr());
            return kStateParentTookOver;
        }
        return kStateHandled;
    }
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        switch (armorMode) {
        case 1:
            PlayAnimation(12, true, false, 1.0f);
            break;
        case 2:
            PlayAnimation(0, true, false, 1.0f);
            break;
        }
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

// GigaGideon slot 242 (0xa5a000): Boss's low-health effect, with the attachment's effect (the attachment at +0xba8, its
// effect at +0x88) run alongside: both stop together, both start with their own target and modifiers, and both take
// the same rate. Without an attachment it is Boss's. Unlike Boss's, slot 243 isn't asked.
// Not yet matched (not credited): the original tests the three pointers (attachment modifiers, modifiers, effect) with
// one branch each, the first in the block that picks the attachment's modifiers; here they merge into one ccmp chain.
void GigaGideon::Slot242() {
    if (!handleBa8 || !handleBa8->object) {
        Boss::Slot242();
        return;
    }
    AnimatedAttachment* attachment = reinterpret_cast<AnimatedAttachment*>(handleBa8->object);
    ActorEffect* attached = attachment->effect;
    onyx::Component* modifiers = handleB98 ? handleB98->object : nullptr;
    onyx::Component* attachedModifiers = attachment->modifiers ? attachment->modifiers->object : nullptr;
    if (!attachedModifiers || !modifiers || !attached || !referenceD00) return;
    float left = health;
    float limit = MaxHealth() * lowHealthShare;
    if (left <= limit && !flagD28) {
        ActorEffect* effect = static_cast<ActorEffect*>(referenceD00);
        if (effect->flag18) {
            onyx::ComponentHandle* handle = onyx::Get<ActorFlags, 0x2eae5813u>(onyx::Find<ActorObject, 0x6492d61du>(actorObject)->flags)->handle50;
            effect->target = handle ? handle->object : nullptr;
            effect->modifiers = modifiers;
            static_cast<ActorEffect*>(referenceD00)->EnsureReady();
            onyx::ComponentHandle* visual = onyx::Get<AttachmentVisual, onyx_types::type_6448f1af>(attachment->animatedObject)->handle50;
            attached->target = visual ? visual->object : nullptr;
            attached->modifiers = attachedModifiers;
            attached->EnsureReady();
            effect = static_cast<ActorEffect*>(referenceD00);
        }
        float rate = (limit - left) / limit * (lowHealthRate + -1.0f) + 1.0f;
        effect->SetRate(rate);
        attached->SetRate(rate);
        static_cast<ActorEffect*>(referenceD00)->Slot3();
        attached->Slot3();
    } else {
        ActorEffect* effect = static_cast<ActorEffect*>(referenceD00);
        if (!effect->flag18) {
            effect->Stop();
            attached->Stop();
        }
    }
}

static_assert(__builtin_offsetof(GigaGideon, attackFa0) == 0xfa0, "GigaGideon attackFa0");
static_assert(__builtin_offsetof(GigaGideon, hit1030) == 0x1030, "GigaGideon hit1030");
static_assert(__builtin_offsetof(GigaGideon, rageDelay) == 0x1208, "GigaGideon rageDelay");
static_assert(__builtin_offsetof(GigaGideon, rageKind) == 0x12b0, "GigaGideon rageKind");

extern "C" int32_t Attack_NextId;   // 0x1925328
// 0xa37880: a point for GigaGideon's shots, from the list at +0x1260 (only its use here is known).
void CallA37880(onyx::Vector3* out, Boss* boss, PairList* list);

// GigaGideon slot 274 (0xa5d0f0): loops animation 22 and fires shotCount shots, one every shotInterval (scaled by
// SpeedScale), from spawner +0x109c at a point 0xa37880 picks, at the target's ground height; then state 270.
// Not yet matched (not credited): only the order of the record's stores differs (the original loads the zero vector
// and the attack counter after storing the vtable, as EnemyMini's and EnemyShooter's attempts also find).
int GigaGideon::State274(int event) {
    switch (event) {
    case kStateUpdate:
        stateTime -= Move_FrameDelta;
        if (!(stateTime <= 0.0f)) return kStateHandled;
        if (static_cast<uint32_t>(valueD50) >= shotCount) {
            states.Transition(State270Ptr());
            return kStateParentTookOver;
        }
        {
            onyx::Vector3 point;
            CallA37880(&point, this, &list1260);
            point.z = static_cast<float>(static_cast<BaseCharacter*>(target->object)->groundHeight);
            ProjectileSpawnInfo info(shotSpawner, point, onyx::Vector3::Zero(), ++Attack_NextId, 1);
            FireProjectile(info);
        }
        stateTime = shotInterval / SpeedScale();
        ++valueD50;
        return kStateHandled;
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(22, true, true, 1.0f);
        stateTime = 0.0f;
        valueD50 = 0;
        flag3bb = 1;
        return kStateHandled;
    case kStateEvent3:
        return kStateHandled;
    default:
        return kStateUnhandled;
    case kStateExit:
        flag3bb = 0;
        return kStateHandled;
    }
}

// GigaGideon slot 280 (0xa5e240): the rage. Entry stops, plays animation 11 on himself and the attachment and starts the
// attack at +0xfa0. Once +0x1208 seconds (scaled by SpeedScale) have passed, the first time only, it runs 0x995c50
// with +0x12b0 and gives every player on the ground who isn't out or in state 114 the hit at +0x1030. When the
// animation is done he goes to state 272. Leaving hides the attachment.
int GigaGideon::State280(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate: {
        stateTime += Move_FrameDelta;
        if (stateTime * SpeedScale() >= rageDelay && !ragedD68) {
            Call995c50(rageKind);
            PlayerCatalog* catalog = onyx::Get<PlayerCatalog, onyx_types::type_0bf4a9b7>(level.Get()->players);
            if (static_cast<uint32_t>(catalog->count) != 0) {
                for (ControllablePlayer** i = catalog->players; i != catalog->players + catalog->count; ++i) {
                    ControllablePlayer* player = *i;
                    if (!player->IsOut() && !player->states.IsIn(player->State114Ptr()) && player->IsOnGround())
                        player->Slot93(&hit1030);
                }
            }
            ragedD68 = 1;
        }
        if (AnimationDone()) {
            states.Transition(State272Ptr());
            result = kStateParentTookOver;
        }
        break;
    }
    case kStateEnter:
        motion = onyx::Vector3::Zero();
        motionTarget = onyx::Vector3::Zero();
        PlayAnimation(11, false, true, 1.0f);
        PlayAttachmentAnimation(handleBa8, 11, false);
        StartAttack(&attackFa0.attack, false, 1, nullptr);
        stateTime = 0.0f;
        coreExposed = 0;
        ragedD68 = 0;
        flag3bb = 1;
        break;
    case kStateEvent3:
        break;
    default:
        result = kStateUnhandled;
        break;
    case kStateExit:
        coreExposed = 1;
        flag3bb = 0;
        HideAttachment();
        break;
    }
    return result;
}

// ControllablePlayer slot 169 (0x987880): the ground combo. Entry starts the attack at +0x8e0, slides or stops as state 96
// does, plays animation 19 and starts the window +0x11d8 from +0x11dc (both floats here; the header keeps provisional
// ints, which serialization reads). While the window runs, with timer 1 (+0x1430) up and move bit 8 learned, the
// player goes to state 221. When an animation is over: with timer 0 (+0x142c) out, state 171; otherwise an attack
// input goes to state 217 (byte 5 set) or 175, and without one the combo goes on (19 and 20 to 21, 21 to 22, 22 to
// 20) with the attack restarted. Byte 3 of the attack input is read as a byte; the header doesn't split it out.
// Not yet matched (not credited): the original reads the window again after its zero test (two loads); here the
// test's load is reused.
int ControllablePlayer::State169(int event) {
    int result = kStateHandled;
    float& window = *reinterpret_cast<float*>(&value11d8);
    switch (event) {
    case kStateUpdate:
        if (flag11e0 && !(__builtin_fabsf(window) <= 0.000001f)) {
            window = __builtin_fmaxf(window - Move_FrameDelta, 0.0f);
            if (value142c[1] > 0.0f) {
                PlayerInfoView* info = onyx::Find<PlayerInfoView, 1180775934u>(playerInfo);
                if ((info->moves & 0x100) || info->allMoves) {
                    states.Transition(State221Ptr());
                    return kStateParentTookOver;
                }
            }
        }
        if (!AnimationDone()) return kStateHandled;
        if (!(value142c[0] > 0.0f)) {
            states.Transition(State171Ptr());
            return kStateParentTookOver;
        }
        {
            int current = animation;
            AttackInput input;
            ReadAttackInput(&input);
            if (reinterpret_cast<const uint8_t*>(&input)[3]) {
                if (input.value5) states.Transition(State217Ptr());
                else states.Transition(State175Ptr());
                return kStateParentTookOver;
            }
            int next;
            switch (current) {
            case 19: next = 21; break;
            case 20: next = 21; break;
            case 21: next = 22; break;
            case 22: next = 20; break;
            default: next = current; break;
            }
            PlayAnimation(next, false, true, 1.0f);
            StartAttack(&attack8e0, false, 1, nullptr);
        }
        break;
    case kStateEnter:
        StartAttack(&attack8e0, false, 1, nullptr);
        value1bc = 0.0f;
        if (__builtin_fabsf(motion.x) > jumpBackSpeed) {
            float sign = FacingSign();
            motionTarget.x = slideSpeed * sign;
        } else {
            motion.x = 0.0f;
            motionTarget.x = 0.0f;
        }
        PlayAnimation(19, false, true, 1.0f);
        value11d8 = value11dc;
        flag11e0 = 1;
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

}  // namespace SPTG
