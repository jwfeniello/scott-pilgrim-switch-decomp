# Game classes and state machines

Every `SPTG` game class has RTTI. Following each class's
`__si_class_type_info` base pointer recovers the inheritance of **668 game
classes**; the complete list is in
[`progress/game_classes.json`](../progress/game_classes.json). Names are original
(from RTTI). Member layouts and method names are not recovered by this.

## Component composition

Game classes do not derive from their parent directly. They derive from an engine
template that names the parent and the components the class depends on:

```
SPTG::ControllablePlayer
  : Onyx::Component::Compose<SPTG::BaseCharacter,
        Onyx::Meta::Collection<Dependency::Weak<SPTG::MaterialModifierHolder>,
                               Dependency::Strong<SPTG::PlayerInfo>,
                               Dependency::Singleton<SPTG::PersistentDataManager>, ...>>
```

`Strong` dependencies are components the object owns or requires, `Weak` ones it
may find, and `Singleton` ones global services (HUD, pause handler, statistics).
Named actions are distinct typedefs of `Onyx::ActionComponent`
(`TrueTypedef<ActionComponent, __ONYX_UniqueAC_Name>`), which is how a boss such
as Todd owns its `BeginFreakout` and `ShowVeganAlley` actions. A
class without new dependencies uses `Compose<Parent, Onyx::Meta::Null>`. The
dependency kinds are read from the template arguments; how each kind is resolved
at run time is the component accessor described in
[gameplay components](GAMEPLAY_COMPONENTS.md).

| Class | Parent | Declared dependencies |
| --- | --- | --- |
| `AnimatedAiActor` | `SPTG_AIComponent` | singleton `LevelItemAccessor`, singleton `LevelWindowAccessor`, singleton `LevelAIManager`, strong `ActorObject`, strong `AnimationController`, weak `ShadowAnimatedObject` |
| `BaseCharacter` | `AnimatedAiActor` | singleton `HudStatusManager`, singleton `LevelSecretManager`, singleton `ControllableTextureLoader`, weak `SpriteAnimationPrinter` |
| `ControllablePlayer` | `BaseCharacter` | weak `MaterialModifierHolder`, strong `PlayerInfo`, singleton `PersistentDataManager`, singleton `SelectedActorRecorder`, singleton `FlashMenuPhase`, singleton `PauseHandler`, singleton `Onyx::Localization::Localization`, singleton `GameStatisticsBureau`, singleton `SwitchLevelGate`, singleton `ItemRegistry`, singleton `InGameHUD`, singleton `WorldMapInformationBroker` |
| `Enemy` | `BaseCharacter` | singleton `GameDifficultyAccessor`, singleton `SwitchLevelGate`, weak `GraphicsObject`, weak `Onyx::Animator` |
| `Boss` | `Enemy` | singleton `GameplayFlow`, weak `InteractiveEffet`, singleton `AnimatedAiActorCatalog`, weak `MaterialModifierHolder`, singleton `Onyx::Profile`, singleton `SelectedActorRecorder` |
| `Todd` | `Boss` | strong action `BeginFreakout`, strong action `EndFreakout`, strong action `ShowVeganAlley`, strong action `HideVeganAlley`, strong action `ShowWarning`, strong action `HideWarning`, strong `InteractiveEffet` `VeganPoliceBeam`, strong `InteractiveEffet` `VeganPolice` |
| `SuperFightingRobotAI` | `Boss` | strong `SuperFightingRobotHead`, strong `SuperFightingRobotTorso`, strong `Onyx::TrueTypedef<SuperFightingRobotHand,__ONYX_UniqueRobotLeftHand>`, strong `Onyx::TrueTypedef<SuperFightingRobotHand,__ONYX_UniqueRobotRightHand>`, strong `Onyx::TrueTypedef<SuperFightingRobotShoulder,__ONYX_UniqueRobotLeftShoulder>`, strong `Onyx::TrueTypedef<SuperFightingRobotShoulder,__ONYX_UniqueRobotRightShoulder>`, strong `Onyx::TrueTypedef<SuperFightingRobotTorso,__ONYX_UniqueRobotSmallBody>`, strong `Onyx::Transform` |

Outside the actor tree, game classes derive from engine roots such as
`Onyx::Component::Base` (84), `Onyx::ActionComponent` (53), `Onyx::Phase` (11), `Onyx::Graphics::Visual` (7), `Onyx::Task` (2), `Onyx::Flow::Gate` (2).

## Actor tree

Playable characters, bosses, enemies, NPCs and level objects all derive from
`AnimatedAiActor`:

- `AnimatedAiActor`
  - `BaseCharacter`
    - `ControllablePlayer`
      - `ControllableKim`
      - `ControllableKnives`
      - `ControllableNegaScott`
      - `ControllableRamona`
      - `ControllableScott`
      - `ControllableStephen`
      - `ControllableWallace`
    - `Enemy`
      - `Boss`
        - `Chau`
        - `Gideon`
        - `GigaGideon`
        - `HipsterChick`
        - `KenKyle`
        - `LucasLee`
        - `NegaScott`
        - `Patel`
        - `Roxy`
        - `RoxyMirror`
        - `SuperFightingRobotAI`
        - `SuperFightingRobotHand`
        - `SuperFightingRobotHead`
        - `SuperFightingRobotShoulder`
        - `SuperFightingRobotTorso`
        - `SuperGideon`
        - `TagTeamMember`
          - `Envy`
          - `Lynette`
        - `Todd`
      - `EnemyAerial`
      - `EnemyChubby`
      - `EnemyGiant`
        - `EnemyGeeOne`
      - `EnemyGodzilla`
      - `EnemyHanzo`
      - `EnemyJetPackMatt`
      - `EnemyMini`
      - `EnemyNormal`
        - `EnemyAlberta`
        - `EnemyJake`
      - `EnemyOneHitWonder`
        - `EnemyChargingCrowd`
        - `EnemyForestElves`
        - `EnemyGuyOnFire`
        - `EnemySasuke`
        - `EnemyStuntman`
      - `EnemyPaparazzi`
      - `EnemyShooter`
        - `EnemyArZee`
      - `EnemySpeedy`
      - `EnemyThief`
      - `EnemyWolverine`
      - `EnemyZombie`
    - `NPC`
  - `BreakableObject`
    - `GunTurrets`
    - `Piniata`
  - `InteractiveObject`
    - `InteractiveObjectEx`
  - `LaserBeams`
  - `MechanismObject`
  - `Pickup`
    - `MithrilSkateboard`
  - `Projectile`
  - `Striker`
    - `KnivesKim`
    - `KnivesNegaScott`
    - `KnivesRamona`
    - `KnivesScott`
    - `KnivesStills`
    - `StrikerMrChau`
    - `StrikerMrsChau`
    - `StrikerYeti`

## State machines

Characters run hierarchical state machines. A state is a member function taking
an event and returning a result. The handlers seen so far use four events and
three results:

| Event | Observed use |
| ---: | --- |
| 10000 | Per-frame update (for example a timer advanced by the frame time) |
| 10001 | Enter the state |
| 10002 | Exit the state |
| 10003 | Accepted and ignored by most states |

| Result | Meaning |
| ---: | --- |
| 0 | Event not handled |
| 1 | Handled |
| 2 | The parent state took over (the child returns at once) |

A state first calls its parent state, which may belong to a class several levels
up (`EnemyStuntman` states call an `Enemy` state, which calls a `BaseCharacter`
state). If the parent returns 2, the state returns 2; otherwise it handles its own
entry, exit and update. Players select states through member-function-pointer
slots (see [player action states](PLAYER_ACTION_STATES.md)).

About 271 game functions (222 KB) compare against these event values. They are the
starting point for reconstructing character behavior.

### Matching state handlers

Small handlers that only call their parent state and set fields match directly.
Handlers that switch over all four events lower to a four-entry jump table in
the original. Their exit case (10002) gets its own block even when it does
nothing. Without something in that block, Clang 8 merges it with event 10003
(both return 1), and the switch turns into compares.

Editing our optimized IR shows what the block needs. Any instruction that emits
no machine code works there: a lifetime-end marker, `llvm.sideeffect`, or an
assumption. Each makes the EnemyZombie handler (`0x9e87c0`) exact. In C++ source
only two constructs leave such an instruction behind: `__builtin_assume` with a
condition the optimizer cannot fold, and a local variable annotation. An
assumption is far more likely, probably from a release-mode assertion macro.
Conditions on the event fold away. Conditions on members survive and give the
same code.

[`StateMachine.h`](../src/gameplay/StateMachine.h) models it as
`states.AssertOwner(this)` in the exit case. The asserted condition itself is
unknown. The default case must come before the exit case, which is listed last:

```cpp
switch (event) {
case kStateUpdate: ...
case kStateEnter: ...
case kStateEvent3: return kStateHandled;
default: return kStateUnhandled;
case kStateExit:
    states.AssertOwner(this);
    return kStateHandled;
}
```

Not every state has it: in some originals the exit case already does work, or
is merged with other events, and then the plain spelling matches. The default
case's position also matters: some states need it last, others need it before
a last exit case. Each state is checked both ways.

## Build profile for game classes

The game-class sources (`gameplay_pickup`, `gameplay_piniata`) build with
`-fstrict-aliasing` and `-mllvm -no-stack-coloring`:

- **No stack-slot sharing.** Pickup's collect function sends the same event in
  two branches, and the original gives each branch's event payload its own stack
  slot. Clang 8 merges the two slots unless stack coloring is off. Rebuilding
  every other non-LTO game-region build with `-no-stack-coloring` changes only
  two of about 17,000 credited functions, both FreeType library code. So game
  code shows no sign of slot sharing, and Collect requires its absence.
- **Strict aliasing.** The same function reuses a list's size after unlinking a
  node, which needs type-based alias analysis. All other Pickup and Piniata
  functions match either way. Other game builds keep `-fno-strict-aliasing`.
- **Exceptions are on.** The original keeps landing pads (bare `_Unwind_Resume`
  calls) where an event payload with an empty user-provided destructor is live.
  LLVM 8 cannot delete a cleanup that still holds a lifetime marker.

## Events and project settings

[`OnyxEvents.h`](../src/gameplay/OnyxEvents.h) models the completion events that
about 1,000 game functions send. An event is sent when the target's flag bit 1
is set or the project settings enable events. The callback fills a payload, and
the target's listener is notified through `0xbf6e80` with a 32-bit hash. The
settings are a global pointer with a built-in default ("UNKNOWN PROJECT NAME",
count 13, limits 12, 12, `INT_MAX`, `INT_MAX`), created on first use by a guarded
static. Its layout is the one
[`GuardedCallbackDispatch.cpp`](../src/GuardedCallbackDispatch.cpp) already
matches out of line.

## Pickups

`SPTG::Pickup` (vtable `0x1878f78`, 87 slots) is reconstructed in
[`src/gameplay/Pickup.cpp`](../src/gameplay/Pickup.cpp) with its state machine
([`StateMachine.h`](../src/gameplay/StateMachine.h)). Five more functions match
exactly (1,656 bytes), next to the 16 small slots already matched:

- **Reset** (slot 7): resets the actor, then starts the state machine in the
  initial state and sends it the enter event.
- **Update** (slot 16): an item that is not held is released when its holder's
  ID is outside 10001–999999 or it has no holder. It then keeps the frame's value
  and refreshes its scale.
- **Collect** (slot 17): plays the collect animation, holds the item, handles and
  removes the next record from the spawned or placed queue, and sends the collect
  event (hash `0x53df13ab`).
- **Touch** (slot 38): an actor touching the item collects it, unless that actor
  is one of four ignored actors (at `+0x190`), collection is blocked, or the item
  is already in its collected state.
- **Spawner notice** (slot 70): releases the item and finds its
  `SPTG::PickupSpawner` in the level's spawner catalog (spawner 13 has none). A
  spawned item is pushed onto the spawner's list; otherwise the spawner drops
  the holder's entry through its `Onyx::Spawner`.

Slots 78–85 are four states, each followed by a getter that returns it as a
virtual member pointer (`{vtable offset, 1}`): slot 81 returns the initial state
(slot 80) and slot 83 the collected state (slot 82). Three of the states match
(916 bytes):

- **State 78**: plays animation 189; once it is done, switches to the initial
  state.
- **Collected state** (slot 82): plays animation 16 and stops all motion. Each
  update first lets a nearby player collect the item (`0x9a4c40`, which compares
  player positions with the radius and depth at `+0x228`/`+0x22c`). On success it
  switches to state 84; otherwise the spawner is notified once the animation is
  done.
- **State 84**: plays animation 100 and stops all motion; once the animation is
  done the spawner is notified.

The initial state (slot 80) is written out but not credited. It runs an idle
timer and bounces the item on each landing: the vertical motion is reflected
and scaled by the restitution at `+0x234`. When a bounce is weaker than 0.5 the
item comes to rest, plays animation 95 and stops moving. One register-allocation
detail still differs. Slot 4 (1,632 bytes) loads the item from a stream and
registers its event bindings; it is not reconstructed yet.

## Piniatas

`SPTG::Piniata` (vtable `0x1889c08`) is a breakable object that loses health as
it is hit and shrinks. [`src/gameplay/Piniata.cpp`](../src/gameplay/Piniata.cpp)
matches seven functions (1,972 bytes):

- **Hit** (slot 38): a hit of kind 0 or 2 that passes the hit check
  (`0xa114d0`) while the piniata still has health damages it, sends the hit event
  (hash `0x5405ad39`) and updates the damage-stage animation. It then shows the
  hit effect where the hit landed (through the effect's `Onyx::Transform`) and
  fires the trigger.
- **Damage** (slot 69): applies the hit through the base class; a shrinking
  piniata above scale 1 then loses one unit and reports 1.
- **Update** (slot 13): updates the object and its current state, then hides the
  effect while the trigger is active (both weak references).
- **Damaged state** (slot 78): on entry, plays the animation of the last damage
  stage whose threshold is at least health ÷ maximum health. Once the animation
  is done with no health left, it switches to the broken state.
- **Broken state** (slot 80): plays animation 212, stops being solid, sends the
  broken event (hash `0x1b7fbfc1`) and releases the debris; when the animation
  ends the piniata is released.
- **Idle state** (slot 84): plays animation 16 on entry.
- **State 82**: plays animation 13; once it is done, switches to the damaged
  state.

Not yet reconstructed: the reset (slot 7, which sorts the damage stages) and
the hit check.

In a state written with `switch`, the case listed first in the source becomes
the fall-through block of the compare chain. The damaged state matches only with
the enter case first.

## BaseCharacter states

[`BaseCharacter.h`](../src/gameplay/BaseCharacter.h) describes
`SPTG::BaseCharacter` (vtable `0x1874998`, 159 slots), the base of enemies,
bosses and `SPTG::ControllablePlayer`. Its states sit at slots 96–145, each
followed by its getter. Slot 96 is the default state: it reports the four state
events as handled and does nothing else. The character's state machine is at
`+0x208`.

Fields used so far include the effect and partner handles (`+0x58`, `+0x68`),
the level singleton (`+0x90`, shared with Pickup through
[`Level.h`](../src/gameplay/Level.h)), the current animation (`+0x1a0`), the
motion vectors (`+0x1a4`, `+0x1b0`), the mount (`+0x238`) and the action mode
(`+0x500`). Which of them belong to BaseCharacter rather than a subclass is
not settled.

[`BaseCharacterStates.cpp`](../src/gameplay/BaseCharacterStates.cpp) matches
four of its states (1,232 bytes):

- **Slot 114**: action mode 9, stops all motion and plays animation 16; exit
  clears the action mode.
- **Slot 134**: with a mount, tells the mount (slot 35), plays animation 48 or
  64 depending on the mount, and has the mount play animation 104. When the
  animation ends it moves to slot 102; on landing, to slot 104.
- **Slot 138**: plays animation 116; on landing, back to slot 96. Exit clears
  the action mode.
- **Slot 144**: stops all motion; back to slot 96 once the animation is done
  and the flag at `+0x748` is set.

## Enemy states

[`Enemy.h`](../src/gameplay/Enemy.h) describes `SPTG::Enemy` (vtable
`0x187d618`, 234 slots). It derives from BaseCharacter, overrides several of its
states and adds its own at slots 172–227. An overriding state runs the base
state first and stops if the base state has already switched states (result 2).

[`EnemyStates.cpp`](../src/gameplay/EnemyStates.cpp) matches eight of them
(2,004 bytes):

- **Approach** (slot 180): counts down the frames left in the state. While time
  is left, the targeted player (`+0x820` indexes the target list at `+0x848`)
  is not out, is closer than the attack range (`+0x91c`) plus 10, the AI mode is
  0 or 1 and the target's action mode is not 6, the enemy keeps approaching
  (slot 167). Otherwise it returns to slot 96.
- **Slot 116**: after the base state, sends message 3 from the enemy to every
  player (`Catalog<ControllablePlayer>` through the level singleton) and resets
  the AI fields (target index 4, AI mode 6). When the animation ends it moves to
  slot 200.
- **Slot 136**: hides the effect while active. Once the held partner has been
  held for the delay at `+0x9cc`, the partner reacts, plays the recovery
  animation for the hit animation it was in (a switch the compiler turns into a
  lookup table), and is released.
- **Slot 186**: stops all motion, loops animation 114, and once both the
  animation and the delay at `+0x984` are done, passes the value at `+0x980` to
  the target (slot 90).
- **Slots 100 and 102**: after the base state, with a mount, run slot 31 and
  play animation 2 or 5.
- **Slot 126**: after the base state, rolls a random chance on exit (`0x9dd6b0`,
  a subtractive random generator) against the percentage at `+0x920`.
- **Slot 172**: sets AI mode 6 while active and hands over to slot 96 once
  `0x9dcb90` allows it.

Slot 136 also shows that the compiler fills a lookup table's unused entries
with the first case's result. The original's unused entries are 0, so its first
case maps to recovery animation 0.

## Enemy attack states

Each regular enemy class appends its own states after Enemy's slot 233, each
followed by its getter. Enemy's own states at slots 96 and 180 are shared
targets; EnemyNormal overrides slot 96.

[`EnemyAttackStates.cpp`](../src/gameplay/EnemyAttackStates.cpp) matches 28
attack states (7,056 bytes) in ten classes: EnemyZombie, EnemyWolverine,
EnemySpeedy, EnemyPaparazzi, EnemyNormal, EnemyMini, EnemyHanzo, EnemyGodzilla,
EnemyGiant and EnemyChubby. On entry, a state starts one of the enemy's seven
attack descriptors (`0x78` bytes each, from `+0xba8`), plays the attack's
animation and resets the state time (`+0x7b0`). Each update adds the frame time.
When the animation is done, the state switches to its next state:

- Slot 180 or slot 96 for single attacks (animations 11, 19, 20 and 21).
- Another attack state for combos. EnemyZombie's slot 234 (animation 20) leads
  to slot 236 (animation 21); EnemyNormal's slot 236 leads to slot 238.
- Slot 96 for the attacks on animations 31 and 32. These states play the
  animation before starting the attack.

Virtual slot 44 starts an attack. It records the descriptor, takes a new attack
ID from a global counter, and scales the descriptor's first value by factors
from the attacker and from the enemy. With source 1 the enemy itself is the
attacker.
