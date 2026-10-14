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
extern "C" void RecoveredCall_56c70_1(uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_56c70(uint32_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint32_t value_x1 = arg1;
block_0: {

    return RecoveredCall_56c70_1(uint32_t(uint32_t(value_x1)));
}
}

extern "C" uint64_t RecoveredCall_889b0_2(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_889b0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    const uint64_t field0 = RecoveredCall_889b0_2((value_x0 + 152));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((value_x0 + 200) + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((value_x0 + 200) + 8));
    value_x19 = value_x0;
    value_x20 = field1;
    value_x21 = field2;
    goto block_8;
}
block_5: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 16));
    reinterpret_cast<void (*)(uint64_t)>(field4)(value_x0);
    goto block_8;
}
block_8: {

    if (value_x21 == value_x20) goto block_22;
    goto block_10;
}
block_10: {
    const uint64_t field5 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((value_x21 - 8) + 0)), 0, __ATOMIC_ACQ_REL);
    value_x0 = field5;
    value_x21 = (value_x21 - 8);
    if (field5 == 0) goto block_8;
    goto block_15;
}
block_15: {
    const uint32_t field6 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (uint32_t((field6 - 1)) != 0) goto block_8;
    goto block_21;
}
block_21: {

    goto block_5;
}
block_22: {
    *reinterpret_cast<uint64_t*>((value_x19 + 208)) = value_x20;
    return;
}
}

extern "C" void RecoveredCall_212e90_2(uint64_t,uint64_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_212e90(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 32));
    return RecoveredCall_212e90_2(value_x0,field0,value_x2,uint32_t(1));
}
}

extern "C" void RecoveredCall_213320_2(uint64_t,uint64_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_213320(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 32));
    return RecoveredCall_213320_2(value_x0,field0,value_x2,uint32_t(2));
}
}

extern "C" void RecoveredCall_213520_2(uint64_t,uint64_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_213520(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 32));
    return RecoveredCall_213520_2(value_x0,field0,value_x2,uint32_t(0));
}
}

extern "C" void RecoveredCall_38ccd0_17(uint64_t,uint64_t);
extern "C" void RecoveredCall_38ccd0_41(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_38ccd0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x10;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
    uint64_t value_x8;
    uint64_t value_x9;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 64));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((((value_x0 + 64) + 8) + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((((value_x0 + 64) + 8) + 8));
    value_x10 = ((int64_t((field1 - field0)) >> 3) * ((-6148914691236517206 & 0xffffffffffff0000ull) | (43691ull << 0)));
    value_x19 = value_x0;
    value_x20 = value_x1;
    value_x21 = (value_x0 + 64);
    value_x8 = field1;
    value_x9 = field2;
    if (((int64_t((field1 - field0)) >> 3) * ((-6148914691236517206 & 0xffffffffffff0000ull) | (43691ull << 0))) != ((int64_t((field2 - field0)) >> 3) * ((-6148914691236517206 & 0xffffffffffff0000ull) | (43691ull << 0)))) goto block_19;
    goto block_15;
}
block_15: {
    RecoveredCall_38ccd0_17(value_x21,(value_x10 + 8));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((value_x19 + 72) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((value_x19 + 72) + 8));
    value_x8 = field3;
    value_x9 = field4;
    goto block_19;
}
block_19: {

    if (value_x8 >= value_x9) goto block_39;
    goto block_21;
}
block_21: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    *reinterpret_cast<uint64_t*>((value_x8 + 0)) = field5;
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x20 + 8));
    *reinterpret_cast<uint64_t*>((value_x8 + 8)) = field6;
    value_x9 = field6;
    if (field6 == 0) goto block_31;
    goto block_26;
}
block_26: {
    const uint64_t field7 = __atomic_fetch_add(reinterpret_cast<uint64_t*>(((value_x9 + 8) + 0)), 1, __ATOMIC_RELAXED);
    goto block_31;
}
block_31: {
    const uint16_t field8 = *reinterpret_cast<const uint16_t*>((value_x20 + 16));
    *reinterpret_cast<uint16_t*>((value_x8 + 16)) = uint32_t(uint32_t(field8));
    const uint32_t field9 = *reinterpret_cast<const uint32_t*>((value_x20 + 20));
    *reinterpret_cast<uint32_t*>((value_x8 + 20)) = uint32_t(uint32_t(field9));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x19 + 72));
    *reinterpret_cast<uint64_t*>((value_x19 + 72)) = (field10 + 24);
    return;
}
block_39: {

    return RecoveredCall_38ccd0_41(value_x21,value_x20);
}
}

extern "C" void RecoveredCall_4f0140_4(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_4f0140_6(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4f0140(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint32_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint32_t value_x3 = arg3;
block_0: {

    if (uint32_t(value_x3) == 0) goto block_5;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 128));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + (uint64_t(uint32_t(value_x3)) << 3)));
    return RecoveredCall_4f0140_4(field2,value_x1,value_x2);
}
block_5: {

    return RecoveredCall_4f0140_6((value_x0 + 8),value_x1,value_x2);
}
}

extern "C" void RecoveredCall_4f1850_11(uint64_t);
extern "C" void RecoveredCall_4f1850_16(uint64_t);
extern "C" void RecoveredCall_4f1850_26(uint64_t,uint64_t);
extern "C" void RecoveredCall_4f1850_38(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_4f1850_40(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4f1850(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 248));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 264));
    value_x21 = field0;
    if (field0 == field1) goto block_45;
    goto block_4;
}
block_4: {
    value_x19 = value_x1;
    value_x20 = value_x0;
    goto block_6;
}
block_6: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    reinterpret_cast<void (*)(uint64_t)>(field3)(value_x21);
    RecoveredCall_4f1850_11(value_x21);
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((value_x21 + 56));
    value_x8 = uint32_t(field4);
    if (uint32_t(uint32_t(field4)) != 3) goto block_28;
    goto block_15;
}
block_15: {
    RecoveredCall_4f1850_16(value_x21);
    const uint8_t field5 = *reinterpret_cast<const uint8_t*>((value_x20 + 729));
    if (uint32_t(uint32_t(field5)) == 0) goto block_24;
    goto block_19;
}
block_19: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 56));
    reinterpret_cast<void (*)(uint64_t,uint64_t)>(field7)(value_x21,0);
    goto block_24;
}
block_24: {
    RecoveredCall_4f1850_26(value_x21,value_x19);
    const uint32_t field8 = *reinterpret_cast<const uint32_t*>((value_x21 + 56));
    value_x8 = uint32_t(field8);
    goto block_28;
}
block_28: {

    if (uint32_t(value_x8) != 5) goto block_35;
    goto block_30;
}
block_30: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 24));
    reinterpret_cast<void (*)(uint64_t)>(field10)(value_x21);
    goto block_39;
}
block_35: {
    RecoveredCall_4f1850_38(value_x20,value_x21,uint32_t(0));
    goto block_39;
}
block_39: {
    RecoveredCall_4f1850_40(value_x21);
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((value_x21 + 16));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((value_x20 + 264));
    value_x21 = field11;
    if (field11 != field12) goto block_6;
    goto block_45;
}
block_45: {

    return;
}
}

extern "C" uint32_t RecoveredCall_4f5040_1(uint64_t);
extern "C" uint32_t RecoveredCall_4f5040_6(uint64_t);
extern "C" void RecoveredCall_4f5040_11(uint64_t,uint32_t,uint32_t);
extern "C" void RecoveredCall_4f5040_13(uint64_t);
extern "C" void RecoveredCall_4f5040_15(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4f5040(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint32_t field0 = RecoveredCall_4f5040_1(value_x0);
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field0)) != 1) goto block_14;
    goto block_4;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 16));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 40));
    const uint32_t field3 = RecoveredCall_4f5040_6(field2);
    if ((uint32_t(uint32_t(field3)) & 0x1ull) != 0) goto block_12;
    goto block_8;
}
block_8: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 16));
    RecoveredCall_4f5040_11(field4,uint32_t(-1),uint32_t(0));
    goto block_12;
}
block_12: {
    RecoveredCall_4f5040_13(value_x19);
    goto block_14;
}
block_14: {

    return RecoveredCall_4f5040_15(value_x19);
}
}

extern "C" void RecoveredCall_4f9fd0_5(uint64_t);
extern "C" void RecoveredCall_4f9fd0_8(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4f9fd0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x1 + 97));
    value_x19 = value_x0;
    value_x20 = value_x1;
    if (uint32_t(uint32_t(field0)) != 0) goto block_6;
    goto block_4;
}
block_4: {
    RecoveredCall_4f9fd0_5(value_x20);
    goto block_6;
}
block_6: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x20 + 88));
    return RecoveredCall_4f9fd0_8(value_x19,field1);
}
}

extern "C" void RecoveredCall_56c8e0_3(uint64_t,uint64_t,uint32_t);
extern "C" uint32_t RecoveredCall_56c8e0_7(uint64_t,uint64_t);
extern "C" void RecoveredCall_56c8e0_11(uint64_t,uint64_t);
extern "C" void RecoveredCall_56c8e0_16(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_56c8e0(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    alignas(16) unsigned char stack_storage[40];
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint32_t value_x2 = arg2;
    uint64_t value_x20;
    uint64_t value_x21;
    uint64_t value_x22;
block_0: {
    RecoveredCall_56c8e0_3(value_x0,value_x1,value_x2);
    const uint32_t field0 = RecoveredCall_56c8e0_7(value_x1,(value_x0 + 32));
    value_x19 = uint32_t(uint32_t(value_x2));
    value_x20 = value_x1;
    value_x21 = value_x0;
    value_x22 = (value_x0 + 32);
    if ((uint32_t(uint32_t(field0)) & 0x1ull) == 0) goto block_12;
    goto block_9;
}
block_9: {
    RecoveredCall_56c8e0_11(value_x22,value_x20);
    goto block_12;
}
block_12: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x21 + 104));
    value_x0 = field1;
    if (field1 == 0) goto block_17;
    goto block_14;
}
block_14: {

    return RecoveredCall_56c8e0_16(value_x0,value_x20,uint32_t(uint32_t(value_x19)));
}
block_17: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 32) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 32) + 8));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 16) + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 16) + 8));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 0) + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 0) + 8));
    return;
}
}

extern "C" void RecoveredCall_5fcd50_3(uint64_t,uint64_t,uint32_t);
extern "C" uint32_t RecoveredCall_5fcd50_7(uint64_t,uint64_t);
extern "C" void RecoveredCall_5fcd50_12(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_5fcd50_17(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5fcd50(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    alignas(16) unsigned char stack_storage[40];
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint32_t value_x2 = arg2;
    uint64_t value_x20;
    uint64_t value_x21;
    uint64_t value_x22;
block_0: {
    RecoveredCall_5fcd50_3(value_x0,value_x1,value_x2);
    const uint32_t field0 = RecoveredCall_5fcd50_7(value_x1,(value_x0 + 40));
    value_x19 = uint32_t(uint32_t(value_x2));
    value_x20 = value_x1;
    value_x21 = value_x0;
    value_x22 = (value_x0 + 40);
    if ((uint32_t(uint32_t(field0)) & 0x1ull) == 0) goto block_13;
    goto block_9;
}
block_9: {
    RecoveredCall_5fcd50_12(value_x22,value_x20,uint32_t(uint32_t(value_x19)));
    goto block_13;
}
block_13: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x21 + 32));
    value_x0 = field1;
    if (field1 == 0) goto block_18;
    goto block_15;
}
block_15: {

    return RecoveredCall_5fcd50_17(value_x0,value_x20,uint32_t(uint32_t(value_x19)));
}
block_18: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 32) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 32) + 8));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 16) + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 16) + 8));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 0) + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 0) + 8));
    return;
}
}

extern "C" void RecoveredCall_5fcdd0_3(uint64_t,uint64_t,uint32_t);
extern "C" uint32_t RecoveredCall_5fcdd0_7(uint64_t,uint64_t);
extern "C" void RecoveredCall_5fcdd0_12(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_5fcdd0_17(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5fcdd0(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    alignas(16) unsigned char stack_storage[40];
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint32_t value_x2 = arg2;
    uint64_t value_x20;
    uint64_t value_x21;
    uint64_t value_x22;
block_0: {
    RecoveredCall_5fcdd0_3(value_x0,value_x1,value_x2);
    const uint32_t field0 = RecoveredCall_5fcdd0_7(value_x1,(value_x0 + 40));
    value_x19 = uint32_t(uint32_t(value_x2));
    value_x20 = value_x1;
    value_x21 = value_x0;
    value_x22 = (value_x0 + 40);
    if ((uint32_t(uint32_t(field0)) & 0x1ull) == 0) goto block_13;
    goto block_9;
}
block_9: {
    RecoveredCall_5fcdd0_12(value_x22,value_x20,uint32_t(uint32_t(value_x19)));
    goto block_13;
}
block_13: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x21 + 32));
    value_x0 = field1;
    if (field1 == 0) goto block_18;
    goto block_15;
}
block_15: {

    return RecoveredCall_5fcdd0_17(value_x0,value_x20,uint32_t(uint32_t(value_x19)));
}
block_18: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 32) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 32) + 8));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 16) + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 16) + 8));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 0) + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 0) + 8));
    return;
}
}

extern "C" void RecoveredCall_5fce50_3(uint64_t,uint64_t,uint32_t);
extern "C" uint32_t RecoveredCall_5fce50_7(uint64_t,uint64_t);
extern "C" void RecoveredCall_5fce50_12(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_5fce50_17(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5fce50(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    alignas(16) unsigned char stack_storage[40];
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint32_t value_x2 = arg2;
    uint64_t value_x20;
    uint64_t value_x21;
    uint64_t value_x22;
block_0: {
    RecoveredCall_5fce50_3(value_x0,value_x1,value_x2);
    const uint32_t field0 = RecoveredCall_5fce50_7(value_x1,(value_x0 + 40));
    value_x19 = uint32_t(uint32_t(value_x2));
    value_x20 = value_x1;
    value_x21 = value_x0;
    value_x22 = (value_x0 + 40);
    if ((uint32_t(uint32_t(field0)) & 0x1ull) == 0) goto block_13;
    goto block_9;
}
block_9: {
    RecoveredCall_5fce50_12(value_x22,value_x20,uint32_t(uint32_t(value_x19)));
    goto block_13;
}
block_13: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x21 + 32));
    value_x0 = field1;
    if (field1 == 0) goto block_18;
    goto block_15;
}
block_15: {

    return RecoveredCall_5fce50_17(value_x0,value_x20,uint32_t(uint32_t(value_x19)));
}
block_18: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 32) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 32) + 8));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 16) + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 16) + 8));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 0) + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 0) + 8));
    return;
}
}

extern "C" void RecoveredCall_5fced0_3(uint64_t,uint64_t,uint32_t);
extern "C" uint32_t RecoveredCall_5fced0_7(uint64_t,uint64_t);
extern "C" void RecoveredCall_5fced0_12(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_5fced0_17(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5fced0(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    alignas(16) unsigned char stack_storage[40];
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint32_t value_x2 = arg2;
    uint64_t value_x20;
    uint64_t value_x21;
    uint64_t value_x22;
block_0: {
    RecoveredCall_5fced0_3(value_x0,value_x1,value_x2);
    const uint32_t field0 = RecoveredCall_5fced0_7(value_x1,(value_x0 + 40));
    value_x19 = uint32_t(uint32_t(value_x2));
    value_x20 = value_x1;
    value_x21 = value_x0;
    value_x22 = (value_x0 + 40);
    if ((uint32_t(uint32_t(field0)) & 0x1ull) == 0) goto block_13;
    goto block_9;
}
block_9: {
    RecoveredCall_5fced0_12(value_x22,value_x20,uint32_t(uint32_t(value_x19)));
    goto block_13;
}
block_13: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x21 + 32));
    value_x0 = field1;
    if (field1 == 0) goto block_18;
    goto block_15;
}
block_15: {

    return RecoveredCall_5fced0_17(value_x0,value_x20,uint32_t(uint32_t(value_x19)));
}
block_18: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 32) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 32) + 8));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 16) + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 16) + 8));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 0) + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 0) + 8));
    return;
}
}

extern "C" void RecoveredCall_7f8fb0_2(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7f8fb0(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {

    if ((uint32_t(value_x1) & 3) == 0) goto block_3;
    goto block_2;
}
block_2: {

    return RecoveredCall_7f8fb0_2(value_x0);
}
block_3: {

    return;
}
}

extern "C" void RecoveredCall_997030_7(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_997030(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {

    if ((uint32_t(value_x1) & 3) == 0) goto block_8;
    goto block_2;
}
block_2: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 5376));
    if (field0 == 0) goto block_8;
    goto block_4;
}
block_4: {
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x0 + uint32_t(5413)));
    if (uint32_t(uint32_t(field1)) == 0) goto block_8;
    goto block_7;
}
block_7: {

    return RecoveredCall_997030_7(value_x0);
}
block_8: {

    return;
}
}

extern "C" void RecoveredCall_e1f890_3(uint64_t,uint64_t,uint32_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_e1f890(uint64_t arg0,uint64_t arg1,uint32_t arg2,uint64_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
block_0: {

    return RecoveredCall_e1f890_3(value_x0,value_x1,uint32_t(((uint32_t(value_x2) == 1) ? 0 : uint32_t(value_x2))),value_x3,uint32_t(0));
}
}
