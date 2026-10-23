# Service-response candidate: bounded delivery and completion checks

[src/wip/ServiceResponse.cpp](../src/wip/ServiceResponse.cpp) reconstructs the
3,320-byte routine at `0x181f30`. It is **unmatched and receives zero exact credit**.
Its working names describe observed operations; they are not recovered original
class declarations. In particular, Ghidra's destructor label is not used as an
identity claim for this function.

The routine parses a response, optionally updates request status, classifies the
response, formats diagnostics for classification values 2 through 5, delivers the
result, and conditionally completes the pending request. The diagnostic branch
contains JSON and stringstream operations. That branch has **not** been behaviorally
validated; its source remains a provisional candidate.

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
an exact match and the logging path remains unverified. The existing 6,912-case
fixture and four negative controls cover only the documented non-logging paths.

The JSON helper vtables also have original RTTI identities: `0x17c43b8` points
through typeinfo `0x17c7b20` to `ubiservices::JsonWriter`, and `0x17c4368` points
through `0x17c7af0` to `ubiservices::Json`. This identifies helper objects used
inside the handler; it does not validate Ghidra's destructor label for the entire
response-processing routine.
