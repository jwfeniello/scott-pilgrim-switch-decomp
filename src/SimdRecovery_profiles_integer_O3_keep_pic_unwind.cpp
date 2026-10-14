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
extern "C" void RecoveredCall_4f9210_6(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4f9210(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 96));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field0)) == 0) goto block_5;
    goto block_3;
}
block_3: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x19 + 8));
    return uint32_t(field1);
}
block_5: {
    RecoveredCall_4f9210_6(value_x19);
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x19 + 8));
    return uint32_t(field2);
}
}

extern "C" void RecoveredCall_4f9320_6(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4f9320(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 96));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field0)) == 0) goto block_5;
    goto block_3;
}
block_3: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    return field1;
}
block_5: {
    RecoveredCall_4f9320_6(value_x19);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    return field2;
}
}

extern "C" uint32_t RecoveredCall_4f9a50_9(uint64_t,uint64_t);
extern "C" void RecoveredCall_4f9a50_14(uint64_t);
extern "C" void RecoveredCall_4f9a50_19(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4f9a50(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 97));
    value_x19 = value_x1;
    value_x20 = value_x0;
    if (uint32_t(uint32_t(field0)) == 0) goto block_13;
    goto block_4;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x20 + 88));
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x19 + 97));
    value_x20 = field1;
    if (uint32_t(uint32_t(field2)) == 0) goto block_18;
    goto block_7;
}
block_7: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 88));
    const uint32_t field4 = RecoveredCall_4f9a50_9(value_x20,field3);
    return uint32_t((uint32_t(uint32_t(field4)) == 0));
}
block_13: {
    RecoveredCall_4f9a50_14(value_x20);
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x20 + 88));
    const uint8_t field6 = *reinterpret_cast<const uint8_t*>((value_x19 + 97));
    value_x20 = field5;
    if (uint32_t(uint32_t(field6)) != 0) goto block_7;
    goto block_18;
}
block_18: {
    RecoveredCall_4f9a50_19(value_x19);
    goto block_7;
}
}

extern "C" void RecoveredCall_4f9b50_6(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4f9b50(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 97));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field0)) == 0) goto block_5;
    goto block_3;
}
block_3: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 88));
    return field1;
}
block_5: {
    RecoveredCall_4f9b50_6(value_x19);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 88));
    return field2;
}
}

extern "C" void RecoveredCall_4f9d10_6(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4f9d10(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 96));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field0)) == 0) goto block_5;
    goto block_3;
}
block_3: {
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x19 + 98));
    return uint32_t(field1);
}
block_5: {
    RecoveredCall_4f9d10_6(value_x19);
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x19 + 98));
    return uint32_t(field2);
}
}
