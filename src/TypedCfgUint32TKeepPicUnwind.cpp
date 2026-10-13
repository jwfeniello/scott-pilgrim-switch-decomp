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
extern "C" uint32_t RecoveredCall_7e440_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_7e440(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint32_t field0 = RecoveredCall_7e440_2((value_x0 + 8),(value_x1 + 8));
    return uint32_t(uint32_t((uint32_t(uint32_t(field0)) >> 31)));
}
}

extern "C" uint32_t RecoveredCall_4fb1c0_0();
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4fb1c0() {
    LEAF_CHECK
block_0: {
    const uint32_t field0 = RecoveredCall_4fb1c0_0();
    return uint32_t(uint32_t(uint32_t(uint32_t(((uint32_t(uint32_t(1)) & ~0xfffffffeull) | ((uint32_t(uint32_t(field0)) << 1) & 0xfffffffeull))))));
}
}

extern "C" void RecoveredCall_50fa40_3(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_50fa40(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    RecoveredCall_50fa40_3((value_x0 + 320),value_x1,value_x2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 24));
    reinterpret_cast<void (*)(uint64_t)>(field1)(value_x1);
    return uint32_t(uint32_t(1));
}
block_10: {

    return uint32_t(uint32_t(0));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_56ded0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 248));
    const uint32_t field2 = reinterpret_cast<uint32_t (*)(uint64_t)>(field1)(value_x0);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 280));
    const uint32_t field5 = reinterpret_cast<uint32_t (*)(uint64_t)>(field4)(value_x0);
    return uint32_t(uint32_t((uint32_t(uint32_t(uint32_t(uint32_t(field2)))) - uint32_t(uint32_t(field5)))));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_56df10(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 256));
    const uint32_t field2 = reinterpret_cast<uint32_t (*)(uint64_t)>(field1)(value_x0);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 288));
    const uint32_t field5 = reinterpret_cast<uint32_t (*)(uint64_t)>(field4)(value_x0);
    return uint32_t(uint32_t((uint32_t(uint32_t(uint32_t(uint32_t(field2)))) - uint32_t(uint32_t(field5)))));
}
}
