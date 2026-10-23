# Unmatched request-state reconstruction

`src/wip/RequestState.cpp` reconstructs the routine at `0x4d7390`. It is a
candidate for a repeated 688-byte family, not an exact match. The current
Clang 8.0.1 build has the original length and **30 differing instructions**
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

The request's class is identified by original RTTI as
`storm::mm::helpers::SimpleStormMatchmakingAsyncOperation<SimpleRdvSessionMigrateCallContext, SimpleRdvSessionMigrateCallResult>`
(the template arguments are also in `storm::mm::helpers`). Its vtable address
point is `0x1827560`, with this routine in slot `0x10`; RTTI is at `0x18275d0`.
The mapping tool verifies all thirteen related vtable/RTTI associations. Their
specializations cover migration, migration-success reporting, ticket creation
and cancellation, profile storage, session lock/create/update/join/leave,
reservations, and host/join reporting. The original method name is not recovered.

Constructor `0x4d7040` stores its supplied `storm::Handler*` at offset `0x1f8`.
The separately supplied owned `SimpleResultRelayer` is passed to the base
constructor; these must not be conflated. A compatible relayer's vtable slot
`0x20` is `0xc3a480`, which forwards to slot `0x18` (`0x4a3370` for that class).
That implementation writes two 32-bit result words through X8. This supports an
eight-byte indirect-result ABI view, represented with nontrivial copy semantics
in the candidate. It does not identify the actual dynamic handler supplied to
this request or prove the complete original C++ return declaration.

The earlier provisional 64-byte return buffer happened to produce only 19
instruction differences. It has been replaced by the evidence-backed eight-byte
view even though that currently produces 30 differences. The fixture now writes
eight bytes, and still passes all comparisons. A smaller diagnostic difference
alone does not justify keeping an unsupported type declaration.

The source uses a switch for the state cases, direct callback dispatch, and
unwind-table generation. These reproduce the original branch form and prologue;
stack placement still differs. Alternative local declarations, compiler profiles, and stack-coloring settings
have not
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

Type associations can be reproduced with:

```text
python tools/map_request_state_types.py --original <original.elf>
```

The receipt is `progress/request_state_types.json`. This adds no exact credit.

The optional Unicorn dependency is needed to run this research check. Its receipt
is `progress/request_state_behavior.json`; exact totals remain exclusively in
`progress/verified.json`.

## Exact destructor family

[MatchmakingRequestDestructor.cpp](../src/MatchmakingRequestDestructor.cpp)
reconstructs all thirteen corresponding complete destructors. The normal
`matchmaking_request_destructor` build now verifies **13 functions / 3,172 bytes**.
Each address is independently linked to its own vtable and callback bindings,
and the family agrees with the RTTI vtable associations above.

| Specialization | Destructor | Bytes |
| --- | --- | --- |
| session migration | `0x4d7260` | 244 |
| migration success report | `0x4d8150` | 244 |
| ticket creation | `0x4d8ca0` | 244 |
| ticket cancellation | `0x4da9d0` | 244 |
| player profile storage | `0x4dc250` | 244 |
| session lock | `0x4ddf20` | 244 |
| session creation | `0x4df780` | 244 |
| reservations | `0x4e1620` | 244 |
| host report | `0x4e2fb0` | 244 |
| join report | `0x4e4a40` | 244 |
| session update | `0x4e65b0` | 244 |
| session join | `0x4e7410` | 244 |
| session leave | `0x4e8fd0` | 244 |

The shared destructor detaches and clears a live task, clears the operation
pointer before invoking its disposer, destroys the callable using its inline
or allocated-object path, releases shared ownership, and calls the base
destructor. The missing-disposer path calls a non-returning failure routine.

A temporary passed by reference to the disposer is declared inside the non-null
operation branch. Declaring its lifetime before that branch produced the same
function length but misplaced its stack store by two instructions. The corrected
scope gives complete byte equality with ordinary Clang 8.0.1 O2, PIC, preserved
frame pointer and unwind-table generation. No assembly or byte patches are used.

This exact family is separate from the still-unmatched 688-byte state-update
candidate and its 480-case fixture. It does not establish a complete working
matchmaking subsystem or a complete original class declaration.
