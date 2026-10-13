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


extern "C" uint64_t RecoveredCall_7b450_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7b450(uint64_t arg0) {
    LEAF_CHECK
block_0: {
    const uint64_t result0 = RecoveredCall_7b450_0(0);
    __builtin_unreachable();
}
}



extern "C" uint64_t RecoveredCall_7dc50_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7dc50(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 56));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field0)) != 0) goto block_13;
    goto block_3;
}
block_3: {
    value_x20 = uint32_t(((uint32_t(uint32_t(16960)) & 0xffffull) | (15ull << 16)));
    goto block_5;
}
block_5: {
    const uint64_t result0 = RecoveredCall_7dc50_0(value_x20);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(value_x19);
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x19 + 56));
    if (uint32_t(uint32_t(field3)) == 0) goto block_5;
    goto block_13;
}
block_13: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 24));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)(value_x19,field5);
    return result2;
    __builtin_unreachable();
}
}



extern "C" uint64_t RecoveredCall_cfe50_0(uint64_t);
extern "C" uint64_t LeafTarget_cfe50_14(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cfe50(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>(((value_x0 + 192) + 0)), __ATOMIC_ACQUIRE);
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((field0 + 24));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field1)) != 1) goto block_8;
    goto block_6;
}
block_6: {
    const uint64_t result0 = RecoveredCall_cfe50_0((value_x19 + 184));
    value_x0 = result0;
    goto block_8;
}
block_8: {
    const uint64_t field2 = __atomic_load_n(reinterpret_cast<const uint64_t*>(((value_x19 + 584) + 0)), __ATOMIC_ACQUIRE);
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((field2 + 24));
    if (uint32_t(uint32_t(field3)) != 1) goto block_15;
    goto block_13;
}
block_13: {

    return LeafTarget_cfe50_14((value_x19 + 576));
}
block_15: {

    return value_x0;
}
}



extern "C" uint64_t RecoveredCall_16c3f0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_16c3f0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t result0 = RecoveredCall_16c3f0_0(value_x0);
    __builtin_unreachable();
}
}



extern "C" uint64_t LeafTarget_257000_14(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_257000(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    value_x19 = field0;
    if (field0 == 0) goto block_8;
    goto block_2;
}
block_2: {
    const uint64_t field1 = __atomic_fetch_sub(reinterpret_cast<uint64_t*>(((value_x19 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (field1 == 0) goto block_9;
    goto block_8;
}
block_8: {

    return value_x0;
}
block_9: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(value_x19);
    return LeafTarget_257000_14(value_x19);
}
}



extern "C" uint64_t RecoveredCall_303790_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_303790(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t result0 = RecoveredCall_303790_0(value_x0);
    __builtin_unreachable();
}
}



extern "C" uint64_t RecoveredCall_36c730_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_36c730(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t result0 = RecoveredCall_36c730_0(value_x0);
    __builtin_unreachable();
}
}



extern "C" uint64_t RecoveredCall_375c30_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_375c30(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t result0 = RecoveredCall_375c30_0(value_x0);
    __builtin_unreachable();
}
}



extern "C" uint64_t RecoveredCall_38dc50_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_38dc50(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    value_x20 = field0;
    if (field0 == 0) goto block_8;
    goto block_2;
}
block_2: {
    value_x19 = (value_x0 + 64);
    goto block_3;
}
block_3: {
    const uint64_t result0 = RecoveredCall_38dc50_0((value_x20 + 168),value_x19);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x20 + 32));
    value_x0 = result0;
    value_x20 = field1;
    if (field1 != 0) goto block_3;
    goto block_8;
}
block_8: {

    return value_x0;
}
}



extern "C" uint64_t RecoveredCall_38dc90_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_38dc90(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    value_x20 = field0;
    if (field0 == 0) goto block_8;
    goto block_2;
}
block_2: {
    value_x19 = (value_x0 + 64);
    goto block_3;
}
block_3: {
    const uint64_t result0 = RecoveredCall_38dc90_0((value_x20 + 272),value_x19);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x20 + 32));
    value_x0 = result0;
    value_x20 = field1;
    if (field1 != 0) goto block_3;
    goto block_8;
}
block_8: {

    return value_x0;
}
}



extern "C" uint64_t RecoveredCall_3db9b0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_3db9b0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t result0 = RecoveredCall_3db9b0_0(value_x0);
    __builtin_unreachable();
}
}



extern "C" uint64_t RecoveredCall_3ebe20_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_3ebe20(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t result0 = RecoveredCall_3ebe20_0(value_x0);
    __builtin_unreachable();
}
}



extern "C" uint64_t RecoveredCall_40a270_0(uint64_t);
extern "C" uint64_t RecoveredCall_40a270_1(uint64_t);
extern "C" uint64_t RecoveredCall_40a270_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_40a270_3(uint64_t);
extern "C" uint64_t RecoveredCall_40a270_4(uint64_t);
extern "C" uint64_t RecoveredCall_40a270_5(uint64_t);
extern "C" uint64_t LeafTarget_40a270_30(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_40a270(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
    uint64_t value_x8;
block_0: {
    value_x19 = value_x0;
    value_x20 = (value_x0 + 360);
    goto block_4;
}
block_3: {
    const uint64_t result0 = RecoveredCall_40a270_0(value_x0);
    goto block_4;
}
block_4: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    value_x0 = field0;
    if (field0 == 0) goto block_8;
    goto block_6;
}
block_6: {
    const uint64_t result1 = RecoveredCall_40a270_1(value_x0);
    value_x0 = result1;
    if ((uint32_t(result1) & 0x1ull) == 0) goto block_31;
    goto block_8;
}
block_8: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((value_x19 + 192) + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((value_x19 + 192) + 8));
    value_x8 = field2;
    if (field1 == field2) goto block_28;
    goto block_11;
}
block_11: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x8 + -8));
    const uint64_t result2 = RecoveredCall_40a270_2(value_x20,(field3 + 408));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 200));
    *reinterpret_cast<uint64_t*>((value_x19 + 200)) = (field4 - 8);
    const uint64_t result3 = RecoveredCall_40a270_3(field3);
    const uint64_t result4 = RecoveredCall_40a270_4(field3);
    value_x21 = field3;
    if (field3 == 0) goto block_25;
    goto block_23;
}
block_23: {
    const uint64_t result5 = RecoveredCall_40a270_5(value_x21);
    goto block_25;
}
block_25: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    value_x0 = field5;
    if (field5 == 0) goto block_4;
    goto block_27;
}
block_27: {

    goto block_3;
}
block_28: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    value_x0 = field6;
    if (field6 == 0) goto block_31;
    goto block_30;
}
block_30: {

    return LeafTarget_40a270_30(value_x0);
}
block_31: {

    return value_x0;
}
}



extern "C" uint64_t RecoveredCall_456230_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_456230(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t result0 = RecoveredCall_456230_0(value_x0);
    __builtin_unreachable();
}
}



extern "C" uint64_t LeafTarget_472c90_14(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_472c90(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 40));
    value_x19 = field0;
    if (field0 == 0) goto block_8;
    goto block_2;
}
block_2: {
    const uint64_t field1 = __atomic_fetch_sub(reinterpret_cast<uint64_t*>(((value_x19 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (field1 == 0) goto block_9;
    goto block_8;
}
block_8: {

    return value_x0;
}
block_9: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(value_x19);
    return LeafTarget_472c90_14(value_x19);
}
}



extern "C" uint64_t RecoveredCall_491300_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_491300(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t result0 = RecoveredCall_491300_0(value_x0);
    __builtin_unreachable();
}
}



extern "C" uint64_t LeafTarget_4a3c70_18(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4a3c70(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 8));
    *reinterpret_cast<uint64_t*>(((value_x1 + 0) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x1 + 0) + 8)) = 0;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 1128));
    *reinterpret_cast<uint64_t*>((value_x0 + 1120)) = field0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1128)) = field1;
    value_x19 = field2;
    if (field2 == 0) goto block_12;
    goto block_6;
}
block_6: {
    const uint64_t field3 = __atomic_fetch_sub(reinterpret_cast<uint64_t*>(((value_x19 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (field3 == 0) goto block_13;
    goto block_12;
}
block_12: {

    return value_x0;
}
block_13: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x19);
    return LeafTarget_4a3c70_18(value_x19);
}
}



extern "C" uint64_t RecoveredCall_4c0340_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4c0340(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t result0 = RecoveredCall_4c0340_0(value_x0);
    __builtin_unreachable();
}
}



extern "C" uint64_t RecoveredCall_4d6f00_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4d6f00(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t result0 = RecoveredCall_4d6f00_0(value_x0);
    __builtin_unreachable();
}
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4ed620(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 16));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    value_x19 = field1;
    if (uint32_t(uint32_t(field0)) != 2) goto block_9;
    goto block_4;
}
block_4: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(value_x19);
    goto block_10;
}
block_9: {

    if (value_x19 == 0) goto block_14;
    goto block_10;
}
block_10: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)(value_x19,field5);
    return result1;
    __builtin_unreachable();
}
block_14: {

    return value_x0;
}
}



extern "C" uint64_t LeafTarget_4f94a0_4(uint64_t);
extern "C" uint64_t RecoveredCall_4f94a0_0(uint64_t);
extern "C" uint64_t LeafTarget_4f94a0_8(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4f94a0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 96));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field0)) == 0) goto block_5;
    goto block_3;
}
block_3: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    return LeafTarget_4f94a0_4(field1);
}
block_5: {
    const uint64_t result0 = RecoveredCall_4f94a0_0(value_x19);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    return LeafTarget_4f94a0_8(field2);
}
}



extern "C" uint64_t RecoveredCall_50dec0_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_50dec0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint64_t result0 = RecoveredCall_50dec0_0(value_x0,value_x1);
    value_x0 = result0;
    if (result0 == 0) goto block_6;
    goto block_2;
}
block_2: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 0));
    return uint32_t((uint32_t(uint32_t(field0)) == 2));
}
block_6: {

    return uint32_t(1);
}
}



extern "C" unsigned char LeafData_52ee00_0[];
extern "C" uint64_t RecoveredCall_52ee00_0(uint64_t);
extern "C" uint64_t RecoveredCall_52ee00_1(uint64_t);
extern "C" uint64_t RecoveredCall_52ee00_2(uint64_t);
extern "C" uint64_t LeafTarget_52ee00_11(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_52ee00(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint32_t field0 = __atomic_fetch_add(reinterpret_cast<uint32_t*>((((reinterpret_cast<uintptr_t>(LeafData_52ee00_0) - 1456) + 1456) + 0)), 1, __ATOMIC_ACQ_REL);
    if (uint32_t(uint32_t(field0)) == 0) goto block_8;
    goto block_7;
}
block_7: {

    return value_x0;
}
block_8: {
    const uint64_t result0 = RecoveredCall_52ee00_0(value_x0);
    const uint64_t result1 = RecoveredCall_52ee00_1(result0);
    const uint64_t result2 = RecoveredCall_52ee00_2(result1);
    return LeafTarget_52ee00_11(result2);
}
}



extern "C" uint64_t LeafTarget_52f2f0_6(uint64_t);
extern "C" uint64_t LeafTarget_52f2f0_19(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_52f2f0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 32));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field0)) == 0) goto block_5;
    goto block_3;
}
block_3: {
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x19 + 33));
    if (uint32_t(uint32_t(field1)) == 0) goto block_7;
    goto block_5;
}
block_5: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 24));
    return LeafTarget_52f2f0_6(field2);
}
block_7: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 8));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 40));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(field3);
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 40));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 32));
    const uint16_t field9 = *reinterpret_cast<const uint16_t*>((value_x19 + 52));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field8)(field6,uint32_t(field9));
    *reinterpret_cast<uint16_t*>((value_x19 + 32)) = uint32_t(uint32_t(256));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x19 + 24));
    return LeafTarget_52f2f0_19(field10);
}
}



extern "C" uint64_t LeafTarget_5546b0_14(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5546b0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 40));
    value_x19 = field0;
    if (field0 == 0) goto block_8;
    goto block_2;
}
block_2: {
    const uint64_t field1 = __atomic_fetch_sub(reinterpret_cast<uint64_t*>(((value_x19 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (field1 == 0) goto block_9;
    goto block_8;
}
block_8: {

    return value_x0;
}
block_9: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(value_x19);
    return LeafTarget_5546b0_14(value_x19);
}
}



extern "C" uint64_t RecoveredCall_561330_0(uint64_t);
extern "C" uint64_t RecoveredCall_561330_2(uint64_t);
extern "C" uint64_t RecoveredCall_561330_4(uint64_t);
extern "C" uint64_t RecoveredCall_561330_5(uint64_t);
extern "C" uint64_t LeafTarget_561330_38(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_561330(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 312));
    const uint64_t result0 = RecoveredCall_561330_0(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 360));
    *reinterpret_cast<uint64_t*>((value_x0 + 320)) = 0;
    value_x19 = value_x0;
    value_x20 = field1;
    if (field1 == 0) goto block_12;
    goto block_6;
}
block_6: {
    const uint64_t field2 = __atomic_fetch_sub(reinterpret_cast<uint64_t*>(((value_x20 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (field2 == 0) goto block_27;
    goto block_12;
}
block_12: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 344));
    value_x20 = field3;
    if (field3 == 0) goto block_35;
    goto block_14;
}
block_14: {
    const uint64_t field4 = __atomic_fetch_sub(reinterpret_cast<uint64_t*>(((value_x20 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (field4 != 0) goto block_35;
    goto block_20;
}
block_20: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field6)(value_x20);
    const uint64_t result2 = RecoveredCall_561330_2(value_x20);
    goto block_35;
}
block_27: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 16));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t)>(field8)(value_x20);
    const uint64_t result4 = RecoveredCall_561330_4(value_x20);
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x19 + 344));
    value_x20 = field9;
    if (field9 != 0) goto block_14;
    goto block_35;
}
block_35: {
    const uint64_t result5 = RecoveredCall_561330_5((value_x19 + 152));
    return LeafTarget_561330_38(value_x19);
}
}



extern "C" uint64_t RecoveredCall_56f990_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_56f990(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t result0 = RecoveredCall_56f990_0(value_x0);
    __builtin_unreachable();
}
}



extern "C" uint64_t RecoveredCall_574c80_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_574c80(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t result0 = RecoveredCall_574c80_0(value_x0);
    __builtin_unreachable();
}
}



extern "C" uint64_t RecoveredCall_5887f0_0(uint64_t);
extern "C" uint64_t LeafTarget_5887f0_7(uint64_t);
extern "C" uint64_t RecoveredCall_5887f0_1(uint64_t);
extern "C" uint64_t LeafTarget_5887f0_13(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5887f0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t result0 = RecoveredCall_5887f0_0((field0 + 8));
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((field0 + 40));
    value_x19 = (field0 + 8);
    value_x20 = field0;
    if (uint32_t(uint32_t(field1)) == 0) goto block_8;
    goto block_6;
}
block_6: {

    return LeafTarget_5887f0_7(value_x19);
}
block_8: {
    *reinterpret_cast<uint8_t*>((value_x20 + 40)) = uint32_t(uint32_t(1));
    const uint64_t result1 = RecoveredCall_5887f0_1(value_x20);
    return LeafTarget_5887f0_13(value_x19);
}
}



extern "C" uint64_t RecoveredCall_590b90_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_590b90(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t result0 = RecoveredCall_590b90_0(value_x0);
    __builtin_unreachable();
}
}



extern "C" uint64_t LeafTarget_5b7e80_14(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5b7e80(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 40));
    value_x19 = field0;
    if (field0 == 0) goto block_8;
    goto block_2;
}
block_2: {
    const uint64_t field1 = __atomic_fetch_sub(reinterpret_cast<uint64_t*>(((value_x19 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (field1 == 0) goto block_9;
    goto block_8;
}
block_8: {

    return value_x0;
}
block_9: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(value_x19);
    return LeafTarget_5b7e80_14(value_x19);
}
}



extern "C" uint64_t RecoveredCall_5c2890_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5c2890(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t result0 = RecoveredCall_5c2890_0(value_x0);
    __builtin_unreachable();
}
}



extern "C" uint64_t RecoveredCall_5c57c0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5c57c0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t result0 = RecoveredCall_5c57c0_0(value_x0);
    __builtin_unreachable();
}
}



extern "C" uint64_t RecoveredCall_5e5780_0(uint64_t);
extern "C" uint64_t LeafTarget_5e5780_20(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5e5780(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint64_t result0 = RecoveredCall_5e5780_0(value_x0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 672));
    *reinterpret_cast<uint16_t*>((value_x0 + 634)) = 0;
    *reinterpret_cast<uint8_t*>((value_x0 + 636)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 664)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 672)) = 0;
    value_x0 = result0;
    value_x19 = field0;
    if (field0 == 0) goto block_14;
    goto block_8;
}
block_8: {
    const uint64_t field1 = __atomic_fetch_sub(reinterpret_cast<uint64_t*>(((value_x19 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (field1 == 0) goto block_15;
    goto block_14;
}
block_14: {

    return value_x0;
}
block_15: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(value_x19);
    return LeafTarget_5e5780_20(value_x19);
}
}



extern "C" uint64_t RecoveredCall_624bf0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_624bf0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t result0 = RecoveredCall_624bf0_0(value_x0);
    __builtin_unreachable();
}
}
