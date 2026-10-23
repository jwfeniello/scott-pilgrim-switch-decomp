# Gameplay statistics reveal life-transfer semantics

The events in the previously recovered nearby-player recovery path are wired
to **`SPTG::GameStatisticsBureau`**. Its original strings identify events 19/20
as `lifetakenbyplayer` and `lifetakenfromplayer`. Combined with the producer's
decrement of the candidate's `+0x870`, this establishes a life-transfer recovery
path. The original C++ field name remains unknown.

This also distinguishes **life transfer** from another mechanism: event 27 is
named `timesreanimatedbyplayer`. The preceding PLAYER_REVIVAL work used
"revival" as a broad descriptive term; it did not prove that all recovery
mechanisms are the same. The caller of event 27 is still to be traced.

## Original constructor and dispatch chain

Factory `0x7613c0 / 60` allocates 560 bytes and calls constructor
`0x79bc80 / 9028`. Running their normal path produces vtable `0x184d6f0`,
RTTI `0x184d840`, type name `N4SPTG20GameStatisticsBureauE`.
The existing registration catalog associates this factory with ID `0x1f171d29`;
the singleton accessor `0x772920` uses that same ID on its uncached path.
This batch tests the accessor's populated-handle path, not cache-miss resolution.

The constructor installs **28 callbacks in a 32-slot table** at bureau `+0x98`:
events 1 through 28 are populated; 0 and 29 through 31 are null. It allocates
temporary 40-byte member-function wrappers, copies them using original helper
`0x7a1f10`, then destroys/frees the temporaries. The harness verifies 56 wrapper
allocations, 28 distinct temporary frees, and every installed callback's receiver,
trampoline and member-pointer layout. The report lists all 28 targets.

For tested events the following original code executes as one call chain:

```text
player virtual +0x4f8: 0x986410
  -> singleton accessor 0x772920(player + 0x7a8), cached handle
  -> bureau table[event], at +0x98 + event*8
  -> installed wrapper trampoline 0x79e020
  -> installed statistics handler, receiver = bureau
```

The dispatch wrapper does not bounds-check the event ID or null-check the table
entry. Tests use valid installed events. This is not an assertion that arbitrary
event numbers are safe inputs.

## Verified meanings

| Event | Original handler | Original statistics key | Update |
| --- | --- | --- | --- |
| 11 | `0x79ef90` | No key lookup | Set bureau byte `+0x1a1 + playerIndex` to 1 |
| 17 | `0x79f0e0` | `damagedealt` | Add message's 32-bit payload at `+0x10` |
| 18 | `0x79f170` | `itemsbought` | Add 1 |
| 19 | `0x79f1f0` | `lifetakenbyplayer` | Add 1 |
| 20 | `0x79f270` | `lifetakenfromplayer` | Add 1 |
| 25 | `0x79f430` | `objectsthrown` | Add 1 |
| 26 | `0x79f4b0` | `timesgotkilled` | Add 1 |
| 27 | `0x79f530` | `timesreanimatedbyplayer` | Add 1 |
| 28 | `0x79f5b0` | `timestaunted` | Add 1 |

The statistics updates are gated by equality between the subject player's index
at `+0x1508` and the selected context's index at `+0x182c`. Context is obtained
through `0x777710(bureau+0x88)`. The harness stubs that accessor; it does not
establish all runtime rules for choosing the selected context.

When eligible, a handler obtains the record by its original string, writes its
kind ID, increments its 32-bit amount (wrapping), sets record byte `+0x18`, and
stores the key/attribute pointers. Attribute is `damage` for event 17 and `amount`
for the others. Lazy statistics-container initialization is also exercised through
a checked stub when the global begin/end pointers compare equal.

### Connection to life transfer

The scan documented in [PLAYER_REVIVAL](PLAYER_REVIVAL.md) sends event 11 to the
candidate, decrements its `+0x870` if nonzero, sends event 19 to that candidate,
and sends event 20 to the recovering player. Therefore the apparently ambiguous
key names have concrete subjects: the player losing a life receives event 19;
the player recovering receives event 20. Do not reverse those based on English
wording alone.

The installed event-11 handler **does not change the player's life counter**.
It only marks the bureau byte. Earlier tests deliberately allowed counter-changing
callback stubs to prove that the producer reads the counter after dispatch; those
were adversarial fixtures, not a claim that the default event-11 handler mutates it.
Runtime callback replacement has not been ruled out.

## Verification and limits

**3,240 bounded comparisons pass**, traversing the original dispatch chain for
nine events, four subject indices, matching/mismatching context indices, amount
and payload values including `0xffffffff`, and both container initialization
branches. Five wrong-source controls reject: reversed context gating, wrong kind,
missing increment, ignored damage payload, and wrong player-mark event.

The comparisons check bureau memory, the full 32-byte record, unchanged player
memory, original key/attribute strings, container selection, and call order.
Full original handlers and the cached wrapper/accessor/trampoline execute.
Constructor tests execute normal control flow but stub allocators, base/subobject
initialization, mutex, clock and destruction effects. They do not cover constructor
exception handling or claim a reconstruction of all 9 KB of that function.
Other event targets are mapped, not behavior-tested by this tool.

```text
python tools/compare_life_statistics.py --original <original.elf> --clang8 <clang++.exe> --build-dir <temporary-directory>
```

[Readable model](../src/wip/GameStatisticsLifeEvents.cpp) ·
[Test receipt and event map](../progress/life_statistics_behavior.json)

No original instructions or game assets are published. This is behavioral and
semantic progress; it adds no exact-match credit.
