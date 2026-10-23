# Compiled gameplay statistics module

The statistics research is now implemented as a shared C++ module:

- [Statistics.h](../src/gameplay/Statistics.h) defines typed player, message,
  callback, bureau, context, and record layouts with checked offsets.
- [Statistics.cpp](../src/gameplay/Statistics.cpp) implements the player dispatcher
  and nine event handlers using those layouts and a common record-update helper.

These functions directly read and update the engine's objects and call its
accessors. They are not decision-model functions that return an expected answer
for a separate harness to apply. Names remain descriptive reconstructions.
The layouts target the original 64-bit ABI, with padding for unrecovered fields;
they are not claims of portable original classes.

## Executed integration

The integration check compiles this translation unit with Clang 8.0.1, links
external references against checked original addresses, and installs all ten
compiled functions into the ARM64 fixture. Original string bytes are checked
before binding their addresses. No machine-code edits are made to obtain matches.

The original bureau factory/constructor then installs its callbacks. A test call
enters the **rebuilt player dispatcher**, uses the original populated-handle
accessor and member-function trampoline, and reaches a **rebuilt event handler**.
Thus reconstructed dispatch and handlers execute together against actual object
layouts. The constructor/copy code, accessors, and trampoline remain original;
external allocation and statistics-store services have the same documented stubs
as the original-handler tests.

All **3,240 cases** from [Gameplay statistics](GAMEPLAY_STATISTICS.md) pass with
this implementation. They check player/bureau/record memory, key strings,
attribute pointers, callback order and lazy-store initialization. Five mutated
decision oracles still reject, and two additional mutations in the **executable
implementation itself** reject: decrementing instead of incrementing, and writing
the wrong player-mark value.

## Exact matching outcome

`DispatchPlayerStatistic` covers the complete original function at `0x986410`
and byte-matches all **44 bytes** with checked relocation. Its recipe is now in
the normal `gameplay_statistics` verification build, including header hashes.
This is one new exact function.

`MarkLifeEvent` also matches its complete 24-byte original at `0x79ef90`, but
that function already has credit through `LeafPrimitives.cpp`, so it is not
counted twice. All eight statistics record handlers now match their complete
original functions: 140 bytes for damage and 128 bytes for each of the seven
other handlers, adding **1,036 exact bytes**. The shared helper assigns the
record labels before incrementing its amount; this gives the original instruction
order with the ordinary Clang 8.0.1 Cortex-A57 profile. No special scheduler
options or machine-code edits are required.

A bounded probe checked 240 dependency-valid source statement orders and found
this fully matching order. All ten functions in the integrated module now match;
nine are credited by this build and the existing leaf build credits the mark
handler. The original compiler version remains unidentified, and the project
still cannot rebuild or run the complete game.

## Adjacent float-payload callbacks

[StatisticsDetail.cpp](../src/gameplay/StatisticsDetail.cpp) reconstructs four
additional complete 72-byte handlers at `0x79f2f0`, `0x79f340`, `0x79f390`, and
`0x79f3e0`, installed for events 21 through 24. Each checks the same local-player
index, then passes the bits at message offset `0x14` as a **float in S0**, with
statistic kind 5 through 8 in W0, to `0x6f3c30`. This corrects an integer-looking
decompiler signature. The original descriptor table identifies these as money
statistics:

| Event | Kind | Original key | Attribute |
| --- | --- | --- | --- |
| 21 | 5 | `moneyearned` | `gained` |
| 22 | 6 | `moneygivenbyplayer` | `received` |
| 23 | 7 | `moneygiventoplayer` | `given` |
| 24 | 8 | `moneyspent` | `spent` |

The descriptors occupy 32-byte records beginning at `0x1846500`. The shared
consumer finds or creates a record in a pointer-keyed hash map and adds the
floating-point payload. Transfer direction here follows the original labels;
the event-producing money-transfer code has not yet been traced.

All four byte-match with checked external bindings, adding **288 exact bytes**.
They are verified by `gameplay_statistics_detail`; the 3,240-case integration
fixture above does not exercise these four events or the shared float consumer.

## Reproduce

```text
python tools/compare_life_statistics.py --integrated --original <original.elf> --clang8 <clang++.exe> --build-dir <temporary-directory>
python tools/verify.py --only gameplay_statistics --original <original.elf> --clang8 <clang++.exe> --build-dir <temporary-directory>
```

The integration receipt is
[integrated_statistics_behavior.json](../progress/integrated_statistics_behavior.json).
Its behavioral results are separate from the authoritative complete-byte receipts
in `progress/verified.json`.

Next integration targets are the player recovery handler and its shared state
transition/animation interfaces. The current module is a concrete first subsystem,
not a completed player engine or an implementation of every mapped statistics event.
