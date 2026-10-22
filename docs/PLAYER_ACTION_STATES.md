# Player action and game-over state handlers

The action dependency work now reaches two concrete gameplay state handlers:
`0x98f270` (484 bytes) and `0x98f9d0` (1,048 bytes). Readable decision models
in [PlayerActionStates.cpp](../src/wip/PlayerActionStates.cpp) pass **19,824
bounded comparisons** against the complete original ARM64 functions. Four
deliberately incorrect source variants are rejected. This adds **zero exact
matching credit** and does not execute the full game.

Evidence: [behavior receipt](../progress/player_action_states_behavior.json),
[type/member map](../progress/action_dependencies_map.json). Names such as
`EvaluateGameOverState` describe observed behavior; they are not recovered
original method names.

## Why these states matter to actor actions

The player member-pointer getters identified in
[action dependencies](ACTOR_ACTION_DEPENDENCIES.md) lead to these handlers:

| Getter | Member pointer | Handler | Observed role |
| --- | --- | --- | --- |
| virtual `+0x750` | `(0x748, 1)` | `0x98f270` | Coordinates a game-over movie request across players |
| virtual `+0x790` | `(0x788, 1)` | `0x98f9d0` | State selected by shared action setup; manages motion, a playfield flag, and an owned handle |

Shared action setup changes to the second state only when the player is in
neither state already. It therefore leaves the game-over-related state alone.
Shared action update recognizes the first state and can enter its gated action
completion path. This connects the previously opaque member-pointer comparisons
to gameplay; it does not establish every situation that enters either state.

Both handlers return 1 for events 10000 through 10003. Events **10001** and
**10002** perform entry and exit work respectively, matching the order in the
shared transition helper. Events 10000 and 10003 do nothing in these two
handlers. Other event values return 0 without changing player fields.

## Game-over coordination: `0x98f270`

On entry (10001), the handler:

1. Sets player bytes `+0x3ba` and `+0x1525` to 1 and integer `+0x500` to 5.
2. Calls player virtual `+0x238`.
3. Obtains a level item through `0x7725e0`, then resolves its catalog at `+0xa0`
   with resolver ID `0x0bf4a9b7` if necessary.
4. Walks the catalog's count at `+0x80` and pointer array at `+0x90`. For every
   player, it compares the current member pointer with that player's virtual
   `+0x750` result. It checks all entries, even after a mismatch.
5. If every entry matches (also true for an empty catalog), gets another context
   through `0x770d70` and reads its handle-linked object integer at `+0x118`.
6. If that integer is outside **8 through 12 inclusive**, it obtains/prepares a
   script-related object, hashes the literal **`GameOverMovie`**, and passes the
   hash to `0x778670` with arguments 32 and 0.

This is a request path; no actual movie is played by the test harness. The
context integer's original enum and the full semantics of `0x778670` remain
unrecovered. The literal makes game-over involvement concrete without requiring
guessed enum names.

On exit (10002), it clears the two bytes and the `+0x500` integer, then calls
virtual `+0x240`. The 1,680 fixtures cover all event branches, empty/mixed/all-
matching catalogs, null-member-pointer equality, scene-mode boundaries, and
missing catalog handles or pointees. They compare call order, movie-request
arguments, return values, and the complete 0x1800-byte player fixture.

## Catalog identity: resolver IDs and type getters can differ

The original registration sequence at `0x646930..0x646958` binds resolver ID
`0x0bf4a9b7` to factory `0x744c00`. The harness executes that sequence up to
guard release, then executes the factory's normal return path with stubbed
allocators/base constructor. The returned object has vtable `0x1889ab8`, whose
RTTI identifies **`SPTG::ControllablePlayerCatalog`**.

Its virtual type getter reports **`0x0d8ae596`**, not the resolver ID. These
identifiers must not be treated as interchangeable. The RTTI/type-getter mapping
is reproduced by `tools/map_action_dependencies.py`; factory/registration
evidence is recorded separately in the state behavior receipt.

## Action-selected state: `0x98f9d0`

On entry (10001), the handler:

1. Clears the two motion vectors at player `+0x1a4..+0x1bb`.
2. Queries player virtual `+0x120`. If its low bit is set, queries the related
   actor's `+0x190`; a zero result causes player virtual `+0xf8` to be called.
3. Stores 13 at player `+0x500`.
4. Calls the landing predicate through virtual `+0x1a0`. If its low bit is
   clear, copies the stored parameters from `+0x2bc/+0x2c0` to `+0x1b8/+0x1c4`.
5. Resolves ActorObject if needed, follows its `+0x50` handle, verifies type
   `0x21350526`, and sets that object's byte `+0x199` to 1.

RTTI and the complete type getter establish **`SPTG::PlayfieldActor`** for
`0x21350526`. The byte's collision/physics semantics are not established. The
original expects this type check to succeed; it otherwise selects a null
pointer before writing. The fixtures use a valid PlayfieldActor, rather than
claiming the function handles an invalid object safely.

On exit (10002), it clears both motion vectors and `+0x500`, removes the owned
handle from player `+0x240`, and decrements that handle's reference count with
an exclusive load/store loop. If the resulting count is zero:

- A non-null owned object is destroyed through its vtable and freed using the
  allocator chosen by `0xa82b30`.
- The handle is removed from the tracking table under the lock/unlock calls.
  Its bucket is `(handleAddress >> 2) % 4003`; a removed tracking node moves to
  the free list. The handle is then freed.

Finally it resolves the same ActorObject/PlayfieldActor chain and clears byte
`+0x199`. If references remain, it does not destroy or free the handle/object.

The 18,144 fixtures cover event values, query low-bit behavior, landing results,
missing component handles/pointees, absent handles, one or two references,
null/non-null owned objects, and empty/head/middle tracking-table removal.
The actual original decrement/unlink instructions execute; allocators,
destructors, and lock operations are deterministic stubs. This is not a
concurrency proof. Full player-fixture memory, reference counts, playfield flags,
call order, and affected tracking links are checked.

## Validation limits and next dependencies

These decision models expose the effects needed to reconstruct larger code;
they do not implement the real movie system, component factories, collision
simulation, or allocator. Catalog contents and component identities stay stable
during callbacks. Static zero-vector initialization is warm; exception paths
are excluded. Tracker fixtures contain at most one node matching the handle.
Original fields and source declarations outside the checked observations remain
provisional.

The useful next steps are to identify callers that select these states, inspect
the PlayfieldActor `+0x199` readers, and reconstruct the concrete virtual
operations at player `+0x238/+0x240/+0xf8`. The unresolved animation-readiness
component (`0x29fbe438`) remains a separate lead.

Reproduce with the private original, Clang 8.0.1, and optional Unicorn package:

```text
python tools/map_action_dependencies.py --original <original.elf> --out progress/action_dependencies_map.json
python tools/compare_player_action_states.py --original <original.elf> --clang8 <clang++.exe> --build-dir <temporary-directory>
```

The harness checks stack/register preservation and invalidates Unicorn's model
translation cache between source variants. Wrong movie gating, null-member
equality, airborne restoration, and ownership-release decisions must all fail.
