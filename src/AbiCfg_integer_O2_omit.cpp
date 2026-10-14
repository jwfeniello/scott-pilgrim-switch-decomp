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
extern "C" uint64_t RecoveredCall_6ca250_15(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_6ca250_22(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_6ca250_37(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_6ca250(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
    uint32_t value_x8;
block_0: {
    value_x19 = value_x1;
    value_x20 = value_x0;
    goto block_4;
}
block_3: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x20 + 32));
    value_x20 = field0;
    goto block_4;
}
block_4: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x20 + 0));
    value_x8 = uint32_t(field1);
    if (uint32_t(uint32_t(field1)) == 2) goto block_13;
    goto block_7;
}
block_7: {

    if (uint32_t(value_x8) == 1) goto block_18;
    goto block_9;
}
block_9: {

    if (uint32_t(value_x8) != 0) goto block_24;
    goto block_10;
}
block_10: {
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x20 + 8));
    *reinterpret_cast<uint8_t*>((value_x19 + 0)) = uint32_t(uint32_t(field2));
    value_x19 = (value_x19 + 1);
    goto block_24;
}
block_13: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x20 + 8));
    const uint64_t field4 = RecoveredCall_6ca250_15(field3,value_x19);
    value_x19 = field4;
    goto block_24;
}
block_18: {
    const int32_t field5 = *reinterpret_cast<const int32_t*>((value_x20 + 8));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x20 + 16));
    const uint64_t field7 = RecoveredCall_6ca250_22(value_x19,field6,field5);
    value_x19 = (value_x19 + field5);
    goto block_24;
}
block_24: {
    const uint32_t field8 = *reinterpret_cast<const uint32_t*>((value_x20 + 24));
    value_x8 = uint32_t(field8);
    if (uint32_t(uint32_t(field8)) == 2) goto block_3;
    goto block_27;
}
block_27: {

    if (uint32_t(value_x8) == 1) goto block_33;
    goto block_29;
}
block_29: {

    if (uint32_t(value_x8) != 0) goto block_39;
    goto block_30;
}
block_30: {
    const uint8_t field9 = *reinterpret_cast<const uint8_t*>((value_x20 + 32));
    *reinterpret_cast<uint8_t*>((value_x19 + 0)) = uint32_t(uint32_t(field9));
    value_x19 = (value_x19 + 1);
    goto block_39;
}
block_33: {
    const int32_t field10 = *reinterpret_cast<const int32_t*>((value_x20 + 32));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((value_x20 + 40));
    const uint64_t field12 = RecoveredCall_6ca250_37(value_x19,field11,field10);
    value_x19 = (value_x19 + field10);
    goto block_39;
}
block_39: {

    return value_x19;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_9c9170(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint64_t value_x2;
block_0: {

    if ((uint32_t(value_x1) & 3) == 0) goto block_10;
    goto block_2;
}
block_2: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((value_x0 + 120) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((value_x0 + 120) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 136));
    value_x0 = (field0 + (int64_t(field2) >> 1));
    value_x2 = field1;
    if ((uint32_t(field2) & 0x1ull) == 0) goto block_8;
    goto block_6;
}
block_6: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + value_x2));
    value_x2 = field4;
    goto block_8;
}
block_8: {
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(value_x2)(value_x0,uint32_t(10000),value_x2);
    __builtin_unreachable();
}
block_10: {

    return value_x0;
}
}

extern "C" uint64_t RecoveredCall_d7af50_2(uint64_t);
extern "C" uint64_t RecoveredCall_d7af50_9(uint64_t);
extern "C" uint64_t RecoveredCall_d7af50_13(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d7af50(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint32_t value_x8;
block_0: {
    const uint64_t field0 = RecoveredCall_d7af50_2((value_x0 + 16));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((field0 + 4));
    value_x19 = (value_x0 + 16);
    value_x8 = uint32_t(field1);
    if (uint32_t(uint32_t(field1)) == 6) goto block_12;
    goto block_6;
}
block_6: {

    if (uint32_t(value_x8) != 1) goto block_16;
    goto block_8;
}
block_8: {
    const uint64_t field2 = RecoveredCall_d7af50_9(value_x19);
    return (field2 + 116);
}
block_12: {
    const uint64_t field3 = RecoveredCall_d7af50_13(value_x19);
    return (field3 + 92);
}
block_16: {

    return 0;
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dac8e0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x8;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 24));
    value_x8 = uint32_t(field0);
    if (uint32_t(uint32_t(field0)) != 1) goto block_6;
    goto block_3;
}
block_3: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 104));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(value_x0,field2);
    __builtin_unreachable();
}
block_6: {

    return uint32_t((uint32_t(value_x8) != 3));
}
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dce8a0(uint64_t arg0,uint32_t arg1,uint64_t arg2,uint64_t arg3,uint32_t arg4,uint64_t arg5) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint64_t value_x3 = arg3;
    uint32_t value_x4 = arg4;
    uint64_t value_x5 = arg5;
    uint64_t value_x8;
block_0: {

    if (int32_t(uint32_t(value_x1)) < int32_t(1)) goto block_11;
    goto block_2;
}
block_2: {

    if (int32_t(uint32_t(value_x4)) < int32_t(uint32_t(value_x1))) goto block_11;
    goto block_4;
}
block_4: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>(((value_x0 + 16) + 0));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>(((value_x0 + 16) + 4));
    value_x8 = uint32_t((uint32_t(uint32_t(field0)) - uint32_t(uint32_t(field1))));
    if (int32_t(uint32_t(uint32_t((uint32_t(uint32_t(field0)) - uint32_t(uint32_t(field1)))))) >= int32_t(uint32_t(value_x1))) goto block_14;
    goto block_8;
}
block_8: {
    *reinterpret_cast<uint32_t*>((value_x5 + 0)) = uint32_t(value_x4);
    return value_x3;
}
block_11: {
    *reinterpret_cast<uint32_t*>((value_x5 + 0)) = 0;
    return 0;
}
block_14: {
    *reinterpret_cast<uint32_t*>((value_x5 + 0)) = uint32_t(value_x8);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    const int32_t field3 = *reinterpret_cast<const int32_t*>((value_x0 + 20));
    return (field2 + field3);
}
}

extern "C" unsigned char LeafData_dd7c10_0[];
extern "C" void RecoveredCall_dd7c10_5(uint64_t);
extern "C" void RecoveredCall_dd7c10_23(uint64_t);
extern "C" void RecoveredCall_dd7c10_27(uint64_t);
extern "C" void RecoveredCall_dd7c10_37(uint64_t);
extern "C" void RecoveredCall_dd7c10_55(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dd7c10(uint64_t arg0) {
    LEAF_CHECK
    alignas(16) unsigned char stack_storage[40];
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
    uint64_t value_x22;
    uint64_t value_x8;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dd7c10_0) - 3352) + 3352);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 96));
    RecoveredCall_dd7c10_5(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 80));
    value_x19 = value_x0;
    value_x21 = field1;
    if (field1 == 0) goto block_28;
    goto block_8;
}
block_8: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + -8));
    value_x20 = (value_x21 + -8);
    value_x8 = field2;
    if (field2 == 0) goto block_26;
    goto block_11;
}
block_11: {
    value_x22 = (value_x21 + (value_x8 * uint32_t(40)));
    goto block_13;
}
block_13: {
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x22 + -24));
    value_x22 = (value_x22 - 40);
    if (uint32_t(uint32_t(field3)) != 2) goto block_24;
    goto block_17;
}
block_17: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x22 + 0));
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field4 + 0)), 1, __ATOMIC_RELAXED);
    value_x0 = field4;
    if (uint32_t((field5 - 1)) != 0) goto block_24;
    goto block_23;
}
block_23: {
    RecoveredCall_dd7c10_23(value_x0);
    goto block_24;
}
block_24: {

    if (value_x22 != value_x21) goto block_13;
    goto block_26;
}
block_26: {
    RecoveredCall_dd7c10_27(value_x20);
    goto block_28;
}
block_28: {
    const uint32_t field6 = *reinterpret_cast<const uint32_t*>((value_x19 + 72));
    if (uint32_t(uint32_t(field6)) != 2) goto block_38;
    goto block_31;
}
block_31: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 56));
    const uint32_t field8 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field7 + 0)), 1, __ATOMIC_RELAXED);
    value_x0 = field7;
    if (uint32_t((field8 - 1)) != 0) goto block_38;
    goto block_37;
}
block_37: {
    RecoveredCall_dd7c10_37(value_x0);
    goto block_38;
}
block_38: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x19 + 24));
    *reinterpret_cast<uint64_t*>((value_x19 + 24)) = 0;
    value_x21 = field9;
    if (field9 == 0) goto block_57;
    goto block_41;
}
block_41: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field11;
    value_x20 = value_x21;
    value_x21 = field10;
    if (field11 == 0) goto block_54;
    goto block_45;
}
block_45: {
    const uint32_t field12 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field12 - 1)) != 0) goto block_54;
    goto block_51;
}
block_51: {
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 8));
    reinterpret_cast<void (*)(uint64_t)>(field14)(value_x0);
    goto block_54;
}
block_54: {
    RecoveredCall_dd7c10_55(value_x20);
    if (value_x21 != 0) goto block_41;
    goto block_57;
}
block_57: {
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field15;
    if (field15 == 0) goto block_69;
    goto block_60;
}
block_60: {
    const uint32_t field16 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field16 - 1)) != 0) goto block_69;
    goto block_66;
}
block_66: {
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 8));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field18)(value_x0,field18);
    __builtin_unreachable();
}
block_69: {
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 32) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 32) + 8));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 16) + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 16) + 8));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 0));
    return value_x0;
}
}

extern "C" unsigned char LeafData_ddc470_0[];
extern "C" void RecoveredCall_ddc470_5(uint64_t);
extern "C" void RecoveredCall_ddc470_23(uint64_t);
extern "C" void RecoveredCall_ddc470_27(uint64_t);
extern "C" void RecoveredCall_ddc470_37(uint64_t);
extern "C" void RecoveredCall_ddc470_55(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ddc470(uint64_t arg0) {
    LEAF_CHECK
    alignas(16) unsigned char stack_storage[40];
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
    uint64_t value_x22;
    uint64_t value_x8;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_ddc470_0) - 728) + 728);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 104));
    RecoveredCall_ddc470_5(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 88));
    value_x19 = value_x0;
    value_x21 = field1;
    if (field1 == 0) goto block_28;
    goto block_8;
}
block_8: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + -8));
    value_x20 = (value_x21 + -8);
    value_x8 = field2;
    if (field2 == 0) goto block_26;
    goto block_11;
}
block_11: {
    value_x22 = (value_x21 + (value_x8 * uint32_t(24)));
    goto block_13;
}
block_13: {
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x22 + -8));
    value_x22 = (value_x22 - 24);
    if (uint32_t(uint32_t(field3)) != 2) goto block_24;
    goto block_17;
}
block_17: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x22 + 0));
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field4 + 0)), 1, __ATOMIC_RELAXED);
    value_x0 = field4;
    if (uint32_t((field5 - 1)) != 0) goto block_24;
    goto block_23;
}
block_23: {
    RecoveredCall_ddc470_23(value_x0);
    goto block_24;
}
block_24: {

    if (value_x22 != value_x21) goto block_13;
    goto block_26;
}
block_26: {
    RecoveredCall_ddc470_27(value_x20);
    goto block_28;
}
block_28: {
    const uint32_t field6 = *reinterpret_cast<const uint32_t*>((value_x19 + 80));
    if (uint32_t(uint32_t(field6)) != 2) goto block_38;
    goto block_31;
}
block_31: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 64));
    const uint32_t field8 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field7 + 0)), 1, __ATOMIC_RELAXED);
    value_x0 = field7;
    if (uint32_t((field8 - 1)) != 0) goto block_38;
    goto block_37;
}
block_37: {
    RecoveredCall_ddc470_37(value_x0);
    goto block_38;
}
block_38: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x19 + 24));
    *reinterpret_cast<uint64_t*>((value_x19 + 24)) = 0;
    value_x21 = field9;
    if (field9 == 0) goto block_57;
    goto block_41;
}
block_41: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field11;
    value_x20 = value_x21;
    value_x21 = field10;
    if (field11 == 0) goto block_54;
    goto block_45;
}
block_45: {
    const uint32_t field12 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field12 - 1)) != 0) goto block_54;
    goto block_51;
}
block_51: {
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 8));
    reinterpret_cast<void (*)(uint64_t)>(field14)(value_x0);
    goto block_54;
}
block_54: {
    RecoveredCall_ddc470_55(value_x20);
    if (value_x21 != 0) goto block_41;
    goto block_57;
}
block_57: {
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field15;
    if (field15 == 0) goto block_69;
    goto block_60;
}
block_60: {
    const uint32_t field16 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field16 - 1)) != 0) goto block_69;
    goto block_66;
}
block_66: {
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 8));
    return reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field18)(value_x0,field18);
    __builtin_unreachable();
}
block_69: {
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 32) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 32) + 8));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 16) + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 16) + 8));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 0));
    return value_x0;
}
}

extern "C" void RecoveredCall_e82b40_8(uint64_t,uint64_t,uint32_t);
extern "C" uint64_t RecoveredCall_e82b40_12(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e82b40(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const ByteVector16 field0 = *reinterpret_cast<const ByteVector16*>(((value_x1 + 0) + 0));
    const ByteVector16 field1 = *reinterpret_cast<const ByteVector16*>(((value_x1 + 0) + 16));
    const ByteVector16 field2 = *reinterpret_cast<const ByteVector16*>((value_x1 + 32));
    *reinterpret_cast<ByteVector16*>((value_x0 + 24)) = field1;
    *reinterpret_cast<ByteVector16*>((value_x0 + 40)) = field2;
    *reinterpret_cast<ByteVector16*>((value_x0 + 8)) = field0;
    RecoveredCall_e82b40_8(value_x0,value_x1,uint32_t(0));
    return RecoveredCall_e82b40_12(value_x0,value_x1,uint32_t(1));
}
}

extern "C" void RecoveredCall_e87fd0_8(uint64_t,uint64_t,uint32_t);
extern "C" uint64_t RecoveredCall_e87fd0_12(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e87fd0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const ByteVector16 field0 = *reinterpret_cast<const ByteVector16*>(((value_x1 + 0) + 0));
    const ByteVector16 field1 = *reinterpret_cast<const ByteVector16*>(((value_x1 + 0) + 16));
    const ByteVector16 field2 = *reinterpret_cast<const ByteVector16*>((value_x1 + 32));
    *reinterpret_cast<ByteVector16*>((value_x0 + 24)) = field1;
    *reinterpret_cast<ByteVector16*>((value_x0 + 40)) = field2;
    *reinterpret_cast<ByteVector16*>((value_x0 + 8)) = field0;
    RecoveredCall_e87fd0_8(value_x0,value_x1,uint32_t(0));
    return RecoveredCall_e87fd0_12(value_x0,value_x1,uint32_t(1));
}
}

extern "C" void RecoveredCall_e89560_7(uint64_t,uint64_t,uint32_t);
extern "C" uint64_t RecoveredCall_e89560_11(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e89560(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    *reinterpret_cast<uint64_t*>((value_x0 + 8)) = field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 40));
    *reinterpret_cast<uint64_t*>((value_x0 + 48)) = field1;
    RecoveredCall_e89560_7(value_x0,value_x1,uint32_t(0));
    return RecoveredCall_e89560_11(value_x0,value_x1,uint32_t(1));
}
}
