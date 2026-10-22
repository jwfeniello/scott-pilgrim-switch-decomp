# Actor action dependencies and player state dispatch

This work reconstructs dependencies shared by jump/move actions and the player.
It adds readable behavioral models and **7,133 bounded ARM64 comparisons**,
with five deliberately incorrect source variants rejected. It adds **no exact
matching credit**. The original complete functions execute in Unicorn; component
creation, virtual side effects, and external callbacks are deterministic stubs.

Code: [ActorActionDependencies.cpp](../src/wip/ActorActionDependencies.cpp).
Evidence: [behavior receipt](../progress/action_dependencies_behavior.json) and
[RTTI/member mapping](../progress/action_dependencies_map.json).
These models separate the decisions from the original object offsets. They are
not recovered original headers, drop-in engine implementations, or proof of
whole-game portability.

## Shared setup and update

Setup `0x8e1690` (272 bytes) sets action bytes `+0x98 = 1`, `+0x99 = 0`.
It checks the attached actor's type query with ID `0x2f2bf4aa`. If that query's
low bit is set and action byte `+0xa8` is nonzero, it compares the actor's current
member-function pointer at `+0x210/+0x218` with virtual getter `+0x750`.
If different, it compares getter `+0x790`. If both differ, it calls the latter
getter again and passes that member pointer to transition helper `0x812930`,
with the state-machine receiver at actor `+0x208`.

Update `0x8e17a0` (400 bytes) checks active byte `+0x98`, actor presence, the same
type query, and equality with the first getter. If equal, it enters the existing
completion path: context flag bit 1 or the global gate must permit completion.
The callback supplies a payload for event `0x3a6530b8`. The original checks for
missing callbacks and targets; the bounded comparisons use present callbacks
and targets and vary context presence and gates.

Equality is not a naive comparison of 16 bytes: equal first words with a zero
first word can compare equal despite different second words when both low bits
are clear. The fixture set covers this null-member-pointer behavior, nonzero
adjustments, non-boolean type results, missing actor handles/pointees, active
flags, and completion gates. There are 1,280 lifecycle fixtures.

## Player state-machine dispatch

The previous notes called these values generic identities. Their consumers
establish the more useful meaning: **ARM64 member-function pointers**. The second
word's low bit selects virtual dispatch; its arithmetic right shift by one
adjusts `this`. The first word is either a function address or a vtable offset.

For the RTTI-confirmed `SPTG::ControllablePlayer`:

| Getter slot | Getter | Returned pair | State handler |
| --- | --- | --- | --- |
| `+0x750` | `0x98f460` | `(0x748, 1)` | vtable `+0x748`, `0x98f270`, 484 bytes |
| `+0x790` | `0x98fdf0` | `(0x788, 1)` | vtable `+0x788`, `0x98f9d0`, 1,048 bytes |

Helper `0x812930` (200 bytes) uses this layout relative to its receiver:

| Offset | Observed role |
| --- | --- |
| `+0x00` | Object on which member functions execute |
| `+0x08/+0x10` | Current member-function pointer |
| `+0x18/+0x20` | Previous member-function pointer |
| `+0x28` | Status controlling extra event dispatch; `-1` disables it |

With stable status, its order is:

1. If status is not `-1`, call the old state with event **10003**.
2. Call the old state with event **10002**.
3. Preserve the old member pointer and install the new one.
4. Call the new state with event **10001**.
5. Re-read status; if not `-1`, call the new state with event **10003**.

Entry/exit interpretations for 10001/10002 are plausible; original event names
are not established. The 144 fixtures check direct/virtual dispatch, positive
and negative `this` adjustments, event order, and memory at callback time.
The model assumes stable status and non-reentrant callbacks; the original
re-reads fields after calls, so it must not be simplified blindly in a full port.
These two state handlers are concrete next targets for gameplay reconstruction.

Follow-up: [player state findings](PLAYER_ACTION_STATES.md) now reconstructs
both handlers with 19,824 bounded comparisons, connecting the first to
`GameOverMovie` coordination and the second to action-state motion/playfield
changes and owned-handle cleanup. Their original method names remain unknown.

## Player request remapping

Wrapper `0x96c780` (300 bytes) uses the related-actor handle at player `+0x238`.
With a live related actor and IDs 0 through 7, its virtual `+0x188` selects a
request table. Own virtual `+0xb0` receives the mapped ID, rate `1.0f`, and the
low bit of each flag. Own virtual `+0x120` then controls forwarding to the
related actor's `+0xb0`.

| Requested ID | Variant query = 0 | Variant query nonzero | Forwarded ID |
| --- | --- | --- | --- |
| 0 | 44 | 60 | 100 |
| 1 | 43 | 59 | 99 |
| 2 | 53 | 69 | 109 |
| 3 | 54 | 70 | 110 |
| 4 | 55 | 71 | 111 |
| 5 | 56 | 72 | 112 |
| 6 | 57 | 73 | 113 |
| 7 | 42 | 58 | 98 |

This explains the jump update's equivalent phase groups `2..6`, `53..57`,
and `69..73`. It does not establish descriptive animation names.
IDs above 7 with a live related actor call own virtual `+0xf8` before applying
the unchanged request. Missing handles/pointees apply the unchanged request.
The 2,808 fixtures check call order, receiver, IDs, rate, and flag masking.
The original upper-bound comparison is signed: **negative IDs with a live
related actor are outside this model's supported domain** and can index far
outside the tables. The model is not an exact substitute for invalid inputs.

## Named position and graphics dependencies

RTTI plus each class's complete type getter establish:

| Type ID | Class | Use here |
| --- | --- | --- |
| `0x022fe74a` | `Onyx::Transform` | ActorObject handle `+0x60`; position at transform `+0x7c..+0x84` |
| `0x2eae5813` | `SPTG::GraphicsObject` | ActorObject handle `+0x58`; facing-related byte `+0x79` |

The earlier private notes incorrectly recorded Transform as `0x021fe74a`.
The actual MOV/MOVK instructions construct `0x022fe74a`; a Ghidra address-like
label must not automatically have the image base subtracted from it.

Landing predicate `0x9415b0` (264 bytes) resolves ActorObject and Transform,
then rejects when actor integer `+0x144` is below the integer-converted position
Z. Otherwise it accepts vertical motion within `1e-6` of zero or strictly
negative. The 2,310 fixtures exercise populated/missing handles and missing
pointees, truncation toward zero, threshold boundaries, infinities, and NaNs.
ARM64 FCVTZS saturates out-of-range values and produces zero for NaN; the C++
model makes that explicit instead of relying on undefined float-to-int casts.
NaN vertical motion returns false. The original name/physical meaning of the
reference-height field remains provisional.

## Jump setup and facing

Setup `0x8e8dd0` (1,048 bytes) now has 576 comparisons against the complete
original function, with its base setup and position setter stubbed:

- Byte `+0xab`: use the absolute start vector when nonzero; otherwise save
  the current position at action `+0xd4` and add the start vector to it.
- Apply that position, then request `(ID 2, flags 1, 0)`.
- `time = sqrt((height + height) / abs(gravity * 60))`; store at action `+0xe0`.
- Vertical motion is `time * abs(gravity)`; horizontal components divide
  target-minus-start by `(time + time) * 60`.
- Copy parameters `+0xb4` and `+0xb8` to actor `+0x1c4` and `+0x1b8`.
- Byte `+0xad`: compare start X with target X and graphics byte `+0x79`,
  conditionally invoking actor virtual `+0xf0`.
- Byte `+0xac`: subsequently ensure graphics byte `+0x79` is nonzero,
  invoking `+0xf0` if needed. It is **not an absolute-target flag here**.

Fixtures exercise both start modes, all facing-flag combinations, target
directions, zero/negative height, and both signs and zero gravity. They compare
float bits except NaN payloads; the `sqrtf` fallback is a numeric stub and does
not validate errno. The facing stub toggles byte `+0x79`; the actual `+0xf0`
implementation still needs its own behavioral reconstruction. Target Z is not
used in the observed motion calculation.

## Remaining animation question

Readiness wrapper `0x93fc90` (92 bytes) is checked in 15 fixtures: it resolves
type `0x29fbe438` at actor `+0x70`, initializes newly resolved objects, then
forwards their virtual `+0xa0` return value unchanged. We have not proved the
class behind this ID or the exact meaning of that query. Do not rename it
`IsAnimationFinished` as an established original method yet.

The local Ghidra HTTP bridge was unavailable during this batch. Saved decompiles,
ELF instructions, RTTI, and ARM64 execution were sufficient for these checks.

## Reproduction

Requires the private original ELF, Clang 8.0.1, and the optional Unicorn Python
package. Only derived source, addresses, checksums, and receipts are public.

```text
python tools/map_action_dependencies.py --original <original.elf> --out progress/action_dependencies_map.json
python tools/compare_action_dependencies.py --original <original.elf> --clang8 <clang++.exe> --build-dir <temporary-directory>
```

All five negative controls must reject. Model code installation invalidates
Unicorn's translation cache before each changed-source run. The harness also
checks stack restoration and integer and floating-point callee-saved registers.
