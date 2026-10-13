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
extern "C" void RecoveredCall_56be0_3(uint64_t,uint32_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_56be0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4,uint64_t arg5,uint64_t arg6,uint64_t arg7) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
    uint64_t value_x4 = arg4;
    uint64_t value_x5 = arg5;
    uint64_t value_x6 = arg6;
    uint64_t value_x7 = arg7;
block_0: {

    return RecoveredCall_56be0_3(value_x1,uint32_t(uint32_t(value_x2)),value_x3,value_x3,value_x4,value_x5,value_x6,value_x7);
}
}

extern "C" void RecoveredCall_56bf0_3(uint64_t,uint32_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_56bf0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4,uint64_t arg5,uint64_t arg6,uint64_t arg7) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
    uint64_t value_x4 = arg4;
    uint64_t value_x5 = arg5;
    uint64_t value_x6 = arg6;
    uint64_t value_x7 = arg7;
block_0: {

    return RecoveredCall_56bf0_3(value_x1,uint32_t(uint32_t(value_x2)),value_x3,value_x3,value_x4,value_x5,value_x6,value_x7);
}
}

extern "C" void RecoveredCall_56c00_3(uint64_t,uint32_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_56c00(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4,uint64_t arg5,uint64_t arg6,uint64_t arg7) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
    uint64_t value_x4 = arg4;
    uint64_t value_x5 = arg5;
    uint64_t value_x6 = arg6;
    uint64_t value_x7 = arg7;
block_0: {

    return RecoveredCall_56c00_3(value_x1,uint32_t(uint32_t(value_x2)),value_x3,value_x3,value_x4,value_x5,value_x6,value_x7);
}
}

extern "C" void RecoveredCall_56c10_3(uint64_t,uint32_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_56c10(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4,uint64_t arg5,uint64_t arg6,uint64_t arg7) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
    uint64_t value_x4 = arg4;
    uint64_t value_x5 = arg5;
    uint64_t value_x6 = arg6;
    uint64_t value_x7 = arg7;
block_0: {

    return RecoveredCall_56c10_3(value_x1,uint32_t(uint32_t(value_x2)),value_x3,value_x3,value_x4,value_x5,value_x6,value_x7);
}
}

extern "C" void RecoveredCall_56c20_3(uint64_t,uint32_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_56c20(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4,uint64_t arg5,uint64_t arg6,uint64_t arg7) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
    uint64_t value_x4 = arg4;
    uint64_t value_x5 = arg5;
    uint64_t value_x6 = arg6;
    uint64_t value_x7 = arg7;
block_0: {

    return RecoveredCall_56c20_3(value_x1,uint32_t(uint32_t(value_x2)),value_x3,value_x3,value_x4,value_x5,value_x6,value_x7);
}
}

extern "C" void RecoveredCall_56c30_3(uint64_t,uint32_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_56c30(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4,uint64_t arg5,uint64_t arg6,uint64_t arg7) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
    uint64_t value_x4 = arg4;
    uint64_t value_x5 = arg5;
    uint64_t value_x6 = arg6;
    uint64_t value_x7 = arg7;
block_0: {

    return RecoveredCall_56c30_3(value_x1,uint32_t(uint32_t(value_x2)),value_x3,value_x3,value_x4,value_x5,value_x6,value_x7);
}
}

extern "C" void RecoveredCall_56c40_3(uint64_t,uint32_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_56c40(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4,uint64_t arg5,uint64_t arg6,uint64_t arg7) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
    uint64_t value_x4 = arg4;
    uint64_t value_x5 = arg5;
    uint64_t value_x6 = arg6;
    uint64_t value_x7 = arg7;
block_0: {

    return RecoveredCall_56c40_3(value_x1,uint32_t(uint32_t(value_x2)),value_x3,value_x3,value_x4,value_x5,value_x6,value_x7);
}
}

extern "C" void RecoveredCall_56c50_3(uint64_t,uint32_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_56c50(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4,uint64_t arg5,uint64_t arg6,uint64_t arg7) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
    uint64_t value_x4 = arg4;
    uint64_t value_x5 = arg5;
    uint64_t value_x6 = arg6;
    uint64_t value_x7 = arg7;
block_0: {

    return RecoveredCall_56c50_3(value_x1,uint32_t(uint32_t(value_x2)),value_x3,value_x3,value_x4,value_x5,value_x6,value_x7);
}
}

extern "C" void RecoveredCall_56c60_2(uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_56c60(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
    uint32_t value_x2 = arg2;
block_0: {

    return RecoveredCall_56c60_2(value_x1,uint32_t(uint32_t(value_x2)));
}
}

extern "C" void RecoveredCall_56ce0_1(uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_56ce0(uint32_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint32_t value_x1 = arg1;
block_0: {

    return RecoveredCall_56ce0_1(uint32_t(uint32_t(value_x1)));
}
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_57250(uint64_t arg0,uint32_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint32_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x2 + 64)) = uint32_t(uint32_t(value_x1));
    return;
}
}

extern "C" void RecoveredCall_73570_3(uint32_t,uint32_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_73570(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_73570_3(value_x0,uint32_t(4),uint32_t(0),uint32_t(1086324736));
}
}

extern "C" void RecoveredCall_1bacf0_6(uint32_t,uint32_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1bacf0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
block_0: {

    return RecoveredCall_1bacf0_6(uint32_t(1),uint32_t(0),value_x0,value_x1,value_x2,value_x3);
}
}

extern "C" void RecoveredCall_1c1800_1(uint64_t,uint32_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1c1800(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {

    return RecoveredCall_1c1800_1(value_x0,value_x1,value_x2,uint32_t(0));
}
}

extern "C" void RecoveredCall_1c85f0_2(uint64_t,uint32_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1c85f0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    return RecoveredCall_1c85f0_2(value_x0,value_x1,uint32_t(0),uint32_t(1));
}
}

extern "C" void RecoveredCall_1cb780_1(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1cb780(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    return RecoveredCall_1cb780_1(value_x0,value_x1,uint32_t(0));
}
}

extern "C" unsigned char LeafData_1cbd60_0[];
extern "C" void RecoveredCall_1cbd60_2(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1cbd60(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {

    return RecoveredCall_1cbd60_2(value_x0,value_x1,value_x2,((reinterpret_cast<uintptr_t>(LeafData_1cbd60_0) - 4088) + 4088));
}
}

extern "C" unsigned char LeafData_1cbd70_0[];
extern "C" void RecoveredCall_1cbd70_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1cbd70(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    return RecoveredCall_1cbd70_2(value_x0,value_x1,((reinterpret_cast<uintptr_t>(LeafData_1cbd70_0) - 4088) + 4088));
}
}

extern "C" unsigned char LeafData_1cbd90_0[];
extern "C" void RecoveredCall_1cbd90_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1cbd90(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1cbd90_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1cbd90_0) - 4088) + 4088));
}
}

extern "C" unsigned char LeafData_1cbdb0_0[];
extern "C" void RecoveredCall_1cbdb0_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1cbdb0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1cbdb0_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1cbdb0_0) - 48) + 48));
}
}

extern "C" unsigned char LeafData_1cbdd0_0[];
extern "C" void RecoveredCall_1cbdd0_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1cbdd0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    return RecoveredCall_1cbdd0_2(value_x0,value_x1,((reinterpret_cast<uintptr_t>(LeafData_1cbdd0_0) - 104) + 104));
}
}

extern "C" unsigned char LeafData_1cbdf0_0[];
extern "C" void RecoveredCall_1cbdf0_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1cbdf0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1cbdf0_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1cbdf0_0) - 104) + 104));
}
}

extern "C" unsigned char LeafData_1cbe10_0[];
extern "C" void RecoveredCall_1cbe10_2(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1cbe10(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {

    return RecoveredCall_1cbe10_2(value_x0,value_x1,value_x2,((reinterpret_cast<uintptr_t>(LeafData_1cbe10_0) - 160) + 160));
}
}

extern "C" unsigned char LeafData_1cbe20_0[];
extern "C" void RecoveredCall_1cbe20_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1cbe20(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    return RecoveredCall_1cbe20_2(value_x0,value_x1,((reinterpret_cast<uintptr_t>(LeafData_1cbe20_0) - 160) + 160));
}
}

extern "C" unsigned char LeafData_1cbe40_0[];
extern "C" void RecoveredCall_1cbe40_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1cbe40(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1cbe40_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1cbe40_0) - 160) + 160));
}
}

extern "C" unsigned char LeafData_1cbea0_0[];
extern "C" void RecoveredCall_1cbea0_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1cbea0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1cbea0_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1cbea0_0) - 328) + 328));
}
}

extern "C" unsigned char LeafData_1cbee0_0[];
extern "C" void RecoveredCall_1cbee0_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1cbee0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1cbee0_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1cbee0_0) - 440) + 440));
}
}

extern "C" unsigned char LeafData_1cbf10_0[];
extern "C" void RecoveredCall_1cbf10_2(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1cbf10(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {

    return RecoveredCall_1cbf10_2(value_x0,value_x1,value_x2,((reinterpret_cast<uintptr_t>(LeafData_1cbf10_0) - 496) + 496));
}
}

extern "C" unsigned char LeafData_1cbf20_0[];
extern "C" void RecoveredCall_1cbf20_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1cbf20(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    return RecoveredCall_1cbf20_2(value_x0,value_x1,((reinterpret_cast<uintptr_t>(LeafData_1cbf20_0) - 496) + 496));
}
}

extern "C" unsigned char LeafData_1cbf40_0[];
extern "C" void RecoveredCall_1cbf40_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1cbf40(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1cbf40_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1cbf40_0) - 496) + 496));
}
}

extern "C" unsigned char LeafData_1cbfb0_0[];
extern "C" void RecoveredCall_1cbfb0_2(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1cbfb0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {

    return RecoveredCall_1cbfb0_2(value_x0,value_x1,value_x2,((reinterpret_cast<uintptr_t>(LeafData_1cbfb0_0) - 944) + 944));
}
}

extern "C" unsigned char LeafData_1cbfc0_0[];
extern "C" void RecoveredCall_1cbfc0_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1cbfc0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    return RecoveredCall_1cbfc0_2(value_x0,value_x1,((reinterpret_cast<uintptr_t>(LeafData_1cbfc0_0) - 944) + 944));
}
}

extern "C" unsigned char LeafData_1cbfd0_0[];
extern "C" void RecoveredCall_1cbfd0_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1cbfd0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    return RecoveredCall_1cbfd0_2(value_x0,value_x1,((reinterpret_cast<uintptr_t>(LeafData_1cbfd0_0) - 1000) + 1000));
}
}

extern "C" void RecoveredCall_1cdd50_1(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1cdd50(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    return RecoveredCall_1cdd50_1(value_x0,value_x1,uint32_t(0));
}
}

extern "C" void RecoveredCall_1ce880_1(uint64_t,uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1ce880(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {

    return RecoveredCall_1ce880_1(value_x0,value_x1,value_x2,uint32_t(0));
}
}

extern "C" uint32_t RecoveredCall_1d4470_4(uint64_t,uint64_t,uint64_t);
extern "C" void RecoveredCall_1d4470_11(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1d4470(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x2 = arg2;
    uint64_t value_x20;
    uint64_t value_x21;
    uint64_t value_x3 = arg3;
block_0: {
    const uint32_t field0 = RecoveredCall_1d4470_4(value_x0,value_x1,value_x3);
    value_x19 = value_x3;
    value_x20 = value_x2;
    value_x21 = value_x0;
    if (uint32_t(uint32_t(field0)) == 0) goto block_12;
    goto block_6;
}
block_6: {

    return RecoveredCall_1d4470_11(0,value_x21,value_x21,value_x20,value_x19);
}
block_12: {

    return;
}
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_1da460(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 68));
    *reinterpret_cast<uint32_t*>((value_x0 + 68)) = uint32_t(uint32_t(((uint32_t(uint32_t(field0)) & ~0x7fffffffull) | ((uint32_t(value_x1) >> 0) & 0x7fffffffull))));
    return;
}
}

extern "C" void RecoveredCall_1e61a0_1(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1e61a0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
    uint64_t value_x4 = arg4;
block_0: {

    return RecoveredCall_1e61a0_1(value_x0,value_x1,value_x2,value_x3,value_x4,uint32_t(0));
}
}

extern "C" void RecoveredCall_1e74e0_2(uint64_t,uint64_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1e74e0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 32));
    return RecoveredCall_1e74e0_2(value_x0,field0,value_x2,uint32_t(0));
}
}

extern "C" unsigned char LeafData_1e7730_0[];
extern "C" void RecoveredCall_1e7730_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1e7730(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1e7730_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1e7730_0) - 1968) + 1968));
}
}

extern "C" unsigned char LeafData_1e78e0_0[];
extern "C" void RecoveredCall_1e78e0_2(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1e78e0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {

    return RecoveredCall_1e78e0_2(value_x0,value_x1,value_x2,((reinterpret_cast<uintptr_t>(LeafData_1e78e0_0) - 2224) + 2224));
}
}

extern "C" unsigned char LeafData_1e7900_0[];
extern "C" void RecoveredCall_1e7900_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1e7900(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1e7900_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1e7900_0) - 2224) + 2224));
}
}

extern "C" unsigned char LeafData_1e7bb0_0[];
extern "C" void RecoveredCall_1e7bb0_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1e7bb0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1e7bb0_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1e7bb0_0) - 2416) + 2416));
}
}

extern "C" unsigned char LeafData_1e7c90_0[];
extern "C" void RecoveredCall_1e7c90_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1e7c90(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    return RecoveredCall_1e7c90_2(value_x0,value_x1,((reinterpret_cast<uintptr_t>(LeafData_1e7c90_0) - 2632) + 2632));
}
}

extern "C" unsigned char LeafData_1eb810_0[];
extern "C" void RecoveredCall_1eb810_2(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1eb810(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {

    return RecoveredCall_1eb810_2(value_x0,value_x1,value_x2,((reinterpret_cast<uintptr_t>(LeafData_1eb810_0) - 4024) + 4024));
}
}

extern "C" unsigned char LeafData_1eb820_0[];
extern "C" void RecoveredCall_1eb820_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1eb820(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1eb820_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1eb820_0) - 4024) + 4024));
}
}

extern "C" unsigned char LeafData_1ec600_0[];
extern "C" void RecoveredCall_1ec600_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1ec600(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1ec600_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1ec600_0) - 64) + 64));
}
}

extern "C" unsigned char LeafData_1ec640_0[];
extern "C" void RecoveredCall_1ec640_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1ec640(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1ec640_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1ec640_0) - 232) + 232));
}
}

extern "C" unsigned char LeafData_1ec6a0_0[];
extern "C" void RecoveredCall_1ec6a0_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1ec6a0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1ec6a0_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1ec6a0_0) - 1544) + 1544));
}
}

extern "C" unsigned char LeafData_1ee380_0[];
extern "C" void RecoveredCall_1ee380_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1ee380(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1ee380_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1ee380_0) - 1968) + 1968));
}
}

extern "C" unsigned char LeafData_1f3ca0_0[];
extern "C" void RecoveredCall_1f3ca0_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1f3ca0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1f3ca0_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1f3ca0_0) - 2032) + 2032));
}
}

extern "C" unsigned char LeafData_1f4200_0[];
extern "C" void RecoveredCall_1f4200_2(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1f4200(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {

    return RecoveredCall_1f4200_2(value_x0,value_x1,value_x2,((reinterpret_cast<uintptr_t>(LeafData_1f4200_0) - 2256) + 2256));
}
}

extern "C" unsigned char LeafData_1f4210_0[];
extern "C" void RecoveredCall_1f4210_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1f4210(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    return RecoveredCall_1f4210_2(value_x0,value_x1,((reinterpret_cast<uintptr_t>(LeafData_1f4210_0) - 2256) + 2256));
}
}

extern "C" unsigned char LeafData_1f4230_0[];
extern "C" void RecoveredCall_1f4230_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1f4230(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1f4230_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1f4230_0) - 2256) + 2256));
}
}

extern "C" unsigned char LeafData_1f4a60_0[];
extern "C" void RecoveredCall_1f4a60_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1f4a60(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1f4a60_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1f4a60_0) - 2680) + 2680));
}
}

extern "C" unsigned char LeafData_1f4ac0_0[];
extern "C" void RecoveredCall_1f4ac0_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1f4ac0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1f4ac0_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1f4ac0_0) - 3024) + 3024));
}
}

extern "C" unsigned char LeafData_1f4af0_0[];
extern "C" void RecoveredCall_1f4af0_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1f4af0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1f4af0_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1f4af0_0) - 3080) + 3080));
}
}

extern "C" unsigned char LeafData_1f7800_0[];
extern "C" void RecoveredCall_1f7800_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1f7800(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1f7800_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1f7800_0) - 256) + 256));
}
}

extern "C" unsigned char LeafData_1f7d30_0[];
extern "C" void RecoveredCall_1f7d30_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1f7d30(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1f7d30_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1f7d30_0) - 696) + 696));
}
}

extern "C" unsigned char LeafData_1f7d40_0[];
extern "C" void RecoveredCall_1f7d40_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1f7d40(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1f7d40_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1f7d40_0) - 752) + 752));
}
}

extern "C" unsigned char LeafData_1f7d60_0[];
extern "C" void RecoveredCall_1f7d60_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1f7d60(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1f7d60_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1f7d60_0) - 808) + 808));
}
}

extern "C" void RecoveredCall_1f95b0_5(uint64_t,uint64_t,uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1f95b0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {

    return RecoveredCall_1f95b0_5(0,value_x0,value_x1,value_x2,uint32_t(0));
}
}

extern "C" unsigned char LeafData_1f9e30_0[];
extern "C" void RecoveredCall_1f9e30_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1f9e30(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1f9e30_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1f9e30_0) - 2000) + 2000));
}
}

extern "C" unsigned char LeafData_1f9e40_0[];
extern "C" void RecoveredCall_1f9e40_2(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1f9e40(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {

    return RecoveredCall_1f9e40_2(value_x0,value_x1,value_x2,((reinterpret_cast<uintptr_t>(LeafData_1f9e40_0) - 2056) + 2056));
}
}

extern "C" unsigned char LeafData_1f9e50_0[];
extern "C" void RecoveredCall_1f9e50_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1f9e50(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    return RecoveredCall_1f9e50_2(value_x0,value_x1,((reinterpret_cast<uintptr_t>(LeafData_1f9e50_0) - 2056) + 2056));
}
}

extern "C" unsigned char LeafData_1f9e90_0[];
extern "C" void RecoveredCall_1f9e90_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1f9e90(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1f9e90_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1f9e90_0) - 2328) + 2328));
}
}

extern "C" void RecoveredCall_1f9ff0_1(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1f9ff0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
    uint64_t value_x4 = arg4;
block_0: {

    return RecoveredCall_1f9ff0_1(value_x0,value_x1,value_x2,value_x3,value_x4,uint32_t(0));
}
}

extern "C" unsigned char LeafData_1fbc40_0[];
extern "C" void RecoveredCall_1fbc40_2(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1fbc40(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {

    return RecoveredCall_1fbc40_2(value_x0,value_x1,value_x2,((reinterpret_cast<uintptr_t>(LeafData_1fbc40_0) - 2624) + 2624));
}
}

extern "C" unsigned char LeafData_1fbc50_0[];
extern "C" void RecoveredCall_1fbc50_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1fbc50(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    return RecoveredCall_1fbc50_2(value_x0,value_x1,((reinterpret_cast<uintptr_t>(LeafData_1fbc50_0) - 2624) + 2624));
}
}

extern "C" unsigned char LeafData_1fbc60_0[];
extern "C" void RecoveredCall_1fbc60_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1fbc60(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1fbc60_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1fbc60_0) - 2624) + 2624));
}
}

extern "C" unsigned char LeafData_1fbcb0_0[];
extern "C" void RecoveredCall_1fbcb0_2(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1fbcb0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {

    return RecoveredCall_1fbcb0_2(value_x0,value_x1,value_x2,((reinterpret_cast<uintptr_t>(LeafData_1fbcb0_0) - 3128) + 3128));
}
}

extern "C" unsigned char LeafData_1fbcc0_0[];
extern "C" void RecoveredCall_1fbcc0_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1fbcc0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    return RecoveredCall_1fbcc0_2(value_x0,value_x1,((reinterpret_cast<uintptr_t>(LeafData_1fbcc0_0) - 3128) + 3128));
}
}

extern "C" unsigned char LeafData_1fbcd0_0[];
extern "C" void RecoveredCall_1fbcd0_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1fbcd0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1fbcd0_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1fbcd0_0) - 3128) + 3128));
}
}

extern "C" unsigned char LeafData_1fbe00_0[];
extern "C" void RecoveredCall_1fbe00_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1fbe00(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1fbe00_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1fbe00_0) - 3744) + 3744));
}
}

extern "C" unsigned char LeafData_1fc080_0[];
extern "C" void RecoveredCall_1fc080_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1fc080(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1fc080_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1fc080_0) - 4080) + 4080));
}
}

extern "C" unsigned char LeafData_1fcb40_0[];
extern "C" void RecoveredCall_1fcb40_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1fcb40(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1fcb40_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1fcb40_0) - 240) + 240));
}
}

extern "C" unsigned char LeafData_1fda50_0[];
extern "C" void RecoveredCall_1fda50_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1fda50(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1fda50_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1fda50_0) - 792) + 792));
}
}

extern "C" unsigned char LeafData_1fda70_0[];
extern "C" void RecoveredCall_1fda70_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1fda70(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1fda70_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1fda70_0) - 848) + 848));
}
}

extern "C" unsigned char LeafData_1fded0_0[];
extern "C" void RecoveredCall_1fded0_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1fded0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1fded0_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1fded0_0) - 1672) + 1672));
}
}

extern "C" unsigned char LeafData_1fe2b0_0[];
extern "C" void RecoveredCall_1fe2b0_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1fe2b0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1fe2b0_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1fe2b0_0) - 1912) + 1912));
}
}

extern "C" unsigned char LeafData_1fe400_0[];
extern "C" void RecoveredCall_1fe400_2(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1fe400(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {

    return RecoveredCall_1fe400_2(value_x0,value_x1,value_x2,((reinterpret_cast<uintptr_t>(LeafData_1fe400_0) - 2336) + 2336));
}
}

extern "C" unsigned char LeafData_1fe420_0[];
extern "C" void RecoveredCall_1fe420_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1fe420(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1fe420_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1fe420_0) - 2336) + 2336));
}
}

extern "C" unsigned char LeafData_1fe430_0[];
extern "C" void RecoveredCall_1fe430_2(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1fe430(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {

    return RecoveredCall_1fe430_2(value_x0,value_x1,value_x2,((reinterpret_cast<uintptr_t>(LeafData_1fe430_0) - 2144) + 2144));
}
}

extern "C" unsigned char LeafData_1fe440_0[];
extern "C" void RecoveredCall_1fe440_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1fe440(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    return RecoveredCall_1fe440_2(value_x0,value_x1,((reinterpret_cast<uintptr_t>(LeafData_1fe440_0) - 2144) + 2144));
}
}

extern "C" unsigned char LeafData_1fe450_0[];
extern "C" void RecoveredCall_1fe450_2(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1fe450(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {

    return RecoveredCall_1fe450_2(value_x0,value_x1,value_x2,((reinterpret_cast<uintptr_t>(LeafData_1fe450_0) - 2240) + 2240));
}
}

extern "C" unsigned char LeafData_1fe460_0[];
extern "C" void RecoveredCall_1fe460_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1fe460(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    return RecoveredCall_1fe460_2(value_x0,value_x1,((reinterpret_cast<uintptr_t>(LeafData_1fe460_0) - 2240) + 2240));
}
}

extern "C" unsigned char LeafData_1fe930_0[];
extern "C" void RecoveredCall_1fe930_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1fe930(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1fe930_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1fe930_0) - 3496) + 3496));
}
}

extern "C" unsigned char LeafData_1ff130_0[];
extern "C" void RecoveredCall_1ff130_2(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1ff130(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {

    return RecoveredCall_1ff130_2(value_x0,value_x1,value_x2,((reinterpret_cast<uintptr_t>(LeafData_1ff130_0) - 64) + 64));
}
}

extern "C" unsigned char LeafData_1ff140_0[];
extern "C" void RecoveredCall_1ff140_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1ff140(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    return RecoveredCall_1ff140_2(value_x0,value_x1,((reinterpret_cast<uintptr_t>(LeafData_1ff140_0) - 64) + 64));
}
}

extern "C" unsigned char LeafData_1ff150_0[];
extern "C" void RecoveredCall_1ff150_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1ff150(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_1ff150_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_1ff150_0) - 64) + 64));
}
}

extern "C" unsigned char LeafData_1ff160_0[];
extern "C" void RecoveredCall_1ff160_2(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1ff160(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {

    return RecoveredCall_1ff160_2(value_x0,value_x1,value_x2,((reinterpret_cast<uintptr_t>(LeafData_1ff160_0) - 200) + 200));
}
}

extern "C" unsigned char LeafData_1ff170_0[];
extern "C" void RecoveredCall_1ff170_2(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1ff170(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {

    return RecoveredCall_1ff170_2(value_x0,value_x1,value_x2,((reinterpret_cast<uintptr_t>(LeafData_1ff170_0) - 296) + 296));
}
}

extern "C" unsigned char LeafData_1ff180_0[];
extern "C" void RecoveredCall_1ff180_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1ff180(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    return RecoveredCall_1ff180_2(value_x0,value_x1,((reinterpret_cast<uintptr_t>(LeafData_1ff180_0) - 296) + 296));
}
}

extern "C" unsigned char LeafData_1ff190_0[];
extern "C" void RecoveredCall_1ff190_2(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1ff190(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {

    return RecoveredCall_1ff190_2(value_x0,value_x1,value_x2,((reinterpret_cast<uintptr_t>(LeafData_1ff190_0) - 392) + 392));
}
}

extern "C" unsigned char LeafData_1ff1a0_0[];
extern "C" void RecoveredCall_1ff1a0_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1ff1a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    return RecoveredCall_1ff1a0_2(value_x0,value_x1,((reinterpret_cast<uintptr_t>(LeafData_1ff1a0_0) - 392) + 392));
}
}

extern "C" unsigned char LeafData_1ff1c0_0[];
extern "C" void RecoveredCall_1ff1c0_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1ff1c0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    return RecoveredCall_1ff1c0_2(value_x0,value_x1,((reinterpret_cast<uintptr_t>(LeafData_1ff1c0_0) - 544) + 544));
}
}

extern "C" unsigned char LeafData_20ccb0_0[];
extern "C" void RecoveredCall_20ccb0_2(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_20ccb0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {

    return RecoveredCall_20ccb0_2(value_x0,value_x1,value_x2,((reinterpret_cast<uintptr_t>(LeafData_20ccb0_0) - 144) + 144));
}
}

extern "C" unsigned char LeafData_20ccc0_0[];
extern "C" void RecoveredCall_20ccc0_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_20ccc0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_20ccc0_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_20ccc0_0) - 144) + 144));
}
}

extern "C" unsigned char LeafData_20ccd0_0[];
extern "C" void RecoveredCall_20ccd0_2(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_20ccd0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {

    return RecoveredCall_20ccd0_2(value_x0,value_x1,value_x2,((reinterpret_cast<uintptr_t>(LeafData_20ccd0_0) - 200) + 200));
}
}

extern "C" unsigned char LeafData_20cce0_0[];
extern "C" void RecoveredCall_20cce0_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_20cce0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_20cce0_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_20cce0_0) - 200) + 200));
}
}

extern "C" void RecoveredCall_20dba0_3(uint64_t,uint32_t);
extern "C" void RecoveredCall_20dba0_6(uint64_t,uint32_t);
extern "C" void RecoveredCall_20dba0_9(uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_20dba0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    RecoveredCall_20dba0_3((value_x0 + 56),value_x1);
    RecoveredCall_20dba0_6((value_x0 + 104),uint32_t(uint32_t(value_x1)));
    return RecoveredCall_20dba0_9((value_x0 + 8),uint32_t(uint32_t(value_x1)));
}
}

extern "C" unsigned char LeafData_212950_0[];
extern "C" void RecoveredCall_212950_2(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_212950(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {

    return RecoveredCall_212950_2(value_x0,value_x1,value_x2,((reinterpret_cast<uintptr_t>(LeafData_212950_0) - 496) + 496));
}
}

extern "C" unsigned char LeafData_212960_0[];
extern "C" void RecoveredCall_212960_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_212960(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    return RecoveredCall_212960_2(value_x0,value_x1,((reinterpret_cast<uintptr_t>(LeafData_212960_0) - 496) + 496));
}
}

extern "C" void RecoveredCall_2142e0_2(uint64_t,uint64_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_2142e0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 32));
    return RecoveredCall_2142e0_2(value_x0,field0,value_x2,uint32_t(0));
}
}

extern "C" unsigned char LeafData_215a00_0[];
extern "C" void RecoveredCall_215a00_2(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_215a00(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {

    return RecoveredCall_215a00_2(value_x0,value_x1,value_x2,((reinterpret_cast<uintptr_t>(LeafData_215a00_0) - 2400) + 2400));
}
}

extern "C" unsigned char LeafData_215a10_0[];
extern "C" void RecoveredCall_215a10_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_215a10(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    return RecoveredCall_215a10_2(value_x0,value_x1,((reinterpret_cast<uintptr_t>(LeafData_215a10_0) - 2400) + 2400));
}
}

extern "C" unsigned char LeafData_215a30_0[];
extern "C" void RecoveredCall_215a30_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_215a30(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_215a30_2(value_x0,((reinterpret_cast<uintptr_t>(LeafData_215a30_0) - 2400) + 2400));
}
}

extern "C" void RecoveredCall_216660_2(uint64_t,uint64_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_216660(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 32));
    return RecoveredCall_216660_2(value_x0,field0,value_x2,uint32_t(0));
}
}

extern "C" void RecoveredCall_23aa40_5(uint64_t,uint64_t,uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_23aa40_11(uint64_t,uint64_t,uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_23aa40_17(uint64_t,uint64_t,uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_23aa40_23(uint64_t,uint64_t,uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_23aa40_29(uint64_t,uint64_t,uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_23aa40_35(uint64_t,uint64_t,uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_23aa40(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    RecoveredCall_23aa40_5(value_x0,0,0,0,uint32_t(0));
    RecoveredCall_23aa40_11(value_x0,0,0,0,uint32_t(1));
    RecoveredCall_23aa40_17(value_x0,0,0,0,uint32_t(2));
    RecoveredCall_23aa40_23(value_x0,0,0,0,uint32_t(3));
    RecoveredCall_23aa40_29(value_x0,0,0,0,uint32_t(4));
    return RecoveredCall_23aa40_35(value_x0,0,0,0,uint32_t(5));
}
}

extern "C" void RecoveredCall_242e70_3(uint64_t,uint32_t,uint64_t,uint32_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_242e70(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {

    return RecoveredCall_242e70_3(value_x0,value_x1,0,uint32_t(0),value_x2);
}
}

extern "C" void RecoveredCall_255f40_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_255f40(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x2 = arg2;
block_0: {

    return RecoveredCall_255f40_1(value_x0,value_x1,uint32_t(uint32_t(value_x2)));
}
}

extern "C" void RecoveredCall_256240_1(uint32_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_256240(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x2 = arg2;
block_0: {

    return RecoveredCall_256240_1(value_x0,value_x1,uint32_t(uint32_t(value_x2)));
}
}

extern "C" unsigned char LeafData_26ea70_4[];
extern "C" void RecoveredCall_26ea70_7(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_26ea70(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = 0;
    value_x0 = field0;
    if (field0 == 0) goto block_8;
    goto block_4;
}
block_4: {

    return RecoveredCall_26ea70_7(value_x0,((reinterpret_cast<uintptr_t>(LeafData_26ea70_4) - 3649) + 3649),uint32_t(0));
}
block_8: {

    return;
}
}

extern "C" void RecoveredCall_2b1080_3(uint64_t,uint32_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_2b1080(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint32_t arg3) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint32_t value_x3 = arg3;
block_0: {

    return RecoveredCall_2b1080_3(value_x2,uint32_t(uint32_t(value_x3)),value_x1);
}
}

extern "C" unsigned char LeafData_30c570_2[];
extern "C" void RecoveredCall_30c570_5(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_30c570(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x0 = field0;
    if (field0 == 0) goto block_6;
    goto block_2;
}
block_2: {

    return RecoveredCall_30c570_5(value_x0,((reinterpret_cast<uintptr_t>(LeafData_30c570_2) - 3649) + 3649),uint32_t(0));
}
block_6: {

    return;
}
}

extern "C" void RecoveredCall_37fda0_2(uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_37fda0(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
    uint32_t value_x2 = arg2;
block_0: {

    return RecoveredCall_37fda0_2(value_x1,uint32_t(uint32_t(value_x2)));
}
}

extern "C" void RecoveredCall_490360_3(uint64_t,uint32_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_490360(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint32_t arg3) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint32_t value_x3 = arg3;
block_0: {

    return RecoveredCall_490360_3(value_x2,uint32_t(uint32_t(value_x3)),value_x1);
}
}

extern "C" void RecoveredCall_4a0460_1(uint64_t,uint32_t,uint32_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4a0460(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
block_0: {

    return RecoveredCall_4a0460_1(value_x0,value_x1,value_x2,value_x3,uint32_t(0));
}
}

extern "C" void RecoveredCall_4a0630_1(uint64_t,uint32_t,uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4a0630(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
block_0: {

    return RecoveredCall_4a0630_1(value_x0,value_x1,value_x2,value_x3,uint32_t(0));
}
}

extern "C" void RecoveredCall_4eb320_3(uint32_t,uint32_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4eb320(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_4eb320_3(value_x0,uint32_t(4),uint32_t(0),uint32_t(1095761920));
}
}

extern "C" void RecoveredCall_4eb330_3(uint32_t,uint32_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4eb330(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_4eb330_3(value_x0,uint32_t(4),uint32_t(0),uint32_t(1095761920));
}
}

extern "C" void RecoveredCall_4ef420_1(uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4ef420() {
    LEAF_CHECK
block_0: {

    return RecoveredCall_4ef420_1(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_513ec0(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {
    const uint16_t field0 = *reinterpret_cast<const uint16_t*>((value_x0 + 26));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    *reinterpret_cast<uint16_t*>((field1 + (uint64_t(uint32_t(value_x1)) << 1))) = uint32_t(uint32_t(field0));
    return;
}
}

extern "C" void RecoveredCall_515630_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_515630(uint32_t arg0,uint32_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint32_t value_x1 = arg1;
    uint32_t value_x2 = arg2;
block_0: {

    return RecoveredCall_515630_2(uint32_t(uint32_t(value_x1)),uint32_t(uint32_t(value_x2)));
}
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_518880(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>(((value_x0 + 0) + 0));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>(((value_x0 + 0) + 4));
    *reinterpret_cast<uint32_t*>((value_x0 + 0)) = uint32_t(uint32_t((uint32_t(uint32_t((uint32_t(value_x1) - (uint32_t(uint32_t(field0)) >> 3)))) + uint32_t(uint32_t(field0)))));
    *reinterpret_cast<uint32_t*>(((value_x0 + 4) + 0)) = uint32_t(uint32_t((uint32_t(uint32_t((uint32_t(uint32_t(field1)) - (uint32_t(uint32_t(field1)) >> 2)))) + uint32_t(uint32_t(((((uint32_t(uint32_t(uint32_t((uint32_t(value_x1) - (uint32_t(uint32_t(field0)) >> 3)))) - 0) >> 31) != 0)) ? (-uint32_t(uint32_t((uint32_t(value_x1) - (uint32_t(uint32_t(field0)) >> 3))))) : uint32_t(uint32_t((uint32_t(value_x1) - (uint32_t(uint32_t(field0)) >> 3))))))))));
    *reinterpret_cast<uint32_t*>(((value_x0 + 4) + 4)) = uint32_t(value_x1);
    return;
}
}

extern "C" void RecoveredCall_51dd10_6(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_51dd10(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 8));
    if ((uint32_t(uint32_t(field0)) != 7) ? (uint32_t(uint32_t(field0)) != 4) : false) goto block_7;
    goto block_4;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    return RecoveredCall_51dd10_6((field1 - 4));
}
block_7: {

    return;
}
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_51dd70(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = uint32_t(uint32_t(value_x1));
    *reinterpret_cast<uint32_t*>((value_x0 + 8)) = uint32_t(uint32_t(6));
    return;
}
}

extern "C" void RecoveredCall_554100_2(uint32_t,uint32_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_554100(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x2 = arg2;
block_0: {

    return RecoveredCall_554100_2(value_x0,value_x1,uint32_t(0),uint32_t(uint32_t(value_x2)));
}
}

extern "C" void RecoveredCall_554c10_3(uint32_t,uint32_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_554c10(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    return RecoveredCall_554c10_3(value_x0,value_x1,uint32_t(0),uint32_t(((uint32_t(uint32_t(8192)) & 0xffffull) | (16672ull << 16))));
}
}

extern "C" void RecoveredCall_55abb0_2(uint64_t,uint64_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_55abb0(uint64_t arg0,uint64_t arg1,uint32_t arg2,uint32_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x2 = arg2;
    uint32_t value_x3 = arg3;
block_0: {

    return RecoveredCall_55abb0_2(value_x0,value_x1,uint32_t((uint32_t(value_x2) & 1)),uint32_t((uint32_t(value_x3) & 1)));
}
}

extern "C" void RecoveredCall_55ae30_2(uint64_t,uint64_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_55ae30(uint64_t arg0,uint64_t arg1,uint32_t arg2,uint32_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x2 = arg2;
    uint32_t value_x3 = arg3;
block_0: {

    return RecoveredCall_55ae30_2(value_x0,value_x1,uint32_t((uint32_t(value_x2) & 1)),uint32_t((uint32_t(value_x3) & 1)));
}
}

extern "C" void RecoveredCall_56c9f0_2(uint32_t,uint32_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_56c9f0(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x2 = arg2;
block_0: {

    return RecoveredCall_56c9f0_2(value_x0,value_x1,uint32_t(0),uint32_t(uint32_t(value_x2)));
}
}

extern "C" void RecoveredCall_57d200_2(uint32_t,uint32_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_57d200(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x2 = arg2;
block_0: {

    return RecoveredCall_57d200_2(value_x0,value_x1,uint32_t(0),uint32_t(uint32_t(value_x2)));
}
}

extern "C" void RecoveredCall_57eda0_4(uint32_t,uint32_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_57eda0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_57eda0_4(value_x0,uint32_t(16),uint32_t(0),uint32_t(((uint32_t(uint32_t(8192)) & 0xffffull) | (16672ull << 16))));
}
}

extern "C" void RecoveredCall_588690_2(uint64_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_588690(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x2 = arg2;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    return RecoveredCall_588690_2(field0,value_x1,uint32_t((uint32_t(value_x2) & 1)));
}
}

extern "C" void RecoveredCall_58b9a0_3(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_58b9a0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    value_x1 = field0;
    if (field0 == 0) goto block_4;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    return RecoveredCall_58b9a0_3(field1,value_x1);
}
block_4: {

    return;
}
}

extern "C" void RecoveredCall_58f7e0_2(uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_58f7e0(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
    uint32_t value_x2 = arg2;
block_0: {

    return RecoveredCall_58f7e0_2(value_x1,uint32_t(uint32_t(value_x2)));
}
}

extern "C" void RecoveredCall_5c71e0_2(uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5c71e0(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
    uint32_t value_x2 = arg2;
block_0: {

    return RecoveredCall_5c71e0_2(value_x1,uint32_t(uint32_t(value_x2)));
}
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_631aa0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    *reinterpret_cast<uint16_t*>((value_x0 + 0)) = uint32_t(uint32_t(1538));
    *reinterpret_cast<uint8_t*>((value_x0 + 2)) = 0;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 4));
    *reinterpret_cast<uint8_t*>((value_x0 + 3)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) << 6)));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    *reinterpret_cast<uint8_t*>((value_x0 + 3)) = uint32_t(uint32_t(((uint32_t(uint32_t((uint32_t(uint32_t(field0)) << 6))) & ~0x30ull) | ((uint32_t(uint32_t(field1)) << 4) & 0x30ull))));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x1 + 12));
    *reinterpret_cast<uint8_t*>((value_x0 + 3)) = uint32_t(uint32_t(((uint32_t(uint32_t(((uint32_t(uint32_t((uint32_t(uint32_t(field0)) << 6))) & ~0x30ull) | ((uint32_t(uint32_t(field1)) << 4) & 0x30ull)))) & ~0xfull) | ((uint32_t(uint32_t(field2)) >> 0) & 0xfull))));
    const uint8_t field3 = *reinterpret_cast<const uint8_t*>((value_x1 + 16));
    *reinterpret_cast<uint8_t*>((value_x0 + 4)) = uint32_t(uint32_t((uint32_t(uint32_t(field3)) << 4)));
    const uint8_t field4 = *reinterpret_cast<const uint8_t*>((value_x1 + 17));
    *reinterpret_cast<uint8_t*>((value_x0 + 4)) = uint32_t(uint32_t(((uint32_t(uint32_t((uint32_t(uint32_t(field3)) << 4))) & ~0xfull) | ((uint32_t(uint32_t(field4)) >> 0) & 0xfull))));
    const uint8_t field5 = *reinterpret_cast<const uint8_t*>((value_x1 + 18));
    *reinterpret_cast<uint8_t*>((value_x0 + 5)) = uint32_t(uint32_t((uint32_t(uint32_t(field5)) << 4)));
    const uint8_t field6 = *reinterpret_cast<const uint8_t*>((value_x1 + 19));
    *reinterpret_cast<uint8_t*>((value_x0 + 5)) = uint32_t(uint32_t(((uint32_t(uint32_t((uint32_t(uint32_t(field5)) << 4))) & ~0xfull) | ((uint32_t(uint32_t(field6)) >> 0) & 0xfull))));
    const uint8_t field7 = *reinterpret_cast<const uint8_t*>((value_x1 + 20));
    *reinterpret_cast<uint8_t*>((value_x0 + 7)) = 0;
    *reinterpret_cast<uint8_t*>((value_x0 + 6)) = uint32_t(uint32_t((uint32_t(uint32_t(field7)) << 4)));
    return;
}
}

extern "C" uint64_t RecoveredCall_693dc0_14(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_693dc0(uint64_t arg0,uint64_t arg1) {
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
    const uint64_t field7 = RecoveredCall_693dc0_14((value_x19 + 24),value_x1,value_x2,value_x1);
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
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x19 + 40));
    *reinterpret_cast<uint64_t*>((value_x19 + 40)) = (field10 + 1);
    return;
}
}

extern "C" void RecoveredCall_86b2d0_3(uint64_t,uint64_t,uint64_t);
extern "C" void RecoveredCall_86b2d0_6(uint64_t,uint64_t);
extern "C" void RecoveredCall_86b2d0_9(uint64_t,uint64_t);
extern "C" void RecoveredCall_86b2d0_13(uint64_t,uint64_t,uint64_t);
extern "C" void RecoveredCall_86b2d0_17(uint64_t,uint64_t,uint64_t);
extern "C" void RecoveredCall_86b2d0_20(uint64_t,uint64_t);
extern "C" void RecoveredCall_86b2d0_24(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_86b2d0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {
    RecoveredCall_86b2d0_3(value_x0,value_x1,value_x2);
    RecoveredCall_86b2d0_6((value_x0 + 688),value_x2);
    RecoveredCall_86b2d0_9((value_x0 + 696),value_x2);
    RecoveredCall_86b2d0_13((value_x0 + 704),value_x1,value_x2);
    RecoveredCall_86b2d0_17((value_x0 + 712),value_x1,value_x2);
    RecoveredCall_86b2d0_20((value_x0 + 720),value_x2);
    RecoveredCall_86b2d0_24((value_x0 + 728),value_x1,value_x2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint32_t field3 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(value_x0 + 744),uint32_t(4));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field4 + (uint32_t(uint32_t(uint32_t(field3))) << 0));
    return;
}
}

extern "C" void RecoveredCall_892910_1(uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_892910(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_892910_1(value_x0,uint32_t(0));
}
}

extern "C" void RecoveredCall_8b1260_2(uint64_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8b1260(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_8b1260_2(value_x0,uint32_t(0),uint32_t(0));
}
}

extern "C" void RecoveredCall_8b1290_2(uint64_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8b1290(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x1 + 0));
    return RecoveredCall_8b1290_2(value_x0,uint32_t(0),uint32_t(field0));
}
}

extern "C" void RecoveredCall_8b13e0_2(uint64_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8b13e0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {

    return RecoveredCall_8b13e0_2(value_x0,uint32_t(1),uint32_t(0));
}
}

extern "C" void RecoveredCall_8eb4c0_3(uint64_t,uint64_t,uint64_t);
extern "C" void RecoveredCall_8eb4c0_25(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8eb4c0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {
    RecoveredCall_8eb4c0_3(value_x0,value_x1,value_x2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint32_t field3 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(value_x0 + 168),uint32_t(1));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field4 + (uint32_t(uint32_t(uint32_t(field3))) << 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 48));
    const uint32_t field8 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field7)(field5,(value_x0 + 169),uint32_t(1));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field9 + (uint32_t(uint32_t(uint32_t(field8))) << 0));
    RecoveredCall_8eb4c0_25((value_x0 + 176),value_x1,value_x2);
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((field11 + 48));
    const uint32_t field13 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field12)(field10,(value_x0 + 184),uint32_t(4));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field14 + (uint32_t(uint32_t(uint32_t(field13))) << 0));
    return;
}
}

extern "C" void RecoveredCall_8ebe30_3(uint64_t,uint64_t,uint64_t);
extern "C" void RecoveredCall_8ebe30_25(uint64_t,uint64_t,uint64_t);
extern "C" void RecoveredCall_8ebe30_29(uint64_t,uint64_t,uint64_t);
extern "C" void RecoveredCall_8ebe30_33(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8ebe30(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {
    RecoveredCall_8ebe30_3(value_x0,value_x1,value_x2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint32_t field3 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(value_x0 + 168),uint32_t(1));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field4 + (uint32_t(uint32_t(uint32_t(field3))) << 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 48));
    const uint32_t field8 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field7)(field5,(value_x0 + 169),uint32_t(1));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field9 + (uint32_t(uint32_t(uint32_t(field8))) << 0));
    RecoveredCall_8ebe30_25((value_x0 + 176),value_x1,value_x2);
    RecoveredCall_8ebe30_29((value_x0 + 184),value_x1,value_x2);
    RecoveredCall_8ebe30_33((value_x0 + 192),value_x1,value_x2);
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((field11 + 48));
    const uint32_t field13 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field12)(field10,(value_x0 + 200),uint32_t(1));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field14 + (uint32_t(uint32_t(uint32_t(field13))) << 0));
    return;
}
}

extern "C" void RecoveredCall_8f6b80_8(uint64_t,uint32_t);
extern "C" void RecoveredCall_8f6b80_15(uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8f6b80(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 160));
    value_x19 = value_x0;
    value_x8 = field0;
    if (field0 == 0) goto block_16;
    goto block_3;
}
block_3: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x0 = field1;
    if (field1 == 0) goto block_16;
    goto block_5;
}
block_5: {
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x19 + 217));
    if (uint32_t(uint32_t(field2)) == 0) goto block_14;
    goto block_7;
}
block_7: {
    RecoveredCall_8f6b80_8(value_x0,uint32_t(0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 160));
    value_x8 = field3;
    if (field3 == 0) goto block_13;
    goto block_11;
}
block_11: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x0 = field4;
    goto block_14;
}
block_13: {
    value_x0 = 0;
    goto block_14;
}
block_14: {
    RecoveredCall_8f6b80_15(value_x0,uint32_t(1));
    goto block_16;
}
block_16: {
    *reinterpret_cast<uint16_t*>((value_x19 + 152)) = uint32_t(uint32_t(256));
    return;
}
}

extern "C" void RecoveredCall_9160a0_7(uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_9160a0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 356));
    if (uint32_t(uint32_t(field0)) == 0) goto block_8;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 192));
    value_x8 = field1;
    if (field1 == 0) goto block_8;
    goto block_4;
}
block_4: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x0 = field2;
    if (field2 == 0) goto block_8;
    goto block_6;
}
block_6: {

    return RecoveredCall_9160a0_7(value_x0,uint32_t(0));
}
block_8: {

    return;
}
}

extern "C" void RecoveredCall_922a20_3(uint64_t,uint64_t,uint64_t);
extern "C" void RecoveredCall_922a20_6(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_922a20(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {
    RecoveredCall_922a20_3(value_x0,value_x1,value_x2);
    RecoveredCall_922a20_6((value_x0 + 160),value_x2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint32_t field3 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(value_x0 + 172),uint32_t(4));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field4 + (uint32_t(uint32_t(uint32_t(field3))) << 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 48));
    const uint32_t field8 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field7)(field5,(value_x0 + 176),uint32_t(4));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field9 + (uint32_t(uint32_t(uint32_t(field8))) << 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((field11 + 48));
    const uint32_t field13 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field12)(field10,(value_x0 + 180),uint32_t(4));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 0));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field14 + (uint32_t(uint32_t(uint32_t(field13))) << 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((field15 + 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 48));
    const uint32_t field18 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field17)(field15,(value_x0 + 184),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field19 + (uint32_t(uint32_t(uint32_t(field18))) << 0));
    return;
}
}

extern "C" void RecoveredCall_923930_3(uint64_t,uint64_t,uint64_t);
extern "C" void RecoveredCall_923930_6(uint64_t,uint64_t);
extern "C" void RecoveredCall_923930_10(uint64_t,uint64_t,uint64_t);
extern "C" void RecoveredCall_923930_13(uint64_t,uint64_t);
extern "C" void RecoveredCall_923930_16(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_923930(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {
    RecoveredCall_923930_3(value_x0,value_x1,value_x2);
    RecoveredCall_923930_6((value_x0 + 160),value_x2);
    RecoveredCall_923930_10((value_x0 + 168),value_x1,value_x2);
    RecoveredCall_923930_13((value_x0 + 208),value_x2);
    RecoveredCall_923930_16((value_x0 + 216),value_x1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint32_t field3 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(value_x0 + 296),uint32_t(4));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field4 + (uint32_t(uint32_t(uint32_t(field3))) << 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 48));
    const uint32_t field8 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field7)(field5,(value_x0 + 300),uint32_t(4));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field9 + (uint32_t(uint32_t(uint32_t(field8))) << 0));
    return;
}
}

extern "C" void RecoveredCall_9247c0_3(uint64_t,uint64_t,uint64_t);
extern "C" void RecoveredCall_9247c0_6(uint64_t,uint64_t);
extern "C" void RecoveredCall_9247c0_36(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_9247c0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {
    RecoveredCall_9247c0_3(value_x0,value_x1,value_x2);
    RecoveredCall_9247c0_6((value_x0 + 160),value_x2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint32_t field3 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(value_x0 + 168),uint32_t(4));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field4 + (uint32_t(uint32_t(uint32_t(field3))) << 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 48));
    const uint32_t field8 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field7)(field5,(value_x0 + 172),uint32_t(4));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field9 + (uint32_t(uint32_t(uint32_t(field8))) << 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((field11 + 48));
    const uint32_t field13 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field12)(field10,(value_x0 + 176),uint32_t(4));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field14 + (uint32_t(uint32_t(uint32_t(field13))) << 0));
    return RecoveredCall_9247c0_36((value_x0 + 184),value_x1);
}
}

extern "C" void RecoveredCall_a18eb0_2(uint64_t,uint32_t);
extern "C" void RecoveredCall_a18eb0_4(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_a18eb0(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {
    RecoveredCall_a18eb0_2(value_x0,uint32_t((uint32_t(value_x1) & 1)));
    return RecoveredCall_a18eb0_4(value_x0);
}
}

extern "C" void RecoveredCall_a95440_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_a95440(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {

    return RecoveredCall_a95440_1(value_x0,uint32_t(uint32_t(value_x1)));
}
}

extern "C" void RecoveredCall_a95450_1(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_a95450(uint64_t arg0,uint32_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {

    return RecoveredCall_a95450_1(value_x0,uint32_t(uint32_t(value_x1)),value_x2);
}
}

extern "C" void RecoveredCall_a95460_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_a95460(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x2 = arg2;
block_0: {

    return RecoveredCall_a95460_1(value_x0,value_x1,uint32_t(uint32_t(value_x2)));
}
}

extern "C" void RecoveredCall_a95470_1(uint64_t,uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_a95470(uint64_t arg0,uint64_t arg1,uint32_t arg2,uint64_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
block_0: {

    return RecoveredCall_a95470_1(value_x0,value_x1,uint32_t(uint32_t(value_x2)),value_x3);
}
}

extern "C" void RecoveredCall_ae6c80_8(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ae6c80(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 72));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((field1 + 168));
    return RecoveredCall_ae6c80_8(value_x1,field0,uint32_t(((uint32_t(uint32_t(field2)) != 0) ? (uint32_t(uint32_t(1)) + 1) : uint32_t(uint32_t(1)))));
}
}

extern "C" void RecoveredCall_b238b0_3(uint64_t,uint64_t,uint64_t);
extern "C" void RecoveredCall_b238b0_25(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b238b0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {
    RecoveredCall_b238b0_3(value_x0,value_x1,value_x2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint32_t field3 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(value_x0 + 76),uint32_t(4));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field4 + (uint32_t(uint32_t(uint32_t(field3))) << 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 48));
    const uint32_t field8 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field7)(field5,(value_x0 + 80),uint32_t(4));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field9 + (uint32_t(uint32_t(uint32_t(field8))) << 0));
    RecoveredCall_b238b0_25((value_x0 + 88),value_x1,value_x2);
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((field11 + 48));
    const uint32_t field13 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field12)(field10,(value_x0 + 128),uint32_t(1));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field14 + (uint32_t(uint32_t(uint32_t(field13))) << 0));
    return;
}
}

extern "C" void RecoveredCall_b8f570_3(uint64_t,uint64_t,uint64_t);
extern "C" void RecoveredCall_b8f570_7(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b8f570(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {
    RecoveredCall_b8f570_3(value_x0,value_x1,value_x2);
    RecoveredCall_b8f570_7((value_x0 + 80),value_x1,value_x2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint32_t field3 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(value_x0 + 88),uint32_t(4));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field4 + (uint32_t(uint32_t(uint32_t(field3))) << 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 48));
    const uint32_t field8 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field7)(field5,(value_x0 + 92),uint32_t(4));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field9 + (uint32_t(uint32_t(uint32_t(field8))) << 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((field11 + 48));
    const uint32_t field13 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field12)(field10,(value_x0 + 216),uint32_t(4));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 0));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field14 + (uint32_t(uint32_t(uint32_t(field13))) << 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((field15 + 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 48));
    const uint32_t field18 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field17)(field15,(value_x0 + 220),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field19 + (uint32_t(uint32_t(uint32_t(field18))) << 0));
    return;
}
}

extern "C" void RecoveredCall_cce420_3(uint64_t,uint64_t,uint64_t);
extern "C" void RecoveredCall_cce420_7(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cce420(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {
    RecoveredCall_cce420_3(value_x0,value_x1,value_x2);
    RecoveredCall_cce420_7((value_x0 + 80),value_x1,value_x2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint32_t field3 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(value_x0 + 108),uint32_t(4));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field4 + (uint32_t(uint32_t(uint32_t(field3))) << 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 48));
    const uint32_t field8 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field7)(field5,(value_x0 + 112),uint32_t(1));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field9 + (uint32_t(uint32_t(uint32_t(field8))) << 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((field11 + 48));
    const uint32_t field13 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field12)(field10,(value_x0 + 116),uint32_t(4));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field14 + (uint32_t(uint32_t(uint32_t(field13))) << 0));
    return;
}
}

extern "C" void RecoveredCall_cd25b0_3(uint64_t,uint64_t,uint64_t);
extern "C" void RecoveredCall_cd25b0_7(uint64_t,uint64_t,uint64_t);
extern "C" void RecoveredCall_cd25b0_11(uint64_t,uint64_t,uint64_t);
extern "C" void RecoveredCall_cd25b0_15(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cd25b0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {
    RecoveredCall_cd25b0_3(value_x0,value_x1,value_x2);
    RecoveredCall_cd25b0_7((value_x0 + 80),value_x1,value_x2);
    RecoveredCall_cd25b0_11((value_x0 + 88),value_x1,value_x2);
    RecoveredCall_cd25b0_15((value_x0 + 96),value_x1,value_x2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint32_t field3 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(value_x0 + 104),uint32_t(4));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field4 + (uint32_t(uint32_t(uint32_t(field3))) << 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 48));
    const uint32_t field8 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field7)(field5,(value_x0 + 112),uint32_t(4));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field9 + (uint32_t(uint32_t(uint32_t(field8))) << 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((field11 + 48));
    const uint32_t field13 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field12)(field10,(value_x0 + 116),uint32_t(4));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field14 + (uint32_t(uint32_t(uint32_t(field13))) << 0));
    return;
}
}

extern "C" void RecoveredCall_cd6b50_3(uint64_t,uint64_t,uint64_t);
extern "C" void RecoveredCall_cd6b50_7(uint64_t,uint64_t,uint64_t);
extern "C" void RecoveredCall_cd6b50_11(uint64_t,uint64_t,uint64_t);
extern "C" void RecoveredCall_cd6b50_16(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cd6b50(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {
    RecoveredCall_cd6b50_3(value_x0,value_x1,value_x2);
    RecoveredCall_cd6b50_7((value_x0 + 80),value_x1,value_x2);
    RecoveredCall_cd6b50_11((value_x0 + 88),value_x1,value_x2);
    *reinterpret_cast<uint64_t*>((value_x0 + 104)) = value_x0;
    RecoveredCall_cd6b50_16(value_x1,value_x2,(value_x0 + 96));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint32_t field3 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(value_x0 + 120),uint32_t(4));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field4 + (uint32_t(uint32_t(uint32_t(field3))) << 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 48));
    const uint32_t field8 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field7)(field5,(value_x0 + 124),uint32_t(4));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field9 + (uint32_t(uint32_t(uint32_t(field8))) << 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((field11 + 48));
    const uint32_t field13 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field12)(field10,(value_x0 + 128),uint32_t(4));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field14 + (uint32_t(uint32_t(uint32_t(field13))) << 0));
    return;
}
}

extern "C" void RecoveredCall_cf1430_3(uint64_t,uint64_t,uint64_t);
extern "C" void RecoveredCall_cf1430_7(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cf1430(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {
    RecoveredCall_cf1430_3(value_x0,value_x1,value_x2);
    RecoveredCall_cf1430_7((value_x0 + 160),value_x1,value_x2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint32_t field3 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(value_x0 + 168),uint32_t(4));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field4 + (uint32_t(uint32_t(uint32_t(field3))) << 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 48));
    const uint32_t field8 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field7)(field5,(value_x0 + 172),uint32_t(4));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field9 + (uint32_t(uint32_t(uint32_t(field8))) << 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((field11 + 48));
    const uint32_t field13 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field12)(field10,(value_x0 + 176),uint32_t(4));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 0));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((value_x1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field14 + (uint32_t(uint32_t(uint32_t(field13))) << 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((field15 + 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 48));
    const uint32_t field18 = reinterpret_cast<uint32_t (*)(uint64_t,uint64_t,uint64_t)>(field17)(field15,(value_x0 + 180),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    *reinterpret_cast<uint64_t*>((value_x1 + 0)) = (field19 + (uint32_t(uint32_t(uint32_t(field18))) << 0));
    return;
}
}

extern "C" unsigned char LeafData_cfe830_1[];
extern "C" void RecoveredCall_cfe830_7(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_cfe830_11(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cfe830(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_cfe830_1) - 1792) + 1792);
    RecoveredCall_cfe830_7(value_x0,(value_x0 + 112),uint32_t(uint32_t(uint32_t(-1))));
    RecoveredCall_cfe830_11(value_x0,(value_x0 + 16),uint32_t(uint32_t(uint32_t(-1))));
    *reinterpret_cast<uint64_t*>((value_x0 + 200)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 104)) = 0;
    return;
}
}

extern "C" unsigned char LeafData_cfeb60_1[];
extern "C" void RecoveredCall_cfeb60_7(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_cfeb60_11(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cfeb60(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_cfeb60_1) - 1936) + 1936);
    RecoveredCall_cfeb60_7(value_x0,(value_x0 + 112),uint32_t(uint32_t(uint32_t(-1))));
    RecoveredCall_cfeb60_11(value_x0,(value_x0 + 16),uint32_t(uint32_t(uint32_t(-1))));
    *reinterpret_cast<uint64_t*>((value_x0 + 200)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 104)) = 0;
    return;
}
}

extern "C" unsigned char LeafData_d19850_1[];
extern "C" void RecoveredCall_d19850_7(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_d19850_11(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d19850(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d19850_1) - 376) + 376);
    RecoveredCall_d19850_7(value_x0,(value_x0 + 112),uint32_t(uint32_t(uint32_t(-1))));
    RecoveredCall_d19850_11(value_x0,(value_x0 + 16),uint32_t(uint32_t(uint32_t(-1))));
    *reinterpret_cast<uint64_t*>((value_x0 + 200)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 104)) = 0;
    return;
}
}

extern "C" unsigned char LeafData_d198a0_1[];
extern "C" void RecoveredCall_d198a0_7(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_d198a0_11(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d198a0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d198a0_1) - 248) + 248);
    RecoveredCall_d198a0_7(value_x0,(value_x0 + 112),uint32_t(uint32_t(uint32_t(-1))));
    RecoveredCall_d198a0_11(value_x0,(value_x0 + 16),uint32_t(uint32_t(uint32_t(-1))));
    *reinterpret_cast<uint64_t*>((value_x0 + 200)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 104)) = 0;
    return;
}
}

extern "C" void RecoveredCall_d21530_5(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d21530(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 1400));
    return RecoveredCall_d21530_5(value_x1,(field0 + 352),uint32_t(0));
}
}

extern "C" void RecoveredCall_d25190_5(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d25190(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 1400));
    return RecoveredCall_d25190_5(value_x1,(field0 + 352),uint32_t(0));
}
}

extern "C" uint32_t RecoveredCall_d2c850_6(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_d2c850_12(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d2c850(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 1400));
    const uint32_t field1 = RecoveredCall_d2c850_6(value_x1,(field0 + 352),uint32_t(0));
    value_x19 = value_x1;
    value_x20 = value_x0;
    if ((uint32_t(uint32_t(field1)) & 0x80000000ull) != 0) goto block_13;
    goto block_8;
}
block_8: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x20 + 1400));
    return RecoveredCall_d2c850_12(value_x19,(field2 + 360),uint32_t(1));
}
block_13: {

    return;
}
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_d413e0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 144));
    if ((uint32_t(uint32_t((uint32_t(uint32_t(field0)) & 2147483647))) <= uint32_t(uint32_t(2139095040))) ? (uint32_t(uint32_t((uint32_t(uint32_t(field0)) & 2139095040))) != uint32_t(uint32_t(2139095040))) : false) goto block_8;
    goto block_7;
}
block_7: {
    *reinterpret_cast<uint32_t*>((value_x0 + 144)) = 0;
    goto block_8;
}
block_8: {

    return;
}
}

extern "C" void RecoveredCall_d5be30_3(uint64_t,uint32_t);
extern "C" void RecoveredCall_d5be30_6(uint64_t,uint32_t);
extern "C" void RecoveredCall_d5be30_9(uint64_t,uint32_t);
extern "C" void RecoveredCall_d5be30_12(uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d5be30(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {
    RecoveredCall_d5be30_3((value_x0 + 456),value_x1);
    RecoveredCall_d5be30_6((value_x0 + 488),uint32_t(uint32_t(uint32_t(uint32_t(value_x1)))));
    RecoveredCall_d5be30_9((value_x0 + 520),uint32_t(uint32_t(uint32_t(uint32_t(value_x1)))));
    RecoveredCall_d5be30_12((value_x0 + 552),uint32_t(uint32_t(uint32_t(uint32_t(value_x1)))));
    *reinterpret_cast<uint32_t*>((value_x0 + 416)) = uint32_t(uint32_t(uint32_t(value_x1)));
    return;
}
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_d6d9b0(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint32_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 216));
    value_x19 = uint32_t(uint32_t(value_x1));
    value_x20 = value_x0;
    if (uint32_t(uint32_t(field0)) <= uint32_t(value_x1)) goto block_10;
    goto block_5;
}
block_5: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x20 + 112));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 64));
    reinterpret_cast<void (*)(uint64_t,uint64_t)>(field3)(field1,uint32_t(uint32_t(value_x19)));
    goto block_10;
}
block_10: {
    *reinterpret_cast<uint32_t*>((value_x20 + 220)) = uint32_t(value_x19);
    return;
}
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_d89f80(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint64_t value_x19;
    uint32_t value_x20;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 16));
    value_x19 = value_x0;
    value_x20 = uint32_t(uint32_t(value_x1));
    if (uint32_t(uint32_t(field0)) != 2) goto block_10;
    goto block_5;
}
block_5: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 176));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 104));
    reinterpret_cast<void (*)(uint64_t,uint64_t)>(field3)(field1,uint32_t(uint32_t(value_x20)));
    goto block_10;
}
block_10: {

    if (uint32_t(value_x20) != 0) goto block_13;
    goto block_11;
}
block_11: {
    *reinterpret_cast<uint32_t*>((value_x19 + 16)) = uint32_t(uint32_t(3));
    goto block_13;
}
block_13: {

    return;
}
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_d8dd30(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint64_t value_x19;
    uint32_t value_x20;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 16));
    value_x19 = value_x0;
    value_x20 = uint32_t(uint32_t(value_x1));
    if (uint32_t(uint32_t(field0)) != 2) goto block_10;
    goto block_5;
}
block_5: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 176));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 104));
    reinterpret_cast<void (*)(uint64_t,uint64_t)>(field3)(field1,uint32_t(uint32_t(value_x20)));
    goto block_10;
}
block_10: {

    if (uint32_t(value_x20) != 0) goto block_13;
    goto block_11;
}
block_11: {
    *reinterpret_cast<uint32_t*>((value_x19 + 16)) = uint32_t(uint32_t(3));
    goto block_13;
}
block_13: {

    return;
}
}

extern "C" void RecoveredCall_dd53d0_1(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_dd53d0(uint32_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint32_t value_x1 = arg1;
block_0: {

    return RecoveredCall_dd53d0_1(uint32_t(uint32_t(value_x1)));
}
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_e61b00(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    alignas(16) unsigned char stack_storage[16];
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint32_t value_x2 = arg2;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 240));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 104));
    value_x19 = value_x1;
    value_x8 = field1;
    if (field1 == 0) goto block_12;
    goto block_4;
}
block_4: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 0)) = field2;
    *reinterpret_cast<uint32_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 8)) = uint32_t(value_x2);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((value_x8 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((value_x8 + 0) + 8));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field3 + 8));
    const uint64_t field6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)(field4,(reinterpret_cast<uintptr_t>(stack_storage) + 0));
    goto block_26;
}
block_12: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x0 + 1104));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 1392));
    value_x8 = field7;
    if (field8 != 0) goto block_26;
    goto block_15;
}
block_15: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x8 + 1336));
    value_x8 = field9;
    if (field9 == 0) goto block_25;
    goto block_17;
}
block_17: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x8 + 40));
    if (field10 == 0) goto block_25;
    goto block_19;
}
block_19: {
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    value_x1 = field11;
    if (field11 == 0) goto block_24;
    goto block_21;
}
block_21: {
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((value_x8 + 56));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 16));
    reinterpret_cast<void (*)(uint64_t,uint64_t)>(field13)(field12,value_x1);
    goto block_24;
}
block_24: {
    *reinterpret_cast<uint64_t*>((value_x19 + 0)) = 0;
    goto block_25;
}
block_25: {
    *reinterpret_cast<uint64_t*>((value_x19 + 0)) = 0;
    goto block_26;
}
block_26: {

    return;
}
}

extern "C" void RecoveredCall_f65360_20(uint64_t);
extern "C" void RecoveredCall_f65360_23(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_f65360(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
block_0: {

    if (value_x0 == 0) goto block_10;
    goto block_1;
}
block_1: {
    value_x19 = value_x1;
    if (value_x1 == 0) goto block_10;
    goto block_3;
}
block_3: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 22));
    if (uint32_t(uint32_t(field0)) != 31) goto block_10;
    goto block_6;
}
block_6: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x19 + 16));
    *reinterpret_cast<uint32_t*>((value_x19 + 16)) = uint32_t(uint32_t((uint32_t(uint32_t(field1)) - 1)));
    if (uint32_t(uint32_t((uint32_t(uint32_t(field1)) - 1))) == 0) goto block_11;
    goto block_10;
}
block_10: {

    return;
}
block_11: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 8));
    value_x0 = field2;
    if (field2 == 0) goto block_19;
    goto block_13;
}
block_13: {
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x19 + 48));
    if (uint32_t(uint32_t(field3)) == 0) goto block_19;
    goto block_15;
}
block_15: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 56));
    reinterpret_cast<void (*)(uint64_t)>(field5)(value_x0);
    *reinterpret_cast<uint64_t*>((value_x19 + 8)) = 0;
    goto block_19;
}
block_19: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 40));
    RecoveredCall_f65360_20(field6);
    *reinterpret_cast<uint64_t*>((value_x19 + 40)) = 0;
    return RecoveredCall_f65360_23(value_x19);
}
}
