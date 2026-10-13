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


extern "C" uint64_t RecoveredCall_3e1b70_0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_3e1b70(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 24));
    value_x19 = value_x1;
    if (uint32_t(uint32_t(field0)) == 0) goto block_4;
    goto block_3;
}
block_3: {
    *reinterpret_cast<uint8_t*>((value_x19 + 16)) = 0;
    goto block_4;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    value_x0 = field1;
    if (field1 == 0) goto block_8;
    goto block_6;
}
block_6: {
    *reinterpret_cast<uint64_t*>((value_x19 + 8)) = value_x0;
    return;
}
block_8: {
    const uint64_t result0 = RecoveredCall_3e1b70_0(value_x19);
    *reinterpret_cast<uint64_t*>((value_x19 + 8)) = result0;
    return;
}
}




extern "C" __attribute__((noinline)) void RecoveredLeaf_4f41b0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(value_x0);
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x0 + 40));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    value_x19 = value_x0;
    value_x8 = field3;
    if (uint32_t(uint32_t(field2)) != 0) goto block_13;
    goto block_7;
}
block_7: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x8 + 32));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field4)(value_x19);
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((value_x19 + 40));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    value_x8 = field6;
    if (uint32_t(uint32_t(field5)) == 0) goto block_7;
    goto block_13;
}
block_13: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x8 + 24));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field7)(value_x19,field7);
    return;
    __builtin_unreachable();
}
}
