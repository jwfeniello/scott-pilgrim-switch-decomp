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
extern "C" unsigned char LeafData_1bbc30_4[];
extern "C" unsigned char LeafData_1bbc30_6[];
extern "C" uint64_t RecoveredCall_1bbc30_0(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1bbc30(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {

    if (value_x0 == 0) goto block_14;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    value_x19 = value_x0;
    if (field0 == 0) goto block_14;
    goto block_4;
}
block_4: {
    const uint64_t result0 = RecoveredCall_1bbc30_0(((reinterpret_cast<uintptr_t>(LeafData_1bbc30_4) - 780) + 780),uint32_t(-1),uint32_t(1),((reinterpret_cast<uintptr_t>(LeafData_1bbc30_6) - 3737) + 3737),uint32_t(474));
    if (int32_t(uint32_t(result0)) <= int32_t(0)) goto block_15;
    goto block_14;
}
block_14: {

    return;
}
block_15: {
    *reinterpret_cast<uint64_t*>((value_x19 + 0)) = 0;
    return;
}
}

extern "C" uint64_t RecoveredCall_1d65f0_0(uint64_t);
extern "C" uint64_t RecoveredCall_1d65f0_1(uint64_t);
extern "C" void LeafTarget_1d65f0_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1d65f0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {

    if (value_x0 == 0) goto block_7;
    goto block_1;
}
block_1: {
    const uint64_t result0 = RecoveredCall_1d65f0_0(value_x0);
    const uint64_t result1 = RecoveredCall_1d65f0_1((value_x0 + 24));
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 56));
    value_x19 = value_x0;
    if ((uint32_t(uint32_t(field0)) & 0x1ull) != 0) goto block_8;
    goto block_7;
}
block_7: {

    return;
}
block_8: {

    return LeafTarget_1d65f0_9(value_x19);
}
}

extern "C" unsigned char LeafData_1dc250_3[];
extern "C" uint64_t RecoveredCall_1dc250_0(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1dc250_1(uint64_t);
extern "C" uint64_t RecoveredCall_1dc250_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1dc250_3(uint64_t);
extern "C" uint64_t RecoveredCall_1dc250_4(uint64_t,uint64_t);
extern "C" void LeafTarget_1dc250_29(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1dc250(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {

    if (value_x0 == 0) goto block_11;
    goto block_1;
}
block_1: {
    const uint64_t result0 = RecoveredCall_1dc250_0((value_x0 + 48),uint32_t(-1),uint32_t(36),((reinterpret_cast<uintptr_t>(LeafData_1dc250_3) - 2188) + 2188),uint32_t(163));
    value_x19 = value_x0;
    if (int32_t(uint32_t(result0)) <= int32_t(0)) goto block_12;
    goto block_11;
}
block_11: {

    return;
}
block_12: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    value_x20 = field0;
    if (field0 == 0) goto block_25;
    goto block_14;
}
block_14: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    value_x0 = field1;
    if (field1 == 0) goto block_23;
    goto block_16;
}
block_16: {
    const uint64_t result1 = RecoveredCall_1dc250_1(value_x0);
    const uint64_t result2 = RecoveredCall_1dc250_2(value_x20,uint32_t(8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x20 + 8));
    value_x0 = field2;
    value_x20 = (value_x20 + 8);
    if (field2 != 0) goto block_16;
    goto block_22;
}
block_22: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    value_x20 = field3;
    goto block_23;
}
block_23: {
    const uint64_t result3 = RecoveredCall_1dc250_3(value_x20);
    goto block_25;
}
block_25: {
    const uint64_t result4 = RecoveredCall_1dc250_4(value_x19,uint32_t(56));
    return LeafTarget_1dc250_29(value_x19);
}
}

extern "C" uint64_t RecoveredCall_1e4b30_0(uint64_t);
extern "C" uint64_t RecoveredCall_1e4b30_1(uint64_t);
extern "C" void LeafTarget_1e4b30_12(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1e4b30(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {

    if (value_x0 == 0) goto block_4;
    goto block_1;
}
block_1: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 8));
    value_x19 = value_x0;
    if ((uint32_t(uint32_t(field0)) & 0x2ull) != 0) goto block_5;
    goto block_4;
}
block_4: {

    return;
}
block_5: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 16));
    value_x0 = field1;
    if (field1 == 0) goto block_8;
    goto block_7;
}
block_7: {
    const uint64_t result0 = RecoveredCall_1e4b30_0(value_x0);
    goto block_8;
}
block_8: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 24));
    value_x0 = field2;
    if (field2 == 0) goto block_11;
    goto block_10;
}
block_10: {
    const uint64_t result1 = RecoveredCall_1e4b30_1(value_x0);
    goto block_11;
}
block_11: {

    return LeafTarget_1e4b30_12(value_x19);
}
}

extern "C" uint64_t RecoveredCall_1f3db0_0(uint64_t);
extern "C" unsigned char LeafData_1f3db0_7[];
extern "C" uint64_t RecoveredCall_1f3db0_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1f3db0_2(uint64_t);
extern "C" uint64_t RecoveredCall_1f3db0_3(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1f3db0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {

    if (value_x0 == 0) goto block_16;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    value_x19 = value_x0;
    value_x20 = field0;
    if (field0 == 0) goto block_16;
    goto block_4;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x20 + 16));
    const uint64_t result0 = RecoveredCall_1f3db0_0(field1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    const uint64_t result1 = RecoveredCall_1f3db0_1(field2,((reinterpret_cast<uintptr_t>(LeafData_1f3db0_7) - 3232) + 3232));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x20 + 24));
    value_x0 = field3;
    if (field3 == 0) goto block_13;
    goto block_12;
}
block_12: {
    const uint64_t result2 = RecoveredCall_1f3db0_2(value_x0);
    goto block_13;
}
block_13: {
    const uint64_t result3 = RecoveredCall_1f3db0_3(value_x20);
    *reinterpret_cast<uint64_t*>((value_x19 + 0)) = 0;
    goto block_16;
}
block_16: {

    return;
}
}

extern "C" unsigned char LeafData_2301b0_3[];
extern "C" uint64_t RecoveredCall_2301b0_0(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_2301b0_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_2301b0_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_2301b0_3(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_2301b0_4(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_2301b0_5(uint64_t);
extern "C" uint64_t RecoveredCall_2301b0_6(uint64_t);
extern "C" uint64_t RecoveredCall_2301b0_7(uint64_t);
extern "C" uint64_t RecoveredCall_2301b0_8(uint64_t);
extern "C" uint64_t RecoveredCall_2301b0_9(uint64_t);
extern "C" uint64_t RecoveredCall_2301b0_10(uint64_t);
extern "C" uint64_t RecoveredCall_2301b0_11(uint64_t);
extern "C" uint64_t RecoveredCall_2301b0_12(uint64_t);
extern "C" uint64_t RecoveredCall_2301b0_13(uint64_t);
extern "C" uint64_t RecoveredCall_2301b0_14(uint64_t);
extern "C" uint64_t RecoveredCall_2301b0_15(uint64_t,uint64_t);
extern "C" void LeafTarget_2301b0_61(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_2301b0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {

    if (value_x0 == 0) goto block_11;
    goto block_1;
}
block_1: {
    const uint64_t result0 = RecoveredCall_2301b0_0((value_x0 + 192),uint32_t(-1),uint32_t(14),((reinterpret_cast<uintptr_t>(LeafData_2301b0_3) - 1646) + 1646),uint32_t(858));
    value_x19 = value_x0;
    if (int32_t(uint32_t(result0)) <= int32_t(0)) goto block_12;
    goto block_11;
}
block_11: {

    return;
}
block_12: {
    const uint64_t result1 = RecoveredCall_2301b0_1(uint32_t(3),value_x19,(value_x19 + 248));
    const uint64_t result2 = RecoveredCall_2301b0_2((value_x19 + 8),uint32_t(8));
    const uint64_t result3 = RecoveredCall_2301b0_3((value_x19 + 20),uint32_t(48));
    const uint64_t result4 = RecoveredCall_2301b0_4((value_x19 + 72),uint32_t(32));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x19 + 168));
    value_x0 = field0;
    if (field0 == 0) goto block_28;
    goto block_27;
}
block_27: {
    const uint64_t result5 = RecoveredCall_2301b0_5(value_x0);
    goto block_28;
}
block_28: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 176));
    value_x0 = field1;
    if (field1 == 0) goto block_31;
    goto block_30;
}
block_30: {
    const uint64_t result6 = RecoveredCall_2301b0_6(value_x0);
    goto block_31;
}
block_31: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 240));
    value_x0 = field2;
    if (field2 == 0) goto block_34;
    goto block_33;
}
block_33: {
    const uint64_t result7 = RecoveredCall_2301b0_7(value_x0);
    goto block_34;
}
block_34: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 280));
    value_x0 = field3;
    if (field3 == 0) goto block_37;
    goto block_36;
}
block_36: {
    const uint64_t result8 = RecoveredCall_2301b0_8(value_x0);
    goto block_37;
}
block_37: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 320));
    value_x0 = field4;
    if (field4 == 0) goto block_40;
    goto block_39;
}
block_39: {
    const uint64_t result9 = RecoveredCall_2301b0_9(value_x0);
    goto block_40;
}
block_40: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x19 + 296));
    *reinterpret_cast<uint64_t*>((value_x19 + 288)) = 0;
    value_x0 = field5;
    if (field5 == 0) goto block_44;
    goto block_43;
}
block_43: {
    const uint64_t result10 = RecoveredCall_2301b0_10(value_x0);
    goto block_44;
}
block_44: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 312));
    *reinterpret_cast<uint64_t*>((value_x19 + 304)) = 0;
    value_x0 = field6;
    if (field6 == 0) goto block_48;
    goto block_47;
}
block_47: {
    const uint64_t result11 = RecoveredCall_2301b0_11(value_x0);
    goto block_48;
}
block_48: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 144));
    value_x0 = field7;
    if (field7 == 0) goto block_51;
    goto block_50;
}
block_50: {
    const uint64_t result12 = RecoveredCall_2301b0_12(value_x0);
    goto block_51;
}
block_51: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x19 + 152));
    value_x0 = field8;
    if (field8 == 0) goto block_54;
    goto block_53;
}
block_53: {
    const uint64_t result13 = RecoveredCall_2301b0_13(value_x0);
    goto block_54;
}
block_54: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x19 + 344));
    value_x0 = field9;
    if (field9 == 0) goto block_57;
    goto block_56;
}
block_56: {
    const uint64_t result14 = RecoveredCall_2301b0_14(value_x0);
    goto block_57;
}
block_57: {
    const uint64_t result15 = RecoveredCall_2301b0_15(value_x19,uint32_t(352));
    return LeafTarget_2301b0_61(value_x19);
}
}

extern "C" void LeafTarget_35b410_15(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_35b410(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8;
block_0: {

    if (value_x1 == 0) goto block_4;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    value_x8 = value_x0;
    if (field0 == 0) goto block_5;
    goto block_4;
}
block_4: {

    return;
}
block_5: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x1 + 8));
    if ((uint32_t(uint32_t(field1)) + 1) == 0) goto block_4;
    goto block_8;
}
block_8: {
    *reinterpret_cast<uint64_t*>((value_x8 + 8)) = value_x1;
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x1 + 8));
    *reinterpret_cast<uint32_t*>((value_x8 + 16)) = uint32_t(uint32_t(field2));
    *reinterpret_cast<uint8_t*>((value_x8 + 20)) = uint32_t(uint32_t(255));
    return LeafTarget_35b410_15(value_x1,value_x8);
}
}

extern "C" uint64_t RecoveredCall_680030_0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_680030(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 56));
    *reinterpret_cast<uint32_t*>((value_x0 + 56)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) & 4294967293)));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 232));
    if (field1 == 0) goto block_14;
    goto block_5;
}
block_5: {
    value_x19 = value_x0;
    value_x20 = uint32_t(((uint32_t(uint32_t(57600)) & 0xffffull) | (1525ull << 16)));
    goto block_8;
}
block_8: {
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x19 + 357));
    if (uint32_t(uint32_t(field2)) != 0) goto block_14;
    goto block_10;
}
block_10: {
    const uint64_t result0 = RecoveredCall_680030_0(value_x20);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 232));
    if (field3 != 0) goto block_8;
    goto block_14;
}
block_14: {

    return;
}
}

extern "C" uint64_t RecoveredCall_767c60_0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_767c60(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 644));
    if (uint32_t(uint32_t(field0)) == 0) goto block_3;
    goto block_2;
}
block_2: {

    return;
}
block_3: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 704));
    const uint64_t result0 = RecoveredCall_767c60_0(field1);
    *reinterpret_cast<uint8_t*>((value_x0 + 644)) = uint32_t(uint32_t((uint32_t(result0) & 1)));
    return;
}
}

extern "C" void LeafTarget_7e15d0_14(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7e15d0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {

    if (value_x0 == 0) goto block_8;
    goto block_1;
}
block_1: {
    const uint64_t field0 = __atomic_fetch_sub(reinterpret_cast<uint64_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    value_x19 = value_x0;
    if (field0 == 0) goto block_9;
    goto block_8;
}
block_8: {

    return;
}
block_9: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(value_x19);
    return LeafTarget_7e15d0_14(value_x19);
}
}

extern "C" uint64_t RecoveredCall_a804d0_0(uint64_t);
extern "C" uint64_t RecoveredCall_a804d0_1(uint64_t);
extern "C" uint64_t RecoveredCall_a804d0_2(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_a804d0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 1736));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((field0 + 72));
    value_x19 = value_x0;
    value_x20 = field0;
    if (uint32_t(uint32_t(field1)) == 3) goto block_7;
    goto block_5;
}
block_5: {
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x20 + 76));
    if (uint32_t(uint32_t(field2)) == 0) goto block_35;
    goto block_7;
}
block_7: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x20 + 40));
    if (field3 == 0) goto block_21;
    goto block_9;
}
block_9: {
    *reinterpret_cast<uint32_t*>((value_x20 + 72)) = uint32_t(uint32_t(5));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 1448));
    value_x8 = field4;
    if (field4 == 0) goto block_56;
    goto block_13;
}
block_13: {
    *reinterpret_cast<uint64_t*>((value_x20 + 8)) = value_x8;
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x8 + 0));
    *reinterpret_cast<uint64_t*>((value_x20 + 0)) = field5;
    *reinterpret_cast<uint64_t*>((value_x8 + 0)) = value_x20;
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    value_x8 = field6;
    if (field6 != 0) goto block_54;
    goto block_19;
}
block_19: {
    *reinterpret_cast<uint64_t*>((value_x19 + 1448)) = value_x20;
    goto block_66;
}
block_21: {
    *reinterpret_cast<uint32_t*>((value_x20 + 72)) = uint32_t(uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 1464));
    value_x8 = field7;
    if (field7 == 0) goto block_59;
    goto block_25;
}
block_25: {
    *reinterpret_cast<uint64_t*>((value_x20 + 8)) = value_x8;
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x8 + 0));
    *reinterpret_cast<uint64_t*>((value_x20 + 0)) = field8;
    *reinterpret_cast<uint64_t*>((value_x8 + 0)) = value_x20;
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    value_x8 = ((field9 == 0) ? (value_x19 + 1464) : (field9 + 8));
    goto block_61;
}
block_35: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x20 + 88));
    const uint64_t result0 = RecoveredCall_a804d0_0((field10 + 8));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((value_x20 + 64));
    value_x0 = field11;
    if (field11 == 0) goto block_41;
    goto block_40;
}
block_40: {
    const uint64_t result1 = RecoveredCall_a804d0_1(value_x0);
    goto block_41;
}
block_41: {
    const uint16_t field12 = *reinterpret_cast<const uint16_t*>((value_x20 + 26));
    *reinterpret_cast<uint32_t*>((value_x20 + 72)) = 0;
    *reinterpret_cast<uint16_t*>((value_x20 + 26)) = uint32_t(uint32_t((uint32_t(uint32_t((uint32_t(uint32_t(field12)) + 1))) | 32768)));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((value_x19 + 1384));
    value_x8 = field13;
    if (field13 == 0) goto block_68;
    goto block_48;
}
block_48: {
    *reinterpret_cast<uint64_t*>((value_x20 + 8)) = value_x8;
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((value_x8 + 0));
    *reinterpret_cast<uint64_t*>((value_x20 + 0)) = field14;
    *reinterpret_cast<uint64_t*>((value_x8 + 0)) = value_x20;
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    value_x8 = field15;
    if (field15 == 0) goto block_71;
    goto block_54;
}
block_54: {
    *reinterpret_cast<uint64_t*>((value_x8 + 8)) = value_x20;
    goto block_66;
}
block_56: {
    *reinterpret_cast<uint64_t*>((value_x19 + 1448)) = value_x20;
    *reinterpret_cast<uint64_t*>((value_x19 + 1440)) = value_x20;
    goto block_66;
}
block_59: {
    *reinterpret_cast<uint64_t*>((value_x19 + 1464)) = value_x20;
    value_x8 = (value_x19 + 1456);
    goto block_61;
}
block_61: {
    *reinterpret_cast<uint64_t*>((value_x8 + 0)) = value_x20;
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((value_x19 + 1736));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 88));
    const uint64_t result2 = RecoveredCall_a804d0_2((field17 + 8));
    goto block_66;
}
block_66: {
    *reinterpret_cast<uint64_t*>((value_x19 + 1736)) = 0;
    return;
}
block_68: {
    *reinterpret_cast<uint64_t*>((value_x19 + 1384)) = value_x20;
    *reinterpret_cast<uint64_t*>((value_x19 + 1376)) = value_x20;
    goto block_66;
}
block_71: {
    *reinterpret_cast<uint64_t*>((value_x19 + 1384)) = value_x20;
    goto block_66;
}
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_ad4380(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    value_x20 = field0;
    if (field0 == 0) goto block_19;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 96));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(value_x20,uint32_t(((uint32_t(uint32_t(12283)) & 0xffffull) | (4782ull << 16))));
    value_x19 = value_x0;
    if ((uint32_t(result0) & 0x1ull) == 0) goto block_19;
    goto block_10;
}
block_10: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x20 + 184));
    value_x8 = field3;
    if (field3 == 0) goto block_14;
    goto block_12;
}
block_12: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    if (field4 != 0) goto block_18;
    goto block_14;
}
block_14: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x20 + 176));
    value_x8 = field5;
    if (field5 == 0) goto block_19;
    goto block_16;
}
block_16: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    if (field6 == 0) goto block_19;
    goto block_18;
}
block_18: {
    *reinterpret_cast<uint64_t*>((value_x19 + 256)) = value_x20;
    goto block_19;
}
block_19: {

    return;
}
}

extern "C" uint64_t RecoveredCall_b2c470_0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b2c470(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {
    const uint64_t result0 = RecoveredCall_b2c470_0(value_x0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 320));
    value_x19 = value_x0;
    value_x8 = field0;
    if (field0 == 0) goto block_9;
    goto block_4;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x0 = field1;
    if (field1 == 0) goto block_9;
    goto block_6;
}
block_6: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(value_x0);
    goto block_9;
}
block_9: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 328));
    value_x8 = field4;
    if (field4 == 0) goto block_16;
    goto block_11;
}
block_11: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x0 = field5;
    if (field5 == 0) goto block_16;
    goto block_13;
}
block_13: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 24));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(value_x0);
    goto block_16;
}
block_16: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x19 + 336));
    value_x8 = field8;
    if (field8 == 0) goto block_23;
    goto block_18;
}
block_18: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x0 = field9;
    if (field9 == 0) goto block_23;
    goto block_20;
}
block_20: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 24));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field11)(value_x0,field11);
    return;
    __builtin_unreachable();
}
block_23: {

    return;
}
}

extern "C" uint64_t RecoveredCall_b2e530_0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b2e530(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {
    const uint64_t result0 = RecoveredCall_b2e530_0(value_x0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 320));
    value_x19 = value_x0;
    value_x8 = field0;
    if (field0 == 0) goto block_9;
    goto block_4;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x0 = field1;
    if (field1 == 0) goto block_9;
    goto block_6;
}
block_6: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(value_x0);
    goto block_9;
}
block_9: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 328));
    value_x8 = field4;
    if (field4 == 0) goto block_16;
    goto block_11;
}
block_11: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x0 = field5;
    if (field5 == 0) goto block_16;
    goto block_13;
}
block_13: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 24));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(value_x0);
    goto block_16;
}
block_16: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x19 + 336));
    value_x8 = field8;
    if (field8 == 0) goto block_23;
    goto block_18;
}
block_18: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x0 = field9;
    if (field9 == 0) goto block_23;
    goto block_20;
}
block_20: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 24));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field11)(value_x0,field11);
    return;
    __builtin_unreachable();
}
block_23: {

    return;
}
}

extern "C" uint64_t RecoveredCall_b2f0d0_0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b2f0d0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {
    const uint64_t result0 = RecoveredCall_b2f0d0_0(value_x0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 320));
    value_x19 = value_x0;
    value_x8 = field0;
    if (field0 == 0) goto block_9;
    goto block_4;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x0 = field1;
    if (field1 == 0) goto block_9;
    goto block_6;
}
block_6: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(value_x0);
    goto block_9;
}
block_9: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 328));
    value_x8 = field4;
    if (field4 == 0) goto block_16;
    goto block_11;
}
block_11: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x0 = field5;
    if (field5 == 0) goto block_16;
    goto block_13;
}
block_13: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 24));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(value_x0);
    goto block_16;
}
block_16: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x19 + 336));
    value_x8 = field8;
    if (field8 == 0) goto block_23;
    goto block_18;
}
block_18: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x0 = field9;
    if (field9 == 0) goto block_23;
    goto block_20;
}
block_20: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 24));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field11)(value_x0,field11);
    return;
    __builtin_unreachable();
}
block_23: {

    return;
}
}

extern "C" uint64_t RecoveredCall_b303c0_0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b303c0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {
    const uint64_t result0 = RecoveredCall_b303c0_0(value_x0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 320));
    value_x19 = value_x0;
    value_x8 = field0;
    if (field0 == 0) goto block_9;
    goto block_4;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x0 = field1;
    if (field1 == 0) goto block_9;
    goto block_6;
}
block_6: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(value_x0);
    goto block_9;
}
block_9: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 328));
    value_x8 = field4;
    if (field4 == 0) goto block_16;
    goto block_11;
}
block_11: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x0 = field5;
    if (field5 == 0) goto block_16;
    goto block_13;
}
block_13: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 24));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(value_x0);
    goto block_16;
}
block_16: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x19 + 336));
    value_x8 = field8;
    if (field8 == 0) goto block_23;
    goto block_18;
}
block_18: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x0 = field9;
    if (field9 == 0) goto block_23;
    goto block_20;
}
block_20: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 24));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field11)(value_x0,field11);
    return;
    __builtin_unreachable();
}
block_23: {

    return;
}
}

extern "C" unsigned char LeafData_c1ca70_0[];
extern "C" __attribute__((noinline)) void RecoveredLeaf_c1ca70(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c1ca70_0) - 2192) + 2192);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 80));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 72));
    *reinterpret_cast<uint64_t*>((field1 + 8)) = field0;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 80));
    *reinterpret_cast<uint64_t*>((field2 + 0)) = field1;
    *reinterpret_cast<uint64_t*>(((value_x0 + 72) + 0)) = (value_x0 + 72);
    *reinterpret_cast<uint64_t*>((value_x0 + 80)) = (value_x0 + 72);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((value_x0 + 32) + 8));
    *reinterpret_cast<uint64_t*>((field3 + 8)) = field4;
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>(((value_x0 + 32) + 8));
    *reinterpret_cast<uint64_t*>((field5 + 0)) = field3;
    *reinterpret_cast<uint64_t*>((((value_x0 + 32) + 0) + 0)) = (value_x0 + 32);
    *reinterpret_cast<uint64_t*>((((value_x0 + 32) + 0) + 8)) = (value_x0 + 32);
    return;
}
}

extern "C" uint64_t RecoveredCall_c716e0_0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c716e0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t result0 = RecoveredCall_c716e0_0(value_x0);
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 176));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 168));
    *reinterpret_cast<uint8_t*>((value_x0 + 164)) = uint32_t(uint32_t(field0));
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x0 + 74));
    *reinterpret_cast<uint64_t*>((value_x0 + 156)) = field1;
    *reinterpret_cast<uint8_t*>((value_x0 + 153)) = uint32_t(uint32_t(field2));
    return;
}
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_d3eb50(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
    uint64_t value_x9;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 128));
    value_x8 = field0;
    if (field0 == 0) goto block_50;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 0));
    value_x19 = value_x0;
    value_x9 = field1;
    if (field1 == 0) goto block_15;
    goto block_5;
}
block_5: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((value_x19 + 56) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((value_x19 + 56) + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(value_x9)(field2,field3,(value_x19 + 140));
    *reinterpret_cast<uint32_t*>((value_x19 + 152)) = uint32_t(uint32_t(1));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 64));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x19);
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 128));
    value_x8 = field6;
    goto block_15;
}
block_15: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x9 = field7;
    if (field7 == 0) goto block_27;
    goto block_17;
}
block_17: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((value_x19 + 56) + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>(((value_x19 + 56) + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(value_x9)(field8,field9,(value_x19 + 156));
    *reinterpret_cast<uint32_t*>((value_x19 + 168)) = uint32_t(uint32_t(1));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 72));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t)>(field11)(value_x19);
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((value_x19 + 128));
    value_x8 = field12;
    goto block_27;
}
block_27: {
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((value_x8 + 16));
    value_x9 = field13;
    if (field13 == 0) goto block_39;
    goto block_29;
}
block_29: {
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>(((value_x19 + 56) + 0));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((value_x19 + 56) + 8));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(value_x9)(field14,field15,(value_x19 + 172));
    *reinterpret_cast<uint32_t*>((value_x19 + 184)) = uint32_t(uint32_t(1));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 80));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t)>(field17)(value_x19);
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((value_x19 + 128));
    value_x8 = field18;
    goto block_39;
}
block_39: {
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((value_x8 + 24));
    value_x8 = field19;
    if (field19 == 0) goto block_50;
    goto block_41;
}
block_41: {
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((value_x19 + 56) + 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>(((value_x19 + 56) + 8));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(value_x8)(field20,field21,(value_x19 + 188));
    *reinterpret_cast<uint32_t*>((value_x19 + 200)) = uint32_t(uint32_t(1));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((field22 + 88));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field23)(value_x19,field23);
    return;
    __builtin_unreachable();
}
block_50: {

    return;
}
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_d4fec0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 128));
    value_x8 = field0;
    if (field0 == 0) goto block_13;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 0));
    value_x8 = field1;
    if (field1 == 0) goto block_13;
    goto block_4;
}
block_4: {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x0 + 176));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field2)) == 0) goto block_14;
    goto block_7;
}
block_7: {
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>(((value_x19 + 184) + 0));
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>(((value_x19 + 184) + 4));
    *reinterpret_cast<uint32_t*>((value_x19 + 144)) = uint32_t(uint32_t(field3));
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((value_x19 + 192));
    *reinterpret_cast<uint32_t*>((value_x19 + 152)) = uint32_t(uint32_t(field4));
    *reinterpret_cast<uint32_t*>((value_x19 + 160)) = uint32_t(uint32_t(field5));
    goto block_20;
}
block_13: {

    return;
}
block_14: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>(((value_x19 + 56) + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((value_x19 + 56) + 8));
    const uint32_t field8 = *reinterpret_cast<const uint32_t*>((value_x19 + 140));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t)>(value_x8)(field6,field7,uint32_t(field8),(value_x19 + 144),(value_x19 + 152),(value_x19 + 160));
    goto block_20;
}
block_20: {
    *reinterpret_cast<uint32_t*>((value_x19 + 164)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint32_t*>((value_x19 + 156)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint32_t*>((value_x19 + 148)) = uint32_t(uint32_t(1));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 64));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field10)(value_x19,field10);
    return;
    __builtin_unreachable();
}
}

extern "C" uint64_t RecoveredCall_d7f1e0_0(uint64_t);
extern "C" uint64_t RecoveredCall_d7f1e0_1(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d7f1e0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 48));
    if (uint32_t(uint32_t(field0)) == 0) goto block_91;
    goto block_2;
}
block_2: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 352));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field1)) != 0) goto block_7;
    goto block_5;
}
block_5: {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x19 + 356));
    if (uint32_t(uint32_t(field2)) == 0) goto block_91;
    goto block_7;
}
block_7: {
    const uint64_t result0 = RecoveredCall_d7f1e0_0(value_x19);
    const uint64_t result1 = RecoveredCall_d7f1e0_1(value_x19);
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x19 + 360));
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((value_x19 + 832));
    value_x8 = uint32_t(field3);
    if (uint32_t(uint32_t(field4)) == uint32_t(uint32_t(field3))) goto block_25;
    goto block_15;
}
block_15: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x19 + 800));
    *reinterpret_cast<uint32_t*>((value_x19 + 832)) = uint32_t(value_x8);
    value_x0 = field5;
    if (field5 == 0) goto block_25;
    goto block_18;
}
block_18: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field7)(value_x0,(value_x19 + 816));
    if (uint32_t(result2) == 0) goto block_25;
    goto block_23;
}
block_23: {
    *reinterpret_cast<uint32_t*>((value_x19 + 760)) = uint32_t(uint32_t(1));
    goto block_25;
}
block_25: {
    const uint32_t field8 = *reinterpret_cast<const uint32_t*>((value_x19 + 360));
    const uint32_t field9 = *reinterpret_cast<const uint32_t*>((value_x19 + 676));
    value_x8 = uint32_t(field8);
    if (uint32_t(uint32_t(field9)) == uint32_t(uint32_t(field8))) goto block_39;
    goto block_29;
}
block_29: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x19 + 656));
    *reinterpret_cast<uint32_t*>((value_x19 + 676)) = uint32_t(value_x8);
    value_x0 = field10;
    if (field10 == 0) goto block_39;
    goto block_32;
}
block_32: {
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((field11 + 16));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field12)(value_x0,(value_x19 + 672));
    if (uint32_t(result3) == 0) goto block_39;
    goto block_37;
}
block_37: {
    *reinterpret_cast<uint32_t*>((value_x19 + 616)) = uint32_t(uint32_t(1));
    goto block_39;
}
block_39: {
    const uint32_t field13 = *reinterpret_cast<const uint32_t*>((value_x19 + 360));
    const uint32_t field14 = *reinterpret_cast<const uint32_t*>((value_x19 + 1344));
    value_x8 = uint32_t(field13);
    if (uint32_t(uint32_t(field14)) == uint32_t(uint32_t(field13))) goto block_53;
    goto block_43;
}
block_43: {
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((value_x19 + 1256));
    *reinterpret_cast<uint32_t*>((value_x19 + 1344)) = uint32_t(value_x8);
    value_x0 = field15;
    if (field15 == 0) goto block_53;
    goto block_46;
}
block_46: {
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 16));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field17)(value_x0,(value_x19 + 1272));
    if (uint32_t(result4) == 0) goto block_53;
    goto block_51;
}
block_51: {
    *reinterpret_cast<uint32_t*>((value_x19 + 1216)) = uint32_t(uint32_t(1));
    goto block_53;
}
block_53: {
    const uint32_t field18 = *reinterpret_cast<const uint32_t*>((value_x19 + 360));
    const uint32_t field19 = *reinterpret_cast<const uint32_t*>((value_x19 + 1204));
    value_x8 = uint32_t(field18);
    if (uint32_t(uint32_t(field19)) == uint32_t(uint32_t(field18))) goto block_67;
    goto block_57;
}
block_57: {
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>((value_x19 + 1184));
    *reinterpret_cast<uint32_t*>((value_x19 + 1204)) = uint32_t(value_x8);
    value_x0 = field20;
    if (field20 == 0) goto block_67;
    goto block_60;
}
block_60: {
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 16));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field22)(value_x0,(value_x19 + 1200));
    if (uint32_t(result5) == 0) goto block_67;
    goto block_65;
}
block_65: {
    *reinterpret_cast<uint32_t*>((value_x19 + 1144)) = uint32_t(uint32_t(1));
    goto block_67;
}
block_67: {
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((value_x19 + 888));
    value_x0 = field23;
    if (field23 == 0) goto block_76;
    goto block_69;
}
block_69: {
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 16));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field25)(value_x0,(value_x19 + 904));
    if (uint32_t(result6) == 0) goto block_76;
    goto block_74;
}
block_74: {
    *reinterpret_cast<uint32_t*>((value_x19 + 848)) = uint32_t(uint32_t(1));
    goto block_76;
}
block_76: {
    const uint32_t field26 = *reinterpret_cast<const uint32_t*>((value_x19 + 360));
    const uint32_t field27 = *reinterpret_cast<const uint32_t*>((value_x19 + 748));
    value_x8 = uint32_t(field26);
    if (uint32_t(uint32_t(field27)) == uint32_t(uint32_t(field26))) goto block_90;
    goto block_80;
}
block_80: {
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>((value_x19 + 728));
    *reinterpret_cast<uint32_t*>((value_x19 + 748)) = uint32_t(value_x8);
    value_x0 = field28;
    if (field28 == 0) goto block_90;
    goto block_83;
}
block_83: {
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>((field29 + 16));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field30)(value_x0,(value_x19 + 744));
    if (uint32_t(result7) == 0) goto block_90;
    goto block_88;
}
block_88: {
    *reinterpret_cast<uint32_t*>((value_x19 + 688)) = uint32_t(uint32_t(1));
    goto block_90;
}
block_90: {
    *reinterpret_cast<uint64_t*>((value_x19 + 352)) = 0;
    goto block_91;
}
block_91: {

    return;
}
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_e14f00(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
    uint64_t value_x22;
    uint64_t value_x8;
block_0: {

    if (value_x0 == 0) goto block_15;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    value_x19 = value_x0;
    value_x22 = field0;
    if (field0 == 0) goto block_15;
    goto block_4;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x22 + 176));
    value_x21 = field1;
    if (field1 == 0) goto block_15;
    goto block_6;
}
block_6: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + 16));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x22 + 200));
    value_x1 = field3;
    value_x20 = field2;
    value_x8 = (value_x22 + 200);
    if (field3 == 0) goto block_15;
    goto block_10;
}
block_10: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x1 + 16));
    if (field4 == value_x19) goto block_16;
    goto block_13;
}
block_13: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    value_x1 = field5;
    if (field5 != 0) goto block_10;
    goto block_15;
}
block_15: {

    return;
}
block_16: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((((field6 == 0) ? value_x8 : (field6 + 8)) + 0)) = field7;
    *reinterpret_cast<uint64_t*>((((field7 == 0) ? (value_x22 + 208) : field7) + 0)) = field6;
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x20 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field8)(value_x20,value_x1);
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x22 + 160));
    if (field9 != value_x19) goto block_36;
    goto block_31;
}
block_31: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x22 + 200));
    *reinterpret_cast<uint64_t*>((value_x22 + 160)) = 0;
    value_x8 = field10;
    if (field10 == 0) goto block_36;
    goto block_34;
}
block_34: {
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((value_x8 + 16));
    *reinterpret_cast<uint64_t*>((value_x22 + 160)) = field11;
    goto block_36;
}
block_36: {
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((value_x19 + 16));
    value_x8 = field12;
    if (field12 == 0) goto block_40;
    goto block_38;
}
block_38: {
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(value_x8)(value_x19);
    goto block_40;
}
block_40: {
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((value_x21 + 24));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 120));
    value_x8 = field14;
    if (field14 == 0) goto block_45;
    goto block_43;
}
block_43: {
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(value_x8)(value_x19);
    goto block_45;
}
block_45: {
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((value_x19 + 80));
    value_x1 = field15;
    if (field15 == 0) goto block_50;
    goto block_47;
}
block_47: {
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((value_x20 + 16));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field16)(value_x20,value_x1);
    goto block_50;
}
block_50: {
    *reinterpret_cast<uint64_t*>((value_x19 + 80)) = 0;
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((value_x20 + 16));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field17)(value_x20,value_x19,field17);
    return;
    __builtin_unreachable();
}
}

extern "C" uint64_t RecoveredCall_e18cb0_0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_e18cb0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {

    if (value_x0 == 0) goto block_47;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 184));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 264));
    const uint64_t result0 = RecoveredCall_e18cb0_0(field1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 272));
    value_x1 = field2;
    value_x19 = value_x0;
    value_x20 = field0;
    if (field2 == 0) goto block_10;
    goto block_7;
}
block_7: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x20 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(value_x20,value_x1);
    goto block_10;
}
block_10: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 248));
    *reinterpret_cast<uint64_t*>((value_x19 + 272)) = 0;
    value_x1 = field4;
    if (field4 == 0) goto block_16;
    goto block_13;
}
block_13: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x20 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)(value_x20,value_x1);
    goto block_16;
}
block_16: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 256));
    *reinterpret_cast<uint64_t*>((value_x19 + 248)) = 0;
    value_x1 = field6;
    if (field6 == 0) goto block_22;
    goto block_19;
}
block_19: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x20 + 16));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field7)(value_x20,value_x1);
    goto block_22;
}
block_22: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x19 + 40));
    *reinterpret_cast<uint64_t*>((value_x19 + 256)) = 0;
    value_x1 = field8;
    if (field8 == 0) goto block_28;
    goto block_25;
}
block_25: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x20 + 16));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field9)(value_x20,value_x1);
    goto block_28;
}
block_28: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x19 + 48));
    *reinterpret_cast<uint64_t*>((value_x19 + 40)) = 0;
    value_x1 = field10;
    if (field10 == 0) goto block_34;
    goto block_31;
}
block_31: {
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((value_x20 + 16));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field11)(value_x20,value_x1);
    goto block_34;
}
block_34: {
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((value_x19 + 64));
    *reinterpret_cast<uint64_t*>((value_x19 + 48)) = 0;
    value_x1 = field12;
    if (field12 == 0) goto block_40;
    goto block_37;
}
block_37: {
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((value_x20 + 16));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field13)(value_x20,value_x1);
    goto block_40;
}
block_40: {
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((value_x19 + 264));
    *reinterpret_cast<uint64_t*>((value_x19 + 64)) = 0;
    value_x1 = field14;
    if (field14 == 0) goto block_46;
    goto block_43;
}
block_43: {
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((value_x20 + 16));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field15)(value_x20,value_x1);
    goto block_46;
}
block_46: {
    *reinterpret_cast<uint64_t*>((value_x19 + 264)) = 0;
    goto block_47;
}
block_47: {

    return;
}
}

extern "C" unsigned char LeafData_e24620_12[];
extern "C" void LeafTarget_e24620_14(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_e24620(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 832));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(field0)(value_x0,uint32_t(((uint32_t(uint32_t(24932)) & 0xffffull) | (26725ull << 16))),value_x1,0);
    value_x19 = value_x1;
    value_x20 = value_x0;
    if (uint32_t(result0) == 0) goto block_10;
    goto block_9;
}
block_9: {

    return;
}
block_10: {

    return LeafTarget_e24620_14(value_x19,((reinterpret_cast<uintptr_t>(LeafData_e24620_12) - 824) + 824),(value_x20 + 304));
}
}

extern "C" unsigned char LeafData_e24a20_12[];
extern "C" void LeafTarget_e24a20_14(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_e24a20(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 832));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(field0)(value_x0,uint32_t(((uint32_t(uint32_t(29556)) & 0xffffull) | (28783ull << 16))),value_x1,0);
    value_x19 = value_x1;
    value_x20 = value_x0;
    if (uint32_t(result0) == 0) goto block_10;
    goto block_9;
}
block_9: {

    return;
}
block_10: {

    return LeafTarget_e24a20_14(value_x19,((reinterpret_cast<uintptr_t>(LeafData_e24a20_12) - 1036) + 1036),(value_x20 + 752));
}
}

extern "C" unsigned char LeafData_e25860_12[];
extern "C" void LeafTarget_e25860_14(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_e25860(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 832));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(field0)(value_x0,uint32_t(((uint32_t(uint32_t(19540)) & 0xffffull) | (20547ull << 16))),value_x1,0);
    value_x19 = value_x1;
    value_x20 = value_x0;
    if (uint32_t(result0) == 0) goto block_10;
    goto block_9;
}
block_9: {

    return;
}
block_10: {

    return LeafTarget_e25860_14(value_x19,((reinterpret_cast<uintptr_t>(LeafData_e25860_12) - 908) + 908),(value_x20 + 936));
}
}

extern "C" unsigned char LeafData_e258c0_12[];
extern "C" void LeafTarget_e258c0_14(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_e258c0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 832));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(field0)(value_x0,uint32_t(((uint32_t(uint32_t(25956)) & 0xffffull) | (25192ull << 16))),value_x1,0);
    value_x19 = value_x1;
    value_x20 = value_x0;
    if (uint32_t(result0) == 0) goto block_10;
    goto block_9;
}
block_9: {

    return;
}
block_10: {

    return LeafTarget_e258c0_14(value_x19,((reinterpret_cast<uintptr_t>(LeafData_e258c0_12) - 824) + 824),(value_x20 + 304));
}
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_e4b3d0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    if (field0 != uint32_t(((uint32_t(uint32_t(48879)) & 0xffffull) | (57005ull << 16)))) goto block_26;
    goto block_5;
}
block_5: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 56));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    value_x1 = field2;
    value_x19 = value_x0;
    value_x20 = field1;
    if (field2 == 0) goto block_12;
    goto block_9;
}
block_9: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x20 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(value_x20,value_x1);
    goto block_12;
}
block_12: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 40));
    *reinterpret_cast<uint64_t*>((value_x19 + 0)) = 0;
    value_x1 = field4;
    if (field4 == 0) goto block_18;
    goto block_15;
}
block_15: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x20 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)(value_x20,value_x1);
    goto block_18;
}
block_18: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 48));
    *reinterpret_cast<uint64_t*>((value_x19 + 40)) = 0;
    value_x1 = field6;
    if (field6 == 0) goto block_24;
    goto block_21;
}
block_21: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x20 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field7)(value_x20,value_x1);
    goto block_24;
}
block_24: {
    *reinterpret_cast<uint64_t*>((value_x19 + 48)) = 0;
    *reinterpret_cast<uint64_t*>((value_x19 + 24)) = 0;
    goto block_26;
}
block_26: {

    return;
}
}

extern "C" uint64_t RecoveredCall_ec2b10_1(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ec2b10(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
    uint64_t value_x22;
    uint64_t value_x23;
    uint64_t value_x24;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 264));
    value_x19 = value_x0;
    value_x23 = field0;
    if (field0 == 0) goto block_47;
    goto block_3;
}
block_3: {
    value_x20 = (value_x19 + 72);
    goto block_4;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x23 + 56));
    value_x21 = field1;
    if (field1 == 0) goto block_45;
    goto block_6;
}
block_6: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    value_x22 = field2;
    if (field2 == 0) goto block_20;
    goto block_8;
}
block_8: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((value_x22 + 8) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((value_x22 + 8) + 8));
    value_x1 = field4;
    value_x24 = field3;
    if (field4 == 0) goto block_14;
    goto block_10;
}
block_10: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field6)(value_x20,value_x1);
    goto block_14;
}
block_14: {
    const uint8_t field7 = *reinterpret_cast<const uint8_t*>((value_x22 + 43));
    if (uint32_t(uint32_t(field7)) == 0) goto block_18;
    goto block_16;
}
block_16: {
    const uint64_t result1 = RecoveredCall_ec2b10_1(value_x22);
    goto block_18;
}
block_18: {
    value_x22 = value_x24;
    if (value_x24 != 0) goto block_8;
    goto block_20;
}
block_20: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x22 = field8;
    if (field8 == 0) goto block_39;
    goto block_22;
}
block_22: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x22 + 8));
    value_x1 = field9;
    if (field9 == 0) goto block_31;
    goto block_24;
}
block_24: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 24));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((value_x1 + 24));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field11)(value_x20,value_x1);
    value_x1 = field12;
    if (field12 != 0) goto block_24;
    goto block_31;
}
block_31: {
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 24));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((value_x22 + 16));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field14)(value_x20,value_x22);
    value_x22 = field15;
    if (field15 != 0) goto block_22;
    goto block_39;
}
block_39: {
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 24));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field17)(value_x20,value_x21);
    *reinterpret_cast<uint64_t*>((value_x23 + 56)) = 0;
    goto block_45;
}
block_45: {
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((value_x23 + 16));
    value_x23 = field18;
    if (field18 != 0) goto block_4;
    goto block_47;
}
block_47: {
    *reinterpret_cast<uint64_t*>((value_x19 + 264)) = 0;
    return;
}
}

extern "C" uint64_t RecoveredCall_eff0e0_0(uint64_t);
extern "C" uint64_t RecoveredCall_eff0e0_1(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_eff0e0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {

    if (value_x0 == 0) goto block_15;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    value_x19 = value_x0;
    value_x8 = field0;
    if (field0 == 0) goto block_9;
    goto block_4;
}
block_4: {
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x8 + 61));
    if (uint32_t(uint32_t(field1)) != 9) goto block_9;
    goto block_7;
}
block_7: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 272));
    const uint64_t result0 = RecoveredCall_eff0e0_0(field2);
    goto block_9;
}
block_9: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 24));
    value_x19 = field3;
    if (field3 == 0) goto block_15;
    goto block_11;
}
block_11: {
    const uint64_t result1 = RecoveredCall_eff0e0_1(value_x19);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 16));
    value_x19 = field4;
    if (field4 != 0) goto block_11;
    goto block_15;
}
block_15: {

    return;
}
}

extern "C" uint64_t RecoveredCall_f10220_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_f10220_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_f10220_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_f10220_3(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_f10220_4(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_f10220_5(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_f10220(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 100));
    if (uint32_t(uint32_t(field0)) == 0) goto block_3;
    goto block_2;
}
block_2: {

    return;
}
block_3: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x0 + 92));
    value_x19 = value_x0;
    value_x20 = value_x1;
    if (uint32_t(uint32_t(field1)) != uint32_t(uint32_t(field2))) goto block_13;
    goto block_9;
}
block_9: {
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x20 + 4));
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((value_x19 + 96));
    if (uint32_t(uint32_t(field3)) == uint32_t(uint32_t(field4))) goto block_2;
    goto block_13;
}
block_13: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x19 + 8));
    if (field5 == 0) goto block_37;
    goto block_15;
}
block_15: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 64));
    const uint64_t result0 = RecoveredCall_f10220_0(field6,uint32_t(32));
    value_x0 = result0;
    if (result0 == 0) goto block_2;
    goto block_19;
}
block_19: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = field7;
    const uint32_t field8 = *reinterpret_cast<const uint32_t*>((value_x19 + 92));
    *reinterpret_cast<uint32_t*>((value_x0 + 8)) = uint32_t(uint32_t((int32_t(uint32_t(uint32_t((uint32_t(uint32_t(field8)) + uint32_t(field7))))) >> 1)));
    const uint32_t field9 = *reinterpret_cast<const uint32_t*>((value_x19 + 96));
    *reinterpret_cast<uint64_t*>((value_x0 + 16)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 12)) = uint32_t(uint32_t((int32_t(uint32_t(uint32_t((uint32_t(uint32_t(field9)) + uint32_t((field7 >> 32)))))) >> 1)));
    *reinterpret_cast<uint8_t*>((value_x0 + 24)) = uint32_t(uint32_t(1));
    const uint64_t result1 = RecoveredCall_f10220_1(value_x19,value_x19,value_x0);
    goto block_37;
}
block_37: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x19 + 24));
    if (field10 == 0) goto block_61;
    goto block_39;
}
block_39: {
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((value_x19 + 64));
    const uint64_t result2 = RecoveredCall_f10220_2(field11,uint32_t(32));
    value_x0 = result2;
    if (result2 == 0) goto block_2;
    goto block_43;
}
block_43: {
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = field12;
    const uint32_t field13 = *reinterpret_cast<const uint32_t*>((value_x19 + 92));
    *reinterpret_cast<uint32_t*>((value_x0 + 8)) = uint32_t(uint32_t((int32_t(uint32_t(uint32_t((uint32_t(uint32_t(field13)) + uint32_t(field12))))) >> 1)));
    const uint32_t field14 = *reinterpret_cast<const uint32_t*>((value_x19 + 96));
    *reinterpret_cast<uint64_t*>((value_x0 + 16)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 12)) = uint32_t(uint32_t((int32_t(uint32_t(uint32_t((uint32_t(uint32_t(field14)) + uint32_t((field12 >> 32)))))) >> 1)));
    *reinterpret_cast<uint8_t*>((value_x0 + 24)) = uint32_t(uint32_t(1));
    const uint64_t result3 = RecoveredCall_f10220_3(value_x19,(value_x19 + 16),value_x0);
    goto block_61;
}
block_61: {
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((value_x19 + 40));
    if (field15 == 0) goto block_85;
    goto block_63;
}
block_63: {
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((value_x19 + 64));
    const uint64_t result4 = RecoveredCall_f10220_4(field16,uint32_t(32));
    value_x0 = result4;
    if (result4 == 0) goto block_2;
    goto block_67;
}
block_67: {
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = field17;
    const uint32_t field18 = *reinterpret_cast<const uint32_t*>((value_x19 + 92));
    *reinterpret_cast<uint32_t*>((value_x0 + 8)) = uint32_t(uint32_t((int32_t(uint32_t(uint32_t((uint32_t(uint32_t(field18)) + uint32_t(field17))))) >> 1)));
    const uint32_t field19 = *reinterpret_cast<const uint32_t*>((value_x19 + 96));
    *reinterpret_cast<uint64_t*>((value_x0 + 16)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 12)) = uint32_t(uint32_t((int32_t(uint32_t(uint32_t((uint32_t(uint32_t(field19)) + uint32_t((field17 >> 32)))))) >> 1)));
    *reinterpret_cast<uint8_t*>((value_x0 + 24)) = uint32_t(uint32_t(1));
    const uint64_t result5 = RecoveredCall_f10220_5(value_x19,(value_x19 + 32),value_x0);
    goto block_85;
}
block_85: {
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    *reinterpret_cast<uint64_t*>((value_x19 + 92)) = field20;
    goto block_2;
}
}

extern "C" uint64_t RecoveredCall_f104c0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_f104c0_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_f104c0_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_f104c0_3(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_f104c0_4(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_f104c0_5(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_f104c0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x2 = arg2;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 100));
    if (uint32_t(uint32_t(field0)) == 0) goto block_3;
    goto block_2;
}
block_2: {

    return;
}
block_3: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x2 + 0));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x0 + 92));
    value_x19 = value_x2;
    value_x20 = value_x0;
    value_x21 = value_x1;
    if (uint32_t(uint32_t(field1)) != uint32_t(uint32_t(field2))) goto block_14;
    goto block_10;
}
block_10: {
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x19 + 4));
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((value_x20 + 96));
    if (uint32_t(uint32_t(field3)) == uint32_t(uint32_t(field4))) goto block_2;
    goto block_14;
}
block_14: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x20 + 8));
    if (field5 == 0) goto block_29;
    goto block_16;
}
block_16: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x20 + 64));
    const uint64_t result0 = RecoveredCall_f104c0_0(field6,uint32_t(32));
    value_x0 = result0;
    if (result0 == 0) goto block_2;
    goto block_20;
}
block_20: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = field7;
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    *reinterpret_cast<uint8_t*>((value_x0 + 24)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 8) + 0)) = field8;
    *reinterpret_cast<uint64_t*>(((value_x0 + 8) + 8)) = 0;
    const uint64_t result1 = RecoveredCall_f104c0_1(value_x20,value_x20,value_x0);
    goto block_29;
}
block_29: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x20 + 24));
    if (field9 == 0) goto block_44;
    goto block_31;
}
block_31: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x20 + 64));
    const uint64_t result2 = RecoveredCall_f104c0_2(field10,uint32_t(32));
    value_x0 = result2;
    if (result2 == 0) goto block_2;
    goto block_35;
}
block_35: {
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = field11;
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    *reinterpret_cast<uint8_t*>((value_x0 + 24)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 8) + 0)) = field12;
    *reinterpret_cast<uint64_t*>(((value_x0 + 8) + 8)) = 0;
    const uint64_t result3 = RecoveredCall_f104c0_3(value_x20,(value_x20 + 16),value_x0);
    goto block_44;
}
block_44: {
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((value_x20 + 40));
    if (field13 == 0) goto block_59;
    goto block_46;
}
block_46: {
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((value_x20 + 64));
    const uint64_t result4 = RecoveredCall_f104c0_4(field14,uint32_t(32));
    value_x0 = result4;
    if (result4 == 0) goto block_2;
    goto block_50;
}
block_50: {
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = field15;
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    *reinterpret_cast<uint8_t*>((value_x0 + 24)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 8) + 0)) = field16;
    *reinterpret_cast<uint64_t*>(((value_x0 + 8) + 8)) = 0;
    const uint64_t result5 = RecoveredCall_f104c0_5(value_x20,(value_x20 + 32),value_x0);
    goto block_59;
}
block_59: {
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    *reinterpret_cast<uint64_t*>((value_x20 + 92)) = field17;
    goto block_2;
}
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_f8dd10(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    value_x19 = value_x0;
    value_x20 = field0;
    if (field0 == 0) goto block_64;
    goto block_3;
}
block_3: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 40));
    value_x21 = field1;
    if (field1 == 0) goto block_22;
    goto block_5;
}
block_5: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x1 = field2;
    if (field2 == 0) goto block_14;
    goto block_7;
}
block_7: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 24));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x1 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field4)(value_x20,value_x1);
    value_x1 = field5;
    if (field5 != 0) goto block_7;
    goto block_14;
}
block_14: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 24));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x21 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field7)(value_x20,value_x21);
    value_x21 = field8;
    if (field8 != 0) goto block_5;
    goto block_22;
}
block_22: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x19 + 24));
    value_x20 = field9;
    if (field9 == 0) goto block_43;
    goto block_24;
}
block_24: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x19 + 16));
    value_x21 = field10;
    if (field10 == 0) goto block_43;
    goto block_26;
}
block_26: {
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((value_x20 + 8));
    value_x1 = field11;
    if (field11 == 0) goto block_35;
    goto block_28;
}
block_28: {
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 24));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((value_x1 + 24));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field13)(value_x21,value_x1);
    value_x1 = field14;
    if (field14 != 0) goto block_28;
    goto block_35;
}
block_35: {
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((field15 + 24));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((value_x20 + 16));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field16)(value_x21,value_x20);
    value_x20 = field17;
    if (field17 != 0) goto block_26;
    goto block_43;
}
block_43: {
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    value_x20 = field18;
    if (field18 == 0) goto block_64;
    goto block_45;
}
block_45: {
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((value_x19 + 16));
    value_x21 = field19;
    if (field19 == 0) goto block_64;
    goto block_47;
}
block_47: {
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>((value_x20 + 8));
    value_x1 = field20;
    if (field20 == 0) goto block_56;
    goto block_49;
}
block_49: {
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 24));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((value_x1 + 24));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field22)(value_x21,value_x1);
    value_x1 = field23;
    if (field23 != 0) goto block_49;
    goto block_56;
}
block_56: {
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 24));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((value_x20 + 16));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field25)(value_x21,value_x20);
    value_x20 = field26;
    if (field26 != 0) goto block_47;
    goto block_64;
}
block_64: {
    *reinterpret_cast<uint32_t*>((value_x19 + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 32) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 32) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((value_x19 + 24)) = 0;
    return;
}
}
