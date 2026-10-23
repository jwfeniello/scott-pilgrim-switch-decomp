# Service-response candidate: bounded delivery and completion checks

[src/wip/ServiceResponse.cpp](../src/wip/ServiceResponse.cpp) reconstructs the
3,320-byte routine at `0x181f30`. It is **unmatched and receives zero exact credit**.
Its working names describe observed operations; they are not recovered original
class declarations. In particular, Ghidra's destructor label is not used as an
identity claim for this function.

The routine parses a response, optionally updates request status, classifies the
response, formats diagnostics for classification values 2 through 5, delivers the
result, and conditionally completes the pending request. The diagnostic branch
contains JSON and stringstream operations. Its JSON-building prefix now has bounded
checks, but the complete logging branch remains unverified and provisional.

## Checked paths

[tools/compare_service_response.py](../tools/compare_service_response.py) runs
original and compiled ARM64 code in the optional Unicorn harness. **6,912 cases**
compare service-call traces, the request's touched layout, status storage, pending
request storage, and reference-counted object headers. The harness also checks
callee-saved registers and stack restoration, and poisons caller-saved registers
at service boundaries.

Cases vary completion and status-update flags, callback changes to completion,
pending state and stop flag, reference counts, absent/inline/allocated callable
storage, reference transfer during completion, and classification results outside
2 through 5. Classification lookup uses empty trees and one/two-node trees that
find the category at the root, through a left branch, or through a right branch.
All unmodeled external services fail the fixture if reached.

The parser, virtual callbacks, mutex operations, and completion service are
synthetic. There are no competing threads, real SDK services, exceptions, JSON
logging cases, or full-game execution in this fixture. Passing these checks is
not a proof of the complete function's behavior or portability.

Four compiled negative controls must fail:

- Marking the request finished before completion-data destruction.
- Using the wrong pending-state gate for completion.
- Releasing an intrusive object at the wrong reference count.
- Delivering the result with the wrong argument.

The reference-transfer case lets completion-data destruction release the final
owner, making the order of destruction and the request-state update observable.
The original destroys completion data before writing request state 4.

## Recovered ABI relationships

| View | Observed fields |
| --- | --- |
| request | state `0x0c`, name `0x80`, atomic context `0x98`, parser `0xd0`, callable buffer `0xe0`, callable pointer `0x100`, parser flags `0x110`/`0x114` |
| response | SDK code `0x00`, intrusive text `0x08`, category `0x10`, completion flag `0x14`, service code `0x18`, text handles `0x20`/`0x28`, status-update flag `0x34` and value `0x38`, extra handles `0x48` through `0x60` |
| pending request | state `0x18`, stopped flag `0x88`, mutex owner `0x90`; mutex starts eight bytes into that owner |
| intrusive object | vtable at `0x00`, 32-bit reference count at `0x08`; zero count calls virtual slot `0x10` |

The parser at `0x4c760` returns the response through the ARM64 indirect result
register X8. Request virtual slot `0x50` delivers the response, and slot `0x28`
obtains the completion handle. The completion call is at `0x7acd0`.

## Reproduce

Use Clang 8.0.1 and install Unicorn in the Python environment:

```text
python tools/compare_service_response.py --original <original.elf> --clang8 <clang++.exe> --build-dir <temporary-directory>
```

The tool uses Clang O3 with the vendored libc++ 8 and musl headers and writes
[progress/service_response_behavior.json](../progress/service_response_behavior.json)
only after all comparisons and negative controls pass. Exact totals remain in
`progress/verified.json`; this research receipt cannot add matching credit.

The stream routines discovered while developing this candidate are independently
byte-verified and documented in [RECOVERED_STRING_BUFFERS.md](RECOVERED_STRING_BUFFERS.md).

## Logging reconstruction updates

Original RTTI identifies the logger's stream as
`ubiservices::BasicStringStream<char>` over a custom-allocator stringstream,
implemented in [UbisoftStringStream.h](../src/UbisoftStringStream.h). Its constructor
sets `boolalpha | showbase`. The candidate also now zero-initializes JSON values
before assigning type flags, uses numeric assignment expressions so the right-hand
value is evaluated before JSON-field lookup, and scopes the transaction-header
key through the field writer's destruction.

These changes follow original instructions and type evidence. They reduce the
candidate to 3,316 bytes against the original 3,320, but length similarity is not
an exact match. The existing 6,912-case fixture and four negative controls cover
only the documented non-logging paths; the additional prefix checks below do not
establish correctness of the complete logging path.

The JSON helper vtables also have original RTTI identities: `0x17c43b8` points
through typeinfo `0x17c7b20` to `ubiservices::JsonWriter`, and `0x17c4368` points
through `0x17c7af0` to `ubiservices::Json`. This identifies helper objects used
inside the handler; it does not validate Ghidra's destructor label for the entire
response-processing routine.

## JSON-prefix checks

Run the same comparison command with `--json-prefix` to exercise the original and
compiled handler through JSON construction and transaction-header lookup. Execution
stops at the call to `ios_base::init`, before stream formatting. This is deliberately
a partial-path behavior check, with **zero exact-match credit**.

The additional [fixture](../tools/service_response_json_prefix.py) passes **960 cases**:
positive and high-bit unsigned HTTP/service codes, negative/zero/positive SDK codes,
empty header trees, root/left/right hits, mixed-case keys, long missing keys,
missing keys on either side, one or several
JSON owners, optional scratch allocation, and classification values 2 and 5. It
compares service traces and synthetic heap contents. It also checks full JSON-object
zero initialization, numeric payload/type flags, selected header text, scratch-base
recovery, reference-count changes, and temporary document cleanup order.

Five compiled negative controls are rejected: wrong unsigned flags, wrong signed
flags, reversed header-tree traversal, wrong fallback selection, and wrong scratch
allocation base. The separate [receipt](../progress/service_response_json_prefix.json)
records these results and source/header hashes.

Allocation, JSON setters, and field lookup use synthetic services; their real
implementations are not validated here. Header comparisons execute the original
routine at `0x7e460`, with synthetic `memcmp` and ASCII/C-locale `toupper` services.
An additional **64 comparator cases** check ordering across empty, short, long,
equal, unequal, and mixed-case strings, including complete-function return and
register/stack restoration.

Because execution of the response handler stops inside
the handler, these prefix checks do not check final stack restoration or callee-saved
register restoration. Stream formatting, final logging, and subsequent cleanup on
logging paths still need full-path validation.

## Exact text-comparison dependency

[SdkTextCompare.cpp](../src/SdkTextCompare.cpp) matches all **488 bytes** of
`0x7e460`, with checked bindings to `memcmp` (`0xfa3520`) and `toupper`
(`0xfa3b50`). The helper first tests string equality, then compares characters
case-insensitively, using acquire loads of the intrusive string-object pointers.
This explains why transaction-header lookup accepts different capitalization.
Its local class names describe ABI views, not recovered original declarations.

The match uses Clang 8.0.1 O3, libc++ 4 headers, a preserved frame pointer, PIC,
and `-mllvm -tail-dup-placement-threshold=4`. Direct string indexing and a signed
loop index reproduce the original register allocation; replacing indexing with
`c_str()` access produced five differing instructions. Full-function verification,
not that diagnostic count or the behavioral fixture, awards its exact credit.

## Exact JSON dependencies

[Recovered SDK JSON operations](SDK_JSON.md) now provide 12 complete matches,
including document initialization, the text setter, named-member assignment, and nested-value copying used
by this handler. They also identify `JsonDocument` offset `0x20` as the parent
value, `0x28` as allocated member-name storage, and `0x30` as the start of an
inline member-name buffer. The provisional `flag`/`scratch` names in the response
candidate should be interpreted using that evidence. The handler fixture has not
yet been changed to execute these real JSON services.
