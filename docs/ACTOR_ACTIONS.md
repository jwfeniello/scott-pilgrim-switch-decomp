# Actor actions: gameplay structure and tested jump decisions

This work prioritizes understanding the player/action architecture. It adds no
exact-matching percentage. Class names below come from original RTTI; method,
field, and phase descriptions are inferred unless stated otherwise. Original ELF
addresses are used throughout; this project's Ghidra instance adds `0x100000`.

Follow-up: [action dependencies and state dispatch](ACTOR_ACTION_DEPENDENCIES.md)
adds 7,133 bounded checks of shared lifecycle, remapping, landing, jump setup,
and member-function state transitions. It identifies the Transform and
GraphicsObject dependencies and resolves the generic identities into state
member-function pointers. Exact coverage remains unchanged.

## Confirmed class structure

Both `SPTG::ActorJumpAction` and `SPTG::ActorMoveAction` inherit through:

```text
Onyx::Component::Compose<SPTG::ActorActionComponent, Onyx::Meta::Null>
  SPTG::ActorActionComponent
    Onyx::Component::Compose<Onyx::ActionComponent, Onyx::Meta::Null>
      Onyx::ActionComponent
        Onyx::Component::Compose<Onyx::Component::Base, Onyx::Meta::Null>
          Onyx::Component::Base
```

`tools/map_actor_actions.py` checks the original ELF hash, imported C++ RTTI
layout, base pointers, and primary virtual tables. The resulting
`progress/actor_actions_map.json` contains both classes' 17 observed virtual
entries, complete function extents, current matching-source associations, and
direct call targets. Shared entries are not necessarily class-specific methods.

| Inferred role | Jump action | Move action |
| --- | --- | --- |
| Serialize, slot 4 | `0x8e8890`, 536 bytes, already matching | `0x8e65a0` |
| Update, slot 13 | `0x8e8ab0`, 788 bytes | `0x8e7c90` |
| Setup, slot 14 | `0x8e8dd0`, 1,048 bytes | `0x8e60c0` |

Both actions call shared setup `0x8e1690` and update `0x8e17a0` routines. These
operate on active state at action `+0x98`, the actor handle at `+0xa0`, and
action identities exposed through actor virtual calls. The handle's object is
at `+8`. Callback storage at action `+0x80`, completion context at `+0x88`,
and event ID `0x3a6530b8` recur in the completion path.

## Jump update decisions

The update first calls the base action update and checks active state. It reads
a 32-bit value at actor `+0x1a0`. The following groups share identical branches:

| Observed IDs | Condition | Requested operation |
| --- | --- | --- |
| `2`, `0x35`, `0x45` | Actor virtual `+0xd8` returns bit 0 set | Request ID `3`, flags `(1, 0)` |
| `3`, `0x36`, `0x46` | Float at actor `+0x1ac` is strictly negative | Request ID `4`, flags `(0, 0)` |
| `4`, `0x37`, `0x47` | `+0xd8` true, `+0x1a0` false | Request ID `5`, flags `(1, 0)` |
| `4`, `0x37`, `0x47` | Both queries true | Request ID `6`, flags `(0, 0)`; clear two motion vectors |
| `5`, `0x38`, `0x48` | Actor virtual `+0x1a0` returns bit 0 set | Request ID `6`, flags `(0, 0)`; clear two motion vectors |
| `6`, `0x39`, `0x49` | Actor virtual `+0xd8` true | Enter the gated completion/callback path |

Requests use actor virtual `+0xb8`; this is not a direct write to `+0x1a0`.
Other IDs leave the jump-specific phase unchanged. NaN, zero, and positive
values at `+0x1ac` do not trigger the second row. This NaN behavior was verified
against the actual ARM64 instructions and corrected an initial interpretation
of the decompiler output.

The cleared vectors occupy actor `+0x1a4..+0x1af` and `+0x1b0..+0x1bb`.
Velocity/acceleration are plausible meanings, supported by setup arithmetic,
but their original field names have not been recovered.

`src/wip/ActorJumpPhaseModel.cpp` expresses the decision logic without embedding
the game's object offsets. It is a readable behavioral model, not a complete
drop-in update function. `tools/compare_jump_phase_behavior.py` compiles it and
compares its decisions with the original full update under ARM64 emulation.
The 4,224 fixtures cover all 256 state-byte values, four floating-point cases,
both query results, inactive actions, completion gates, and an out-of-range ID.
Deliberately wrong transition and NaN-comparison variants are rejected. The harness also checks transition
arguments, cleared/preserved motion, callback payload forwarding, stack
restoration, and general-purpose callee-saved registers. Evidence is recorded in
`progress/jump_phase_behavior.json`.

Limits: base updates and virtual queries are stubbed; actor identity remains
stable; a callback is present, and contexts have a completion target; static
gates are warm; exceptions, full physics, animation timing,
concurrency, and whole-game execution are not tested. The model returns a
completion request; the harness separately checks the original completion gate.

## Connection to the controllable player

For the RTTI-confirmed `SPTG::ControllablePlayer` primary vtable at `0x1873c70`,
the virtual dependencies resolve as follows. This does not mean every jump
action is necessarily attached to this concrete class.

| Virtual offset | Original target | Observed behavior / interpretation |
| --- | --- | --- |
| `+0xb8` | `0x96c780` | Request wrapper; can remap IDs through constant tables and forward to a related actor |
| `+0xd8` | `0x93fc90` | Resolves actor's component handle at `+0x70`, type ID `0x29fbe438`, and forwards to its virtual `+0xa0` |
| `+0x1a0` | `0x9415b0` | Landing-like predicate: compares actor integer `+0x144` to converted position Z, then tests vertical motion near zero or negative |
| `+0xf0` | `0x97e4e0` | Facing-related operation used conditionally during jump setup; exact semantic name remains provisional |
| `+0x750`, `+0x790` | `0x98f460`, `0x98fdf0` | State member-function pointer getters used by shared action setup/update |

The wrapper's remapping is why the numeric phase requests should not yet be
promoted to a universal actor-state enum. Resolving the component behind
`0x29fbe438` will help determine whether `+0xd8` specifically means animation
completion rather than generic readiness.

## Jump setup and useful next dependencies

Setup resolves position through component handles, applies a start position via
`0x85fd70`, and requests ID `2`. Its arithmetic includes:

```text
t = sqrt((2 * action[+0xb0]) / abs(action[+0xb8] * 60))
actor[+0x1ac] = t * abs(action[+0xb8])
actor[+0x1b8] = action[+0xb8]
actor[+0x1a4] = (action[+0xc8] - startX) / (2 * t * 60)
actor[+0x1a8] = (action[+0xcc] - startY) / (2 * t * 60)
```

This supports a jump-height/gravity/flight-duration interpretation and a
60-based time conversion. It does not establish the full game's timestep.
Flags at `+0xab`, `+0xac`, and `+0xad` affect start-position and facing choices.
The follow-up now checks setup arithmetic and facing decisions in 576 bounded
fixtures. Its base lifecycle and position setter are stubbed for those fixtures;
the shared lifecycle receives separate comparisons.

The shared lifecycle and request remapping now have tested decision models.
Next targets include the player state handlers at `0x98f270` and `0x98f9d0`,
the component class queried by `0x93fc90`, and actual position/facing side effects.
These supply named, testable pieces for the larger player update at `0x97af50`.

Reproduce the evidence with a local original ELF and compiler:

```text
python tools/map_actor_actions.py --original <original.elf> --out <map.json>
python tools/compare_jump_phase_behavior.py --original <original.elf> --clang8 <clang++.exe> --build-dir <temporary-directory>
```
