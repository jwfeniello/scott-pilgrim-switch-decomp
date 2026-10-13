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


extern "C" unsigned char LeafData_1b91f0_40[];
extern "C" uint64_t RecoveredCall_1b91f0_3(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1b91f0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
    uint64_t value_x8;
block_0: {

    if (value_x0 == 0) goto block_49;
    goto block_1;
}
block_1: {
    value_x19 = value_x0;
    value_x8 = value_x0;
    goto block_3;
}
block_3: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x8 + 56));
    value_x20 = value_x8;
    value_x8 = field0;
    if (field0 != 0) goto block_3;
    goto block_6;
}
block_6: {
    *reinterpret_cast<uint64_t*>((value_x20 + 56)) = value_x1;
    if (value_x1 == 0) goto block_9;
    goto block_8;
}
block_8: {
    *reinterpret_cast<uint64_t*>((value_x1 + 64)) = value_x20;
    goto block_9;
}
block_9: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    value_x8 = field1;
    if (field1 == 0) goto block_40;
    goto block_11;
}
block_11: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x8 + 48));
    value_x8 = field2;
    if (field2 == 0) goto block_40;
    goto block_13;
}
block_13: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 8));
    value_x21 = field3;
    if (field3 == 0) goto block_52;
    goto block_15;
}
block_15: {
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t)>(value_x21)(value_x19,uint32_t(6),value_x20,uint32_t(6),0,uint32_t(1));
    if (int64_t(result0) < int64_t(1)) goto block_38;
    goto block_24;
}
block_24: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(field5)(value_x19,uint32_t(6),0,value_x20);
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t)>(value_x21)(value_x19,uint32_t(134),value_x20,uint32_t(6),0,result1);
    goto block_38;
}
block_38: {

    return value_x19;
}
block_40: {
    const uint64_t result3 = RecoveredCall_1b91f0_3(uint32_t(32),uint32_t(103),uint32_t(121),((reinterpret_cast<uintptr_t>(LeafData_1b91f0_40) - 3345) + 3345),uint32_t(349));
    return value_x19;
}
block_49: {

    return value_x1;
}
block_52: {
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(value_x8)(value_x19,uint32_t(6),0,value_x20);
    return value_x19;
}
}



extern "C" unsigned char LeafData_1c34f0_2[];
extern "C" uint64_t RecoveredCall_1c34f0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1c34f0_1(uint64_t,uint64_t);
extern "C" unsigned char LeafData_1c34f0_18[];
extern "C" uint64_t RecoveredCall_1c34f0_2(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1c34f0_3(uint64_t);
extern "C" uint64_t RecoveredCall_1c34f0_4(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1c34f0(uint64_t arg0) {
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
    const uint64_t result0 = RecoveredCall_1c34f0_0(uint32_t(24),((reinterpret_cast<uintptr_t>(LeafData_1c34f0_2) - 2128) + 2128),uint32_t(245));
    value_x19 = result0;
    value_x20 = value_x0;
    if (result0 == 0) goto block_18;
    goto block_9;
}
block_9: {
    *reinterpret_cast<uint64_t*>(((value_x19 + 0) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 0) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((value_x19 + 16)) = 4294967296;
    const uint64_t result1 = RecoveredCall_1c34f0_1(value_x19,value_x20);
    if (result1 == 0) goto block_27;
    goto block_16;
}
block_16: {

    return value_x19;
}
block_18: {
    const uint64_t result2 = RecoveredCall_1c34f0_2(uint32_t(3),uint32_t(113),uint32_t(65),((reinterpret_cast<uintptr_t>(LeafData_1c34f0_18) - 2128) + 2128),uint32_t(246));
    return value_x19;
}
block_27: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    value_x0 = field0;
    if (field0 == 0) goto block_32;
    goto block_29;
}
block_29: {
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x19 + 20));
    if ((uint32_t(uint32_t(field1)) & 0x2ull) != 0) goto block_32;
    goto block_31;
}
block_31: {
    const uint64_t result3 = RecoveredCall_1c34f0_3(value_x0);
    goto block_32;
}
block_32: {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x19 + 20));
    value_x8 = uint32_t(field2);
    if ((uint32_t(uint32_t(field2)) & 0x1ull) != 0) goto block_38;
    goto block_34;
}
block_34: {
    *reinterpret_cast<uint32_t*>((value_x19 + 20)) = uint32_t(uint32_t((uint32_t(value_x8) | 32768)));
    *reinterpret_cast<uint64_t*>((value_x19 + 0)) = 0;
    goto block_40;
}
block_38: {
    const uint64_t result4 = RecoveredCall_1c34f0_4(value_x19);
    goto block_40;
}
block_40: {

    return 0;
}
}



extern "C" uint64_t RecoveredCall_1cb1b0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1cb1b0_1(uint64_t,uint64_t);
extern "C" unsigned char LeafData_1cb1b0_15[];
extern "C" uint64_t RecoveredCall_1cb1b0_2(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1cb1b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 0));
    const uint64_t result0 = RecoveredCall_1cb1b0_0(field0,uint32_t(field1),value_x1);
    value_x19 = result0;
    value_x20 = value_x0;
    if (result0 == 0) goto block_15;
    goto block_7;
}
block_7: {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x20 + 4));
    if (uint32_t(uint32_t(field2)) != 258) goto block_13;
    goto block_10;
}
block_10: {
    const uint64_t result1 = RecoveredCall_1cb1b0_1(value_x19,uint32_t(1));
    goto block_13;
}
block_13: {

    return value_x19;
}
block_15: {
    const uint64_t result2 = RecoveredCall_1cb1b0_2(uint32_t(13),uint32_t(119),uint32_t(105),((reinterpret_cast<uintptr_t>(LeafData_1cb1b0_15) - 1157) + 1157),uint32_t(456));
    return value_x19;
}
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1cfda0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x2;
    uint64_t value_x20;
    uint64_t value_x8;
    uint64_t value_x9;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 0));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    if (uint32_t(uint32_t(field0)) != uint32_t(uint32_t(field1))) goto block_21;
    goto block_4;
}
block_4: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    value_x20 = value_x0;
    value_x8 = field2;
    if (field2 == 0) goto block_23;
    goto block_7;
}
block_7: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x8 + 136));
    value_x19 = value_x1;
    value_x9 = field3;
    if (field3 == 0) goto block_16;
    goto block_10;
}
block_10: {
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(value_x9)(value_x20,value_x19);
    value_x0 = result0;
    if (int32_t(uint32_t(result0)) < int32_t(1)) goto block_22;
    goto block_15;
}
block_15: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x20 + 16));
    value_x8 = field4;
    goto block_16;
}
block_16: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x8 + 48));
    value_x2 = field5;
    if (field5 == 0) goto block_23;
    goto block_18;
}
block_18: {
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(value_x2)(value_x20,value_x19,value_x2);
    return result1;
    __builtin_unreachable();
}
block_21: {
    value_x0 = uint32_t(-1);
    goto block_22;
}
block_22: {

    return value_x0;
}
block_23: {

    return uint32_t(-2);
}
}



extern "C" uint64_t RecoveredCall_1d1850_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1d1850_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1d1850_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1d1850(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    value_x19 = value_x0;
    if (value_x0 == value_x1) goto block_22;
    goto block_3;
}
block_3: {
    const uint64_t result0 = RecoveredCall_1d1850_0((value_x19 + 8),(value_x1 + 8));
    value_x20 = value_x1;
    if (result0 == 0) goto block_24;
    goto block_8;
}
block_8: {
    const uint64_t result1 = RecoveredCall_1d1850_1((value_x19 + 32),(value_x20 + 32));
    if (result1 == 0) goto block_27;
    goto block_12;
}
block_12: {
    const uint64_t result2 = RecoveredCall_1d1850_2((value_x19 + 56),(value_x20 + 56));
    if (result2 == 0) goto block_30;
    goto block_16;
}
block_16: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x20 + 0));
    *reinterpret_cast<uint32_t*>((value_x19 + 0)) = uint32_t(uint32_t(field0));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x20 + 80));
    *reinterpret_cast<uint32_t*>((value_x19 + 80)) = uint32_t(uint32_t(field1));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x20 + 84));
    *reinterpret_cast<uint32_t*>((value_x19 + 84)) = uint32_t(uint32_t(field2));
    goto block_22;
}
block_22: {

    return value_x19;
}
block_24: {

    return 0;
}
block_27: {

    return 0;
}
block_30: {

    return 0;
}
}



extern "C" uint64_t RecoveredCall_1d7f00_0(uint64_t);
extern "C" uint64_t RecoveredCall_1d7f00_1(uint64_t);
extern "C" uint64_t RecoveredCall_1d7f00_2(uint64_t);
extern "C" uint64_t RecoveredCall_1d7f00_3(uint64_t);
extern "C" uint64_t RecoveredCall_1d7f00_4(uint64_t);
extern "C" uint64_t RecoveredCall_1d7f00_5(uint64_t);
extern "C" uint64_t RecoveredCall_1d7f00_6(uint64_t);
extern "C" uint64_t RecoveredCall_1d7f00_7(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1d7f00(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {

    if (value_x0 == 0) goto block_38;
    goto block_1;
}
block_1: {
    const uint64_t result0 = RecoveredCall_1d7f00_0(value_x0);
    value_x19 = result0;
    value_x20 = value_x0;
    if (result0 == 0) goto block_34;
    goto block_5;
}
block_5: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x20 + 24));
    value_x0 = field0;
    if (field0 == 0) goto block_10;
    goto block_7;
}
block_7: {
    const uint64_t result1 = RecoveredCall_1d7f00_1(value_x0);
    *reinterpret_cast<uint64_t*>((value_x19 + 8)) = result1;
    if (result1 == 0) goto block_36;
    goto block_10;
}
block_10: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x20 + 32));
    value_x0 = field1;
    if (field1 == 0) goto block_19;
    goto block_12;
}
block_12: {
    const uint64_t result2 = RecoveredCall_1d7f00_2(value_x0);
    *reinterpret_cast<uint64_t*>((value_x19 + 24)) = int32_t(uint32_t(result2));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x20 + 32));
    const uint64_t result3 = RecoveredCall_1d7f00_3(field2);
    *reinterpret_cast<uint64_t*>((value_x19 + 64)) = result3;
    if (result3 == 0) goto block_36;
    goto block_19;
}
block_19: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x20 + 40));
    value_x0 = field3;
    if (field3 == 0) goto block_24;
    goto block_21;
}
block_21: {
    const uint64_t result4 = RecoveredCall_1d7f00_4(value_x0);
    *reinterpret_cast<uint64_t*>((value_x19 + 16)) = result4;
    if (result4 == 0) goto block_36;
    goto block_24;
}
block_24: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x20 + 48));
    value_x0 = field4;
    if (field4 == 0) goto block_29;
    goto block_26;
}
block_26: {
    const uint64_t result5 = RecoveredCall_1d7f00_5(value_x0);
    *reinterpret_cast<uint64_t*>((value_x19 + 32)) = result5;
    if (result5 == 0) goto block_36;
    goto block_29;
}
block_29: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x20 + 56));
    value_x0 = field5;
    if (field5 == 0) goto block_34;
    goto block_31;
}
block_31: {
    const uint64_t result6 = RecoveredCall_1d7f00_6(value_x0);
    *reinterpret_cast<uint64_t*>((value_x19 + 40)) = result6;
    if (result6 == 0) goto block_36;
    goto block_34;
}
block_34: {

    return value_x19;
}
block_36: {
    const uint64_t result7 = RecoveredCall_1d7f00_7(value_x19);
    goto block_38;
}
block_38: {

    return 0;
}
}



extern "C" unsigned char LeafData_1d9380_1[];
extern "C" uint64_t RecoveredCall_1d9380_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1d9380_1(uint64_t,uint64_t);
extern "C" unsigned char LeafData_1d9380_24[];
extern "C" uint64_t RecoveredCall_1d9380_2(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1d9380_3(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1d9380(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint64_t result0 = RecoveredCall_1d9380_0(uint32_t(56),((reinterpret_cast<uintptr_t>(LeafData_1d9380_1) - 2416) + 2416),uint32_t(75));
    value_x19 = result0;
    value_x20 = value_x0;
    if (result0 == 0) goto block_24;
    goto block_8;
}
block_8: {
    *reinterpret_cast<uint32_t*>((value_x19 + 0)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint64_t*>(((value_x19 + 16) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 16) + 8)) = 0;
    *reinterpret_cast<uint32_t*>((value_x19 + 44)) = 0;
    *reinterpret_cast<uint32_t*>((value_x19 + 32)) = 0;
    *reinterpret_cast<uint64_t*>((value_x19 + 8)) = 0;
    *reinterpret_cast<uint64_t*>((value_x19 + 36)) = ((4 & 0xffff0000ffffffffull) | (1ull << 32));
    *reinterpret_cast<uint64_t*>((value_x19 + 48)) = 0;
    const uint64_t result1 = RecoveredCall_1d9380_1(value_x19,value_x20);
    if (result1 == 0) goto block_33;
    goto block_22;
}
block_22: {

    return value_x19;
}
block_24: {
    const uint64_t result2 = RecoveredCall_1d9380_2(uint32_t(16),uint32_t(182),uint32_t(65),((reinterpret_cast<uintptr_t>(LeafData_1d9380_24) - 2416) + 2416),uint32_t(77));
    return value_x19;
}
block_33: {
    const uint64_t result3 = RecoveredCall_1d9380_3(value_x19);
    return 0;
}
}



extern "C" uint64_t RecoveredCall_1da170_0(uint64_t);
extern "C" uint64_t RecoveredCall_1da170_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1da170_2(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1da170(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {

    if (value_x0 == 0) goto block_14;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t result0 = RecoveredCall_1da170_0(field0);
    value_x19 = result0;
    value_x20 = value_x0;
    if (result0 == 0) goto block_10;
    goto block_6;
}
block_6: {
    const uint64_t result1 = RecoveredCall_1da170_1(value_x19,value_x20);
    if (uint32_t(result1) == 0) goto block_12;
    goto block_10;
}
block_10: {

    return value_x19;
}
block_12: {
    const uint64_t result2 = RecoveredCall_1da170_2(value_x19);
    goto block_14;
}
block_14: {

    return 0;
}
}



extern "C" uint64_t RecoveredCall_1e6610_0(uint64_t);
extern "C" uint64_t RecoveredCall_1e6610_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1e6610_2(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1e6610(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint64_t result0 = RecoveredCall_1e6610_0(value_x0);
    value_x19 = result0;
    value_x20 = value_x0;
    if (result0 == 0) goto block_9;
    goto block_4;
}
block_4: {
    const uint64_t result1 = RecoveredCall_1e6610_1(value_x19,value_x20,uint32_t(-1));
    if (uint32_t(result1) == 0) goto block_11;
    goto block_9;
}
block_9: {

    return value_x19;
}
block_11: {
    const uint64_t result2 = RecoveredCall_1e6610_2(value_x19);
    return 0;
}
}



extern "C" uint64_t RecoveredCall_1f0860_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1f0860_1(uint64_t);
extern "C" unsigned char LeafData_1f0860_10[];
extern "C" uint64_t RecoveredCall_1f0860_2(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1f0860_3(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1f0860(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {

    if (value_x1 == 0) goto block_22;
    goto block_1;
}
block_1: {
    const uint64_t result0 = RecoveredCall_1f0860_0(value_x1,0);
    value_x19 = result0;
    if (result0 == 0) goto block_10;
    goto block_6;
}
block_6: {
    const uint64_t result1 = RecoveredCall_1f0860_1(value_x19);
    value_x20 = result1;
    if (result1 != 0) goto block_18;
    goto block_10;
}
block_10: {
    const uint64_t result2 = RecoveredCall_1f0860_2(uint32_t(34),uint32_t(121),uint32_t(65),((reinterpret_cast<uintptr_t>(LeafData_1f0860_10) - 685) + 685),uint32_t(157));
    value_x20 = 0;
    goto block_18;
}
block_18: {
    const uint64_t result3 = RecoveredCall_1f0860_3(value_x19);
    return value_x20;
}
block_22: {

    return 0;
}
}



extern "C" uint64_t RecoveredCall_1f08e0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1f08e0_1(uint64_t);
extern "C" unsigned char LeafData_1f08e0_10[];
extern "C" uint64_t RecoveredCall_1f08e0_2(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1f08e0_3(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1f08e0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {

    if (value_x1 == 0) goto block_22;
    goto block_1;
}
block_1: {
    const uint64_t result0 = RecoveredCall_1f08e0_0(value_x1,0);
    value_x19 = result0;
    if (result0 == 0) goto block_10;
    goto block_6;
}
block_6: {
    const uint64_t result1 = RecoveredCall_1f08e0_1(value_x19);
    value_x20 = result1;
    if (result1 != 0) goto block_18;
    goto block_10;
}
block_10: {
    const uint64_t result2 = RecoveredCall_1f08e0_2(uint32_t(34),uint32_t(120),uint32_t(65),((reinterpret_cast<uintptr_t>(LeafData_1f08e0_10) - 685) + 685),uint32_t(170));
    value_x20 = 0;
    goto block_18;
}
block_18: {
    const uint64_t result3 = RecoveredCall_1f08e0_3(value_x19);
    return value_x20;
}
block_22: {

    return 0;
}
}



extern "C" uint64_t RecoveredCall_1f27c0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1f27c0_1(uint64_t,uint64_t);
extern "C" unsigned char LeafData_1f27c0_15[];
extern "C" uint64_t RecoveredCall_1f27c0_2(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1f27c0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 0));
    const uint64_t result0 = RecoveredCall_1f27c0_0(field0,uint32_t(field1),value_x1);
    value_x19 = result0;
    value_x20 = value_x0;
    if (result0 == 0) goto block_15;
    goto block_7;
}
block_7: {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x20 + 4));
    if (uint32_t(uint32_t(field2)) != 266) goto block_13;
    goto block_10;
}
block_10: {
    const uint64_t result1 = RecoveredCall_1f27c0_1(value_x19,uint32_t(1));
    goto block_13;
}
block_13: {

    return value_x19;
}
block_15: {
    const uint64_t result2 = RecoveredCall_1f27c0_2(uint32_t(13),uint32_t(113),uint32_t(105),((reinterpret_cast<uintptr_t>(LeafData_1f27c0_15) - 1655) + 1655),uint32_t(177));
    return value_x19;
}
}



extern "C" unsigned char LeafData_20a030_0[];
extern "C" uint64_t RecoveredCall_20a030_0(uint64_t,uint64_t,uint64_t);
extern "C" unsigned char LeafData_20a030_7[];
extern "C" uint64_t RecoveredCall_20a030_1(uint64_t);
extern "C" uint64_t RecoveredCall_20a030_2(uint64_t);
extern "C" uint64_t RecoveredCall_20a030_3(uint64_t);
extern "C" uint64_t RecoveredCall_20a030_4(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_20a030_5(uint64_t);
extern "C" uint64_t RecoveredCall_20a030_6(uint64_t);
extern "C" uint64_t RecoveredCall_20a030_7(uint64_t);
extern "C" uint64_t RecoveredCall_20a030_8(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_20a030(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0;
    uint64_t value_x19;
block_0: {
    const uint64_t result0 = RecoveredCall_20a030_0(uint32_t(144),((reinterpret_cast<uintptr_t>(LeafData_20a030_0) - 2214) + 2214),uint32_t(186));
    value_x19 = result0;
    if (result0 == 0) goto block_33;
    goto block_7;
}
block_7: {
    const uint64_t result1 = RecoveredCall_20a030_1(((reinterpret_cast<uintptr_t>(LeafData_20a030_7) - 256) + 256));
    *reinterpret_cast<uint64_t*>((value_x19 + 8)) = result1;
    value_x0 = result1;
    if (result1 == 0) goto block_41;
    goto block_12;
}
block_12: {
    *reinterpret_cast<uint32_t*>((value_x19 + 0)) = uint32_t(uint32_t(1));
    const uint64_t result2 = RecoveredCall_20a030_2(value_x0);
    *reinterpret_cast<uint64_t*>((value_x19 + 16)) = result2;
    value_x0 = result2;
    if (result2 == 0) goto block_39;
    goto block_17;
}
block_17: {
    *reinterpret_cast<uint64_t*>(((value_x19 + 32) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 32) + 8)) = 0;
    const uint64_t result3 = RecoveredCall_20a030_3(value_x0);
    *reinterpret_cast<uint64_t*>((value_x19 + 24)) = result3;
    if (result3 == 0) goto block_37;
    goto block_21;
}
block_21: {
    *reinterpret_cast<uint64_t*>(((value_x19 + 104) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 104) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((value_x19 + 48)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 88) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 88) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 72) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 72) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 56) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 56) + 8)) = 0;
    const uint64_t result4 = RecoveredCall_20a030_4(uint32_t(4),value_x19,(value_x19 + 120));
    if (uint32_t(result4) == 0) goto block_35;
    goto block_31;
}
block_31: {
    *reinterpret_cast<uint32_t*>((value_x19 + 136)) = uint32_t(uint32_t(1));
    goto block_33;
}
block_33: {

    return value_x19;
}
block_35: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x19 + 24));
    const uint64_t result5 = RecoveredCall_20a030_5(field0);
    goto block_37;
}
block_37: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 16));
    const uint64_t result6 = RecoveredCall_20a030_6(field1);
    goto block_39;
}
block_39: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 8));
    const uint64_t result7 = RecoveredCall_20a030_7(field2);
    goto block_41;
}
block_41: {
    const uint64_t result8 = RecoveredCall_20a030_8(value_x19);
    return 0;
}
}



extern "C" unsigned char LeafData_20af10_0[];
extern "C" uint64_t RecoveredCall_20af10_0(uint64_t,uint64_t,uint64_t);
extern "C" unsigned char LeafData_20af10_7[];
extern "C" uint64_t RecoveredCall_20af10_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_20af10_2(uint64_t);
extern "C" uint64_t RecoveredCall_20af10_3(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_20af10(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0;
    uint64_t value_x19;
block_0: {
    const uint64_t result0 = RecoveredCall_20af10_0(uint32_t(64),((reinterpret_cast<uintptr_t>(LeafData_20af10_0) - 3074) + 3074),uint32_t(176));
    value_x19 = result0;
    if (result0 == 0) goto block_24;
    goto block_7;
}
block_7: {
    *reinterpret_cast<uint64_t*>(((value_x19 + 48) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 48) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 32) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 32) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 16) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 16) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 0) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 0) + 8)) = 0;
    const uint64_t result1 = RecoveredCall_20af10_1(uint32_t(56),((reinterpret_cast<uintptr_t>(LeafData_20af10_7) - 3074) + 3074),uint32_t(181));
    value_x0 = result1;
    if (result1 == 0) goto block_26;
    goto block_17;
}
block_17: {
    *reinterpret_cast<uint64_t*>(((value_x0 + 40) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 40) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 24) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 24) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 8) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 8) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((value_x19 + 56)) = value_x0;
    const uint64_t result2 = RecoveredCall_20af10_2(value_x19);
    goto block_24;
}
block_24: {

    return value_x19;
}
block_26: {
    const uint64_t result3 = RecoveredCall_20af10_3(value_x19);
    return 0;
}
}



extern "C" uint64_t RecoveredCall_218520_0(uint64_t);
extern "C" unsigned char LeafData_218520_3[];
extern "C" uint64_t RecoveredCall_218520_1(uint64_t);
extern "C" unsigned char LeafData_218520_7[];
extern "C" uint64_t RecoveredCall_218520_2(uint64_t);
extern "C" unsigned char LeafData_218520_11[];
extern "C" uint64_t RecoveredCall_218520_3(uint64_t);
extern "C" uint64_t RecoveredCall_218520_4(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_218520(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint64_t result0 = RecoveredCall_218520_0(value_x0);
    value_x19 = result0;
    if (result0 == 0) goto block_20;
    goto block_3;
}
block_3: {
    const uint64_t result1 = RecoveredCall_218520_1(((reinterpret_cast<uintptr_t>(LeafData_218520_3) - 3784) + 3784));
    *reinterpret_cast<uint64_t*>((value_x19 + 8)) = result1;
    const uint64_t result2 = RecoveredCall_218520_2(((reinterpret_cast<uintptr_t>(LeafData_218520_7) - 3832) + 3832));
    *reinterpret_cast<uint64_t*>((value_x19 + 16)) = result2;
    const uint64_t result3 = RecoveredCall_218520_3(((reinterpret_cast<uintptr_t>(LeafData_218520_11) - 3808) + 3808));
    *reinterpret_cast<uint64_t*>((value_x19 + 64)) = result3;
    if (result3 == 0) goto block_22;
    goto block_16;
}
block_16: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x19 + 8));
    if (field0 == 0) goto block_22;
    goto block_18;
}
block_18: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 16));
    if (field1 == 0) goto block_22;
    goto block_20;
}
block_20: {

    return value_x19;
}
block_22: {
    const uint64_t result4 = RecoveredCall_218520_4(value_x19);
    return 0;
}
}



extern "C" uint64_t RecoveredCall_2185a0_0(uint64_t);
extern "C" unsigned char LeafData_2185a0_3[];
extern "C" uint64_t RecoveredCall_2185a0_1(uint64_t);
extern "C" unsigned char LeafData_2185a0_7[];
extern "C" uint64_t RecoveredCall_2185a0_2(uint64_t);
extern "C" unsigned char LeafData_2185a0_11[];
extern "C" uint64_t RecoveredCall_2185a0_3(uint64_t);
extern "C" uint64_t RecoveredCall_2185a0_4(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2185a0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint64_t result0 = RecoveredCall_2185a0_0(value_x0);
    value_x19 = result0;
    if (result0 == 0) goto block_20;
    goto block_3;
}
block_3: {
    const uint64_t result1 = RecoveredCall_2185a0_1(((reinterpret_cast<uintptr_t>(LeafData_2185a0_3) - 3856) + 3856));
    *reinterpret_cast<uint64_t*>((value_x19 + 8)) = result1;
    const uint64_t result2 = RecoveredCall_2185a0_2(((reinterpret_cast<uintptr_t>(LeafData_2185a0_7) - 3904) + 3904));
    *reinterpret_cast<uint64_t*>((value_x19 + 16)) = result2;
    const uint64_t result3 = RecoveredCall_2185a0_3(((reinterpret_cast<uintptr_t>(LeafData_2185a0_11) - 3880) + 3880));
    *reinterpret_cast<uint64_t*>((value_x19 + 64)) = result3;
    if (result3 == 0) goto block_22;
    goto block_16;
}
block_16: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x19 + 8));
    if (field0 == 0) goto block_22;
    goto block_18;
}
block_18: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 16));
    if (field1 == 0) goto block_22;
    goto block_20;
}
block_20: {

    return value_x19;
}
block_22: {
    const uint64_t result4 = RecoveredCall_2185a0_4(value_x19);
    return 0;
}
}



extern "C" uint64_t RecoveredCall_218620_0(uint64_t);
extern "C" unsigned char LeafData_218620_3[];
extern "C" uint64_t RecoveredCall_218620_1(uint64_t);
extern "C" unsigned char LeafData_218620_7[];
extern "C" uint64_t RecoveredCall_218620_2(uint64_t);
extern "C" unsigned char LeafData_218620_11[];
extern "C" uint64_t RecoveredCall_218620_3(uint64_t);
extern "C" uint64_t RecoveredCall_218620_4(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_218620(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint64_t result0 = RecoveredCall_218620_0(value_x0);
    value_x19 = result0;
    if (result0 == 0) goto block_20;
    goto block_3;
}
block_3: {
    const uint64_t result1 = RecoveredCall_218620_1(((reinterpret_cast<uintptr_t>(LeafData_218620_3) - 3928) + 3928));
    *reinterpret_cast<uint64_t*>((value_x19 + 8)) = result1;
    const uint64_t result2 = RecoveredCall_218620_2(((reinterpret_cast<uintptr_t>(LeafData_218620_7) - 3976) + 3976));
    *reinterpret_cast<uint64_t*>((value_x19 + 16)) = result2;
    const uint64_t result3 = RecoveredCall_218620_3(((reinterpret_cast<uintptr_t>(LeafData_218620_11) - 3952) + 3952));
    *reinterpret_cast<uint64_t*>((value_x19 + 64)) = result3;
    if (result3 == 0) goto block_22;
    goto block_16;
}
block_16: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x19 + 8));
    if (field0 == 0) goto block_22;
    goto block_18;
}
block_18: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 16));
    if (field1 == 0) goto block_22;
    goto block_20;
}
block_20: {

    return value_x19;
}
block_22: {
    const uint64_t result4 = RecoveredCall_218620_4(value_x19);
    return 0;
}
}



extern "C" unsigned char LeafData_220d00_7[];
extern "C" uint64_t RecoveredCall_220d00_1(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" unsigned char LeafData_220d00_18[];
extern "C" uint64_t RecoveredCall_220d00_2(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_220d00(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    if (field0 == 0) goto block_7;
    goto block_2;
}
block_2: {
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x0 + 68));
    if ((uint32_t(uint32_t(field1)) & 0x1ull) != 0) goto block_16;
    goto block_4;
}
block_4: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 64));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(field3)(value_x0,value_x1,value_x2,field3);
    return result0;
    __builtin_unreachable();
}
block_7: {
    const uint64_t result1 = RecoveredCall_220d00_1(uint32_t(20),uint32_t(208),uint32_t(276),((reinterpret_cast<uintptr_t>(LeafData_220d00_7) - 1499) + 1499),uint32_t(1046));
    return uint32_t(-1);
}
block_16: {
    *reinterpret_cast<uint32_t*>((value_x0 + 40)) = uint32_t(uint32_t(1));
    const uint64_t result2 = RecoveredCall_220d00_2(uint32_t(20),uint32_t(208),uint32_t(207),((reinterpret_cast<uintptr_t>(LeafData_220d00_18) - 1499) + 1499),uint32_t(1052));
    return uint32_t(-1);
}
}



extern "C" unsigned char LeafData_2230c0_1[];
extern "C" uint64_t RecoveredCall_2230c0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_2230c0_2(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2230c0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x8;
block_0: {
    const uint64_t result0 = RecoveredCall_2230c0_0(uint32_t(56),((reinterpret_cast<uintptr_t>(LeafData_2230c0_1) - 2202) + 2202),uint32_t(11));
    value_x19 = result0;
    value_x20 = value_x0;
    if (result0 == 0) goto block_17;
    goto block_8;
}
block_8: {
    *reinterpret_cast<uint64_t*>(((value_x19 + 40) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 40) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((value_x19 + 0)) = value_x20;
    *reinterpret_cast<uint64_t*>(((value_x19 + 24) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 24) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 8) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 8) + 8)) = 0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x20 + 16));
    value_x8 = field0;
    if (field0 == 0) goto block_17;
    goto block_14;
}
block_14: {
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(value_x8)(value_x19);
    if (uint32_t(result1) == 0) goto block_19;
    goto block_17;
}
block_17: {

    return value_x19;
}
block_19: {
    const uint64_t result2 = RecoveredCall_2230c0_2(value_x19);
    return 0;
}
}
