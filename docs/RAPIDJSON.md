# RapidJSON source views

Four compiler profiles reproduce 29 complete original functions / 16,752
bytes using public RapidJSON v1.1.0 templates and a provisional allocator ABI
view. They include JSON dispatch, true/false parsing, hexadecimal decoding,
UTF-8 encoding, array/object parsing, integer handlers, JSON output, decimal formatting, and value
traversal. Original class declarations and the complete allocator implementation
remain unestablished. The wrapper functions themselves receive no credit.

The source fixture is recorded in `vendor/rapidjson-provenance.json`, with file
hashes in `vendor/rapidjson_sha256.json` and upstream licensing in
`vendor/rapidjson-1.1.0/license.txt`. One adaptation is explicit: the writer's
hexadecimal digit table uses lowercase `a-f` instead of upstream `A-F`.
The compiled writer instructions matched before this change, but a separate
data comparison caught the different lookup table at `0x133d750`.

`tools/test_rapidjson_build.py` recompiles each profile twice, verifies identical
objects and complete function bytes, and checks directly referenced immutable
objects and local dispatch tables against the original ELF. It then makes a
temporary header copy and inserts an external side effect into every credited
template definition. Every changed function must fail the unchanged linker or
complete-byte comparison. Receipts are in `progress/rapidjson_validation.json`.

Example, using local paths for the original and compiler:

```text
python tools/test_rapidjson_build.py --original <original.elf> --clang8 <clang++.exe> --build-dir <temporary-directory> --build-id rapidjson_reader
```

Repeat with `rapidjson_writer_801` using Clang 8.0.1 and
`rapidjson_writer_701` using Clang 7.0.1. The historical `--clang8` argument
selects the executable for either profile.

`rapidjson_pool_reader` also uses Clang 8.0.1. Its reconstructed pool allocation
routine supplies the previously missing 104 bytes in each array/object parser.
The remaining differences disappeared when the maximum-capacity expression
used `capacity > size ? capacity : size`. Both complete bodies passed fresh
compilation, repeats, and per-definition negative controls. This is evidence
for a compatible allocation routine, not a recovered original declaration.

These matches do not establish the game's complete RapidJSON revision or
configuration. They also do not establish a portable allocator, correct
whole-game linking, or game execution. The null parser remains uncredited:
its 300-byte candidate differs in two zero-store instructions. String and number
reader helpers still differ in size.
