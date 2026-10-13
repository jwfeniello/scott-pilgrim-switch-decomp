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

extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_408e0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    value_x8 = field1;
    if (field1 == 0) goto block_7;
    goto block_3;
}
block_3: {
    const uint16_t field2 = *reinterpret_cast<const uint16_t*>((value_x8 + 22));
    return uint32_t(uint32_t((uint32_t(uint32_t(field2)) == 3)));
}
block_7: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_40910(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    value_x8 = field1;
    if (field1 == 0) goto block_7;
    goto block_3;
}
block_3: {
    const uint16_t field2 = *reinterpret_cast<const uint16_t*>((value_x8 + 22));
    return uint32_t(uint32_t((uint32_t(uint32_t(field2)) == 4)));
}
block_7: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_40940(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    value_x8 = field1;
    if (field1 == 0) goto block_6;
    goto block_3;
}
block_3: {
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x8 + 22));
    return uint32_t(uint32_t(((uint32_t(uint32_t(field2)) >> 3) & 0x1ull)));
}
block_6: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_40960(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    value_x8 = field1;
    if (field1 == 0) goto block_6;
    goto block_3;
}
block_3: {
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x8 + 22));
    return uint32_t(uint32_t(((uint32_t(uint32_t(field2)) >> 4) & 0x1ull)));
}
block_6: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_40980(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    value_x8 = field1;
    if (field1 == 0) goto block_6;
    goto block_3;
}
block_3: {
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x8 + 23));
    return uint32_t(uint32_t(((uint32_t(uint32_t(field2)) >> 2) & 0x1ull)));
}
block_6: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_41250(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    value_x8 = field1;
    if (field1 == 0) goto block_7;
    goto block_3;
}
block_3: {
    const uint16_t field2 = *reinterpret_cast<const uint16_t*>((value_x8 + 22));
    return uint32_t(uint32_t((uint32_t(uint32_t(field2)) == 10)));
}
block_7: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_41280(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    value_x8 = field1;
    if (field1 == 0) goto block_7;
    goto block_3;
}
block_3: {
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x8 + 22));
    if ((uint32_t(uint32_t(field2)) & 0x20ull) != 0) goto block_9;
    goto block_5;
}
block_5: {

    return uint32_t(uint32_t(0));
}
block_7: {

    return uint32_t(uint32_t(0));
}
block_9: {
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x8 + 0));
    return uint32_t(uint32_t(field3));
}
}

extern "C" uint64_t RecoveredCall_1bb680_0();
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_1bb680() {
    LEAF_CHECK
    uint64_t value_x0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = RecoveredCall_1bb680_0();
    value_x0 = field0;
    if (field0 == 0) goto block_13;
    goto block_2;
}
block_2: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 596));
    const int32_t field2 = *reinterpret_cast<const int32_t*>((value_x0 + 592));
    value_x8 = field2;
    if (uint32_t(uint32_t(field1)) != uint32_t(field2)) goto block_8;
    goto block_6;
}
block_6: {

    return uint32_t(uint32_t(0));
}
block_8: {
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>(((value_x0 + (value_x8 << 2)) + 16));
    *reinterpret_cast<uint32_t*>(((value_x0 + (value_x8 << 2)) + 16)) = uint32_t(uint32_t((uint32_t(uint32_t(field3)) | 1)));
    value_x0 = uint32_t(1);
    goto block_13;
}
block_13: {

    return uint32_t(value_x0);
}
}

extern "C" void RecoveredCall_1dd990_3(uint64_t,uint32_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_1dd990(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
block_0: {
    *reinterpret_cast<uint32_t*>((value_x1 + 80)) = 0;
    RecoveredCall_1dd990_3((value_x1 + 56),uint32_t(0));
    return uint32_t(uint32_t(1));
}
}

extern "C" void RecoveredCall_1df890_7(uint64_t);
extern "C" uint64_t RecoveredCall_1df890_9(uint64_t);
extern "C" uint32_t RecoveredCall_1df890_14(uint64_t,uint32_t);
extern "C" uint32_t RecoveredCall_1df890_21(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" void RecoveredCall_1df890_26(uint64_t,uint32_t);
extern "C" void RecoveredCall_1df890_31(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_1df890(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x2 = arg2;
    uint64_t value_x20;
    uint64_t value_x21;
    uint64_t value_x22;
    uint64_t value_x23;
    uint64_t value_x3 = arg3;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x2 + 0));
    value_x21 = value_x0;
    if (uint32_t(uint32_t(field0)) == 0) goto block_24;
    goto block_3;
}
block_3: {
    RecoveredCall_1df890_7(value_x3);
    const uint64_t field1 = RecoveredCall_1df890_9(value_x3);
    value_x0 = field1;
    value_x19 = value_x3;
    value_x20 = value_x2;
    value_x22 = value_x1;
    if (field1 == 0) goto block_29;
    goto block_11;
}
block_11: {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x20 + 0));
    const uint32_t field3 = RecoveredCall_1df890_14(value_x0,uint32_t((uint32_t(uint32_t(field2)) - 1)));
    value_x23 = value_x0;
    if (uint32_t(uint32_t(field3)) == 0) goto block_29;
    goto block_16;
}
block_16: {
    const uint32_t field4 = RecoveredCall_1df890_21(value_x21,value_x22,value_x23,value_x20,value_x19);
    value_x20 = uint32_t(uint32_t(uint32_t(field4)));
    goto block_30;
}
block_24: {
    RecoveredCall_1df890_26(value_x21,uint32_t(0));
    value_x20 = uint32_t(1);
    goto block_32;
}
block_29: {
    value_x20 = uint32_t(0);
    goto block_30;
}
block_30: {
    RecoveredCall_1df890_31(value_x19);
    goto block_32;
}
block_32: {

    return uint32_t(uint32_t(uint32_t(value_x20)));
}
}

extern "C" void RecoveredCall_1e1370_3(uint64_t,uint32_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_1e1370(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
block_0: {
    *reinterpret_cast<uint32_t*>((value_x1 + 80)) = 0;
    RecoveredCall_1e1370_3((value_x1 + 56),uint32_t(0));
    return uint32_t(uint32_t(1));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_1e4b70(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4,uint64_t arg5) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
    uint64_t value_x4 = arg4;
    uint64_t value_x5 = arg5;
block_0: {

    if (value_x5 == 0) goto block_18;
    goto block_1;
}
block_1: {

    if (value_x0 == 0) goto block_4;
    goto block_2;
}
block_2: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x5 + 0));
    *reinterpret_cast<uint32_t*>((value_x0 + 0)) = uint32_t(uint32_t(field0));
    goto block_4;
}
block_4: {

    if (value_x1 == 0) goto block_7;
    goto block_5;
}
block_5: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x5 + 4));
    *reinterpret_cast<uint32_t*>((value_x1 + 0)) = uint32_t(uint32_t(field1));
    goto block_7;
}
block_7: {

    if (value_x2 == 0) goto block_10;
    goto block_8;
}
block_8: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x5 + 8));
    *reinterpret_cast<uint32_t*>((value_x2 + 0)) = uint32_t(field2);
    goto block_10;
}
block_10: {

    if (value_x3 == 0) goto block_13;
    goto block_11;
}
block_11: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x5 + 24));
    *reinterpret_cast<uint64_t*>((value_x3 + 0)) = field3;
    goto block_13;
}
block_13: {

    if (value_x4 == 0) goto block_16;
    goto block_14;
}
block_14: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x5 + 16));
    *reinterpret_cast<uint64_t*>((value_x4 + 0)) = field4;
    goto block_16;
}
block_16: {

    return uint32_t(uint32_t(1));
}
block_18: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_1ecf80(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8;
    uint64_t value_x9;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((field0 + 4));
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((field1 + 4));
    value_x0 = uint32_t((uint32_t(uint32_t(field2)) - uint32_t(uint32_t(field3))));
    value_x8 = field0;
    value_x9 = field1;
    if (uint32_t(uint32_t((uint32_t(uint32_t(field2)) - uint32_t(uint32_t(field3))))) == 0) goto block_7;
    goto block_6;
}
block_6: {

    return uint32_t(value_x0);
}
block_7: {
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((value_x8 + 8));
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((value_x9 + 8));
    return uint32_t(uint32_t((uint32_t(uint32_t(field4)) - uint32_t(uint32_t(field5)))));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_1f74c0(uint32_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint32_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x2 = arg2;
    uint64_t value_x8;
block_0: {

    if (uint32_t(value_x2) == 0) goto block_19;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 72));
    value_x8 = field0;
    if ((uint32_t(field0) & 0x2ull) == 0) goto block_5;
    goto block_3;
}
block_3: {
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x1 + 80));
    if ((uint32_t(uint32_t(field1)) & 0x4ull) == 0) goto block_23;
    goto block_5;
}
block_5: {

    if ((uint32_t(value_x8) & 0x1ull) != 0) goto block_21;
    goto block_6;
}
block_6: {
    value_x0 = uint32_t((((value_x8 & uint32_t(8256)) != uint32_t(8256)) ? (uint32_t(uint32_t(3)) + 1) : uint32_t(uint32_t(3))));
    if ((value_x8 & uint32_t(8256)) == uint32_t(8256)) goto block_24;
    goto block_12;
}
block_12: {

    if ((uint32_t(value_x8) & 0x2ull) != 0) goto block_24;
    goto block_13;
}
block_13: {

    if ((uint32_t(value_x8) & 0x8ull) == 0) goto block_23;
    goto block_14;
}
block_14: {
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x1 + 96));
    if ((uint32_t(uint32_t(field2)) & 7) == 0) goto block_23;
    goto block_17;
}
block_17: {

    return uint32_t(uint32_t(5));
}
block_19: {

    return uint32_t(uint32_t(1));
}
block_21: {

    return uint32_t(uint32_t(((uint32_t(value_x8) >> 4) & 0x1ull)));
}
block_23: {
    value_x0 = uint32_t(0);
    goto block_24;
}
block_24: {

    return uint32_t(value_x0);
}
}

extern "C" unsigned char LeafData_1ff370_4[];
extern "C" uint64_t RecoveredCall_1ff370_8(uint64_t,uint64_t,uint32_t);
extern "C" unsigned char LeafData_1ff370_15[];
extern "C" void RecoveredCall_1ff370_21(uint32_t,uint32_t,uint32_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_1ff370(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
block_0: {

    if (uint32_t(value_x0) == 0) goto block_3;
    goto block_1;
}
block_1: {

    return uint32_t(uint32_t(1));
}
block_3: {
    const uint64_t field0 = RecoveredCall_1ff370_8(uint32_t(16),((reinterpret_cast<uintptr_t>(LeafData_1ff370_4) - 1759) + 1759),uint32_t(73));
    value_x0 = field0;
    value_x19 = value_x1;
    if (field0 == 0) goto block_15;
    goto block_10;
}
block_10: {
    *reinterpret_cast<uint64_t*>(((value_x0 + 0) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 0) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((value_x19 + 0)) = value_x0;
    return uint32_t(uint32_t(2));
}
block_15: {
    RecoveredCall_1ff370_21(uint32_t(10),uint32_t(114),uint32_t(65),((reinterpret_cast<uintptr_t>(LeafData_1ff370_15) - 1759) + 1759),uint32_t(75));
    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_2074e0(uint32_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint32_t value_x2 = arg2;
block_0: {

    return uint32_t(uint32_t(uint32_t(value_x2)));
}
}

extern "C" void RecoveredCall_20b730_4(uint64_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_20b730(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
block_0: {
    RecoveredCall_20b730_4(value_x1,uint32_t(-1),uint32_t(0));
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x1 + 73));
    return uint32_t(uint32_t((((uint32_t(uint32_t(field0)) & 32) == 0) ? uint32_t(uint32_t(3)) : (0 + 1))));
}
}

extern "C" uint64_t RecoveredCall_21be30_5(uint64_t);
extern "C" void RecoveredCall_21be30_10(uint64_t,uint32_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_21be30(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    value_x8 = field0;
    if (field1 == 0) goto block_13;
    goto block_3;
}
block_3: {
    const uint64_t field2 = RecoveredCall_21be30_5((value_x8 + 8));
    value_x0 = field2;
    value_x19 = value_x1;
    if (field2 == 0) goto block_12;
    goto block_7;
}
block_7: {
    RecoveredCall_21be30_10(value_x19,uint32_t(855),value_x0);
    value_x0 = uint32_t(1);
    goto block_12;
}
block_12: {

    return uint32_t(value_x0);
}
block_13: {

    return uint32_t(uint32_t(0));
}
}

extern "C" void RecoveredCall_21e110_1();
extern "C" unsigned char LeafData_21e110_3[];
extern "C" void RecoveredCall_21e110_9(uint32_t,uint32_t,uint32_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_21e110(uint32_t arg0) {
    LEAF_CHECK
    uint32_t value_x0 = arg0;
block_0: {
    RecoveredCall_21e110_1();
    if (uint32_t(uint32_t(uint32_t(value_x0))) == 0) goto block_12;
    goto block_3;
}
block_3: {
    RecoveredCall_21e110_9(uint32_t(15),uint32_t(109),uint32_t(101),((reinterpret_cast<uintptr_t>(LeafData_21e110_3) - 2048) + 2048),uint32_t(93));
    return uint32_t(uint32_t(0));
}
block_12: {

    return uint32_t(uint32_t(1));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_2246d0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 76));
    if (uint32_t(uint32_t(field0)) != 241) goto block_5;
    goto block_3;
}
block_3: {

    return uint32_t(uint32_t(0));
}
block_5: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 128));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((field1 + 288));
    value_x8 = field1;
    if (uint32_t(uint32_t(field2)) != 23) goto block_11;
    goto block_9;
}
block_9: {
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x8 + 292));
    return uint32_t(uint32_t(field3));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_225cf0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8;
    uint64_t value_x9;
block_0: {

    if (value_x1 == 0) goto block_9;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    value_x8 = field0;
    value_x9 = (field0 & 4278190080);
    if ((field0 & 4278190080) != uint32_t(50331648)) goto block_11;
    goto block_6;
}
block_6: {
    *reinterpret_cast<uint8_t*>((value_x1 + 0)) = uint32_t((value_x8 >> 8));
    *reinterpret_cast<uint8_t*>((value_x1 + 1)) = uint32_t(value_x8);
    goto block_9;
}
block_9: {

    return uint32_t(uint32_t(2));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_2265d0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    if (field0 == 0) goto block_8;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 128));
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((field1 + 0));
    value_x8 = field1;
    if ((uint32_t(uint32_t(field2)) & 0x1ull) != 0) goto block_10;
    goto block_5;
}
block_5: {
    *reinterpret_cast<uint32_t*>((value_x8 + 476)) = uint32_t(uint32_t(1));
    return uint32_t(uint32_t(1));
}
block_8: {

    return uint32_t(uint32_t(1));
}
block_10: {

    return uint32_t(uint32_t(0));
}
}

extern "C" uint32_t RecoveredCall_23e2f0_6(uint64_t,uint64_t,uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_23e2f0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 128));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 224));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 320));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field0 + 304));
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((field0 + 292));
    const uint32_t field5 = RecoveredCall_23e2f0_6(field1,field2,uint32_t(16384),field3,uint32_t(field4));
    value_x0 = uint32_t(field5);
    value_x19 = field0;
    if ((uint32_t(uint32_t(field5)) & 0x80000000ull) != 0) goto block_13;
    goto block_8;
}
block_8: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 320));
    *reinterpret_cast<uint32_t*>((value_x19 + 292)) = uint32_t(value_x0);
    *reinterpret_cast<uint64_t*>((value_x19 + 304)) = field6;
    return uint32_t(uint32_t(1));
}
block_13: {

    return uint32_t(uint32_t(0));
}
}

extern "C" uint32_t RecoveredCall_23e340_5(uint64_t,uint64_t,uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_23e340(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 128));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 248));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((field0 + 360) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + 360) + 8));
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((field0 + 348));
    const uint32_t field5 = RecoveredCall_23e340_5(field1,field2,uint32_t(17408),field3,uint32_t(field4));
    value_x0 = uint32_t(field5);
    value_x19 = field0;
    if ((uint32_t(uint32_t(field5)) & 0x80000000ull) != 0) goto block_12;
    goto block_7;
}
block_7: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 360));
    *reinterpret_cast<uint32_t*>((value_x19 + 348)) = uint32_t(value_x0);
    *reinterpret_cast<uint64_t*>((value_x19 + 368)) = field6;
    return uint32_t(uint32_t(1));
}
block_12: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_247f60(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    value_x8 = field0;
    if (field0 == 0) goto block_7;
    goto block_2;
}
block_2: {
    value_x0 = uint32_t(0);
    goto block_3;
}
block_3: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 16));
    value_x0 = uint32_t((uint32_t(value_x0) + 1));
    value_x8 = field1;
    if (field1 != 0) goto block_3;
    goto block_6;
}
block_6: {

    return uint32_t(value_x0);
}
block_7: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_47c940(uint32_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint32_t value_x1 = arg1;
block_0: {

    return uint32_t(uint32_t(uint32_t(value_x1)));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4af830(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 200));
    if (field0 == 0) goto block_4;
    goto block_2;
}
block_2: {

    return uint32_t(uint32_t(0));
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 224));
    if (field1 == 0) goto block_8;
    goto block_6;
}
block_6: {

    return uint32_t(uint32_t(0));
}
block_8: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 216));
    if (field2 == 0) goto block_12;
    goto block_10;
}
block_10: {

    return uint32_t(uint32_t(0));
}
block_12: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x0 + 208));
    if (field3 == 0) goto block_16;
    goto block_14;
}
block_14: {

    return uint32_t(uint32_t(0));
}
block_16: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    const uint8_t field5 = *reinterpret_cast<const uint8_t*>((field4 + 8));
    value_x8 = field4;
    if (uint32_t(uint32_t(field5)) == 0) goto block_21;
    goto block_19;
}
block_19: {

    return uint32_t(uint32_t(0));
}
block_21: {
    const uint8_t field6 = *reinterpret_cast<const uint8_t*>((value_x8 + 6));
    if (uint32_t(uint32_t(field6)) == 0) goto block_25;
    goto block_23;
}
block_23: {

    return uint32_t(uint32_t(0));
}
block_25: {
    const uint8_t field7 = *reinterpret_cast<const uint8_t*>((value_x8 + 7));
    if (uint32_t(uint32_t(field7)) == 0) goto block_29;
    goto block_27;
}
block_27: {

    return uint32_t(uint32_t(0));
}
block_29: {
    const uint8_t field8 = *reinterpret_cast<const uint8_t*>((value_x8 + 5));
    if (uint32_t(uint32_t(field8)) == 0) goto block_33;
    goto block_31;
}
block_31: {

    return uint32_t(uint32_t(0));
}
block_33: {
    const uint8_t field9 = *reinterpret_cast<const uint8_t*>((value_x8 + 9));
    if (uint32_t(uint32_t(field9)) == 0) goto block_37;
    goto block_35;
}
block_35: {

    return uint32_t(uint32_t(0));
}
block_37: {
    const uint8_t field10 = *reinterpret_cast<const uint8_t*>((value_x8 + 10));
    if (uint32_t(uint32_t(field10)) == 0) goto block_41;
    goto block_39;
}
block_39: {

    return uint32_t(uint32_t(0));
}
block_41: {
    const uint8_t field11 = *reinterpret_cast<const uint8_t*>((value_x8 + 0));
    return uint32_t(uint32_t((uint32_t(uint32_t(field11)) == 0)));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4af900(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    value_x8 = field0;
    if (field0 == 0) goto block_6;
    goto block_2;
}
block_2: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x8 + 12));
    return uint32_t(uint32_t(((uint32_t(uint32_t(field1)) + 1) != 0)));
}
block_6: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4ca2a0(uint32_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 32));
    value_x8 = field0;
    if (field0 == 0) goto block_4;
    goto block_2;
}
block_2: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x8 + 12));
    return uint32_t(uint32_t(field1));
}
block_4: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4cf320(uint32_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
    uint32_t value_x2 = arg2;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 32));
    value_x8 = field0;
    if (field0 == 0) goto block_6;
    goto block_2;
}
block_2: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x8 + 12));
    return uint32_t(uint32_t((uint32_t(uint32_t(field1)) == uint32_t(value_x2))));
}
block_6: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4f0080(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 128));
    value_x8 = field0;
    if (field0 == 0) goto block_7;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((value_x8 + 0) + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((value_x8 + 0) + 8));
    return uint32_t(uint32_t((uint32_t(((field2 - field1) >> 3)) - 1)));
}
block_7: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4fcea0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 0));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    if (uint32_t(uint32_t(field0)) != uint32_t(uint32_t(field1))) goto block_17;
    goto block_4;
}
block_4: {
    const uint16_t field2 = *reinterpret_cast<const uint16_t*>((value_x0 + 4));
    const uint16_t field3 = *reinterpret_cast<const uint16_t*>((value_x1 + 4));
    if (uint32_t(uint32_t(field2)) != uint32_t(uint32_t(field3))) goto block_19;
    goto block_8;
}
block_8: {
    const uint16_t field4 = *reinterpret_cast<const uint16_t*>((value_x0 + 6));
    const uint16_t field5 = *reinterpret_cast<const uint16_t*>((value_x1 + 6));
    if (uint32_t(uint32_t(field4)) != uint32_t(uint32_t(field5))) goto block_21;
    goto block_12;
}
block_12: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    return uint32_t(uint32_t((field7 == field6)));
}
block_17: {

    return uint32_t(uint32_t(0));
}
block_19: {

    return uint32_t(uint32_t(0));
}
block_21: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5040f0(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((field0 + 24));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x0 + 16));
    if (uint32_t(uint32_t((uint32_t(uint32_t(field1)) - uint32_t(uint32_t(field2))))) >= uint32_t(value_x1)) goto block_15;
    goto block_6;
}
block_6: {
    const uint32_t field3 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((value_x0 + 20) + 0)), 1, __ATOMIC_ACQ_REL);
    *reinterpret_cast<uint8_t*>((value_x0 + 24)) = uint32_t(uint32_t(1));
    return uint32_t(uint32_t(0));
}
block_15: {

    return uint32_t(uint32_t(uint32_t(uint32_t(1))));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_510430(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    if (field0 == 0) goto block_7;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 152));
    return uint32_t(uint32_t((field2 <= value_x1)));
}
block_7: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_511d80(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 152));
    if (field0 == 0) goto block_4;
    goto block_2;
}
block_2: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x1 + 16));
    return uint32_t(uint32_t(field1));
}
block_4: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_51f710(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 184));
    value_x8 = field0;
    if (field0 == 0) goto block_6;
    goto block_2;
}
block_2: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x8 + 56));
    return uint32_t(uint32_t((uint32_t(uint32_t(field1)) != 5)));
}
block_6: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_51f730(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 192));
    value_x8 = field0;
    if (field0 == 0) goto block_6;
    goto block_2;
}
block_2: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x8 + 56));
    return uint32_t(uint32_t((uint32_t(uint32_t(field1)) != 5)));
}
block_6: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_530df0(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 144));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + (uint64_t(uint32_t(value_x1)) << 3)));
    return uint32_t(field1);
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_536540(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
    uint64_t value_x9;
block_0: {

    if (value_x0 == 0) goto block_25;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 56));
    value_x8 = value_x0;
    value_x9 = field0;
    if (field0 == 0) goto block_27;
    goto block_4;
}
block_4: {
    *reinterpret_cast<uint64_t*>((value_x9 + 32)) = 0;
    *reinterpret_cast<uint64_t*>((value_x8 + 96)) = uint32_t(1);
    *reinterpret_cast<uint64_t*>((value_x8 + 16)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x8 + 40) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x8 + 40) + 8)) = 0;
    *reinterpret_cast<uint32_t*>((value_x9 + 20)) = uint32_t(uint32_t(32768));
    *reinterpret_cast<uint64_t*>((value_x9 + 136)) = (value_x9 + 1360);
    *reinterpret_cast<uint64_t*>((value_x9 + 0)) = 0;
    *reinterpret_cast<uint32_t*>((value_x9 + 12)) = 0;
    *reinterpret_cast<uint64_t*>((value_x9 + 40)) = 0;
    *reinterpret_cast<uint64_t*>((value_x9 + 52)) = 0;
    *reinterpret_cast<uint32_t*>((value_x9 + 60)) = 0;
    *reinterpret_cast<uint64_t*>((value_x9 + 72)) = 0;
    *reinterpret_cast<uint32_t*>((value_x9 + 80)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x9 + 96) + 0)) = (value_x9 + 1360);
    *reinterpret_cast<uint64_t*>(((value_x9 + 96) + 8)) = (value_x9 + 1360);
    *reinterpret_cast<uint64_t*>((value_x9 + 7136)) = -4294967295;
    return uint32_t(uint32_t(0));
}
block_25: {

    return uint32_t(uint32_t(-2));
}
block_27: {

    return uint32_t(uint32_t(-2));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_55a920(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 200));
    value_x8 = field0;
    if (field0 == 0) goto block_6;
    goto block_2;
}
block_2: {
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x8 + 304));
    return uint32_t(uint32_t((uint32_t(uint32_t(field1)) != 0)));
}
block_6: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_55a940(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 200));
    value_x8 = field0;
    if (field0 == 0) goto block_6;
    goto block_2;
}
block_2: {
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x8 + 305));
    return uint32_t(uint32_t((uint32_t(uint32_t(field1)) != 0)));
}
block_6: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_56bc70(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 72));
    if (uint32_t(uint32_t(field0)) == 0) goto block_9;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 80));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x0 + 76));
    if ((field1 + uint32_t(field2)) <= value_x1) goto block_11;
    goto block_7;
}
block_7: {

    return uint32_t(uint32_t(0));
}
block_9: {

    return uint32_t(uint32_t(0));
}
block_11: {
    *reinterpret_cast<uint64_t*>((value_x0 + 80)) = value_x1;
    return uint32_t(uint32_t(1));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_576540(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 24));
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x1 + 24));
    if (uint32_t(uint32_t(field0)) != uint32_t(uint32_t(field1))) goto block_9;
    goto block_4;
}
block_4: {
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x0 + 25));
    const uint8_t field3 = *reinterpret_cast<const uint8_t*>((value_x1 + 25));
    return uint32_t(uint32_t((uint32_t(uint32_t(field2)) == uint32_t(uint32_t(field3)))));
}
block_9: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_578ef0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 0));
    if (uint32_t(uint32_t(field0)) != 151) goto block_7;
    goto block_3;
}
block_3: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 44));
    return uint32_t(uint32_t(((uint32_t(uint32_t(field1)) + 1) == 0)));
}
block_7: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_578fd0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 0));
    if (uint32_t(uint32_t(field0)) != 151) goto block_7;
    goto block_3;
}
block_3: {
    const int16_t field1 = *reinterpret_cast<const int16_t*>((value_x0 + 44));
    return uint32_t(uint32_t(((uint32_t(uint32_t(field1)) + 343) == 0)));
}
block_7: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_588d80(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 24));
    if (uint32_t(uint32_t(field0)) >= uint32_t(value_x1)) goto block_5;
    goto block_3;
}
block_3: {

    return uint32_t(uint32_t(0));
}
block_5: {
    *reinterpret_cast<uint32_t*>((value_x0 + 28)) = uint32_t(value_x1);
    return uint32_t(uint32_t(1));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5944e0(uint64_t arg0,uint64_t arg1) {
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
    return uint32_t(uint32_t((uint32_t(uint32_t(field30)) == uint32_t(uint32_t(field31)))));
}
block_65: {

    return uint32_t(uint32_t(0));
}
block_67: {

    return uint32_t(uint32_t(0));
}
block_69: {

    return uint32_t(uint32_t(0));
}
block_71: {

    return uint32_t(uint32_t(0));
}
block_73: {

    return uint32_t(uint32_t(0));
}
block_75: {

    return uint32_t(uint32_t(0));
}
block_77: {

    return uint32_t(uint32_t(0));
}
block_79: {

    return uint32_t(uint32_t(0));
}
block_81: {

    return uint32_t(uint32_t(0));
}
block_83: {

    return uint32_t(uint32_t(0));
}
block_85: {

    return uint32_t(uint32_t(0));
}
block_87: {

    return uint32_t(uint32_t(0));
}
block_89: {

    return uint32_t(uint32_t(0));
}
block_91: {

    return uint32_t(uint32_t(0));
}
block_93: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_67b970(uint32_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x8;
block_0: {

    if (value_x1 == 0) goto block_5;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + -8));
    value_x8 = field0;
    if ((uint32_t(field0) & 0x2ull) != 0) goto block_7;
    goto block_3;
}
block_3: {

    return uint32_t(uint32_t(0));
}
block_5: {

    return uint32_t(uint32_t(0));
}
block_7: {

    if (value_x2 == 0) goto block_10;
    goto block_8;
}
block_8: {
    *reinterpret_cast<uint32_t*>((value_x2 + 0)) = uint32_t(uint32_t(16));
    goto block_10;
}
block_10: {

    return uint32_t(uint32_t((uint32_t(value_x8) & 4294967292)));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_721200(uint64_t arg0,uint32_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x2 = arg2;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 96));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 112));
    const uint32_t field4 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t)>(field3)(field1,uint32_t(uint32_t(value_x2)));
    return uint32_t(uint32_t((uint32_t(uint32_t(field4)) & 1)));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8a0500(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8a0f30(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8a16a0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8a1cf0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8a20e0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8a26f0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8a3060(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8a39d0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8a44a0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_9;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((-3689348814741910324 & 0xffffffffffff0000ull) | (52429ull << 0))) >> 64) >> 6));
}
block_9: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8a4e20(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8a5210(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8a57f0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8a5e70(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8a64f0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8a6b70(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8a71f0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8a75e0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8a7890(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8a7b40(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8a7df0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8a81e0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8a85d0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8a89c0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8a8db0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8a91a0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8a9590(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8a9d00(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8aa470(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8aaa30(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8aae00(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8ab580(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8ab950(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_8abf10(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    return uint32_t((uint64_t((static_cast<unsigned __int128>((field1 - value_x8)) * ((((((58255 & 0xffffffff0000ffffull) | (36408ull << 16)) & 0xffff0000ffffffffull) | (14563ull << 32)) & 0xffffffffffffull) | (58254ull << 48))) >> 64) >> 6));
}
block_11: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_9480f0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x2 = arg2;
    uint32_t value_x8;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x2 + 92));
    *reinterpret_cast<uint32_t*>((value_x0 + 300)) = uint32_t(uint32_t(field0));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x2 + 68));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x0 + 400));
    value_x8 = uint32_t(field1);
    if (uint32_t(uint32_t(field2)) != uint32_t(uint32_t(field1))) goto block_8;
    goto block_6;
}
block_6: {

    return uint32_t(uint32_t(0));
}
block_8: {
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x0 + 404));
    if (uint32_t(uint32_t(field3)) != uint32_t(value_x8)) goto block_13;
    goto block_11;
}
block_11: {

    return uint32_t(uint32_t(0));
}
block_13: {
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((value_x0 + 408));
    if (uint32_t(uint32_t(field4)) != uint32_t(value_x8)) goto block_18;
    goto block_16;
}
block_16: {

    return uint32_t(uint32_t(0));
}
block_18: {
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((value_x0 + 412));
    if (uint32_t(uint32_t(field5)) != uint32_t(value_x8)) goto block_23;
    goto block_21;
}
block_21: {

    return uint32_t(uint32_t(0));
}
block_23: {
    const uint8_t field6 = *reinterpret_cast<const uint8_t*>((value_x0 + 321));
    return uint32_t(uint32_t((uint32_t(uint32_t(field6)) == 0)));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_96cee0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 321));
    if (uint32_t(uint32_t(field0)) == 0) goto block_4;
    goto block_2;
}
block_2: {

    return uint32_t(uint32_t(0));
}
block_4: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 1280));
    return uint32_t(uint32_t((uint32_t(uint32_t(field1)) == 6)));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_96cf30(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 824));
    if (uint32_t(uint32_t(field0)) == 0) goto block_8;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 568));
    value_x8 = field1;
    if (field1 == 0) goto block_10;
    goto block_4;
}
block_4: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    return uint32_t(uint32_t((field2 != 0)));
}
block_8: {

    return uint32_t(uint32_t(0));
}
block_10: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_970e90(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const float field1 = *reinterpret_cast<const float*>((value_x0 + 812));
    const float field2 = *reinterpret_cast<const float*>((value_x0 + 780));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field0 + 1208));
    const float field4 = reinterpret_cast<float (*)(uint64_t)>(field3)(value_x0);
    value_x19 = value_x0;
    if (field1 >= (field2 * field4)) goto block_11;
    goto block_9;
}
block_9: {
    value_x0 = uint32_t(0);
    goto block_14;
}
block_11: {
    const uint8_t field5 = *reinterpret_cast<const uint8_t*>((value_x19 + 1297));
    value_x0 = uint32_t((uint32_t(uint32_t(field5)) == 0));
    goto block_14;
}
block_14: {

    return uint32_t(value_x0);
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_97fb30(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + uint32_t(5388)));
    if (uint32_t(uint32_t(field0)) == 0) goto block_5;
    goto block_3;
}
block_3: {

    return uint32_t(uint32_t(0));
}
block_5: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 1280));
    if (uint32_t(uint32_t(field1)) != 8) goto block_10;
    goto block_8;
}
block_8: {

    return uint32_t(uint32_t(1));
}
block_10: {
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x0 + 952));
    return uint32_t(uint32_t((uint32_t(uint32_t(field2)) != 0)));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_9809f0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 5108));
    if ((uint32_t(uint32_t(field0)) + 1) == 0) goto block_5;
    goto block_3;
}
block_3: {
    value_x0 = uint32_t(1);
    goto block_19;
}
block_5: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const float field2 = *reinterpret_cast<const float*>((value_x0 + 812));
    const float field3 = *reinterpret_cast<const float*>((value_x0 + 780));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field1 + 1208));
    const float field5 = reinterpret_cast<float (*)(uint64_t)>(field4)(value_x0);
    value_x19 = value_x0;
    if (field2 >= (field3 * field5)) goto block_16;
    goto block_14;
}
block_14: {
    value_x0 = uint32_t(0);
    goto block_19;
}
block_16: {
    const uint8_t field6 = *reinterpret_cast<const uint8_t*>((value_x19 + 1297));
    value_x0 = uint32_t((uint32_t(uint32_t(field6)) == 0));
    goto block_19;
}
block_19: {

    return uint32_t(value_x0);
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_9f2ee0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + uint32_t(4545)));
    if (uint32_t(uint32_t(field0)) == 0) goto block_5;
    goto block_3;
}
block_3: {

    return uint32_t(uint32_t(0));
}
block_5: {
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x0 + 256));
    return uint32_t(uint32_t((uint32_t(uint32_t(field1)) != 0)));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_a539c0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 4496));
    value_x8 = field0;
    if (field0 == 0) goto block_6;
    goto block_2;
}
block_2: {
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x8 + 24));
    return uint32_t(uint32_t((uint32_t(uint32_t(field1)) == 0)));
}
block_6: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_a68360(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 3460));
    if (uint32_t(uint32_t(field0)) == 0) goto block_6;
    goto block_2;
}
block_2: {
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x0 + 3456));
    return uint32_t(uint32_t((uint32_t(uint32_t(field1)) != 0)));
}
block_6: {

    return uint32_t(uint32_t(0));
}
}

extern "C" void RecoveredCall_a8a230_6(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_a8a230(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 64));
    const uint32_t field2 = reinterpret_cast<uint32_t (*)(uint64_t)>(field1)(value_x0);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    RecoveredCall_a8a230_6(field3);
    *reinterpret_cast<uint32_t*>((value_x0 + 28)) = 0;
    return uint32_t(uint32_t(uint32_t(uint32_t(uint32_t(uint32_t(field2))))));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_a954d0(uint32_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x8;
block_0: {

    if (value_x1 == 0) goto block_5;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + -8));
    value_x8 = field0;
    if ((uint32_t(field0) & 0x2ull) != 0) goto block_7;
    goto block_3;
}
block_3: {

    return uint32_t(uint32_t(0));
}
block_5: {

    return uint32_t(uint32_t(0));
}
block_7: {

    if (value_x2 == 0) goto block_10;
    goto block_8;
}
block_8: {
    *reinterpret_cast<uint32_t*>((value_x2 + 0)) = uint32_t(uint32_t(16));
    goto block_10;
}
block_10: {

    return uint32_t(uint32_t((uint32_t(value_x8) & 4294967292)));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_a99220(uint64_t arg0,uint64_t arg1,uint32_t arg2,uint64_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 304));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 40));
    const uint32_t field3 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,value_x1,uint32_t(uint32_t(value_x2)));
    *reinterpret_cast<uint32_t*>((value_x3 + 0)) = uint32_t(uint32_t(field3));
    return uint32_t(uint32_t(1));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_aa3aa0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 16));
    if (uint32_t(uint32_t(field0)) == 0) goto block_4;
    goto block_2;
}
block_2: {

    return uint32_t(uint32_t(0));
}
block_4: {
    *reinterpret_cast<uint8_t*>((value_x0 + 16)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint8_t*>((value_x0 + 304)) = 0;
    return uint32_t(uint32_t(1));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_aa3ad0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 16));
    if (uint32_t(uint32_t(field0)) == 0) goto block_5;
    goto block_2;
}
block_2: {
    *reinterpret_cast<uint8_t*>((value_x0 + 16)) = 0;
    return uint32_t(uint32_t(1));
}
block_5: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_aa3c30(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 288));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 80));
    const uint64_t field4 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    const uint8_t field5 = *reinterpret_cast<const uint8_t*>((field4 + 0));
    const uint8_t field6 = *reinterpret_cast<const uint8_t*>((value_x0 + 16));
    value_x19 = value_x0;
    value_x8 = uint32_t(field6);
    if (uint32_t(uint32_t(field5)) == 0) goto block_12;
    goto block_9;
}
block_9: {

    if (uint32_t(value_x8) == 0) goto block_19;
    goto block_10;
}
block_10: {

    return uint32_t(uint32_t(0));
}
block_12: {

    if (uint32_t(value_x8) == 0) goto block_32;
    goto block_13;
}
block_13: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 144));
    reinterpret_cast<void (*)(uint64_t)>(field8)(value_x19);
    return uint32_t(uint32_t(8));
}
block_19: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x19 + 288));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((field11 + 80));
    const uint64_t field13 = reinterpret_cast<uint64_t (*)(uint64_t)>(field12)(field10);
    const uint8_t field14 = *reinterpret_cast<const uint8_t*>((field13 + 0));
    if (uint32_t(uint32_t(field14)) == 0) goto block_34;
    goto block_26;
}
block_26: {
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((field15 + 136));
    reinterpret_cast<void (*)(uint64_t)>(field16)(value_x19);
    return uint32_t(uint32_t(4));
}
block_32: {

    return uint32_t(uint32_t(0));
}
block_34: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_aa4a50(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 386));
    return uint32_t(uint32_t(((uint32_t(uint32_t(field0)) == 0) ? (uint32_t(uint32_t(1)) + 1) : uint32_t(uint32_t(1)))));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_aa4dc0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 378));
    return uint32_t(uint32_t(((uint32_t(uint32_t(field0)) == 0) ? (uint32_t(uint32_t(1)) + 1) : uint32_t(uint32_t(1)))));
}
}

extern "C" unsigned char LeafData_aa4fb0_8[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_aa4fb0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 456));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 72));
    const uint64_t field4 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    const int32_t field5 = *reinterpret_cast<const int32_t*>((field4 + 96));
    value_x8 = field5;
    if (uint32_t(field5) > 9) goto block_12;
    goto block_8;
}
block_8: {
    const uint32_t field6 = *reinterpret_cast<const uint32_t*>((((reinterpret_cast<uintptr_t>(LeafData_aa4fb0_8) - 992) + 992) + (value_x8 << 2)));
    return uint32_t(uint32_t(field6));
}
block_12: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_c01fa0(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x2 = arg2;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((field0 + 24)) = value_x1;
    *reinterpret_cast<uint32_t*>((value_x0 + 32)) = uint32_t(value_x2);
    *reinterpret_cast<uint32_t*>((field0 + 32)) = uint32_t(value_x2);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 80));
    reinterpret_cast<void (*)(uint64_t)>(field2)((value_x0 + 8));
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>(((value_x0 + 8) + 32));
    *reinterpret_cast<uint32_t*>(((value_x0 + 8) + 32)) = uint32_t(uint32_t((uint32_t(uint32_t(field3)) + uint32_t(uint32_t(uint32_t(value_x2))))));
    return uint32_t(uint32_t(uint32_t(uint32_t(uint32_t(value_x2)))));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_c04630(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    if (field0 == 0) goto block_6;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 48));
    return uint32_t(uint32_t((field1 != 0)));
}
block_6: {

    return uint32_t(uint32_t(0));
}
}

extern "C" uint32_t RecoveredCall_c2f450_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_c2f450(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint32_t field0 = RecoveredCall_c2f450_2(value_x0,value_x1);
    value_x19 = value_x1;
    value_x20 = value_x0;
    if ((uint32_t(uint32_t(field0)) & 0x1ull) == 0) goto block_17;
    goto block_4;
}
block_4: {
    const float field1 = *reinterpret_cast<const float*>((value_x20 + 28));
    const float field2 = *reinterpret_cast<const float*>((value_x19 + 28));
    if (field1 != field2) goto block_17;
    goto block_8;
}
block_8: {
    const float field3 = *reinterpret_cast<const float*>((value_x20 + 32));
    const float field4 = *reinterpret_cast<const float*>((value_x19 + 32));
    if (field3 != field4) goto block_17;
    goto block_12;
}
block_12: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x20 + 40));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 40));
    value_x0 = uint32_t((field5 == field6));
    goto block_18;
}
block_17: {
    value_x0 = uint32_t(0);
    goto block_18;
}
block_18: {

    return uint32_t(value_x0);
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_c56a10(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 24));
    value_x8 = field1;
    if (field1 == 0) goto block_7;
    goto block_3;
}
block_3: {
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x8 + 832));
    return uint32_t(uint32_t((uint32_t(uint32_t(field2)) != 0)));
}
block_7: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d08c90(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((value_x1 + 24) + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((value_x1 + 24) + 8));
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>(((value_x1 + 40) + 0));
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>(((value_x1 + 40) + 4));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    reinterpret_cast<void (*)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t)>(field5)(value_x0,field1,uint32_t(field3),field2,uint32_t(field4));
    return uint32_t(uint32_t(1));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d1e570(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const float field0 = *reinterpret_cast<const float*>((value_x0 + 112));
    const float field1 = *reinterpret_cast<const float*>((value_x1 + 0));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x0 + 8));
    *reinterpret_cast<float*>((value_x1 + 0)) = (field0 * field1);
    *reinterpret_cast<uint32_t*>((value_x0 + 8)) = 0;
    return uint32_t(uint32_t(uint32_t(uint32_t(field2))));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d214f0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 96));
    value_x8 = value_x0;
    if (field0 != 0) goto block_6;
    goto block_3;
}
block_3: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x8 + 12));
    if (uint32_t(uint32_t(field1)) != 1) goto block_10;
    goto block_6;
}
block_6: {
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (value_x8 + 1376);
    return uint32_t(uint32_t(0));
}
block_10: {

    return uint32_t(uint32_t(((uint32_t(uint32_t(5)) & 0xffffull) | (32779ull << 16))));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d56570(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x2 = arg2;
    uint64_t value_x20;
    uint64_t value_x21;
    uint64_t value_x22;
    uint64_t value_x3 = arg3;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 608));
    value_x22 = field0;
    if (field0 == 0) goto block_15;
    goto block_2;
}
block_2: {
    value_x19 = value_x3;
    value_x20 = value_x2;
    value_x21 = value_x1;
    goto block_5;
}
block_5: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x22 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 8));
    const uint32_t field3 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(field2)(value_x22,value_x21,value_x20,value_x19);
    if (uint32_t(uint32_t(field3)) != 0) goto block_17;
    goto block_13;
}
block_13: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x22 + 584));
    value_x22 = field4;
    if (field4 != 0) goto block_5;
    goto block_15;
}
block_15: {
    value_x0 = uint32_t(0);
    goto block_18;
}
block_17: {
    value_x0 = uint32_t(1);
    goto block_18;
}
block_18: {

    return uint32_t(value_x0);
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d6a5f0(uint32_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    if (uint32_t(uint32_t(field0)) == 0) goto block_7;
    goto block_2;
}
block_2: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x1 + 8));
    return uint32_t(uint32_t((uint32_t(uint32_t((uint32_t(uint32_t(field1)) - 1))) < 2)));
}
block_7: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d6a9f0(uint32_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    if (uint32_t(uint32_t(field0)) != 1) goto block_8;
    goto block_3;
}
block_3: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x1 + 8));
    return uint32_t(uint32_t((uint32_t(uint32_t((uint32_t(uint32_t(field1)) - 1))) < 2)));
}
block_8: {

    return uint32_t(uint32_t(0));
}
}

extern "C" void RecoveredCall_d6dcb0_4(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d6dcb0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x2 = arg2;
    uint64_t value_x20;
    uint64_t value_x8;
    uint32_t value_x9;
block_0: {
    RecoveredCall_d6dcb0_4((value_x0 + 48),(value_x2 + 8));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 64));
    value_x19 = value_x0;
    value_x20 = value_x2;
    if ((field0 + 1) == 0) goto block_28;
    goto block_8;
}
block_8: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x19 + 224));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x19 + 216));
    value_x8 = uint32_t(field1);
    value_x9 = uint32_t(field2);
    if (uint32_t(uint32_t(field1)) >= uint32_t(uint32_t(field2))) goto block_30;
    goto block_12;
}
block_12: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 112));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 184));
    const uint32_t field6 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field5)(field3,(value_x19 + 120),value_x20);
    value_x20 = uint32_t(uint32_t(uint32_t(field6)));
    if (uint32_t(uint32_t(field6)) == 0) goto block_33;
    goto block_20;
}
block_20: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 112));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 0));
    const uint32_t field9 = *reinterpret_cast<const uint32_t*>((value_x19 + 224));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field8 + 64));
    reinterpret_cast<void (*)(uint64_t,uint64_t)>(field10)(field7,uint32_t(field9));
    const uint32_t field11 = *reinterpret_cast<const uint32_t*>((value_x19 + 224));
    const uint32_t field12 = *reinterpret_cast<const uint32_t*>((value_x19 + 216));
    value_x8 = uint32_t(field11);
    value_x9 = uint32_t(field12);
    goto block_31;
}
block_28: {
    value_x20 = uint32_t(0);
    goto block_33;
}
block_30: {
    value_x20 = uint32_t(1);
    goto block_31;
}
block_31: {
    *reinterpret_cast<uint32_t*>((value_x19 + 220)) = uint32_t(value_x8);
    *reinterpret_cast<uint32_t*>((value_x19 + 212)) = uint32_t(value_x9);
    goto block_33;
}
block_33: {

    return uint32_t(uint32_t(uint32_t(value_x20)));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d6f6d0(uint32_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    if (uint32_t(uint32_t((uint32_t(uint32_t(field0)) | 2))) != 3) goto block_9;
    goto block_4;
}
block_4: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x1 + 8));
    return uint32_t(uint32_t((uint32_t(uint32_t((uint32_t(uint32_t(field1)) - 1))) < 2)));
}
block_9: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d70600(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    if (uint32_t(uint32_t(field0)) != 3) goto block_7;
    goto block_3;
}
block_3: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x1 + 4));
    if (uint32_t(uint32_t(field1)) == 0) goto block_9;
    goto block_5;
}
block_5: {

    return uint32_t(uint32_t(0));
}
block_7: {

    return uint32_t(uint32_t(0));
}
block_9: {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x1 + 8));
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x0 + 24));
    if (uint32_t(uint32_t(field2)) != uint32_t(uint32_t(field3))) goto block_18;
    goto block_13;
}
block_13: {
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((value_x1 + 12));
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((value_x0 + 28));
    return uint32_t(uint32_t((uint32_t(uint32_t(field4)) == uint32_t(uint32_t(field5)))));
}
block_18: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d70cd0(uint32_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    if (uint32_t(uint32_t((uint32_t(uint32_t(field0)) | 2))) != 3) goto block_9;
    goto block_4;
}
block_4: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x1 + 8));
    return uint32_t(uint32_t((uint32_t(uint32_t((uint32_t(uint32_t(field1)) - 1))) < 2)));
}
block_9: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d71700(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 12));
    if (uint32_t(uint32_t(field0)) == 0) goto block_7;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 80));
    *reinterpret_cast<uint64_t*>(((value_x0 + 80) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 80) + 8)) = field1;
    *reinterpret_cast<uint32_t*>((value_x0 + 12)) = 0;
    return uint32_t(uint32_t(1));
}
block_7: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d71790(uint32_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    if (uint32_t(uint32_t((uint32_t(uint32_t(field0)) | 2))) != 3) goto block_9;
    goto block_4;
}
block_4: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x1 + 8));
    return uint32_t(uint32_t((uint32_t(uint32_t((uint32_t(uint32_t(field1)) - 1))) < 2)));
}
block_9: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d72040(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 16));
    if (uint32_t(uint32_t(field0)) != uint32_t(uint32_t(field1))) goto block_9;
    goto block_4;
}
block_4: {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x1 + 12));
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x0 + 28));
    return uint32_t(uint32_t((uint32_t(uint32_t(field2)) == uint32_t(uint32_t(field3)))));
}
block_9: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d72b30(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 16));
    if (uint32_t(uint32_t(field0)) != uint32_t(uint32_t(field1))) goto block_9;
    goto block_4;
}
block_4: {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x1 + 8));
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x0 + 24));
    return uint32_t(uint32_t((uint32_t(uint32_t(field2)) == uint32_t(uint32_t(field3)))));
}
block_9: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d74100(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 16));
    if (uint32_t(uint32_t(field0)) != uint32_t(uint32_t(field1))) goto block_9;
    goto block_4;
}
block_4: {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x1 + 12));
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x0 + 28));
    return uint32_t(uint32_t((uint32_t(uint32_t(field2)) == uint32_t(uint32_t(field3)))));
}
block_9: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d77930(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 128));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + (uint64_t(uint32_t(value_x1)) << 3)));
    return uint32_t(field1);
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d85d00(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 128));
    value_x19 = value_x0;
    if (field0 == 0) goto block_11;
    goto block_3;
}
block_3: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x19 + 16));
    if (uint32_t(uint32_t(field1)) == 0) goto block_11;
    goto block_5;
}
block_5: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 176));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 64));
    const uint32_t field5 = reinterpret_cast<uint32_t (*)(uint64_t)>(field4)(field2);
    value_x0 = uint32_t(field5);
    if (uint32_t(uint32_t(field5)) == 0) goto block_11;
    goto block_10;
}
block_10: {

    return uint32_t(value_x0);
}
block_11: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 336));
    reinterpret_cast<void (*)(uint64_t)>(field7)(value_x19);
    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d86fe0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x8;
    uint32_t value_x9;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 16));
    if (uint32_t(uint32_t(field0)) != 1) goto block_15;
    goto block_3;
}
block_3: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x1 + 24));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x0 + 24));
    if (uint32_t(uint32_t(field1)) != uint32_t(uint32_t(field2))) goto block_18;
    goto block_7;
}
block_7: {
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x1 + 28));
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((value_x0 + 28));
    value_x8 = uint32_t(field3);
    if (uint32_t(uint32_t(field3)) != uint32_t(uint32_t(field4))) goto block_21;
    goto block_11;
}
block_11: {
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((value_x0 + 56));
    if (uint32_t(uint32_t(field5)) == 0) goto block_24;
    goto block_13;
}
block_13: {
    value_x9 = uint32_t(0);
    goto block_28;
}
block_15: {

    return uint32_t(uint32_t(uint32_t(uint32_t(-1))));
}
block_18: {

    return uint32_t(uint32_t(uint32_t(uint32_t(-1))));
}
block_21: {

    return uint32_t(uint32_t(uint32_t(uint32_t(-1))));
}
block_24: {
    const float field6 = *reinterpret_cast<const float*>((value_x0 + 184));
    value_x9 = uint32_t(int32_t((field6 * float(uint32_t(value_x8)))));
    goto block_28;
}
block_28: {
    *reinterpret_cast<uint32_t*>((value_x0 + 176)) = uint32_t(value_x9);
    *reinterpret_cast<uint64_t*>((value_x0 + 64)) = value_x1;
    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d87070(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 64));
    if (field0 == 0) goto block_5;
    goto block_2;
}
block_2: {
    *reinterpret_cast<uint64_t*>((value_x0 + 64)) = 0;
    return uint32_t(uint32_t(1));
}
block_5: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d87090(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 16));
    if (uint32_t(uint32_t(field0)) != uint32_t(uint32_t(field1))) goto block_13;
    goto block_4;
}
block_4: {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x1 + 8));
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x0 + 24));
    if (uint32_t(uint32_t(field2)) != uint32_t(uint32_t(field3))) goto block_15;
    goto block_8;
}
block_8: {
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((value_x1 + 12));
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((value_x0 + 28));
    return uint32_t(uint32_t((uint32_t(uint32_t(field4)) == uint32_t(uint32_t(field5)))));
}
block_13: {

    return uint32_t(uint32_t(0));
}
block_15: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d87b40(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 16));
    if (uint32_t(uint32_t(field0)) != uint32_t(uint32_t(field1))) goto block_9;
    goto block_4;
}
block_4: {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x1 + 12));
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x0 + 28));
    return uint32_t(uint32_t((uint32_t(uint32_t(field2)) == uint32_t(uint32_t(field3)))));
}
block_9: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d88030(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 16));
    if (uint32_t(uint32_t(field0)) != uint32_t(uint32_t(field1))) goto block_9;
    goto block_4;
}
block_4: {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x1 + 12));
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x0 + 28));
    return uint32_t(uint32_t((uint32_t(uint32_t(field2)) == uint32_t(uint32_t(field3)))));
}
block_9: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d8c7d0(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 72));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + (uint64_t(uint32_t(value_x1)) << 3)));
    return uint32_t(field1);
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d8dae0(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 96));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + (uint64_t(uint32_t(value_x1)) << 3)));
    return uint32_t(field1);
}
}

extern "C" void RecoveredCall_daa260_4(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_daa260(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_7;
    goto block_1;
}
block_1: {
    RecoveredCall_daa260_4(value_x1,value_x0);
    return uint32_t(uint32_t(1));
}
block_7: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_daac60(uint32_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    if (uint32_t(uint32_t(field0)) != 1) goto block_8;
    goto block_3;
}
block_3: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x1 + 8));
    return uint32_t(uint32_t((uint32_t(uint32_t((uint32_t(uint32_t(field1)) - 1))) < 2)));
}
block_8: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_daae10(uint32_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    if (uint32_t(uint32_t((uint32_t(uint32_t(field0)) | 2))) != 3) goto block_9;
    goto block_4;
}
block_4: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x1 + 8));
    return uint32_t(uint32_t((uint32_t(uint32_t((uint32_t(uint32_t(field1)) - 1))) < 2)));
}
block_9: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_dc4de0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    value_x8 = field0;
    if (field0 == 0) goto block_4;
    goto block_2;
}
block_2: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x8 + 0));
    return uint32_t(uint32_t(field1));
}
block_4: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_dc4fa0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    value_x8 = field0;
    if (field0 == 0) goto block_4;
    goto block_2;
}
block_2: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x8 + 0));
    return uint32_t(uint32_t(field1));
}
block_4: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_dcfa20(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x8;
block_0: {
    const int16_t field0 = *reinterpret_cast<const int16_t*>((value_x0 + 8));
    value_x8 = uint32_t(field0);
    if ((uint32_t(uint32_t(field0)) & 0x80000000ull) != 0) goto block_5;
    goto block_2;
}
block_2: {

    return uint32_t(uint32_t((uint32_t(uint32_t((uint32_t(value_x8) & 65535))) >> 5)));
}
block_5: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 12));
    return uint32_t(uint32_t(field1));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_dda070(uint64_t arg0,uint32_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 176));
    value_x8 = uint32_t(uint32_t(value_x1));
    if (field0 <= uint32_t(uint32_t(value_x1))) goto block_14;
    goto block_4;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 160));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + (value_x8 << 3)));
    *reinterpret_cast<uint64_t*>((value_x2 + 0)) = field2;
    const uint32_t field3 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field2 + 8) + 0)), 1, __ATOMIC_RELAXED);
    return uint32_t(uint32_t(0));
}
block_14: {

    return uint32_t(uint32_t(-2147483645));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_df72a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 80));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = value_x8;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 80));
    const uint32_t field2 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field1 + 8) + 0)), 1, __ATOMIC_RELAXED);
    return uint32_t(uint32_t(0));
}
block_11: {

    return uint32_t(uint32_t(((uint32_t(uint32_t(8)) & 0xffffull) | (32768ull << 16))));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_dfaa90(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 80));
    value_x8 = field0;
    if (field0 == 0) goto block_11;
    goto block_2;
}
block_2: {
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = value_x8;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 80));
    const uint32_t field2 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((field1 + 8) + 0)), 1, __ATOMIC_RELAXED);
    return uint32_t(uint32_t(0));
}
block_11: {

    return uint32_t(uint32_t(((uint32_t(uint32_t(8)) & 0xffffull) | (32768ull << 16))));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e06240(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 72));
    if (field0 == 0) goto block_6;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 96));
    *reinterpret_cast<uint64_t*>((value_x0 + 88)) = field1;
    return uint32_t(uint32_t(1));
}
block_6: {

    return uint32_t(uint32_t(0));
}
}

extern "C" unsigned char LeafData_e140d0_2[];
extern "C" uint64_t RecoveredCall_e140d0_6(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e140d0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x2 = arg2;
    uint64_t value_x20;
    uint64_t value_x3 = arg3;
    uint64_t value_x4 = arg4;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field1 = RecoveredCall_e140d0_6(field0,value_x2,((reinterpret_cast<uintptr_t>(LeafData_e140d0_2) - 2937) + 2937));
    value_x0 = field1;
    value_x19 = value_x4;
    value_x20 = value_x3;
    if (field1 == 0) goto block_13;
    goto block_8;
}
block_8: {
    *reinterpret_cast<uint64_t*>((value_x20 + 0)) = value_x0;
    *reinterpret_cast<uint64_t*>((value_x19 + 0)) = 0;
    value_x0 = uint32_t(0);
    goto block_14;
}
block_13: {
    value_x0 = uint32_t(64);
    goto block_14;
}
block_14: {

    return uint32_t(value_x0);
}
}

extern "C" unsigned char LeafData_e14120_2[];
extern "C" uint64_t RecoveredCall_e14120_6(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e14120(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x2 = arg2;
    uint64_t value_x20;
    uint64_t value_x3 = arg3;
    uint64_t value_x4 = arg4;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field1 = RecoveredCall_e14120_6(field0,value_x2,((reinterpret_cast<uintptr_t>(LeafData_e14120_2) - 15) + 15));
    value_x0 = field1;
    value_x19 = value_x4;
    value_x20 = value_x3;
    if (field1 == 0) goto block_13;
    goto block_8;
}
block_8: {
    *reinterpret_cast<uint64_t*>((value_x20 + 0)) = value_x0;
    *reinterpret_cast<uint64_t*>((value_x19 + 0)) = 0;
    value_x0 = uint32_t(0);
    goto block_14;
}
block_13: {
    value_x0 = uint32_t(64);
    goto block_14;
}
block_14: {

    return uint32_t(value_x0);
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e14ee0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const int16_t field0 = *reinterpret_cast<const int16_t*>((value_x0 + 0));
    const int16_t field1 = *reinterpret_cast<const int16_t*>((value_x1 + 0));
    return uint32_t(uint32_t(((int32_t(uint32_t(uint32_t(field0))) >= int32_t(uint32_t(uint32_t(field1)))) ? uint32_t(uint32_t((int32_t(uint32_t(uint32_t(field0))) > int32_t(uint32_t(uint32_t(field1)))))) : (~0))));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e1d420(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    return uint32_t(uint32_t(((int64_t(field0) >= int64_t(field1)) ? uint32_t(uint32_t((int64_t(field0) > int64_t(field1)))) : (~0))));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e29b30(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = value_x1;
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x1 + 6));
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x1 + 7));
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x1 + 8));
    const uint8_t field3 = *reinterpret_cast<const uint8_t*>((value_x1 + 9));
    *reinterpret_cast<uint32_t*>((value_x0 + 48)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 56)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 40)) = ((((((uint32_t(field0) << 24) & ~0xff0000ull) | ((uint32_t(field1) << 16) & 0xff0000ull)) & ~0xff00ull) | ((uint32_t(field2) << 8) & 0xff00ull)) | uint32_t(field3));
    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e2c160(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((value_x1 + 8)) = uint32_t(6);
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((field0 + 4));
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((field0 + 5));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = ((uint32_t(field2) & ~0xff00ull) | ((uint32_t(field1) << 8) & 0xff00ull));
    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e2c5b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((value_x1 + 8)) = uint32_t(4);
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((field0 + 4));
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((field0 + 5));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = ((uint32_t(field2) & ~0xff00ull) | ((uint32_t(field1) << 8) & 0xff00ull));
    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e2d570(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((value_x1 + 8)) = uint32_t(2);
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((field0 + 4));
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((field0 + 5));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = ((uint32_t(field2) & ~0xff00ull) | ((uint32_t(field1) << 8) & 0xff00ull));
    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e2d6b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((value_x1 + 8)) = 0;
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((field0 + 4));
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((field0 + 5));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = ((uint32_t(field2) & ~0xff00ull) | ((uint32_t(field1) << 8) & 0xff00ull));
    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e2d6d0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field1 + 8));
    return uint32_t(uint32_t(((field2 <= field3) ? uint32_t(uint32_t((-uint64_t((field2 < field3))))) : (0 + 1))));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e47990(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 648));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + (uint64_t(uint32_t(value_x1)) << 3)));
    return uint32_t(field1);
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e479e0(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint64_t value_x8;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 24));
    value_x8 = uint32_t(field0);
    if (uint32_t(uint32_t(field0)) <= uint32_t(value_x1)) goto block_5;
    goto block_3;
}
block_3: {

    return uint32_t(uint32_t(0));
}
block_5: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 28));
    if (uint32_t(uint32_t((uint32_t(uint32_t(field1)) + uint32_t(value_x8)))) <= uint32_t(value_x1)) goto block_12;
    goto block_9;
}
block_9: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    const uint16_t field3 = *reinterpret_cast<const uint16_t*>((field2 + (uint64_t(uint32_t(value_x1)) << 1)));
    return uint32_t(uint32_t(field3));
}
block_12: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e51d00(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>(((value_x0 + 24) + 0));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>(((value_x0 + 24) + 4));
    return uint32_t(uint32_t(((uint32_t(uint32_t((uint32_t(value_x1) - uint32_t(uint32_t(field0))))) >= uint32_t(uint32_t(field1))) ? 0 : (uint32_t(uint32_t((uint32_t(value_x1) - uint32_t(uint32_t(field0))))) + 1))));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e663e0(uint64_t arg0,uint32_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 1104));
    value_x8 = field0;
    if (field0 == 0) goto block_8;
    goto block_2;
}
block_2: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x8 + 1868));
    if (uint32_t(uint32_t(field1)) != uint32_t(uint32_t(65535))) goto block_10;
    goto block_6;
}
block_6: {

    return uint32_t(uint32_t(6));
}
block_8: {

    return uint32_t(uint32_t(0));
}
block_10: {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x8 + 36));
    if (uint32_t(uint32_t(field2)) >= uint32_t(value_x1)) goto block_15;
    goto block_13;
}
block_13: {

    return uint32_t(uint32_t(6));
}
block_15: {
    value_x0 = uint32_t(0);
    if (value_x2 == 0) goto block_20;
    goto block_17;
}
block_17: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x8 + 1312));
    const uint16_t field4 = *reinterpret_cast<const uint16_t*>((field3 + (uint64_t(uint32_t(value_x1)) << 1)));
    *reinterpret_cast<uint32_t*>((value_x2 + 0)) = uint32_t(uint32_t(field4));
    goto block_20;
}
block_20: {

    return uint32_t(value_x0);
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e819b0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
    uint64_t value_x4 = arg4;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 1152));
    value_x8 = field0;
    if (field0 == 0) goto block_18;
    goto block_2;
}
block_2: {

    if (value_x1 == 0) goto block_5;
    goto block_3;
}
block_3: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x8 + 0));
    *reinterpret_cast<uint32_t*>((value_x1 + 0)) = uint32_t(uint32_t(field1));
    goto block_5;
}
block_5: {

    if (value_x2 == 0) goto block_8;
    goto block_6;
}
block_6: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    *reinterpret_cast<uint64_t*>((value_x2 + 0)) = field2;
    goto block_8;
}
block_8: {

    if (value_x3 == 0) goto block_12;
    goto block_9;
}
block_9: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x0 + 1152));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 16));
    *reinterpret_cast<uint64_t*>((value_x3 + 0)) = field4;
    goto block_12;
}
block_12: {

    if (value_x4 == 0) goto block_24;
    goto block_13;
}
block_13: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x0 + 1152));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 24));
    *reinterpret_cast<uint64_t*>((value_x4 + 0)) = field6;
    return uint32_t(uint32_t(0));
}
block_18: {

    if (value_x1 == 0) goto block_20;
    goto block_19;
}
block_19: {
    *reinterpret_cast<uint32_t*>((value_x1 + 0)) = 0;
    goto block_20;
}
block_20: {

    if (value_x2 == 0) goto block_22;
    goto block_21;
}
block_21: {
    *reinterpret_cast<uint64_t*>((value_x2 + 0)) = 0;
    goto block_22;
}
block_22: {

    if (value_x4 == 0) goto block_24;
    goto block_23;
}
block_23: {
    *reinterpret_cast<uint64_t*>((value_x4 + 0)) = 0;
    goto block_24;
}
block_24: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_eeab50(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    value_x8 = field0;
    if (field0 == 0) goto block_6;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 24));
    return uint32_t(uint32_t((field1 != 0)));
}
block_6: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_efb9a0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 112));
    if (field0 == 0) goto block_4;
    goto block_2;
}
block_2: {

    return uint32_t(uint32_t(1));
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    value_x8 = field1;
    if (field1 == 0) goto block_10;
    goto block_6;
}
block_6: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x8 + 24));
    return uint32_t(uint32_t((field2 != 0)));
}
block_10: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_f358e0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 20));
    return uint32_t(uint32_t(((uint32_t(uint32_t(1)) & ~0xfffffffeull) | ((uint32_t(uint32_t(field0)) << 1) & 0xfffffffeull))));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_f35e90(uint32_t arg0,uint64_t arg1,uint32_t arg2,uint64_t arg3) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
    uint32_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
block_0: {
    *reinterpret_cast<uint32_t*>((value_x3 + 0)) = uint32_t(uint32_t((uint32_t(((value_x1 & 4294967295) * uint32_t(19991))) - (uint32_t((((value_x1 & 4294967295) * uint32_t(19991)) / uint32_t(uint32_t(value_x2)))) * uint32_t(value_x2)))));
    return uint32_t(uint32_t(1));
}
}
