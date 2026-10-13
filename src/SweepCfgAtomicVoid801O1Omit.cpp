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


extern "C" uint64_t RecoveredCall_1e61b0_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1e61b0_2(uint64_t);
extern "C" uint64_t RecoveredCall_1e61b0_3(uint64_t);
extern "C" void LeafTarget_1e61b0_32(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1e61b0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {

    if (value_x0 == 0) goto block_33;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    value_x19 = value_x0;
    value_x8 = field0;
    if (field0 == 0) goto block_14;
    goto block_4;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 40));
    value_x8 = field1;
    if (field1 == 0) goto block_9;
    goto block_6;
}
block_6: {
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(value_x8)(value_x19);
    if (uint32_t(result0) == 0) goto block_31;
    goto block_9;
}
block_9: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 120));
    value_x0 = field2;
    if (field2 == 0) goto block_14;
    goto block_11;
}
block_11: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const int32_t field4 = *reinterpret_cast<const int32_t*>((field3 + 48));
    const uint64_t result1 = RecoveredCall_1e61b0_1(value_x0,field4);
    goto block_14;
}
block_14: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x19 + 120));
    value_x0 = field5;
    if (field5 == 0) goto block_17;
    goto block_16;
}
block_16: {
    const uint64_t result2 = RecoveredCall_1e61b0_2(value_x0);
    goto block_17;
}
block_17: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 8));
    value_x0 = field6;
    if (field6 == 0) goto block_20;
    goto block_19;
}
block_19: {
    const uint64_t result3 = RecoveredCall_1e61b0_3(value_x0);
    goto block_20;
}
block_20: {
    *reinterpret_cast<uint64_t*>(((value_x19 + 152) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 152) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((value_x19 + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 136) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 136) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 120) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 120) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 104) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 104) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 88) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 88) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 72) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 72) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 56) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 56) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 40) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 40) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 24) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 24) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 8) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 8) + 8)) = 0;
    goto block_31;
}
block_31: {

    return LeafTarget_1e61b0_32(value_x19);
}
block_33: {

    return;
}
}




extern "C" __attribute__((noinline)) void RecoveredLeaf_447cc0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 28));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x1 + 28));
    value_x8 = uint32_t(field1);
    if (uint32_t(uint32_t(field0)) != uint32_t(uint32_t(field1))) goto block_9;
    goto block_4;
}
block_4: {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x0 + 32));
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x1 + 32));
    if (uint32_t(uint32_t(field2)) != uint32_t(uint32_t(field3))) goto block_9;
    goto block_8;
}
block_8: {

    return;
}
block_9: {
    *reinterpret_cast<uint32_t*>((value_x0 + 28)) = uint32_t(value_x8);
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((value_x1 + 32));
    *reinterpret_cast<uint32_t*>((value_x0 + 32)) = uint32_t(uint32_t(field4));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 120));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field6)(value_x0,field6);
    return;
    __builtin_unreachable();
}
}




extern "C" __attribute__((noinline)) void RecoveredLeaf_cfffc0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 48));
    value_x8 = uint32_t(field0);
    if (uint32_t(uint32_t(field0)) == 1) goto block_8;
    goto block_3;
}
block_3: {

    if (uint32_t(value_x8) != 0) goto block_12;
    goto block_4;
}
block_4: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x0 + 8));
    value_x8 = uint32_t((uint32_t(uint32_t(field2)) + uint32_t(uint32_t(field1))));
    goto block_11;
}
block_8: {
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((value_x0 + 8));
    value_x8 = uint32_t((uint32_t(uint32_t(field4)) * uint32_t(uint32_t(field3))));
    goto block_11;
}
block_11: {
    *reinterpret_cast<uint32_t*>((value_x0 + 8)) = uint32_t(value_x8);
    goto block_12;
}
block_12: {

    return;
}
}
