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




extern "C" uint64_t RecoveredCall_96100_0(uint64_t);
extern "C" uint64_t RecoveredCall_96100_1(uint64_t);
extern "C" uint64_t RecoveredCall_96100_2(uint64_t);
extern "C" uint64_t RecoveredCall_96100_3(uint64_t);
extern "C" uint64_t RecoveredCall_96100_4(uint64_t);
extern "C" uint64_t RecoveredCall_96100_5(uint64_t);
extern "C" uint64_t RecoveredCall_96100_6(uint64_t);
extern "C" uint64_t RecoveredCall_96100_8(uint64_t);
extern "C" uint64_t RecoveredCall_96100_9(uint64_t);
extern "C" uint64_t RecoveredCall_96100_11(uint64_t);
extern "C" uint64_t RecoveredCall_96100_12(uint64_t);
extern "C" uint64_t RecoveredCall_96100_13(uint64_t);
extern "C" uint64_t RecoveredCall_96100_16(uint64_t);
extern "C" uint64_t RecoveredCall_96100_17(uint64_t);
extern "C" uint64_t RecoveredCall_96100_18(uint64_t);
extern "C" uint64_t RecoveredCall_96100_19(uint64_t);
extern "C" uint64_t RecoveredCall_96100_20(uint64_t);
extern "C" uint64_t RecoveredCall_96100_21(uint64_t);
extern "C" uint64_t RecoveredCall_96100_23(uint64_t);
extern "C" uint64_t RecoveredCall_96100_24(uint64_t);
extern "C" uint64_t RecoveredCall_96100_25(uint64_t);
extern "C" uint64_t RecoveredCall_96100_28(uint64_t);
extern "C" uint64_t RecoveredCall_96100_29(uint64_t);
extern "C" uint64_t RecoveredCall_96100_30(uint64_t);
extern "C" uint64_t RecoveredCall_96100_31(uint64_t);
extern "C" uint64_t RecoveredCall_96100_33(uint64_t);
extern "C" uint64_t RecoveredCall_96100_34(uint64_t);
extern "C" uint64_t RecoveredCall_96100_37(uint64_t);
extern "C" void LeafTarget_96100_180(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_96100(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 88));
    *reinterpret_cast<uint64_t*>((value_x0 + 88)) = 0;
    value_x19 = value_x0;
    value_x20 = field0;
    if (field0 == 0) goto block_11;
    goto block_4;
}
block_4: {
    const uint64_t result0 = RecoveredCall_96100_0((value_x20 + 8));
    const uint64_t result1 = RecoveredCall_96100_1((value_x20 + 8));
    const uint64_t result2 = RecoveredCall_96100_2(value_x20);
    goto block_11;
}
block_11: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 96));
    *reinterpret_cast<uint64_t*>((value_x19 + 96)) = 0;
    value_x20 = field1;
    if (field1 == 0) goto block_18;
    goto block_14;
}
block_14: {
    const uint64_t result3 = RecoveredCall_96100_3(value_x20);
    const uint64_t result4 = RecoveredCall_96100_4(value_x20);
    goto block_18;
}
block_18: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 80));
    *reinterpret_cast<uint64_t*>((value_x19 + 80)) = 0;
    value_x20 = field2;
    if (field2 == 0) goto block_25;
    goto block_21;
}
block_21: {
    const uint64_t result5 = RecoveredCall_96100_5(value_x20);
    const uint64_t result6 = RecoveredCall_96100_6(value_x20);
    goto block_25;
}
block_25: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 120));
    *reinterpret_cast<uint64_t*>((value_x19 + 120)) = 0;
    value_x0 = field3;
    if (field3 == 0) goto block_31;
    goto block_28;
}
block_28: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_31;
}
block_31: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 168));
    *reinterpret_cast<uint64_t*>((value_x19 + 168)) = 0;
    value_x20 = field6;
    if (field6 == 0) goto block_38;
    goto block_34;
}
block_34: {
    const uint64_t result8 = RecoveredCall_96100_8(value_x20);
    const uint64_t result9 = RecoveredCall_96100_9(value_x20);
    goto block_38;
}
block_38: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 64));
    *reinterpret_cast<uint64_t*>((value_x19 + 64)) = 0;
    value_x0 = field7;
    if (field7 == 0) goto block_44;
    goto block_41;
}
block_41: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t)>(field9)(value_x0);
    goto block_44;
}
block_44: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x19 + 128));
    *reinterpret_cast<uint64_t*>((value_x19 + 128)) = 0;
    value_x20 = field10;
    if (field10 == 0) goto block_53;
    goto block_47;
}
block_47: {
    const uint64_t result11 = RecoveredCall_96100_11((value_x20 + 16));
    const uint64_t result12 = RecoveredCall_96100_12((value_x20 + 8));
    const uint64_t result13 = RecoveredCall_96100_13(value_x20);
    goto block_53;
}
block_53: {
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((value_x19 + 104));
    *reinterpret_cast<uint64_t*>((value_x19 + 104)) = 0;
    value_x20 = field11;
    if (field11 == 0) goto block_72;
    goto block_56;
}
block_56: {
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    *reinterpret_cast<uint64_t*>((value_x20 + 0)) = 0;
    value_x0 = field12;
    if (field12 == 0) goto block_69;
    goto block_59;
}
block_59: {
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 8));
    const uint64_t result14 = reinterpret_cast<uint64_t (*)(uint64_t)>(field14)(value_x0);
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    *reinterpret_cast<uint64_t*>((value_x20 + 0)) = 0;
    value_x0 = field15;
    if (field15 == 0) goto block_70;
    goto block_65;
}
block_65: {
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 8));
    const uint64_t result15 = reinterpret_cast<uint64_t (*)(uint64_t)>(field17)(value_x0);
    goto block_70;
}
block_69: {
    *reinterpret_cast<uint64_t*>((value_x20 + 0)) = 0;
    goto block_70;
}
block_70: {
    const uint64_t result16 = RecoveredCall_96100_16(value_x20);
    goto block_72;
}
block_72: {
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((value_x19 + 192));
    *reinterpret_cast<uint64_t*>((value_x19 + 192)) = 0;
    value_x20 = field18;
    if (field18 == 0) goto block_82;
    goto block_75;
}
block_75: {
    const uint64_t result17 = RecoveredCall_96100_17((value_x20 + 8));
    const uint64_t result18 = RecoveredCall_96100_18((value_x20 + 8));
    const uint64_t result19 = RecoveredCall_96100_19(value_x20);
    goto block_82;
}
block_82: {
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((value_x19 + 136));
    *reinterpret_cast<uint64_t*>((value_x19 + 136)) = 0;
    value_x20 = field19;
    if (field19 == 0) goto block_89;
    goto block_85;
}
block_85: {
    const uint64_t result20 = RecoveredCall_96100_20(value_x20);
    const uint64_t result21 = RecoveredCall_96100_21(value_x20);
    goto block_89;
}
block_89: {
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>((value_x19 + 72));
    *reinterpret_cast<uint64_t*>((value_x19 + 72)) = 0;
    value_x0 = field20;
    if (field20 == 0) goto block_95;
    goto block_92;
}
block_92: {
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 8));
    const uint64_t result22 = reinterpret_cast<uint64_t (*)(uint64_t)>(field22)(value_x0);
    goto block_95;
}
block_95: {
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((value_x19 + 176));
    *reinterpret_cast<uint64_t*>((value_x19 + 176)) = 0;
    value_x20 = field23;
    if (field23 == 0) goto block_102;
    goto block_98;
}
block_98: {
    const uint64_t result23 = RecoveredCall_96100_23(value_x20);
    const uint64_t result24 = RecoveredCall_96100_24(value_x20);
    goto block_102;
}
block_102: {
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>((value_x19 + 184));
    *reinterpret_cast<uint64_t*>((value_x19 + 184)) = 0;
    value_x20 = field24;
    if (field24 == 0) goto block_140;
    goto block_105;
}
block_105: {
    const uint64_t result25 = RecoveredCall_96100_25((value_x20 + 8));
    const uint64_t field25 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((value_x20 + 24) + 0)), 0, __ATOMIC_ACQ_REL);
    value_x0 = field25;
    value_x21 = (value_x20 + 8);
    if (field25 == 0) goto block_122;
    goto block_113;
}
block_113: {
    const uint32_t field26 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (uint32_t((field26 - 1)) != 0) goto block_122;
    goto block_119;
}
block_119: {
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>((field27 + 16));
    const uint64_t result26 = reinterpret_cast<uint64_t (*)(uint64_t)>(field28)(value_x0);
    goto block_122;
}
block_122: {
    const uint64_t field29 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((value_x20 + 16) + 0)), 0, __ATOMIC_ACQ_REL);
    value_x0 = field29;
    if (field29 == 0) goto block_136;
    goto block_127;
}
block_127: {
    const uint32_t field30 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (uint32_t((field30 - 1)) != 0) goto block_136;
    goto block_133;
}
block_133: {
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field32 = *reinterpret_cast<const uint64_t*>((field31 + 16));
    const uint64_t result27 = reinterpret_cast<uint64_t (*)(uint64_t)>(field32)(value_x0);
    goto block_136;
}
block_136: {
    const uint64_t result28 = RecoveredCall_96100_28(value_x21);
    const uint64_t result29 = RecoveredCall_96100_29(value_x20);
    goto block_140;
}
block_140: {
    const uint64_t field33 = *reinterpret_cast<const uint64_t*>((value_x19 + 152));
    *reinterpret_cast<uint64_t*>((value_x19 + 152)) = 0;
    value_x20 = field33;
    if (field33 == 0) goto block_147;
    goto block_143;
}
block_143: {
    const uint64_t result30 = RecoveredCall_96100_30(value_x20);
    const uint64_t result31 = RecoveredCall_96100_31(value_x20);
    goto block_147;
}
block_147: {
    const uint64_t field34 = *reinterpret_cast<const uint64_t*>((value_x19 + 112));
    *reinterpret_cast<uint64_t*>((value_x19 + 112)) = 0;
    value_x0 = field34;
    if (field34 == 0) goto block_153;
    goto block_150;
}
block_150: {
    const uint64_t field35 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field36 = *reinterpret_cast<const uint64_t*>((field35 + 8));
    const uint64_t result32 = reinterpret_cast<uint64_t (*)(uint64_t)>(field36)(value_x0);
    goto block_153;
}
block_153: {
    const uint64_t field37 = *reinterpret_cast<const uint64_t*>((value_x19 + 16));
    *reinterpret_cast<uint64_t*>((value_x19 + 16)) = 0;
    value_x20 = field37;
    if (field37 == 0) goto block_160;
    goto block_156;
}
block_156: {
    const uint64_t result33 = RecoveredCall_96100_33((value_x20 + 8));
    const uint64_t result34 = RecoveredCall_96100_34(value_x20);
    goto block_160;
}
block_160: {
    const uint64_t field38 = *reinterpret_cast<const uint64_t*>((value_x19 + 104));
    *reinterpret_cast<uint64_t*>((value_x19 + 104)) = 0;
    value_x20 = field38;
    if (field38 == 0) goto block_179;
    goto block_163;
}
block_163: {
    const uint64_t field39 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    *reinterpret_cast<uint64_t*>((value_x20 + 0)) = 0;
    value_x0 = field39;
    if (field39 == 0) goto block_176;
    goto block_166;
}
block_166: {
    const uint64_t field40 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field41 = *reinterpret_cast<const uint64_t*>((field40 + 8));
    const uint64_t result35 = reinterpret_cast<uint64_t (*)(uint64_t)>(field41)(value_x0);
    const uint64_t field42 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    *reinterpret_cast<uint64_t*>((value_x20 + 0)) = 0;
    value_x0 = field42;
    if (field42 == 0) goto block_177;
    goto block_172;
}
block_172: {
    const uint64_t field43 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field44 = *reinterpret_cast<const uint64_t*>((field43 + 8));
    const uint64_t result36 = reinterpret_cast<uint64_t (*)(uint64_t)>(field44)(value_x0);
    goto block_177;
}
block_176: {
    *reinterpret_cast<uint64_t*>((value_x20 + 0)) = 0;
    goto block_177;
}
block_177: {
    const uint64_t result37 = RecoveredCall_96100_37(value_x20);
    goto block_179;
}
block_179: {
    const uint64_t field45 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    return LeafTarget_96100_180(field45);
}
}





extern "C" uint64_t RecoveredCall_1607c0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1607c0_1(uint64_t,uint64_t);
extern "C" void LeafTarget_1607c0_23(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1607c0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
block_0: {

    if (value_x1 == 0) goto block_24;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_1607c0_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_1607c0_1(value_x0,field1);
    const uint64_t field2 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((value_x1 + 40) + 0)), 0, __ATOMIC_ACQ_REL);
    value_x0 = field2;
    value_x19 = value_x1;
    if (field2 == 0) goto block_22;
    goto block_13;
}
block_13: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (uint32_t((field3 - 1)) != 0) goto block_22;
    goto block_19;
}
block_19: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_22;
}
block_22: {

    return LeafTarget_1607c0_23(value_x19);
}
block_24: {

    return;
}
}





extern "C" uint64_t RecoveredCall_162430_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_162430_1(uint64_t,uint64_t);
extern "C" void LeafTarget_162430_23(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_162430(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
block_0: {

    if (value_x1 == 0) goto block_24;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_162430_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_162430_1(value_x0,field1);
    const uint64_t field2 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((value_x1 + 40) + 0)), 0, __ATOMIC_ACQ_REL);
    value_x0 = field2;
    value_x19 = value_x1;
    if (field2 == 0) goto block_22;
    goto block_13;
}
block_13: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (uint32_t((field3 - 1)) != 0) goto block_22;
    goto block_19;
}
block_19: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_22;
}
block_22: {

    return LeafTarget_162430_23(value_x19);
}
block_24: {

    return;
}
}





extern "C" uint64_t RecoveredCall_164490_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_164490_1(uint64_t,uint64_t);
extern "C" void LeafTarget_164490_23(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_164490(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
block_0: {

    if (value_x1 == 0) goto block_24;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_164490_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_164490_1(value_x0,field1);
    const uint64_t field2 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((value_x1 + 40) + 0)), 0, __ATOMIC_ACQ_REL);
    value_x0 = field2;
    value_x19 = value_x1;
    if (field2 == 0) goto block_22;
    goto block_13;
}
block_13: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (uint32_t((field3 - 1)) != 0) goto block_22;
    goto block_19;
}
block_19: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_22;
}
block_22: {

    return LeafTarget_164490_23(value_x19);
}
block_24: {

    return;
}
}





extern "C" uint64_t RecoveredCall_1648a0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1648a0_1(uint64_t,uint64_t);
extern "C" void LeafTarget_1648a0_23(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1648a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
block_0: {

    if (value_x1 == 0) goto block_24;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_1648a0_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_1648a0_1(value_x0,field1);
    const uint64_t field2 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((value_x1 + 40) + 0)), 0, __ATOMIC_ACQ_REL);
    value_x0 = field2;
    value_x19 = value_x1;
    if (field2 == 0) goto block_22;
    goto block_13;
}
block_13: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (uint32_t((field3 - 1)) != 0) goto block_22;
    goto block_19;
}
block_19: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_22;
}
block_22: {

    return LeafTarget_1648a0_23(value_x19);
}
block_24: {

    return;
}
}





extern "C" uint64_t RecoveredCall_164ec0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_164ec0_1(uint64_t,uint64_t);
extern "C" void LeafTarget_164ec0_23(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_164ec0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
block_0: {

    if (value_x1 == 0) goto block_24;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_164ec0_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_164ec0_1(value_x0,field1);
    const uint64_t field2 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((value_x1 + 32) + 0)), 0, __ATOMIC_ACQ_REL);
    value_x0 = field2;
    value_x19 = value_x1;
    if (field2 == 0) goto block_22;
    goto block_13;
}
block_13: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (uint32_t((field3 - 1)) != 0) goto block_22;
    goto block_19;
}
block_19: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_22;
}
block_22: {

    return LeafTarget_164ec0_23(value_x19);
}
block_24: {

    return;
}
}





extern "C" uint64_t RecoveredCall_165da0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_165da0_1(uint64_t,uint64_t);
extern "C" void LeafTarget_165da0_23(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_165da0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
block_0: {

    if (value_x1 == 0) goto block_24;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_165da0_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_165da0_1(value_x0,field1);
    const uint64_t field2 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((value_x1 + 40) + 0)), 0, __ATOMIC_ACQ_REL);
    value_x0 = field2;
    value_x19 = value_x1;
    if (field2 == 0) goto block_22;
    goto block_13;
}
block_13: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (uint32_t((field3 - 1)) != 0) goto block_22;
    goto block_19;
}
block_19: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_22;
}
block_22: {

    return LeafTarget_165da0_23(value_x19);
}
block_24: {

    return;
}
}





extern "C" uint64_t RecoveredCall_167480_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_167480_1(uint64_t,uint64_t);
extern "C" void LeafTarget_167480_23(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_167480(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
block_0: {

    if (value_x1 == 0) goto block_24;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_167480_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_167480_1(value_x0,field1);
    const uint64_t field2 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((value_x1 + 40) + 0)), 0, __ATOMIC_ACQ_REL);
    value_x0 = field2;
    value_x19 = value_x1;
    if (field2 == 0) goto block_22;
    goto block_13;
}
block_13: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (uint32_t((field3 - 1)) != 0) goto block_22;
    goto block_19;
}
block_19: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_22;
}
block_22: {

    return LeafTarget_167480_23(value_x19);
}
block_24: {

    return;
}
}





extern "C" uint64_t RecoveredCall_167500_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_167500_1(uint64_t,uint64_t);
extern "C" void LeafTarget_167500_23(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_167500(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
block_0: {

    if (value_x1 == 0) goto block_24;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_167500_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_167500_1(value_x0,field1);
    const uint64_t field2 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((value_x1 + 40) + 0)), 0, __ATOMIC_ACQ_REL);
    value_x0 = field2;
    value_x19 = value_x1;
    if (field2 == 0) goto block_22;
    goto block_13;
}
block_13: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (uint32_t((field3 - 1)) != 0) goto block_22;
    goto block_19;
}
block_19: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_22;
}
block_22: {

    return LeafTarget_167500_23(value_x19);
}
block_24: {

    return;
}
}





extern "C" uint64_t RecoveredCall_167b80_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_167b80_1(uint64_t,uint64_t);
extern "C" void LeafTarget_167b80_23(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_167b80(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
block_0: {

    if (value_x1 == 0) goto block_24;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_167b80_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_167b80_1(value_x0,field1);
    const uint64_t field2 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((value_x1 + 40) + 0)), 0, __ATOMIC_ACQ_REL);
    value_x0 = field2;
    value_x19 = value_x1;
    if (field2 == 0) goto block_22;
    goto block_13;
}
block_13: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (uint32_t((field3 - 1)) != 0) goto block_22;
    goto block_19;
}
block_19: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_22;
}
block_22: {

    return LeafTarget_167b80_23(value_x19);
}
block_24: {

    return;
}
}





extern "C" uint64_t RecoveredCall_168020_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_168020_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_168020_2(uint64_t);
extern "C" uint64_t RecoveredCall_168020_3(uint64_t);
extern "C" void LeafTarget_168020_30(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_168020(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {

    if (value_x1 == 0) goto block_31;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_168020_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_168020_1(value_x0,field1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x1 + 56));
    value_x19 = value_x1;
    value_x20 = (value_x1 + 56);
    if (field2 == 0) goto block_15;
    goto block_11;
}
block_11: {
    const uint64_t result2 = RecoveredCall_168020_2(value_x20);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    const uint64_t result3 = RecoveredCall_168020_3(field3);
    goto block_15;
}
block_15: {
    const uint64_t field4 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((value_x19 + 40) + 0)), 0, __ATOMIC_ACQ_REL);
    value_x0 = field4;
    if (field4 == 0) goto block_29;
    goto block_20;
}
block_20: {
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (uint32_t((field5 - 1)) != 0) goto block_29;
    goto block_26;
}
block_26: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 16));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(value_x0);
    goto block_29;
}
block_29: {

    return LeafTarget_168020_30(value_x19);
}
block_31: {

    return;
}
}





extern "C" uint64_t RecoveredCall_1694a0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1694a0_1(uint64_t,uint64_t);
extern "C" void LeafTarget_1694a0_23(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1694a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
block_0: {

    if (value_x1 == 0) goto block_24;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_1694a0_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_1694a0_1(value_x0,field1);
    const uint64_t field2 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((value_x1 + 32) + 0)), 0, __ATOMIC_ACQ_REL);
    value_x0 = field2;
    value_x19 = value_x1;
    if (field2 == 0) goto block_22;
    goto block_13;
}
block_13: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (uint32_t((field3 - 1)) != 0) goto block_22;
    goto block_19;
}
block_19: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_22;
}
block_22: {

    return LeafTarget_1694a0_23(value_x19);
}
block_24: {

    return;
}
}





extern "C" uint64_t RecoveredCall_169680_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_169680_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_169680_2(uint64_t);
extern "C" uint64_t RecoveredCall_169680_3(uint64_t);
extern "C" void LeafTarget_169680_44(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_169680(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {

    if (value_x1 == 0) goto block_45;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_169680_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_169680_1(value_x0,field1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x1 + 88));
    value_x19 = value_x1;
    value_x20 = (value_x1 + 88);
    if (field2 == 0) goto block_15;
    goto block_11;
}
block_11: {
    const uint64_t result2 = RecoveredCall_169680_2(value_x20);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    const uint64_t result3 = RecoveredCall_169680_3(field3);
    goto block_15;
}
block_15: {
    const uint64_t field4 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((value_x19 + 72) + 0)), 0, __ATOMIC_ACQ_REL);
    value_x0 = field4;
    if (field4 == 0) goto block_29;
    goto block_20;
}
block_20: {
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (uint32_t((field5 - 1)) != 0) goto block_29;
    goto block_26;
}
block_26: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 16));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(value_x0);
    goto block_29;
}
block_29: {
    const uint64_t field8 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((value_x19 + 40) + 0)), 0, __ATOMIC_ACQ_REL);
    value_x0 = field8;
    if (field8 == 0) goto block_43;
    goto block_34;
}
block_34: {
    const uint32_t field9 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (uint32_t((field9 - 1)) != 0) goto block_43;
    goto block_40;
}
block_40: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 16));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t)>(field11)(value_x0);
    goto block_43;
}
block_43: {

    return LeafTarget_169680_44(value_x19);
}
block_45: {

    return;
}
}
