// SPTG::Striker (vtable 0x18703d0, 87 slots): a helper a player calls in. It has its own state machine at +0x1f0 and
// starts its attack on behalf of the player who called it. StrikerYeti, StrikerMrChau, StrikerMrsChau and the Knives
// classes derive from it. Names are provisional.
#pragma once
#include "Camera.h"
#include "Enemy.h"

namespace SPTG {

// A growable list of enemies, freed when it goes out of scope.
struct EnemyList {
    onyx::Allocator* allocator;
    uint64_t capacity;
    uint64_t size;
    void* reserved;
    Enemy** data;
    EnemyList() {
        data = nullptr;
        capacity = 0;
        size = 0;
        allocator = reinterpret_cast<onyx::Allocator*>(reinterpret_cast<char*>(Handle_Heap) + 0x50);
    }
    ~EnemyList() {
        size = 0;
        if (data) onyx::AllocatorFor(data)->Free(data);
    }
};
bool EnemyOnScreen(Enemy* enemy, const ScreenRect* rect);   // 0x948ba0

struct Striker : AnimatedAiActor {
    typedef StateMachine<Striker>::State State;
    void Slot7() override;                                                   // slot 7
    void Update() override;                                                  // slot 16
    void Slot19() override;                                                  // slot 19
    void Remove(bool respawn) override;                                      // slot 70
    virtual void AttackDone();                 // slot 78: empty here, called when the attack animation ends
    virtual int IdleState(int event);          // slot 79
    virtual State IdleStatePtr();              // slot 80
    virtual int ArrivingState(int event);      // slot 81
    virtual State ArrivingStatePtr();          // slot 82
    virtual int AttackingState(int event);     // slot 83
    virtual State AttackingStatePtr();         // slot 84
    virtual int LeavingState(int event);       // slot 85
    virtual State LeavingStatePtr();           // slot 86
    float SideOfOwner(const onyx::Vector3& position, float distance);
    // Which enemies it could hit. With `justOne` it stops at the first and adds nothing to `found`.
    bool FindEnemies(EnemyCatalog* enemies, EnemyList* found, bool justOne);  // 0x9488d0

    void* slot1e8;                   // +0x1e8
    StateMachine<Striker> states;    // +0x1f0
    char padding_218[0x8];
    Attack baseAttack;               // +0x220: what `attack` is reset to
    float arrivalDistance;           // +0x278: how far from its owner it appears
    uint32_t spawnerId;              // +0x27c: which spawner placed it, or 8
    Attack attack;                   // +0x280
    ControllablePlayer* owner;       // +0x2d8: the player who called it
    bool removedForRespawn;          // +0x2e0
    char padding_2e1[0x17];
    uint8_t enemyInView;             // +0x2f8: set on arriving; without one it leaves without attacking
    char padding_2f9[0x3];
    uint32_t hitCount;               // +0x2fc: Mr. Chau's attacks, or how much Ramona heals
};
static_assert(__builtin_offsetof(Striker, states) == 0x1f0, "Striker states");
static_assert(__builtin_offsetof(Striker, attack) == 0x280, "Striker attack");
static_assert(__builtin_offsetof(Striker, owner) == 0x2d8, "Striker owner");
static_assert(__builtin_offsetof(Striker, hitCount) == 0x2fc, "Striker hitCount");

struct StrikerMrsChau : Striker {
    void Slot19() override;
    int AttackingState(int event) override;
    char padding_300[0x8];
    void* value308;                  // +0x308
};
struct StrikerMrChau : Striker {
    void Slot19() override;
    int ArrivingState(int event) override;
    virtual int RepeatingState(int event);     // slot 87
    virtual State RepeatingStatePtr();         // slot 88
    char padding_300[0x18];
    float attackDoneTime;            // +0x318: how far into each attack AttackDone runs
    uint32_t attacksDone;            // +0x31c
    uint8_t doneThisAttack;          // +0x320
    char padding_321[0x3];
    float attackDoneDelay;           // +0x324
};
struct KnivesStills : Striker {
    int AttackingState(int event) override;
};
struct KnivesRamona : Striker {
    void AttackDone() override;
};
struct KnivesScott : Striker {
    int AttackingState(int event) override;
};
struct KnivesNegaScott : Striker {
    void Slot19() override;
    char padding_300[0x30];
    uint64_t value330;               // +0x330
    uint64_t value338;               // +0x338
};
struct KnivesKim : Striker {
    void Slot19() override;
    char padding_300[0x10];
    int32_t value310;                // +0x310
    uint8_t flag314;                 // +0x314
};

}  // namespace SPTG
