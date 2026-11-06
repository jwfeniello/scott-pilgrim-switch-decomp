// SPTG::BaseBossAI and the AIs built on it: the components that follow a boss
// fight. The AI keeps references to the level's players and runs a state
// machine whose states are virtual, each followed by a getter that returns it,
// so that a subclass can replace one state. Names are provisional (see
// docs/GAME_CLASSES.md#boss-fight-ai).
#pragma once
#include "BossClasses.h"
#include "ComponentTypes.h"
#include "Level.h"
#include "OnyxEvents.h"
#include "StateMachine.h"
#include "Vector.h"

namespace SPTG {

// One counted reference to a player's handle in the AI's player list. The
// destructor is out of line (0x9cacf0, shared by many such element types).
struct PlayerRef {
    onyx::ComponentHandle* handle;
    __attribute__((always_inline)) PlayerRef(const PlayerRef& other) : handle(other.handle) { onyx::RetainHandle(handle); }
    ~PlayerRef();
};

struct BaseBossAI : SPTG_AIComponent {
    typedef StateMachine<BaseBossAI>::State State;
    SPTG_SLOT(3) SPTG_SLOT(4) SPTG_SLOT(5) SPTG_SLOT(6) SPTG_SLOT(7) SPTG_SLOT(8) SPTG_SLOT(9) SPTG_SLOT(10)
    SPTG_SLOT(11) SPTG_SLOT(12)
    virtual void Update();                 // slot 13 (0xa149f0)
    SPTG_SLOT(14) SPTG_SLOT(15)
    virtual void Start();                  // slot 16 (0xa14a20)
    SPTG_SLOT(17) SPTG_SLOT(18) SPTG_SLOT(19) SPTG_SLOT(20)
    // Until a player is present.
    virtual int Waiting(int event);        // slot 21
    virtual State WaitingPtr();            // slot 22
    // While the players fight.
    virtual int Fighting(int event);       // slot 23
    virtual State FightingPtr();           // slot 24
    // After a boss is beaten: sends the event at +0xc0 when entered.
    virtual int Finished(int event);       // slot 25 (0xa14dd0)
    virtual State FinishedPtr();           // slot 26

    // Refills `players` from the level's player catalog and returns how many
    // there are, as 32 bits.
    uint32_t RefreshPlayers();             // 0xa14f50
    // When +0x50 is clear and the enemy's kind is 6, 7 or 8, makes player 0
    // its target and clears its target index and AI mode.
    void AssignTarget(Enemy* enemy);       // 0xa15400
    // With any player present, offers each enemy of the level a target.
    __attribute__((always_inline)) void AssignTargets() {
        EnemyCatalog* enemies = onyx::Find<EnemyCatalog, onyx_types::type_5f5cdd73>(level.Get()->enemies);
        if (!players.size) return;
        for (Enemy** i = enemies->enemies; i != enemies->enemies + enemies->count; ++i) AssignTarget(*i);
    }

    char padding_8[0x48];
    bool flag50;                           // +0x50: cleared by Start
    bool flag51;                           // +0x51: set by Start and the constructor
    char padding_52[0x2];
    int32_t value54;                       // +0x54: -1 from the constructor
    Singleton<LevelItemAccessor> level;    // +0x58 (getter 0x7725e0)
    int32_t value60;                       // +0x60: cleared when ToddAI's fighting state is entered
    char padding_64[0x4];
    onyx::Vector<PlayerRef> players;       // +0x68: one reference per player
    char padding_88[0x8];
    StateMachine<BaseBossAI> states;       // +0x90
    int32_t machineValue;                  // +0xb8: -1 from the constructor; otherwise a
                                           // transition also sends kStateEvent3 to both states
    char padding_bc[0x4];
    onyx::EventCallback* finishedCallback; // +0xc0: the event slot the finished state sends (0x30b9976a)
    onyx::EventTarget* finishedTarget;     // +0xc8
    void* finishedD0;                      // +0xd0
};
static_assert(__builtin_offsetof(BaseBossAI, players) == 0x68, "BaseBossAI players");
static_assert(__builtin_offsetof(BaseBossAI, states) == 0x90, "BaseBossAI states");
static_assert(__builtin_offsetof(BaseBossAI, finishedCallback) == 0xc0, "BaseBossAI event");

// Todd's fight ends when Todd himself is beaten.
struct ToddAI : BaseBossAI {
    int Waiting(int event) override;       // slot 21 (0xa14a70)
    State WaitingPtr() override;           // slot 22
    int Fighting(int event) override;      // slot 23 (0xa14ba0)
    State FightingPtr() override;          // slot 24
};

// Super Gideon's fight follows one boss, the actor at +0xe0.
struct SuperGideonAI : BaseBossAI {
    int Waiting(int event) override;       // slot 21 (0xa50fa0)
    State WaitingPtr() override;           // slot 22
    int Fighting(int event) override;      // slot 23 (0xa51430)
    State FightingPtr() override;          // slot 24
    int Finished(int event) override;      // slot 25 (0xa514e0)
    State FinishedPtr() override;          // slot 26
    char padding_d8[0x8];
    onyx::ComponentHandle* actor;          // +0xe0: the boss
    bool reported;                         // +0xe8: the idle event has been sent
    char padding_e9[0x7];
    onyx::EventCallback* idleCallback;     // +0xf0: sent once the beaten boss stands idle (0x6c9df3bd)
    onyx::EventTarget* idleTarget;         // +0xf8
};
static_assert(__builtin_offsetof(SuperGideonAI, idleCallback) == 0xf0, "SuperGideonAI event");

// Giga Gideon's fight also reports when its boss is first enraged (+0xd68).
struct GigaGideonAI : BaseBossAI {
    int Waiting(int event) override;       // slot 21 (0xa56600)
    State WaitingPtr() override;           // slot 22
    int Fighting(int event) override;      // slot 23 (0xa56a90)
    State FightingPtr() override;          // slot 24
    char padding_d8[0x8];
    onyx::ComponentHandle* actor;          // +0xe0: the boss
    bool raged;                            // +0xe8: the boss's +0xd68 at the last update
    char padding_e9[0x7];
    onyx::EventCallback* ragedCallback;    // +0xf0: sent when +0xd68 first rises (0x5478af9b)
    onyx::EventTarget* ragedTarget;        // +0xf8
};
static_assert(__builtin_offsetof(GigaGideonAI, ragedCallback) == 0xf0, "GigaGideonAI event");

}  // namespace SPTG
