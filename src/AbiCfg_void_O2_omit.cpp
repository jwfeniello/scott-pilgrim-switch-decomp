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
extern "C" void RecoveredCall_931580_9(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_931580(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 80));
    value_x19 = value_x0;
    value_x8 = field0;
    if (field0 == 0) goto block_15;
    goto block_3;
}
block_3: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    value_x20 = field1;
    if (field1 == 0) goto block_15;
    goto block_5;
}
block_5: {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x19 + 16));
    *reinterpret_cast<uint32_t*>((value_x20 + 80)) = uint32_t(uint32_t(field2));
    RecoveredCall_931580_9((value_x20 + 88),(value_x19 + 24));
    const uint8_t field3 = *reinterpret_cast<const uint8_t*>((value_x19 + 9));
    const uint8_t field4 = *reinterpret_cast<const uint8_t*>((value_x20 + 75));
    *reinterpret_cast<uint8_t*>((value_x20 + 74)) = uint32_t(uint32_t((uint32_t(uint32_t(field4)) ^ uint32_t(uint32_t(field3)))));
    *reinterpret_cast<uint8_t*>((value_x20 + 75)) = uint32_t(uint32_t(field3));
    goto block_15;
}
block_15: {
    *reinterpret_cast<uint8_t*>((value_x19 + 8)) = uint32_t(uint32_t(1));
    return;
}
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_a89500(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {

    if (value_x0 == 0) goto block_38;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 56));
    value_x1 = field0;
    value_x19 = value_x0;
    if (field0 == 0) goto block_38;
    goto block_4;
}
block_4: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x1 + 8));
    value_x8 = uint32_t(field1);
    if (uint32_t(uint32_t(field1)) == 42) goto block_11;
    goto block_7;
}
block_7: {

    if (uint32_t(value_x8) == 666) goto block_11;
    goto block_9;
}
block_9: {

    if (uint32_t(value_x8) != 113) goto block_38;
    goto block_11;
}
block_11: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x1 + 16));
    value_x8 = field2;
    if (field2 == 0) goto block_17;
    goto block_13;
}
block_13: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((value_x19 + 72) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((value_x19 + 72) + 8));
    reinterpret_cast<void (*)(uint64_t,uint64_t)>(field3)(field4,value_x8);
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x19 + 56));
    value_x1 = field5;
    goto block_17;
}
block_17: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x1 + 96));
    value_x8 = field6;
    if (field6 == 0) goto block_23;
    goto block_19;
}
block_19: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((value_x19 + 72) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((value_x19 + 72) + 8));
    reinterpret_cast<void (*)(uint64_t,uint64_t)>(field7)(field8,value_x8);
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x19 + 56));
    value_x1 = field9;
    goto block_23;
}
block_23: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x1 + 88));
    value_x8 = field10;
    if (field10 == 0) goto block_29;
    goto block_25;
}
block_25: {
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((value_x19 + 72) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((value_x19 + 72) + 8));
    reinterpret_cast<void (*)(uint64_t,uint64_t)>(field11)(field12,value_x8);
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((value_x19 + 56));
    value_x1 = field13;
    goto block_29;
}
block_29: {
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((value_x1 + 72));
    value_x8 = field14;
    if (field14 == 0) goto block_35;
    goto block_31;
}
block_31: {
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((value_x19 + 72) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((value_x19 + 72) + 8));
    reinterpret_cast<void (*)(uint64_t,uint64_t)>(field15)(field16,value_x8);
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((value_x19 + 56));
    value_x1 = field17;
    goto block_35;
}
block_35: {
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>(((value_x19 + 72) + 0));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((value_x19 + 72) + 8));
    reinterpret_cast<void (*)(uint64_t,uint64_t)>(field18)(field19,value_x1);
    *reinterpret_cast<uint64_t*>((value_x19 + 56)) = 0;
    goto block_38;
}
block_38: {

    return;
}
}

extern "C" uint32_t RecoveredCall_e81610_3(uint64_t,uint32_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_e81610(uint64_t arg0,uint32_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x2 = arg2;
    uint32_t value_x20;
block_0: {
    const uint32_t field0 = RecoveredCall_e81610_3(value_x0,value_x1,value_x2,uint32_t(1));
    value_x19 = value_x0;
    value_x20 = uint32_t(uint32_t(value_x1));
    if (uint32_t(uint32_t(field0)) != 0) goto block_11;
    goto block_5;
}
block_5: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 16));
    *reinterpret_cast<uint64_t*>((value_x19 + 16)) = ((uint32_t(value_x20) == 0) ? (field1 & 18446744073709518847) : (field1 | 32768));
    goto block_11;
}
block_11: {

    return;
}
}
