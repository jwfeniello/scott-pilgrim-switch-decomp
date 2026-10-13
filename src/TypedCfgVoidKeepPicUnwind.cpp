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
extern "C" uint64_t RecoveredCall_caa10_6(uint32_t,uint32_t,uint32_t,uint32_t);
extern "C" void RecoveredCall_caa10_8(uint64_t);
extern "C" void RecoveredCall_caa10_69(uint64_t);
extern "C" void RecoveredCall_caa10_73(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_caa10(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
    uint64_t value_x22;
block_0: {
    const uint64_t field0 = RecoveredCall_caa10_6(uint32_t(40),uint32_t(4),uint32_t(0),uint32_t(1086324736));
    RecoveredCall_caa10_8(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 144));
    *reinterpret_cast<uint64_t*>((value_x1 + 144)) = field0;
    value_x19 = value_x0;
    value_x20 = value_x1;
    value_x21 = field1;
    value_x22 = field0;
    if (field1 == 0) goto block_71;
    goto block_12;
}
block_12: {
    const uint64_t field2 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((value_x21 + 32) + 0)), 0, __ATOMIC_ACQ_REL);
    value_x0 = field2;
    if (field2 == 0) goto block_26;
    goto block_17;
}
block_17: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (uint32_t((field3 - 1)) != 0) goto block_26;
    goto block_23;
}
block_23: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    reinterpret_cast<void (*)(uint64_t)>(field5)(value_x0);
    goto block_26;
}
block_26: {
    const uint64_t field6 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((value_x21 + 24) + 0)), 0, __ATOMIC_ACQ_REL);
    value_x0 = field6;
    if (field6 == 0) goto block_40;
    goto block_31;
}
block_31: {
    const uint32_t field7 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (uint32_t((field7 - 1)) != 0) goto block_40;
    goto block_37;
}
block_37: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 16));
    reinterpret_cast<void (*)(uint64_t)>(field9)(value_x0);
    goto block_40;
}
block_40: {
    const uint64_t field10 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((value_x21 + 16) + 0)), 0, __ATOMIC_ACQ_REL);
    value_x0 = field10;
    if (field10 == 0) goto block_54;
    goto block_45;
}
block_45: {
    const uint32_t field11 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (uint32_t((field11 - 1)) != 0) goto block_54;
    goto block_51;
}
block_51: {
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 16));
    reinterpret_cast<void (*)(uint64_t)>(field13)(value_x0);
    goto block_54;
}
block_54: {
    const uint64_t field14 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((value_x21 + 8) + 0)), 0, __ATOMIC_ACQ_REL);
    value_x0 = field14;
    if (field14 == 0) goto block_68;
    goto block_59;
}
block_59: {
    const uint32_t field15 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (uint32_t((field15 - 1)) != 0) goto block_68;
    goto block_65;
}
block_65: {
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 16));
    reinterpret_cast<void (*)(uint64_t)>(field17)(value_x0);
    goto block_68;
}
block_68: {
    RecoveredCall_caa10_69(value_x21);
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((value_x20 + 144));
    value_x22 = field18;
    goto block_71;
}
block_71: {

    return RecoveredCall_caa10_73(value_x19,value_x22);
}
}

extern "C" void RecoveredCall_25ce40_3(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_25ce40_8(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_25ce40(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x19;
    uint32_t value_x2 = arg2;
    uint64_t value_x20;
block_0: {
    RecoveredCall_25ce40_3(value_x0,value_x1,value_x2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    value_x0 = field0;
    value_x19 = uint32_t(uint32_t(value_x2));
    value_x20 = value_x1;
    if (field0 == 0) goto block_9;
    goto block_6;
}
block_6: {

    return RecoveredCall_25ce40_8(value_x0,value_x20,uint32_t(uint32_t(value_x19)));
}
block_9: {

    return;
}
}

extern "C" void RecoveredCall_25cfa0_3(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_25cfa0_8(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_25cfa0(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x19;
    uint32_t value_x2 = arg2;
    uint64_t value_x20;
block_0: {
    RecoveredCall_25cfa0_3(value_x0,value_x1,value_x2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    value_x0 = field0;
    value_x19 = uint32_t(uint32_t(value_x2));
    value_x20 = value_x1;
    if (field0 == 0) goto block_9;
    goto block_6;
}
block_6: {

    return RecoveredCall_25cfa0_8(value_x0,value_x20,uint32_t(uint32_t(value_x19)));
}
block_9: {

    return;
}
}

extern "C" void RecoveredCall_25dad0_3(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_25dad0_8(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_25dad0(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x19;
    uint32_t value_x2 = arg2;
    uint64_t value_x20;
block_0: {
    RecoveredCall_25dad0_3(value_x0,value_x1,value_x2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    value_x0 = field0;
    value_x19 = uint32_t(uint32_t(value_x2));
    value_x20 = value_x1;
    if (field0 == 0) goto block_9;
    goto block_6;
}
block_6: {

    return RecoveredCall_25dad0_8(value_x0,value_x20,uint32_t(uint32_t(value_x19)));
}
block_9: {

    return;
}
}

extern "C" uint64_t RecoveredCall_25e1d0_1();
extern "C" void RecoveredCall_25e1d0_4(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_25e1d0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = RecoveredCall_25e1d0_1();
    return RecoveredCall_25e1d0_4(value_x0,field0);
}
}

extern "C" uint64_t RecoveredCall_267c60_1();
extern "C" void RecoveredCall_267c60_4(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_267c60(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = RecoveredCall_267c60_1();
    return RecoveredCall_267c60_4(value_x0,field0);
}
}

extern "C" void RecoveredCall_26db80_3(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_26db80_8(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_26db80(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x19;
    uint32_t value_x2 = arg2;
    uint64_t value_x20;
block_0: {
    RecoveredCall_26db80_3(value_x0,value_x1,value_x2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    value_x0 = field0;
    value_x19 = uint32_t(uint32_t(value_x2));
    value_x20 = value_x1;
    if (field0 == 0) goto block_9;
    goto block_6;
}
block_6: {

    return RecoveredCall_26db80_8(value_x0,value_x20,uint32_t(uint32_t(value_x19)));
}
block_9: {

    return;
}
}

extern "C" void RecoveredCall_28d5d0_3(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_28d5d0_8(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_28d5d0(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x19;
    uint32_t value_x2 = arg2;
    uint64_t value_x20;
block_0: {
    RecoveredCall_28d5d0_3(value_x0,value_x1,value_x2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    value_x0 = field0;
    value_x19 = uint32_t(uint32_t(value_x2));
    value_x20 = value_x1;
    if (field0 == 0) goto block_9;
    goto block_6;
}
block_6: {

    return RecoveredCall_28d5d0_8(value_x0,value_x20,uint32_t(uint32_t(value_x19)));
}
block_9: {

    return;
}
}

extern "C" void RecoveredCall_2be950_3(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_2be950_8(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_2be950(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x19;
    uint32_t value_x2 = arg2;
    uint64_t value_x20;
block_0: {
    RecoveredCall_2be950_3(value_x0,value_x1,value_x2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 56));
    value_x0 = field0;
    value_x19 = uint32_t(uint32_t(value_x2));
    value_x20 = value_x1;
    if (field0 == 0) goto block_9;
    goto block_6;
}
block_6: {

    return RecoveredCall_2be950_8(value_x0,value_x20,uint32_t(uint32_t(value_x19)));
}
block_9: {

    return;
}
}

extern "C" uint64_t RecoveredCall_2c1380_1();
extern "C" void RecoveredCall_2c1380_4(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_2c1380(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = RecoveredCall_2c1380_1();
    return RecoveredCall_2c1380_4(value_x0,field0);
}
}

extern "C" void RecoveredCall_2f6910_3(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_2f6910_8(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_2f6910(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x19;
    uint32_t value_x2 = arg2;
    uint64_t value_x20;
block_0: {
    RecoveredCall_2f6910_3(value_x0,value_x1,value_x2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 56));
    value_x0 = field0;
    value_x19 = uint32_t(uint32_t(value_x2));
    value_x20 = value_x1;
    if (field0 == 0) goto block_9;
    goto block_6;
}
block_6: {

    return RecoveredCall_2f6910_8(value_x0,value_x20,uint32_t(uint32_t(value_x19)));
}
block_9: {

    return;
}
}

extern "C" void RecoveredCall_329ec0_3(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_329ec0_8(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_329ec0(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x19;
    uint32_t value_x2 = arg2;
    uint64_t value_x20;
block_0: {
    RecoveredCall_329ec0_3(value_x0,value_x1,value_x2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 56));
    value_x0 = field0;
    value_x19 = uint32_t(uint32_t(value_x2));
    value_x20 = value_x1;
    if (field0 == 0) goto block_9;
    goto block_6;
}
block_6: {

    return RecoveredCall_329ec0_8(value_x0,value_x20,uint32_t(uint32_t(value_x19)));
}
block_9: {

    return;
}
}

extern "C" void RecoveredCall_340f60_3(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_340f60_8(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_340f60(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x19;
    uint32_t value_x2 = arg2;
    uint64_t value_x20;
block_0: {
    RecoveredCall_340f60_3(value_x0,value_x1,value_x2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 144));
    value_x0 = field0;
    value_x19 = uint32_t(uint32_t(value_x2));
    value_x20 = value_x1;
    if (field0 == 0) goto block_9;
    goto block_6;
}
block_6: {

    return RecoveredCall_340f60_8(value_x0,value_x20,uint32_t(uint32_t(value_x19)));
}
block_9: {

    return;
}
}

extern "C" void RecoveredCall_3f40d0_1(uint64_t);
extern "C" void RecoveredCall_3f40d0_10(uint64_t,uint32_t,uint32_t);
extern "C" void RecoveredCall_3f40d0_13(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_3f40d0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    RecoveredCall_3f40d0_1(value_x0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 216));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    reinterpret_cast<void (*)(uint64_t)>(field1)((value_x0 + 216));
    RecoveredCall_3f40d0_10((value_x0 + 216),uint32_t(32),uint32_t(0));
    *reinterpret_cast<uint8_t*>((value_x0 + 320)) = 0;
    return RecoveredCall_3f40d0_13(value_x0);
}
}

extern "C" void RecoveredCall_473440_19();
extern "C" __attribute__((noinline)) void RecoveredLeaf_473440(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((value_x0 + 448) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((value_x0 + 448) + 8));
    value_x19 = value_x0;
    value_x8 = field0;
    if (field0 == field1) goto block_10;
    goto block_4;
}
block_4: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x8 + 80));
    value_x0 = field2;
    if (field2 == 0) goto block_19;
    goto block_6;
}
block_6: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 48));
    reinterpret_cast<void (*)(uint64_t,uint64_t)>(field4)(value_x0,value_x19);
    goto block_10;
}
block_10: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x19 + 160));
    value_x0 = field5;
    if (field5 == 0) goto block_19;
    goto block_12;
}
block_12: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 48));
    reinterpret_cast<void (*)(uint64_t,uint64_t)>(field7)(value_x0,value_x19);
    *reinterpret_cast<uint8_t*>((value_x19 + 70)) = uint32_t(uint32_t(1));
    return;
}
block_19: {
    RecoveredCall_473440_19();
    __builtin_unreachable();
}
}

extern "C" void RecoveredCall_4734b0_19();
extern "C" __attribute__((noinline)) void RecoveredLeaf_4734b0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((value_x0 + 448) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((value_x0 + 448) + 8));
    value_x19 = value_x0;
    value_x8 = field0;
    if (field0 == field1) goto block_10;
    goto block_4;
}
block_4: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x8 + 128));
    value_x0 = field2;
    if (field2 == 0) goto block_19;
    goto block_6;
}
block_6: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 48));
    reinterpret_cast<void (*)(uint64_t,uint64_t)>(field4)(value_x0,value_x19);
    goto block_10;
}
block_10: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x19 + 208));
    value_x0 = field5;
    if (field5 == 0) goto block_19;
    goto block_12;
}
block_12: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 48));
    reinterpret_cast<void (*)(uint64_t,uint64_t)>(field7)(value_x0,value_x19);
    *reinterpret_cast<uint8_t*>((value_x19 + 71)) = uint32_t(uint32_t(1));
    return;
}
block_19: {
    RecoveredCall_4734b0_19();
    __builtin_unreachable();
}
}

extern "C" uint64_t RecoveredCall_4eb3d0_5(uint32_t,uint32_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4eb3d0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = RecoveredCall_4eb3d0_5(uint32_t(5),uint32_t(4),uint32_t(0),uint32_t(1095761920));
    *reinterpret_cast<uint32_t*>((field0 + 0)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = (field0 + 4);
    *reinterpret_cast<uint8_t*>(((field0 + 4) + 0)) = 0;
    return;
}
}

extern "C" void RecoveredCall_4eba10_5(uint64_t);
extern "C" uint64_t RecoveredCall_4eba10_10(uint32_t,uint32_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4eba10(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint64_t value_x19;
    uint32_t value_x20;
    uint64_t value_x8;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    value_x19 = value_x0;
    value_x20 = uint32_t(uint32_t(value_x1));
    value_x8 = field0;
    if (field0 == 0) goto block_6;
    goto block_4;
}
block_4: {
    RecoveredCall_4eba10_5((value_x8 - 4));
    goto block_6;
}
block_6: {
    const uint64_t field1 = RecoveredCall_4eba10_10(uint32_t((uint32_t(value_x20) + 4)),uint32_t(4),uint32_t(0),uint32_t(1095761920));
    *reinterpret_cast<uint32_t*>((field1 + 0)) = uint32_t(value_x20);
    *reinterpret_cast<uint64_t*>((value_x19 + 0)) = (field1 + 4);
    *reinterpret_cast<uint8_t*>(((field1 + 4) + 0)) = 0;
    return;
}
}

extern "C" void RecoveredCall_4ee1b0_3(uint64_t);
extern "C" void RecoveredCall_4ee1b0_6(uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4ee1b0(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
block_0: {
    RecoveredCall_4ee1b0_3((value_x0 + 8));
    return RecoveredCall_4ee1b0_6((value_x0 + 16),uint32_t(uint32_t(uint32_t(uint32_t(value_x1)))));
}
}

extern "C" uint64_t RecoveredCall_4f4700_3();
extern "C" __attribute__((noinline)) void RecoveredLeaf_4f4700(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint32_t value_x8;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 8));
    value_x19 = value_x0;
    value_x8 = uint32_t(field0);
    if (uint32_t(uint32_t(field0)) != 0) goto block_6;
    goto block_3;
}
block_3: {
    const uint64_t field1 = RecoveredCall_4f4700_3();
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x19 + 8));
    *reinterpret_cast<uint64_t*>((value_x19 + 16)) = field1;
    value_x8 = uint32_t(field2);
    goto block_6;
}
block_6: {
    *reinterpret_cast<uint32_t*>((value_x19 + 8)) = uint32_t(uint32_t((uint32_t(value_x8) + 1)));
    return;
}
}

extern "C" void RecoveredCall_4f9460_5(uint64_t);
extern "C" void RecoveredCall_4f9460_8(uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4f9460(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint64_t value_x19;
    uint32_t value_x20;
block_0: {
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 96));
    value_x19 = value_x0;
    value_x20 = uint32_t(uint32_t(value_x1));
    if (uint32_t(uint32_t(field0)) != 0) goto block_6;
    goto block_4;
}
block_4: {
    RecoveredCall_4f9460_5(value_x19);
    goto block_6;
}
block_6: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    RecoveredCall_4f9460_8(field1,uint32_t(uint32_t(value_x20)));
    *reinterpret_cast<uint8_t*>((value_x19 + 97)) = 0;
    return;
}
}

extern "C" void RecoveredCall_50e230_5(uint64_t);
extern "C" void RecoveredCall_50e230_7(uint64_t);
extern "C" void RecoveredCall_50e230_10(uint64_t);
extern "C" void RecoveredCall_50e230_16(uint64_t);
extern "C" void RecoveredCall_50e230_18(uint64_t);
extern "C" void RecoveredCall_50e230_20(uint64_t);
extern "C" void RecoveredCall_50e230_22(uint64_t);
extern "C" uint32_t RecoveredCall_50e230_26(uint64_t,uint32_t);
extern "C" void RecoveredCall_50e230_29(uint64_t);
extern "C" void RecoveredCall_50e230_31(uint64_t);
extern "C" void RecoveredCall_50e230_33(uint64_t);
extern "C" void RecoveredCall_50e230_35(uint64_t);
extern "C" uint32_t RecoveredCall_50e230_38(uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_50e230(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 3688));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 3696));
    if (field0 == field1) goto block_40;
    goto block_4;
}
block_4: {
    RecoveredCall_50e230_5(value_x0);
    RecoveredCall_50e230_7(value_x0);
    RecoveredCall_50e230_10((value_x0 + 2448));
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x0 + 2424));
    value_x19 = value_x0;
    value_x20 = (value_x0 + 2448);
    if (uint32_t(uint32_t(field2)) != 0) goto block_15;
    goto block_13;
}
block_13: {
    const uint8_t field3 = *reinterpret_cast<const uint8_t*>((value_x19 + 2392));
    if (uint32_t(uint32_t(field3)) == 0) goto block_23;
    goto block_15;
}
block_15: {
    RecoveredCall_50e230_16(value_x19);
    RecoveredCall_50e230_18(value_x19);
    RecoveredCall_50e230_20(value_x19);
    RecoveredCall_50e230_22(value_x20);
    goto block_23;
}
block_23: {
    const uint32_t field4 = RecoveredCall_50e230_26((value_x19 + 3712),uint32_t(0));
    value_x21 = (value_x19 + 3712);
    if ((uint32_t(uint32_t(field4)) & 0x1ull) == 0) goto block_40;
    goto block_28;
}
block_28: {
    RecoveredCall_50e230_29(value_x19);
    RecoveredCall_50e230_31(value_x19);
    RecoveredCall_50e230_33(value_x19);
    RecoveredCall_50e230_35(value_x20);
    const uint32_t field5 = RecoveredCall_50e230_38(value_x21,uint32_t(0));
    if ((uint32_t(uint32_t(field5)) & 0x1ull) != 0) goto block_28;
    goto block_40;
}
block_40: {

    return;
}
}

extern "C" void RecoveredCall_50eb70_3(uint64_t,uint32_t,uint64_t);
extern "C" void RecoveredCall_50eb70_6(uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_50eb70(uint64_t arg0,uint32_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
block_0: {
    RecoveredCall_50eb70_3((value_x0 + 24),value_x1,value_x2);
    return RecoveredCall_50eb70_6((value_x0 + 136),uint32_t(uint32_t(uint32_t(uint32_t(value_x1)))));
}
}

extern "C" void RecoveredCall_50f720_4(uint64_t,uint32_t);
extern "C" void RecoveredCall_50f720_6(uint64_t);
extern "C" void RecoveredCall_50f720_9(uint64_t,uint64_t);
extern "C" void RecoveredCall_50f720_12(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_50f720_18(uint64_t);
extern "C" uint64_t RecoveredCall_50f720_21(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_50f720(uint64_t arg0,uint64_t arg1,uint32_t arg2,uint64_t arg3) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x2 = arg2;
    uint64_t value_x3 = arg3;
block_0: {
    RecoveredCall_50f720_4(value_x0,uint32_t(uint32_t(value_x2)));
    RecoveredCall_50f720_6((value_x0 + 188));
    RecoveredCall_50f720_9((value_x0 + 320),(value_x3 + 2384));
    RecoveredCall_50f720_12((value_x0 + 416),(value_x3 + 2416));
    *reinterpret_cast<uint16_t*>((value_x0 + 184)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 176)) = value_x1;
    *reinterpret_cast<uint32_t*>((value_x0 + 316)) = uint32_t(uint32_t(1));
    const uint64_t field0 = RecoveredCall_50f720_18(value_x1);
    *reinterpret_cast<uint64_t*>((value_x0 + 168)) = field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 176));
    const uint64_t field2 = RecoveredCall_50f720_21(field1);
    *reinterpret_cast<uint64_t*>((value_x0 + 160)) = field2;
    return;
}
}

extern "C" uint64_t RecoveredCall_51d900_10(uint32_t,uint32_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_51d900(uint64_t arg0,uint32_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint32_t value_x1 = arg1;
    uint32_t value_x20;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 8)) = uint32_t(uint32_t((uint32_t(value_x1) + (uint32_t(value_x1) << 1))));
    value_x20 = uint32_t((uint32_t(value_x1) + (uint32_t(value_x1) << 1)));
    if (int32_t(uint32_t(value_x1)) < int32_t(1)) goto block_13;
    goto block_5;
}
block_5: {
    const uint64_t field0 = RecoveredCall_51d900_10(uint32_t((uint32_t(value_x20) + 4)),uint32_t(4),uint32_t(0),uint32_t(1095761920));
    *reinterpret_cast<uint32_t*>((field0 + 0)) = uint32_t(value_x20);
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = (field0 + 4);
    goto block_13;
}
block_13: {

    return;
}
}

extern "C" void RecoveredCall_52acb0_3(uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_52acb0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    RecoveredCall_52acb0_3((value_x0 + 8),uint32_t(0));
    *reinterpret_cast<uint64_t*>((value_x0 + 48)) = 0;
    *reinterpret_cast<uint64_t*>((((value_x0 + 48) + 8) + 0)) = 0;
    *reinterpret_cast<uint64_t*>((((value_x0 + 48) + 8) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 48) + -8)) = (value_x0 + 48);
    return;
}
}

extern "C" uint64_t RecoveredCall_54c820_12(uint32_t,uint32_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_54c820(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    *reinterpret_cast<uint64_t*>(((value_x0 + 128) + 0)) = value_x0;
    *reinterpret_cast<uint64_t*>(((value_x0 + 128) + 8)) = uint32_t(128);
    *reinterpret_cast<uint64_t*>((value_x0 + 144)) = 0;
    value_x19 = value_x1;
    value_x20 = value_x0;
    if (value_x1 < 129) goto block_14;
    goto block_7;
}
block_7: {
    const uint64_t field0 = RecoveredCall_54c820_12(uint32_t(uint32_t(value_x19)),uint32_t(16),uint32_t(0),uint32_t(((uint32_t(uint32_t(8192)) & 0xffffull) | (16672ull << 16))));
    *reinterpret_cast<uint64_t*>(((value_x20 + 128) + 0)) = field0;
    *reinterpret_cast<uint64_t*>(((value_x20 + 128) + 8)) = value_x19;
    goto block_14;
}
block_14: {
    *reinterpret_cast<uint64_t*>((value_x20 + 144)) = value_x19;
    return;
}
}

extern "C" void RecoveredCall_54c880_9(uint64_t);
extern "C" uint64_t RecoveredCall_54c880_15(uint32_t,uint32_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_54c880(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 136));
    value_x19 = value_x1;
    value_x20 = value_x0;
    if (field0 >= value_x1) goto block_17;
    goto block_5;
}
block_5: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x20 + 128));
    value_x0 = field1;
    if (field1 == value_x20) goto block_10;
    goto block_8;
}
block_8: {

    if (value_x0 == 0) goto block_10;
    goto block_9;
}
block_9: {
    RecoveredCall_54c880_9(value_x0);
    goto block_10;
}
block_10: {
    const uint64_t field2 = RecoveredCall_54c880_15(uint32_t(uint32_t(value_x19)),uint32_t(16),uint32_t(0),uint32_t(((uint32_t(uint32_t(8192)) & 0xffffull) | (16672ull << 16))));
    *reinterpret_cast<uint64_t*>(((value_x20 + 128) + 0)) = field2;
    *reinterpret_cast<uint64_t*>(((value_x20 + 128) + 8)) = value_x19;
    goto block_17;
}
block_17: {
    *reinterpret_cast<uint64_t*>((value_x20 + 144)) = value_x19;
    return;
}
}

extern "C" uint64_t RecoveredCall_57eef0_6(uint32_t,uint32_t,uint32_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_57eef0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = RecoveredCall_57eef0_6(uint32_t(32),uint32_t(8),uint32_t(0),uint32_t(((uint32_t(uint32_t(8192)) & 0xffffull) | (16672ull << 16))));
    *reinterpret_cast<uint64_t*>(((field0 + 16) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((field0 + 16) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((field0 + 0) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((field0 + 0) + 8)) = 0;
    *reinterpret_cast<uint16_t*>((field0 + 0)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint8_t*>((field0 + 2)) = 0;
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = field0;
    return;
}
}

extern "C" uint64_t RecoveredCall_57efa0_6(uint32_t,uint32_t,uint32_t,uint32_t);
extern "C" void RecoveredCall_57efa0_10();
extern "C" __attribute__((noinline)) void RecoveredLeaf_57efa0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = RecoveredCall_57efa0_6(uint32_t(32),uint32_t(8),uint32_t(0),uint32_t(((uint32_t(uint32_t(8192)) & 0xffffull) | (16672ull << 16))));
    *reinterpret_cast<uint64_t*>(((field0 + 16) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((field0 + 16) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((field0 + 0) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((field0 + 0) + 8)) = 0;
    RecoveredCall_57efa0_10();
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = field0;
    return;
}
}

extern "C" uint64_t RecoveredCall_5937b0_1();
extern "C" void RecoveredCall_5937b0_4(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5937b0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = RecoveredCall_5937b0_1();
    return RecoveredCall_5937b0_4(value_x0,field0);
}
}

extern "C" void RecoveredCall_594c30_8(uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_594c30(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 136));
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((field1 + 32));
    reinterpret_cast<void (*)(uint64_t,uint64_t)>(field2)(value_x0,field1);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    return RecoveredCall_594c30_8(field4,uint32_t(uint32_t(uint32_t(field3))));
}
}

extern "C" void RecoveredCall_596b30_8(uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_596b30(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 136));
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((field1 + 32));
    reinterpret_cast<void (*)(uint64_t,uint64_t)>(field2)(value_x0,field1);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    return RecoveredCall_596b30_8(field4,uint32_t(uint32_t(uint32_t(field3))));
}
}

extern "C" void RecoveredCall_5b7670_16(uint64_t,uint32_t);
extern "C" void RecoveredCall_5b7670_23(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5b7670(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((field0 + 32));
    *reinterpret_cast<uint32_t*>((value_x0 + 364)) = uint32_t(uint32_t(field1));
    *reinterpret_cast<uint32_t*>((value_x0 + 360)) = uint32_t(uint32_t((((uint32_t(uint32_t(field1)) & 7) == 0) ? 0 : uint32_t(uint32_t((uint32_t(uint32_t(8)) - uint32_t(uint32_t((uint32_t(uint32_t(field1)) & 7)))))))));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((field0 + 32));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field2 + 136));
    reinterpret_cast<void (*)(uint64_t,uint64_t)>(field4)(value_x0,field0);
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    RecoveredCall_5b7670_16(field5,uint32_t(uint32_t(uint32_t(field3))));
    const uint32_t field6 = *reinterpret_cast<const uint32_t*>((value_x0 + 52));
    value_x19 = value_x0;
    if (uint32_t(uint32_t((uint32_t(uint32_t(field6)) & 4294967294))) != 2) goto block_24;
    goto block_21;
}
block_21: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 328));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x19 + 16));
    return RecoveredCall_5b7670_23(field7,field8);
}
block_24: {

    return;
}
}

extern "C" uint64_t RecoveredCall_5b8080_1();
extern "C" void RecoveredCall_5b8080_4(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5b8080(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
block_0: {
    const uint64_t field0 = RecoveredCall_5b8080_1();
    return RecoveredCall_5b8080_4(value_x0,field0);
}
}

extern "C" void RecoveredCall_5fcd00_3(uint64_t,uint64_t,uint32_t);
extern "C" void RecoveredCall_5fcd00_8(uint64_t,uint64_t,uint32_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5fcd00(uint64_t arg0,uint64_t arg1,uint32_t arg2) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint32_t value_x19;
    uint32_t value_x2 = arg2;
    uint64_t value_x20;
block_0: {
    RecoveredCall_5fcd00_3(value_x0,value_x1,value_x2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    value_x0 = field0;
    value_x19 = uint32_t(uint32_t(value_x2));
    value_x20 = value_x1;
    if (field0 == 0) goto block_9;
    goto block_6;
}
block_6: {

    return RecoveredCall_5fcd00_8(value_x0,value_x20,uint32_t(uint32_t(value_x19)));
}
block_9: {

    return;
}
}
