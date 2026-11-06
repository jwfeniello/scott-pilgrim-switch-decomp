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

### Type tests (slot 12)

Every class in this tree answers `IsA(type)` at slot 12, which `Cast<T>` uses. A class's test accepts its own
type or any of its base's, inlined into one chain, so the hashes each `IsA` compares confirm the tree above
independently of RTTI. In the source a class declares its type with `SPTG_TYPE(Base, type)`, which adds `kType`
and an inline `IsType`, and its `IsA` returns `IsType(type)`. 64 classes have theirs on the real class.

- Every component passes 0x07b73c94 (the menus too), and the actors also pass 0x386d550d.
- `SPTG_AIComponent` is 0x1486d4e8 (the pool the factories allocate the game's components from),
  `AnimatedAiActor` 0x1cfd89c7 and `BaseCharacter` 0x1cfe99c7. Below them: `Enemy` 0x0aff48df, `NPC`
  0x5d52578d, `ControllablePlayer` 0x2f2bf4aa and `Boss` 0x38fe97eb; `Striker` 0x7d4c55c0, `Projectile`
  0x37f7ec92, `Pickup` 0x52b303bf, `InteractiveObject` 0x05fcee1c and `BreakableObject` 0x1b2ba6bf. The
  subclasses' types are in their headers.
- The two base types need an inline function of their own (`SPTG_AIComponent::BaseIsType`). Written into
  the same `||` chain as the class types, the compares become branches, where the original tests the last two
  with `cset` and `orr`.
- `EnemyJake`'s test leaves out `EnemyNormal`'s type (0x65c38d59), although its vtable has `EnemyNormal`'s
  methods, so its type declaration names `Enemy` as the base.
- 0x2f2bf4aa, the type of the characters that receive messages at slot 159, is `ControllablePlayer`'s own.
  The separate `MessageReceiver` view that stood for it is gone.
- Still on placeholders: `SPTG_AIComponent`'s own test (0x862630, shared by 15 vtables), `Pickup` (0x9a3db0)
  and `MithrilSkateboard` (0x9b8a60), since `Pickup.cpp` still uses a small stand-in for `AnimatedAiActor`,
  and the 40 menu screens, which share a five-type base of their own.

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

The machine holds its owner, the current state and the state before it. Its
transition (`0x812930` for the characters, an identical copy at `0xa15330` for the
boss AI) sends the exit event to the current state, makes the new state current
and the old one previous, and sends the enter event to the new state. While the
32-bit value after the machine (+0x28 from it) is not -1, it also sends 10003 to
the old state before the exit and to the new state after the entry. The
constructors set that value to -1. SuperFightingRobotHand's state 108 reads the
previous state: a hand that came from state 268 or 270 plays animation 38 first.

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

A few more things decide these handlers' code:

- **Multiplication order follows memory order, not the source.** LLVM 8's
  Reassociate pass sorts a commutative operation's operands by rank, lower rank on
  the left, even for floats. Each load, store and call in a block gets the next
  rank, and an expression gets one more than its highest operand. So
  `sign * dashSpeed` stays that way round only when another load or store sits
  between the flag the sign comes from and the load of `dashSpeed`. State193
  (`0x988ee0`) matches with its other copies done first.
- **A compare chain's order is reversed.** `if (current == 33) ... else if
  (current == 34) ... else if (current == 35)` gives the original's compares against
  35, then 34, then 33.
- **Keeping the result in a register.** Some originals hold the result in a
  callee-saved register from before the jump (`mov w20, #1` ahead of `br x10`). They
  match with `int result = kStateHandled;` and `case kStateEvent3: return result;`.
  The others match with plain returns.
- **Calling a state change last.** Many of the calls to `Transition` that end a
  function are plain calls followed by a return, not tail calls. An assumption right after
  the call stops the tail call and emits no code, so `PlayAnimationOn` (`0x970900`) matches
  with `states.AssertOwner(this)` after it. This is the same no-code assumption as in the
  exit cases.
- **Declared parameter types show up in callers.** `SetFacing` takes an `int`. Its own code
  looks the same with a `uint8_t`, but `PlayAnimationOn` only schedules its load of the
  argument correctly with the wider type.
- **A case's position changes the order inside it.** A constant result can land before the
  stores of an exit case or between them. The original's order comes out with the exit case
  listed last, after `default`, as in `BaseCharacter::State122`. `State179`, `State181` and
  `State235` match this way.
- **Sharing a compare keeps its form.** LLVM rewrites `x > 9 ? 9 : x` into a minimum unless the
  compare has another use. `UseItem` caps the count at +0x870 and also uses the compare's
  opposite, which gives the original's two separate compares:
  `bool over = lives > 9; value870 = over ? 9 : lives; used |= !over;`
- **Sinking identical calls.** When every arm of an `if`/`else` ends in `states.Transition(...)`,
  LLVM sinks the calls into one block, down to the virtual call that gets the state. `State235`
  needs one `Transition` per arm, not a ternary inside one call.
- **Loads after slow paths.** A value read before an accessor's slow path stays in a
  callee-saved register across it. `slideSpeed * FacingSign()` holds the speed in
  `d8`; computing the sign into a local first gives the original's code.
- **Locals and early returns.** At -O2 every local gets a lifetime marker, and a `return` that leaves
  its scope goes through a shared cleanup block. In a loop, `Enemy* enemy = *i;` in the body and a
  `return true` under it leave `br (or (not hit), justOne)` and a second test of `hit` where the
  original has two plain branches. `Striker::FindEnemies` matches once `enemy` is declared before the
  loop. The same markers count in landing pads: each local declared after a throwing call adds a
  one-branch landing pad, so the number of those pads shows how many locals the original had in
  that scope. `Striker::ArrivingState` has three.
- **The assumption on other paths.** `states.AssertOwner(this)` also belongs on the "parent took over" path of
  a state that asks its parent first. Without it `result = took over` and `result = handled` fold into a
  select, and the original keeps both as branches (`Todd::State244`). This is the same stand-in described
  under the exit case: what the original tests there is unknown.
- **Narrow loads hide wider fields.** `ldrb [x, #0x61]` with `tbnz #7`, and `ldrb [x, #0x62]` with `tbnz #0`, are
  bits 15 and 16 of a 32-bit field at `+0x60`, narrowed by selection. Read as bytes they come out as
  `ldrsb` and `tbnz #31`. `PlayerInfoView::moves` turned out to be this, and it is now declared as 32 bits.
- **Which case falls through.** Selection sorts a small switch by value, then swaps whichever case's block comes
  next into last place so it falls through. A compare chain that runs from the highest value down
  (`cmp #152`, `cmp #151`, `cmp #150`) means the lowest case comes first in the source: a `switch` on the
  animation with `case 150` first, not an `if` chain from the top. `Patel::State256` and
  `LucasLee::State266` match that way.
- **Testing several states.** `if (states.IsIn(a()) || states.IsIn(b()))` with the work inside
  the `if` is the form that matches. Selection then sees the work as the next block and inverts the
  condition, which gives `cbz`. The same test written with early returns selects `tbnz`, and a later
  pass reverses it to `tbz`, so one instruction differs. `KenKyle::OnHit` shows this.

- A position reached through a helper is worked out before the helper runs. `add x20, x19, #N` held across an actor
  lookup means the caller passed `&field` to an inlined helper (`BaseCharacter::PlaceAt`). Written directly at the call,
  the address is computed after the lookup.
- `b.ls` after `fcmp` is an ordered `a <= b`, and `b.le` is `!(a > b)`. They look alike and are different source.
- A value read before a loop into a local keeps its register apart from the loop's. `Lynette::Slot237` matches only with
  `float range = closeRange;` before the loop.
- `if (states.current == state && other && ...)` keeps the pointer-to-member compare's pieces above the null test.
  With `other` first they sink below it (`Lynette::Slot46`).
- Reading members into locals first sets their registers. `ControllablePlayer::State249` matches with
  `PlayerInput* in = input; int bit = value141c;` before the test. With the members written inline, two scratch
  registers trade places.
- The assumption also stops a tail call. `SuperFightingRobotHand::FollowPlayfield` ends with a call and a
  return in the original, where a plain build branches to the callee. `states.AssertOwner(this)` after the call
  gives the original's code, which fits the release-mode assertion this stands in for.
- A register swap can be a case-order effect. `ControllablePlayer::State165`, `State175` and `State177`
  looked like `x19`/`x20` swaps, and all three match with the cases ordered update, event 3, default,
  enter, exit.
- `State100`, `State102` and `State187` still differ only in one floating-point register: the multiply
  kept across `SpeedScale` is in `s9` in the original, which saves `d9` alone, and in `s8` here. The
  Cortex-A57 load-balancing pass keeps a chain's own colour when the balance is even, so the `s9`
  should already come from register allocation, which picks `s8` first in these builds.
- `fmaxnm` with the `fabs` after it kept means `0.0f < x ? x : 0.0f`, the max helper with the constant first.
  `fmaxf(x, 0.0f)` also gives `fmaxnm`, but then LLVM knows the result can't be negative and drops the
  `fabs` (`StrikerYeti::AttackingState`).
- A flag argument worked out at the top of a function is scheduled apart from the call that uses it.
  `AnimatedAiActor::PlayFacingAnimation` needs `bool loop = (flags & 4) != 0;` before its lookups. Inline in the
  call, one instruction of the tail call moves.
- Reads before a `bool` built from `&&` stay above it, because the join block has two predecessors and the load can't
  sink. Pure arithmetic on them still moves down to its use (`AttackSlot::InRange`).

- Arguments to an inlined helper are read before the helper's own work. Four ranges read into `WithinRange` keep their floats
  across the actor lookup, and each case's lookup is then merged at the machine level (`Enemy::TargetInRange`).
- A float kept across a call in a general register, or converted with `fmov`, points at an `i32` value. It usually means a
  load that had only stores as users when an earlier pass ran.
- Changing a field's type to suit one function can break others. `facingLeft` as `bool` gives `State136`'s `eor` but breaks
  `TurnAround`, `FaceX` and two states, so it stays `uint8_t` and `State136` stays unmatched.

- A form that keeps working for a state with a jump table: `int result = kStateHandled;` first, the update case first, then
  `default`, then enter falling through into exit, then `kStateEvent3` with only a `break`. Exit needs `states.AssertOwner(this);`
  or enter and exit become one range and the table is lost, because selection needs four clusters to build one
  (`ControllablePlayer::State237`, `EnemyChubby::State242`). Where the blocks sit follows the order of the cases.
- A `ldrb` passed straight to a `bool` parameter means the field is a `bool`. As `uint8_t` it compiles to a compare and `cset`
  (`SuperFightingRobotHand::flagF49`).
- A value multiplied by a function's result, loaded after the call, needs the call in a local first:
  `float sign = FacingSign(); speed = jumpBackSpeed * sign;` (`EnemyChubby::State236`).

- Two cases can go to one block in the finished code but still need separate compares. Selection only builds a compare for each
  if the destinations differ when it runs. `Todd::State270` matches only with an assumption in `case 136` that falls into
  `case 135`. That is the same stand-in as the exit case, and what the original does there is unknown.

- A handle in an array, looked up with `onyx::Get(chicks[i])`, keeps the element's address through the resolve
  and the activation. `Patel`'s slot 13 reads the element again from the array after the activation, so its
  lookup is written out, with a 64-bit index.
- A search that returns from inside the loop when it reaches the end (`InteractiveObject::Remove` and
  `FindSpawner`) keeps the pointer increment apart from the load. Written as a `for` loop with a `break`, the
  increment folds into a post-indexed load.

## Build profile for game classes

The game-class sources (`gameplay_pickup`, `gameplay_piniata`) build with
`-fstrict-aliasing`:

- **Events are empty, and that decides stack slots.** Pickup's collect function
  sends the same event in two branches, and the original gives each branch's
  payload its own stack slot. Other functions share a slot between two payloads.
  Both come from one rule in LLVM 8: stack slots are only merged when a function's
  locals total at least 16 bytes. The event payload is an empty class, as Onyx's
  `EventEmpty` in the RTTI suggests. It is 1 byte, but AArch64 prefers 8-byte
  alignment for aggregates, so it looks like an 8-byte slot in the code. Two of
  them total 2 bytes and stay apart. Two 16-byte `ChangedEvent` payloads, two
  20-byte option structs or two 12-byte vectors reach the cutoff and share a slot.
  This repository used to model the payload as 8 bytes of data and turn stack
  coloring off in 11 builds to make up for it. With the empty class all 433
  functions in those builds stay exact without that flag.
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

Two send forms appear:

- `SendEvent` passes one payload: the callback fills it, then the listener
  receives it. An overload takes a payload the caller built from a field or from
  the arguments.
- `SendValue` builds one payload for the callback and another for the listener
  from the same arguments. The listener half is its own inline step, which gives
  the two payloads the stack slots in the original order. Struct payloads are
  constructed field by field (padding is not written), except one colour that is
  built once and copied.

[`EventSenders.cpp`](../src/gameplay/EventSenders.cpp) matches 51 component
methods built on these forms. Most send from a member callback/target pair with
a constant, default-constructed or uninitialized payload; some first set or test
a field.

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

`MithrilSkateboard`, Lucas Lee's skateboard, is a pickup with its own states.
Its slot 84 (`0x9b8d30`, matched) plays animation 107, then rests in animation
100 for `restTime` before it counts as collected. The original compares
animation 100 first, so the source tests 107 first: compare chains come out
reversed. Its idle state (slot 80) plays animation 189 and then stands in
animation 0 until a player collects it; it is written out, and only the order of
three independent moves before the animation calls still differs.

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

## Breakable objects and turrets

`SPTG::BreakableObject` (vtable `0x1889f10`) is the actor behind breakable scenery, and `Piniata` and
`GunTurrets` derive from it. [`BreakableObject.cpp`](../src/gameplay/BreakableObject.cpp) has its first two
states. `DamagedState` picks the damage stage animation for the health left and breaks at zero.
`BrokenState` sends the broken event, releases the debris, and if `endsAfterBreaking` is set moves on when
the animation ends. `Piniata.cpp` still has its own local copy of these fields from before this class
existed.

`GunTurrets` (89 slots) adds three states that only its slot table reaches:

- `WaitingState` (`0xa14230`) plays animation 213 until `TargetInRange` finds a player whose horizontal
  distance is below `range` (`+0x2b4`).
- `AimingState` (`0xa14170`) plays animation 214, then goes to `DamagedState`, which is the turret's
  armed state as well: with a target still in range it counts up to `shootDelay` (`+0x2b0`) and fires, and
  with none it goes back to waiting.
- The firing state at slot 88 (`0xa13c30`) is not yet written.

## Money

`ControllablePlayer` keeps `money` at `+0x13e8` as a float in multiples of 0.05, capped at 9999.95, and
`moneyEarned` at `+0x1458`, capped at 1e9. `SpendMoney` holds that logic, and a negative amount counts as
earned. The one caller matched so far is `EnemyThief::AttackLanded`: a landed attack takes `moneyStolen`
(`+0xc08`) from a player who has more than that and is not down, then shows it through `0x996c30`.

## Spawning and placement

A spawner hands `Enemy::Spawn` (slot 159, `0x9cf9a0`) an `EnemySpawnInfo` of `0x68` bytes. The enemy takes the
record's ID when the game state's `+0xe0` is set, resets through slot 19 and is placed by `PlaceAtSpawn` (`0x9dd110`).
A copy of the record then goes on a list: `spawnedList`, or `respawnList` if the enemy was removed to respawn. The list
is doubly linked, and `0x9dd400` copies the record into a 120-byte node at the front and gives the node back.

`side` (`+0x14`) picks the place. Side 4 is exactly `position` (`+0x18`). Sides 0 and 1 are 30 past the left and right
edges of the screen, keeping the record's lane (`+0x60` for y, `+0x5c` for z). Sides 2 and 3 are 30 past the top and
bottom, at the first player's x with the same z. The z also becomes `groundHeight`.

`NegaScott`, `GigaGideon` and `EnemyJetPackMatt` inline slot 159 (`Enemy::SpawnFrom`) and add their own step. The jet
pack remembers the height it was placed at in `spawnHeight` (`+0xc3c`).
Each frame (slot 13, after Enemy's) a jet-pack Matt above height 80 with health left is put back at 70, and one whose
target is more than 500 away, with `+0x940` raised and `+0xae9` clear, loses `+0x328` and its guts and flies off (the
state at `0x9f25b0`).

`PlaceAtSpawn` is not matched. After the move, the original converts the height from a value it has carried across the
call in a general register, instead of reloading it from the `Vector3` it passed. It would only do that if the compiler
knew `ActorObject::MoveTo` leaves that `Vector3` alone, and these sources can't declare that. The executable is a
link-time optimization build ([LTO_BUILD.md](LTO_BUILD.md)), which would give the compiler that knowledge, the same way it
let base-class bodies be inlined into subclasses in other files. This function would then only match from a build that
sees `MoveTo`'s body, which the separate builds here don't.

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

[`BaseCharacter.cpp`](../src/gameplay/BaseCharacter.cpp) matches 20 of
BaseCharacter's other virtuals (2,020 bytes). Most are small hooks that do one
thing and switch states:

| Slot | Address | Behavior |
| --- | --- | --- |
| 7 | `0x96be30` | Reset: starts the state machine in state 96 (owner first), runs `0x945c40` and slot 153, and refills `+0x328`, `+0x32c` and `+0x160` from slots 149, 150 and 57 |
| 13 | `0x96bf80` | After AnimatedAiActor's slot 13 (`0x945670`): updates the state machine; outside state 106, `+0x328` regains `+0x518` per second up to slot 149; then slot 154 |
| 25, 26 | `0x96c8b0`, `0x96c980` | Animation speed and pause: passed to the animation component (`+0x70`, type `0x29fbe438`) and, with `+0x338` set, to the mount |
| 32, 33 | `0x96ce30`, `0x96ce90` | After AnimatedAiActor's slot (`0x93fec0`, `0x940170`): restore the saved motion values and go to 108, or go to 136 |
| 35 | `0x96cf00` | Starts the attack at `+0x530`, or `+0x588` with its flag set |
| 53 | `0x96e4b0` | Drops the held reference and goes to 100 |
| 64 | `0x96ede0` | Takes an amount from `+0x160`, then from `+0x32c`; returns what was taken |
| 74 | `0x96f740` | Records a point, a flag and a value; goes to 110 |
| 80, 83 | `0x970710`, `0x970820` | Whether in state 106; slot 83 also holds in action modes 2 and 4 |
| 82 | `0x970770` | Held, on the ground, not slot 85, not `+0x141`, and outside action modes 3, 5, 6, 8 and 11 |
| 86 | `0x9708e0` | Plays animation 17 |
| 89, 90 | `0x970b90`, `0x970be0` | Adds to `+0x32c`, kept between 0 and slot 150; or takes from it, kept between 0 and `+0x2f8` |
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

Slot 75 is `ApplyKnockback`: the hit's kind picks the motion, and it returns `flag130`. BaseCharacter's version starts
its `attack258` when that holds and has the attacker record the hit's ID in `recentHits`. Slot 76 is `FollowPlayfield`,
which flying enemies override to take the ground height without snapping to it. `IsOnScreen` (`0x994610`) tests the
actor's position against `GetScreenRect`.

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

## The one-hit enemies' idle state

`EnemyForestElves`, `EnemyStuntman` and `EnemySasuke` share `EnemyOneHitWonder`'s `EnemySensor` at `+0xb90`, and each has its
own slot 96 written the same way. While idle, once the sensor passes, it takes the first thing the sensor has seen that's
enabled and not out, turns to it, and places the range origin `+0xbbc` from it (`PickPoint`, `0x9daf90`). `flagBcc` stops this
running twice, and it goes to state 234. The stuntman also sets `minX` and `maxX` from the screen, less the margin at `+0xbd0`.
Sasuke sets `targetX` to the screen edge it faces, less the same margin.

Three of their methods are `EnemyOneHitWonder`'s own and shared by all of them (the same address fills the slot in
each vtable): the update (slot 16, `0x9cccb0`), which resets health, guts, the sensor and its counters every frame;
damage (slot 69, `0x9ce090`); and state 108 (`0x9cf0b0`). They were credited as `EnemyStuntman`'s before.

`EnemyShooter::State236` fires once `stateTime` runs out. At a target in the air it may aim up: `valueC28` is the percent chance,
and the upward velocity comes from `tanf` of the angle in `valueC2c`, times the shot's speed along x.

## How an enemy picks an attack

`CollectSpecialAttacks` (slot 162) lists the attacks of kinds 31 and 32, unless the target's slot 83 refuses them, and
`CollectBasicAttacks` (slot 163) lists the rest, leaving out kinds 39, 45, 61 and 202 as well. `PickAttack` (slot 165) then
chooses from a list by weight: an attack slot's `+0x10` byte is its weight, and `RollWeight` (`0x9dcfd0`) rolls from 0 to
the total. `TargetInRange` (slot 169) tests the actor against half of one of four `AttackRange`s around `rangeOriginX` and
`rangeOriginY`.

`LoseGuts` (slot 90) takes guts up to `+0x2f8`. With bit 4 of `+0x978` set and at or below `gutsChanceLimit`, it rolls
`gutsChance` percent to go to AI mode 4. `LoseGuts` and `TargetInRange` are matched. The others are written but not
matched, and each one's comment says what still differs.

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

## Serialization (slot 4)

Every character class serializes its fields in slot 4
([`Archive.h`](../src/gameplay/Archive.h)). The function runs the parent's
slot 4, then moves its own fields in layout order. Attack slots go through
`AttackSlot::Serialize` (0x9e6310), and other fields go through the archive's
stream (its slot 6 returns the bytes moved, added to the archive's position).
Because each field is moved with its size, these functions record the class
layouts. EnemyNormal has ten attack slots before `+0x1040` and two more after
it. Ken & Kyle have seven, then 4-byte settings from `+0x10b0` to `+0x10ec`.

Some 4-byte fields go through a `uint32_t` copy (`onyx::TransferAs`), which
suggests another type in the original, such as an enum. The copies only
match when made by an inline helper. Inlined, each call's copy is placed
below the previous call's, which is how the original lays out two of them
(EnemyShooter). EnemyOneHitWonder has no slot 4, so EnemyStuntman and
EnemySasuke each move its fields themselves.

Slot 4 takes a second argument, a `ComponentSlot::Source*`. Slot 4 passes it
on to the parent, to handle transfers (0x67dd00) and to
`AssignComponentSlot`, the template instances that fill component slots and
singletons ([`ComponentSlotAssign.cpp`](../src/ComponentSlotAssign.cpp)).
Enemy's slot 4 (0x9e06c0, 2,896 bytes) assigns two (`+0x798` and the scaling
singleton at `+0x7a0`) after two handles, then moves its settings from
`+0x8f8` to `+0xa20`. These include the special attack's type and speed,
the four attack ranges (all three values of each, so the third is now
`extra`), the counter chances, the dash and blink settings and the bonus
modes. Its temporaries share one stack slot. The robot
hand restores a callback list at `+0xd70` after setting its owner (0xa304b0,
a `DeserializeCallbacks` instance). Members with their own serializers are
`ProjectileSpawnInfo` (0x8fd4c0) and a 0x50-byte `PairList` (0xc1f2b0, a count
and a vector of pairs). Object references go through 0x997120 (a flag, then
an id, resolved when loading).

Classes outside the characters serialize the same way.
[`ComponentSerialize.h`](../src/gameplay/ComponentSerialize.h) holds ABI views
of 71 of them. They are actions on `Onyx::ActionComponent` (0xbcaa30), other
components on `Onyx::Component::Base` (0x6782a0), menus on `SPTG::FlashMenu`
(0x7ffe10), the level camera and the network phase on `SPTG::SPTG_Phase`
(0x76b760) and the gun turrets on `SPTG::BreakableObject` (0xa10790).
`SPTG::AnimatedAiActor` (0x945fe0) is the base of BaseCharacter, the pickups,
projectiles, laser beams, mechanisms and interactive objects. It moves a block
at `+0x58` through its own serializer (0x946580: five handles and a
reference-counted resource, the fields BaseCharacter's header calls the
effect, partner and animation handles, the actor object and the services),
fills the slots at `+0x88` and `+0x90`, then moves 4-byte settings from
`+0x98` to `+0x128` and one at `+0x180`. Each view places the
serialized fields at their offsets with padding between. The functions
follow the original's operations in order: the parent call,
`AssignComponentSlot` instances, handle, id (0x8012a0) and list transfers,
and field transfers with their sizes. One class
(`SPTG_MaterialModifier`) only matches with plain local copies instead of
`TransferAs`, which shows the original used both forms. `SectionActorPresenceLogic` needs its copies to share a stack slot.

The Onyx engine's components serialize the same way.
[`OnyxSerialize.h`](../src/gameplay/OnyxSerialize.h) holds 78 views of them and
of game classes built on them (`SPTG::FlashMenu`, `LevelSection`,
`LevelStage`), named after their RTTI, plus two templates whose instances
share one slot 4: `Onyx::Switch<Owner, Target>` (seven instances: a reference
list of targets and a handle) and
`Onyx::Gameplay::Circuits::Detail::BaseValuePublisherCircuit<T>` (four: an
event whose entries each value type reads with its own function).
`Onyx::Component::Base`'s own slot 4 (0x6782a0), which every component's
chains to, restores the two events every component has (`+0x8`, type
0x255c0afe, and `+0x20`, type 0x44174b43: the events ActorFlags' blinking
sends, and the one slot 2 sends when it sets bit 2 of `+0x38`), then moves the
flags at `+0x38`. Ten classes register a handler for their active state
changing ([`ActivationEvents.cpp`](../src/gameplay/ActivationEvents.cpp)): it
sends the `+0x8` event when the component is deactivated and the `+0x20` one
when it is activated (one class sends two events of its own instead). Its
destructor (0x677400) unregisters and frees the same two
events (`RootTrigger` in
[`RegisteredTriggerDestructor.h`](../src/RegisteredTriggerDestructor.h)).
`Onyx::ActionComponent`'s own slot 4 (0xbcaa30) matches there; the action
views in `ComponentSerialize.h` still derive from an empty stand-in for it.
Some components hand a handle they just moved to the source's slot 3
(`onyx::AttachHandle`), with `NoHolder` (0x191b6c0) standing in for a missing
one, and some byte fields move through a 32-bit copy.

Members with serializers that many classes share are declared in
[`Archive.h`](../src/gameplay/Archive.h): a 0x28-byte `ReferenceList`
(0x682f80, 245 callers: a count, then each reference's key pair, resolved
through the source) and a vector of points (0x884c60, 12-byte elements),
which returns the archive so the next transfer uses it. Vectors of 4-byte
values are moved inline (`onyx::TransferVector`): the count through a local,
`Vector::Resize`, then each element. `Resize` itself matches
([`Vector.cpp`](../src/gameplay/Vector.cpp)): two identical 4-byte instances
(0x70c0a0 and 0x6994f0) clear the vector for a zero count, keep it when the
count is unchanged or smaller, and otherwise grow the buffer. Growing copies
the elements, frees the old buffer, and keeps it instead when the allocator
hands it back. Some classes (AchievementData) expand the resize in place.

Events a component sends (`EventSlot`, 0x18 bytes: the callback and target
that `onyx::SendEvent` takes, then a flag raised as the callback is read) are
restored by `DeserializeCallbacks`
([`DeserializeCallbacks.h`](../src/DeserializeCallbacks.h)). The component makes
itself the event's target first. BaseCharacter's two events at `+0x3c0` (sent
when Enemy's state 98 starts) and `+0x750` (sent when state 116 starts) are
such slots, as are the seven between them. Many serializers expand
the reading loop in place instead of calling an instance, so the loop lives in
the shared header. The expanded copies show where the callback's invoke
pointer is stored: after the new callback is published to the slot passed to
`Process`. Storing it there in the shared loop also reproduces the 37
out-of-line instances. Each expansion has its own key and host type, so its
handlers (the typed and generic members, which differ per class) bind
separately. A third form reads the count and then calls a
function of the event's own for each entry (`ReadEventEntries`, for example
GateSwitcher, PlayerSynchronizer and the publisher circuits); those per-entry
functions are not matched yet.

Strings (0x10 bytes, a reference-counted buffer at `+0x8`) move through
0x683650, which returns the archive; consecutive strings chain on it, written
here as `archive << a << b`. Some classes keep arrays that an allocator fills
once (`onyx::Array`: the allocator, then the elements' range): the count goes
through a local, a nonzero count allocates the elements and clears them, and
then each element moves. The end address is computed as integers, size first,
as the original does. A field set from another after loading (for example
ControllablePlayer's `+0x11d8 = +0x11dc`) shows up as a plain copy between
transfers.

The playable characters
([`PlayerClasses.h`](../src/gameplay/PlayerClasses.h)) run ControllablePlayer's
slot 4 (0x978660), then their own fields from `+0x1560`. ControllablePlayer's
slot 4 moves its fields from `+0x788` to `+0x1520`, so the header declares it up
to `+0x1560`. It in turn runs BaseCharacter's (0x96a2f0, 6,972 bytes), which
runs AnimatedAiActor's.
Wallace and Stephen share a layout of four `Attack`s
(`Attack::Serialize`, 0x8e4630). After loading some values, Kim, Ramona,
Wallace and Stephen set the field just before from them, for example
`+0x1560 = +0x1564`.

Matched: the seven playable classes, EnemyNormal, EnemyJake, EnemyGeeOne,
EnemyMini, EnemyStuntman,
EnemySasuke, EnemyJetPackMatt, EnemyShooter, Ken & Kyle, NegaScott, Lynette
(which also moves TagTeamMember's fields), SuperGideon, the robot's head and
hand, Todd, Enemy itself, and (in
[`ClassSerialize.cpp`](../src/gameplay/ClassSerialize.cpp)) Boss, Chau,
SuperFightingRobotAI, EnemyAerial, ControllablePlayer and NPC. BaseCharacter's
is in `BaseCharacter.cpp`. Boss's slot 4 (0xa181e0) moves two
component slots and two handles from `+0xb88`, its two attack slots, the
settings from `+0xca8`, the points at `+0xcd8`, a reference at `+0xd00` and the
callback list at `+0xd30`, so Boss's own fields end at `+0xd48`. Todd's slot 4 moves eight component handles from `+0xd48`, so Boss's own
fields end before `+0xd48`. The flags at `+0xd49` and `+0xd4a` belong to the
classes that use them: Gideon, SuperGideon, Ken & Kyle and NegaScott.

## Enemy class states

[`EnemyClasses.h`](../src/gameplay/EnemyClasses.h) declares all 24 regular enemy
classes with their own states (after Enemy's slot 233, each followed by its
getter) and the overrides the sources define.
[`EnemyClassStates.cpp`](../src/gameplay/EnemyClassStates.cpp) matches 81 of
their functions (15,828 bytes), mostly small.

The class hierarchy comes from the RTTI, where each class derives from
`Onyx::Component::Compose<Base>`. Most classes derive from Enemy. EnemyStuntman,
EnemySasuke, EnemyGuyOnFire, EnemyChargingCrowd and EnemyForestElves derive
from EnemyOneHitWonder. EnemyJake and EnemyAlberta derive from EnemyNormal,
EnemyGeeOne from EnemyGiant, and EnemyArZee from EnemyShooter. Functions a
subclass inherits sit at one address in every vtable that uses them, which is
how EnemyNormal's slot 33 serves EnemyJake and EnemyAlberta.
EnemyOneHitWonder's states 236 (stop, then remove) and 238 (stop, wait
`+0xbc4` seconds, back to 96) match. Its fields (the sensor at `+0xb90`, the
timer at `+0xbc8`) are the ones EnemyStuntman's update resets.
EnemyStuntman's state 234 is written out but not credited.

Enemy's own fields end at `+0xb79`; everything after belongs to the class.
Classes with attacks keep them as 0x78-byte slots from `+0xb90`. EnemyNormal
has 7, EnemyHanzo 8, EnemyGodzilla 4 and EnemyGiant 10 (ending at `+0x1040`);
the states use the slots after the ones the update requests. EnemyStuntman and EnemyGuyOnFire keep an
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
  target's slot 83. EnemyPaparazzi picks state 234 or 236 with one random roll
  (matched). EnemyNormal, EnemyGiant and EnemyHanzo pick a pair of attacks by
  the target's slot 83 and then one of the pair at random; those are written
  but not matched, because the original copies the generator's lock release
  into both arms.
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

## Bosses

[`Boss.h`](../src/gameplay/Boss.h) describes `SPTG::Boss` (vtable `0x188b950`,
258 slots), which derives from Enemy. It adds slots 234–257; the last seven
pairs are states and their getters. It also overrides about 40 Enemy and
BaseCharacter slots, including nine states with their getters.
[`BossClasses.h`](../src/gameplay/BossClasses.h) declares the 20 boss classes,
generated like the enemy classes. All derive from Boss, except Lynette and Envy,
which derive from `TagTeamMember`. The family has about 267 KB of unmatched code
in 329 functions.

[`BossStates.cpp`](../src/gameplay/BossStates.cpp) matches 20 of Boss's own
functions (4,976 bytes), among them:

| Slot | Address | Behavior |
| --- | --- | --- |
| 13 | `0xa18750` | After Enemy's slot 13, counts `+0xd0c` up to `+0xcb8` (then clears `+0xd08`) and runs slot 242 |
| 16 | `0xa187b0` | Enemy's update, then requests the second attack slot (`+0xc30`) with kind 1 |
| 33 | `0xa188e0` | In action mode 6, goes to 252 or 122 and refuses; otherwise BaseCharacter's slot 33 |
| 69 | `0xa18ed0` | A hit in action mode 6 from a character whose slot 50 is 0 raises `+0xd27`; then Enemy's damage handling |
| 82, 86 | `0xa18f90`, `0xa19060` | Slot 85 refuses, else BaseCharacter's test; animation 17 |
| 108 | `0xa19c20` | After Enemy's state, on entry runs slot 240 unless `+0xd28` is set, `+0x160` is positive or slot 95 holds |
| 116 | `0xa1a000` | Hit reaction: entry runs Enemy's state, then slot 240 unless `+0xd28` is set, with `+0x3ba` raised until exit; then 200, or with `+0xcd1` animations 16 and 27 before 256 |
| 122 | `0xa1a170` | Knockdown: stops, animation 27, action mode 7; standing on a flagged `PlayfieldCollision` raises `+0xd26`; then 244 |
| 198 | `0xa1b100` | Special attack: after Enemy's state, passes the target's X position to slot 91; then 244 |
| 200 | `0xa1b280` | Blink state: entry runs `0x996c30` (with `+0xcd1`) or starts the blink timer; an update with `+0xd29` removes the boss and raises `+0xd2a` |
| 233 | `0xa1b470` | When triggered in state 244, rolls 1–100 against `+0xccc` |
| 234, 237, 238 | `0xa1b620`.. | Go to 246 for kind 1 (else 198); refuse attack requests of kinds 31, 32, 39, 45, 61; whether animation 0, 1 or 7 plays |
| 240 | `0xa1b6f0` | The defeat: every character in the list at `+0xba0` slows to animation speed 0.3 for 3 seconds; then event `0x3b6730cc` and `+0xd28` |
| 252 | `0xa1da40` | Stops, starts the first attack with animation 131 in action mode 6; then 122 |
| 256 | `0xa1e390` | Animation 283 with `+0x3ba` raised; then 200 |

Some Boss functions inline their parent's body: the update, damage handling,
and BaseCharacter's slots 33 and 82. The headers give those bodies as inline
helpers (`Enemy::UpdateEnemy`, `Enemy::TakeEnemyDamage`,
`BaseCharacter::CanSlot82`), and the parents' own versions call the same
helpers. The generator also declares every inherited state pair a class
overrides. A boss calling the getters `State122Ptr` and `State252Ptr` then calls
them through the same class, which lets the compiler hoist the shared vtable
load as the original does.

Slot 200 matches with the cases in the order update, enter, event 3, exit,
default; a gap that looked like a shared tail was the case order. Slot 116 was
credited earlier as `Todd::State116`, but Todd doesn't replace it: the address
is Boss's own slot 116, shared by Todd, TagTeamMember, the robot's parts and the
other bosses, and Chau calls it as `Boss::State116`. It is now Boss's.

[`BossClassStates.cpp`](../src/gameplay/BossClassStates.cpp) matches 134
functions of the boss classes (40,740 bytes). Most are hooks that inline
Boss's version and add a class detail:

- **Slot 234** maps an attack request's kind to a state. Each class tests its
  own kinds (Envy 79; Gideon 28 and 79; Lucas Lee 174 and 178; Lynette 11,
  20 and 180; NegaScott 79, 190, 193 and 195) and then inlines Boss's choice
  (`Boss::TransitionForKind`: 246 for kind 1, else 198). Calling both getters
  through Boss is what lets one vtable load serve them.
- **Slot 13:** NegaScott, RoxyMirror and SuperFightingRobotAI inline Boss's
  slot 13 unchanged (`Boss::UpdateBoss13`). TagTeamMember, GigaGideon and
  SuperGideon add a countdown or an effect update.
- **Slot 237** filters attack requests by kind (Chau and Patel refuse 31, 39, 45
  and 61; Boss also refuses 32). Gideon refuses 32, 39, 45 and 61. Todd takes
  kind 11 only once `+0xdb8` reaches `+0x11b0`. Lucas Lee takes 11 and 19 only
  with `+0xfd0` clear and 174 only with it set. **Slot 238** tests the
  animation playing.
- **Lucas Lee's second animation set:** while `+0xfd0` is raised, his slot 22
  plays a counterpart for animations 0, 1, 7, 12, 13 and 87, and slot 162
  refuses. Slot 22 passes both flags on with `& 1`, so BaseCharacter's
  `PlayAnimation` takes them as `bool`.
- **Class state overrides** run Boss's state and raise a flag between entry and
  exit (Todd 98 and 248, Envy 198), or play an extra animation (Todd 106).
- **State 172:** Chau, GigaGideon, Ken & Kyle and SuperGideon carry a copy of
  Enemy's state 172 that reports only the update as handled. The original
  computes that result at the end as `event == kStateUpdate`, with an event 3
  case that returns the initial 0.
- **GigaGideon's armor:** slot 19 starts `armorMode` (`+0xd4c`) at 1, with `armorHealth` from `armorHealthStart` and
  `coreHealth` from `coreHealthStart`. `LoseHealth` (slot 64) sends a hit to the armor in mode 1, where `armorTally`
  (`+0xd5c`) raises `armorStagger` at `armorTallyLimit`. State 258 goes to 262 on that flag and to 264 when the armor is
  used up. In mode 2 hits go to the core while `coreExposed` is set, and `coreBroken` rises when it's used up. Otherwise
  it's BaseCharacter's health and guts.
- **Todd's kind 28** lifts every interactive object he can get on with that's on screen: state 88 of the object, with
  `liftHeight` from his `+0x11a8`. With any lifted he goes to 266, otherwise to 260.
- **Lynette's slot 237** refuses kind 1 when the current target is in range of her kind 180 attack
  (`AttackSlot::InRange`), and kind 180 when any target is within `closeRange`. An attack slot's first 16 bytes turned
  out to be its range in x and z, and the y range is `+0x10` of the attack.
- **Envy:** a player's hit during their state 165 raises `flagD83`, which sends her to state 268 from her approach. In state
  268 she counts the damage she takes. The approach otherwise follows Lynette's, with the target going out as an extra exit.
- **SuperFightingRobotHand:** at half health it tells the robot once (`halfHealthDone`, the robot's state 274) and goes to state
  260. At no health it goes to state 262.
  Its slot 76 doesn't follow the playfield: the hand keeps its own ground height, a float at `+0xf38`, and holds
  its shadow under it at that height.
- **Damage (slot 69):** Roxy inlines Boss's handling (`Boss::TakeBossDamage`);
  TagTeamMember also drains its own health at `+0xd7c`, Ken & Kyle start a
  recovery, Chau derives a phase from its health, and the robot hand counts hits.
- **Patel** summons HipsterChicks (handles at `+0xd60`) and sends each one's
  slot 94 from its slot 13. **Ken & Kyle** watch each other (`+0xd58`) and leave
  state 114 when the twin is down.
- **SuperFightingRobotAI** makes itself the owner of both hands
  (`SuperFightingRobotHand`, component type `0x37bd3ac0`) on reset. Its hands
  wait for targets before attacking.
- **Stagger (slot 186):** Ken & Kyle, Todd and Envy replace Enemy's stagger
  with animation 114 held for a class time (`+0x10b8`, `+0x11a0`, `+0xf90`),
  then slot 96.
- **HipsterChick** attacks again every `+0xe64` seconds in state 262. States
  106 and 258 choose the next state from the mode at `+0xe88` (2 leads to 262,
  4 to 268 or 266).
- **Envy** state 270 starts its attack with animation 117, switches to
  animation 11 after `+0xf84` seconds, then goes to 244. State 272 holds
  animation 96 for `+0xf9c` seconds and raises `+0xd84` on exit.
- **Hit checks (slot 38) and knockdowns:** Gideon copies the hit's `+0x5c` to
  `+0x12c` and, when it is 1, raises `+0xd49` one time in five. Ken & Kyle's state 122 rolls 1–100 against
  `+0x10d4` and flips the twins' turn. Todd's state 122 goes to 258 when
  0xa255e0 passes on its `+0xdd8` data.

- **Updates (slot 16):** Todd, Lynette, Envy, Patel, Gideon, Ken & Kyle and
  Lucas Lee run Boss's update and then request each of their attacks with a
  hit kind, three to five per class. Lucas Lee requests kinds 174 and 178, the
  kinds his slot 234 maps to states. Lynette and Envy also refill `+0xd7c` from
  `+0xd4c` every update.
- **Guards:** Lynette's states 274, 278 and 280 and Envy's 268 loop a guard
  animation. A hit while time and absorbed damage (`+0xd88` and `+0xd90`,
  added up by Lynette's slot 69) remain plays animation 13. Once either runs
  out, they leave for the next state.
- **Joint attacks:** when Ken or Kyle enters state 246 or 248, the twin joins
  if both target the same player within `+0x10dc` and the twin's slot 238
  holds. State 198 does the same through 0xa506f0.
- **Turning attacks:** Patel's 264 and 266 and Roxy's 264, 266 and 268 stop,
  pass the target player's X position to slot 91 and attack. Patel's 264
  repeats the attack `+0xd70` times. The actor is looked up with
  `onyx::Find` (it may be gone), the transform with `onyx::Get`, as in Boss's
  state 198.
- **Slot 82:** Lynette refuses it in four of her states and Todd in five,
  before Boss's test.
- **Slot 259** (TagTeamMember and up) reports whether `+0xd80` is set; Lynette
  also needs `+0xd85` and state 244 or 282. Envy's version matches too, but
  its address is credited to an earlier byte-level build. **Ken & Kyle's slot
  240** raises `+0xd28` with the twin. Once the twin is down in action mode 5,
  6, 8 or 9, it runs 0x996c30 and then Boss's slot 240.
- **Damage:** Todd totals his damage and raises `+0xd89` once it reaches
  `+0x119c`. SuperGideon rolls 1–100 against `+0x111c` each time the damage
  since the last roll reaches `+0x1118`. Lynette inlines TagTeamMember's
  handling (`TagTeamMember::TakeTagTeamDamage`).

Branches show which way the source wrote a comparison. `b.ls` or `b.le` after
a float compare means the original tested the positive form (`stateTime <= 0`,
`stateTime > limit`), not an early return on the opposite. When a getter call
comes before the read of the current state, the original called it first,
as in `InState(this, State274Ptr())` or `State state = ...Ptr();`.

Patel's slot 170, Patel's state 256, Ken & Kyle's hit check and the state
244 of TagTeamMember, Lynette and Todd are written out but not credited.

Many boss states differ from a first draft only in the order of their cases or
in the exit case's assumption. Trying every order of a state's cases, with and
without the assumption, settled SuperGideon's state 186 and Todd's state 262.

## Boss fight AI

[`BossAI.h`](../src/gameplay/BossAI.h) describes `SPTG::BaseBossAI` (vtable
`0x188a640`, 27 slots) and the AIs derived from it: `ToddAI`, `SuperGideonAI`,
`GigaGideonAI` and `EnvyLynetteAI`. The AI is a component of its own, not a
boss. It keeps one reference per player of the level (`players`, +0x68) and
runs the same kind of state machine as the characters (+0x90). Each of its
three states is virtual and followed by a getter that returns it as a
member-function pointer. Slots 22, 24 and 26 return `{0xa8, 1}`, `{0xb8, 1}`
and `{0xc8, 1}`: the vtable offset of the state with the virtual bit set. A
subclass replaces a state by overriding its slot.

| Slot | Address | Behavior |
| --- | --- | --- |
| 16 | `0xa14a20` | Start: clears +0x50, sets +0x51 and enters the waiting state |
| 21 | `0xa15db0` | Waiting: once a player is present, gives every enemy of the level a target and moves to fighting |
| 23 | `0xa15ee0` | Fighting: back to waiting without players. Otherwise gives a target to each enemy that has none (target index 4) and finishes once a boss (kind 6) has +0xd28 set |
| 25 | `0xa14dd0` | Finished: sends the event at +0xc0 when entered |

Two non-virtual helpers do the work. `RefreshPlayers` (`0xa14f50`) refills the
player list from the level's player catalog and returns its size. Each entry is
a counted reference to the player's own handle (+0x40), destroyed out of line
(`0x9cacf0`). It is written out instruction for instruction but not matched:
the original keeps `this` in x20 and the level pointer in x19, and this build
swaps them. `AssignTarget` (`0xa15400`) makes player 0 the target of an enemy of
kind 6, 7 or 8 whose +0x50 is clear, then clears the enemy's target index and
AI mode.

The subclasses change the fight:

- `ToddAI` has its own copy of the waiting state, byte for byte the same code.
  Its fighting state follows Todd alone. While Todd has no target it offers
  every enemy one, and the fight finishes once Todd has +0xd28 set. Entering
  the state clears +0x60.
- `SuperGideonAI`'s fighting state follows its boss (+0xe0) and finishes once
  the boss has +0xd28 set. Its finished state waits for the boss to stand idle
  in animation 187, then sends a second event.
- `GigaGideonAI`'s fighting state also sends an event the first time its boss
  raises +0xd68.

Enemy slot 160 returns an enemy's kind: 0 for `Enemy`, 5 for the one-hit
enemies and 6 for bosses. +0xd28 marks a beaten boss. Boss's slot 240
(`0xa1b6f0`), which the boss states run once the health is gone, gives every
character in the list behind the singleton at +0xba0 a hit stop: animation
speed 0.3 for 3 seconds. It then sends event `0x3b6730cc` and raises +0xd28.
It was credited to a stand-in (`BossLasers::Arm` in `ActionEvents.cpp`) and
now lives in `BossStates.cpp` as `Boss::Slot240`. The original reads the
character's normal speed before it starts the hold, and doesn't go through the
`HoldAnimation` helper.

[`BossAI.cpp`](../src/gameplay/BossAI.cpp) matches 21 functions (3,824
bytes): slots 13 (update), 16, 21, 23 and 25 of `BaseBossAI`, slots 21 and 23
of `ToddAI`, slots 23 and 25 of `SuperGideonAI`, slot 23 of `GigaGideonAI`,
`AssignTarget`, and the ten state getters of the four classes. The getters and
slot 13 were credited before to generated ABI views (`RecoveredLeaf_...`), and
the three slot-25 and Giga Gideon methods to stand-in structs in
`ActionEvents.cpp`; both now leave them to the classes. Giga Gideon's flag at
+0xd68 is a `bool`, as the AI reads it.

## ControllablePlayer stats and states

[`PlayerStats.cpp`](../src/gameplay/PlayerStats.cpp) and
[`ControllablePlayerStates.cpp`](../src/gameplay/ControllablePlayerStates.cpp) hold 46 of the
class's methods. RTTI gives the class name; method and field names are provisional.

The fields at +0x860 to +0x898 are floats, shown by the original's float loads (they
were first declared as integers from the serializer alone). Four look like stats
(+0x860, +0x864, +0x868, +0x86c) and the rest per-character values they scale:

- `value / 100 * max(stat, 0) + 1` for multipliers (slots 58, 60, 152).
- `low + (high - low) / 100 * max(stat, 0)`, clamped to the two ends (slots 57, 149, 150).

What each stat means has not been established.

The compiler's choices show how these were written:

- `fmax` rather than `fmaxnm` means the maximum is `a < b ? b : a`, the form of `std::max`,
  which passes a NaN in `a` through. Slot 151's one `fmaxnm` is the same helper with the
  constant first, `max(1.0f, x)`.
- The `lt` and `le` conditions in slots 64 and 65 come from plain `if`/`else` blocks that
  the backend turned into conditional selects, not from `?:`.

Slots 64 to 66 change `health` (+0x160): `LoseHealth`, `GainHealth` and `RestoreHealth`.
`LoseHealth` takes any remainder from `guts` (+0x32c).

The names of these fields and of the four stats are inferred from how the code uses them. The
binary has no field names. `SPTG::HudStatusGUTS` and `HudStatusHEARTS` show there are two meters,
`State203` takes a special attack's cost from `guts` before `health`, and `Enemy` starts with
`guts = MaxGuts()`. The stats' names follow what each one scales, and match the game's four stats:

| Field | Offset | What it scales |
|---|---|---|
| `statDefense` | +0x860 | `MaxHealth` (slot 57), slots 59 and 149 |
| `statSpeed` | +0x864 | `SpeedScale` (slot 60), the multiplier on run speeds |
| `statWill` | +0x868 | `MaxGuts` (slot 150), `GutsCostScale` (slot 151), slot 58 with its flag set |
| `statStrength` | +0x86c | slots 40, 152, and slot 58 with its flag clear |

### Moving, landing and being down

`State100` (on the ground) and `State102` (in the air) share `SteerFromInput`: it turns to the stick, sets the target
speed along x from `+0x8d4`, and clears `+0x1bc` when the stick pushes against the motion. `SteerAlongY`, called inside it,
moves along y unless `+0x13f0` is set. The two are nested because the original's two `Vector3` reads have separate stack
slots, with the second one's above the first's. That happens when the second read is inlined while the first is in scope.
In the air, with `+0x1288` raised, input waits for `airTimer` to run out.

`State104` is landing. Entry clears `+0x13f0`, `+0x13f1` and `+0x140c`, stops the fall, and snaps to the ground when it's
within 0.1 unless the playfield's `+0x128` is set. It also clears `airAttackCount`. While the state plays, a charge in
`value142c[0]` picks state 175 and one in `value142c[1]` picks state 177.

`State114` marks the player down on the HUD (`InGameHUD::players`) and shows status 12. `State136` is `Enemy::State136`
with the facing kept up to date. `Slot68` counts its calls and runs `0x80f6e0` every so many, a random number between
`+0x12ac` and `+0x12b0`. `Slot156` needs at least two players outside state 233.

`Slot94` is being knocked out: it lets go, loses all health and guts, and goes to state 108, or 116 from 114. `State122`'s exit
stops two of the actions the player keeps as references and starts a third. `State237` stands in animation 30 until the stick
moves. Whether that goes to state 161 or 163 depends on a dash, and how a dash is read depends on the player's saved settings
(`PersistentPlayerRecord`, 0x5b4 bytes each).

`ReactTo` (slot 21) moves the player between states when another character reacts to it. Reaction 2 replays
animation 0 while idle (state 96), 3 enters state 245 and 4 leaves it for idle, 6 goes idle, 8 moves from state 112
to 251, and 9 from 251 to 122. `State175` and `State177`, the attacks that a charge starts in `State104`, each start
their attack (+0xdb0 or +0xe08), stop the sideways motion and play animation 31 or 32, then return to idle when the
animation ends. `State249` holds while the input bit at +0x141c stays down and goes idle when it is released.

`State104`, `State122`, `State165`, `State175`, `State177`, `State237`, `State249`, `ReactTo`, `Slot68`, `Slot94` and
`Slot156` are matched. `State100`, `State102`, `State114`, `State136`, `State187`, `HealWithGuts` (slot 148) and
`CheckAirInput` (slot 256's code) are written but not matched, and each one's comment says what still differs. `HealWithGuts` uses the pending
item (+0x13f4) when one is set: it looks the item up in the `ItemRegistry` tree, whose ids compare unsigned, uses it,
and clears the pending item.

### The playable characters' own states

`PlayerClasses.cpp` now has more than each character's slot 4. Slot 239 is shared in shape: Scott, Ramona,
Nega Scott and Knives run `ControllablePlayer::State239` and on exit call `0x9983e0` and `0x994b40` with
a number of their own (0, 3, 4 and 6). Kim's replaces it and uses 2. `0x9983e0` looks at the level's
enemies before it answers, so what those numbers select is still open.

Slot 160 adds to a value by move number: all three characters that have one add 3 for moves 17 and 18,
and they differ on 15 and 16. Slot 257 on Ramona and Nega Scott times two held buttons, and the second
timer latches `charged` once it passes `chargeLimit`.

### `AnimatedAiActor` and `BaseCharacter`

[`BaseCharacter.h`](../src/gameplay/BaseCharacter.h) declares them as the separate classes they are.
Comparing the two vtables gives the split: of `AnimatedAiActor`'s 78 slots, `BaseCharacter` keeps 40
and overrides 38. So `PlayAnimation` (`0x93f750`), `PlayFacingAnimation` (slot 24), `SetFacing`, `IsOnGround`,
`GainHealth` and the activation (slot 2, `EnsureReady`, `0x93f1f0`) are `AnimatedAiActor`'s, while `StartAttack`, `TurnAround` and `LoseHealth` exist in both forms. A
`BaseCharacter::Update()` written in a subclass really calls `AnimatedAiActor::Update`.
[`AnimatedAiActor.cpp`](../src/gameplay/AnimatedAiActor.cpp) holds the base class's own functions.
The activation sets bit 1 of the component flags, sends the actor object's event `0x255c0afe` (the slot at
+0x8 of `ActorObject`), refills health with `MaxHealth()` and plays animation 0. It was credited to a stand-in
(`StrikerYeti::Enable` in `ActionEvents.cpp`) before; 85 vtables share it.

The fields that hold a class's dependencies are in the reverse of its `Compose` list, and the type
hash each serializer passes names the class, so these names come from the binary:

| Class | Offset | Field | Class it holds |
|---|---|---|---|
| `AnimatedAiActor` | +0x58 | `shadowHandle` | weak `ShadowAnimatedObject` (its transform is at +0x58, as `Update` uses it) |
| | +0x70 | `animationHandle` | strong `AnimationController` |
| | +0x78 | `actorObject` | strong `ActorObject` |
| | +0x80 | `levelAI` | singleton `LevelAIManager` |
| | +0x90 | `level` | singleton `LevelItemAccessor` |
| `BaseCharacter` | +0x1e8 | `spritePrinter` | weak `SpriteAnimationPrinter` |
| | +0x1f0 | `textureLoader` | singleton `ControllableTextureLoader` |
| | +0x1f8 | `settings` | singleton `LevelSecretManager` |
| | +0x200 | `hudStatus` | singleton `HudStatusManager` |
| `ControllablePlayer` | +0x788 | `worldMapBroker` | singleton `WorldMapInformationBroker` |
| | +0x790 | `hud` | singleton `InGameHUD` |
| | +0x798 | `itemRegistry` | singleton `ItemRegistry` |
| | +0x7a0 | `levelGate` | singleton `SwitchLevelGate` |
| | +0x7b8 | `pauseHandler` | singleton `PauseHandler` |
| | +0x7c0 | `flashMenuPhase` | singleton `FlashMenuPhase` |
| | +0x7c8 | `selectedActors` | singleton `SelectedActorRecorder` |
| | +0x7d0 | `persistentData` | singleton `PersistentDataManager` |
| | +0x7d8 | `playerInfo` | strong `PlayerInfo` |
| | +0x7e0 | `materialModifiers` | weak `MaterialModifierHolder` |
| `Enemy` | +0x798 | `levelGate` | singleton `SwitchLevelGate` |
| | +0x7a0 | `scaling` | singleton `GameDifficultyAccessor` |

### Getting on and off an interactive object

A character can ride an `SPTG::InteractiveObject`. `BaseCharacter` keeps the handle at +0x238
(`mountHandle`) and a flag at +0x338 (`mounted`), and `IsMounted` (slot 36) checks both.

While riding, `PlayMountedAnimation` (slot 23, `0x96c780`, not yet matched) plays animations 0 to 7
as rider versions from one of two tables (`0x1349240`, or `0x13490e0` when the mount's slot 49 is
nonzero). While the character is mounted, the mount plays the matching animation from a third table
(`0x1349120`). Any other animation gets the character off the mount first.

- `MountNearby` (slot 78) gets the character's position and asks the level's
  `Catalog<InteractiveObject>`, through `InteractiveCatalog::FindMount`, for the first object whose
  `CanMount` (slot 34) is true with that position in range. The ranges are per object: +0x3f8 for x
  and y, +0x40c for z.
- `SetMount` takes a reference to the object's handle, sets `mounted` and calls the object's
  `OnMount` (slot 33).
- `Dismount` (slot 31) calls the object's `OnDismount` (slot 32), replaces the handle with a new
  empty one and clears `mounted`.

### Items

`ControllablePlayer::UseItem` (`0x80e9a0`) shows how an item works. An item holds a list of effects, each with a kind and an amount. These are
the kinds, which also back up the stat names above:

| Kind | Effect |
|---|---|
| 0 | `GainHealth` |
| 1 | `AddGuts` |
| 2 | `0x80ecc0`: experience. It adds to +0x13ec, works out the level from a table in the player's record, and sets a bit in the record's moves for each level gained |
| 3 | Adds to the count at +0x870, kept to 9 at most |
| 4 to 7 | Adds to `statDefense`, `statSpeed`, `statWill` or `statStrength`, kept between 0 and 100 |
| 8 | Sets the flag at +0x13f8 |
| 9 | `LearnMove`: sets a bit in the moves of the player's record |
| 10 | `0x80f6e0` |

The record is `PlayerInfo`, behind +0x7d8, the same component `WorldClearAction` writes to. Bosses
use `LearnMove` too: when Chau leaves `State116`, every player learns move 17.

[`PlayerOverrides.cpp`](../src/gameplay/PlayerOverrides.cpp) has 4 overrides: slots 20, 76, 87 and
88. Slot 76 forwards to the base only when the actor's playfield object passes
`IsA(0x21350526)`. Slot 88 applies slot 65 when the player is in `State114`, then sends message
27 and moves to `State243`. Slot 20 clears an entry of the table reached through +0x7b8.

[`PlayerAttackStates.cpp`](../src/gameplay/PlayerAttackStates.cpp) has 9 attack states. On entry
each starts one of the player's `Attack` members and plays an animation, and when the
animation ends it returns to `State96`. Their case order and exit-case assertion follow
[Matching state handlers](#matching-state-handlers). `State165`, `State175` and `State177` have
the same shape but differ in register choice in every form tried, so they are left out.

## Projectiles

`SPTG::Projectile` (vtable `0x1872ec8`, 82 slots) comes straight from `AnimatedAiActor` and has its
own state machine at `+0x280`. Slots 78 to 81 only return its four states, which are not virtual
themselves:

| Slot | State | Address | What it does |
|---|---|---|---|
| 78 | `WaitingState` | `0x95b810` | Starts the attack, then waits. `waitFor` (`+0x358`) says for what: 1 until on screen, 2 until a player is near, 3 until the camera block is active. Then it flies. |
| 79 | `FlyingState` | `0x95b130` | Takes `launchMotion` (`+0x35c`) and `flightTime` (`+0x2b0`), plays animation 189 and then `flyAnimation`. A landing can shake the camera, send an event, bounce it, burst it, or return it to waiting. |
| 80 | `BurstState` | `0x95ae60` | Stops, plays animation 16 and sends its event. When the animation ends it calls `Remove` or `Release`. |
| 81 | `GoneState` | `0x95ae30` | Does nothing, and leaves the exit event unhandled. |

The on-screen test in `WaitingState` compares against the camera position with a view of 384 by 216,
the game's native resolution as the code uses it. `SendFlightOver` (`0x95bde0`) sends one of two
events, once, depending on whether the attack landed on a character: `AttackLanded` tests the target
with `IsA(0x1cfe99c7)`, which `BaseCharacter`'s `IsA` answers. `sentEvents` (`+0x15c`) holds which
one-shot events have gone out: bit `0x40` for this, `0x80` for `Hit`.

Everything except `WaitingState`, `FlyingState` and the larger slots is exact. Those two are in
`Projectile.cpp` marked as not yet matched.

`AttackLanded` also shows that an inline helper can change the code. A hand-written
`kind <= 3 && time > 0.0f && hitStopLeft <= 0.0f` stays one test until selection splits it, and the
`kind > 3` path still reaches the `kind == 2` test. The same test through an inline `HoldAnimation`
lets jump threading skip that second test, so the loads sink past the branch and the bytes differ.

## Strikers

`SPTG::Striker` (vtable `0x18703d0`, 87 slots) is the helper a player calls in. `StrikerYeti`,
`StrikerMrChau`, `StrikerMrsChau`, and `KnivesStills`, `KnivesScott`, `KnivesRamona`, `KnivesNegaScott`
and `KnivesKim` derive from it. Its state machine is at `+0x1f0` and `owner` at `+0x2d8` is the player
who called it.

- `IdleState` (slot 79, `0x943330`) only answers events, and is where `Slot7` starts it.
- `ArrivingState` (slot 81, `0x948270`) records whether any enemy is in view, appears `arrivalDistance`
  (`+0x278`) from its owner on the side towards the middle of the screen, and plays animation 15. When
  that ends it goes to `AttackingState` if an enemy was in view and to `LeavingState` if not.
- `AttackingState` (slot 83, `0x948660`) stops, starts `attack` for its owner and plays animation 11.
  When that ends it calls `AttackDone` (slot 78, empty in `Striker`) and leaves.
- `StrikerYeti`'s `AttackingState` (`0x943830`) only stops the yeti. Once `+0x328` is raised it counts
  `+0x320` down by the frame time at `0x191cd00` and leaves when that reaches zero.
- `LeavingState` (slot 85, `0x948810`) plays animation 16, clears the player's `activeStriker`
  (`+0x1488`), and returns to its spawner.

`FindEnemies` (`0x9488d0`) walks the level's enemies and takes those that are enabled, not out, held, in
action mode 0, not flagged at `+0x141` or `+0xae9`, not answering slots 85 or 160 in a way that excludes
them, and on screen by `EnemyOnScreen`. The screen is the camera position plus a 384 by 216 view, and the
middle test in `ArrivingState` uses 192, half of that width.

`KnivesStills::AttackingState` shows that calling Stills costs guts: `strikerCost` (`+0x1394`) times
`GutsCostScale`, rounded up. Whatever the player's guts don't cover comes out of their health.

Subclass `Slot19`s match only with `Striker::Slot19` in the same file, since the original inlines it.

## Actions and their events

[`ActionEvents.cpp`](../src/gameplay/ActionEvents.cpp) holds methods of the game's scripted actions and
similar components that do one step and then send an Onyx event. RTTI names most of the classes:
`ActorPlayEmoteAction`, `ActorPickupAction`, `ActorDropAction`, `WaitForEventCount`, `DelayAction`,
`RotateToCamAction`, `ShowObjectAction`, `StartEnemyAction`, `LevelSectionAction`,
`KillAllEnemiesAction`, `TimerCircuit`, `LaserBeams`, `StrikerYeti`, `PublisherScreen`, `PlaySound`.

An action keeps its finished event at +0x80 and an active flag at +0x98. Event `0x3a6530b8` is the
one most of them send when they finish. The hash values are real; what the names mean is inferred
from the classes that use them.

Some behaviour is clear from the code:

- `DelayAction` adds a clock's delta to its elapsed time and finishes when it reaches the duration.
- `TimerCircuit` clamps its time to the float range, finishes at its limit and restarts if set to.
- `RotateToCamAction` turns by the step between frames and finishes at its duration.
- `WaitForEventCount` finishes once its count reaches the required number.
- `LaserBeams` fires for a set time while in state 216.

These dependencies are read through a cached handle: use the object if it is there, otherwise resolve
it by its type hash, wake it and read it again. When a method tests the result for null, the code only
has the original's shape if the read goes through a small inline step (`Peek`) before and after the
resolve. Written as one expression followed by a null test, the cached path falls through to the test
where the original jumps straight past it.

Writing these by hand from the decompiler has a high hit rate compared with the earlier state
handlers: most match on the first or second try, and the misses are usually a field offset.

### Menus and timers

- `Onyx::MenuEventScheme` holds the item it acts on at +0x100 and whether it is pressed at +0xf8. Releasing sends 0xf3d0b0c with the item as payload, or with no item when a scheme is cleared by selecting nothing.
- The menu it drives keeps the current item at +0xc0 and what selected it at +0xc8. Changing item blurs the old one, tells it, focuses the new one and tells each listener through virtual slots 13 and 14. Listeners only hear this when bit 0 of their flags at +0x38 is set. The payload in all of these is the item and the source.
- `SPTG::LeaderboardAgency` waits for a ring buffer to drain: the size is `tail >= head ? tail - head : capacity - head + tail`.
- `Onyx::AnyKeyInputTrigger` scans 27 keys over the first 16 of up to 32 pad slots and ignores key 9.
- `SPTG::WorldClearAction` finds the session's current player and sets the cleared bit for the world, plus the unlocked bit for the next world up to world 12. Both are skipped when the global at 0x1924CB0 is set.

### Actors, bosses and value events

- `SPTG::ActorMoveAction` walks its actor from +0xd4 to +0xe0 over the time at +0xec, and sets the actor's depth at +0x144 from z. `ActorAnimationAction` flips the actor when its graphic's facing disagrees with what it wants. `ActorAddGraphicMasterAction` hands the actor's graphic to another object.
- `SPTG::SuperGideonAI` reports once when its actor sits in the idle state in animation 187. `SPTG::GigaGideonAI` reports the rising edge of the flag at +0xd68 on its actor and finishes the fight when +0xd28 is set (see [Boss fight AI](#boss-fight-ai)).
- `SPTG::UnspawnManager` applies three queues once per frame: objects, objects with a reason, and notices, then empties all three.
- `Onyx::Gameplay::DistanceTrigger` fires while the squared distance between two objects is within the value at +0x90.
- `SPTG::StartCameraShakeAction` takes a free slot from the shaker and starts it from a preset or from its own settings. It stores the slot, or the failure, either way.
- Six methods at 0xa37f50 to 0xa38900 each walk one handle to its owner, then its body, then the object to tell. The owner types differ by pair, so the handles hold different classes.
- Some events carry a default-built value with its own memory. The value is built once for the callback and once for the listener, in the same stack slot once it is large enough. `ControllableSpawnInfo` is one, with a real vtable.

Two near misses is the count for each batch, listed here so they are not lost: `ActorMoveFromBehindAction::Update` (0x8e6ae0) differs in the operand order of one `fadd`, and the group update at 0xbcafc0 differs only in two swapped registers.

Two near misses are left out on purpose. `Onyx::AnimaticInstance::Update` (0xaf5b10) has a second landing pad around its restart call, so something with a destructor lives across that call and nothing visible uses it. `SPTG::TimerAction::Update` (0x8f68f0) differs only in the order of three instructions in two blocks.
