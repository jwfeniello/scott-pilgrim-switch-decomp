// Isolated machine ABI views; original class identities and complete declarations remain provisional.
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

typedef float FloatVector4 __attribute__((vector_size(16),aligned(1)));
typedef float FloatVector2 __attribute__((vector_size(8),aligned(1)));
typedef double DoubleVector2 __attribute__((vector_size(16),aligned(1)));
typedef uint32_t UnsignedVector4 __attribute__((vector_size(16),aligned(1)));
typedef uint32_t UnsignedVector2 __attribute__((vector_size(8),aligned(1)));
typedef uint64_t UnsignedVector64x2 __attribute__((vector_size(16),aligned(1)));
typedef uint16_t UnsignedVector16x8 __attribute__((vector_size(16),aligned(1)));
typedef uint16_t UnsignedVector16x4 __attribute__((vector_size(8),aligned(1)));
template<class Out,class In> __attribute__((always_inline)) inline Out LeafBitView(In value) {
    Out result={};__builtin_memcpy(&result,&value,sizeof(Out)<sizeof(In)?sizeof(Out):sizeof(In));return result;
}

extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1e73d0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    value_x8 = field0;
    if (field0 == 0) goto block_8;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    if (field1 == 0) goto block_8;
    goto block_4;
}
block_4: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x8 + 16));
    return uint32_t((field2 == 0));
}
block_8: {

    return uint32_t(1);
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2133c0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    value_x8 = field0;
    if (field0 == 0) goto block_10;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 24));
    if (field1 == 0) goto block_10;
    goto block_4;
}
block_4: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x8 + 32));
    if (field2 == 0) goto block_10;
    goto block_6;
}
block_6: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x8 + 40));
    return uint32_t((field3 == 0));
}
block_10: {

    return uint32_t(1);
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_269090(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x8;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 0));
    value_x8 = uint32_t(((uint32_t(uint32_t(44464)) & 0xffffull) | (26163ull << 16)));
    if (uint32_t(uint32_t(field0)) != uint32_t(uint32_t(((uint32_t(uint32_t(44464)) & 0xffffull) | (26163ull << 16))))) goto block_15;
    goto block_5;
}
block_5: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 4));
    if (uint32_t(uint32_t(field1)) != uint32_t(value_x8)) goto block_15;
    goto block_8;
}
block_8: {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x0 + 8));
    if (uint32_t(uint32_t(field2)) != uint32_t(value_x8)) goto block_15;
    goto block_11;
}
block_11: {
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x0 + 12));
    return uint32_t((uint32_t(uint32_t(field3)) != uint32_t(value_x8)));
}
block_15: {

    return uint32_t(1);
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4f4740(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x8;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 8));
    value_x8 = uint32_t((uint32_t(uint32_t(field0)) - 1));
    if (uint32_t(uint32_t((uint32_t(uint32_t(field0)) - 1))) != 0) goto block_4;
    goto block_3;
}
block_3: {
    *reinterpret_cast<uint64_t*>((value_x0 + 16)) = 0;
    goto block_4;
}
block_4: {
    *reinterpret_cast<uint32_t*>((value_x0 + 8)) = uint32_t(value_x8);
    return value_x0;
}
}
