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

extern "C" __attribute__((noinline)) float RecoveredLeaf_9c2620(uint64_t arg0,uint32_t arg1,float float_arg0) {
    LEAF_CHECK
    float value_v0 = float_arg0;
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 104));
    value_x8 = field0;
    if (field0 == 0) goto block_8;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x0 = field1;
    if (field1 == 0) goto block_8;
    goto block_4;
}
block_4: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 464));
    return reinterpret_cast<float (*)(uint64_t,uint64_t,uint64_t)>(field3)(value_x0,uint32_t((uint32_t(value_x1) & 1)),field3);
    __builtin_unreachable();
}
block_8: {

    return float(1.00000000);
}
}
