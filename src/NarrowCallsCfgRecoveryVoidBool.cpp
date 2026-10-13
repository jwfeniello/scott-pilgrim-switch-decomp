// Recovered field operations and forwarding ABI views. Original complete signatures remain unknown.
#include <stdint.h>
typedef unsigned char ByteVector16 __attribute__((vector_size(16),aligned(1)));
typedef unsigned char ByteVector8 __attribute__((vector_size(8),aligned(1)));
#ifdef LEAF_NEGATIVE_CONTROL
extern "C" void LeafAddedSideEffect();
#define LEAF_CHECK LeafAddedSideEffect();
#else
#define LEAF_CHECK
#endif


extern "C" bool RecoveredCall_cb5f00_0(uint64_t);
extern "C" void LeafTarget_cb5f00_7(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cb5f00(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint64_t result0 = RecoveredCall_cb5f00_0(value_x0);
    value_x19 = value_x1;
    value_x20 = value_x0;
    if ((uint32_t(result0) & 0x1ull) == 0) goto block_8;
    goto block_4;
}
block_4: {

    return LeafTarget_cb5f00_7(value_x19,(value_x20 + 160),uint32_t(3));
}
block_8: {

    return;
}
}
