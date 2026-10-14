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
extern "C" uint64_t RecoveredCall_7b360_1();
extern "C" void RecoveredCall_7b360_5(uint64_t,uint32_t,uint64_t);
extern "C" void RecoveredCall_7b360_8(uint64_t,uint64_t);
extern "C" void RecoveredCall_7b360_11(uint64_t,uint32_t);
extern "C" void RecoveredCall_7b360_13(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7b360(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = RecoveredCall_7b360_1();
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 64));
    RecoveredCall_7b360_5(field0,uint32_t(-1),field1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    RecoveredCall_7b360_8(field0,field2);
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x0 + 56));
    RecoveredCall_7b360_11(field0,uint32_t(field3));
    RecoveredCall_7b360_13(value_x0);
    __builtin_unreachable();
}
}

extern "C" void RecoveredCall_2c4ec0_2(uint64_t);
extern "C" uint64_t RecoveredCall_2c4ec0_7(uint64_t,uint32_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2c4ec0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = 0;
    RecoveredCall_2c4ec0_2((value_x0 + 8));
    *reinterpret_cast<uint32_t*>((value_x0 + 16)) = 0;
    const uint64_t field0 = RecoveredCall_2c4ec0_7((value_x0 + 24),uint32_t(0),uint32_t(412));
    *reinterpret_cast<uint32_t*>((value_x0 + 436)) = uint32_t(uint32_t(30));
    return field0;
}
}

extern "C" uint64_t RecoveredCall_515b80_10(uint32_t,uint32_t,uint32_t,uint32_t);
extern "C" uint64_t RecoveredCall_515b80_16(uint64_t,uint32_t,uint64_t);
extern "C" uint64_t RecoveredCall_515b80_21(uint64_t,uint32_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_515b80(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    value_x19 = 0;
    if (value_x0 == 0) goto block_24;
    goto block_2;
}
block_2: {

    if (value_x1 == 0) goto block_24;
    goto block_3;
}
block_3: {
    value_x20 = (value_x1 * value_x0);
    if ((value_x1 * value_x0) == 0) goto block_23;
    goto block_5;
}
block_5: {
    const uint64_t field0 = RecoveredCall_515b80_10(uint32_t(uint32_t((value_x20 + 4))),uint32_t(4),uint32_t(0),uint32_t(1095761920));
    value_x19 = field0;
    value_x21 = (value_x20 + 4);
    if (field0 == 0) goto block_24;
    goto block_13;
}
block_13: {
    const uint64_t field1 = RecoveredCall_515b80_16(value_x19,uint32_t(0),value_x21);
    *reinterpret_cast<uint32_t*>((value_x19 + 0)) = uint32_t(value_x20);
    const uint64_t field2 = RecoveredCall_515b80_21((value_x19 + 4),uint32_t(0),value_x20);
    value_x19 = (value_x19 + 4);
    goto block_24;
}
block_23: {
    value_x19 = 0;
    goto block_24;
}
block_24: {

    return value_x19;
}
}

extern "C" void RecoveredCall_51d970_6(uint64_t);
extern "C" uint32_t RecoveredCall_51d970_8(uint64_t);
extern "C" uint64_t RecoveredCall_51d970_15(uint32_t,uint32_t,uint32_t,uint32_t);
extern "C" uint64_t RecoveredCall_51d970_21(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_51d970(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint32_t value_x2 = arg2;
    uint32_t value_x20;
    uint64_t value_x21;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    value_x19 = value_x0;
    value_x20 = uint32_t(uint32_t(value_x2));
    value_x21 = value_x1;
    value_x8 = field0;
    if (field0 == 0) goto block_7;
    goto block_5;
}
block_5: {
    RecoveredCall_51d970_6((value_x8 - 4));
    goto block_7;
}
block_7: {
    const uint32_t field1 = RecoveredCall_51d970_8(value_x21);
    *reinterpret_cast<uint32_t*>((value_x19 + 8)) = uint32_t(uint32_t(field1));
    const uint64_t field2 = RecoveredCall_51d970_15(uint32_t((uint32_t(uint32_t(field1)) + 4)),uint32_t(4),uint32_t(0),uint32_t(1095761920));
    *reinterpret_cast<uint32_t*>((field2 + 0)) = uint32_t(uint32_t(uint32_t(uint32_t(field1))));
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x19 + 8));
    *reinterpret_cast<uint64_t*>((value_x19 + 0)) = (field2 + 4);
    const uint64_t field4 = RecoveredCall_51d970_21(value_x21,(field2 + 4),uint32_t(field3));
    value_x0 = field4;
    if ((uint32_t(value_x20) & 0x1ull) == 0) goto block_27;
    goto block_23;
}
block_23: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const int32_t field6 = *reinterpret_cast<const int32_t*>((value_x19 + 8));
    *reinterpret_cast<uint8_t*>(((field5 + field6) + -1)) = 0;
    goto block_27;
}
block_27: {

    return value_x0;
}
}
