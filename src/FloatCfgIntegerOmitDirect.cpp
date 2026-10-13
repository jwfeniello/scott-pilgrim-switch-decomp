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

extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8ba470(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 260));
    if (uint32_t(uint32_t(field0)) == 0) goto block_4;
    goto block_2;
}
block_2: {

    return uint32_t(1);
}
block_4: {
    const float field1 = *reinterpret_cast<const float*>((value_x0 + 96));
    const float field2 = *reinterpret_cast<const float*>((value_x0 + 104));
    return uint32_t((field1 != field2));
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8e4610(float float_arg0,float float_arg1) {
    LEAF_CHECK
    float value_v0 = float_arg0;
    float value_v1 = float_arg1;
block_0: {

    return uint32_t((value_v1 < value_v0));
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8e4620(float float_arg0,float float_arg1) {
    LEAF_CHECK
    float value_v0 = float_arg0;
    float value_v1 = float_arg1;
block_0: {

    return uint32_t((value_v1 > value_v0));
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_9415a0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const float field0 = *reinterpret_cast<const float*>((value_x0 + 352));
    return uint32_t((field0 <= 0.0));
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_96e500(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const float field0 = *reinterpret_cast<const float*>((value_x0 + 428));
    return uint32_t((field0 < 0.0));
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_a11c60(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const float field0 = *reinterpret_cast<const float*>((value_x0 + 352));
    return uint32_t((field0 > 0.0));
}
}
