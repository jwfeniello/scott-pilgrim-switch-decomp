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

extern "C" __attribute__((noinline)) float RecoveredLeaf_9d0390(uint64_t arg0,float float_arg0,float float_arg1) {
    LEAF_CHECK
    float value_v1 = float_arg1;
    uint64_t value_x0 = arg0;
block_0: {
    const float field0 = *reinterpret_cast<const float*>((value_x0 + 736));
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x0 + 2420));
    return ((uint32_t(uint32_t(field1)) == 0) ? field0 : (field0 * float(3.00000000)));
}
}


extern "C" __attribute__((noinline)) float RecoveredLeaf_a40020(uint64_t arg0,float float_arg0,float float_arg1) {
    LEAF_CHECK
    float value_v0;
    float value_v1 = float_arg1;
    uint64_t value_x0 = arg0;
block_0: {
    const float field0 = *reinterpret_cast<const float*>((value_x0 + 736));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 4092));
    value_v0 = (field0 * float(3.00000000));
    if (uint32_t(uint32_t(field1)) != 4) goto block_8;
    goto block_6;
}
block_6: {
    const float field2 = *reinterpret_cast<const float*>((value_x0 + 3448));
    value_v0 = (value_v0 * field2);
    goto block_8;
}
block_8: {

    return value_v0;
}
}


extern "C" __attribute__((noinline)) float RecoveredLeaf_cfda40(uint64_t arg0,float float_arg0,float float_arg1) {
    LEAF_CHECK
    float value_v1 = float_arg1;
    uint64_t value_x0 = arg0;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 48));
    return ((uint32_t(uint32_t(field0)) == 0) ? LeafBitsFloat(0) : ((uint32_t(uint32_t(field0)) == 1) ? float(1.00000000) : LeafBitsFloat(0)));
}
}


extern "C" __attribute__((noinline)) float RecoveredLeaf_d6a6a0(uint64_t arg0,float float_arg0) {
    LEAF_CHECK
    float value_v0 = float_arg0;
    uint64_t value_x0 = arg0;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 8));
    if (uint32_t(uint32_t(field0)) != 2) goto block_5;
    goto block_3;
}
block_3: {

    return float(-2.00000000);
}
block_5: {
    const float field1 = *reinterpret_cast<const float*>((value_x0 + 92));
    return field1;
}
}
