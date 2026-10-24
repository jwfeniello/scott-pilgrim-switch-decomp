# Circuit factories and property reflection (`0x667260`)

[`src/MetadataRegistry.cpp`](../src/MetadataRegistry.cpp) reconstructs the
complete 47,908-byte static initializer at `0x667260`. It is now an exact match
(build `metadataregistry`, Clang 8.0.1). This is engine registration
infrastructure: it registers Onyx gameplay factories and the member-property
reflection lists used by the gameplay circuit system.

## What it does

- Allocates a 23-element (92-byte) default flag vector, copies the defaults into
  it, and registers its destructor with `__cxa_atexit`.
- Inserts 160 guarded factory records into 12 engine hash tables. Each table has
  100 buckets, and insertion uses the record's current ID modulo 100.
- Constructs 41 reflection records and prepends them to 15 guarded property
  lists. Twenty-five records describe member variables and 16 describe getter
  and/or setter member functions.

The owners recovered from property RTTI include the `Onyx::Gameplay::Circuits`
compare, compute, if and switch circuits, the camera, scale and transform
manipulators, constant publishers, and lerped publishers for colour, float,
unsigned integer and Vector3 values. Property names come from original strings,
for example `FOV`, `WorldPosition`, `From`, `To`, `AutoToggleDirection` and
`Duration`.

The registration calls, declarations and accessor list
(`src/metadata_*.inc`) are generated from the original executable and its
relocation-backed RTTI. The recipe binds 669 external symbols by address and
links 12 compiler constant-pool literals only after checking them against
immutable original data.

## Records

- **Variable record (32 bytes):** vtable, next, name, then adjacent 32-bit flags
  and member offset. Clang combines the last pair into one 8-byte literal
  load and store.
- **Function record (64 bytes):** vtable, next, name, 32-bit flags, then two
  real nonvirtual C++ member pointers (getter and setter). Each member pointer
  is a function address plus a zero adjustment. Ordinary member-pointer
  assignments reproduce the original mixed SIMD/scalar stores. The opaque
  `AccessorHost` keeps that ABI; the owner-specific method signatures are not
  reconstructed.

## What closed the last 13 words

The previous candidate built one record, the read-only `Value` property of the
lerped unsigned-integer publisher, with its own field order. That got within
13 instruction words. The other three lerped publishers build the same record
and already matched with the shared order, which suggested a context effect
rather than different source.

Machine IR dumps (`-print-machineinstrs`) showed that the scheduled order of
that block already equalled the original. The difference was register
allocation: the list's guard address and its page address traded `x13` and
`x14`. That depends on live-interval sizes, which earlier stores can shift
without changing any instruction.

A parallel search then compiled all 720 orders of the six function-record
stores, applied to **every** function record. Exactly one order is exact:

```cpp
property.next = nullptr;
property.name = name;
property.flags = flags;
property.vtable = vtable;
property.getter = getter;
property.setter = setter;
```

The special-case helper is gone, and all 16 function records share this order.
The order is a reconstruction that reproduces the original. It is not recovered
source text.

## Compiler flags

The recipe uses `-mllvm -likely-branch-weight=1048575`. Clang lowers a real
C++ static-local guard with a 1:1,048,575 branch weight, while
`__builtin_expect` defaults to 1:2,000. The explicit guards here need the
static-local weight. Without it, register allocation changes across thousands
of instructions. It is a branch-probability setting, not a comparison mask.

## Checks and limits

- The public verifier compares all 47,908 bytes after standard relocations.
- In the private workspace, a bounded ARM64 emulator check passes 20 fixtures:
  cold start, repeated calls, preinitialized and alternate tables, guard races
  and existing list heads. It checks all 160 factory insertions and 41 property
  insertions per call, final memory, external calls and preserved registers.
  This is not full-game execution or a concurrency proof.
- Of the 160 factories, 89 have class identities proven from returned-object
  vtables and RTTI; 71 remain unresolved. Naming a factory does not reconstruct
  its body.
