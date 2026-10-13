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

extern "C" __attribute__((noinline)) void RecoveredLeaf_9417e0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 456));
    const float field2 = reinterpret_cast<float (*)(uint64_t)>(field1)(value_x0);
    *reinterpret_cast<float*>((value_x0 + 352)) = field2;
    return;
}
}

extern "C" void RecoveredCall_9a4220_1(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_9a4220(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    RecoveredCall_9a4220_1(value_x0);
    *reinterpret_cast<uint32_t*>((value_x0 + 572)) = uint32_t(uint32_t(13));
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 152));
    *reinterpret_cast<uint32_t*>((value_x0 + 156)) = uint32_t(uint32_t(field0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    *reinterpret_cast<uint32_t*>((value_x0 + 628)) = 0;
    *reinterpret_cast<uint8_t*>((value_x0 + 624)) = 0;
    *reinterpret_cast<uint8_t*>((value_x0 + 632)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 636)) = 0;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 456));
    const float field3 = reinterpret_cast<float (*)(uint64_t)>(field2)(value_x0);
    *reinterpret_cast<float*>((value_x0 + 352)) = field3;
    return;
}
}

extern "C" void RecoveredCall_9b8af0_1(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_9b8af0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    RecoveredCall_9b8af0_1(value_x0);
    *reinterpret_cast<uint32_t*>((value_x0 + 572)) = uint32_t(uint32_t(13));
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 152));
    *reinterpret_cast<uint32_t*>((value_x0 + 156)) = uint32_t(uint32_t(field0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    *reinterpret_cast<uint32_t*>((value_x0 + 628)) = 0;
    *reinterpret_cast<uint8_t*>((value_x0 + 624)) = 0;
    *reinterpret_cast<uint8_t*>((value_x0 + 632)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 636)) = 0;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 456));
    const float field3 = reinterpret_cast<float (*)(uint64_t)>(field2)(value_x0);
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((value_x0 + 152));
    *reinterpret_cast<uint32_t*>((value_x0 + 156)) = uint32_t(uint32_t(field4));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    *reinterpret_cast<float*>((value_x0 + 352)) = field3;
    *reinterpret_cast<uint32_t*>((value_x0 + 672)) = 0;
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 456));
    const float field7 = reinterpret_cast<float (*)(uint64_t)>(field6)(value_x0);
    *reinterpret_cast<float*>((value_x0 + 352)) = field7;
    return;
}
}

extern "C" void RecoveredCall_a10760_1(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_a10760(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    RecoveredCall_a10760_1(value_x0);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 152));
    *reinterpret_cast<uint32_t*>((value_x0 + 156)) = uint32_t(uint32_t(field0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 456));
    const float field3 = reinterpret_cast<float (*)(uint64_t)>(field2)(value_x0);
    *reinterpret_cast<float*>((value_x0 + 352)) = field3;
    return;
}
}

extern "C" void RecoveredCall_b62900_1(uint64_t);
extern "C" void RecoveredCall_b62900_11(uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b62900(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    RecoveredCall_b62900_1(value_x0);
    const float field0 = *reinterpret_cast<const float*>((value_x0 + 208));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 96));
    *reinterpret_cast<uint32_t*>((value_x0 + 184)) = uint32_t(uint32_t(field1));
    *reinterpret_cast<float*>((value_x0 + 196)) = (float(1.00000000) / field0);
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field1)) == 0) goto block_12;
    goto block_9;
}
block_9: {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x19 + 188));
    return RecoveredCall_b62900_11(value_x19,uint32_t(field2));
}
block_12: {
    *reinterpret_cast<uint8_t*>((value_x19 + 212)) = 0;
    return;
}
}
