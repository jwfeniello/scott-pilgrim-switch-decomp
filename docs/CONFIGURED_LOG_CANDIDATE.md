# Configured logging candidate (unmatched)

`src/wip/ConfiguredLog.cpp` reconstructs the 1,152-byte function at
`0x1535e0`. The current candidate is 1,148 bytes and does **not** byte-match.
It is outside the exact-match manifest and adds no progress credit. Names
and SDK ABI views remain provisional.

The function maps a severity value, looks up a category threshold in a tree,
and checks a fallback gate. If logging proceeds, it copies the input text
through a custom string stream, constructs reference-counted message text
and a JSON view from `{}`, selects plain or JSON logging, and releases the
temporaries. The reconstruction uses the recovered stream allocator and
atomic reference-count operations.

Original RTTI identifies `ubiservices::BasicStringStream<char>` with public
nonvirtual bases for its custom-allocator `basic_stringstream` and
`ubiservices::RootObject`, both recorded at offset zero. This does not prove
all source declarations or explain the remaining stack-layout difference.

## Bounded execution comparison

`tools/compare_configured_log.py` compares 672 executions of the original
function and candidate. Cases vary severity (including an out-of-range
value), signed category, empty/short/long text, reference counts and injected
JSON cursor states. The check compares API traces, modeled heap contents
and the input reference count. Every execution must return with its stack
and callee-saved registers preserved.

The original, already byte-matched 352-byte buffer extraction helper at
`0x17d1f0` executes in both runs. Stream insertion, allocation, text and JSON
construction, logging and disposal use synthetic services. In particular,
injected JSON cursor states exercise both dispatch branches; they are not
claims about which states parsing `{}` produces in the game.

Four separately compiled incorrect candidates must be detected: changed
logging category, changed JSON text, changed JSON count threshold and
changed reference-count increment. The recorded receipt is
`progress/configured_log_behavior.json`.

Run with Python, Unicorn and Clang 8 available:

```text
python tools/compare_configured_log.py --original /path/to/Scott_Switch.elf --clang8 /path/to/clang++ --build-dir /path/to/scratch
```

The script verifies the original ELF hash before executing it. These checks
do not establish whole-game behavior, exception handling or concurrency.
Behavioral agreement is research evidence, not exact-match credit.
