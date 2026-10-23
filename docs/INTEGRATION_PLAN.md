# From function matches to an integrated build

The exact-code report currently measures isolated function reconstruction.
`tools/verify.py` compiles object files and resolves each credited function's
relocations against checked original addresses. It does not link those
objects into a complete executable. Whole-program data matching, startup and
runtime validation remain separate work.

## First integration boundary: HTTP response processing

The October 23, 2026 manifest audit, including `sdk_http_response_value`,
selects builds whose sources start with `src/SdkHttp` or `src/SdkWebSocket`.
Their 17 credited functions explicitly bind to 28 distinct known function
addresses. Sixteen addresses have a matched provider; twelve do not:

`0x36ea0`, `0x3e280`, `0x46d50`, `0x67840`, `0x840f0`, `0x84980`,
`0x14ef20`, `0x160d50`, `0x1676f0`, `0x167d70`, `0x194bc0`, `0x701100`.

These are direct function bindings present in the recipes. The count excludes
virtual calls, unrecorded object-file dependencies, external targets outside
the FDE inventory, and data references. A matched provider is not evidence
that its current source declaration is compatible with every caller.

The immediate integration work is:

1. Reconcile shared text, owner, header, parsed-response and response-value
   declarations, with explicit argument and return conventions. The recently
   corrected status argument to `ResultFromStatus` demonstrates why this is
   necessary even after an isolated caller matches.
2. Recover the remaining direct helpers and identify virtual methods through
   their original vtables. Keep synthetic behavior-fixture helpers identified
   separately from production implementations.
3. Build a linked module using explicit providers for every dependency and
   inspect actual linker output. Exercise calls between reconstructed functions
   while retaining complete original-versus-compiled verification.
4. Expand the linked boundary toward startup and game systems, reconstructing
   required globals, tables, relocations and initialization. A full executable
   needs its own build, binary comparison and runtime validation.

## Symbol identity needs explicit treatment

Some source symbols intentionally match multiple original function addresses.
For example, one emitted map-destruction helper is credited at both `0x1622a0`
and `0x163db0`, and the new insertion helper at both `0x167580` and `0x167c00`.
Their binding contexts are recorded separately. These are legitimate isolated
matches, but the original copies and their call targets must be represented
deliberately in a build that reproduces the original layout. Concatenating
objects or allowing a linker to coalesce template definitions is not proof
of that layout.

Progress toward these integration steps must be reported separately from
exact executable-byte coverage. Neither the dependency audit nor this plan
claims a linked module or a bootable game.
