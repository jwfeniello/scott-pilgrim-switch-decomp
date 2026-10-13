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

extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_792b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8;
block_0: {
    value_x8 = (value_x0 + 8);
    goto block_1;
}
block_1: {
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>((value_x8 + 0)), __ATOMIC_ACQUIRE);
    const uint64_t field1 = __atomic_load_n(reinterpret_cast<const uint64_t*>(((field0 + 96) + 0)), __ATOMIC_ACQUIRE);
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    *reinterpret_cast<uint32_t*>((field0 + 140)) = uint32_t(uint32_t(field2));
    value_x8 = (field0 + 96);
    if (field1 != 0) goto block_1;
    goto block_7;
}
block_7: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1601f0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
    uint64_t value_x9;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 88));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    value_x8 = field0;
    value_x9 = field1;
    if (field0 >= field1) goto block_6;
    goto block_4;
}
block_4: {
    *reinterpret_cast<uint64_t*>((value_x0 + 88)) = value_x9;
    value_x8 = value_x9;
    goto block_6;
}
block_6: {
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x0 + 96));
    if ((uint32_t(uint32_t(field2)) & 0x8ull) != 0) goto block_10;
    goto block_8;
}
block_8: {

    return uint32_t(-1);
}
block_10: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    value_x9 = field3;
    if (field3 >= value_x8) goto block_15;
    goto block_13;
}
block_13: {
    *reinterpret_cast<uint64_t*>((value_x0 + 32)) = value_x8;
    value_x9 = value_x8;
    goto block_15;
}
block_15: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field4;
    if (field4 >= value_x9) goto block_20;
    goto block_18;
}
block_18: {
    const uint8_t field5 = *reinterpret_cast<const uint8_t*>((value_x8 + 0));
    return uint32_t(field5);
}
block_20: {

    return uint32_t(-1);
}
}

extern "C" uint64_t RecoveredCall_1b8970_0(uint64_t);
extern "C" uint64_t RecoveredCall_1b8970_1(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1b8970(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {

    if (value_x0 == 0) goto block_13;
    goto block_1;
}
block_1: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 28));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field0)) == 0) goto block_14;
    goto block_4;
}
block_4: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x19 + 24));
    if (uint32_t(uint32_t(field1)) == 0) goto block_10;
    goto block_6;
}
block_6: {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x19 + 40));
    const uint64_t result0 = RecoveredCall_1b8970_0(uint32_t(field2));
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x19 + 40));
    const uint64_t result1 = RecoveredCall_1b8970_1(uint32_t(field3));
    goto block_10;
}
block_10: {
    *reinterpret_cast<uint32_t*>((value_x19 + 24)) = 0;
    *reinterpret_cast<uint32_t*>((value_x19 + 32)) = 0;
    value_x0 = uint32_t(1);
    goto block_13;
}
block_13: {

    return value_x0;
}
block_14: {

    return uint32_t(1);
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1b9440(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1;
    uint64_t value_x8;
block_0: {

    if (value_x0 == 0) goto block_18;
    goto block_1;
}
block_1: {
    value_x1 = arg1;
    if ((uint32_t(arg1) & 255) == 0) goto block_11;
    goto block_3;
}
block_3: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    value_x8 = field0;
    if (field0 == 0) goto block_8;
    goto block_5;
}
block_5: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x8 + 0));
    if (uint32_t(uint32_t(field1)) == uint32_t(value_x1)) goto block_18;
    goto block_8;
}
block_8: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 56));
    value_x0 = field2;
    if (field2 != 0) goto block_3;
    goto block_10;
}
block_10: {

    goto block_18;
}
block_11: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    value_x8 = field3;
    if (field3 == 0) goto block_16;
    goto block_13;
}
block_13: {
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((value_x8 + 0));
    if ((uint32_t(uint32_t(field4)) & uint32_t(value_x1)) != 0) goto block_18;
    goto block_16;
}
block_16: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x0 + 56));
    value_x0 = field5;
    if (field5 != 0) goto block_11;
    goto block_18;
}
block_18: {

    return value_x0;
}
}

extern "C" uint64_t RecoveredCall_1bad60_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1bad60(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t result0 = RecoveredCall_1bad60_0(value_x0);
    value_x0 = result0;
    if (result0 == 0) goto block_10;
    goto block_2;
}
block_2: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 596));
    const int32_t field1 = *reinterpret_cast<const int32_t*>((value_x0 + 592));
    value_x8 = field1;
    if (uint32_t(uint32_t(field0)) != uint32_t(field1)) goto block_8;
    goto block_6;
}
block_6: {

    return 0;
}
block_8: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((value_x0 + (value_x8 << 3)) + 80));
    value_x0 = field2;
    goto block_10;
}
block_10: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1c0240(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    if (value_x0 == 0) goto block_3;
    goto block_1;
}
block_1: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 0));
    return uint32_t(field0);
}
block_3: {

    return uint32_t(-1);
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1c0310(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    if (value_x0 == 0) goto block_3;
    goto block_1;
}
block_1: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 16));
    return uint32_t(field0);
}
block_3: {

    return uint32_t(1);
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1c3fe0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (uint32_t(value_x1) == 0) goto block_6;
    goto block_1;
}
block_1: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 8));
    if (uint32_t(uint32_t(field0)) == 0) goto block_6;
    goto block_3;
}
block_3: {
    *reinterpret_cast<uint32_t*>((value_x0 + 16)) = uint32_t(uint32_t(1));
    return value_x0;
}
block_6: {
    *reinterpret_cast<uint32_t*>((value_x0 + 16)) = 0;
    return value_x0;
}
}

extern "C" uint64_t RecoveredCall_1c7c30_0(uint64_t);
extern "C" uint64_t LeafTarget_1c7c30_6(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1c7c30(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint64_t result0 = RecoveredCall_1c7c30_0(value_x0);
    value_x19 = value_x0;
    if (uint32_t(result0) == 0) goto block_5;
    goto block_3;
}
block_3: {

    return 0;
}
block_5: {

    return LeafTarget_1c7c30_6(value_x19);
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1c80e0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 176));
    value_x19 = value_x0;
    value_x8 = uint32_t(field0);
    if (uint32_t(uint32_t(field0)) == 0) goto block_9;
    goto block_3;
}
block_3: {
    value_x0 = uint32_t(1);
    goto block_4;
}
block_4: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x19 + 172));
    *reinterpret_cast<uint32_t*>(((value_x19 + 172) + 0)) = uint32_t(uint32_t((uint32_t(uint32_t(field1)) + 1)));
    *reinterpret_cast<uint32_t*>(((value_x19 + 172) + 4)) = uint32_t(uint32_t((uint32_t(value_x8) + 1)));
    goto block_8;
}
block_8: {

    return value_x0;
}
block_9: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 112));
    value_x8 = field2;
    if (field2 == 0) goto block_3;
    goto block_11;
}
block_11: {
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(value_x8)(value_x19);
    value_x0 = result0;
    if (uint32_t(result0) == 0) goto block_8;
    goto block_14;
}
block_14: {
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x19 + 176));
    value_x8 = uint32_t(field3);
    goto block_4;
}
}

extern "C" unsigned char LeafData_1ca280_3[];
extern "C" uint64_t RecoveredCall_1ca280_0(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1ca280(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    if (value_x0 == 0) goto block_3;
    goto block_1;
}
block_1: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 8));
    return uint32_t(field0);
}
block_3: {
    const uint64_t result0 = RecoveredCall_1ca280_0(uint32_t(6),uint32_t(162),uint32_t(159),((reinterpret_cast<uintptr_t>(LeafData_1ca280_3) - 398) + 398),uint32_t(313));
    return uint32_t(-1);
}
}

extern "C" uint64_t LeafTarget_1cf5b0_4(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1cf5b0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    if (value_x0 == 0) goto block_3;
    goto block_1;
}
block_1: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 4));
    if ((uint32_t(uint32_t(field0)) & 0x1ull) != 0) goto block_4;
    goto block_3;
}
block_3: {

    return value_x0;
}
block_4: {

    return LeafTarget_1cf5b0_4(value_x0);
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1cfd60(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2;
    uint64_t value_x8;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 0));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    if (uint32_t(uint32_t(field0)) != uint32_t(uint32_t(field1))) goto block_9;
    goto block_4;
}
block_4: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    value_x8 = field2;
    if (field2 == 0) goto block_11;
    goto block_6;
}
block_6: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x8 + 136));
    value_x2 = field3;
    if (field3 == 0) goto block_11;
    goto block_8;
}
block_8: {
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(value_x2)(value_x0,value_x1,value_x2);
    return result0;
    __builtin_unreachable();
}
block_9: {

    return uint32_t(-1);
}
block_11: {

    return uint32_t(-2);
}
}

extern "C" uint64_t RecoveredCall_1d00d0_0(uint64_t);
extern "C" unsigned char LeafData_1d00d0_8[];
extern "C" uint64_t RecoveredCall_1d00d0_1(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1d00d0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 0));
    if (uint32_t(uint32_t(field0)) != 408) goto block_8;
    goto block_3;
}
block_3: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    const uint64_t result0 = RecoveredCall_1d00d0_0(field1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return field2;
}
block_8: {
    const uint64_t result1 = RecoveredCall_1d00d0_1(uint32_t(6),uint32_t(131),uint32_t(142),((reinterpret_cast<uintptr_t>(LeafData_1d00d0_8) - 1280) + 1280),uint32_t(328));
    return 0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1d02d0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x4;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    value_x8 = field0;
    if (field0 == 0) goto block_8;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 168));
    value_x4 = field1;
    if (field1 == 0) goto block_8;
    goto block_4;
}
block_4: {
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t)>(value_x4)(value_x0,uint32_t(3),0,value_x1,value_x4);
    return result0;
    __builtin_unreachable();
}
block_8: {

    return uint32_t(-2);
}
}

extern "C" uint64_t RecoveredCall_1d9980_2(uint64_t);
extern "C" uint64_t RecoveredCall_1d9980_3(uint64_t);
extern "C" uint64_t RecoveredCall_1d9980_5(uint64_t);
extern "C" uint64_t RecoveredCall_1d9980_6(uint64_t);
extern "C" uint64_t RecoveredCall_1d9980_7(uint64_t);
extern "C" uint64_t RecoveredCall_1d9980_8(uint64_t);
extern "C" uint64_t LeafTarget_1d9980_39(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1d9980(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x8;
block_0: {

    if (value_x0 == 0) goto block_40;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    value_x19 = value_x0;
    value_x8 = field1;
    if (field1 == 0) goto block_7;
    goto block_5;
}
block_5: {
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(value_x8)(value_x19);
    goto block_7;
}
block_7: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 96));
    value_x20 = field2;
    if (field2 == 0) goto block_16;
    goto block_9;
}
block_9: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x20 + 24));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((value_x20 + 0) + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>(((value_x20 + 0) + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field5);
    const uint64_t result2 = RecoveredCall_1d9980_2(value_x20);
    value_x20 = field4;
    if (field4 != 0) goto block_9;
    goto block_16;
}
block_16: {
    const uint32_t field6 = *reinterpret_cast<const uint32_t*>((value_x19 + 68));
    *reinterpret_cast<uint64_t*>((value_x19 + 96)) = 0;
    if ((uint32_t(uint32_t(field6)) & 0x80000000ull) == 0) goto block_22;
    goto block_19;
}
block_19: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 232));
    value_x0 = field7;
    if (field7 == 0) goto block_22;
    goto block_21;
}
block_21: {
    const uint64_t result3 = RecoveredCall_1d9980_3(value_x0);
    goto block_22;
}
block_22: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x19 + 8));
    value_x20 = field8;
    if (field8 == 0) goto block_31;
    goto block_24;
}
block_24: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 80));
    value_x8 = field10;
    if (field10 == 0) goto block_29;
    goto block_27;
}
block_27: {
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t)>(value_x8)(value_x20);
    goto block_29;
}
block_29: {
    const uint64_t result5 = RecoveredCall_1d9980_5(value_x20);
    goto block_31;
}
block_31: {
    const uint64_t result6 = RecoveredCall_1d9980_6((value_x19 + 16));
    const uint64_t result7 = RecoveredCall_1d9980_7((value_x19 + 40));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((value_x19 + 80));
    value_x0 = field11;
    if (field11 == 0) goto block_38;
    goto block_37;
}
block_37: {
    const uint64_t result8 = RecoveredCall_1d9980_8(value_x0);
    goto block_38;
}
block_38: {

    return LeafTarget_1d9980_39(value_x19);
}
block_40: {

    return value_x0;
}
}

extern "C" uint64_t RecoveredCall_1d9a40_1(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1d9a40(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {

    if (value_x0 == 0) goto block_12;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    value_x19 = value_x0;
    value_x20 = field0;
    if (field0 == 0) goto block_11;
    goto block_4;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x20 + 24));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((value_x20 + 0) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((value_x20 + 0) + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(field3);
    const uint64_t result1 = RecoveredCall_1d9a40_1(value_x20);
    value_x0 = result1;
    value_x20 = field2;
    if (field2 != 0) goto block_4;
    goto block_11;
}
block_11: {
    *reinterpret_cast<uint64_t*>((value_x19 + 0)) = 0;
    goto block_12;
}
block_12: {

    return value_x0;
}
}

extern "C" uint64_t RecoveredCall_1d9bb0_1(uint64_t,uint64_t);
extern "C" uint64_t LeafTarget_1d9bb0_13(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1d9bb0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
    uint64_t value_x9;
block_0: {

    if (value_x0 == 0) goto block_14;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 88));
    value_x19 = value_x0;
    value_x8 = field1;
    value_x9 = field0;
    if (field1 != 0) goto block_7;
    goto block_5;
}
block_5: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x9 + 80));
    value_x8 = field2;
    if (field2 == 0) goto block_9;
    goto block_7;
}
block_7: {
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(value_x8)(value_x19);
    goto block_9;
}
block_9: {
    const uint64_t result1 = RecoveredCall_1d9bb0_1(value_x19,uint32_t(88));
    return LeafTarget_1d9bb0_13(value_x19);
}
block_14: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1da3c0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 68));
    if ((uint32_t(uint32_t(field0)) & 0x80000000ull) != 0) goto block_4;
    goto block_2;
}
block_2: {

    return 0;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 232));
    return field1;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1da990(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
block_0: {

    if (value_x0 == 0) goto block_12;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    if (field0 != value_x1) goto block_10;
    goto block_4;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    if (field1 != value_x2) goto block_10;
    goto block_7;
}
block_7: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    if (field2 == value_x3) goto block_13;
    goto block_10;
}
block_10: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    value_x0 = field3;
    if (field3 != 0) goto block_1;
    goto block_12;
}
block_12: {

    return value_x0;
}
block_13: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    return field4;
}
}

extern "C" uint64_t RecoveredCall_1e2420_0(uint64_t,uint64_t);
extern "C" uint64_t LeafTarget_1e2420_11(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1e2420(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint64_t result0 = RecoveredCall_1e2420_0(value_x0,value_x1);
    value_x19 = value_x0;
    value_x20 = value_x1;
    if (uint32_t(result0) == 0) goto block_6;
    goto block_4;
}
block_4: {

    return uint32_t(1);
}
block_6: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x20 + 40));
    if (uint32_t(uint32_t(field0)) == 0) goto block_4;
    goto block_8;
}
block_8: {

    return LeafTarget_1e2420_11((value_x20 + 32),(value_x19 + 104),(value_x20 + 32));
}
}

extern "C" uint64_t LeafTarget_1e5a90_2(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t LeafTarget_1e5a90_3(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1e5a90(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
    uint64_t value_x4 = arg4;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 16));
    if (uint32_t(uint32_t(field0)) == 0) goto block_3;
    goto block_2;
}
block_2: {

    return LeafTarget_1e5a90_2(value_x0,value_x1,value_x2,value_x3,value_x4);
}
block_3: {

    return LeafTarget_1e5a90_3(value_x0,value_x1,value_x2,value_x3,value_x4);
}
}

extern "C" uint64_t LeafTarget_1e5e00_2(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t LeafTarget_1e5e00_3(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1e5e00(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 16));
    if (uint32_t(uint32_t(field0)) == 0) goto block_3;
    goto block_2;
}
block_2: {

    return LeafTarget_1e5e00_2(value_x0,value_x1,value_x2);
}
block_3: {

    return LeafTarget_1e5e00_3(value_x0,value_x1,value_x2);
}
}

extern "C" uint64_t LeafTarget_1f19d0_3(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1f19d0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
block_0: {

    if (value_x1 == 0) goto block_4;
    goto block_1;
}
block_1: {

    return LeafTarget_1f19d0_3(value_x0,value_x1,value_x2,value_x3,uint32_t(7),0);
}
block_4: {

    return uint32_t(-2);
}
}

extern "C" uint64_t LeafTarget_1f4ef0_4(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1f4ef0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {

    if (value_x0 == 0) goto block_5;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    value_x8 = field0;
    if (field0 == 0) goto block_5;
    goto block_3;
}
block_3: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 48));
    return LeafTarget_1f4ef0_4(field1);
}
block_5: {

    return 0;
}
}

extern "C" uint64_t RecoveredCall_1f87d0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1f87d0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    value_x8 = field0;
    if (uint32_t(arg0) == 3) goto block_8;
    goto block_3;
}
block_3: {

    if (uint32_t(arg0) != 1) goto block_11;
    goto block_5;
}
block_5: {
    *reinterpret_cast<uint64_t*>((value_x8 + 16)) = 0;
    return uint32_t(1);
}
block_8: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 16));
    value_x0 = field1;
    if (field1 == 0) goto block_11;
    goto block_10;
}
block_10: {
    const uint64_t result0 = RecoveredCall_1f87d0_0(value_x0);
    goto block_11;
}
block_11: {

    return uint32_t(1);
}
}

extern "C" uint64_t LeafTarget_20b7c0_3(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_20b7c0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 176));
    if (field0 == 0) goto block_4;
    goto block_2;
}
block_2: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 24));
    return LeafTarget_20b7c0_3(uint32_t(field1),value_x1);
}
block_4: {

    return uint32_t(3);
}
}

extern "C" uint64_t LeafTarget_20b8a0_5(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_20b8a0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    value_x8 = field0;
    if (field0 == 0) goto block_4;
    goto block_2;
}
block_2: {
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x8 + 0));
    if ((uint32_t(uint32_t(field1)) & 0x8ull) != 0) goto block_5;
    goto block_4;
}
block_4: {

    return value_x0;
}
block_5: {

    return LeafTarget_20b8a0_5(value_x0);
}
}

extern "C" uint64_t RecoveredCall_214210_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_214210(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    value_x0 = field0;
    if (field0 == 0) goto block_6;
    goto block_2;
}
block_2: {
    const uint64_t result0 = RecoveredCall_214210_0(value_x0);
    return uint32_t((result0 == 0));
}
block_6: {

    return uint32_t(1);
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2163d0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    uint64_t value_x3 = arg3;
block_0: {

    if (uint32_t(arg1) != 3) goto block_6;
    goto block_2;
}
block_2: {
    *reinterpret_cast<uint32_t*>((value_x3 + 0)) = uint32_t(uint32_t(672));
    return uint32_t(1);
}
block_6: {

    return uint32_t(-2);
}
}

extern "C" uint64_t RecoveredCall_21bdf0_0(uint64_t);
extern "C" uint64_t RecoveredCall_21bdf0_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_21bdf0_2(uint64_t);
extern "C" uint64_t LeafTarget_21bdf0_12(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_21bdf0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1;
    uint64_t value_x19;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 40));
    const uint64_t result0 = RecoveredCall_21bdf0_0((field0 + 32));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    value_x0 = field1;
    value_x19 = field0;
    if (field1 == 0) goto block_11;
    goto block_5;
}
block_5: {
    const int32_t field2 = *reinterpret_cast<const int32_t*>((value_x19 + 8));
    value_x1 = field2;
    if (uint32_t(field2) == 0) goto block_9;
    goto block_7;
}
block_7: {
    const uint64_t result1 = RecoveredCall_21bdf0_1(value_x0,value_x1);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 16));
    value_x0 = field3;
    goto block_9;
}
block_9: {
    const uint64_t result2 = RecoveredCall_21bdf0_2(value_x0);
    *reinterpret_cast<uint64_t*>((value_x19 + 16)) = 0;
    goto block_11;
}
block_11: {

    return LeafTarget_21bdf0_12(value_x19);
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_233f90(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 4));
    if (uint32_t(uint32_t(field0)) != (1 << 12)) goto block_12;
    goto block_3;
}
block_3: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 0));
    if (uint32_t(uint32_t((uint32_t(uint32_t(field1)) & 4294967040))) != 768) goto block_16;
    goto block_7;
}
block_7: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 128));
    value_x8 = field2;
    if (field2 == 0) goto block_14;
    goto block_9;
}
block_9: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x8 + 992));
    return field3;
}
block_12: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 408));
    value_x8 = field4;
    if (field4 == 0) goto block_18;
    goto block_14;
}
block_14: {

    return value_x8;
}
block_16: {

    return 0;
}
block_18: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x0 + 368));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 272));
    return field6;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_25e600(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 292));
    if (uint32_t(uint32_t(field0)) != uint32_t(value_x1)) goto block_4;
    goto block_3;
}
block_3: {

    return value_x0;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 264));
    *reinterpret_cast<uint32_t*>((value_x0 + 292)) = uint32_t(value_x1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 120));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)((value_x0 + 264),field2);
    return result0;
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_268880(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 32));
    value_x8 = field1;
    if (field0 != field1) goto block_5;
    goto block_4;
}
block_4: {

    return value_x0;
}
block_5: {
    *reinterpret_cast<uint64_t*>((value_x0 + 32)) = value_x8;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 120));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(value_x0,field3);
    return result0;
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2c1b00(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 308));
    if (uint32_t(uint32_t(field0)) != uint32_t(value_x1)) goto block_4;
    goto block_3;
}
block_3: {

    return value_x0;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 280));
    *reinterpret_cast<uint32_t*>((value_x0 + 308)) = uint32_t(value_x1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 120));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)((value_x0 + 280),field2);
    return result0;
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2c1b30(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 348));
    if (uint32_t(uint32_t(field0)) != uint32_t(value_x1)) goto block_4;
    goto block_3;
}
block_3: {

    return value_x0;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 320));
    *reinterpret_cast<uint32_t*>((value_x0 + 348)) = uint32_t(value_x1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 120));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)((value_x0 + 320),field2);
    return result0;
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2c2d40(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 28));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 28));
    value_x8 = uint32_t(field0);
    if (uint32_t(uint32_t(field1)) != uint32_t(uint32_t(field0))) goto block_5;
    goto block_4;
}
block_4: {

    return value_x0;
}
block_5: {
    *reinterpret_cast<uint32_t*>((value_x0 + 28)) = uint32_t(value_x8);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 120));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(value_x0,field3);
    return result0;
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2c2d70(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 28));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 28));
    value_x8 = uint32_t(field0);
    if (uint32_t(uint32_t(field1)) != uint32_t(uint32_t(field0))) goto block_5;
    goto block_4;
}
block_4: {

    return value_x0;
}
block_5: {
    *reinterpret_cast<uint32_t*>((value_x0 + 28)) = uint32_t(value_x8);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 120));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(value_x0,field3);
    return result0;
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2c2e40(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 348));
    if (uint32_t(uint32_t(field0)) > uint32_t(value_x1)) goto block_6;
    goto block_3;
}
block_3: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 388));
    if (uint32_t(uint32_t(field1)) != uint32_t(value_x1)) goto block_7;
    goto block_6;
}
block_6: {

    return value_x0;
}
block_7: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 360));
    *reinterpret_cast<uint32_t*>((value_x0 + 388)) = uint32_t(value_x1);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 120));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)((value_x0 + 360),field3);
    return result0;
    __builtin_unreachable();
}
}

extern "C" uint64_t LeafTarget_389550_8(uint64_t);
extern "C" uint64_t LeafTarget_389550_10(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_389550(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((value_x0 + 48) + 8));
    value_x8 = (value_x0 + 48);
    if (field0 != field1) goto block_7;
    goto block_5;
}
block_5: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 120));
    if (field2 == 0) goto block_9;
    goto block_7;
}
block_7: {

    return LeafTarget_389550_8(value_x8);
}
block_9: {

    return LeafTarget_389550_10((value_x0 + 136));
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_38a930(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 32));
    if ((uint32_t(uint32_t(field0)) & 0x1ull) == 0) goto block_4;
    goto block_2;
}
block_2: {
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x0 + 112));
    if (uint32_t(uint32_t(field1)) == 0) goto block_6;
    goto block_4;
}
block_4: {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x0 + 64));
    return uint32_t(field2);
}
block_6: {

    return uint32_t(-1);
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_38b1a0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 32));
    if ((uint32_t(uint32_t(field0)) & 0x1ull) == 0) goto block_4;
    goto block_2;
}
block_2: {
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x0 + 76));
    if (uint32_t(uint32_t(field1)) == 0) goto block_6;
    goto block_4;
}
block_4: {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x0 + 72));
    return uint32_t(field2);
}
block_6: {

    return uint32_t(-1);
}
}

extern "C" uint64_t LeafTarget_38c170_2(uint64_t,uint64_t);
extern "C" uint64_t LeafTarget_38c170_4(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_38c170(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (uint32_t(value_x1) == 0) goto block_3;
    goto block_1;
}
block_1: {

    return LeafTarget_38c170_2(value_x0,uint32_t(3));
}
block_3: {

    return LeafTarget_38c170_4(value_x0,uint32_t(2));
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_3c21f0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 32));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((field1 + 104));
    value_x8 = field0;
    if (uint32_t(uint32_t(field2)) == 1) goto block_9;
    goto block_5;
}
block_5: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x0 + 72));
    const uint8_t field4 = *reinterpret_cast<const uint8_t*>((field3 + 24));
    if (uint32_t(uint32_t(field4)) != 12) goto block_10;
    goto block_9;
}
block_9: {

    return value_x0;
}
block_10: {
    *reinterpret_cast<uint8_t*>((value_x0 + 82)) = uint32_t(uint32_t(1));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x8 + 32));
    const uint16_t field6 = *reinterpret_cast<const uint16_t*>((field5 + 108));
    value_x0 = field5;
    if (uint32_t(uint32_t(field6)) != 0) goto block_17;
    goto block_15;
}
block_15: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    if (field7 == 0) goto block_9;
    goto block_17;
}
block_17: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field9)(value_x0,field9);
    return result0;
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_3ee460(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    *reinterpret_cast<uint32_t*>((value_x0 + 0)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 8)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 16)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 32)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 40)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 48)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 56)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 64)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 72)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 80)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 88)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 96)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 104)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 112)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 120)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 128)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 136)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 144)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 152)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 160)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 168)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 176)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 184)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 192)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 200)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 208)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 216)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 224)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 232)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 240)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 248)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 256)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 264)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 272)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 280)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 288)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 296)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 304)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 312)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 320)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 328)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 336)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 344)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 352)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 360)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 368)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 376)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 384)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 392)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 400)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 408)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 416)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 424)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 432)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 440)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 448)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 456)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 464)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 472)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 480)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 488)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 496)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 504)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 512)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 520)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 528)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 536)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 544)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 552)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 560)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 568)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 576)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 584)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 592)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 600)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 608)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 616)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 624)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 632)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 640)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 648)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 656)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 664)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 672)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 680)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 688)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 696)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 704)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 712)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 720)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 728)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 736)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 744)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 752)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 760)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 768)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 776)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 784)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 792)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 800)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 808)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 816)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 824)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 832)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 840)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 848)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 856)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 864)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 872)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 880)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 888)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 896)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 904)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 912)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 920)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 928)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 936)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 944)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 952)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 960)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 968)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 976)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 984)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 992)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1000)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1008)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1016)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1024)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1032)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1040)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1048)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1056)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1064)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1072)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1080)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1088)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1096)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1104)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1112)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1120)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1128)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1136)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1144)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1152)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1160)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1168)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1176)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1184)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1192)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1200)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1208)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1216)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1224)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1232)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1240)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1248)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1256)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1264)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1272)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1280)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1288)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1296)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1304)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1312)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1320)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1328)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1336)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1344)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1352)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1360)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1368)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1376)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1384)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1392)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1400)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1408)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1416)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1424)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1432)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1440)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1448)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1456)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1464)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1472)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1480)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1488)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1496)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1504)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1512)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1520)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1528)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1536)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1544)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1552)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1560)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1568)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1576)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1584)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1592)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1600)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1608)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1616)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1624)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1632)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1640)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1648)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1656)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1664)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1672)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1680)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1688)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1696)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1704)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1712)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1720)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1728)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1736)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1744)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1752)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1760)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1768)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1776)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1784)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1792)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1800)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1808)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1816)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1824)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1832)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1840)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1848)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1856)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1864)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1872)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1880)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1888)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1896)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1904)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1912)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1920)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1928)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1936)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1944)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1952)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1960)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1968)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1976)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1984)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1992)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 2000)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 2008)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 2016)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 2024)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 2032)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 2040)) = 0;
    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_3f5be0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>(((value_x0 + 0) + 0));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>(((value_x0 + 0) + 4));
    value_x8 = uint32_t(field1);
    if (uint32_t(uint32_t(field0)) != uint32_t(uint32_t(field1))) goto block_5;
    goto block_3;
}
block_3: {

    return uint32_t(1);
}
block_5: {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x0 + 8));
    return uint32_t((uint32_t(uint32_t(field2)) == uint32_t(value_x8)));
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_3fc150(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 32));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((field1 + 104));
    value_x8 = field0;
    if (uint32_t(uint32_t(field2)) == 1) goto block_9;
    goto block_5;
}
block_5: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x0 + 72));
    const uint8_t field4 = *reinterpret_cast<const uint8_t*>((field3 + 24));
    if (uint32_t(uint32_t(field4)) != 12) goto block_10;
    goto block_9;
}
block_9: {

    return value_x0;
}
block_10: {
    *reinterpret_cast<uint8_t*>((value_x0 + 82)) = uint32_t(uint32_t(1));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x8 + 32));
    const uint16_t field6 = *reinterpret_cast<const uint16_t*>((field5 + 108));
    value_x0 = field5;
    if (uint32_t(uint32_t(field6)) != 0) goto block_17;
    goto block_15;
}
block_15: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    if (field7 == 0) goto block_9;
    goto block_17;
}
block_17: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field9)(value_x0,field9);
    return result0;
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_448380(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 28));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x1 + 28));
    value_x8 = uint32_t(field1);
    if (uint32_t(uint32_t(field0)) != uint32_t(uint32_t(field1))) goto block_25;
    goto block_4;
}
block_4: {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x0 + 32));
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x1 + 32));
    if (uint32_t(uint32_t(field2)) != uint32_t(uint32_t(field3))) goto block_25;
    goto block_8;
}
block_8: {
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((value_x0 + 36));
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((value_x1 + 36));
    if (uint32_t(uint32_t(field4)) != uint32_t(uint32_t(field5))) goto block_25;
    goto block_12;
}
block_12: {
    const uint32_t field6 = *reinterpret_cast<const uint32_t*>((value_x0 + 40));
    const uint32_t field7 = *reinterpret_cast<const uint32_t*>((value_x1 + 40));
    if (uint32_t(uint32_t(field6)) != uint32_t(uint32_t(field7))) goto block_25;
    goto block_16;
}
block_16: {
    const uint8_t field8 = *reinterpret_cast<const uint8_t*>((value_x0 + 44));
    const uint8_t field9 = *reinterpret_cast<const uint8_t*>((value_x1 + 44));
    if (uint32_t(uint32_t(field8)) != uint32_t(uint32_t(field9))) goto block_25;
    goto block_20;
}
block_20: {
    const uint8_t field10 = *reinterpret_cast<const uint8_t*>((value_x0 + 45));
    const uint8_t field11 = *reinterpret_cast<const uint8_t*>((value_x1 + 45));
    if (uint32_t(uint32_t(field10)) != uint32_t(uint32_t(field11))) goto block_25;
    goto block_24;
}
block_24: {

    return value_x0;
}
block_25: {
    *reinterpret_cast<uint32_t*>((value_x0 + 28)) = uint32_t(value_x8);
    const uint32_t field12 = *reinterpret_cast<const uint32_t*>((value_x1 + 32));
    *reinterpret_cast<uint32_t*>((value_x0 + 32)) = uint32_t(uint32_t(field12));
    const uint32_t field13 = *reinterpret_cast<const uint32_t*>((value_x1 + 36));
    *reinterpret_cast<uint32_t*>((value_x0 + 36)) = uint32_t(uint32_t(field13));
    const uint32_t field14 = *reinterpret_cast<const uint32_t*>((value_x1 + 40));
    *reinterpret_cast<uint32_t*>((value_x0 + 40)) = uint32_t(uint32_t(field14));
    const uint16_t field15 = *reinterpret_cast<const uint16_t*>((value_x1 + 44));
    *reinterpret_cast<uint16_t*>((value_x0 + 44)) = uint32_t(uint32_t(field15));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 120));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field17)(value_x0,field17);
    return result0;
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4efa00(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x10;
    uint64_t value_x8;
    uint64_t value_x9;
block_0: {
    value_x8 = uint32_t(((uint32_t(uint32_t(3533)) & 0xffffull) | (1ull << 16)));
    if (uint32_t(value_x1) == 0) goto block_17;
    goto block_3;
}
block_3: {
    *reinterpret_cast<uint32_t*>(((value_x0 + 0) + 0)) = uint32_t(value_x1);
    *reinterpret_cast<uint32_t*>(((value_x0 + 0) + 4)) = uint32_t(uint32_t((uint32_t(value_x1) * uint32_t(value_x8))));
    *reinterpret_cast<uint32_t*>((value_x0 + 2496)) = uint32_t(uint32_t(2));
    value_x10 = uint32_t(1);
    value_x9 = uint32_t(2);
    goto block_8;
}
block_8: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + (uint64_t(uint32_t(value_x10)) << 2)));
    *reinterpret_cast<uint32_t*>((value_x0 + (uint64_t(uint32_t(value_x9)) << 2))) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) * uint32_t(value_x8))));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 2496));
    *reinterpret_cast<uint32_t*>((value_x0 + 2496)) = uint32_t(uint32_t((uint32_t(uint32_t(field1)) + 1)));
    value_x10 = uint32_t(field1);
    value_x9 = uint32_t((uint32_t(uint32_t(field1)) + 1));
    if (uint32_t(uint32_t((uint32_t(uint32_t(field1)) + 1))) < 624) goto block_8;
    goto block_16;
}
block_16: {

    goto block_29;
}
block_17: {
    *reinterpret_cast<uint32_t*>(((value_x0 + 0) + 0)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint32_t*>(((value_x0 + 0) + 4)) = uint32_t(value_x8);
    *reinterpret_cast<uint32_t*>((value_x0 + 2496)) = uint32_t(uint32_t(2));
    value_x10 = uint32_t(2);
    value_x9 = uint32_t(1);
    goto block_21;
}
block_21: {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x0 + (uint64_t(uint32_t(value_x9)) << 2)));
    *reinterpret_cast<uint32_t*>((value_x0 + (uint64_t(uint32_t(value_x10)) << 2))) = uint32_t(uint32_t((uint32_t(uint32_t(field2)) * uint32_t(value_x8))));
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x0 + 2496));
    *reinterpret_cast<uint32_t*>((value_x0 + 2496)) = uint32_t(uint32_t((uint32_t(uint32_t(field3)) + 1)));
    value_x10 = uint32_t((uint32_t(uint32_t(field3)) + 1));
    value_x9 = uint32_t(field3);
    if (uint32_t(uint32_t((uint32_t(uint32_t(field3)) + 1))) < 624) goto block_21;
    goto block_29;
}
block_29: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4f4a30(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint32_t field0 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    return value_x0;
}
}

extern "C" uint64_t LeafTarget_4f6ea0_3(uint64_t,uint64_t);
extern "C" uint64_t LeafTarget_4f6ea0_4(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4f6ea0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 84));
    value_x1 = uint32_t(field0);
    if (int32_t(uint32_t(uint32_t(field0))) < int32_t(1)) goto block_4;
    goto block_3;
}
block_3: {

    return LeafTarget_4f6ea0_3(value_x0,value_x1);
}
block_4: {

    return LeafTarget_4f6ea0_4(value_x0);
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4fd4a0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
    uint64_t value_x9;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 88));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    value_x8 = field0;
    value_x9 = field1;
    if (field0 >= field1) goto block_6;
    goto block_4;
}
block_4: {
    *reinterpret_cast<uint64_t*>((value_x0 + 88)) = value_x9;
    value_x8 = value_x9;
    goto block_6;
}
block_6: {
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x0 + 96));
    if ((uint32_t(uint32_t(field2)) & 0x8ull) != 0) goto block_10;
    goto block_8;
}
block_8: {

    return uint32_t(-1);
}
block_10: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    value_x9 = field3;
    if (field3 >= value_x8) goto block_15;
    goto block_13;
}
block_13: {
    *reinterpret_cast<uint64_t*>((value_x0 + 32)) = value_x8;
    value_x9 = value_x8;
    goto block_15;
}
block_15: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field4;
    if (field4 >= value_x9) goto block_20;
    goto block_18;
}
block_18: {
    const uint8_t field5 = *reinterpret_cast<const uint8_t*>((value_x8 + 0));
    return uint32_t(field5);
}
block_20: {

    return uint32_t(-1);
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_51d730(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    if (field0 == 0) goto block_5;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    return field2;
}
block_5: {

    return 0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_51f750(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 208));
    value_x8 = field0;
    if (field0 == 0) goto block_4;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 56));
    return field1;
}
block_4: {

    return 0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_530c70(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (uint32_t(value_x1) == 0) goto block_2;
    goto block_1;
}
block_1: {

    return value_x0;
}
block_2: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 144));
    *reinterpret_cast<uint64_t*>((value_x0 + 152)) = field0;
    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_574870(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    *reinterpret_cast<uint32_t*>((value_x0 + 0)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 8)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 16)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 32)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 40)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 48)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 56)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 64)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 72)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 80)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 88)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 96)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 104)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 112)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 120)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 128)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 136)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 144)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 152)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 160)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 168)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 176)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 184)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 192)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 200)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 208)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 216)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 224)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 232)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 240)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 248)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 256)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 264)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 272)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 280)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 288)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 296)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 304)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 312)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 320)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 328)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 336)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 344)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 352)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 360)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 368)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 376)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 384)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 392)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 400)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 408)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 416)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 424)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 432)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 440)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 448)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 456)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 464)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 472)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 480)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 488)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 496)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 504)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 512)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 520)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 528)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 536)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 544)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 552)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 560)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 568)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 576)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 584)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 592)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 600)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 608)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 616)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 624)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 632)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 640)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 648)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 656)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 664)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 672)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 680)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 688)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 696)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 704)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 712)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 720)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 728)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 736)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 744)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 752)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 760)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 768)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 776)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 784)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 792)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 800)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 808)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 816)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 824)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 832)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 840)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 848)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 856)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 864)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 872)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 880)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 888)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 896)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 904)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 912)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 920)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 928)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 936)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 944)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 952)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 960)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 968)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 976)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 984)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 992)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1000)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1008)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1016)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1024)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1032)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1040)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1048)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1056)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1064)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1072)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1080)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1088)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1096)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1104)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1112)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1120)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1128)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1136)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1144)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1152)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1160)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1168)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1176)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1184)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1192)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1200)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1208)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1216)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1224)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1232)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1240)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1248)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1256)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1264)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1272)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1280)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1288)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1296)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1304)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1312)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1320)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1328)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1336)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1344)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1352)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1360)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1368)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1376)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1384)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1392)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1400)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1408)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1416)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1424)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1432)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1440)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1448)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1456)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1464)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1472)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1480)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1488)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1496)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1504)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1512)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1520)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1528)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1536)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1544)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1552)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1560)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1568)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1576)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1584)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1592)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1600)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1608)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1616)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1624)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1632)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1640)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1648)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1656)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1664)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1672)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1680)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1688)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1696)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1704)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1712)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1720)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1728)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1736)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1744)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1752)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1760)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1768)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1776)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1784)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1792)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1800)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1808)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1816)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1824)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1832)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1840)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1848)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1856)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1864)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1872)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1880)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1888)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1896)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1904)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1912)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1920)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1928)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1936)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1944)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1952)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1960)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1968)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1976)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1984)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1992)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 2000)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 2008)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 2016)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 2024)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 2032)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 2040)) = 0;
    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_57f1c0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 24));
    if (uint32_t(uint32_t(field0)) == 0) goto block_3;
    goto block_2;
}
block_2: {

    return value_x0;
}
block_3: {
    *reinterpret_cast<uint8_t*>((value_x0 + 24)) = uint32_t(uint32_t(1));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_57f1f0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 16));
    if (uint32_t(uint32_t(field0)) == 0) goto block_3;
    goto block_2;
}
block_2: {

    return value_x0;
}
block_3: {
    *reinterpret_cast<uint8_t*>((value_x0 + 16)) = uint32_t(uint32_t(1));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5940d0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 0));
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x1 + 0));
    if (uint32_t(uint32_t(field0)) != uint32_t(uint32_t(field1))) goto block_65;
    goto block_4;
}
block_4: {
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x0 + 1));
    const uint8_t field3 = *reinterpret_cast<const uint8_t*>((value_x1 + 1));
    if (uint32_t(uint32_t(field2)) != uint32_t(uint32_t(field3))) goto block_67;
    goto block_8;
}
block_8: {
    const uint8_t field4 = *reinterpret_cast<const uint8_t*>((value_x0 + 2));
    const uint8_t field5 = *reinterpret_cast<const uint8_t*>((value_x1 + 2));
    if (uint32_t(uint32_t(field4)) != uint32_t(uint32_t(field5))) goto block_69;
    goto block_12;
}
block_12: {
    const uint8_t field6 = *reinterpret_cast<const uint8_t*>((value_x0 + 3));
    const uint8_t field7 = *reinterpret_cast<const uint8_t*>((value_x1 + 3));
    if (uint32_t(uint32_t(field6)) != uint32_t(uint32_t(field7))) goto block_71;
    goto block_16;
}
block_16: {
    const uint8_t field8 = *reinterpret_cast<const uint8_t*>((value_x0 + 4));
    const uint8_t field9 = *reinterpret_cast<const uint8_t*>((value_x1 + 4));
    if (uint32_t(uint32_t(field8)) != uint32_t(uint32_t(field9))) goto block_73;
    goto block_20;
}
block_20: {
    const uint8_t field10 = *reinterpret_cast<const uint8_t*>((value_x0 + 5));
    const uint8_t field11 = *reinterpret_cast<const uint8_t*>((value_x1 + 5));
    if (uint32_t(uint32_t(field10)) != uint32_t(uint32_t(field11))) goto block_75;
    goto block_24;
}
block_24: {
    const uint8_t field12 = *reinterpret_cast<const uint8_t*>((value_x0 + 6));
    const uint8_t field13 = *reinterpret_cast<const uint8_t*>((value_x1 + 6));
    if (uint32_t(uint32_t(field12)) != uint32_t(uint32_t(field13))) goto block_77;
    goto block_28;
}
block_28: {
    const uint8_t field14 = *reinterpret_cast<const uint8_t*>((value_x0 + 7));
    const uint8_t field15 = *reinterpret_cast<const uint8_t*>((value_x1 + 7));
    if (uint32_t(uint32_t(field14)) != uint32_t(uint32_t(field15))) goto block_79;
    goto block_32;
}
block_32: {
    const uint8_t field16 = *reinterpret_cast<const uint8_t*>((value_x0 + 8));
    const uint8_t field17 = *reinterpret_cast<const uint8_t*>((value_x1 + 8));
    if (uint32_t(uint32_t(field16)) != uint32_t(uint32_t(field17))) goto block_81;
    goto block_36;
}
block_36: {
    const uint8_t field18 = *reinterpret_cast<const uint8_t*>((value_x0 + 9));
    const uint8_t field19 = *reinterpret_cast<const uint8_t*>((value_x1 + 9));
    if (uint32_t(uint32_t(field18)) != uint32_t(uint32_t(field19))) goto block_83;
    goto block_40;
}
block_40: {
    const uint8_t field20 = *reinterpret_cast<const uint8_t*>((value_x0 + 10));
    const uint8_t field21 = *reinterpret_cast<const uint8_t*>((value_x1 + 10));
    if (uint32_t(uint32_t(field20)) != uint32_t(uint32_t(field21))) goto block_85;
    goto block_44;
}
block_44: {
    const uint8_t field22 = *reinterpret_cast<const uint8_t*>((value_x0 + 11));
    const uint8_t field23 = *reinterpret_cast<const uint8_t*>((value_x1 + 11));
    if (uint32_t(uint32_t(field22)) != uint32_t(uint32_t(field23))) goto block_87;
    goto block_48;
}
block_48: {
    const uint8_t field24 = *reinterpret_cast<const uint8_t*>((value_x0 + 12));
    const uint8_t field25 = *reinterpret_cast<const uint8_t*>((value_x1 + 12));
    if (uint32_t(uint32_t(field24)) != uint32_t(uint32_t(field25))) goto block_89;
    goto block_52;
}
block_52: {
    const uint8_t field26 = *reinterpret_cast<const uint8_t*>((value_x0 + 13));
    const uint8_t field27 = *reinterpret_cast<const uint8_t*>((value_x1 + 13));
    if (uint32_t(uint32_t(field26)) != uint32_t(uint32_t(field27))) goto block_91;
    goto block_56;
}
block_56: {
    const uint8_t field28 = *reinterpret_cast<const uint8_t*>((value_x0 + 14));
    const uint8_t field29 = *reinterpret_cast<const uint8_t*>((value_x1 + 14));
    if (uint32_t(uint32_t(field28)) != uint32_t(uint32_t(field29))) goto block_93;
    goto block_60;
}
block_60: {
    const uint8_t field30 = *reinterpret_cast<const uint8_t*>((value_x0 + 15));
    const uint8_t field31 = *reinterpret_cast<const uint8_t*>((value_x1 + 15));
    return uint32_t((uint32_t(uint32_t(field30)) != uint32_t(uint32_t(field31))));
}
block_65: {

    return uint32_t(1);
}
block_67: {

    return uint32_t(1);
}
block_69: {

    return uint32_t(1);
}
block_71: {

    return uint32_t(1);
}
block_73: {

    return uint32_t(1);
}
block_75: {

    return uint32_t(1);
}
block_77: {

    return uint32_t(1);
}
block_79: {

    return uint32_t(1);
}
block_81: {

    return uint32_t(1);
}
block_83: {

    return uint32_t(1);
}
block_85: {

    return uint32_t(1);
}
block_87: {

    return uint32_t(1);
}
block_89: {

    return uint32_t(1);
}
block_91: {

    return uint32_t(1);
}
block_93: {

    return uint32_t(1);
}
}

extern "C" uint64_t LeafTarget_5bc380_8(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5bc380(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 440));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((field0 + 0) + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((field0 + 0) + 8));
    if (field2 != field1) goto block_5;
    goto block_4;
}
block_4: {

    return value_x0;
}
block_5: {

    return LeafTarget_5bc380_8((value_x0 + 408),0,uint32_t(1));
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5cc9d0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    *reinterpret_cast<uint32_t*>((value_x0 + 0)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 8)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 16)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 32)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 40)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 48)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 56)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 64)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 72)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 80)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 88)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 96)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 104)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 112)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 120)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 128)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 136)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 144)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 152)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 160)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 168)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 176)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 184)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 192)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 200)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 208)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 216)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 224)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 232)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 240)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 248)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 256)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 264)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 272)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 280)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 288)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 296)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 304)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 312)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 320)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 328)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 336)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 344)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 352)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 360)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 368)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 376)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 384)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 392)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 400)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 408)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 416)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 424)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 432)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 440)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 448)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 456)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 464)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 472)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 480)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 488)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 496)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 504)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 512)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 520)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 528)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 536)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 544)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 552)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 560)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 568)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 576)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 584)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 592)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 600)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 608)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 616)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 624)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 632)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 640)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 648)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 656)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 664)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 672)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 680)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 688)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 696)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 704)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 712)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 720)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 728)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 736)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 744)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 752)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 760)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 768)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 776)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 784)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 792)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 800)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 808)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 816)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 824)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 832)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 840)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 848)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 856)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 864)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 872)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 880)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 888)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 896)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 904)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 912)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 920)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 928)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 936)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 944)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 952)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 960)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 968)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 976)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 984)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 992)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1000)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1008)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1016)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1024)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1032)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1040)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1048)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1056)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1064)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1072)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1080)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1088)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1096)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1104)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1112)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1120)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1128)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1136)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1144)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1152)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1160)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1168)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1176)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1184)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1192)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1200)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1208)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1216)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1224)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1232)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1240)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1248)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1256)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1264)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1272)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1280)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1288)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1296)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1304)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1312)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1320)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1328)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1336)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1344)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1352)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1360)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1368)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1376)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1384)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1392)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1400)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1408)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1416)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1424)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1432)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1440)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1448)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1456)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1464)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1472)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1480)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1488)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1496)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1504)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1512)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1520)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1528)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1536)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1544)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1552)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1560)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1568)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1576)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1584)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1592)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1600)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1608)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1616)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1624)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1632)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1640)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1648)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1656)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1664)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1672)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1680)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1688)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1696)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1704)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1712)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1720)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1728)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1736)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1744)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1752)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1760)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1768)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1776)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1784)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1792)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1800)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1808)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1816)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1824)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1832)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1840)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1848)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1856)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1864)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1872)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1880)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1888)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1896)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1904)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1912)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1920)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1928)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1936)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1944)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1952)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1960)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1968)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1976)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 1984)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 1992)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 2000)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 2008)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 2016)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 2024)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 2032)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 2040)) = 0;
    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_630830(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((value_x0 + 14)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 0) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 0) + 8)) = 0;
    if ((uint32_t(uint32_t(field0)) & 0x1ull) != 0) goto block_6;
    goto block_4;
}
block_4: {
    *reinterpret_cast<uint16_t*>((value_x0 + 24)) = 0;
    return value_x0;
}
block_6: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 40));
    *reinterpret_cast<uint8_t*>((field1 + 0)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 32)) = 0;
    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_631b20(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 2));
    if ((uint32_t(uint32_t(field0)) & 3) == 0) goto block_4;
    goto block_3;
}
block_3: {

    return value_x0;
}
block_4: {
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x0 + 3));
    *reinterpret_cast<uint32_t*>((value_x1 + 4)) = uint32_t(uint32_t((uint32_t(uint32_t(field1)) >> 6)));
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x0 + 3));
    *reinterpret_cast<uint32_t*>((value_x1 + 0)) = uint32_t(uint32_t(((uint32_t(uint32_t(field2)) >> 4) & 0x3ull)));
    const uint8_t field3 = *reinterpret_cast<const uint8_t*>((value_x0 + 3));
    *reinterpret_cast<uint32_t*>((value_x1 + 12)) = uint32_t(uint32_t((uint32_t(uint32_t(field3)) & 15)));
    const uint8_t field4 = *reinterpret_cast<const uint8_t*>((value_x0 + 4));
    *reinterpret_cast<uint8_t*>((value_x1 + 16)) = uint32_t(uint32_t((uint32_t(uint32_t(field4)) >> 4)));
    const uint8_t field5 = *reinterpret_cast<const uint8_t*>((value_x0 + 4));
    *reinterpret_cast<uint8_t*>((value_x1 + 17)) = uint32_t(uint32_t((uint32_t(uint32_t(field5)) & 15)));
    const uint8_t field6 = *reinterpret_cast<const uint8_t*>((value_x0 + 5));
    *reinterpret_cast<uint8_t*>((value_x1 + 18)) = uint32_t(uint32_t((uint32_t(uint32_t(field6)) >> 4)));
    const uint8_t field7 = *reinterpret_cast<const uint8_t*>((value_x0 + 5));
    *reinterpret_cast<uint8_t*>((value_x1 + 19)) = uint32_t(uint32_t((uint32_t(uint32_t(field7)) & 15)));
    const uint8_t field8 = *reinterpret_cast<const uint8_t*>((value_x0 + 6));
    *reinterpret_cast<uint8_t*>((value_x1 + 20)) = uint32_t(uint32_t((uint32_t(uint32_t(field8)) >> 4)));
    return value_x0;
}
}

extern "C" uint64_t RecoveredCall_6768b8_0(uint64_t);
extern "C" uint64_t RecoveredCall_6768b8_1(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_6768b8(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t result0 = RecoveredCall_6768b8_0(value_x0);
    const uint64_t result1 = RecoveredCall_6768b8_1(result0);
    __builtin_unreachable();
}
}

extern "C" uint64_t LeafTarget_6c9200_2(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_6c9200(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if ((uint32_t(value_x1) & 0x1ull) != 0) goto block_2;
    goto block_1;
}
block_1: {

    return value_x0;
}
block_2: {

    return LeafTarget_6c9200_2(value_x0);
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_6f5840(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint8_t field0 = __atomic_load_n(reinterpret_cast<const uint8_t*>(((value_x0 + 337) + 0)), __ATOMIC_ACQUIRE);
    if ((uint32_t(uint32_t(field0)) & 0x1ull) != 0) goto block_11;
    goto block_3;
}
block_3: {
    value_x19 = value_x0;
    goto block_4;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 488));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(value_x19);
    const uint8_t field3 = __atomic_load_n(reinterpret_cast<const uint8_t*>(((value_x19 + 337) + 0)), __ATOMIC_ACQUIRE);
    if ((uint32_t(uint32_t(field3)) & 0x1ull) == 0) goto block_4;
    goto block_11;
}
block_11: {

    return 0;
}
}

extern "C" uint64_t RecoveredCall_6f5880_1(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_6f5880(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint8_t field0 = __atomic_load_n(reinterpret_cast<const uint8_t*>(((value_x0 + 337) + 0)), __ATOMIC_ACQUIRE);
    if ((uint32_t(uint32_t(field0)) & 0x1ull) != 0) goto block_15;
    goto block_3;
}
block_3: {
    value_x19 = value_x0;
    value_x20 = uint32_t(((uint32_t(uint32_t(49664)) & 0xffffull) | (3051ull << 16)));
    goto block_6;
}
block_6: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 432));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(value_x19);
    const uint64_t result1 = RecoveredCall_6f5880_1(value_x20);
    const uint8_t field3 = __atomic_load_n(reinterpret_cast<const uint8_t*>(((value_x19 + 337) + 0)), __ATOMIC_ACQUIRE);
    if ((uint32_t(uint32_t(field3)) & 0x1ull) == 0) goto block_6;
    goto block_15;
}
block_15: {

    return 0;
}
}

extern "C" uint64_t RecoveredCall_765570_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_765570(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 56));
    *reinterpret_cast<uint32_t*>((value_x0 + 56)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) | 2)));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 224));
    value_x19 = value_x0;
    value_x8 = field1;
    if (field1 == 0) goto block_11;
    goto block_6;
}
block_6: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    if (field2 == 0) goto block_11;
    goto block_8;
}
block_8: {
    const uint64_t result0 = RecoveredCall_765570_0((value_x8 + 24));
    value_x0 = result0;
    goto block_12;
}
block_11: {
    value_x0 = uint32_t(-1);
    goto block_12;
}
block_12: {
    *reinterpret_cast<uint32_t*>((value_x19 + 232)) = uint32_t(value_x0);
    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7847e0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 28));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 28));
    value_x8 = uint32_t(field0);
    if (uint32_t(uint32_t(field1)) != uint32_t(uint32_t(field0))) goto block_5;
    goto block_4;
}
block_4: {

    return value_x0;
}
block_5: {
    *reinterpret_cast<uint32_t*>((value_x0 + 28)) = uint32_t(value_x8);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 120));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(value_x0,field3);
    return result0;
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_788f10(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x1 + 26));
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x0 + 26));
    value_x8 = uint32_t(field0);
    if (uint32_t(uint32_t(field1)) != uint32_t(uint32_t(field0))) goto block_5;
    goto block_4;
}
block_4: {

    return value_x0;
}
block_5: {
    *reinterpret_cast<uint8_t*>((value_x0 + 26)) = uint32_t(value_x8);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 120));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(value_x0,field3);
    return result0;
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_789630(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 28));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 28));
    value_x8 = uint32_t(field0);
    if (uint32_t(uint32_t(field1)) != uint32_t(uint32_t(field0))) goto block_5;
    goto block_4;
}
block_4: {

    return value_x0;
}
block_5: {
    *reinterpret_cast<uint32_t*>((value_x0 + 28)) = uint32_t(value_x8);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 120));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(value_x0,field3);
    return result0;
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_78a090(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x1 + 26));
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x0 + 26));
    value_x8 = uint32_t(field0);
    if (uint32_t(uint32_t(field1)) != uint32_t(uint32_t(field0))) goto block_5;
    goto block_4;
}
block_4: {

    return value_x0;
}
block_5: {
    *reinterpret_cast<uint8_t*>((value_x0 + 26)) = uint32_t(value_x8);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 120));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(value_x0,field3);
    return result0;
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_78a7a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8;
block_0: {
    const uint16_t field0 = *reinterpret_cast<const uint16_t*>((value_x1 + 26));
    const uint16_t field1 = *reinterpret_cast<const uint16_t*>((value_x0 + 26));
    value_x8 = uint32_t(field0);
    if (uint32_t(uint32_t(field1)) != uint32_t(uint32_t(field0))) goto block_5;
    goto block_4;
}
block_4: {

    return value_x0;
}
block_5: {
    *reinterpret_cast<uint16_t*>((value_x0 + 26)) = uint32_t(value_x8);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 120));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(value_x0,field3);
    return result0;
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7c4e40(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((field0 + 346));
    value_x8 = field0;
    if (uint32_t(uint32_t(field1)) == 0) goto block_4;
    goto block_3;
}
block_3: {

    return value_x0;
}
block_4: {
    *reinterpret_cast<uint8_t*>((value_x8 + 346)) = uint32_t(uint32_t(1));
    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8289d0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    if (uint32_t(uint32_t(field0)) == 0) goto block_3;
    goto block_2;
}
block_2: {

    return value_x0;
}
block_3: {
    *reinterpret_cast<uint8_t*>((value_x0 + 900)) = 0;
    *reinterpret_cast<uint8_t*>((value_x0 + 626)) = uint32_t(uint32_t(1));
    return value_x0;
}
}

extern "C" uint64_t LeafTarget_8548e0_4(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8548e0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 709));
    if (uint32_t(uint32_t(field0)) == 0) goto block_3;
    goto block_2;
}
block_2: {

    return value_x0;
}
block_3: {

    return LeafTarget_8548e0_4(value_x0,uint32_t(1));
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_861740(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 88));
    value_x8 = field0;
    if (field0 == 0) goto block_7;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    *reinterpret_cast<uint8_t*>((value_x0 + 144)) = uint32_t(uint32_t((field1 == 0)));
    return value_x0;
}
block_7: {
    *reinterpret_cast<uint8_t*>((value_x0 + 144)) = uint32_t(uint32_t(1));
    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8617b0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 152));
    value_x8 = field0;
    if (field0 == 0) goto block_4;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    return field1;
}
block_4: {

    return 0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8796b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    if (uint32_t(uint32_t(field0)) == 0) goto block_3;
    goto block_2;
}
block_2: {

    return value_x0;
}
block_3: {
    *reinterpret_cast<uint8_t*>((value_x0 + 626)) = uint32_t(uint32_t(1));
    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8866a0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
    uint64_t value_x4 = arg4;
    uint64_t value_x8;
block_0: {

    if ((uint32_t(value_x1) & 0x1ull) != 0) goto block_3;
    goto block_1;
}
block_1: {

    if ((uint32_t(value_x2) & 0x1ull) != 0) goto block_9;
    goto block_2;
}
block_2: {

    return value_x0;
}
block_3: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 288));
    *reinterpret_cast<uint8_t*>((value_x3 + 0)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) ^ 1)));
    *reinterpret_cast<uint16_t*>((value_x0 + 288)) = uint32_t(uint32_t(1));
    if ((uint32_t(value_x2) & 0x1ull) == 0) goto block_2;
    goto block_9;
}
block_9: {
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x0 + 289));
    if (uint32_t(uint32_t(field1)) == 0) goto block_13;
    goto block_11;
}
block_11: {
    value_x8 = uint32_t(0);
    goto block_14;
}
block_13: {
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x0 + 288));
    value_x8 = uint32_t(field2);
    goto block_14;
}
block_14: {
    *reinterpret_cast<uint8_t*>((value_x4 + 0)) = uint32_t(value_x8);
    *reinterpret_cast<uint8_t*>((value_x0 + 289)) = uint32_t(value_x8);
    *reinterpret_cast<uint8_t*>((value_x0 + 288)) = 0;
    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8994b0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 88));
    value_x8 = field0;
    if (field0 == 0) goto block_7;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    *reinterpret_cast<uint8_t*>((value_x0 + 144)) = uint32_t(uint32_t((field1 == 0)));
    return value_x0;
}
block_7: {
    *reinterpret_cast<uint8_t*>((value_x0 + 144)) = uint32_t(uint32_t(1));
    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_899520(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 152));
    value_x8 = field0;
    if (field0 == 0) goto block_4;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    return field1;
}
block_4: {

    return 0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8ce800(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 128));
    value_x8 = field0;
    if (field0 == 0) goto block_4;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    return field1;
}
block_4: {

    return 0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8ce820(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 128));
    value_x8 = field0;
    if (field0 == 0) goto block_4;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    return field1;
}
block_4: {

    return 0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_96e470(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 1280));
    if (uint32_t(uint32_t(field0)) != 8) goto block_5;
    goto block_3;
}
block_3: {

    return uint32_t(1);
}
block_5: {
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x0 + 952));
    return uint32_t((uint32_t(uint32_t(field1)) != 0));
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_980190(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 4976));
    value_x8 = field0;
    if (field0 == 0) goto block_4;
    goto block_2;
}
block_2: {
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x8 + 24));
    if (uint32_t(uint32_t(field1)) == 0) goto block_12;
    goto block_4;
}
block_4: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 4992));
    value_x8 = field2;
    if (field2 == 0) goto block_8;
    goto block_6;
}
block_6: {
    const uint8_t field3 = *reinterpret_cast<const uint8_t*>((value_x8 + 24));
    if (uint32_t(uint32_t(field3)) == 0) goto block_14;
    goto block_8;
}
block_8: {
    const uint8_t field4 = *reinterpret_cast<const uint8_t*>((value_x0 + 954));
    return uint32_t((uint32_t(uint32_t(field4)) != 0));
}
block_12: {

    return uint32_t(1);
}
block_14: {

    return uint32_t(1);
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_a21490(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 3465));
    if (uint32_t(uint32_t(field0)) == 0) goto block_4;
    goto block_2;
}
block_2: {

    return uint32_t(1);
}
block_4: {
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x0 + 954));
    return uint32_t((uint32_t(uint32_t(field1)) != 0));
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_a532a0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 4496));
    value_x8 = field0;
    if (field0 == 0) goto block_4;
    goto block_2;
}
block_2: {
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x8 + 24));
    if (uint32_t(uint32_t(field1)) == 0) goto block_8;
    goto block_4;
}
block_4: {
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x0 + 954));
    return uint32_t((uint32_t(uint32_t(field2)) != 0));
}
block_8: {

    return uint32_t(1);
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_a94bd0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {

    if (uint32_t(value_x1) == 0) goto block_4;
    goto block_1;
}
block_1: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 48));
    if (uint32_t(uint32_t(field0)) >= uint32_t(value_x2)) goto block_6;
    goto block_4;
}
block_4: {

    return 0;
}
block_6: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(value_x0,value_x1,field2);
    return result0;
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aa5060(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x8;
block_0: {
    *reinterpret_cast<uint32_t*>((value_x0 + 444)) = uint32_t(value_x1);
    if (uint32_t(value_x2) == 0) goto block_5;
    goto block_2;
}
block_2: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 452));
    value_x8 = uint32_t((uint32_t(uint32_t(field0)) + uint32_t(value_x2)));
    goto block_6;
}
block_5: {
    value_x8 = uint32_t(0);
    goto block_6;
}
block_6: {
    *reinterpret_cast<uint32_t*>((value_x0 + 436)) = uint32_t(value_x8);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 544));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(value_x0,field2,value_x2);
    return result0;
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aa5090(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x8;
block_0: {
    *reinterpret_cast<uint32_t*>((value_x0 + 448)) = uint32_t(value_x1);
    if (uint32_t(value_x2) == 0) goto block_5;
    goto block_2;
}
block_2: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 452));
    value_x8 = uint32_t((uint32_t(uint32_t(field0)) + uint32_t(value_x2)));
    goto block_6;
}
block_5: {
    value_x8 = uint32_t(0);
    goto block_6;
}
block_6: {
    *reinterpret_cast<uint32_t*>((value_x0 + 440)) = uint32_t(value_x8);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 544));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(value_x0,field2,value_x2);
    return result0;
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aae560(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {

    if (uint32_t(value_x1) == 0) goto block_4;
    goto block_1;
}
block_1: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 48));
    if (uint32_t(uint32_t(field0)) >= uint32_t(value_x2)) goto block_6;
    goto block_4;
}
block_4: {

    return 0;
}
block_6: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(value_x0,value_x1,field2);
    return result0;
    __builtin_unreachable();
}
}

extern "C" uint64_t LeafTarget_aaec50_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aaec50(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (uint32_t(value_x1) == 0) goto block_2;
    goto block_1;
}
block_1: {

    return LeafTarget_aaec50_1(value_x0,value_x1);
}
block_2: {

    return 0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ad02c0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 248));
    if (uint32_t(uint32_t(field0)) == 0) goto block_3;
    goto block_2;
}
block_2: {

    return value_x0;
}
block_3: {
    *reinterpret_cast<uint32_t*>((value_x0 + 244)) = uint32_t(uint32_t(1));
    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ae6af0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 56));
    value_x19 = value_x0;
    value_x8 = field0;
    if (field0 == 0) goto block_8;
    goto block_3;
}
block_3: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x0 = field1;
    if (field1 == 0) goto block_8;
    goto block_5;
}
block_5: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(value_x0);
    value_x0 = result0;
    goto block_8;
}
block_8: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 48));
    value_x8 = field4;
    if (field4 == 0) goto block_15;
    goto block_10;
}
block_10: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x0 = field5;
    if (field5 == 0) goto block_15;
    goto block_12;
}
block_12: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 24));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(value_x0);
    value_x0 = result1;
    goto block_15;
}
block_15: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x19 + 64));
    value_x8 = field8;
    if (field8 == 0) goto block_22;
    goto block_17;
}
block_17: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x0 = field9;
    if (field9 == 0) goto block_22;
    goto block_19;
}
block_19: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 24));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field11)(value_x0,field11);
    return result2;
    __builtin_unreachable();
}
block_22: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b1d4f0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 120));
    value_x8 = uint32_t(field0);
    if ((uint32_t(uint32_t(field0)) + 1) == 0) goto block_11;
    goto block_3;
}
block_3: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 104));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + (value_x8 << 3)));
    value_x8 = field2;
    if (field2 == 0) goto block_11;
    goto block_6;
}
block_6: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x0 = field3;
    if (field3 == 0) goto block_11;
    goto block_8;
}
block_8: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 128));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field5)(value_x0,value_x1,field5);
    return result0;
    __builtin_unreachable();
}
block_11: {

    return value_x0;
}
}

extern "C" uint64_t RecoveredCall_b1d520_1(uint64_t);
extern "C" unsigned char LeafData_b1d520_12[];
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b1d520(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 120));
    value_x8 = uint32_t(field0);
    if ((uint32_t(uint32_t(field0)) + 1) == 0) goto block_11;
    goto block_3;
}
block_3: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 104));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + (value_x8 << 3)));
    value_x8 = field2;
    if (field2 == 0) goto block_11;
    goto block_6;
}
block_6: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x0 = field3;
    if (field3 == 0) goto block_11;
    goto block_8;
}
block_8: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 136));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)(value_x0,field5);
    return result0;
    __builtin_unreachable();
}
block_11: {
    const uint64_t result1 = RecoveredCall_b1d520_1(value_x0);
    return ((reinterpret_cast<uintptr_t>(LeafData_b1d520_12) - 400) + 400);
}
}

extern "C" uint64_t LeafTarget_b67590_17(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b67590(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x8;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x1 + 112));
    value_x19 = value_x0;
    value_x20 = value_x1;
    if (uint32_t(uint32_t(field0)) == 0) goto block_9;
    goto block_4;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(value_x19);
    value_x0 = result0;
    if ((uint32_t(result0) & 0x1ull) == 0) goto block_18;
    goto block_9;
}
block_9: {
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x19 + 8));
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((value_x20 + 88));
    value_x8 = uint32_t(field3);
    if (uint32_t(uint32_t(field3)) >= uint32_t(uint32_t(field4))) goto block_18;
    goto block_13;
}
block_13: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x20 + 104));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + (value_x8 << 3)));
    return LeafTarget_b67590_17(value_x19,field6,(value_x20 + 20));
}
block_18: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bc0950(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 360));
    if (field0 != 1) goto block_10;
    goto block_3;
}
block_3: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 376));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 8));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 120));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field6)(field4,field6);
    return result0;
    __builtin_unreachable();
}
block_10: {

    return (value_x0 + 232);
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bc0980(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 360));
    value_x8 = field0;
    if (field0 == 0) goto block_10;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 376));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((field1 + (value_x8 << 3)) + -8));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 8));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 128));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field6)(field4,field6);
    return result0;
    __builtin_unreachable();
}
block_10: {

    return 0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c250f0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 32));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    value_x8 = field0;
    if (field1 != field0) goto block_5;
    goto block_4;
}
block_4: {

    return value_x0;
}
block_5: {
    *reinterpret_cast<uint64_t*>((value_x0 + 32)) = value_x8;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 120));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(value_x0,field3);
    return result0;
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c3ca10(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x0 + 16));
    *reinterpret_cast<uint64_t*>((field0 + 264)) = 0;
    value_x8 = field0;
    if (uint32_t(uint32_t(field1)) != 0) goto block_6;
    goto block_4;
}
block_4: {
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x8 + 256));
    if (uint32_t(uint32_t(field2)) == 0) goto block_7;
    goto block_6;
}
block_6: {
    *reinterpret_cast<uint32_t*>((value_x8 + 0)) = 0;
    goto block_7;
}
block_7: {
    *reinterpret_cast<uint8_t*>((value_x8 + 256)) = 0;
    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c56b70(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1;
    uint64_t value_x19;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 120));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(value_x0);
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x0 + 848));
    value_x1 = uint32_t(field2);
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field2)) == 0) goto block_11;
    goto block_6;
}
block_6: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 816));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 40));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)(field3,value_x1);
    value_x0 = result1;
    goto block_15;
}
block_11: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 128));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(value_x19);
    value_x0 = result2;
    goto block_15;
}
block_15: {
    *reinterpret_cast<uint8_t*>((value_x19 + 832)) = 0;
    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cab180(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 56));
    *reinterpret_cast<uint32_t*>((value_x0 + 56)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) & 4294967293)));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 184));
    value_x19 = value_x0;
    value_x8 = field1;
    if (field1 == 0) goto block_11;
    goto block_6;
}
block_6: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x0 = field2;
    if (field2 == 0) goto block_11;
    goto block_8;
}
block_8: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field4)(value_x0);
    value_x0 = result0;
    goto block_11;
}
block_11: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x19 + 192));
    value_x8 = field5;
    if (field5 == 0) goto block_18;
    goto block_13;
}
block_13: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x0 = field6;
    if (field6 == 0) goto block_18;
    goto block_15;
}
block_15: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 24));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field8)(value_x0,field8);
    return result1;
    __builtin_unreachable();
}
block_18: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cad7c0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 56));
    *reinterpret_cast<uint32_t*>((value_x0 + 56)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) & 4294967293)));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 176));
    value_x19 = value_x0;
    value_x8 = field1;
    if (field1 == 0) goto block_11;
    goto block_6;
}
block_6: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x0 = field2;
    if (field2 == 0) goto block_11;
    goto block_8;
}
block_8: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field4)(value_x0);
    value_x0 = result0;
    goto block_11;
}
block_11: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x19 + 184));
    value_x8 = field5;
    if (field5 == 0) goto block_18;
    goto block_13;
}
block_13: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x0 = field6;
    if (field6 == 0) goto block_18;
    goto block_15;
}
block_15: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 24));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field8)(value_x0,field8);
    return result1;
    __builtin_unreachable();
}
block_18: {

    return value_x0;
}
}

extern "C" uint64_t RecoveredCall_cf3b10_0(uint64_t);
extern "C" uint64_t RecoveredCall_cf3b10_1(uint64_t);
extern "C" uint64_t RecoveredCall_cf3b10_2(uint64_t);
extern "C" uint64_t LeafTarget_cf3b10_21(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cf3b10(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    value_x19 = value_x0;
    value_x20 = field0;
    if (field0 == 0) goto block_18;
    goto block_3;
}
block_3: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x20 + 40));
    value_x0 = field2;
    value_x21 = field1;
    if (field2 == 0) goto block_10;
    goto block_6;
}
block_6: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t result0 = RecoveredCall_cf3b10_0(value_x0);
    value_x0 = field3;
    if (field3 != 0) goto block_6;
    goto block_10;
}
block_10: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x20 + 24));
    *reinterpret_cast<uint64_t*>((value_x20 + 24)) = 0;
    value_x0 = field4;
    if (field4 == 0) goto block_14;
    goto block_13;
}
block_13: {
    const uint64_t result1 = RecoveredCall_cf3b10_1(value_x0);
    goto block_14;
}
block_14: {
    const uint64_t result2 = RecoveredCall_cf3b10_2(value_x20);
    value_x20 = value_x21;
    if (value_x21 != 0) goto block_3;
    goto block_18;
}
block_18: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    *reinterpret_cast<uint64_t*>((value_x19 + 0)) = 0;
    value_x0 = field5;
    if (field5 == 0) goto block_22;
    goto block_21;
}
block_21: {

    return LeafTarget_cf3b10_21(value_x0);
}
block_22: {

    return value_x0;
}
}

extern "C" uint64_t LeafTarget_d1b630_3(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d1b630(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 288));
    if (uint32_t(uint32_t(field0)) == 0) goto block_4;
    goto block_2;
}
block_2: {

    return LeafTarget_d1b630_3((value_x0 + 40),value_x1);
}
block_4: {

    return uint32_t(((uint32_t(uint32_t(57353)) & 0xffffull) | (32768ull << 16)));
}
}

extern "C" uint64_t LeafTarget_d1c150_3(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d1c150(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 592));
    if (uint32_t(uint32_t(field0)) == 0) goto block_4;
    goto block_2;
}
block_2: {

    return LeafTarget_d1c150_3((value_x0 + 344),value_x1);
}
block_4: {

    return uint32_t(((uint32_t(uint32_t(57353)) & 0xffffull) | (32768ull << 16)));
}
}

extern "C" uint64_t LeafTarget_d1c170_3(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d1c170(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 944));
    if (uint32_t(uint32_t(field0)) == 0) goto block_4;
    goto block_2;
}
block_2: {

    return LeafTarget_d1c170_3((value_x0 + 648),value_x1);
}
block_4: {

    return uint32_t(((uint32_t(uint32_t(57353)) & 0xffffull) | (32768ull << 16)));
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d25b90(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 96));
    value_x0 = field0;
    if (field0 == 0) goto block_5;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 72));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(value_x0,value_x1,field2);
    return result0;
    __builtin_unreachable();
}
block_5: {

    return uint32_t(((uint32_t(uint32_t(5)) & 0xffffull) | (32779ull << 16)));
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d32580(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    value_x0 = field0;
    if (field0 == 0) goto block_5;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(value_x0,field2);
    return result0;
    __builtin_unreachable();
}
block_5: {

    return uint32_t(1);
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d56550(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 608));
    value_x0 = field0;
    if (field0 == 0) goto block_5;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(value_x0,value_x1,field2);
    return result0;
    __builtin_unreachable();
}
block_5: {

    return uint32_t(((uint32_t(uint32_t(57353)) & 0xffffull) | (32768ull << 16)));
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d56f80(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 608));
    value_x19 = field0;
    if (field0 == 0) goto block_8;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 112));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(value_x19);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 584));
    value_x0 = result0;
    value_x19 = field3;
    if (field3 != 0) goto block_2;
    goto block_8;
}
block_8: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d56fb0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 608));
    value_x19 = field0;
    if (field0 == 0) goto block_8;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 120));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(value_x19);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 584));
    value_x0 = result0;
    value_x19 = field3;
    if (field3 != 0) goto block_2;
    goto block_8;
}
block_8: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d5ace0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 608));
    value_x0 = field0;
    if (field0 == 0) goto block_5;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(value_x0,value_x1,field2);
    return result0;
    __builtin_unreachable();
}
block_5: {

    return uint32_t(((uint32_t(uint32_t(57353)) & 0xffffull) | (32768ull << 16)));
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d5b540(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 416));
    if (uint32_t(uint32_t(field0)) == 0) goto block_4;
    goto block_2;
}
block_2: {

    return uint32_t(1);
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 608));
    value_x0 = field1;
    if (field1 == 0) goto block_9;
    goto block_6;
}
block_6: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 96));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(value_x0,field3);
    return result0;
    __builtin_unreachable();
}
block_9: {

    return value_x0;
}
}

extern "C" uint64_t RecoveredCall_d5b6d0_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d5b6d0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 608));
    if (field0 == 0) goto block_9;
    goto block_2;
}
block_2: {
    const uint64_t result0 = RecoveredCall_d5b6d0_0((value_x0 + 608),value_x1,value_x2);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((value_x0 + 608) + 0));
    return uint32_t((field1 == 0));
}
block_9: {

    return uint32_t(1);
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d5cca0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 616));
    value_x0 = field0;
    if (field0 == 0) goto block_5;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(value_x0,value_x1,field2);
    return result0;
    __builtin_unreachable();
}
block_5: {

    return uint32_t(((uint32_t(uint32_t(57353)) & 0xffffull) | (32768ull << 16)));
}
}

extern "C" uint64_t RecoveredCall_d5d3a0_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d5d3a0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 616));
    if (field0 == 0) goto block_9;
    goto block_2;
}
block_2: {
    const uint64_t result0 = RecoveredCall_d5d3a0_0((value_x0 + 616),value_x1,value_x2);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((value_x0 + 616) + 0));
    return uint32_t((field1 == 0));
}
block_9: {

    return uint32_t(1);
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d6a6d0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 8));
    if (uint32_t(uint32_t(field0)) == 0) goto block_3;
    goto block_2;
}
block_2: {

    return value_x0;
}
block_3: {
    *reinterpret_cast<uint32_t*>((value_x0 + 8)) = uint32_t(uint32_t(1));
    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d6cd90(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 8));
    if (uint32_t(uint32_t(field0)) != 2) goto block_5;
    goto block_3;
}
block_3: {

    return uint32_t(-2);
}
block_5: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 80));
    return uint32_t(field1);
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d781e0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 120));
    value_x8 = field0;
    if (field0 == 0) goto block_7;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 72));
    value_x0 = field1;
    if (field1 != 0) goto block_6;
    goto block_4;
}
block_4: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x8 + 64));
    value_x0 = field2;
    if (field2 == 0) goto block_9;
    goto block_6;
}
block_6: {

    return value_x0;
}
block_7: {

    return 0;
}
block_9: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x8 + 48));
    return field3;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d8f4e0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (uint32_t(value_x1) == 0) goto block_5;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 336));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
    __builtin_unreachable();
}
block_5: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 192));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field4)(value_x0,field4);
    return result1;
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_daa120(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 888));
    value_x1 = field0;
    if (field0 == 0) goto block_5;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 392));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(value_x0,value_x1,field2);
    return result0;
    __builtin_unreachable();
}
block_5: {

    return 0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_db8150(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8;
    uint64_t value_x9;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    value_x8 = (value_x0 + 16);
    value_x9 = field0;
    if (field0 == 0) goto block_6;
    goto block_3;
}
block_3: {
    *reinterpret_cast<uint64_t*>((value_x9 + 0)) = value_x1;
    *reinterpret_cast<uint64_t*>((value_x8 + 0)) = value_x1;
    return value_x0;
}
block_6: {
    *reinterpret_cast<uint64_t*>((value_x0 + 16)) = value_x1;
    *reinterpret_cast<uint64_t*>(((value_x0 + 8) + 0)) = value_x1;
    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dddc80(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_9;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    const uint32_t field1 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field2;
    goto block_9;
}
block_9: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dde220(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_9;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    const uint32_t field1 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field2;
    goto block_9;
}
block_9: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dde6c0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_9;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    const uint32_t field1 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field2;
    goto block_9;
}
block_9: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ddeb40(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_9;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    const uint32_t field1 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field2;
    goto block_9;
}
block_9: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ddebc0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_8;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 56));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field0;
    const uint32_t field1 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    goto block_8;
}
block_8: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de18a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_9;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 1120));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 1120));
    const uint32_t field2 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field1 + 8) + 0)), 1, __ATOMIC_RELAXED);
    goto block_9;
}
block_9: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de3020(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_9;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    const uint32_t field1 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field2;
    goto block_9;
}
block_9: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de3430(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 2888));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field0;
    if (field0 == 0) goto block_9;
    goto block_3;
}
block_3: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 2888));
    const uint32_t field2 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field1 + 8) + 0)), 1, __ATOMIC_RELAXED);
    goto block_9;
}
block_9: {

    if (value_x2 == 0) goto block_11;
    goto block_10;
}
block_10: {
    *reinterpret_cast<uint64_t*>((value_x2 + 0)) = 0;
    goto block_11;
}
block_11: {

    if (value_x3 == 0) goto block_13;
    goto block_12;
}
block_12: {
    *reinterpret_cast<uint32_t*>((value_x3 + 0)) = 0;
    goto block_13;
}
block_13: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de34c0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 832));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field0;
    if (field0 == 0) goto block_9;
    goto block_3;
}
block_3: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 832));
    const uint32_t field2 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field1 + 8) + 0)), 1, __ATOMIC_RELAXED);
    goto block_9;
}
block_9: {

    if (value_x2 == 0) goto block_11;
    goto block_10;
}
block_10: {
    *reinterpret_cast<uint64_t*>((value_x2 + 0)) = 0;
    goto block_11;
}
block_11: {

    if (value_x3 == 0) goto block_13;
    goto block_12;
}
block_12: {
    *reinterpret_cast<uint32_t*>((value_x3 + 0)) = 0;
    goto block_13;
}
block_13: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de3550(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 64));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field0;
    if (field0 == 0) goto block_10;
    goto block_4;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 64));
    const uint32_t field2 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field1 + 8) + 0)), 1, __ATOMIC_RELAXED);
    goto block_10;
}
block_10: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de3600(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 584));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field0;
    if (field0 == 0) goto block_9;
    goto block_3;
}
block_3: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 584));
    const uint32_t field2 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field1 + 8) + 0)), 1, __ATOMIC_RELAXED);
    goto block_9;
}
block_9: {
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x0 + 592));
    *reinterpret_cast<uint32_t*>((value_x2 + 0)) = uint32_t(uint32_t(field3));
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((value_x0 + 596));
    *reinterpret_cast<uint32_t*>((value_x3 + 0)) = uint32_t(uint32_t(field4));
    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de36a0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 4280));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field0;
    if (field0 == 0) goto block_9;
    goto block_3;
}
block_3: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 4280));
    const uint32_t field2 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field1 + 8) + 0)), 1, __ATOMIC_RELAXED);
    goto block_9;
}
block_9: {

    if (value_x2 == 0) goto block_11;
    goto block_10;
}
block_10: {
    *reinterpret_cast<uint64_t*>((value_x2 + 0)) = 0;
    goto block_11;
}
block_11: {

    if (value_x3 == 0) goto block_13;
    goto block_12;
}
block_12: {
    *reinterpret_cast<uint32_t*>((value_x3 + 0)) = 0;
    goto block_13;
}
block_13: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de38a0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 5488));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field0;
    if (field0 == 0) goto block_9;
    goto block_3;
}
block_3: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 5488));
    const uint32_t field2 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field1 + 8) + 0)), 1, __ATOMIC_RELAXED);
    goto block_9;
}
block_9: {
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x0 + 5504));
    *reinterpret_cast<uint32_t*>((value_x2 + 0)) = uint32_t(uint32_t(field3));
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((value_x0 + 5508));
    *reinterpret_cast<uint32_t*>((value_x2 + 4)) = uint32_t(uint32_t(field4));
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((value_x0 + 5512));
    *reinterpret_cast<uint32_t*>((value_x2 + 8)) = uint32_t(uint32_t(field5));
    const uint32_t field6 = *reinterpret_cast<const uint32_t*>((value_x0 + 5516));
    *reinterpret_cast<uint32_t*>((value_x2 + 12)) = uint32_t(uint32_t(field6));
    const uint32_t field7 = *reinterpret_cast<const uint32_t*>((value_x0 + 5520));
    *reinterpret_cast<uint32_t*>((value_x3 + 0)) = uint32_t(uint32_t(field7));
    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de38f0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 5528));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field0;
    if (field0 == 0) goto block_9;
    goto block_3;
}
block_3: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 5528));
    const uint32_t field2 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field1 + 8) + 0)), 1, __ATOMIC_RELAXED);
    goto block_9;
}
block_9: {
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x0 + 5544));
    *reinterpret_cast<uint32_t*>((value_x2 + 0)) = uint32_t(uint32_t(field3));
    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de3930(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 2008));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field0;
    if (field0 == 0) goto block_9;
    goto block_3;
}
block_3: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 2008));
    const uint32_t field2 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field1 + 8) + 0)), 1, __ATOMIC_RELAXED);
    goto block_9;
}
block_9: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de42a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_9;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    const uint32_t field1 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field2;
    goto block_9;
}
block_9: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de4690(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_9;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    const uint32_t field1 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field2;
    goto block_9;
}
block_9: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de4a80(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_9;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    const uint32_t field1 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field2;
    goto block_9;
}
block_9: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de4e70(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_9;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    const uint32_t field1 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field2;
    goto block_9;
}
block_9: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de51e0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_9;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    const uint32_t field1 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field2;
    goto block_9;
}
block_9: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de5650(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_9;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    const uint32_t field1 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field2;
    goto block_9;
}
block_9: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de56d0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_8;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 56));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field0;
    const uint32_t field1 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    goto block_8;
}
block_8: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de9be0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_9;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    const uint32_t field1 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field2;
    goto block_9;
}
block_9: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_debaa0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_9;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    const uint32_t field1 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field2;
    goto block_9;
}
block_9: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_debb20(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_8;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 56));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field0;
    const uint32_t field1 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    goto block_8;
}
block_8: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dec050(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_9;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    const uint32_t field1 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field2;
    goto block_9;
}
block_9: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dec400(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_9;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    const uint32_t field1 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field2;
    goto block_9;
}
block_9: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dec7b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_9;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    const uint32_t field1 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field2;
    goto block_9;
}
block_9: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ded020(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_9;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    const uint32_t field1 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field2;
    goto block_9;
}
block_9: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ded0a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_8;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 56));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field0;
    const uint32_t field1 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    goto block_8;
}
block_8: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ded410(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_9;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    const uint32_t field1 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = field2;
    goto block_9;
}
block_9: {

    return value_x0;
}
}

extern "C" uint64_t LeafTarget_dfc860_3(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dfc860(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 654));
    if (uint32_t(uint32_t(field0)) == 0) goto block_3;
    goto block_2;
}
block_2: {

    return value_x0;
}
block_3: {

    return LeafTarget_dfc860_3(value_x0);
}
}

extern "C" uint64_t LeafTarget_dfd500_3(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dfd500(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 654));
    if (uint32_t(uint32_t(field0)) == 0) goto block_3;
    goto block_2;
}
block_2: {

    return value_x0;
}
block_3: {

    return LeafTarget_dfd500_3(value_x0);
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e00320(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 64));
    if (uint32_t(uint32_t(field0)) == 0) goto block_4;
    goto block_2;
}
block_2: {

    return 0;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 584));
    return field1;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e1f970(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 96));
    value_x2 = field1;
    if (field1 == 0) goto block_4;
    goto block_3;
}
block_3: {
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(value_x2)(value_x0,value_x1,value_x2);
    return result0;
    __builtin_unreachable();
}
block_4: {

    return uint32_t(150);
}
}

extern "C" unsigned char LeafData_e38290_1[];
extern "C" uint64_t RecoveredCall_e38290_0(uint64_t);
extern "C" unsigned char LeafData_e38290_4[];
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e38290(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_9;
    goto block_1;
}
block_1: {
    const uint64_t result0 = RecoveredCall_e38290_0(((reinterpret_cast<uintptr_t>(LeafData_e38290_1) - 1678) + 1678));
    return ((uint32_t(result0) == 0) ? ((reinterpret_cast<uintptr_t>(LeafData_e38290_4) - 1712) + 1712) : 0);
}
block_9: {

    return 0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e3aa00(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {

    if (value_x0 == 0) goto block_15;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 120));
    value_x1 = field1;
    value_x19 = value_x0;
    value_x20 = field0;
    if (field1 == 0) goto block_8;
    goto block_5;
}
block_5: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x20 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(value_x20,value_x1);
    value_x0 = result0;
    goto block_8;
}
block_8: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 136));
    *reinterpret_cast<uint64_t*>((value_x19 + 120)) = 0;
    value_x1 = field3;
    if (field3 == 0) goto block_14;
    goto block_11;
}
block_11: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x20 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field4)(value_x20,value_x1);
    value_x0 = result1;
    goto block_14;
}
block_14: {
    *reinterpret_cast<uint64_t*>((value_x19 + 136)) = 0;
    goto block_15;
}
block_15: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e51670(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
    uint64_t value_x8;
block_0: {

    if (value_x0 == 0) goto block_34;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 184));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 248));
    value_x19 = value_x0;
    value_x20 = field0;
    value_x21 = field1;
    if (field1 == 0) goto block_27;
    goto block_5;
}
block_5: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + 216));
    value_x1 = field2;
    if (field2 == 0) goto block_16;
    goto block_7;
}
block_7: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 192));
    value_x8 = field3;
    if (field3 == 0) goto block_15;
    goto block_9;
}
block_9: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x8 + 40));
    if (field4 == 0) goto block_15;
    goto block_11;
}
block_11: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x8 + 56));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field6)(field5,value_x1);
    *reinterpret_cast<uint64_t*>((value_x21 + 216)) = 0;
    goto block_15;
}
block_15: {
    *reinterpret_cast<uint64_t*>((value_x21 + 216)) = 0;
    goto block_16;
}
block_16: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x21 + 232));
    value_x1 = field7;
    if (field7 == 0) goto block_21;
    goto block_18;
}
block_18: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x20 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field8)(value_x20,value_x1);
    goto block_21;
}
block_21: {
    *reinterpret_cast<uint64_t*>((value_x21 + 232)) = 0;
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x20 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field9)(value_x20,value_x21);
    *reinterpret_cast<uint64_t*>((value_x19 + 248)) = 0;
    value_x0 = result2;
    goto block_27;
}
block_27: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x19 + 64));
    value_x1 = field10;
    if (field10 == 0) goto block_32;
    goto block_29;
}
block_29: {
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((value_x20 + 16));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field11)(value_x20,value_x1);
    value_x0 = result3;
    goto block_32;
}
block_32: {
    *reinterpret_cast<uint64_t*>((value_x19 + 64)) = 0;
    *reinterpret_cast<uint32_t*>((value_x19 + 56)) = 0;
    goto block_34;
}
block_34: {

    return value_x0;
}
}

extern "C" unsigned char LeafData_e63490_8[];
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e63490(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x5;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 1104));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 1312));
    value_x5 = field0;
    value_x8 = field1;
    if (field2 == 0) goto block_13;
    goto block_4;
}
block_4: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x8 + 4960));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x5 + 184));
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((value_x8 + 36));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field3 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t)>(field6)(field4,value_x0,uint32_t(field5),((reinterpret_cast<uintptr_t>(LeafData_e63490_8) - 1344) + 1344),0,value_x5,field6);
    return result0;
    __builtin_unreachable();
}
block_13: {

    return uint32_t(163);
}
}

extern "C" unsigned char LeafData_e81a70_1[];
extern "C" uint64_t RecoveredCall_e81a70_0(uint64_t);
extern "C" unsigned char LeafData_e81a70_4[];
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e81a70(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_9;
    goto block_1;
}
block_1: {
    const uint64_t result0 = RecoveredCall_e81a70_0(((reinterpret_cast<uintptr_t>(LeafData_e81a70_1) - 3033) + 3033));
    return ((uint32_t(result0) == 0) ? ((reinterpret_cast<uintptr_t>(LeafData_e81a70_4) - 1104) + 1104) : 0);
}
block_9: {

    return 0;
}
}

extern "C" uint64_t RecoveredCall_eb2bd0_0(uint64_t);
extern "C" uint64_t RecoveredCall_eb2bd0_1(uint64_t);
extern "C" uint64_t RecoveredCall_eb2bd0_2(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_eb2bd0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    value_x19 = (value_x0 + 376);
    value_x20 = value_x0;
    goto block_2;
}
block_2: {
    const uint64_t result0 = RecoveredCall_eb2bd0_0(value_x19);
    const uint64_t result1 = RecoveredCall_eb2bd0_1(result0);
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x20 + 920));
    if (uint32_t(uint32_t(field0)) == 0) goto block_2;
    goto block_7;
}
block_7: {
    const uint64_t result2 = RecoveredCall_eb2bd0_2(value_x19);
    return 0;
}
}

extern "C" uint64_t RecoveredCall_ed9860_0(uint64_t);
extern "C" uint64_t LeafTarget_ed9860_14(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ed9860(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x8;
block_0: {

    if (value_x0 == 0) goto block_15;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x19 = value_x0;
    value_x20 = field0;
    if (field0 == 0) goto block_8;
    goto block_4;
}
block_4: {
    const uint64_t result0 = RecoveredCall_ed9860_0(value_x20);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x20 + 16));
    value_x0 = result0;
    value_x20 = field1;
    if (field1 != 0) goto block_4;
    goto block_8;
}
block_8: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    value_x8 = field2;
    if (field2 == 0) goto block_15;
    goto block_10;
}
block_10: {
    const uint8_t field3 = *reinterpret_cast<const uint8_t*>((value_x8 + 61));
    if (uint32_t(uint32_t(field3)) != 9) goto block_15;
    goto block_13;
}
block_13: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 272));
    return LeafTarget_ed9860_14(field4);
}
block_15: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_f323e0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 216));
    value_x8 = field0;
    if (field0 == 0) goto block_4;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 232));
    return field1;
}
block_4: {

    return 0;
}
}

extern "C" uint64_t LeafTarget_f35d20_4(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_f35d20(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 32));
    if ((uint32_t(uint32_t(field0)) & 0x2ull) != 0) goto block_3;
    goto block_2;
}
block_2: {

    return value_x0;
}
block_3: {

    return LeafTarget_f35d20_4(value_x1);
}
}

extern "C" uint64_t RecoveredCall_f59c10_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_f59c10(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 3064));
    value_x19 = value_x0;
    value_x8 = field1;
    if (field1 == 0) goto block_10;
    goto block_4;
}
block_4: {
    const uint16_t field2 = *reinterpret_cast<const uint16_t*>((value_x8 + 40));
    value_x20 = ((uint32_t(uint32_t(field2)) == 2) ? uint32_t(50) : uint32_t(18));
    goto block_11;
}
block_10: {
    value_x20 = uint32_t(18);
    goto block_11;
}
block_11: {
    const uint64_t result0 = RecoveredCall_f59c10_0((value_x19 + 40));
    *reinterpret_cast<uint64_t*>((value_x19 + 40)) = value_x20;
    return result0;
}
}

extern "C" uint64_t RecoveredCall_f97e70_0(uint64_t);
extern "C" uint64_t RecoveredCall_f97e70_1(uint64_t);
extern "C" unsigned char LeafData_f97e70_8[];
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_f97e70(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    value_x19 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 88));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = RecoveredCall_f97e70_0(field2);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 88));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 16));
    const uint64_t result1 = RecoveredCall_f97e70_1(field4);
    return ((reinterpret_cast<uintptr_t>(LeafData_f97e70_8) - 2176) + 2176);
}
block_11: {

    return 0;
}
}
