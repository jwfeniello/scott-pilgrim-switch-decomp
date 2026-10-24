# Gameplay components and actor state

This batch adds an engine component layer for gameplay code and **17 complete exact
functions / 2,376 bytes**: 16 component accessors and the game-over state
handler. The larger result is groundwork. 1,340 unmatched game functions
(1.64 MB) reach components through the same accessor, and their type IDs and owner
classes can now be named.

Sources: [`OnyxComponents.h`](../src/gameplay/OnyxComponents.h),
[`ComponentTypes.h`](../src/gameplay/ComponentTypes.h),
[`ComponentAccess.cpp`](../src/gameplay/ComponentAccess.cpp),
[`PlayerStates.cpp`](../src/gameplay/PlayerStates.cpp), and WIP
[`JumpActionSetup.cpp`](../src/wip/JumpActionSetup.cpp). Function names describe
observed behavior; they are not original symbols.

## Component type names

Engine and game objects reach components through 32-bit type IDs. Every
registration call in the recovered registry sources pairs an ID with a factory.
Following the factory, or the constructor it calls, to the vtable it installs
gives that vtable's RTTI name. All **793** recovered IDs are named in
`ComponentTypes.h`. Examples:

| ID | Class |
| --- | --- |
| `0x022fe74a` | `Onyx::Transform` |
| `0x6492d61d` | `SPTG::ActorObject` |
| `0x0bf4a9b7` | `Onyx::Catalog<SPTG::ControllablePlayer, ...>` |

Generic container factories (43 `Onyx::Component::Bucket` entries) name only the
container. A few IDs used in game code, such as `0x29fbe438` and `0x2eae5813`, are
not registered in the recovered sources and remain unnamed.

The engine namespace is `Onyx`; game classes use `SPTG`. Owners of virtual
accessors are named from the RTTI of every vtable that references the function.
For example, `0x93fc90` and `0x9415b0` are `SPTG::AnimatedAiActor` slots 27 and 52,
inherited by `SPTG::Striker` and `SPTG::StrikerYeti`.

## Accessor ABI

An owner caches a `ComponentHandle*` per component type. On first use, the
accessor resolves the handle through `0x67edd0` with the type ID, calls the
component's virtual `EnsureReady` (slot 2), and then uses the object. The original
code shows two inline flavors:

- `Get`: after resolution the object is read through the handle directly.
- `Find`: the handle is checked again and the result may be null. The
  original then dereferences it anyway, keeping a null path.

Reproducing the `Find` null paths requires **`-fno-delete-null-pointer-checks`**.
Without it, LLVM removes them. This is not established as a game-wide setting:
15,665 existing game-region matches still verify with the flag, but 511, mostly
reference-destructor families, do not. It is therefore a per-build flag here.

## Value types

- **`Vector3`** has a user-provided copy constructor and a defaulted copy
  assignment. The original returns it through memory (`x8`) rather than float
  registers. A copy into a fresh local stores X/Y and then Z, and a member
  assignment orders them differently; both forms appear in the original.
- **`Vector3::Zero()`** returns a copy of a guarded function-local static.
- **`Onyx::Transform`** stores vectors at `+0x58`, `+0x64`, `+0x70` and the position
  at `+0x7c`. Z at `+0x84` is the depth used by the side-scrolling code; for
  example, `LevelSection` depth is Z rounded half away from zero. Writes set the
  dirty byte at `+0x88`. If `+0x90` is set, they then call the invalidation at
  `0x68f3b0`.

## Player action states

The two handlers selected through the player's member-function-pointer state slots
(see [player action states](PLAYER_ACTION_STATES.md)):

- **Game over (`0x98f270`, 484 bytes): exact.** The handler checks every
  catalog player and compares each player's current state with its own
  `GameOverState()` result. The comparison reloads the catalog's begin and count
  on every iteration, as a container loop does. Only if every player matches does
  it read the game-mode value; outside 8–12 it requests the hashed `GameOverMovie`
  event. The event ID is an 8-byte object of which only the hash is written.
- **Held state (`0x98f9d0`, 1,048 bytes): exact.** On entry it zeroes two
  motion vectors and conditionally resumes control. It sets action mode 13,
  restores saved values unless the anchor is kept, and sets byte `+0x199` on the
  type-checked playfield object. Exit also releases the owned component handle
  (destroy, untrack, free).

## Handle disposal and the empty-bucket path

Releasing a component handle removes it from a tracking map under a mutex. In
the original, when the handle's bucket is empty, control goes straight to the
unlock and skips the lock guard's `map != null` test. That is sound, because the
bucket load already dereferenced the map. Public Clang 7, 8, 9 and 10 do not
perform that threading from the RAII form, so `DisposeHandle` in
[`OnyxComponents.h`](../src/gameplay/OnyxComponents.h) writes that path
explicitly with a `goto`, and runs the unlock in a `noexcept` helper (as a lock
guard's destructor would).

This made the held state exact. It also reproduces the same inlined disposal in
the `HandleHolder` and `Compose` families. The same inlined code appears in 490
still-unmatched functions (about 1 MB), so it is no longer a blocker for them.

## Switch owner destructors

Nine component switch owners share one 744-byte destructor
([`ComponentSwitchDestructor.h`](../src/ComponentSwitchDestructor.h)). It takes a
temporary reference to the target handle, clears the handle's object, and calls
the listener notification `0xbf6e80` with hash `0x6c62f499` and a stack record
`{current = null, previous}`. That is the same call and record as in
`ComponentSelection.cpp`. It then drops the reference, disposing the handle at
zero, and tail-calls the base destructor.

Two details were needed:

- **The tail call.** LLVM marks no call as a tail call after a stack object's
  address escapes, unless the receiving parameter is `nocapture`. The original
  tail-calls after passing the record in 18 functions. The only call-then-return
  case that is not a tail call is an `invoke` inside an exception
  specification, and LLVM never tail-calls an invoke. So the original compiler
  treated the record as not captured. The declaration states this with
  `__attribute__((noescape))`. Without it, none of the nine match.
- **One terminate handler.** Inside the `noexcept` destructor, the disposal
  calls `Accessor_Unlock` directly. Routing it through the `noexcept`
  `UnlockTracking` helper adds two extra `__clang_call_terminate` pads.

## Near misses

- **Jump action setup (`0x8e8dd0`).** It computes the start point (relative to the
  actor's Transform unless absolute) and moves the ActorObject there. It sets
  flight time to `sqrt(2 * height / |gravity * 60|)`, the vertical speed to
  `time * |gravity|`, and horizontal speeds to `(target - start) / (2 * time * 60)`.
  It turns the actor to face the target when requested. Our build reaches 1,036 of
  1,048 bytes: the original builds the by-value `MoveTo` argument inside each
  start branch and vector-adds X/Y there.
- **Landing predicate (`0x9415b0`).** The original's size and control flow are
  reached except for the final epsilon test, which public Clang folds branch-free
  (260 of 264 bytes). This may reflect the original compiler revision.
- **`ComponentCollection` (`0x762630`).** It is unchanged by the null-check flag.
