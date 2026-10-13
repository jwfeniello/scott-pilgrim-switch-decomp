// Recovered field operations and forwarding ABI views. Original complete signatures remain unknown.
#include <stdint.h>
typedef unsigned char ByteVector16 __attribute__((vector_size(16),aligned(1)));
typedef unsigned char ByteVector8 __attribute__((vector_size(8),aligned(1)));
#ifdef LEAF_NEGATIVE_CONTROL
extern "C" void LeafAddedSideEffect();
#define LEAF_CHECK LeafAddedSideEffect();
#else
#define LEAF_CHECK
#endif
struct RecoveredOutput_26b260 {alignas(8) unsigned char storage[24];};
extern "C" uint64_t RecoveredCall_26b260_0(uint64_t);
extern "C" RecoveredOutput_26b260 LeafTarget_26b260_9(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) RecoveredOutput_26b260 RecoveredLeaf_26b260(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    RecoveredOutput_26b260 output;
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2 = arg2;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&output);
block_0: {
    const uint64_t result0 = RecoveredCall_26b260_0(value_x0);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 0));
    return LeafTarget_26b260_9(result0,uint32_t(field0),value_x1,value_x2);
}
}

struct RecoveredOutput_3be500 {alignas(8) unsigned char storage[24];};
extern "C" uint64_t RecoveredCall_3be500_0(uint64_t);
extern "C" __attribute__((noinline)) RecoveredOutput_3be500 RecoveredLeaf_3be500(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3be500 output;
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&output);
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 184));
    value_x19 = value_x8;
    value_x20 = field0;
    if (field0 == 0) goto block_14;
    goto block_3;
}
block_3: {
    value_x21 = uint32_t(56);
    goto block_4;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x20 + 24));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 712));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field1 + 704));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((field3 + (field2 * value_x21)) + 8));
    value_x0 = field1;
    if (field4 == 11) goto block_12;
    goto block_11;
}
block_11: {
    const uint64_t result0 = RecoveredCall_3be500_0(value_x0);
    goto block_12;
}
block_12: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    value_x20 = field5;
    if (field5 != 0) goto block_4;
    goto block_14;
}
block_14: {
    *reinterpret_cast<uint64_t*>((value_x19 + 0)) = uint32_t(1);
    return output;
}
}

struct RecoveredOutput_43be10 {alignas(8) unsigned char storage[24];};
extern "C" __attribute__((noinline)) RecoveredOutput_43be10 RecoveredLeaf_43be10(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    RecoveredOutput_43be10 output;
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x2 = arg2;
    uint64_t value_x20;
    uint64_t value_x21;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&output);
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x0 + 44));
    value_x19 = value_x8;
    value_x20 = value_x2;
    value_x21 = value_x0;
    if (uint32_t(uint32_t(field3)) == 0) goto block_19;
    goto block_9;
}
block_9: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((value_x21 + 40));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>(((value_x21 + 8) + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((value_x21 + 8) + 8));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x21 + 24));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field4 + 176));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t)>(field9)(value_x20,field6,uint32_t(field5),field7,field8);
    goto block_16;
}
block_16: {
    *reinterpret_cast<uint64_t*>((value_x19 + 0)) = uint32_t(1);
    return output;
}
block_19: {
    const uint8_t field10 = *reinterpret_cast<const uint8_t*>((value_x20 + 80));
    if (uint32_t(uint32_t(field10)) == 0) goto block_9;
    goto block_21;
}
block_21: {
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((value_x20 + 72));
    const uint8_t field12 = *reinterpret_cast<const uint8_t*>((field11 + 24));
    if (uint32_t(uint32_t(field12)) == 12) goto block_9;
    goto block_25;
}
block_25: {
    const uint8_t field13 = *reinterpret_cast<const uint8_t*>((value_x20 + 82));
    if (uint32_t(uint32_t(field13)) != 0) goto block_9;
    goto block_27;
}
block_27: {

    goto block_16;
}
}

struct RecoveredOutput_499bd0 {alignas(8) unsigned char storage[24];};
extern "C" uint64_t RecoveredCall_499bd0_1(uint64_t);
extern "C" uint64_t RecoveredCall_499bd0_3(uint64_t);
extern "C" uint64_t RecoveredCall_499bd0_5(uint64_t);
extern "C" uint64_t RecoveredCall_499bd0_7(uint64_t);
extern "C" __attribute__((noinline)) RecoveredOutput_499bd0 RecoveredLeaf_499bd0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4) {
    LEAF_CHECK
    RecoveredOutput_499bd0 output;
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x2 = arg2;
    uint64_t value_x20;
    uint64_t value_x21;
    uint64_t value_x22;
    uint64_t value_x23;
    uint64_t value_x24;
    uint64_t value_x3 = arg3;
    uint64_t value_x4 = arg4;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&output);
    uint64_t value_x9;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 1352));
    value_x19 = value_x8;
    value_x8 = uint32_t(((uint32_t(uint32_t(48576)) & 0xffffull) | (65520ull << 16)));
    if (uint32_t(uint32_t(field0)) != 2) goto block_109;
    goto block_6;
}
block_6: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    value_x9 = field1;
    if (field1 == 0) goto block_108;
    goto block_8;
}
block_8: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 1360));
    value_x20 = value_x0;
    if (field2 != 0) goto block_109;
    goto block_11;
}
block_11: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    value_x21 = value_x4;
    value_x22 = value_x3;
    value_x23 = value_x2;
    value_x8 = field3;
    if (field3 == 0) goto block_21;
    goto block_16;
}
block_16: {
    const uint64_t field4 = __atomic_fetch_add(reinterpret_cast<uint64_t*>(((value_x8 + 8) + 0)), 1, __ATOMIC_RELAXED);
    goto block_21;
}
block_21: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x20 + 1368));
    *reinterpret_cast<uint64_t*>((value_x20 + 1360)) = value_x9;
    *reinterpret_cast<uint64_t*>((value_x20 + 1368)) = value_x8;
    value_x24 = field5;
    if (field5 == 0) goto block_37;
    goto block_25;
}
block_25: {
    const uint64_t field6 = __atomic_fetch_sub(reinterpret_cast<uint64_t*>(((value_x24 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (field6 != 0) goto block_37;
    goto block_31;
}
block_31: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x24 + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field8)(value_x24);
    const uint64_t result1 = RecoveredCall_499bd0_1(value_x24);
    goto block_37;
}
block_37: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>(((value_x23 + 0) + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>(((value_x23 + 0) + 8));
    value_x8 = field10;
    value_x9 = field9;
    if (field10 == 0) goto block_44;
    goto block_39;
}
block_39: {
    const uint64_t field11 = __atomic_fetch_add(reinterpret_cast<uint64_t*>(((value_x8 + 8) + 0)), 1, __ATOMIC_RELAXED);
    goto block_44;
}
block_44: {
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((value_x20 + 1384));
    *reinterpret_cast<uint64_t*>((value_x20 + 1376)) = value_x9;
    *reinterpret_cast<uint64_t*>((value_x20 + 1384)) = value_x8;
    value_x23 = field12;
    if (field12 == 0) goto block_60;
    goto block_48;
}
block_48: {
    const uint64_t field13 = __atomic_fetch_sub(reinterpret_cast<uint64_t*>(((value_x23 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (field13 != 0) goto block_60;
    goto block_54;
}
block_54: {
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((value_x23 + 0));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((field14 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field15)(value_x23);
    const uint64_t result3 = RecoveredCall_499bd0_3(value_x23);
    goto block_60;
}
block_60: {
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((value_x22 + 0) + 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>(((value_x22 + 0) + 8));
    value_x8 = field17;
    value_x9 = field16;
    if (field17 == 0) goto block_67;
    goto block_62;
}
block_62: {
    const uint64_t field18 = __atomic_fetch_add(reinterpret_cast<uint64_t*>(((value_x8 + 8) + 0)), 1, __ATOMIC_RELAXED);
    goto block_67;
}
block_67: {
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((value_x20 + 1400));
    *reinterpret_cast<uint64_t*>((value_x20 + 1392)) = value_x9;
    *reinterpret_cast<uint64_t*>((value_x20 + 1400)) = value_x8;
    value_x22 = field19;
    if (field19 == 0) goto block_83;
    goto block_71;
}
block_71: {
    const uint64_t field20 = __atomic_fetch_sub(reinterpret_cast<uint64_t*>(((value_x22 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (field20 != 0) goto block_83;
    goto block_77;
}
block_77: {
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((value_x22 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 16));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t)>(field22)(value_x22);
    const uint64_t result5 = RecoveredCall_499bd0_5(value_x22);
    goto block_83;
}
block_83: {
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((value_x21 + 0) + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((value_x21 + 0) + 8));
    value_x8 = field24;
    value_x9 = field23;
    if (field24 == 0) goto block_90;
    goto block_85;
}
block_85: {
    const uint64_t field25 = __atomic_fetch_add(reinterpret_cast<uint64_t*>(((value_x8 + 8) + 0)), 1, __ATOMIC_RELAXED);
    goto block_90;
}
block_90: {
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((value_x20 + 1416));
    *reinterpret_cast<uint64_t*>((value_x20 + 1408)) = value_x9;
    *reinterpret_cast<uint64_t*>((value_x20 + 1416)) = value_x8;
    value_x21 = field26;
    if (field26 == 0) goto block_106;
    goto block_94;
}
block_94: {
    const uint64_t field27 = __atomic_fetch_sub(reinterpret_cast<uint64_t*>(((value_x21 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (field27 != 0) goto block_106;
    goto block_100;
}
block_100: {
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 16));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t)>(field29)(value_x21);
    const uint64_t result7 = RecoveredCall_499bd0_7(value_x21);
    goto block_106;
}
block_106: {
    value_x8 = uint32_t(1);
    goto block_109;
}
block_108: {
    value_x8 = uint32_t((uint32_t(value_x8) + 19));
    goto block_109;
}
block_109: {
    *reinterpret_cast<uint32_t*>(((value_x19 + 0) + 0)) = uint32_t(value_x8);
    *reinterpret_cast<uint32_t*>(((value_x19 + 0) + 4)) = 0;
    return output;
}
}

struct RecoveredOutput_4b43c0 {alignas(8) unsigned char storage[24];};
extern "C" uint64_t RecoveredCall_4b43c0_1(uint64_t);
extern "C" __attribute__((noinline)) RecoveredOutput_4b43c0 RecoveredLeaf_4b43c0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4b43c0 output;
    uint64_t value_x0 = arg0;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&output);
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 384));
    value_x0 = field0;
    if (field0 == 0) goto block_9;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(value_x0);
    *reinterpret_cast<uint64_t*>((value_x8 + 0)) = uint32_t(1);
    return output;
}
block_9: {
    const uint64_t result1 = RecoveredCall_4b43c0_1(value_x0);
    __builtin_unreachable();
}
}
