// The boss fight AI (see BossAI.h). Names are provisional.
#include "BossAI.h"

namespace SPTG {

// Slot 13 (0xa149f0): sends the current state the update event.
void BaseBossAI::Update() {
    states.Update();
}

// Slot 16 (0xa14a20): clears +0x50, sets +0x51 and starts in the waiting state.
void BaseBossAI::Start() {
    flag50 = false;
    flag51 = true;
    states.Start(this, WaitingPtr());
}

// Slot 21 (0xa15db0): once RefreshPlayers finds a player, offers each enemy a
// target and moves to the fighting state. Enter, exit and kStateEvent3 need
// nothing.
int BaseBossAI::Waiting(int event) {
    if (static_cast<unsigned>(event - kStateEnter) < 3) return kStateHandled;
    if (event != kStateUpdate) return kStateUnhandled;
    if (!RefreshPlayers()) return kStateHandled;
    AssignTargets();
    states.Transition(FightingPtr());
    return kStateParentTookOver;
}

// Slot 23 (0xa15ee0): back to waiting once no player is left. Otherwise offers
// a target to each enemy that has none (index 4) and +0x50 clear, and finishes
// when a boss (kind 6) has +0xd28 set.
int BaseBossAI::Fighting(int event) {
    if (static_cast<unsigned>(event - kStateEnter) < 3) return kStateHandled;
    if (event != kStateUpdate) return kStateUnhandled;
    if (!RefreshPlayers()) {
        states.Transition(WaitingPtr());
        return kStateParentTookOver;
    }
    EnemyCatalog* enemies = onyx::Get<EnemyCatalog, onyx_types::type_5f5cdd73>(level.Get()->enemies);
    for (Enemy** i = enemies->enemies; i != enemies->enemies + enemies->count; ++i) {
        Enemy* enemy = *i;
        if (!enemy->flag50 && enemy->targetIndex == 4) AssignTarget(enemy);
        if (enemy->Kind() == 6 && static_cast<Boss*>(enemy)->flagD28) {
            states.Transition(FinishedPtr());
            return kStateParentTookOver;
        }
    }
    return kStateHandled;
}

// 0xa14f50: drops the references in the player list and takes one for each
// player in the level's catalog (the handle at +0x40 of the player, its own).
// Returns how many there are, as 32 bits.
// Not yet matched: the code is the original's instruction for instruction, but the
// original keeps `this` in x20 and the level pointer in x19, and this build the
// other way round. (State165's similar swap went away with the right case order;
// no statement order tried here changes it.)
uint32_t BaseBossAI::RefreshPlayers() {
    PlayerCatalog* catalog = onyx::Find<PlayerCatalog, onyx_types::type_0bf4a9b7>(level.Get()->players);
    if (players.data) {
        for (uint64_t i = 0; i < players.size; ++i) players.data[i].~PlayerRef();
    }
    players.size = 0;
    for (ControllablePlayer** i = catalog->players; i != catalog->players + catalog->count; ++i) {
        onyx::ComponentHandle* handle = reinterpret_cast<onyx::ComponentHandle*>((*i)->attachment);
        __atomic_add_fetch(&handle->references, 1, __ATOMIC_RELAXED);
        uint64_t count = players.size + 1;
        if (players.capacity < count) players.data = players.Reserve(count, players.size, count, false);
        players.data[players.size].handle = handle;
        onyx::RetainHandle(handle);
        ++players.size;
        onyx::ReleaseHandle(handle);
    }
    return players.size;
}

// 0xa15400: for an enemy of kind 6, 7 or 8 with +0x50 clear, the target becomes
// player 0, and the target index and AI mode are cleared. The original takes
// two references and drops one again, as if the handle were passed by value.
void BaseBossAI::AssignTarget(Enemy* enemy) {
    if (!enemy->flag50 && (enemy->Kind() == 6 || enemy->Kind() == 7 || enemy->Kind() == 8)) {
        onyx::ComponentHandle* player = players.data[0].handle;
        onyx::RetainHandle(player);
        onyx::RetainHandle(player);
        onyx::ComponentHandle* old = enemy->target;
        enemy->target = player;
        onyx::ReleaseHandle(old);
        onyx::ReleaseHandle(player);
        enemy->targetIndex = 0;
        enemy->aiMode = 0;
    }
}

// Slot 25 (0xa14dd0): entry sends the finished event; update, exit and
// kStateEvent3 need nothing.
int BaseBossAI::Finished(int event) {
    if (static_cast<unsigned>(event - kStateExit) < 2 || event == kStateUpdate) return kStateHandled;
    if (event != kStateEnter) return kStateUnhandled;
    onyx::SendEvent<817469290u>(finishedCallback, finishedTarget);
    return kStateHandled;
}

// ToddAI slot 21 (0xa14a70): the same code as BaseBossAI's waiting state.
int ToddAI::Waiting(int event) {
    if (static_cast<unsigned>(event - kStateEnter) < 3) return kStateHandled;
    if (event != kStateUpdate) return kStateUnhandled;
    if (!RefreshPlayers()) return kStateHandled;
    AssignTargets();
    states.Transition(FightingPtr());
    return kStateParentTookOver;
}

// ToddAI slot 23 (0xa14ba0): entry clears +0x60. Each update goes back to
// waiting without players; otherwise, for each Todd among the enemies, offers
// every enemy a target while Todd has none (index 4), and finishes once that
// Todd has +0xd28 set.
int ToddAI::Fighting(int event) {
    int result = kStateHandled;
    switch (event) {
    case kStateUpdate: {
        if (!RefreshPlayers()) {
            states.Transition(WaitingPtr());
            return kStateParentTookOver;
        }
        EnemyCatalog* enemies = onyx::Get<EnemyCatalog, onyx_types::type_5f5cdd73>(level.Get()->enemies);
        for (Enemy** i = enemies->enemies; i != enemies->enemies + enemies->count; ++i) {
            Todd* todd = Cast<Todd>(*i);
            if (!todd) continue;
            if (todd->targetIndex == 4) AssignTargets();
            if (todd->flagD28) {
                states.Transition(FinishedPtr());
                return kStateParentTookOver;
            }
        }
        break;
    }
    default:
        result = kStateUnhandled;
        break;
    case kStateEnter:
        value60 = 0;
    case kStateExit:
        states.AssertOwner(this);
        break;
    case kStateEvent3:
        break;
    }
    return result;
}

// SuperGideonAI slot 23 (0xa51430): back to waiting without players;
// otherwise finishes once its boss has +0xd28 set.
int SuperGideonAI::Fighting(int event) {
    if (static_cast<unsigned>(event - kStateEnter) < 3) return kStateHandled;
    if (event != kStateUpdate) return kStateUnhandled;
    if (RefreshPlayers()) {
        if (!static_cast<Boss*>(actor->object)->flagD28) return kStateHandled;
        states.Transition(FinishedPtr());
    } else {
        states.Transition(WaitingPtr());
    }
    return kStateParentTookOver;
}

// SuperGideonAI slot 25 (0xa514e0): after the base state, each update sends the
// idle event once, when the boss stands in its state 256 with animation 187.
int SuperGideonAI::Finished(int event) {
    int result = BaseBossAI::Finished(event);
    if (result != kStateParentTookOver) {
        if (event == kStateUpdate) {
            if (!reported) {
                Boss* boss = static_cast<Boss*>(actor->object);
                Boss::State idle = boss->State256Ptr();
                if (boss->states.current == idle && boss->animation == 187) {
                    reported = true;
                    onyx::SendEvent<0x6c9df3bdu>(idleCallback, idleTarget);
                }
            }
            return kStateHandled;
        }
        return kStateUnhandled;
    }
    return result;
}

// GigaGideonAI slot 23 (0xa56a90): as the base fighting state for one boss. Each
// update it also sends an event when the boss's +0xd68 first rises, and finishes
// once the boss has +0xd28 set.
int GigaGideonAI::Fighting(int event) {
    if (static_cast<unsigned>(event - kStateEnter) < 3) return kStateHandled;
    if (event != kStateUpdate) return kStateUnhandled;
    if (RefreshPlayers()) {
        GigaGideon* boss = actor ? static_cast<GigaGideon*>(actor->object) : nullptr;
        if (!boss) return kStateHandled;
        bool now = boss->ragedD68;
        if (now && !raged) {
            onyx::SendEvent<0x5478af9bu>(ragedCallback, ragedTarget);
            boss = static_cast<GigaGideon*>(actor->object);
        }
        raged = now;
        if (!boss->flagD28) return kStateHandled;
        states.Transition(FinishedPtr());
    } else {
        states.Transition(WaitingPtr());
    }
    return kStateParentTookOver;
}

// The getters at slots 22, 24 and 26 return a state as a pointer to a virtual
// member: its vtable offset (0xa8, 0xb8, 0xc8) with the virtual bit.
BaseBossAI::State BaseBossAI::WaitingPtr() { return &BaseBossAI::Waiting; }                       // 0xa15ed0
BaseBossAI::State BaseBossAI::FightingPtr() { return &BaseBossAI::Fighting; }                     // 0xa16030
BaseBossAI::State BaseBossAI::FinishedPtr() { return &BaseBossAI::Finished; }                     // 0xa14f40
BaseBossAI::State ToddAI::WaitingPtr() { return static_cast<State>(&ToddAI::Waiting); }           // 0xa14b90
BaseBossAI::State ToddAI::FightingPtr() { return static_cast<State>(&ToddAI::Fighting); }         // 0xa14dc0
BaseBossAI::State SuperGideonAI::WaitingPtr() { return static_cast<State>(&SuperGideonAI::Waiting); }    // 0xa51420
BaseBossAI::State SuperGideonAI::FightingPtr() { return static_cast<State>(&SuperGideonAI::Fighting); }  // 0xa514d0
BaseBossAI::State SuperGideonAI::FinishedPtr() { return static_cast<State>(&SuperGideonAI::Finished); }  // 0xa51690
BaseBossAI::State GigaGideonAI::WaitingPtr() { return static_cast<State>(&GigaGideonAI::Waiting); }      // 0xa56a80
BaseBossAI::State GigaGideonAI::FightingPtr() { return static_cast<State>(&GigaGideonAI::Fighting); }    // 0xa56c60

}  // namespace SPTG
