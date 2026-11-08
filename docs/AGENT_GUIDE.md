# Working on functions (people and AI agents)

This is the practical guide to matching functions: setup, the loop that takes one function from the original
binary to an exact, verified match, the house rules, and the patterns that have made hard functions match. Point an
AI agent at this file first; it is written so an agent can follow it without other context.

A function counts only when the whole of it compiles, with Clang 8.0.1 or 7.0.1 for AArch64, to the original's
exact bytes after checked relocations. See [methodology](METHODOLOGY.md) for what that means precisely.

## Setup

1. **Python 3.10+.** The verifier needs only the standard library. For readable disassembly in the workbench,
   also `pip install capstone` (without it you see instruction words).
2. **Compilers:** the public LLVM releases of Clang **8.0.1** and **7.0.1**, plus `ld.lld` from 8.0.1 for the
   few link-time-optimized builds. Point the tools at them with `SCOTT_CLANG8`, `SCOTT_CLANG7` and `SCOTT_LLD8`,
   or put them in `toolchains/llvm801/bin` and `toolchains/llvm701/bin` (ignored by Git). See
   [compiler profiles](COMPILERS.md).
3. **Your own copy of the game's main ELF** as `orig/Scott_Switch.elf` (ignored by Git). Its SHA-256 must be
   `ea95638e6d6aaa0dc6cddd552a9366799aa1ec3bc07ee201f23f6c151103f5b8`.
4. Build the class map once: `python tools/fn.py classes` (writes `build/dev/vtables.json` from the original's
   RTTI: every class with a vtable and the functions in its slots).

## The loop

All commands run from the repository root. `tools/fn.py --help` lists them.

```sh
python tools/fn.py unmatched --class "SPTG::" --classes-only --max-size 300   # pick a target
python tools/fn.py show 0x911a60                                             # read the original
#   ... write or fix the C++ in src/gameplay/ ...
python tools/fn.py diff gameplay_action_events 28SetFlashMenuVisibilityAction4Hide 0x911a60
python tools/fn.py try src/gameplay/ActionEvents.cpp "void TimerAction::Update() {" 0x8f68f0 < variants.txt
python tools/fn.py add gameplay_action_events 11TimerAction6Update=0x8f68f0   # record it once it is exact
python tools/fn.py check gameplay                                            # all gameplay builds still match
python tools/verify.py --only gameplay_action_events                         # the official check for one build
```

- **`unmatched`** lists functions no build credits yet, smallest first, with the vtable slots that point at
  each (`SPTG::TimerAction[13]` is slot 13 of `TimerAction`). `--class` filters the labels by regular
  expression. A function shared by many classes is a base-class method: match it once, credit it once.
- **`show ADDR`** prints the original function, which classes' slots point at it, and names for calls to
  functions that are already matched or are known vtable slots.
- **`diff BUILD SYMBOL ADDR`** compiles a build exactly as the verifier does and prints an aligned diff:
  ` - ` lines are the original, ` + ` lines yours. Branch targets, page addresses and the low bits after an
  `adrp` are hidden on both sides, so what remains is a real difference. The last line says `EXACT` or why not.
  `SYMBOL` is a unique substring of the mangled name, such as `11TimerAction6Update`.
- **`try FILE "SIGNATURE" ADDR`** reads whole-function variants from standard input, separated by lines that
  say `====`. Each replaces the text from the signature through the closing `}` at the start of a line. It
  prints `EXACT` or the number of differing lines for each, `--show N` prints variant N's diff, and `--keep`
  writes the first exact one back into the file. This is the fastest way to test statement orders, local
  variables and alternative spellings.
- **`add BUILD SYMBOL=ADDR ...`** rechecks every record in the build and adds the new ones. It refuses an
  address another build already credits, and changes `config/builds.json` only if everything matches. With no
  pairs it just refreshes the build's records (needed after renaming something they refer to).
- **`new BUILD SOURCE --like OTHER`** adds a build entry for a new source file with another build's flags
  (gameplay code uses `gameplay_player_stats`'s).
- **`check [PATTERN]`** recompiles every build whose id contains the pattern and checks all their records.
  Run it after editing a shared header.

## House rules

- **Exact matches only.** The whole function, byte for byte, with checked relocations. No inline assembly,
  byte patches, masking, invented compiler flags or proprietary compilers. Close is not credit.
- **Real names from evidence:** RTTI class names (`fn.py classes`), the component type table in
  `src/gameplay/ComponentTypes.h`, strings, and what callers do. Unknown names are provisional and say so
  (`Slot13`, `value1a8`, `Call8e7330`). Never rename or retype a declaration only because it makes a function
  match. When a spelling's only support is that it matches, say so in a comment next to it.
- **Comment every function** with its slot or address and one line on what it does.
- **Prefer real class definitions** with real fields over `char padding[...]` views. They make the code
  readable, and a future port (especially a 32-bit one) needs them.
- **When a function won't match** after honest tries, either remove it or keep it with a
  `Not yet matched: <what differs>` comment and no credit (or put it under `src/wip/`). Write down what you
  learned; it helps the next attempt.
- **Keep the repository clean:** preserve each file's line endings, don't touch unrelated files, and never add
  original game files, assets, SDK files, compilers or build products.
- **Progress files are regenerated, not edited:** leave `progress/` to the full `tools/verify.py` run.

## What makes hard functions match

The compiler is deterministic, so a difference always has a cause in the source. These have each been the cause
in practice. More detail is in [game classes](GAME_CLASSES.md), [components](GAMEPLAY_COMPONENTS.md) and
[the LTO build](LTO_BUILD.md).

**Order and shape**

- Statement order, which value is read first, and splitting an expression into locals decide scheduling and
  registers. Try these first, several at a time with `try`.
- A `switch` with four or more cases becomes a jump table; fewer become a compare chain whose order follows
  the source's case order.
- State handlers are `int Class::StateN(int event)` with the events in `src/gameplay/StateMachine.h`; see
  "Matching state handlers" in [game classes](GAME_CLASSES.md) for the form that matches most of them.
- When the binary has the same code twice where your source has it once, the original probably wrote it twice
  (for example `if (!a) work(); else if (b) work();`). The compiler only merges such copies when the work is a
  single call or store.

**Declarations**

- Compare the class's vtable (`fn.py classes`) with its declaration. A missing `override` changes the type a
  call goes through, which can stop the compiler from hoisting or merging vtable loads.
- A field tested with `cmp ... #0; cset` is a byte, not a `bool`; a `bool` load needs no compare.
- Stores the compiler unrolls or vectorizes without runtime alias checks are not `char`-typed (`uint8_t`
  aliases everything); such fields are `bool` or wider.
- A value copied as 32- or 64-bit integer moves, then used as a float, is a struct being copied.
- Bitfield stores alias everything, so the original's load order around them shows which values it read into
  locals first.

**The build is link-time optimized**, so the compiler knew things a single file can't say on its own:

- A call that is a tail call right after a local's address was passed to another function means that
  parameter is not kept: declare it `__attribute__((noescape))`.
- An argument the callee ignores but the caller still passes had a use when the compiler removed dead
  arguments, typically being handed to an inline helper.
- Calls that become invokes (landing pads) or plain calls follow whether the declaration the caller sees is
  `noexcept`.

**Helpers and locals**

- Locals of inlined helpers are placed above the function's own locals in the frame, each later inline higher.
  When stack offsets differ, try moving a local between the function and the helper.
- Component handle lookups come in two flavours, `onyx::Find` (reread and null-checked) and `onyx::Get`; see
  `src/gameplay/OnyxComponents.h`.
- A small find helper that returns the end pointer when nothing matches keeps tests that a loop written in place
  loses.

## Before opening a pull request

- `python tools/fn.py check <your builds>` and, after a shared header change, `python tools/fn.py check gameplay`.
- `python tools/verify.py --only <build>` for each build you changed.
- Describe each new match: address, size, symbol, build, and anything uncertain about names or layouts. Say if
  an AI produced it; reviewers check generated claims like any others.
- Claim a class or family in an issue first, so two people don't work on the same thing.

## Notes for AI agents

- Read this file, then [game classes](GAME_CLASSES.md), before writing code. Look at neighbouring matched code
  in the same source file for the house style; matching the existing style is usually what matches the bytes.
- Work one class or family at a time. Keep tool output short (`--lines`, `--limit`).
- Try several spellings per round with `try` rather than one edit at a time; most differences come down to
  order, locals or a declaration.
- Never change a declaration, flag or file outside your task to make a function match. If a match needs a
  shared header change, make the smallest evidence-based change and run `fn.py check gameplay`.
- If a function won't match after a fair number of tries, park it with a `Not yet matched` note and move on.
  Breadth gets more done than depth.
