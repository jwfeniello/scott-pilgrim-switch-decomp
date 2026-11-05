// The boss fight AI (see BossAI.h). Names are provisional.
#include "BossAI.h"

namespace SPTG {

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

// 0xa15400: for an enemy of kind 6, 7 or 8 with +0x50 clear, the target becomes
// player 0, and the target index and AI mode are cleared. The original takes
// two references and drops one again, as if the handle were passed by value.
void BaseBossAI::AssignTarget(Enemy* enemy) {
    if (!enemy->flag50 && (enemy->Kind() == 6 || enemy->Kind() == 7 || enemy->Kind() == 8)) {
        onyx::ComponentHandle* player = players.data[0];
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

}  // namespace SPTG
