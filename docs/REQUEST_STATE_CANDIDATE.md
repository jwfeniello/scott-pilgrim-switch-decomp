# Unmatched request-state reconstruction

`src/wip/RequestState.cpp` reconstructs the routine at `0x4d7390`. It is a
candidate for a repeated 688-byte family, not an exact match. The current
Clang 8.0.1 build has the original length and **19 differing instructions**
after checked external linking. Those differences address different stack
slots. No instruction is masked or patched, and this work adds **zero exact
bytes**. Other family members have not been validated with this candidate.

## Behavior recovered from the original

- Either byte flag at request offsets `0x47` and `0x44` causes an early return.
- The operation pointer is at `0x200`, and its state is at offset `0x10`.
- States 3 and 4 invoke request virtual slot `0x28`, copy and log a response,
  construct an event carrying a signed 16-bit response code, and invoke a
  callback through slot `0x20`.
- State 2 invokes request virtual slot `0x20` and dispatches a status-1 event.
  Other states return without dispatch or task cleanup.
- Shared-control copies increment the 64-bit owners field at `+8` with relaxed
  atomics. Release decrements with acquire-release ordering; an old value of
  zero triggers virtual disposal and weak-reference release. A local copy of
  the control pointer survives those calls.
- The event payload receives the task pointer before dispatch. A non-null task
  is detached, its callback removed, and the request's task pointer cleared.

Names such as Request, Event, and Operation are descriptive ABI views. This is
service/request code; it is not identified as the main gameplay engine. The
callback return type remains unresolved. A provisional 64-byte return object
models its indirect return-storage calling convention, but the fixture only
writes 16 bytes of that storage and does not prove the original return size.

The source uses a switch for the state cases, direct callback dispatch, and
unwind-table generation. These reproduce the original branch form and prologue;
stack placement still differs. Experimental return-storage sizes, alternative
local declarations, compiler profiles, and stack-coloring settings have not
produced a complete match.

## Bounded validation

`tools/compare_request_state.py` executes the original and the compiled candidate
at the same address in separate reset fixtures. **480 cases** compare call order,
status/token/owner arguments, request fields, control counters and payload memory.
They cover five states, all four combinations of the two early-return flags,
null/non-null tasks and owner controls, two initial owner counts, two signed
response-code extremes, and callback-triggered disposal. The harness checks
stack balance and preserved registers and poisons caller-saved registers at
stub calls.

Three separately compiled defective implementations are rejected: wrong state
selection, disposal at the wrong counter value, and failing to clear the task.

Response copying, logging, event construction, callback execution, weak release,
and task services are deterministic synthetic stubs. In particular, the fixture
constructor supplies a separate event control block; it does not validate the
real event constructor's ownership effects. Exception handling, concurrency,
full SDK behavior, and whole-game execution are not established.

```text
python tools/compare_request_state.py --original <original.elf> --clang8 <clang++.exe> --build-dir <temporary-directory>
```

The optional Unicorn dependency is needed to run this research check. Its receipt
is `progress/request_state_behavior.json`; exact totals remain exclusively in
`progress/verified.json`.
