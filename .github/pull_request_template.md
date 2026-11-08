## What this adds

<!-- One line per new exact match: address, size, symbol, build. Mention functions you parked with a "Not yet matched" note. -->

## Checks

- [ ] `python tools/fn.py check <builds I changed>` passes
- [ ] `python tools/fn.py check gameplay` passes (if I changed a shared header)
- [ ] `python tools/verify.py --only <build>` passes for each build I changed
- [ ] Every new function has a comment with its slot or address and what it does
- [ ] Names come from evidence (RTTI, type tables, callers); provisional names say so
- [ ] No original game files, assets, SDK files, compilers or build products are included
- [ ] `progress/` is not edited by hand

## Uncertain assumptions

<!-- Class layouts, field types or spellings whose only support is that they match. -->

## AI assistance

<!-- Was an AI used, and how? Reviewers check generated claims like any others. -->
