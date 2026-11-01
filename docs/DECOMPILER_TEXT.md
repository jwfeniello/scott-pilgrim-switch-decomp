# Functions compiled from the decompiler's text

`src/decompiled/` holds functions whose decompiled text compiles, as C, to the original bytes. A tool takes the decompiler's output for one function, adds a small prelude that defines the decompiler's type names, compiles it with the project's compiler, and keeps it only if the complete function matches. The usual verifier then checks them like any other build. There is no assembly, no patching and no masking.

Their builds are labelled `decompiler_text_review_pending`, because they sit lower than anything else in this repository.

## What a match here shows

The logic is right: these statements, compiled by this compiler, give the same instructions. So the function's control flow, the fields it touches by offset, what it calls and in what order are all confirmed.

It does not show much about the source:

- **Types are the decompiler's guesses.** `__int64` often stands for a pointer. Offsets are written out by hand instead of being fields of a struct.
- **Names are address labels.** `sub_123ABC` and `qword_123ABC` say where something is, not what it is. Nothing here gives a class its name. C++ names of library calls are flattened to plain identifiers, so they are not the real symbols.
- **Calls have no real prototypes.** They are declared with empty parameter lists, which is why an argument can need `0LL` rather than `0`: the width comes from what the original puts in the register. The tool reads that from the original. It is a fact about the call, not about a recovered declaration.
- **Some spellings are chosen by testing.** The tool tries several readings of the same text and keeps whichever matches:
  - values that get dereferenced typed as pointers rather than `__int64`
  - values tested with `& 1` typed as bools, for call results, parameters and the function's own result
  - a function's result as 32 bits rather than 64
  - a local that only carries a global's value to one use written in place
  - neighbouring statements the other way round, since the decompiler writes them in the order the scheduler chose

  Each of these is a reasonable reading, but a match does not prove it is what the source said.

Where a virtual function holds a function, a comment above it gives the class from RTTI and the slot. That is the one piece of real naming here.

Treat these files as a checked starting point. Moving a function out of here and into a real class, with real types and names, is still the work to do. The percentage they add is real exact code, and it says nothing about how well that code is understood.

## How they are laid out

Files are grouped by compiler flags. A function is never placed in the same file as something it calls, because the compiler could then inline the call or use what it knows about the callee, and the original was not built that way. For the same reason, two functions that disagree about a declaration go in different files.

Most files are C. Two forms need C++:

- **Functions that return through `x8`.** A large result comes back through a hidden pointer that C cannot name. These are written as returning a stand-in struct `Big`, with the `x8` argument as the address of the named result, which C++ builds in place. `Big` and its size are not recovered. A call to such a function constructs its result where the `x8` argument points.
- **Functions whose only landing pad is the terminate pad.** These are `noexcept`. Casts that C leaves implicit are added where C++ asks for them.

Functions with other landing pads cannot be written this way, because the decompiler's text does not show their cleanup. They are the ones most other generated sources in this repository handle.
