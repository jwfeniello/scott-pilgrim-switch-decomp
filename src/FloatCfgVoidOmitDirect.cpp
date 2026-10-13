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

extern "C" __attribute__((noinline)) void RecoveredLeaf_cdc990(uint64_t arg0) {
    LEAF_CHECK
    float value_v0;
    float value_v1;
    float value_v2;
    float value_v3;
    uint64_t value_x0 = arg0;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 200));
    const float field1 = *reinterpret_cast<const float*>((value_x0 + 196));
    *reinterpret_cast<uint32_t*>((value_x0 + 176)) = uint32_t(uint32_t(field0));
    value_v0 = LeafBitsFloat(0);
    value_v1 = field1;
    value_v2 = LeafBitsFloat(uint32_t(uint32_t(field0)));
    if (field1 == LeafBitsFloat(uint32_t(uint32_t(field0)))) goto block_13;
    goto block_7;
}
block_7: {
    const float field2 = *reinterpret_cast<const float*>((value_x0 + 164));
    value_v3 = field2;
    if (field2 == 0.0) goto block_13;
    goto block_10;
}
block_10: {
    value_v0 = (-((value_v2 - value_v1) / value_v3));
    goto block_13;
}
block_13: {
    *reinterpret_cast<float*>((value_x0 + 180)) = value_v0;
    *reinterpret_cast<uint32_t*>((value_x0 + 160)) = 0;
    return;
}
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_cfd9d0(uint64_t arg0) {
    LEAF_CHECK
    float value_v0;
    float value_v1;
    uint64_t value_x0 = arg0;
block_0: {
    const float field0 = *reinterpret_cast<const float*>((value_x0 + 8));
    const float field1 = *reinterpret_cast<const float*>((value_x0 + 40));
    value_v0 = field1;
    value_v1 = field0;
    if (field0 < field1) goto block_7;
    goto block_4;
}
block_4: {
    const float field2 = *reinterpret_cast<const float*>((value_x0 + 44));
    value_v0 = field2;
    if (!(value_v1 > field2)) goto block_8;
    goto block_7;
}
block_7: {
    *reinterpret_cast<float*>((value_x0 + 8)) = value_v0;
    goto block_8;
}
block_8: {

    return;
}
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_d727b0(uint64_t arg0,float float_arg0,float float_arg1) {
    LEAF_CHECK
    float value_v0 = float_arg0;
    float value_v1 = float_arg1;
    uint64_t value_x0 = arg0;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 72));
    if (uint32_t(uint32_t(field0)) == 0) goto block_3;
    goto block_2;
}
block_2: {

    return;
}
block_3: {
    *reinterpret_cast<float*>((value_x0 + 108)) = value_v0;
    *reinterpret_cast<float*>((value_x0 + 112)) = value_v1;
    *reinterpret_cast<uint32_t*>((value_x0 + 72)) = uint32_t(uint32_t(1));
    return;
}
}
