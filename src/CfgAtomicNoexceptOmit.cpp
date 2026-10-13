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




extern "C" unsigned char LeafData_6d1ff0_0[];
extern "C" __attribute__((noinline)) void RecoveredLeaf_6d1ff0(uint64_t arg0) noexcept {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_6d1ff0_0) - 1432) + 1432);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 40));
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    value_x0 = field0;
    if (uint32_t((field1 - 1)) != 0) goto block_13;
    goto block_10;
}
block_10: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(value_x0);
    goto block_13;
}
block_13: {

    return;
}
}





extern "C" unsigned char LeafData_6e9230_1[];
extern "C" __attribute__((noinline)) void RecoveredLeaf_6e9230(uint64_t arg0) noexcept {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_6e9230_1) - 2984) + 2984);
    const uint64_t field0 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((value_x0 + 16) + 0)), 0, __ATOMIC_ACQ_REL);
    value_x0 = field0;
    if (field0 == 0) goto block_17;
    goto block_8;
}
block_8: {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (uint32_t((field1 - 1)) != 0) goto block_17;
    goto block_14;
}
block_14: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(value_x0);
    goto block_17;
}
block_17: {

    return;
}
}





extern "C" unsigned char LeafData_6eedb0_1[];
extern "C" __attribute__((noinline)) void RecoveredLeaf_6eedb0(uint64_t arg0) noexcept {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_6eedb0_1) - 528) + 528);
    const uint64_t field0 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((value_x0 + 64) + 0)), 0, __ATOMIC_ACQ_REL);
    value_x0 = field0;
    if (field0 == 0) goto block_17;
    goto block_8;
}
block_8: {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (uint32_t((field1 - 1)) != 0) goto block_17;
    goto block_14;
}
block_14: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(value_x0);
    goto block_17;
}
block_17: {

    return;
}
}






extern "C" __attribute__((noinline)) void RecoveredLeaf_d5bca0(uint64_t arg0) noexcept {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    if (value_x0 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint32_t field0 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field0 - 1)) != 0) goto block_10;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(value_x0);
    goto block_10;
}
block_10: {

    return;
}
}






extern "C" __attribute__((noinline)) void RecoveredLeaf_d5bd00(uint64_t arg0) noexcept {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    if (value_x0 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint32_t field0 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field0 - 1)) != 0) goto block_10;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(value_x0);
    goto block_10;
}
block_10: {

    return;
}
}






extern "C" __attribute__((noinline)) void RecoveredLeaf_d5bd60(uint64_t arg0) noexcept {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    if (value_x0 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint32_t field0 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field0 - 1)) != 0) goto block_10;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(value_x0);
    goto block_10;
}
block_10: {

    return;
}
}






extern "C" __attribute__((noinline)) void RecoveredLeaf_d5bdc0(uint64_t arg0) noexcept {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    if (value_x0 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint32_t field0 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field0 - 1)) != 0) goto block_10;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(value_x0);
    goto block_10;
}
block_10: {

    return;
}
}






extern "C" __attribute__((noinline)) void RecoveredLeaf_d5bed0(uint64_t arg0) noexcept {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    if (value_x0 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint32_t field0 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field0 - 1)) != 0) goto block_10;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(value_x0);
    goto block_10;
}
block_10: {

    return;
}
}






extern "C" __attribute__((noinline)) void RecoveredLeaf_d7f440(uint64_t arg0) noexcept {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    if (value_x0 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint32_t field0 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field0 - 1)) != 0) goto block_10;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(value_x0);
    goto block_10;
}
block_10: {

    return;
}
}






extern "C" __attribute__((noinline)) void RecoveredLeaf_d8cc60(uint64_t arg0) noexcept {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    if (value_x0 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint32_t field0 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field0 - 1)) != 0) goto block_10;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(value_x0);
    goto block_10;
}
block_10: {

    return;
}
}





extern "C" unsigned char LeafData_dd26a0_0[];
extern "C" __attribute__((noinline)) void RecoveredLeaf_dd26a0(uint64_t arg0) noexcept {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dd26a0_0) - 1624) + 1624);
    *reinterpret_cast<uint32_t*>((value_x0 + 40)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 32)) = 0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((value_x0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((value_x0 + 16) + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field0)((value_x0 + 32),field1,uint32_t(1));
    return;
}
}





extern "C" uint64_t RecoveredCall_f11440_0(uint64_t);
extern "C" uint64_t RecoveredCall_f11440_1(uint64_t);
extern "C" uint64_t RecoveredCall_f11440_2(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_f11440(uint64_t arg0) noexcept {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    value_x19 = value_x0;
    value_x8 = field0;
    if (field0 == 0) goto block_8;
    goto block_3;
}
block_3: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x8 + 1232));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x19 + 16));
    *reinterpret_cast<uint64_t*>((value_x8 + 1232)) = int32_t(uint32_t(uint32_t((uint32_t(uint32_t(field1)) - uint32_t(uint32_t(field2))))));
    goto block_8;
}
block_8: {
    const uint8_t field3 = *reinterpret_cast<const uint8_t*>((value_x8 + 560));
    if (uint32_t(uint32_t(field3)) != 0) goto block_14;
    goto block_10;
}
block_10: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 8));
    value_x0 = field4;
    if (field4 == 0) goto block_13;
    goto block_12;
}
block_12: {
    const uint64_t result0 = RecoveredCall_f11440_0(value_x0);
    goto block_13;
}
block_13: {
    *reinterpret_cast<uint32_t*>((value_x19 + 20)) = 0;
    goto block_14;
}
block_14: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x19 + 24));
    *reinterpret_cast<uint32_t*>((value_x19 + 16)) = 0;
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x20 = field5;
    if (field5 == 0) goto block_24;
    goto block_18;
}
block_18: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    value_x0 = field6;
    if (field6 == 0) goto block_21;
    goto block_20;
}
block_20: {
    const uint64_t result1 = RecoveredCall_f11440_1(value_x0);
    goto block_21;
}
block_21: {
    const uint64_t result2 = RecoveredCall_f11440_2(value_x20);
    *reinterpret_cast<uint64_t*>((value_x19 + 24)) = 0;
    goto block_24;
}
block_24: {

    return;
}
}





extern "C" uint64_t RecoveredCall_f114c0_0(uint64_t);
extern "C" uint64_t RecoveredCall_f114c0_1(uint64_t);
extern "C" uint64_t RecoveredCall_f114c0_2(uint64_t);
extern "C" uint64_t RecoveredCall_f114c0_3(uint64_t);
extern "C" uint64_t RecoveredCall_f114c0_4(uint64_t);
extern "C" uint64_t RecoveredCall_f114c0_5(uint64_t);
extern "C" uint64_t RecoveredCall_f114c0_6(uint64_t);
extern "C" uint64_t RecoveredCall_f114c0_7(uint64_t);
extern "C" uint64_t RecoveredCall_f114c0_8(uint64_t);
extern "C" uint64_t RecoveredCall_f114c0_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_f114c0(uint64_t arg0) noexcept {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    value_x19 = value_x0;
    value_x20 = field0;
    if (field0 == 0) goto block_10;
    goto block_3;
}
block_3: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    value_x0 = field1;
    if (field1 == 0) goto block_8;
    goto block_5;
}
block_5: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x20 + 24));
    if (field2 == 0) goto block_8;
    goto block_7;
}
block_7: {
    const uint64_t result0 = RecoveredCall_f114c0_0(value_x0);
    goto block_8;
}
block_8: {
    const uint64_t result1 = RecoveredCall_f114c0_1(value_x20);
    goto block_10;
}
block_10: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    value_x20 = field3;
    if (field3 == 0) goto block_19;
    goto block_12;
}
block_12: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    value_x0 = field4;
    if (field4 == 0) goto block_17;
    goto block_14;
}
block_14: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x20 + 24));
    if (field5 == 0) goto block_17;
    goto block_16;
}
block_16: {
    const uint64_t result2 = RecoveredCall_f114c0_2(value_x0);
    goto block_17;
}
block_17: {
    const uint64_t result3 = RecoveredCall_f114c0_3(value_x20);
    goto block_19;
}
block_19: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 40));
    value_x20 = field6;
    if (field6 == 0) goto block_28;
    goto block_21;
}
block_21: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    value_x0 = field7;
    if (field7 == 0) goto block_26;
    goto block_23;
}
block_23: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x20 + 24));
    if (field8 == 0) goto block_26;
    goto block_25;
}
block_25: {
    const uint64_t result4 = RecoveredCall_f114c0_4(value_x0);
    goto block_26;
}
block_26: {
    const uint64_t result5 = RecoveredCall_f114c0_5(value_x20);
    goto block_28;
}
block_28: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x19 + 48));
    value_x20 = field9;
    if (field9 == 0) goto block_37;
    goto block_30;
}
block_30: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    value_x0 = field10;
    if (field10 == 0) goto block_35;
    goto block_32;
}
block_32: {
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((value_x20 + 24));
    if (field11 == 0) goto block_35;
    goto block_34;
}
block_34: {
    const uint64_t result6 = RecoveredCall_f114c0_6(value_x0);
    goto block_35;
}
block_35: {
    const uint64_t result7 = RecoveredCall_f114c0_7(value_x20);
    goto block_37;
}
block_37: {
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((value_x19 + 56));
    value_x19 = field12;
    if (field12 == 0) goto block_46;
    goto block_39;
}
block_39: {
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    value_x0 = field13;
    if (field13 == 0) goto block_44;
    goto block_41;
}
block_41: {
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((value_x19 + 24));
    if (field14 == 0) goto block_44;
    goto block_43;
}
block_43: {
    const uint64_t result8 = RecoveredCall_f114c0_8(value_x0);
    goto block_44;
}
block_44: {
    const uint64_t result9 = RecoveredCall_f114c0_9(value_x19);
    goto block_46;
}
block_46: {

    return;
}
}





extern "C" unsigned char LeafData_f704d0_0[];
extern "C" uint64_t RecoveredCall_f704d0_0(uint64_t);
extern "C" uint64_t RecoveredCall_f704d0_1(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_f704d0(uint64_t arg0) noexcept {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_f704d0_0) - 1760) + 1760);
    const uint64_t result0 = RecoveredCall_f704d0_0((value_x0 + 40));
    const uint64_t result1 = RecoveredCall_f704d0_1((value_x0 + 8));
    return;
}
}





extern "C" unsigned char LeafData_f70500_0[];
extern "C" uint64_t RecoveredCall_f70500_0(uint64_t);
extern "C" uint64_t RecoveredCall_f70500_1(uint64_t);
extern "C" uint64_t RecoveredCall_f70500_2(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_f70500(uint64_t arg0) noexcept {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_f70500_0) - 1760) + 1760);
    const uint64_t result0 = RecoveredCall_f70500_0((value_x0 + 40));
    const uint64_t result1 = RecoveredCall_f70500_1((value_x0 + 8));
    const uint64_t result2 = RecoveredCall_f70500_2(value_x0);
    return;
}
}






extern "C" __attribute__((noinline)) void RecoveredLeaf_f96900(uint64_t arg0) noexcept {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    if (value_x0 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint32_t field0 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field0 - 1)) != 0) goto block_10;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(value_x0);
    goto block_10;
}
block_10: {

    return;
}
}
