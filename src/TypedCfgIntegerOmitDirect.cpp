// Recovered field operations and forwarding ABI views. Original complete signatures remain unknown.
#include <stdint.h>
typedef unsigned char ByteVector16 __attribute__((vector_size(16),aligned(1)));
typedef unsigned char ByteVector8 __attribute__((vector_size(8),aligned(1)));
static __attribute__((always_inline)) inline ByteVector16 LeafSet64(ByteVector16 input,uint64_t value,unsigned lane) { union {ByteVector16 vector;uint64_t words[2];} bits;bits.vector=input;bits.words[lane]=value;return bits.vector; }
static __attribute__((always_inline)) inline uint64_t LeafDoubleBits(double input) { uint64_t value;__builtin_memcpy(&value,&input,8);return value; }
static __attribute__((always_inline)) inline uint32_t LeafFloatBits(float input) { uint32_t value;__builtin_memcpy(&value,&input,4);return value; }
static __attribute__((always_inline)) inline double LeafBitsDouble(uint64_t input) { double value;__builtin_memcpy(&value,&input,8);return value; }
static __attribute__((always_inline)) inline float LeafBitsFloat(uint32_t input) { float value;__builtin_memcpy(&value,&input,4);return value; }
#ifdef LEAF_NEGATIVE_CONTROL
extern "C" void LeafAddedSideEffect();
#define LEAF_CHECK LeafAddedSideEffect();
#else
#define LEAF_CHECK
#endif

extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1ca200(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint32_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint32_t value_x3 = arg3;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 32));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t)>(field1)(value_x0,value_x1,value_x2,uint32_t(uint32_t(value_x3)),field1);
    __builtin_unreachable();
}
}

extern "C" unsigned char LeafData_1d9710_0[];
extern "C" void RecoveredCall_1d9710_11(uint32_t,uint32_t,uint64_t,uint32_t);
extern "C" uint64_t RecoveredCall_1d9710_16(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" void RecoveredCall_1d9710_22(uint32_t,uint32_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1d9710(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
block_0: {
    RecoveredCall_1d9710_11(uint32_t(5),uint32_t(uint32_t(uint32_t(33))),((reinterpret_cast<uintptr_t>(LeafData_1d9710_0) - 2416) + 2416),uint32_t(510));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    const uint64_t field1 = RecoveredCall_1d9710_16(field0,value_x1,value_x2,value_x3);
    RecoveredCall_1d9710_22(uint32_t(6),uint32_t(uint32_t(uint32_t(33))),((reinterpret_cast<uintptr_t>(LeafData_1d9710_0) - 2416) + 2416),uint32_t(514));
    return field1;
}
}

extern "C" uint64_t RecoveredCall_200f20_9();
extern "C" uint64_t RecoveredCall_200f20_15(uint64_t,uint64_t,uint64_t);
extern "C" unsigned char LeafData_200f20_20[];
extern "C" void RecoveredCall_200f20_26(uint32_t,uint32_t,uint32_t,uint64_t,uint32_t);
extern "C" unsigned char LeafData_200f20_30[];
extern "C" void RecoveredCall_200f20_36(uint32_t,uint32_t,uint32_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_200f20_42(uint64_t);
extern "C" unsigned char LeafData_200f20_44[];
extern "C" void RecoveredCall_200f20_50(uint32_t,uint32_t,uint32_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_200f20(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x2 = arg2;
    uint64_t value_x20;
    uint64_t value_x21;
    uint64_t value_x22;
block_0: {

    if (value_x1 == 0) goto block_20;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    value_x22 = value_x1;
    if (field0 == 0) goto block_20;
    goto block_4;
}
block_4: {
    value_x20 = value_x0;
    value_x21 = value_x2;
    if (value_x0 == 0) goto block_9;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    value_x19 = field1;
    if (field1 != 0) goto block_12;
    goto block_9;
}
block_9: {
    const uint64_t field2 = RecoveredCall_200f20_9();
    value_x19 = field2;
    if (field2 == 0) goto block_44;
    goto block_12;
}
block_12: {
    const uint64_t field3 = RecoveredCall_200f20_15((value_x19 + 8),value_x22,value_x21);
    if (field3 == 0) goto block_30;
    goto block_17;
}
block_17: {

    if (value_x20 == 0) goto block_28;
    goto block_18;
}
block_18: {
    *reinterpret_cast<uint64_t*>((value_x20 + 0)) = value_x19;
    goto block_28;
}
block_20: {
    RecoveredCall_200f20_26(uint32_t(16),uint32_t(144),uint32_t(67),((reinterpret_cast<uintptr_t>(LeafData_200f20_20) - 2615) + 2615),uint32_t(1243));
    goto block_27;
}
block_27: {
    value_x19 = 0;
    goto block_28;
}
block_28: {

    return value_x19;
}
block_30: {
    RecoveredCall_200f20_36(uint32_t(16),uint32_t(144),uint32_t(16),((reinterpret_cast<uintptr_t>(LeafData_200f20_30) - 2615) + 2615),uint32_t(1256));
    if (value_x20 == 0) goto block_41;
    goto block_38;
}
block_38: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    if (field4 == value_x19) goto block_27;
    goto block_41;
}
block_41: {
    RecoveredCall_200f20_42(value_x19);
    goto block_27;
}
block_44: {
    RecoveredCall_200f20_50(uint32_t(16),uint32_t(144),uint32_t(65),((reinterpret_cast<uintptr_t>(LeafData_200f20_44) - 2615) + 2615),uint32_t(1249));
    goto block_28;
}
}

extern "C" uint64_t RecoveredCall_203920_6();
extern "C" uint32_t RecoveredCall_203920_11(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_203920_25(uint64_t);
extern "C" unsigned char LeafData_203920_26[];
extern "C" void RecoveredCall_203920_32(uint32_t,uint32_t,uint32_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_203920(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x2 = arg2;
    uint64_t value_x20;
    uint64_t value_x21;
    uint64_t value_x22;
block_0: {
    value_x20 = value_x0;
    value_x21 = value_x1;
    value_x22 = value_x2;
    if (value_x0 == 0) goto block_6;
    goto block_4;
}
block_4: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    value_x19 = field0;
    if (field0 != 0) goto block_8;
    goto block_6;
}
block_6: {
    const uint64_t field1 = RecoveredCall_203920_6();
    value_x19 = field1;
    goto block_8;
}
block_8: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint32_t field3 = RecoveredCall_203920_11(value_x19,field2,uint32_t(uint32_t(value_x22)));
    if (uint32_t(uint32_t(field3)) == 0) goto block_19;
    goto block_13;
}
block_13: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    *reinterpret_cast<uint64_t*>((value_x21 + 0)) = (field4 + value_x22);
    if (value_x20 == 0) goto block_34;
    goto block_17;
}
block_17: {
    *reinterpret_cast<uint64_t*>((value_x20 + 0)) = value_x19;
    goto block_34;
}
block_19: {

    if (value_x19 == 0) goto block_26;
    goto block_20;
}
block_20: {

    if (value_x20 == 0) goto block_24;
    goto block_21;
}
block_21: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    if (field5 == value_x19) goto block_26;
    goto block_24;
}
block_24: {
    RecoveredCall_203920_25(value_x19);
    goto block_26;
}
block_26: {
    RecoveredCall_203920_32(uint32_t(39),uint32_t(102),uint32_t(65),((reinterpret_cast<uintptr_t>(LeafData_203920_26) - 2518) + 2518),uint32_t(253));
    value_x19 = 0;
    goto block_34;
}
block_34: {

    return value_x19;
}
}

extern "C" uint64_t RecoveredCall_212980_3();
extern "C" unsigned char LeafData_212980_6[];
extern "C" uint64_t RecoveredCall_212980_11(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" void RecoveredCall_212980_17(uint64_t);
extern "C" void RecoveredCall_212980_44(uint64_t);
extern "C" void RecoveredCall_212980_46(uint64_t);
extern "C" void RecoveredCall_212980_49(uint64_t);
extern "C" void RecoveredCall_212980_52(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_212980(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x2 = arg2;
    uint64_t value_x20;
    uint64_t value_x21;
    uint64_t value_x22;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = RecoveredCall_212980_3();
    value_x19 = field0;
    value_x20 = value_x2;
    value_x21 = value_x0;
    value_x22 = value_x1;
    if (field0 == 0) goto block_54;
    goto block_6;
}
block_6: {
    const uint64_t field1 = RecoveredCall_212980_11(0,value_x22,value_x20,((reinterpret_cast<uintptr_t>(LeafData_212980_6) - 648) + 648));
    value_x0 = field1;
    if (field1 == 0) goto block_51;
    goto block_13;
}
block_13: {
    value_x20 = value_x0;
    if (value_x21 == 0) goto block_19;
    goto block_15;
}
block_15: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    value_x0 = field2;
    if (field2 == 0) goto block_18;
    goto block_17;
}
block_17: {
    RecoveredCall_212980_17(value_x0);
    goto block_18;
}
block_18: {
    *reinterpret_cast<uint64_t*>((value_x21 + 0)) = value_x19;
    goto block_19;
}
block_19: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    *reinterpret_cast<uint64_t*>((value_x19 + 8)) = field3;
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x20 + 8));
    *reinterpret_cast<uint64_t*>((value_x19 + 64)) = field4;
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x20 + 16));
    *reinterpret_cast<uint64_t*>((value_x19 + 16)) = field5;
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x20 + 24));
    *reinterpret_cast<uint64_t*>((value_x19 + 72)) = field6;
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x20 + 32));
    value_x8 = field7;
    if (field7 == 0) goto block_48;
    goto block_29;
}
block_29: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x8 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    *reinterpret_cast<uint64_t*>((value_x19 + 80)) = field9;
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x20 + 32));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 0));
    const uint32_t field12 = *reinterpret_cast<const uint32_t*>((field11 + 0));
    *reinterpret_cast<uint32_t*>((value_x19 + 88)) = uint32_t(uint32_t(field12));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((value_x20 + 32));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 8));
    *reinterpret_cast<uint64_t*>((value_x19 + 96)) = field14;
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((value_x20 + 32));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((field15 + 0));
    *reinterpret_cast<uint64_t*>((field16 + 8)) = 0;
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((value_x20 + 32));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 0));
    RecoveredCall_212980_44(field18);
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((value_x20 + 32));
    RecoveredCall_212980_46(field19);
    *reinterpret_cast<uint64_t*>((value_x20 + 32)) = 0;
    goto block_48;
}
block_48: {
    RecoveredCall_212980_49(value_x20);
    goto block_54;
}
block_51: {
    RecoveredCall_212980_52(value_x19);
    value_x19 = 0;
    goto block_54;
}
block_54: {

    return value_x19;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_475460(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x2 = arg2;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((value_x0 + (field0 << 3)) + 16));
    if ((uint32_t(field1) & 0x80ull) != 0) goto block_8;
    goto block_4;
}
block_4: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 56));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(field3)(value_x0,value_x1,uint32_t((uint32_t(value_x2) & 1)),field3);
    __builtin_unreachable();
}
block_8: {

    return uint32_t(1);
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_599950(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 392));
    value_x0 = field0;
    if (field0 == 0) goto block_6;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 176));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(value_x0,uint32_t((uint32_t(value_x1) & 1)),field2);
    __builtin_unreachable();
}
block_6: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_599970(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 360));
    value_x0 = field0;
    if (field0 == 0) goto block_6;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 176));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(value_x0,uint32_t((uint32_t(value_x1) & 1)),field2);
    __builtin_unreachable();
}
block_6: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5999d0(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 392));
    value_x0 = field0;
    if (field0 == 0) goto block_6;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(value_x0,uint32_t((uint32_t(value_x1) & 1)),field2);
    __builtin_unreachable();
}
block_6: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5999f0(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 360));
    value_x0 = field0;
    if (field0 == 0) goto block_6;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(value_x0,uint32_t((uint32_t(value_x1) & 1)),field2);
    __builtin_unreachable();
}
block_6: {

    return value_x0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5c2000(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint32_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint32_t value_x3 = arg3;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 176));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 104));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 88));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t)>(field3)(field1,value_x1,value_x2,uint32_t(uint32_t(value_x3)),field3);
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5c2020(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint32_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint32_t value_x3 = arg3;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 176));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 104));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 64));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t)>(field3)(field1,value_x1,value_x2,uint32_t(uint32_t(value_x3)),field3);
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_6815b0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint32_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint32_t value_x3 = arg3;
    uint64_t value_x4;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((value_x0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((value_x0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    value_x0 = (field0 + (int64_t(field2) >> 1));
    value_x4 = field1;
    if ((uint32_t(field2) & 0x1ull) == 0) goto block_6;
    goto block_4;
}
block_4: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + value_x4));
    value_x4 = field4;
    goto block_6;
}
block_6: {
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t)>(value_x4)(value_x0,value_x1,value_x2,uint32_t((uint32_t(value_x3) & 1)),value_x4);
    __builtin_unreachable();
}
}

extern "C" uint64_t RecoveredCall_693e40_14(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_693e40(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x2;
    uint32_t value_x20;
    uint64_t value_x21;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 64));
    value_x19 = value_x0;
    value_x20 = uint32_t(field0);
    if (uint32_t(uint32_t(field0)) != uint32_t(uint32_t(field1))) goto block_7;
    goto block_5;
}
block_5: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 72));
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((field2 + 48));
    value_x20 = uint32_t(field3);
    goto block_7;
}
block_7: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((value_x19 + 32) + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>(((value_x19 + 32) + 8));
    const uint32_t field6 = *reinterpret_cast<const uint32_t*>((value_x1 + 4));
    value_x1 = (field5 + 1);
    value_x2 = field5;
    value_x21 = uint32_t(field6);
    if (field4 >= (field5 + 1)) goto block_18;
    goto block_12;
}
block_12: {
    const uint64_t field7 = RecoveredCall_693e40_14((value_x19 + 24),value_x1,value_x2,value_x1);
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x19 + 40));
    *reinterpret_cast<uint64_t*>((value_x19 + 48)) = field7;
    value_x0 = field7;
    value_x2 = field8;
    goto block_19;
}
block_18: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x19 + 48));
    value_x0 = field9;
    goto block_19;
}
block_19: {
    *reinterpret_cast<uint64_t*>((value_x0 + (value_x2 << 3))) = ((uint32_t(uint32_t(value_x20)) & ~0xffffffff00000000ull) | ((value_x21 << 32) & 0xffffffff00000000ull));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>(((value_x19 + 40) + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((value_x19 + 40) + 8));
    *reinterpret_cast<uint64_t*>((value_x19 + 40)) = (field10 + 1);
    return (field11 + (field10 << 3));
}
}

extern "C" unsigned char LeafData_73fc20_0[];
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_73fc20(uint64_t arg0,uint32_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint32_t value_x2 = arg2;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 200));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((((reinterpret_cast<uintptr_t>(LeafData_73fc20_0) - 3600) + 3600) + (uint64_t(uint32_t(value_x1)) << 2)));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((((reinterpret_cast<uintptr_t>(LeafData_73fc20_0) - 3600) + 3600) + (uint64_t(uint32_t(value_x2)) << 2)));
    *reinterpret_cast<uint32_t*>(((field0 + 28) + 0)) = uint32_t(uint32_t(field1));
    *reinterpret_cast<uint32_t*>(((field0 + 28) + 4)) = uint32_t(uint32_t(field2));
    return 0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_806e30(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint64_t value_x2;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((value_x0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((value_x0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    value_x0 = (field0 + (int64_t(field2) >> 1));
    value_x2 = field1;
    if ((uint32_t(field2) & 0x1ull) == 0) goto block_6;
    goto block_4;
}
block_4: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + value_x2));
    value_x2 = field4;
    goto block_6;
}
block_6: {
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(value_x2)(value_x0,uint32_t((uint32_t(value_x1) & 1)),value_x2);
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_823990(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint64_t value_x2;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((value_x0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((value_x0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    value_x0 = (field0 + (int64_t(field2) >> 1));
    value_x2 = field1;
    if ((uint32_t(field2) & 0x1ull) == 0) goto block_6;
    goto block_4;
}
block_4: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + value_x2));
    value_x2 = field4;
    goto block_6;
}
block_6: {
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(value_x2)(value_x0,uint32_t((uint32_t(value_x1) & 1)),value_x2);
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_93fa60(uint64_t arg0,uint64_t arg1,uint32_t arg2,uint32_t arg3,float float_arg0) {
    LEAF_CHECK
    float value_v0 = float_arg0;
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x2 = arg2;
    uint32_t value_x3 = arg3;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 176));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,float)>(field1)(value_x0,value_x1,uint32_t((uint32_t(value_x2) & 1)),uint32_t((uint32_t(value_x3) & 1)),field1,float(1.00000000));
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aab950(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 240));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,uint32_t((uint32_t(value_x1) & 1)),field2);
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aab970(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 248));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,uint32_t((uint32_t(value_x1) & 1)),field2);
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aab9c0(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 280));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,uint32_t((uint32_t(value_x1) & 1)),field2);
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aac870(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 240));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,uint32_t((uint32_t(value_x1) & 1)),field2);
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aac890(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 248));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,uint32_t((uint32_t(value_x1) & 1)),field2);
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aac8e0(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 280));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,uint32_t((uint32_t(value_x1) & 1)),field2);
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aadd10(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 92));
    *reinterpret_cast<uint32_t*>((value_x0 + 88)) = uint32_t(uint32_t(field0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 176));
    const uint64_t field3 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(value_x0);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    *reinterpret_cast<uint64_t*>((value_x0 + 48)) = field4;
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 88));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field7)(field5,uint32_t(uint32_t(uint32_t(uint32_t(value_x1)))),field7);
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b1d570(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint64_t value_x8;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 120));
    value_x8 = uint32_t(field0);
    if ((uint32_t(uint32_t(field0)) + 1) == 0) goto block_12;
    goto block_3;
}
block_3: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 104));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + (value_x8 << 3)));
    value_x8 = field2;
    if (field2 == 0) goto block_12;
    goto block_6;
}
block_6: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x0 = field3;
    if (field3 == 0) goto block_12;
    goto block_8;
}
block_8: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 144));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field5)(value_x0,uint32_t((uint32_t(value_x1) & 1)),field5);
    __builtin_unreachable();
}
block_12: {

    return value_x0;
}
}

extern "C" uint32_t RecoveredCall_d5b670_4(uint64_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d5b670(uint64_t arg0,uint32_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint32_t value_x19;
    uint32_t value_x2 = arg2;
    uint32_t value_x20;
    uint64_t value_x21;
block_0: {
    const uint32_t field0 = RecoveredCall_d5b670_4((value_x0 + 16),value_x1,value_x2);
    value_x19 = uint32_t(uint32_t(value_x2));
    value_x20 = uint32_t(uint32_t(value_x1));
    value_x21 = value_x0;
    if (uint32_t(uint32_t(field0)) == 0) goto block_8;
    goto block_6;
}
block_6: {
    value_x0 = uint32_t(1);
    goto block_7;
}
block_7: {

    return value_x0;
}
block_8: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x21 + 608));
    value_x0 = field1;
    if (field1 == 0) goto block_7;
    goto block_10;
}
block_10: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 128));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(field3)(value_x0,uint32_t(uint32_t(value_x20)),uint32_t(uint32_t(value_x19)),field3);
    __builtin_unreachable();
}
}

extern "C" void RecoveredCall_d5cce0_7(uint64_t,uint32_t);
extern "C" void RecoveredCall_d5cce0_10(uint64_t,uint32_t);
extern "C" void RecoveredCall_d5cce0_13(uint64_t,uint32_t);
extern "C" void RecoveredCall_d5cce0_16(uint64_t,uint32_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d5cce0(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint32_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 416));
    value_x19 = uint32_t(uint32_t(value_x1));
    value_x20 = value_x0;
    if (uint32_t(uint32_t(field0)) == uint32_t(value_x1)) goto block_18;
    goto block_5;
}
block_5: {
    RecoveredCall_d5cce0_7((value_x20 + 456),uint32_t(uint32_t(value_x19)));
    RecoveredCall_d5cce0_10((value_x20 + 488),uint32_t(uint32_t(value_x19)));
    RecoveredCall_d5cce0_13((value_x20 + 520),uint32_t(uint32_t(value_x19)));
    RecoveredCall_d5cce0_16((value_x20 + 552),uint32_t(uint32_t(value_x19)));
    *reinterpret_cast<uint32_t*>((value_x20 + 416)) = uint32_t(value_x19);
    goto block_18;
}
block_18: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x20 + 616));
    value_x0 = field1;
    if (field1 == 0) goto block_24;
    goto block_20;
}
block_20: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field3)(value_x0,uint32_t(uint32_t(value_x19)),field3);
    __builtin_unreachable();
}
block_24: {

    return value_x0;
}
}

extern "C" uint32_t RecoveredCall_d5d2f0_4(uint64_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d5d2f0(uint64_t arg0,uint32_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint32_t value_x19;
    uint32_t value_x2 = arg2;
    uint32_t value_x20;
    uint64_t value_x21;
block_0: {
    const uint32_t field0 = RecoveredCall_d5d2f0_4((value_x0 + 16),value_x1,value_x2);
    value_x19 = uint32_t(uint32_t(value_x2));
    value_x20 = uint32_t(uint32_t(value_x1));
    value_x21 = value_x0;
    if (uint32_t(uint32_t(field0)) == 0) goto block_8;
    goto block_6;
}
block_6: {
    value_x0 = uint32_t(1);
    goto block_7;
}
block_7: {

    return value_x0;
}
block_8: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x21 + 616));
    value_x0 = field1;
    if (field1 == 0) goto block_7;
    goto block_10;
}
block_10: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 128));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(field3)(value_x0,uint32_t(uint32_t(value_x20)),uint32_t(uint32_t(value_x19)),field3);
    __builtin_unreachable();
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_df0f50(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 104));
    value_x8 = uint32_t(uint32_t(value_x1));
    if (field0 <= uint32_t(uint32_t(value_x1))) goto block_10;
    goto block_4;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 88));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + (value_x8 << 3)));
    return ((field2 == 0) ? 0 : (field2 + 16));
}
block_10: {

    return 0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_df10b0(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 88));
    value_x8 = uint32_t(uint32_t(value_x1));
    if (field0 <= uint32_t(uint32_t(value_x1))) goto block_10;
    goto block_4;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 72));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + (value_x8 << 3)));
    return ((field2 == 0) ? 0 : (field2 + 16));
}
block_10: {

    return 0;
}
}

extern "C" uint64_t RecoveredCall_e13dc0_7(uint64_t,uint32_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e13dc0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
    uint64_t value_x3 = arg3;
    uint64_t value_x4 = arg4;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x3 + 0)) = 0;
    if (value_x1 == 0) goto block_8;
    goto block_2;
}
block_2: {

    return RecoveredCall_e13dc0_7(value_x1,uint32_t(uint32_t(uint32_t(((uint32_t(uint32_t(5639)) & 0xffffull) | (5ull << 16))))),value_x4);
}
block_8: {

    return uint32_t(81);
}
}

extern "C" uint64_t RecoveredCall_e13df0_7(uint64_t,uint32_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e13df0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
    uint64_t value_x3 = arg3;
    uint64_t value_x4 = arg4;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x3 + 0)) = 0;
    if (value_x1 == 0) goto block_8;
    goto block_2;
}
block_2: {

    return RecoveredCall_e13df0_7(value_x1,uint32_t(uint32_t(uint32_t(((uint32_t(uint32_t(5632)) & 0xffffull) | (5ull << 16))))),value_x4);
}
block_8: {

    return uint32_t(81);
}
}
