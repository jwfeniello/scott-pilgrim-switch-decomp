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
- **Stack coloring is not settled.** BaseCharacter's slot 116 shares one stack
  slot between two messages and an event payload, which needs stack coloring on
  (so its build drops `-no-stack-coloring`). Pickup's collect and Enemy's slot
  200 give each event payload its own slot, which with these sources needs it
  off. Coloring on is the compiler default, so those two sources may not have
  the original variable scopes yet.
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

[`BaseCharacterStates.cpp`](../src/gameplay/BaseCharacterStates.cpp) matches 16
of its states (7,668 bytes). "Stops" means both motion vectors are zeroed.

| Slot | Address | Behavior |
| --- | --- | --- |
| 98 | `0x970f00` | Grounded: stops, action mode 1, animation 12; leaving the ground goes to 102 |
| 100 | `0x971090` | Jump: animation 2 (53/69 with a mount); rise → air (3/54/70) → fall (4/55/71) once falling; the fall's end goes to 102, landing to 104 |
| 102 | `0x9713b0` | Airborne: restores the saved depth values; animation 5, or 56/72 with a mount (the mount plays 112); landing goes to 104 |
| 112 | `0x972b70` | Recovery: stops, action mode 6, animation 16. After slot 81's time limit, with health goes to 122; otherwise slot 148 picks 124 or 122, else slot 156 picks 114 or 116 |
| 114 | `0x972dd0` | Action mode 9, stops, animation 16 |
| 116 | `0x972f30` | Notifies the holder (`+0x488`, or `+0x4e0`) and itself with messages 2 and 26 when they pass `IsA(0x2f2bf4aa)`; action mode 5, event `0x2c285404`, stops, animation 16 |
| 118 | `0x973230` | Stun: timer from `+0x51c`, action mode 2, stops, slot 86; back to 96 when the timer runs out |
| 120 | `0x9733e0` | Second stun: timer from `+0x520`, action mode 4, stops, animation 18 |
| 122 | `0x9735a0` | Knockdown: stops, animation 27, action mode 7, flag `+0x3ba`; back to 96 when the animation ends |
| 124 | `0x973740` | As 122, then goes to 120 |
| 130 | `0x974590` | Slide: stops under the slide threshold, else slides in the facing direction; with a mount, plays the mount animations |
| 134 | `0x974e00` | With a mount, animation 48/64 and the mount plays 104; animation end goes to 102, landing to 104 |
| 136 | `0x974f90` | Hides the effect while active |
| 138 | `0x975030` | Animation 116; landing goes back to 96 |
| 142 | `0x975390` | Down after a throw: faces, drops the held reference, animation 95; once landed and done, recovers (112) or picks 114/116 |
| 144 | `0x9757a0` | Stops; back to 96 once the animation is done and `+0x748` is set |

## BaseCharacter hooks

[`BaseCharacter.cpp`](../src/gameplay/BaseCharacter.cpp) matches 17 of
BaseCharacter's other virtuals (1,600 bytes). Most are small hooks that do one
thing and switch states:

| Slot | Address | Behavior |
| --- | --- | --- |
| 25, 26 | `0x96c8b0`, `0x96c980` | Animation speed and pause: passed to the animation component (`+0x70`, type `0x29fbe438`) and, with `+0x338` set, to the mount |
| 32, 33 | `0x96ce30`, `0x96ce90` | After AnimatedAiActor's slot (`0x93fec0`, `0x940170`): restore the saved motion values and go to 108, or go to 136 |
| 35 | `0x96cf00` | Starts the attack at `+0x530`, or `+0x588` with its flag set |
| 53 | `0x96e4b0` | Drops the held reference and goes to 100 |
| 64 | `0x96ede0` | Takes an amount from `+0x160`, then from `+0x32c`; returns what was taken |
| 74 | `0x96f740` | Records a point, a flag and a value; goes to 110 |
| 80, 83 | `0x970710`, `0x970820` | Whether in state 106; slot 83 also holds in action modes 2 and 4 |
| 82 | `0x970770` | Held, on the ground, not slot 85, not `+0x141`, and outside action modes 3, 5, 6, 8 and 11 |
| 86 | `0x9708e0` | Plays animation 17 |
| 89 | `0x970b90` | Adds to `+0x32c`, kept between 0 and slot 150 |
| 92, 93 | `0x970dd0`, `0x970e20` | Go to 108 after slot 75; or lower `+0x328` by a hit and go to 118 at or below `+0x514` |
| 154 | `0x975f30` | Counts the timer at `+0x770` down and runs `0x976670` |
| 158 | `0x976630` | False while the game state's `+0xe0` is set, else a settings flag (singleton at `+0x1f8`) |

Three details decide whether these match:

- A clamp to zero written as a select (`v < 0 ? 0 : v`, or an `if`) compiles to
  `fmax`, as in the original. `fmaxf` compiles to `fmaxnm`.
- Slot 93 loads the hit's amount before `+0x328`, which is clang's order for
  `value -= amount`.
- Slot 74 copies its point with three separate 32-bit loads and stores. Copied
  from one `Vector3` member into another, struct-path alias analysis proves
  the first two independent and merges them into one 64-bit copy, so the point
  arrives as `const float*`.

## Enemy states

[`Enemy.h`](../src/gameplay/Enemy.h) describes `SPTG::Enemy` (vtable
`0x187d618`, 234 slots). It derives from BaseCharacter, overrides several of its
states and adds its own at slots 172–227. An overriding state runs the base
state first and stops if the base state has already switched states (result 2).

[`EnemyStates.cpp`](../src/gameplay/EnemyStates.cpp) matches 20 of them, plus
the chance roll they use (10,940 bytes in all):

| Slot | Address | Behavior |
| --- | --- | --- |
| 98 | `0x9cec40` | Grounded: stops, action mode 1, animation 29 then 12, event `0x78572030`; half a second into 12 goes to 96, leaving the ground to 102 |
| 100, 102 | `0x9cef60`, `0x9cf000` | After the base state, with a mount, run slot 31 and play animation 2 or 5 |
| 112 | `0x9cf120` | Recovery override: every NPC reacts; may roll a counter (chance by health) or a follow-up |
| 116 | `0x9cf500` | After the base state, sends message 3 to every player (`Catalog<ControllablePlayer>` through the level singleton) and resets the AI fields; animation end goes to 200 |
| 126 | `0x9cf670` | After the base state, rolls the chance on exit |
| — | `0x9dd6b0` | The chance roll: with a mount, rolls 0–100 against the percentage at `+0x920`; a failed roll sets AI mode 6 |
| 136 | `0x9cf6e0` | Releases a held partner after `+0x9cc` seconds; the partner plays the recovery animation for its hit animation (a lookup table) |
| 172 | `0x9d03c0` | AI mode 6 while active; hands over to 96 once `0x9dcb90` allows |
| 174 | `0x9d0490` | Faces the target player's X position (through its ActorObject's Transform) and runs `0x9db820` each update |
| 180 | `0x9d1c60` | Approach: counts down; keeps approaching (slot 167) while the target is in range + 10, not out, and the AI mode is 0 or 1 |
| 186 | `0x9d28a0` | Loops animation 114; once done and `+0x984` seconds have passed, passes `+0x980` to the target (slot 90) |
| 192 | `0x9d3780` | Loops animation 117, AI mode 7; goes to 96 after the animation and `+0x9ac` seconds, or to 102 when off the ground |
| 196 | `0x9d3e10` | Jump back: speed from `+0x7d4` or away from the facing; animation 2 → 3 → 8 (falling) → 6 (landed) → slot 96 |
| 198 | `0x9d40b0` | Plays the special attack's animation and starts it (`+0x898`) |
| 200 | `0x9d4250` | Blinks out: the timer's parity picks the actor's blink-on or blink-off event; at the end runs `0x996c30` and removes the enemy (slot 70) |
| 206 | `0x9d5450` | Holds a ring around the back-off point: moves in or out, then snaps onto it (1.1 × the distance) and goes to 204; goes to 208 if the target comes close |
| 208 | `0x9d58d0` | Backs away from the back-off point until it and the target are far enough (the middle of the current attack range) |
| 218 | `0x9d7da0` | Walk: advances `+0x334`, runs `0x9db820`, turns around when travel and facing disagree |
| 222 | `0x9d8f00` | AI mode 7, animation 209, hides the effect and raises an ActorObject flag; takes `+0x9c8` from the game difficulty |
| 226 | `0x9d98c0` | Idle entry: animation 0, or 44/60 with a mount (the mount plays 100); stops |

Slot 108 (allies roll to assist), slot 194 (a timed dash) and BaseCharacter's
slot 140 (landing after a throw) are written out in the sources but not
credited. Both differ only in loop
layout or instruction scheduling so far.

States 206 and 208 use `onyx::Vector3` arithmetic, which the compiler partly
vectorizes. They match only with `operator-` assigning the result field by
field.

An attack slot (`AttackSlot`) is `0x78` bytes: 16 bytes copied whole, a flag
(`+0x10`), the attack data StartAttack receives (`+0x18`, `0x58` bytes), a kind
(`+0x70`) and a flag (`+0x74`). The special attack's state plays the kind as an
animation. Keeping it outside the attack data is what makes that state match.
The slot layout comes from the class updates: each frame, a class copies its
slots into Enemy's attack list at `+0x7e8` (an `onyx::Vector`), and the copy
covers the whole `0x78` bytes. The special attack is therefore a slot at
`+0x880`, and the type and speed scale after it (`+0x904`, `+0x908`) are
Enemy fields.

Copying a slot is a 17-byte copy, then the attack's copy constructor (it clears
`+0x2c` and the shared handle at `+0x50`, then assigns through `0x8e4450`),
then the kind and flag. Three details decide the match:

- The 16-byte header must be made of wide elements (`uint64_t[2]` here; floats
  or pointers work too). As `char[16]`, the copy's source address is recomputed
  inside the block that copies.
- The push is plain `inline` (`Enemy::RequestAttack`), not forced inline, so it
  is optimized before it is inlined. Its list address then sits in the grow
  branch, and a second push computes it again instead of keeping it in a
  register.
- `onyx::Vector::PushBack` stores the buffer that the out-of-line `Reserve`
  returns (`0x9e8d10` for this element type).

Slot 136 also shows that the compiler fills a lookup table's unused entries
with the first case's result. The original's unused entries are 0, so its first
case maps to recovery animation 0.

[`Enemy.cpp`](../src/gameplay/Enemy.cpp) matches four of Enemy's other
virtuals (420 bytes): the actor update (slot 16), damage (69), and slots 41 and
45. Each update resets three scaled values (`+0x9c`, `+0x2f8`, `+0x910`) to
their bases (`+0x98`, `+0x2f4`, the special attack's `+0x74`). Slot 229 then
scales them by a factor from the singleton at `+0x7a0` and adds an integer
bonus for its mode. Slot 229 is written out but not credited. Only the order of
two address computations differs.

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

## Random numbers

[`Random.h`](../src/gameplay/Random.h) models the game's random generator
(pointer at `0x192ae70`) as its callers inline it. It is Knuth's subtractive
generator: a 55-entry table, modulus 1,000,000,000, two indices that wrap from
55 back to 1. A recursive spin lock guards it. The owner is the thread ID from
`nn::os::GetThreadId(nn::os::GetCurrentThread())`, folded to 32 bits, and is
taken and released with compare-and-swap loops. A range helper returns
`min + (T)(value × 1e-9 × 10000) % (max − min + 1)` and counts every call in a
global (`0x1935254`): the chance roll uses `0..100` unsigned, and the assist
roll in slot 108 `1..100` signed.

Two details came from matching the chance roll exactly. The `nn::os` functions
are declared `noexcept`; without it, Clang adds a terminate handler to the lock's
destructor. And the unlock computes the thread ID without using it. The form
that keeps those calls is an assertion that evaluates its expression and lets
the optimizer assume it (`SPTG_ASSERT` in
[`Assert.h`](../src/gameplay/Assert.h)). The state exit cases do not match with
that form: they need `__builtin_assume`, which drops side effects.

## Enemy class states

[`EnemyClasses.h`](../src/gameplay/EnemyClasses.h) declares all 24 regular enemy
classes with their own states (after Enemy's slot 233, each followed by its
getter) and the overrides the sources define.
[`EnemyClassStates.cpp`](../src/gameplay/EnemyClassStates.cpp) matches 60 of
their functions (9,760 bytes), mostly small.

Enemy's own fields end at `+0xb79`; everything after belongs to the class.
Classes with attacks keep them as 0x78-byte slots from `+0xb90` (EnemyNormal,
EnemyGiant and EnemyHanzo have 7). EnemyStuntman and EnemyGuyOnFire keep an
`EnemySensor` at `+0xb90` (reset by 0x9dea60, checked by 0x9ddab0) where the
attack classes have their first slot, so the slots cannot be Enemy's.
EnemyGuyOnFire's own slot sits at `+0xbd0` and ends where its attack delay
(`+0xc48`) begins. The matched functions are:

- Base-state overrides that run Enemy's or BaseCharacter's state first, then
  play an animation (EnemyGodzilla 124), start one of the class's attacks
  (EnemyNormal, EnemySpeedy and EnemyThief 194) or raise and lower a flag
  (EnemyAerial and EnemyStuntman 108).
- The approach hook (slot 167): EnemyGodzilla and EnemySpeedy go straight to
  their own state 234; EnemyWolverine and EnemyChubby pick a state by the
  target's slot 83.
- Slot 166, a hit hook: saves the motion, clears `+0x15c` and, for certain hit
  kinds, switches to a class state (EnemyGodzilla, EnemyJetPackMatt, EnemyThief,
  EnemyPaparazzi, EnemyMini, EnemyWolverine, EnemyChubby, EnemyShooter). The
  motion is copied field by field. EnemyZombie, EnemySpeedy, EnemyHanzo and
  EnemyGiant (shared with EnemyGeeOne) take more kinds through a switch; kinds 8
  and 79 lower and raise a flag before the same state.
- Some classes have states that are not virtual: EnemyHanzo's slots 244 and 245
  return `{&function, 0}` for states at `0x9f7ef0` and `0x9f7750`. The generator
  declares these from the getter's code.
- EnemyGodzilla replaces BaseCharacter's jump state (slot 100), and EnemyNormal
  (shared with EnemyJake and EnemyAlberta) writes out BaseCharacter's slot 33
  after its own check.
- Slot 34, a grab check: refused in one of the class's states or with `+0x141`
  set, otherwise allowed only in action mode 6 (EnemyGiant, EnemyGodzilla,
  EnemyHanzo, EnemyNormal). EnemyGodzilla also refuses hits in Enemy's dash
  state (slot 38).
- Slot 33 and the reaction hook (slot 21): EnemyGiant, EnemyGodzilla and
  EnemyHanzo switch to a class state in action mode 6 or on reaction 1, unless
  already in it.
- Damage (slot 69): EnemyStuntman and EnemyForestElves take the damage through
  BaseCharacter, send the current state event 20000 (`kStateDamaged`), and pass
  the damage to the attacker's slot 43 and to 0x995a30.
- Class timers: EnemyGuyOnFire waits for its sensor (slot 96), then fires its
  attack after a delay (slot 176); EnemyJetPackMatt replaces Enemy's blink state
  with a one-shot removal (slot 200); EnemyZombie times its attack 4 (slot 202);
  EnemyGiant leaves its idle and approach states for slot 242 once 0x9fd3e0
  passes.
- Actor updates (slot 16) inline Enemy's update (`Enemy::UpdateEnemy`, which
  calls BaseCharacter's update `0x945380` directly). EnemyStuntman then resets
  its sensor and counters. EnemyThief, EnemyShooter (shared with EnemyArZee),
  EnemyJetPackMatt, EnemyGodzilla, EnemyPaparazzi, EnemyMini, EnemyWolverine and
  EnemyChubby request each of their attacks with the hit kind their slot 166
  answers (EnemyChubby in the order 0, 2, 1).
