# SDK result layout and matchmaking error descriptions

The first IDA comparison pass adds five complete matches, totaling 1,696 bytes.
Two previously matched generated routines now use the same typed result/string
layout; those replacements add no coverage.

| Original address | Bytes | Recovered behavior | Coverage change |
| --- | ---: | --- | --- |
| `0x4ce310` | 1,292 | Matchmaking error-description lookup | New |
| `0x4eb360` | 108 | Construct owned text from a C string | New |
| `0x4eb410` | 108 | Second identical text-construction body | New |
| `0x4eb480` | 108 | Copy owned text | New |
| `0x4f5ff0` | 80 | Compare result domain and code | New |
| `0x4f5ce0` | 76 | Copy result fields and owned domain | Typed replacement |
| `0x4eb5e0` | 20 | Destroy owned text | Typed replacement |

Sources are [MatchmakingErrorDescription.cpp](../src/MatchmakingErrorDescription.cpp),
[SdkResultSupport.cpp](../src/SdkResultSupport.cpp), and
[SdkResultCopy.cpp](../src/SdkResultCopy.cpp). Complete bodies, call bindings,
and the 24 description literals pass the existing strict verifier. The copy
constructor is compiled separately from the string constructor to retain the
original external call. No instruction patching or partial-function credit is used.

## Shared layout

[SdkResultAbi.h](../src/SdkResultAbi.h) records a 40-byte result view:

| Offset | Field | Evidence |
| --- | --- | --- |
| `0x00` | 16-bit result code | Copy, equality, and request-state readers |
| `0x08` | Pointer, meaning unresolved | Copy and constructors |
| `0x10` | 32-bit field, meaning unresolved | Copy and constructors |
| `0x18` | Owned domain string | String copy/destruction and equality |
| `0x20` | Error flag, stored as a byte | Copy and domain/code constructors |

The string object stores one pointer. Its allocation begins four bytes before
the character data; the prefix stores the length including the terminator.
Construction uses 32-bit size arithmetic, alignment 4, and allocation flag
`0x41500000`. The constructor at `0x4f5ef0` compares the domain with `Core` and
sets the trailing flag when the domain differs or the code is nonzero.
These observations support the field descriptions, but do not recover the
original class or member names. The `SdkResultAbi` namespace is descriptive.

The error-description function compares against 24 constructed results and
returns the corresponding existing description string, or null if none matches.
The original strings identify errors such as unknown sessions, unavailable
slots, rejected tickets, and privilege failures. It performs no logging itself.
Factory names in the source follow these strings; their original C++ namespace
and names are not established.

## Correction to request-state research

The previous request-state candidate allocated only 32 bytes for each response
and called the description helper `LogResponse`. The original copy constructor
also writes byte `0x20`, so that declaration was incomplete. The candidate now
uses the shared 40-byte layout and calls `DescribeMatchmakingError` with its
pointer return type. The original caller discards that return value.

The comparison fixture now copies the five observed fields, including the flag,
without copying padding. Its 960 cases cover both flag values, and all three
existing defective implementations are still rejected. The receipt includes
the shared header hash. External services remain synthetic stubs; this is not
whole-game, exception, or concurrent validation.

The corrected request-state function remains 688 bytes, with 41 differing
instruction words after linking, all involving stack placement. The former
incomplete layout had 30. The corrected declaration is retained because a
smaller difference count does not justify allocating too little storage.
The request-state family receives zero exact credit.

IDA now has descriptive labels and corrected prototypes for these seven routines
and the 24 error factories, plus shared result/text types. Comments distinguish
reconstructed labels from original symbols. The result-copy pseudocode now
expresses named fields and owned-string copying directly. The private IDA
database and pseudocode exports are not distributed.
