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
counted twice. Eight rebuilt statistics handlers remain unmatched. They have
the original lengths (140 bytes for damage, 128 for the others), but instruction
scheduling/register choices differ. Behavioral checks do not promote them.

The available Clang 7/8 optimization profiles, several CPU scheduling profiles,
and a small set of scheduler options were tried. The retained module uses the
ordinary Cortex-A57 Clang 8 profile. This result does not identify the original
compiler version, and the project still cannot rebuild or run the complete game.

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
