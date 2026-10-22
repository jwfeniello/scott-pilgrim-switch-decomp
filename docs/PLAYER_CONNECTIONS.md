# State triggers, collision gating, and the shared player update

This batch connects the recovered action states to their callers and starts a
reviewable breakdown of the large player update. It adds **1,246 bounded
comparisons**: 1,020 execute complete small functions and 226 execute explicitly
bounded regions inside larger functions. Five wrong-source controls reject.
There is **no new exact-match credit** and no claim that a region comparison
reconstructs its containing function.

Sources: [PlayerConnections.cpp](../src/wip/PlayerConnections.cpp),
[behavior evidence](../progress/player_connections_behavior.json), and
[call/type map](../progress/player_connections_map.json).

## Leaving an actor action

The full 272-byte routine at `0x8e1580` complements the shared setup/update
routines. It sets action bytes `+0x98/+0x99` to `(0, 1)`, checks for a live player
actor and action byte `+0xa9`, then checks the current state:

- Preserve the game-over-related state returned by virtual getter `+0x750`.
- If the state equals the action-selected state returned by `+0x790`, transition
  to the state returned by `+0x308`.
- Leave other states alone.

On ControllablePlayer, `+0x308` returns member pointer `(0x300, 1)`. The behavior
is clear; calling it the original named "idle" state would still be an inference.
The 252 full-function fixtures vary null handles/pointees, type-result low bits,
the action flag, and state identity. They use the actual original member getters.

The region `0x97b3b0..0x97b464` in the big player update performs the same state
recovery without the action-object checks. Its earlier path decrements signed
integer `+0x1470` when the result is nonnegative; zero enters a reset path that
eventually reaches this region. That path also performs component resets and
event dispatch before the state check. Only the state-recovery region is tested
here; seven state fixtures pass. This does not prove the broader reset path's
original purpose or every way it is reached.

## A timer that enters game-over handling

State handler `0x98d710` contains a path beginning at `0x98d764`:

1. If player byte `+0x12ec` is zero, leave float `+0x12e4` unchanged here.
2. Otherwise, if the float's absolute value is at most `1e-6`, transition
   through getter `+0x750` to the game-over-related handler.
3. Otherwise subtract the global delta at `0x1924d70`, clamp with ARM64
   `FMAXNM(result, +0)`, and continue elsewhere in the handler.

The comparison precedes subtraction: a timer that reaches zero after subtracting
does not enter game-over handling on this particular check until a later call.
NaN does not satisfy the near-zero comparison; numeric zero wins against a NaN
subtraction result in `FMAXNM`. The 120 region fixtures check those distinctions,
threshold boundaries, enabled values, and the actual getter/transition arguments.
They stop at `0x98d7a4` or `0x98db20`, not at the containing function's return.
What initially sets this timer and flag remains to be traced; do not rename
them as proven health, life-count, or death-timer fields yet.

## What PlayfieldActor `+0x199` actually gates

RTTI identifies the 8,328-byte routine at `0x7af970` as virtual `+0x70` on
**`SPTG::PlayfieldCollisionSolver`**. Its actor loop reads byte `+0x199` at
`0x7b1180`, with two equivalent reads after lazy component resolution.

A nonzero byte jumps over a section that examines up to four directional bounds,
calls geometry helper `0xc1da30`, and records a selected contact/distance in
fields including `+0x128`, `+0x12c`, `+0x144`, and `+0x145`. A zero byte may
allow that section, depending on byte `+0x111` and the associated actor's
virtual `+0x190` result:

| `+0x199` | `+0x111` | Stable `+0x190` result | Enter directional scan | Query calls before scan/skip |
| --- | --- | --- | --- | --- |
| nonzero | any | any | no | 0 |
| zero | nonzero | any | yes | 1 |
| zero | zero | zero | yes | 2 |
| zero | zero | nonzero | no | 1 |

The 27 fixtures validate the routing and call count between `0x7b1180` and
either `0x7b11a0` or `0x7b1458`. The directional scan itself is inspected but
not reconstructed by these fixtures. Bounds selection follows the scan boundary.

**This flag does not disable the entire collision solver.** At the skip target,
an existing `+0x128` contact flag can still lead into the response path at
`0x7b1460`. Earlier collision processing also precedes these reads. The
action-selected state therefore bypasses a specific collision-checking section;
"no collision" would be an overstatement.

## Breaking down the 13,032-byte player update

The original function `0x97af50` is virtual `+0x68` on eight RTTI-confirmed
classes: `ControllablePlayer`, `ControllableScott`, `ControllableRamona`,
`ControllableKim`, `ControllableStephen`, `ControllableWallace`,
`ControllableKnives`, and `ControllableNegaScott` (all in `SPTG`).
That confirms these are shared player mechanics, rather than a Scott-only path.

The generated map records **119 direct BL sites to 32 distinct targets**.
This excludes indirect calls and is not a runtime profile. Current reviewed
sections are:

| Region | Established observation | Validation |
| --- | --- | --- |
| `0x97b10c..0x97b134` | Signed countdown; zero enters reset path | Instruction inspection |
| `0x97b3b0..0x97b464` | Action-state recovery through getter `+0x308` | Bounded region comparison |
| `0x97bc88..0x97bcbc` | Stores shifted input-related bits, transitions through `+0x760` | Instruction inspection; surrounding trigger unresolved |
| `0x97c624..0x97c6b8` | Timer accumulation, strict `>3` threshold, transition through `+0x730` | 72 bounded region fixtures |
| `0x97cc0c..0x97cc94` | Action-selected state suppresses a path to `+0x2f0` and `0x996c30` | Instruction inspection; full gating not modeled |

The `+0x1408` timer region adds global delta. If the sum is strictly greater
than 3 and the current state differs from getter `+0x730`, it zeros the timer
and transitions. If already in that state, it retains the accumulated value.
NaN does not cause a transition. The target member pointer is `(0x728, 1)`;
its original state name remains unknown. Reaching this region has preceding
conditions that are outside the model.

The map includes original getter bodies and handler identities for `+0x308`,
`+0x730`, `+0x750`, `+0x760`, and `+0x790`, and hashes the containing functions.
This is a starting structure for further reconstruction, not a full control-flow
or semantic recovery of the large update.

## Animation readiness: stronger evidence, still a missing binding

Player RTTI exposes a base Compose dependency collection containing
**`Strong<SPTG::AnimationController>`**, alongside ActorObject and level
accessors. A concrete candidate, **`SPTG::AnimationInfoHolderSwitch`**, has
virtual `+0xa0` mapped to `0x8cd9f0` (104 bytes). That full function:

1. Resolves dependency `0x771ba2ee` at its own `+0x50` when needed.
2. Calls the dependency's virtual `+0x80` to obtain a value object.
3. Returns bit 2 of that value object's byte `+0x0c`.

All 256 possible flag bytes are tested in each of three handle-cache states,
giving 768 fixtures. Its neighboring rate-like setter at `0x8cd980` uses the
same dependency/value path and writes the supplied float to value `+8`.

These facts fit the player's readiness and rate wrappers, but **the binding from
player resolver ID `0x29fbe438` to this concrete implementation is not proven**.
There is no direct registration for that ID in the saved factory catalogs;
the shared resolver can also use a per-instance factory tree. RTTI dependency
names alone do not prove which object an individual runtime handle contains.
The report explicitly marks this as a candidate, and bit 2 is not promoted to
an established original `IsAnimationFinished` name.

Next work should trace the per-instance binding/deserialization path for the
AnimationController dependency, follow writers of `+0x12e4/+0x12ec`, and extend
the reviewed regions outward with explicit entry conditions. Ghidra's HTTP
bridge was unavailable; this batch used the original ELF and ARM64 execution.

## Reproduction and limits

```text
python tools/map_player_connections.py --original <original.elf> --out progress/player_connections_map.json
python tools/compare_player_connections.py --original <original.elf> --clang8 <clang++.exe> --build-dir <temporary-directory>
```

Region fixtures inject live registers and memory at declared boundaries and
stop before downstream behavior. They never count as full-function matches.
External resolution and state-transition effects are stubbed; collision query
results and object identities are stable. The original large functions and all
game assets remain private. See the behavior receipt for per-group counts and
boundaries, including the noncontiguous game-over timer branch.
