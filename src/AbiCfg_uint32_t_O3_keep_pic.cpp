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

extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_58a60(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    value_x19 = value_x1;
    if ((uint32_t(value_x1) & 0x80000000ull) != 0) goto block_33;
    goto block_2;
}
block_2: {
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>(((value_x0 + 8) + 0)), __ATOMIC_ACQUIRE);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 32));
    const uint32_t field3 = reinterpret_cast<uint32_t (*)(uint64_t)>(field2)(field0);
    *reinterpret_cast<uint32_t*>((value_x0 + 0)) = uint32_t(uint32_t(((int32_t(uint32_t(uint32_t((uint32_t(uint32_t(field3)) - 1)))) > int32_t(uint32_t(value_x19))) ? uint32_t(value_x19) : uint32_t(uint32_t((uint32_t(uint32_t(field3)) - 1))))));
    const uint64_t field4 = __atomic_load_n(reinterpret_cast<const uint64_t*>(((value_x0 + 8) + 0)), __ATOMIC_ACQUIRE);
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((field4 + 12));
    value_x20 = value_x0;
    value_x21 = (value_x0 + 8);
    if (uint32_t(uint32_t(field5)) != 2) goto block_42;
    goto block_16;
}
block_16: {
    const uint64_t field6 = __atomic_load_n(reinterpret_cast<const uint64_t*>((value_x21 + 0)), __ATOMIC_ACQUIRE);
    const uint32_t field7 = *reinterpret_cast<const uint32_t*>((value_x20 + 0));
    const uint8_t field8 = *reinterpret_cast<const uint8_t*>((field6 + 76));
    value_x19 = field6;
    value_x20 = uint32_t(field7);
    if (uint32_t(uint32_t(field8)) == 0) goto block_26;
    goto block_20;
}
block_20: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 24));
    const uint32_t field11 = reinterpret_cast<uint32_t (*)(uint64_t)>(field10)(value_x19);
    if (uint32_t(uint32_t(field11)) <= uint32_t(value_x20)) goto block_42;
    goto block_26;
}
block_26: {
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((value_x19 + 56));
    if (field12 == 0) goto block_35;
    goto block_28;
}
block_28: {
    const uint32_t field13 = *reinterpret_cast<const uint32_t*>((value_x19 + 64));
    if (uint32_t(uint32_t(field13)) <= uint32_t(value_x20)) goto block_37;
    goto block_31;
}
block_31: {

    return uint32_t(uint32_t(1));
}
block_33: {

    return uint32_t(uint32_t(1));
}
block_35: {

    return uint32_t(uint32_t(1));
}
block_37: {
    const uint32_t field14 = *reinterpret_cast<const uint32_t*>((value_x19 + 68));
    if (uint32_t(uint32_t(field14)) >= uint32_t(value_x20)) goto block_42;
    goto block_40;
}
block_40: {

    return uint32_t(uint32_t(1));
}
block_42: {

    return uint32_t(uint32_t(0));
}
}

extern "C" uint32_t RecoveredCall_503ff0_3(uint64_t);
extern "C" void RecoveredCall_503ff0_10(uint64_t,uint32_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_503ff0(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint32_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    const uint32_t field1 = RecoveredCall_503ff0_3(field0);
    value_x19 = uint32_t(uint32_t(value_x1));
    value_x20 = value_x0;
    if (uint32_t(uint32_t(field1)) >= uint32_t(uint32_t(uint32_t(value_x1)))) goto block_8;
    goto block_6;
}
block_6: {

    return uint32_t(uint32_t(0));
}
block_8: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x20 + 8));
    RecoveredCall_503ff0_10(field2,uint32_t(uint32_t(value_x19)));
    return uint32_t(uint32_t(1));
}
}

extern "C" uint32_t RecoveredCall_504510_3(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_504510(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint32_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    const uint32_t field1 = RecoveredCall_504510_3(field0);
    value_x19 = uint32_t(uint32_t(value_x1));
    value_x20 = value_x0;
    if (uint32_t(uint32_t(field1)) >= uint32_t(uint32_t(uint32_t(value_x1)))) goto block_8;
    goto block_6;
}
block_6: {

    return uint32_t(uint32_t(0));
}
block_8: {
    *reinterpret_cast<uint32_t*>((value_x20 + 16)) = uint32_t(value_x19);
    return uint32_t(uint32_t(1));
}
}

extern "C" uint32_t RecoveredCall_505b60_3(uint64_t);
extern "C" uint32_t RecoveredCall_505b60_10(uint64_t);
extern "C" void RecoveredCall_505b60_18(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_505b60(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint32_t field0 = RecoveredCall_505b60_3(value_x1);
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 48));
    value_x19 = value_x0;
    value_x20 = value_x1;
    if (uint32_t(uint32_t(field0)) >= uint32_t(uint32_t(field1))) goto block_9;
    goto block_7;
}
block_7: {

    return uint32_t(uint32_t(0));
}
block_9: {
    const uint32_t field2 = RecoveredCall_505b60_10(value_x20);
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x19 + 52));
    if (uint32_t(uint32_t(field2)) <= uint32_t(uint32_t(field3))) goto block_16;
    goto block_14;
}
block_14: {

    return uint32_t(uint32_t(0));
}
block_16: {
    RecoveredCall_505b60_18((value_x19 + 8),value_x20);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 72));
    reinterpret_cast<void (*)(uint64_t)>(field5)(value_x19);
    return uint32_t(uint32_t(1));
}
}

extern "C" uint32_t RecoveredCall_5173f0_3(uint64_t);
extern "C" uint32_t RecoveredCall_5173f0_10(uint64_t);
extern "C" void RecoveredCall_5173f0_18(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5173f0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint32_t field0 = RecoveredCall_5173f0_3(value_x1);
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 56));
    value_x19 = value_x0;
    value_x20 = value_x1;
    if (uint32_t(uint32_t(field0)) >= uint32_t(uint32_t(field1))) goto block_9;
    goto block_7;
}
block_7: {

    return uint32_t(uint32_t(0));
}
block_9: {
    const uint32_t field2 = RecoveredCall_5173f0_10(value_x20);
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x19 + 60));
    if (uint32_t(uint32_t(field2)) <= uint32_t(uint32_t(field3))) goto block_16;
    goto block_14;
}
block_14: {

    return uint32_t(uint32_t(0));
}
block_16: {
    RecoveredCall_5173f0_18((value_x19 + 16),value_x20);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 40));
    reinterpret_cast<void (*)(uint64_t)>(field5)(value_x19);
    return uint32_t(uint32_t(1));
}
}

extern "C" uint32_t RecoveredCall_517480_3(uint64_t);
extern "C" uint32_t RecoveredCall_517480_10(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_517480(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint32_t field0 = RecoveredCall_517480_3((value_x0 + 16));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 56));
    value_x19 = value_x0;
    value_x20 = (value_x0 + 16);
    if (uint32_t(uint32_t(field0)) >= uint32_t(uint32_t(field1))) goto block_9;
    goto block_7;
}
block_7: {

    return uint32_t(uint32_t(0));
}
block_9: {
    const uint32_t field2 = RecoveredCall_517480_10(value_x20);
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x19 + 60));
    return uint32_t(uint32_t((uint32_t(uint32_t(field2)) <= uint32_t(uint32_t(field3)))));
}
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5384a0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1;
    uint64_t value_x19;
    uint64_t value_x8;
    uint64_t value_x9;
block_0: {

    if (value_x0 == 0) goto block_18;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 56));
    value_x1 = field0;
    value_x19 = value_x0;
    if (field0 == 0) goto block_20;
    goto block_4;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 72));
    value_x9 = field1;
    if (field1 == 0) goto block_22;
    goto block_6;
}
block_6: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x1 + 64));
    value_x8 = field2;
    if (field2 == 0) goto block_13;
    goto block_8;
}
block_8: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 80));
    reinterpret_cast<void (*)(uint64_t,uint64_t)>(value_x9)(field3,value_x8);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 72));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x19 + 56));
    value_x1 = field5;
    value_x9 = field4;
    goto block_13;
}
block_13: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 80));
    reinterpret_cast<void (*)(uint64_t,uint64_t)>(value_x9)(field6,value_x1);
    *reinterpret_cast<uint64_t*>((value_x19 + 56)) = 0;
    return uint32_t(uint32_t(0));
}
block_18: {

    return uint32_t(uint32_t(-2));
}
block_20: {

    return uint32_t(uint32_t(-2));
}
block_22: {

    return uint32_t(uint32_t(-2));
}
}
