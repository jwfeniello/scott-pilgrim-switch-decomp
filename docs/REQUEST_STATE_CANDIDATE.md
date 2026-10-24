# Unmatched request-state reconstruction

`src/wip/RequestState.cpp` reconstructs the routine at `0x4d7390`. It is a
candidate for a repeated 688-byte family, not an exact match. The current
Clang 8.0.1 build has the original length and **41 differing instructions**
after checked external linking. Those differences address different stack
slots. No instruction is masked or patched, and this work adds **zero exact
bytes**. Other family members have not been validated with this candidate.

## Behavior recovered from the original

- Either byte flag at request offsets `0x47` and `0x44` causes an early return.
- The operation pointer is at `0x200`, and its state is at offset `0x10`.
- States 3 and 4 invoke request virtual slot `0x28`, copy a response and look up
  its error description (the returned pointer is discarded),
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
at the same address in separate reset fixtures. **960 cases** compare call order,
status/token/owner arguments, request fields, control counters and payload memory.
They cover five states, all four combinations of the two early-return flags,
null/non-null tasks and owner controls, two initial owner counts, two signed
response-code extremes, both values of the trailing error byte, and
callback-triggered disposal. The harness checks
stack balance and preserved registers and poisons caller-saved registers at
stub calls.

Three separately compiled defective implementations are rejected: wrong state
selection, disposal at the wrong counter value, and failing to clear the task.

Response copying, error-description lookup, event construction, callback execution, weak release,
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
candidate and its 960-case fixture. It does not establish a complete working
matchmaking subsystem or a complete original class declaration.

## Exact migration constructors

[MatchmakingRequestConstructor.cpp](../src/MatchmakingRequestConstructor.cpp)
adds complete matches for session migration (`0x4d7040`) and migration-success
reporting (`0x4d7f30`): **two functions / 1,064 bytes**. Each is 532 bytes;
all instruction bytes and checked relocation bindings agree with the original.

The constructors transfer the owned relayer into the base constructor, release
any remaining temporary ownership, initialize the request and operation, construct
an 80-byte context and its shared control block, and attach a callback if a task
is present. The task, shared ownership, operation, and disposer fields agree
with the independently matched destructor layout. The supplied callback handler
is stored separately from the relayer transferred to the base constructor.

Two ordinary source structures resolved the final code-generation differences:
callback attachment in an inline helper reproduces the original temporary stack
layout, and a move constructor initialized through `release()` clears the source
before storing the destination. A move that stores first gives the same function
length but a different instruction ordering. These choices establish a matching
reconstruction; they do not prove the original source used identical helpers.

These ABI views retain explicit vtable references and provisional field types.
They are not yet a portable implementation of the original class hierarchy.
The remaining constructor coverage is described below; the state-update family remains uncredited.

## Eight additional exact context constructors

[MatchmakingContextConstructors.cpp](../src/MatchmakingContextConstructors.cpp)
shares the recovered request setup while selecting a context layout through
`REQUEST_CONTEXT`. Its eight builds add **4,132 exact bytes**:

| Selection | Request | Address | Function bytes | Context bytes |
| --- | --- | --- | --- | --- |
| 1 | ticket cancellation | `0x4da7d0` | 512 | 32 |
| 2 | player profile storage | `0x4dc050` | 504 | 32 |
| 3 | session lock | `0x4ddd20` | 512 | 32 |
| 4 | reservations | `0x4e1420` | 512 | 48 |
| 5 | session leave | `0x4e8dc0` | 516 | 48 |
| 6 | host report | `0x4e2d90` | 532 | 72 |
| 7 | join report | `0x4e4820` | 532 | 72 |
| 8 | session update | `0x4e63b0` | 512 | 56 |

Context sizes, store widths, zero and invalid initial values, and self-referential
list links come from the original constructors. Field names whose semantics are
not established remain neutral. Request identities come from the existing RTTI
associations, not from guessing what the initialized fields mean.

All builds use Clang 8.0.1; selection 8 also uses `-mgeneral-regs-only` to reproduce
the original integer-register zero stores rather than vector stores. This is a
successful reconstruction profile, not evidence that the original build used
that flag. The verifier checks each complete body and its individual bindings.

The final three constructor matches are recorded below. All thirteen state updates
remain uncredited.
Explicit ABI layouts and vtable references still need integration into a complete
class model before this code can serve as portable matchmaking infrastructure.

## Complete constructor family

Three additional selections in `MatchmakingContextConstructors.cpp` finish the
thirteen-constructor family, adding **1,636 exact bytes**:

| Selection | Request | Address | Function bytes | Context bytes |
| --- | --- | --- | --- | --- |
| 9 | session join | `0x4e71e0` | 552 | 184 |
| 10 | session creation | `0x4df560` | 536 | 96 |
| 11 | ticket creation | `0x4d8a70` | 548 | 136 |

Selections 9 and 10 use integer registers for the context stores. Selections 9
and 11 also use LLVM's `-tail-dup-placement-threshold=4` to reproduce duplicated
shared-ownership assignment branches. These are matching build profiles, not
claims about the original compiler invocation.

The ticket context has an 80-byte member at offset `0x18` initialized by
`0x5430a0`; its list links start at `0x68`. The join context has an eight-byte
member at `0x38` initialized by `0x4eb3d0`, followed by a 120-byte member at
`0x40` initialized by `0x53ab90`. These member extents are ABI views inferred
from offsets and allocation sizes; their complete original declarations remain
unknown. Session creation initializes a root link to its own field at `0x50`.

Source initialization order matters even where the resulting field values agree.
For ticket creation, placing the 32-bit field initialization before the task
pointer store allows the compiler to emit the original post-indexed paired
store. In session creation, initializing the root link after the zero fields
reproduces the original store ordering. No instruction patches are used.

All thirteen constructors and all thirteen corresponding destructors are now
verified against their complete original bodies. This establishes request setup
and cleanup coverage, not a functioning matchmaking subsystem: the state-update
family and external operation implementations still require reconstruction.

## Exact result-event base initializer

[StormEventBase.cpp](../src/StormEventBase.cpp) adds the complete 64-byte
initializer at `0x5859f0`. Its vtable address point is `0x1833488`; the RTTI
pointer at `0x1833480` resolves to `0x1833b20`, whose name pointer resolves to
`0x13873ce`: `N5storm11ResultEventE` (`storm::ResultEvent`).

The recovered 48-byte layout initializes a 32-bit invalid value at `0x08`,
copies the global at `0x1916fa8` to `0x10`, clears `0x18`, copies the two
32-bit status fields to `0x20` and `0x24`, and copies the 64-bit token to
`0x28`. The field meanings at `0x10` and `0x18` remain provisional. The
initializer does not write the padding at `0x0c`.

The migration event constructor at `0x4d7a80` calls this initializer. An
independent typed reconstruction confirms its 356-byte body and by-value token
passing through its intermediate constructors, but that body was already
credited by `SharedCallbackConstruction.cpp`. It earns no additional coverage.
Only the new 64-byte base initializer is added to the manifest.

The neighboring derived initializer at `0x585990` remains unmatched. Neither
this match nor the eight-byte status reads resolves the state-update routine's
remaining stack-layout differences; those updates still receive zero credit.
