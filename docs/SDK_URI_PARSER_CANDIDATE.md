# URI parser reconstruction (not an exact match)

`src/wip/SdkUriParser.cpp` reconstructs the complete routine at `0x73580`.
Both original and candidate are 2,400 bytes. Clang 8.0.1 O3 with tail
 duplication threshold 4 leaves three normalized instruction differences:
one commutative addition operand order and two instructions scheduled in
reverse order in the port scan. Normalized comparisons ignore relocation
immediates; this is diagnostic evidence, not a verified byte match.
The candidate is excluded from exact progress.

The source uses a shared SDK text owner and nine offset/count pairs. These
are descriptive ABI views, not recovered original declarations. A standard
pair reproduces the range-assignment code generation better than an aggregate.
The parser finds the scheme, optional credentials, host and port, then removes
the last fragment marker, first query marker, and first parameter marker from
the remaining path in that order. Its port scan constructs a temporary string
for each character test. These details preserve observed behavior; they are
not recommendations for implementing a general-purpose URI parser.

## Validation

`tools/compare_uri_parser.py` runs the original and candidate ARM64 functions
through complete returns using the optional Unicorn harness. The receipt is
`progress/uri_parser_behavior.json`: 267 cases and three compiled negative
controls rejected (wrong query marker, port offset, and first-fragment search).
The comparison covers all eighteen range words, unchanged input text and owner,
reference counts, ordered slice/detach calls, allocation/free/disposal events,
and the harness's stack and callee-saved register checks.

Cases cover short and heap-backed strings, missing components, credentials,
empty paths, repeated fragment markers, parameters/queries, a NUL-containing
path, digit and non-digit ports, and long paths. SliceText and DetachText are
synthetic helpers with unique owners; allocation, memory operations, string
length and disposal are also modeled. The test does not establish concurrent
ownership behavior, allocation-failure behavior, standards compliance, or
full-game behavior. It does not award exact-match credit.

Run from the repository with Unicorn installed:

```powershell
python tools/compare_uri_parser.py --original <private-elf> --clang8 <clang++.exe> --build-dir <scratch-directory>
```

The original ELF and compiler are not distributed in this repository.
