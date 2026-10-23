# Shared request-header setter

`src/SdkRequestHeader.cpp` reconstructs the complete 212-byte function at
0x837b0. It looks up the supplied header name in the tree at request offset
0x18 and assigns the supplied SDK text value to the node's owner at offset
0x28. The header-container view begins at request offset0x10.

Assignment preserves the original same-owner check, atomic retain/recheck
loop, owner exchange, reference decrement and disposal call. Names describe
reconstructed ABI views; they are not recovered original declarations.

Clang7.0.1 and8.0.1, O2 andO3, tail duplication thresholds2 and4 all reproduce
this function. The published recipe uses Clang8 O2 threshold4 and verifies
all bytes plus the LookupHeader and Piecewise bindings.
