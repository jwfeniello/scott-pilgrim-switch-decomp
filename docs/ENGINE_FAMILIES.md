# Engine families: verified checkpoints

Twenty new families add 3,750 complete original functions / 500,192 bytes.
The project now verifies 8,336 unique functions / 1,659,968 bytes / 10.123815%
of the original 16,396,664-byte `.text`. This is a historical checkpoint;
the final [15% milestone](FIFTEEN_PERCENT.md) is now reached.

| Behavior | Exact functions | Exact bytes |
| --- | ---: | ---: |
| Callback cloning | 726 | 46,464 |
| C++ member-function-pointer invocation | 689 | 19,292 |
| Call a destructor, then tail-call deallocation | 1,193 | 28,632 |
| Callback owner destruction/free | 271 | 26,016 |
| Factory construction through a static context resolver | 140 | 25,760 |
| Guarded callback dispatch, direct and temporary arguments | 481 | 146,224 |
| Reference-owning members and reference sets | 250 | 207,804 |

## Recovered behavior

Callback cloning allocates a 40-byte polymorphic record from a context pool,
initializes its vtable and copies the bound owner, invoke field and real 16-byte
C++ member-function pointer. Member invocation uses the ordinary C++ `->*`
operator, retaining the ARM64 member pointer's virtual encoding and adjustment.
The deleting wrappers call an object-specific destructor and then deallocate;
the original deallocation target `0xfa3b40` is identified by the PLT as `_ZdlPv`.
Their referenced destructor bodies receive no credit from the wrappers alone.

Owner cleanup resolves an allocator, calls the object's virtual destructor and
frees it. The static-context factory family shares the earlier reconstruction's
allocation, temporary ownership and indirect-return behavior, with a direct
context-resolver call replacing the virtual call.

Both dispatch families check a host flag or a cached enabled setting, invoke an
optional bound callback, reload the host and dispatch through its nonnull handle.
Each function supplies its own original hash. The guarded settings constructor
zeros its observed fields, writes `UNKNOWN PROJECT NAME`, sets a count to 13 and
stores the observed four-word limits. Vector views retain the two separate
eight-byte name writes; joining them into one wider copy changes the code.

The temporary-argument variant uses two opaque temporary views with distinct
lifetimes. Their original complete types and the called helper's complete ABI are
unknown. Keeping both alive through the final call produced 300 correct prefix
bytes but omitted one original unwind call; that candidate was rejected. The
scoped version reproduces all 304 bytes, including both unwind paths. Exact code
does not establish a recovered original declaration or full-game behavior.

Reference-owning destructors use relaxed atomic decrements, destroy last-reference
objects, choose their allocators and remove handles from a mutex-protected
4,003-bucket tracking map. The class-member families model the actual ownership
field offsets, including gaps between fields, using normal C++ members. Members
are destroyed in reverse declaration order, then the base destructor is called.
The separate reference-set families contain one, four, six, eight or ten slots.

The reference member destructors range from 372 to 3,612 bytes. Every complete
function is independently compiled and compared. Generated vtables, base
destructor bodies, data, and RTTI/class identities receive no additional credit.
All method/type labels and complete class layouts remain provisional ABI views.

## Compiler and verification findings

The new callback and reference families use public Clang 8.0.1 with `-O2`,
`-mcpu=cortex-a57`, `-fno-strict-aliasing`, `-fomit-frame-pointer` and `-fno-pic`.
The static factory variant retains `-fPIC -fno-omit-frame-pointer`.
Exact flags and bindings are in `config/builds.json`.

An ownership member's destructor must preserve its `noexcept` boundary.
Destroying it from the parent destructor body instead of as a member adds
unwanted base-cleanup paths. The mutex operations also use nonthrowing
declarations in the matching view. These choices restore the observed distinct
termination paths without adding or deleting compiled instruction bytes.

`tools/discover_engine_families.py` compiles and fully checks a reference before
searching candidates. Masks apply only to discovery. Real per-function hashes
and member offsets become C++ template inputs. Promotion requires every compiled
body to match every byte of the complete original FDE after standard relocations
and rejects overlap with existing credited addresses.

All 20 batch builds repeat identically. Wrong initial fields, owner adjustment,
destructor omission, allocation sizes, allocator indexes, dispatch hashes and
atomic memory order reject every corresponding function. The saved validation
contains the source/include/header hashes, object hashes and rejected counts.
The full project rebuild compiles all 765 configurations and confirms all 8,336
original-byte comparisons. No complete linked game or data matching is claimed.

## Reproduction

```powershell
python tools/test_engine_family_build.py --original "C:\path\Scott_Switch.elf" --clang8 "C:\path\llvm801\bin\clang++.exe" --build-dir "D:\scott-build\engine-families"
python tools/verify.py --original "C:\path\Scott_Switch.elf" --clang7 "C:\path\llvm701\bin\clang++.exe" --clang8 "C:\path\llvm801\bin\clang++.exe" --lld8 "C:\path\llvm801\bin\ld.lld.exe" --build-dir "D:\scott-build"
python tools/report.py --out build/report.json
```

Discovery profiles are recorded in `config/engine_family_discovery.json`.
Use `--family ID` to select one; `--promote` updates source inputs and recipes only
after all selected complete bodies pass. Refresh the full snapshot afterwards.
See `progress/engine_family_validation.json` for the repeat/negative controls.

## Additional accessor and container checkpoint

The next checkpoint is 20,649 functions / 1,838,940 bytes / 11.215330% after a full 778-configuration rebuild. Twelve further template families add 2,204 functions / 101,516 bytes: typed property access at three descriptor offsets, type payload checks, static address getters, virtual result forwarding, framed destruction, hash-table capacity/rebuild, and two/three/four-identity tests. Together with the 10,109 leaf matches, this adds 12,313 functions / 178,972 bytes beyond the 10.123815% checkpoint. All 32 template-family repeat builds agree and their wrong-source controls reject every instance. Hash capacity and rebuild use public Clang 8 at -O3; their control flow follows libc++ hash-table algorithms, with reconstructed allocation bindings. Only whole original extents are counted.

## Ownership and buffer checkpoint

The ownership checkpoint rebuild checks 26,244 distinct functions / 2,196,936 bytes /
13.398677% through 807 build configurations. Nine more template families add
421 functions / 84,552 bytes beyond the 11.215330% checkpoint: component-slot
assignment with an indirect nontrivial result, reference-vector destruction,
layered reference ownership, wide-zero buffer destruction/deallocation,
optional listener ownership and shared-count release.

The optional owner destroys its initialized listener first, then releases its
owned pointer through the observed allocator. Automatic C++ member destruction
also recreates the exceptional cleanup and termination paths. Related byte-load
and ADD-immediate fields must agree on the same member layout; inconsistent
instances are rejected. Wide-zero buffer resets require an eight-byte-aligned
128-bit store view; scalar source zeros generate different code. Shared-count
release uses an acquire/release atomic decrement and an independently bound
weak-release helper. The affected original helper bodies receive no credit here.

All 41 discovered family batches repeat identically; changed flag tests, atomic
orders and buffer zeros reject every affected body. See the merged
`progress/engine_family_validation.json`. Complete original class identities,
vtables/data matching and linked-game behavior remain unresolved.

## Fifteen percent milestone

The final full rebuild verifies 27,388 functions / 2,462,776 bytes / 15.019982%
through 891 source builds. The engine-family control receipts now cover 56
families. Public library algorithms and generated ABI views have separate repeat
and source-change rejection receipts. See [the milestone findings](FIFTEEN_PERCENT.md)
for the additions, compiler/header observations and unresolved declarations.

## Template instance families (22% batch)

Same-shaped functions are reproduced from one template per family,
instantiated once per original address. Each instance's key is that address,
and an instance is credited **only at its own address**. For the `std::function`
family, the key is the destructor's address, and the other slots of the same
vtable are credited to the same instance. Identical bodies elsewhere are not
credited to an unrelated instance's symbol, and addresses that other builds
already credit are skipped. These families add **1,786 complete functions /
164,228 bytes**:

| Source (`src/`) | Shape | Functions | Bytes |
| --- | --- | ---: | ---: |
| `ForwardingFunction*` | libc++ 4 `std::function` slots for a functor holding captured pointers and another `std::function<void()>` | 230 | 18,360 |
| `FunctionClone8*` | `Clone()` of a polymorphic callable holding one pointer | 88 | 4,996 |
| `EchoEventDestructor*` | `storm::echo` event destructors (complete and deleting) that free a heap text buffer | 71 | 4,688 |
| `OwningEventDestructor*` | Event destructor deleting one owned object; storage freed through `Storm_Free` | 52 | 4,368 |
| `StormTypeFactory*` | `storm::DynamicTypeFactory<T>::Create`: Storm allocation of a value-initialized product | 46 | 4,048 |
| `HandlerSlotSwitch*` | Swaps a member-function-pointer handler, notifying codes 0x2711–0x2713 | 18 | 3,600 |
| `StormCopyClone*` | `Clone()` through Storm allocation and an out-of-line copy constructor | 43 | 3,440 |
| `SmallPoolDestroy*` | Destroys a pool singleton and returns it to the allocator manager | 33 | 3,432 |
| `OnyxArrayDestructor*` | Allocator-managed array destructor | 34 | 3,128 |
| `AllocatorTreeDestroy*` | Recursive tree destroy through the allocator manager | 31 | 3,100 |
| `SessionMessageDestructor*` | `storm::echo` session message destructors with a polymorphic payload | 34 | 2,856 |
| `StormDeleteHolder*` | Destroys a held object and frees its most-derived storage | 32 | 2,432 |
| `StormLayeredClone40*`, `StormLayeredClone56*` | Three-level copy-construct clones (40- and 56-byte events) | 25 | 3,680 |
| `HudPoolRelease*` | Clears a HUD pool slot bit, then destroys the object | 32 | 2,048 |
| `OwnedBufferDestructor*` | Deleting destructor that frees one owned buffer | 19 | 1,824 |
| `DareTreeDestroy*` | Recursive tree destroy through the Dare allocator | 18 | 1,728 |
| `PolyArrayOwnerDestructor*`, `PlainArrayDestructor*` | Array destructors that clear the size and free the data | 36 | 3,084 |
| `DescriptorEquals*` | Chained equality of a base and two net values | 17 | 1,360 |
| `SharedEventDestructor*` | Destructor releasing a libc++ `shared_ptr` member | 11 | 1,144 |
| `StormOperatorDelete*`, `StormHeaderDelete*`, `NetPropertyDelete*` | Static `operator delete` thunks freeing through `Storm_Free` (with or without an 8-byte header) | 347 | 6,388 |
| `ComponentSwitchDisable*`, `ComponentSwitchEnable*` | `Onyx::Switch` unregister/register of a member-function callback with every target | 28 | 9,760 |
| `ServiceComponentFactory*` | Component factory: registry allocator, base constructor, pool array and service members | 14 | 3,360 |
| `ResultDispatch*`, `ResultForward*` | Double dispatch and one-argument forwarding to a virtual slot returning a non-trivial result | 222 | 4,176 |
| `NetCopyFactory*`, `NetDefaultFactory*` | Storm factories using a placement `operator new(file, line)` with its matching delete | 22 | 2,684 |
| `SpawnerSerialize*` | Spawner serialization: base, two members and a `u32` through the stream | 12 | 1,488 |
| `AsynchGenericSignal*` | Signals an asynchronous callback with value 4 | 32 | 1,408 |
| `DareListDestructor*` | Circular list destructor returning nodes through the Dare allocator | 11 | 1,232 |
| `NetworkStateResult*` | Returns a result, or the pending one while the network state is 3 | 22 | 704 |
| `SingleSwitchDisable*`, `SingleSwitchEnable*` | Switch unregister/register for one optional target (enable then refreshes) | 25 | 7,744 |
| `RegisteredTriggerDestructor*` | Destructor of two registered owned objects: unregister if flagged, destroy, free | 15 | 4,080 |
| `ComposeDestructor*`, `HandleHolderRelease*` | Release a member component handle, disposing it at the last reference (see [handle disposal](GAMEPLAY_COMPONENTS.md#handle-disposal-and-the-empty-bucket-path)) | 21 | 7,740 |
| `ColorPropertyRead*` | Reads a four-byte colour material property through the stream | 12 | 2,544 |
| `ComponentSwitchDestructor*` | Switch owner destructor: clears the target, notifies listeners, then tail-calls the base destructor (see [switch owner destructors](GAMEPLAY_COMPONENTS.md#switch-owner-destructors)) | 9 | 6,696 |
| `EchoFieldSerialize*` | `storm::echo` event `Serialize`: base fields, then one named field (`peerId`, `srefid` or `handlerRefId`) through the stream visitor | 36 | 3,600 |
| `CircuitFindProperty*` | Circuit reflection lookup over the guarded property lists; built [two-step](COMPILERS.md#game-code--o3-optimization--o2-code-generation) | 14 | 3,528 |
| `TypeRegistrationOnceGame*` | Game-side copies of one-time type registration (frame pointer omitted) | 14 | 3,192 |
| `ComposeRenderUnitDestructor*` | `Compose` destructor over a component whose render-unit member frees an allocator-owned buffer | 6 | 2,736 |
| `TypeRegistryMap*` | SDK type registry: check a lazily registered type, create a libc++ 4 `unordered_map` with the Storm allocator, insert the type hash (`-O3`, unwind tables) | 21 | 13,484 |
| `DareFlyweightManager*` | `Dare::FlyweightManager<T>` deleting destructors: trim the slot array, return it to the Dare allocator | 20 | 2,240 |
| `EchoTypeDescriptor*` | `storm::echo` event type descriptor: guarded static built from category, kind and parent (`-O3`, unwind tables) | 19 | 2,128 |

The code shapes pin down several details:

- **`std::function` slots.** `ForwardingFunction` explicitly instantiates the
  vendored libc++ 4 `__func` template.
- **Reference counting.** In the `shared_ptr` release, `__release_shared` is
  inlined, as in libc++ 5 and later. `SharedEventDestructor.h` therefore uses a
  small ABI view of the control block instead of the libc++ 4 headers.
- **Constructor order.** The Storm factory product zeroes the object, loads its
  type, then writes the fields and finally the vptr. That only happens with an
  implicit derived constructor over a base whose default constructor delegates.
- **Callback records.** The switch callback record is constructed with only its
  member pointer, and `invoke`/`owner` are bound after the handle is taken. The
  registry call receives a copy of the target loaded before the call.
- **Return slots.** The dispatch and forward thunks avoid `x8`, so their result
  is returned through the indirect-result register.
- **Storm settings.** The Storm clones and factories need `-fPIC` (vtables come
  through the GOT). The 56-byte clone also needs `-mno-implicit-float`, like the
  rest of the SDK region.

Class names are working names; the original types behind each instance are not
identified.
