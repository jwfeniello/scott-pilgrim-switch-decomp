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




extern "C" void LeafTarget_1c0400_7(uint64_t);
extern "C" uint64_t RecoveredCall_1c0400_0(uint64_t);
extern "C" void LeafTarget_1c0400_11(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1c0400(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((field0 + 16));
    *reinterpret_cast<uint32_t*>((field0 + 16)) = uint32_t(uint32_t((uint32_t(uint32_t(field1)) - 1)));
    value_x19 = value_x0;
    if (uint32_t(uint32_t((uint32_t(uint32_t(field1)) - 1))) == 0) goto block_8;
    goto block_6;
}
block_6: {

    return LeafTarget_1c0400_7(value_x19);
}
block_8: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 8));
    const uint64_t result0 = RecoveredCall_1c0400_0(field2);
    return LeafTarget_1c0400_11(value_x19);
}
}





extern "C" unsigned char LeafData_6d0110_0[];
extern "C" uint64_t RecoveredCall_6d0110_0(uint64_t);
extern "C" uint64_t RecoveredCall_6d0110_1(uint64_t);
extern "C" uint64_t RecoveredCall_6d0110_2(uint64_t);
extern "C" unsigned char LeafData_6d0110_28[];
extern "C" void LeafTarget_6d0110_40(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_6d0110(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_6d0110_0) - 1272) + 1272);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 112));
    value_x19 = value_x0;
    if (field0 == 0) goto block_7;
    goto block_6;
}
block_6: {
    *reinterpret_cast<uint64_t*>((value_x19 + 112)) = 0;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 96));
    const uint64_t result0 = RecoveredCall_6d0110_0(field1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 80));
    if (field2 == 0) goto block_12;
    goto block_11;
}
block_11: {
    *reinterpret_cast<uint64_t*>((value_x19 + 80)) = 0;
    goto block_12;
}
block_12: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 64));
    const uint64_t result1 = RecoveredCall_6d0110_1(field3);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 48));
    value_x0 = field4;
    if (field4 == 0) goto block_17;
    goto block_16;
}
block_16: {
    const uint64_t result2 = RecoveredCall_6d0110_2(value_x0);
    goto block_17;
}
block_17: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x19 + 40));
    value_x0 = field5;
    if (field5 == 0) goto block_28;
    goto block_19;
}
block_19: {
    const uint32_t field6 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field6 - 1)) != 0) goto block_28;
    goto block_25;
}
block_25: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 8));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t)>(field8)(value_x0);
    goto block_28;
}
block_28: {
    *reinterpret_cast<uint64_t*>((value_x19 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_6d0110_28) - 1240) + 1240);
    const uint32_t field9 = *reinterpret_cast<const uint32_t*>((value_x19 + 32));
    if (uint32_t(uint32_t(field9)) != 2) goto block_41;
    goto block_34;
}
block_34: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x19 + 16));
    const uint32_t field11 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field10 + 0)), 1, __ATOMIC_RELAXED);
    value_x0 = field10;
    if (uint32_t((field11 - 1)) != 0) goto block_41;
    goto block_40;
}
block_40: {

    return LeafTarget_6d0110_40(value_x0);
}
block_41: {

    return;
}
}





extern "C" unsigned char LeafData_6d0320_0[];
extern "C" uint64_t RecoveredCall_6d0320_0(uint64_t);
extern "C" uint64_t RecoveredCall_6d0320_1(uint64_t);
extern "C" uint64_t RecoveredCall_6d0320_2(uint64_t);
extern "C" uint64_t RecoveredCall_6d0320_3(uint64_t);
extern "C" uint64_t RecoveredCall_6d0320_4(uint64_t);
extern "C" uint64_t RecoveredCall_6d0320_5(uint64_t);
extern "C" uint64_t RecoveredCall_6d0320_6(uint64_t);
extern "C" uint64_t RecoveredCall_6d0320_7(uint64_t);
extern "C" uint64_t RecoveredCall_6d0320_8(uint64_t);
extern "C" void LeafTarget_6d0320_63(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_6d0320(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_6d0320_0) - 1352) + 1352);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 232));
    const uint64_t result0 = RecoveredCall_6d0320_0(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 216));
    const uint64_t result1 = RecoveredCall_6d0320_1(field1);
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x0 + 208));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field2)) != 2) goto block_18;
    goto block_11;
}
block_11: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 192));
    const uint32_t field4 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field3 + 0)), 1, __ATOMIC_RELAXED);
    value_x0 = field3;
    if (uint32_t((field4 - 1)) != 0) goto block_18;
    goto block_17;
}
block_17: {
    const uint64_t result2 = RecoveredCall_6d0320_2(value_x0);
    goto block_18;
}
block_18: {
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((value_x19 + 184));
    if (uint32_t(uint32_t(field5)) != 2) goto block_28;
    goto block_21;
}
block_21: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 168));
    const uint32_t field7 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field6 + 0)), 1, __ATOMIC_RELAXED);
    value_x0 = field6;
    if (uint32_t((field7 - 1)) != 0) goto block_28;
    goto block_27;
}
block_27: {
    const uint64_t result3 = RecoveredCall_6d0320_3(value_x0);
    goto block_28;
}
block_28: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x19 + 144));
    const uint64_t result4 = RecoveredCall_6d0320_4(field8);
    const uint32_t field9 = *reinterpret_cast<const uint32_t*>((value_x19 + 136));
    if (uint32_t(uint32_t(field9)) != 2) goto block_40;
    goto block_33;
}
block_33: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x19 + 120));
    const uint32_t field11 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field10 + 0)), 1, __ATOMIC_RELAXED);
    value_x0 = field10;
    if (uint32_t((field11 - 1)) != 0) goto block_40;
    goto block_39;
}
block_39: {
    const uint64_t result5 = RecoveredCall_6d0320_5(value_x0);
    goto block_40;
}
block_40: {
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((value_x19 + 88));
    const uint64_t result6 = RecoveredCall_6d0320_6(field12);
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((value_x19 + 72));
    const uint64_t result7 = RecoveredCall_6d0320_7(field13);
    const uint32_t field14 = *reinterpret_cast<const uint32_t*>((value_x19 + 64));
    if (uint32_t(uint32_t(field14)) != 2) goto block_54;
    goto block_47;
}
block_47: {
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((value_x19 + 48));
    const uint32_t field16 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field15 + 0)), 1, __ATOMIC_RELAXED);
    value_x0 = field15;
    if (uint32_t((field16 - 1)) != 0) goto block_54;
    goto block_53;
}
block_53: {
    const uint64_t result8 = RecoveredCall_6d0320_8(value_x0);
    goto block_54;
}
block_54: {
    const uint32_t field17 = *reinterpret_cast<const uint32_t*>((value_x19 + 40));
    if (uint32_t(uint32_t(field17)) != 2) goto block_64;
    goto block_57;
}
block_57: {
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((value_x19 + 24));
    const uint32_t field19 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field18 + 0)), 1, __ATOMIC_RELAXED);
    value_x0 = field18;
    if (uint32_t((field19 - 1)) != 0) goto block_64;
    goto block_63;
}
block_63: {

    return LeafTarget_6d0320_63(value_x0);
}
block_64: {

    return;
}
}





extern "C" uint64_t RecoveredCall_700850_0(uint64_t);
extern "C" uint64_t RecoveredCall_700850_1(uint64_t);
extern "C" uint64_t RecoveredCall_700850_2(uint64_t);
extern "C" uint64_t RecoveredCall_700850_3(uint64_t);
extern "C" uint64_t RecoveredCall_700850_5(uint64_t);
extern "C" uint64_t RecoveredCall_700850_7(uint64_t);
extern "C" uint64_t RecoveredCall_700850_8(uint64_t);
extern "C" uint64_t RecoveredCall_700850_9(uint64_t);
extern "C" void LeafTarget_700850_64(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_700850(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
    uint64_t value_x8;
block_0: {
    const uint64_t result0 = RecoveredCall_700850_0((value_x0 + 1464));
    const uint8_t field0 = __atomic_load_n(reinterpret_cast<const uint8_t*>(((value_x0 + 337) + 0)), __ATOMIC_ACQUIRE);
    value_x19 = (value_x0 + 1464);
    value_x20 = value_x0;
    value_x8 = (value_x0 + 337);
    if ((uint32_t(uint32_t(field0)) & 0x1ull) != 0) goto block_63;
    goto block_7;
}
block_7: {
    __atomic_store_n(reinterpret_cast<uint8_t*>((value_x8 + 0)), uint32_t(uint32_t(1)), __ATOMIC_RELEASE);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x20 + 264));
    value_x21 = field1;
    if (field1 == 0) goto block_55;
    goto block_11;
}
block_11: {
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x21 + 8));
    if (uint32_t(uint32_t(field2)) == 0) goto block_17;
    goto block_13;
}
block_13: {
    const uint64_t result1 = RecoveredCall_700850_1((value_x21 + 32));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x20 + 264));
    value_x21 = field3;
    if (field3 == 0) goto block_54;
    goto block_17;
}
block_17: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    if (field4 == 0) goto block_37;
    goto block_19;
}
block_19: {
    const uint64_t result2 = RecoveredCall_700850_2((value_x21 + 32));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x21 + 16));
    const uint64_t result3 = RecoveredCall_700850_3(field5);
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    *reinterpret_cast<uint64_t*>(((value_x21 + 16) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x21 + 16) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((value_x21 + 0)) = 0;
    value_x0 = field6;
    if (field6 == 0) goto block_38;
    goto block_27;
}
block_27: {
    const uint32_t field7 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field7 - 1)) != 0) goto block_38;
    goto block_33;
}
block_33: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t)>(field9)(value_x0);
    goto block_38;
}
block_37: {
    *reinterpret_cast<uint64_t*>((value_x21 + 0)) = 0;
    goto block_38;
}
block_38: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x21 + 16));
    *reinterpret_cast<uint8_t*>((value_x21 + 8)) = 0;
    const uint64_t result5 = RecoveredCall_700850_5(field10);
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    value_x0 = field11;
    if (field11 == 0) goto block_52;
    goto block_43;
}
block_43: {
    const uint32_t field12 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field12 - 1)) != 0) goto block_52;
    goto block_49;
}
block_49: {
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 8));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t)>(field14)(value_x0);
    goto block_52;
}
block_52: {
    const uint64_t result7 = RecoveredCall_700850_7(value_x21);
    goto block_54;
}
block_54: {
    *reinterpret_cast<uint64_t*>((value_x20 + 264)) = 0;
    goto block_55;
}
block_55: {
    const uint8_t field15 = *reinterpret_cast<const uint8_t*>((value_x20 + 432));
    if (uint32_t(uint32_t(field15)) == 0) goto block_59;
    goto block_57;
}
block_57: {
    const uint64_t result8 = RecoveredCall_700850_8((value_x20 + 456));
    goto block_59;
}
block_59: {
    const uint8_t field16 = *reinterpret_cast<const uint8_t*>((value_x20 + 992));
    if (uint32_t(uint32_t(field16)) == 0) goto block_63;
    goto block_61;
}
block_61: {
    const uint64_t result9 = RecoveredCall_700850_9((value_x20 + 1016));
    goto block_63;
}
block_63: {

    return LeafTarget_700850_64(value_x19);
}
}





extern "C" uint64_t RecoveredCall_702490_0(uint64_t);
extern "C" uint64_t RecoveredCall_702490_1(uint64_t);
extern "C" uint64_t RecoveredCall_702490_3(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_702490(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    value_x19 = value_x0;
    if (field0 == 0) goto block_21;
    goto block_3;
}
block_3: {
    const uint64_t result0 = RecoveredCall_702490_0((value_x19 + 32));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 16));
    const uint64_t result1 = RecoveredCall_702490_1(field1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    *reinterpret_cast<uint64_t*>(((value_x19 + 16) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 16) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((value_x19 + 0)) = 0;
    value_x0 = field2;
    if (field2 == 0) goto block_22;
    goto block_11;
}
block_11: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field3 - 1)) != 0) goto block_22;
    goto block_17;
}
block_17: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_22;
}
block_21: {
    *reinterpret_cast<uint64_t*>((value_x19 + 0)) = 0;
    goto block_22;
}
block_22: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 16));
    *reinterpret_cast<uint8_t*>((value_x19 + 8)) = 0;
    const uint64_t result3 = RecoveredCall_702490_3(field6);
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    value_x0 = field7;
    if (field7 == 0) goto block_36;
    goto block_27;
}
block_27: {
    const uint32_t field8 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field8 - 1)) != 0) goto block_36;
    goto block_33;
}
block_33: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 8));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field10)(value_x0,field10);
    return;
    __builtin_unreachable();
}
block_36: {

    return;
}
}





extern "C" unsigned char LeafData_dd8b60_0[];
extern "C" uint64_t RecoveredCall_dd8b60_0(uint64_t);
extern "C" uint64_t RecoveredCall_dd8b60_1(uint64_t);
extern "C" uint64_t RecoveredCall_dd8b60_2(uint64_t);
extern "C" uint64_t RecoveredCall_dd8b60_3(uint64_t);
extern "C" uint64_t RecoveredCall_dd8b60_5(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_dd8b60(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dd8b60_0) - 3760) + 3760);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 160));
    value_x19 = value_x0;
    if (field0 == 0) goto block_7;
    goto block_6;
}
block_6: {
    *reinterpret_cast<uint64_t*>((value_x19 + 160)) = 0;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 144));
    const uint64_t result0 = RecoveredCall_dd8b60_0(field1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 128));
    if (field2 == 0) goto block_12;
    goto block_11;
}
block_11: {
    *reinterpret_cast<uint64_t*>((value_x19 + 128)) = 0;
    goto block_12;
}
block_12: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 112));
    const uint64_t result1 = RecoveredCall_dd8b60_1(field3);
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((value_x19 + 104));
    if (uint32_t(uint32_t(field4)) != 2) goto block_24;
    goto block_17;
}
block_17: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x19 + 88));
    const uint32_t field6 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field5 + 0)), 1, __ATOMIC_RELAXED);
    value_x0 = field5;
    if (uint32_t((field6 - 1)) != 0) goto block_24;
    goto block_23;
}
block_23: {
    const uint64_t result2 = RecoveredCall_dd8b60_2(value_x0);
    goto block_24;
}
block_24: {
    const uint64_t result3 = RecoveredCall_dd8b60_3((value_x19 + 56));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 24));
    *reinterpret_cast<uint64_t*>((value_x19 + 24)) = 0;
    value_x21 = field7;
    if (field7 == 0) goto block_45;
    goto block_29;
}
block_29: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field9;
    value_x20 = value_x21;
    value_x21 = field8;
    if (field9 == 0) goto block_42;
    goto block_33;
}
block_33: {
    const uint32_t field10 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field10 - 1)) != 0) goto block_42;
    goto block_39;
}
block_39: {
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((field11 + 8));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t)>(field12)(value_x0);
    goto block_42;
}
block_42: {
    const uint64_t result5 = RecoveredCall_dd8b60_5(value_x20);
    if (value_x21 != 0) goto block_29;
    goto block_45;
}
block_45: {
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field13;
    if (field13 == 0) goto block_57;
    goto block_48;
}
block_48: {
    const uint32_t field14 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field14 - 1)) != 0) goto block_57;
    goto block_54;
}
block_54: {
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((field15 + 8));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field16)(value_x0,field16);
    return;
    __builtin_unreachable();
}
block_57: {

    return;
}
}





extern "C" unsigned char LeafData_ddc9d0_0[];
extern "C" uint64_t RecoveredCall_ddc9d0_0(uint64_t);
extern "C" uint64_t RecoveredCall_ddc9d0_1(uint64_t);
extern "C" uint64_t RecoveredCall_ddc9d0_2(uint64_t);
extern "C" uint64_t RecoveredCall_ddc9d0_3(uint64_t);
extern "C" uint64_t RecoveredCall_ddc9d0_5(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ddc9d0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_ddc9d0_0) - 912) + 912);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 184));
    value_x19 = value_x0;
    if (field0 == 0) goto block_7;
    goto block_6;
}
block_6: {
    *reinterpret_cast<uint64_t*>((value_x19 + 184)) = 0;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 168));
    const uint64_t result0 = RecoveredCall_ddc9d0_0(field1);
    const uint64_t result1 = RecoveredCall_ddc9d0_1((value_x19 + 136));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x19 + 120));
    if (field2 == 0) goto block_14;
    goto block_13;
}
block_13: {
    *reinterpret_cast<uint64_t*>((value_x19 + 120)) = 0;
    goto block_14;
}
block_14: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 104));
    const uint64_t result2 = RecoveredCall_ddc9d0_2(field3);
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((value_x19 + 72));
    if (uint32_t(uint32_t(field4)) != 2) goto block_26;
    goto block_19;
}
block_19: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x19 + 56));
    const uint32_t field6 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field5 + 0)), 1, __ATOMIC_RELAXED);
    value_x0 = field5;
    if (uint32_t((field6 - 1)) != 0) goto block_26;
    goto block_25;
}
block_25: {
    const uint64_t result3 = RecoveredCall_ddc9d0_3(value_x0);
    goto block_26;
}
block_26: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 24));
    *reinterpret_cast<uint64_t*>((value_x19 + 24)) = 0;
    value_x21 = field7;
    if (field7 == 0) goto block_45;
    goto block_29;
}
block_29: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field9;
    value_x20 = value_x21;
    value_x21 = field8;
    if (field9 == 0) goto block_42;
    goto block_33;
}
block_33: {
    const uint32_t field10 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field10 - 1)) != 0) goto block_42;
    goto block_39;
}
block_39: {
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((field11 + 8));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t)>(field12)(value_x0);
    goto block_42;
}
block_42: {
    const uint64_t result5 = RecoveredCall_ddc9d0_5(value_x20);
    if (value_x21 != 0) goto block_29;
    goto block_45;
}
block_45: {
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field13;
    if (field13 == 0) goto block_57;
    goto block_48;
}
block_48: {
    const uint32_t field14 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field14 - 1)) != 0) goto block_57;
    goto block_54;
}
block_54: {
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((field15 + 8));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field16)(value_x0,field16);
    return;
    __builtin_unreachable();
}
block_57: {

    return;
}
}





extern "C" unsigned char LeafData_dddd00_2[];
extern "C" uint64_t RecoveredCall_dddd00_1(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_dddd00(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dddd00_2) - 2240) + 2240);
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = 0;
    value_x19 = value_x0;
    value_x21 = field0;
    if (field0 == 0) goto block_23;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field2;
    value_x20 = value_x21;
    value_x21 = field1;
    if (field2 == 0) goto block_20;
    goto block_11;
}
block_11: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field3 - 1)) != 0) goto block_20;
    goto block_17;
}
block_17: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_20;
}
block_20: {
    const uint64_t result1 = RecoveredCall_dddd00_1(value_x20);
    if (value_x21 != 0) goto block_7;
    goto block_23;
}
block_23: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field6;
    if (field6 == 0) goto block_35;
    goto block_26;
}
block_26: {
    const uint32_t field7 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field7 - 1)) != 0) goto block_35;
    goto block_32;
}
block_32: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field9)(value_x0,field9);
    return;
    __builtin_unreachable();
}
block_35: {

    return;
}
}





extern "C" unsigned char LeafData_ddddb0_2[];
extern "C" uint64_t RecoveredCall_ddddb0_1(uint64_t);
extern "C" void LeafTarget_ddddb0_36(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ddddb0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_ddddb0_2) - 2240) + 2240);
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = 0;
    value_x19 = value_x0;
    value_x21 = field0;
    if (field0 == 0) goto block_23;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field2;
    value_x20 = value_x21;
    value_x21 = field1;
    if (field2 == 0) goto block_20;
    goto block_11;
}
block_11: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field3 - 1)) != 0) goto block_20;
    goto block_17;
}
block_17: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_20;
}
block_20: {
    const uint64_t result1 = RecoveredCall_ddddb0_1(value_x20);
    if (value_x21 != 0) goto block_7;
    goto block_23;
}
block_23: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field6;
    if (field6 == 0) goto block_35;
    goto block_26;
}
block_26: {
    const uint32_t field7 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field7 - 1)) != 0) goto block_35;
    goto block_32;
}
block_32: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field9)(value_x0);
    goto block_35;
}
block_35: {

    return LeafTarget_ddddb0_36(value_x19);
}
}





extern "C" uint64_t RecoveredCall_dddf90_1(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_dddf90(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 8));
    *reinterpret_cast<uint64_t*>((value_x0 + 8)) = 0;
    value_x19 = value_x0;
    value_x21 = field0;
    if (field0 == 0) goto block_20;
    goto block_4;
}
block_4: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field2;
    value_x20 = value_x21;
    value_x21 = field1;
    if (field2 == 0) goto block_17;
    goto block_8;
}
block_8: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field3 - 1)) != 0) goto block_17;
    goto block_14;
}
block_14: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_17;
}
block_17: {
    const uint64_t result1 = RecoveredCall_dddf90_1(value_x20);
    if (value_x21 != 0) goto block_4;
    goto block_20;
}
block_20: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 16));
    *reinterpret_cast<uint32_t*>((value_x19 + 24)) = 0;
    value_x0 = field6;
    if (field6 == 0) goto block_32;
    goto block_23;
}
block_23: {
    const uint32_t field7 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field7 - 1)) != 0) goto block_32;
    goto block_29;
}
block_29: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field9)(value_x0,field9);
    return;
    __builtin_unreachable();
}
block_32: {

    return;
}
}





extern "C" unsigned char LeafData_dde740_2[];
extern "C" uint64_t RecoveredCall_dde740_1(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_dde740(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dde740_2) - 2632) + 2632);
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = 0;
    value_x19 = value_x0;
    value_x21 = field0;
    if (field0 == 0) goto block_23;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field2;
    value_x20 = value_x21;
    value_x21 = field1;
    if (field2 == 0) goto block_20;
    goto block_11;
}
block_11: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field3 - 1)) != 0) goto block_20;
    goto block_17;
}
block_17: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_20;
}
block_20: {
    const uint64_t result1 = RecoveredCall_dde740_1(value_x20);
    if (value_x21 != 0) goto block_7;
    goto block_23;
}
block_23: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field6;
    if (field6 == 0) goto block_35;
    goto block_26;
}
block_26: {
    const uint32_t field7 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field7 - 1)) != 0) goto block_35;
    goto block_32;
}
block_32: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field9)(value_x0,field9);
    return;
    __builtin_unreachable();
}
block_35: {

    return;
}
}





extern "C" unsigned char LeafData_dde7f0_2[];
extern "C" uint64_t RecoveredCall_dde7f0_1(uint64_t);
extern "C" void LeafTarget_dde7f0_36(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_dde7f0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dde7f0_2) - 2632) + 2632);
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = 0;
    value_x19 = value_x0;
    value_x21 = field0;
    if (field0 == 0) goto block_23;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field2;
    value_x20 = value_x21;
    value_x21 = field1;
    if (field2 == 0) goto block_20;
    goto block_11;
}
block_11: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field3 - 1)) != 0) goto block_20;
    goto block_17;
}
block_17: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_20;
}
block_20: {
    const uint64_t result1 = RecoveredCall_dde7f0_1(value_x20);
    if (value_x21 != 0) goto block_7;
    goto block_23;
}
block_23: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field6;
    if (field6 == 0) goto block_35;
    goto block_26;
}
block_26: {
    const uint32_t field7 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field7 - 1)) != 0) goto block_35;
    goto block_32;
}
block_32: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field9)(value_x0);
    goto block_35;
}
block_35: {

    return LeafTarget_dde7f0_36(value_x19);
}
}





extern "C" unsigned char LeafData_de4320_0[];
extern "C" uint64_t RecoveredCall_de4320_0(uint64_t);
extern "C" uint64_t RecoveredCall_de4320_2(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_de4320(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_de4320_0) - 664) + 664);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 56));
    const uint64_t result0 = RecoveredCall_de4320_0(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = 0;
    value_x19 = value_x0;
    value_x21 = field1;
    if (field1 == 0) goto block_25;
    goto block_9;
}
block_9: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field3;
    value_x20 = value_x21;
    value_x21 = field2;
    if (field3 == 0) goto block_22;
    goto block_13;
}
block_13: {
    const uint32_t field4 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field4 - 1)) != 0) goto block_22;
    goto block_19;
}
block_19: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field6)(value_x0);
    goto block_22;
}
block_22: {
    const uint64_t result2 = RecoveredCall_de4320_2(value_x20);
    if (value_x21 != 0) goto block_9;
    goto block_25;
}
block_25: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field7;
    if (field7 == 0) goto block_37;
    goto block_28;
}
block_28: {
    const uint32_t field8 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field8 - 1)) != 0) goto block_37;
    goto block_34;
}
block_34: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 8));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field10)(value_x0,field10);
    return;
    __builtin_unreachable();
}
block_37: {

    return;
}
}





extern "C" unsigned char LeafData_de43d0_0[];
extern "C" uint64_t RecoveredCall_de43d0_0(uint64_t);
extern "C" uint64_t RecoveredCall_de43d0_2(uint64_t);
extern "C" void LeafTarget_de43d0_38(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_de43d0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_de43d0_0) - 664) + 664);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 56));
    const uint64_t result0 = RecoveredCall_de43d0_0(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = 0;
    value_x19 = value_x0;
    value_x21 = field1;
    if (field1 == 0) goto block_25;
    goto block_9;
}
block_9: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field3;
    value_x20 = value_x21;
    value_x21 = field2;
    if (field3 == 0) goto block_22;
    goto block_13;
}
block_13: {
    const uint32_t field4 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field4 - 1)) != 0) goto block_22;
    goto block_19;
}
block_19: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field6)(value_x0);
    goto block_22;
}
block_22: {
    const uint64_t result2 = RecoveredCall_de43d0_2(value_x20);
    if (value_x21 != 0) goto block_9;
    goto block_25;
}
block_25: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field7;
    if (field7 == 0) goto block_37;
    goto block_28;
}
block_28: {
    const uint32_t field8 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field8 - 1)) != 0) goto block_37;
    goto block_34;
}
block_34: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 8));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t)>(field10)(value_x0);
    goto block_37;
}
block_37: {

    return LeafTarget_de43d0_38(value_x19);
}
}





extern "C" unsigned char LeafData_de4710_0[];
extern "C" uint64_t RecoveredCall_de4710_0(uint64_t);
extern "C" uint64_t RecoveredCall_de4710_2(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_de4710(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_de4710_0) - 816) + 816);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 56));
    const uint64_t result0 = RecoveredCall_de4710_0(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = 0;
    value_x19 = value_x0;
    value_x21 = field1;
    if (field1 == 0) goto block_25;
    goto block_9;
}
block_9: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field3;
    value_x20 = value_x21;
    value_x21 = field2;
    if (field3 == 0) goto block_22;
    goto block_13;
}
block_13: {
    const uint32_t field4 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field4 - 1)) != 0) goto block_22;
    goto block_19;
}
block_19: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field6)(value_x0);
    goto block_22;
}
block_22: {
    const uint64_t result2 = RecoveredCall_de4710_2(value_x20);
    if (value_x21 != 0) goto block_9;
    goto block_25;
}
block_25: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field7;
    if (field7 == 0) goto block_37;
    goto block_28;
}
block_28: {
    const uint32_t field8 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field8 - 1)) != 0) goto block_37;
    goto block_34;
}
block_34: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 8));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field10)(value_x0,field10);
    return;
    __builtin_unreachable();
}
block_37: {

    return;
}
}





extern "C" unsigned char LeafData_de47c0_0[];
extern "C" uint64_t RecoveredCall_de47c0_0(uint64_t);
extern "C" uint64_t RecoveredCall_de47c0_2(uint64_t);
extern "C" void LeafTarget_de47c0_38(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_de47c0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_de47c0_0) - 816) + 816);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 56));
    const uint64_t result0 = RecoveredCall_de47c0_0(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = 0;
    value_x19 = value_x0;
    value_x21 = field1;
    if (field1 == 0) goto block_25;
    goto block_9;
}
block_9: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field3;
    value_x20 = value_x21;
    value_x21 = field2;
    if (field3 == 0) goto block_22;
    goto block_13;
}
block_13: {
    const uint32_t field4 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field4 - 1)) != 0) goto block_22;
    goto block_19;
}
block_19: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field6)(value_x0);
    goto block_22;
}
block_22: {
    const uint64_t result2 = RecoveredCall_de47c0_2(value_x20);
    if (value_x21 != 0) goto block_9;
    goto block_25;
}
block_25: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field7;
    if (field7 == 0) goto block_37;
    goto block_28;
}
block_28: {
    const uint32_t field8 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field8 - 1)) != 0) goto block_37;
    goto block_34;
}
block_34: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 8));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t)>(field10)(value_x0);
    goto block_37;
}
block_37: {

    return LeafTarget_de47c0_38(value_x19);
}
}





extern "C" unsigned char LeafData_de4b00_0[];
extern "C" uint64_t RecoveredCall_de4b00_0(uint64_t);
extern "C" uint64_t RecoveredCall_de4b00_2(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_de4b00(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_de4b00_0) - 968) + 968);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 56));
    const uint64_t result0 = RecoveredCall_de4b00_0(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = 0;
    value_x19 = value_x0;
    value_x21 = field1;
    if (field1 == 0) goto block_25;
    goto block_9;
}
block_9: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field3;
    value_x20 = value_x21;
    value_x21 = field2;
    if (field3 == 0) goto block_22;
    goto block_13;
}
block_13: {
    const uint32_t field4 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field4 - 1)) != 0) goto block_22;
    goto block_19;
}
block_19: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field6)(value_x0);
    goto block_22;
}
block_22: {
    const uint64_t result2 = RecoveredCall_de4b00_2(value_x20);
    if (value_x21 != 0) goto block_9;
    goto block_25;
}
block_25: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field7;
    if (field7 == 0) goto block_37;
    goto block_28;
}
block_28: {
    const uint32_t field8 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field8 - 1)) != 0) goto block_37;
    goto block_34;
}
block_34: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 8));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field10)(value_x0,field10);
    return;
    __builtin_unreachable();
}
block_37: {

    return;
}
}





extern "C" unsigned char LeafData_de4bb0_0[];
extern "C" uint64_t RecoveredCall_de4bb0_0(uint64_t);
extern "C" uint64_t RecoveredCall_de4bb0_2(uint64_t);
extern "C" void LeafTarget_de4bb0_38(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_de4bb0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_de4bb0_0) - 968) + 968);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 56));
    const uint64_t result0 = RecoveredCall_de4bb0_0(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = 0;
    value_x19 = value_x0;
    value_x21 = field1;
    if (field1 == 0) goto block_25;
    goto block_9;
}
block_9: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field3;
    value_x20 = value_x21;
    value_x21 = field2;
    if (field3 == 0) goto block_22;
    goto block_13;
}
block_13: {
    const uint32_t field4 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field4 - 1)) != 0) goto block_22;
    goto block_19;
}
block_19: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field6)(value_x0);
    goto block_22;
}
block_22: {
    const uint64_t result2 = RecoveredCall_de4bb0_2(value_x20);
    if (value_x21 != 0) goto block_9;
    goto block_25;
}
block_25: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field7;
    if (field7 == 0) goto block_37;
    goto block_28;
}
block_28: {
    const uint32_t field8 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field8 - 1)) != 0) goto block_37;
    goto block_34;
}
block_34: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 8));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t)>(field10)(value_x0);
    goto block_37;
}
block_37: {

    return LeafTarget_de4bb0_38(value_x19);
}
}





extern "C" unsigned char LeafData_de4f00_2[];
extern "C" uint64_t RecoveredCall_de4f00_1(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_de4f00(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_de4f00_2) - 1120) + 1120);
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = 0;
    value_x19 = value_x0;
    value_x21 = field0;
    if (field0 == 0) goto block_23;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field2;
    value_x20 = value_x21;
    value_x21 = field1;
    if (field2 == 0) goto block_20;
    goto block_11;
}
block_11: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field3 - 1)) != 0) goto block_20;
    goto block_17;
}
block_17: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_20;
}
block_20: {
    const uint64_t result1 = RecoveredCall_de4f00_1(value_x20);
    if (value_x21 != 0) goto block_7;
    goto block_23;
}
block_23: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field6;
    if (field6 == 0) goto block_35;
    goto block_26;
}
block_26: {
    const uint32_t field7 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field7 - 1)) != 0) goto block_35;
    goto block_32;
}
block_32: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field9)(value_x0,field9);
    return;
    __builtin_unreachable();
}
block_35: {

    return;
}
}





extern "C" unsigned char LeafData_de5260_2[];
extern "C" uint64_t RecoveredCall_de5260_1(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_de5260(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_de5260_2) - 1336) + 1336);
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = 0;
    value_x19 = value_x0;
    value_x21 = field0;
    if (field0 == 0) goto block_23;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field2;
    value_x20 = value_x21;
    value_x21 = field1;
    if (field2 == 0) goto block_20;
    goto block_11;
}
block_11: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field3 - 1)) != 0) goto block_20;
    goto block_17;
}
block_17: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_20;
}
block_20: {
    const uint64_t result1 = RecoveredCall_de5260_1(value_x20);
    if (value_x21 != 0) goto block_7;
    goto block_23;
}
block_23: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field6;
    if (field6 == 0) goto block_35;
    goto block_26;
}
block_26: {
    const uint32_t field7 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field7 - 1)) != 0) goto block_35;
    goto block_32;
}
block_32: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field9)(value_x0,field9);
    return;
    __builtin_unreachable();
}
block_35: {

    return;
}
}





extern "C" unsigned char LeafData_de5310_2[];
extern "C" uint64_t RecoveredCall_de5310_1(uint64_t);
extern "C" void LeafTarget_de5310_36(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_de5310(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_de5310_2) - 1336) + 1336);
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = 0;
    value_x19 = value_x0;
    value_x21 = field0;
    if (field0 == 0) goto block_23;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field2;
    value_x20 = value_x21;
    value_x21 = field1;
    if (field2 == 0) goto block_20;
    goto block_11;
}
block_11: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field3 - 1)) != 0) goto block_20;
    goto block_17;
}
block_17: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_20;
}
block_20: {
    const uint64_t result1 = RecoveredCall_de5310_1(value_x20);
    if (value_x21 != 0) goto block_7;
    goto block_23;
}
block_23: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field6;
    if (field6 == 0) goto block_35;
    goto block_26;
}
block_26: {
    const uint32_t field7 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field7 - 1)) != 0) goto block_35;
    goto block_32;
}
block_32: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field9)(value_x0);
    goto block_35;
}
block_35: {

    return LeafTarget_de5310_36(value_x19);
}
}





extern "C" unsigned char LeafData_de9c60_2[];
extern "C" uint64_t RecoveredCall_de9c60_1(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_de9c60(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_de9c60_2) - 1728) + 1728);
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = 0;
    value_x19 = value_x0;
    value_x21 = field0;
    if (field0 == 0) goto block_23;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field2;
    value_x20 = value_x21;
    value_x21 = field1;
    if (field2 == 0) goto block_20;
    goto block_11;
}
block_11: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field3 - 1)) != 0) goto block_20;
    goto block_17;
}
block_17: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_20;
}
block_20: {
    const uint64_t result1 = RecoveredCall_de9c60_1(value_x20);
    if (value_x21 != 0) goto block_7;
    goto block_23;
}
block_23: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field6;
    if (field6 == 0) goto block_35;
    goto block_26;
}
block_26: {
    const uint32_t field7 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field7 - 1)) != 0) goto block_35;
    goto block_32;
}
block_32: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field9)(value_x0,field9);
    return;
    __builtin_unreachable();
}
block_35: {

    return;
}
}





extern "C" unsigned char LeafData_de9d10_2[];
extern "C" uint64_t RecoveredCall_de9d10_1(uint64_t);
extern "C" void LeafTarget_de9d10_36(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_de9d10(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_de9d10_2) - 1728) + 1728);
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = 0;
    value_x19 = value_x0;
    value_x21 = field0;
    if (field0 == 0) goto block_23;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field2;
    value_x20 = value_x21;
    value_x21 = field1;
    if (field2 == 0) goto block_20;
    goto block_11;
}
block_11: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field3 - 1)) != 0) goto block_20;
    goto block_17;
}
block_17: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_20;
}
block_20: {
    const uint64_t result1 = RecoveredCall_de9d10_1(value_x20);
    if (value_x21 != 0) goto block_7;
    goto block_23;
}
block_23: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field6;
    if (field6 == 0) goto block_35;
    goto block_26;
}
block_26: {
    const uint32_t field7 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field7 - 1)) != 0) goto block_35;
    goto block_32;
}
block_32: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field9)(value_x0);
    goto block_35;
}
block_35: {

    return LeafTarget_de9d10_36(value_x19);
}
}





extern "C" unsigned char LeafData_ded490_0[];
extern "C" uint64_t RecoveredCall_ded490_0(uint64_t);
extern "C" uint64_t RecoveredCall_ded490_2(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ded490(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_ded490_0) - 2824) + 2824);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 56));
    const uint64_t result0 = RecoveredCall_ded490_0(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = 0;
    value_x19 = value_x0;
    value_x21 = field1;
    if (field1 == 0) goto block_25;
    goto block_9;
}
block_9: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field3;
    value_x20 = value_x21;
    value_x21 = field2;
    if (field3 == 0) goto block_22;
    goto block_13;
}
block_13: {
    const uint32_t field4 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field4 - 1)) != 0) goto block_22;
    goto block_19;
}
block_19: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field6)(value_x0);
    goto block_22;
}
block_22: {
    const uint64_t result2 = RecoveredCall_ded490_2(value_x20);
    if (value_x21 != 0) goto block_9;
    goto block_25;
}
block_25: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field7;
    if (field7 == 0) goto block_37;
    goto block_28;
}
block_28: {
    const uint32_t field8 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field8 - 1)) != 0) goto block_37;
    goto block_34;
}
block_34: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 8));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field10)(value_x0,field10);
    return;
    __builtin_unreachable();
}
block_37: {

    return;
}
}





extern "C" unsigned char LeafData_ded540_0[];
extern "C" uint64_t RecoveredCall_ded540_0(uint64_t);
extern "C" uint64_t RecoveredCall_ded540_2(uint64_t);
extern "C" void LeafTarget_ded540_38(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ded540(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_ded540_0) - 2824) + 2824);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 56));
    const uint64_t result0 = RecoveredCall_ded540_0(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = 0;
    value_x19 = value_x0;
    value_x21 = field1;
    if (field1 == 0) goto block_25;
    goto block_9;
}
block_9: {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field3;
    value_x20 = value_x21;
    value_x21 = field2;
    if (field3 == 0) goto block_22;
    goto block_13;
}
block_13: {
    const uint32_t field4 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field4 - 1)) != 0) goto block_22;
    goto block_19;
}
block_19: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field6)(value_x0);
    goto block_22;
}
block_22: {
    const uint64_t result2 = RecoveredCall_ded540_2(value_x20);
    if (value_x21 != 0) goto block_9;
    goto block_25;
}
block_25: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field7;
    if (field7 == 0) goto block_37;
    goto block_28;
}
block_28: {
    const uint32_t field8 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field8 - 1)) != 0) goto block_37;
    goto block_34;
}
block_34: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 8));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t)>(field10)(value_x0);
    goto block_37;
}
block_37: {

    return LeafTarget_ded540_38(value_x19);
}
}





extern "C" unsigned char LeafData_df0db0_0[];
extern "C" uint64_t RecoveredCall_df0db0_0(uint64_t);
extern "C" unsigned char LeafData_df0db0_16[];
extern "C" void LeafTarget_df0db0_40(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_df0db0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df0db0_0) - 3728) + 3728);
    *reinterpret_cast<uint64_t*>((value_x0 + 16)) = (((reinterpret_cast<uintptr_t>(LeafData_df0db0_0) - 3728) + 3728) + 120);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 136));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field0)) != 2) goto block_16;
    goto block_9;
}
block_9: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 120));
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field1 + 0)), 1, __ATOMIC_RELAXED);
    value_x0 = field1;
    if (uint32_t((field2 - 1)) != 0) goto block_16;
    goto block_15;
}
block_15: {
    const uint64_t result0 = RecoveredCall_df0db0_0(value_x0);
    goto block_16;
}
block_16: {
    *reinterpret_cast<uint64_t*>((value_x19 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df0db0_16) - 3504) + 3504);
    *reinterpret_cast<uint64_t*>((value_x19 + 16)) = (((reinterpret_cast<uintptr_t>(LeafData_df0db0_16) - 3504) + 3504) + 120);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 104));
    value_x8 = field3;
    if (field3 == 0) goto block_39;
    goto block_23;
}
block_23: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 88));
    *reinterpret_cast<uint64_t*>((value_x19 + 104)) = (value_x8 - 1);
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + ((value_x8 - 1) << 3)));
    value_x0 = field5;
    value_x8 = (value_x8 - 1);
    if (field5 == 0) goto block_38;
    goto block_28;
}
block_28: {
    const uint32_t field6 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field6 - 1)) != 0) goto block_37;
    goto block_34;
}
block_34: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field8)(value_x0);
    goto block_37;
}
block_37: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x19 + 104));
    value_x8 = field9;
    goto block_38;
}
block_38: {

    if (value_x8 != 0) goto block_23;
    goto block_39;
}
block_39: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x19 + 88));
    return LeafTarget_df0db0_40(field10);
}
}





extern "C" unsigned char LeafData_df0e60_0[];
extern "C" uint64_t RecoveredCall_df0e60_0(uint64_t);
extern "C" unsigned char LeafData_df0e60_16[];
extern "C" uint64_t RecoveredCall_df0e60_2(uint64_t);
extern "C" void LeafTarget_df0e60_42(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_df0e60(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df0e60_0) - 3728) + 3728);
    *reinterpret_cast<uint64_t*>((value_x0 + 16)) = (((reinterpret_cast<uintptr_t>(LeafData_df0e60_0) - 3728) + 3728) + 120);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 136));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field0)) != 2) goto block_16;
    goto block_9;
}
block_9: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 120));
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field1 + 0)), 1, __ATOMIC_RELAXED);
    value_x0 = field1;
    if (uint32_t((field2 - 1)) != 0) goto block_16;
    goto block_15;
}
block_15: {
    const uint64_t result0 = RecoveredCall_df0e60_0(value_x0);
    goto block_16;
}
block_16: {
    *reinterpret_cast<uint64_t*>((value_x19 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df0e60_16) - 3504) + 3504);
    *reinterpret_cast<uint64_t*>((value_x19 + 16)) = (((reinterpret_cast<uintptr_t>(LeafData_df0e60_16) - 3504) + 3504) + 120);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 104));
    value_x8 = field3;
    if (field3 == 0) goto block_39;
    goto block_23;
}
block_23: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 88));
    *reinterpret_cast<uint64_t*>((value_x19 + 104)) = (value_x8 - 1);
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + ((value_x8 - 1) << 3)));
    value_x0 = field5;
    value_x8 = (value_x8 - 1);
    if (field5 == 0) goto block_38;
    goto block_28;
}
block_28: {
    const uint32_t field6 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field6 - 1)) != 0) goto block_37;
    goto block_34;
}
block_34: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field8)(value_x0);
    goto block_37;
}
block_37: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x19 + 104));
    value_x8 = field9;
    goto block_38;
}
block_38: {

    if (value_x8 != 0) goto block_23;
    goto block_39;
}
block_39: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x19 + 88));
    const uint64_t result2 = RecoveredCall_df0e60_2(field10);
    return LeafTarget_df0e60_42(value_x19);
}
}





extern "C" unsigned char LeafData_df11e0_0[];
extern "C" void LeafTarget_df11e0_25(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_df11e0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df11e0_0) - 3504) + 3504);
    *reinterpret_cast<uint64_t*>((value_x0 + 16)) = (((reinterpret_cast<uintptr_t>(LeafData_df11e0_0) - 3504) + 3504) + 120);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 104));
    value_x19 = value_x0;
    value_x8 = field0;
    if (field0 == 0) goto block_24;
    goto block_8;
}
block_8: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 88));
    *reinterpret_cast<uint64_t*>((value_x19 + 104)) = (value_x8 - 1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + ((value_x8 - 1) << 3)));
    value_x0 = field2;
    value_x8 = (value_x8 - 1);
    if (field2 == 0) goto block_23;
    goto block_13;
}
block_13: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field3 - 1)) != 0) goto block_22;
    goto block_19;
}
block_19: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_22;
}
block_22: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 104));
    value_x8 = field6;
    goto block_23;
}
block_23: {

    if (value_x8 != 0) goto block_8;
    goto block_24;
}
block_24: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 88));
    return LeafTarget_df11e0_25(field7);
}
}





extern "C" unsigned char LeafData_df1250_0[];
extern "C" uint64_t RecoveredCall_df1250_1(uint64_t);
extern "C" void LeafTarget_df1250_27(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_df1250(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df1250_0) - 3504) + 3504);
    *reinterpret_cast<uint64_t*>((value_x0 + 16)) = (((reinterpret_cast<uintptr_t>(LeafData_df1250_0) - 3504) + 3504) + 120);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 104));
    value_x19 = value_x0;
    value_x8 = field0;
    if (field0 == 0) goto block_24;
    goto block_8;
}
block_8: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 88));
    *reinterpret_cast<uint64_t*>((value_x19 + 104)) = (value_x8 - 1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + ((value_x8 - 1) << 3)));
    value_x0 = field2;
    value_x8 = (value_x8 - 1);
    if (field2 == 0) goto block_23;
    goto block_13;
}
block_13: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field3 - 1)) != 0) goto block_22;
    goto block_19;
}
block_19: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_22;
}
block_22: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 104));
    value_x8 = field6;
    goto block_23;
}
block_23: {

    if (value_x8 != 0) goto block_8;
    goto block_24;
}
block_24: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 88));
    const uint64_t result1 = RecoveredCall_df1250_1(field7);
    return LeafTarget_df1250_27(value_x19);
}
}





extern "C" unsigned char LeafData_df12d0_0[];
extern "C" void LeafTarget_df12d0_25(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_df12d0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df12d0_0) - 4072) + 4072);
    *reinterpret_cast<uint64_t*>((value_x0 + 16)) = (((reinterpret_cast<uintptr_t>(LeafData_df12d0_0) - 4072) + 4072) + 56);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 72));
    value_x19 = value_x0;
    value_x8 = field0;
    if (field0 == 0) goto block_24;
    goto block_8;
}
block_8: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 56));
    *reinterpret_cast<uint64_t*>((value_x19 + 72)) = (value_x8 - 1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + ((value_x8 - 1) << 3)));
    value_x0 = field2;
    value_x8 = (value_x8 - 1);
    if (field2 == 0) goto block_23;
    goto block_13;
}
block_13: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field3 - 1)) != 0) goto block_22;
    goto block_19;
}
block_19: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_22;
}
block_22: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 72));
    value_x8 = field6;
    goto block_23;
}
block_23: {

    if (value_x8 != 0) goto block_8;
    goto block_24;
}
block_24: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 56));
    return LeafTarget_df12d0_25(field7);
}
}





extern "C" unsigned char LeafData_df1340_0[];
extern "C" uint64_t RecoveredCall_df1340_1(uint64_t);
extern "C" void LeafTarget_df1340_27(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_df1340(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df1340_0) - 4072) + 4072);
    *reinterpret_cast<uint64_t*>((value_x0 + 16)) = (((reinterpret_cast<uintptr_t>(LeafData_df1340_0) - 4072) + 4072) + 56);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 72));
    value_x19 = value_x0;
    value_x8 = field0;
    if (field0 == 0) goto block_24;
    goto block_8;
}
block_8: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 56));
    *reinterpret_cast<uint64_t*>((value_x19 + 72)) = (value_x8 - 1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + ((value_x8 - 1) << 3)));
    value_x0 = field2;
    value_x8 = (value_x8 - 1);
    if (field2 == 0) goto block_23;
    goto block_13;
}
block_13: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field3 - 1)) != 0) goto block_22;
    goto block_19;
}
block_19: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_22;
}
block_22: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 72));
    value_x8 = field6;
    goto block_23;
}
block_23: {

    if (value_x8 != 0) goto block_8;
    goto block_24;
}
block_24: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 56));
    const uint64_t result1 = RecoveredCall_df1340_1(field7);
    return LeafTarget_df1340_27(value_x19);
}
}





extern "C" unsigned char LeafData_df15c0_0[];
extern "C" uint64_t RecoveredCall_df15c0_1(uint64_t);
extern "C" void LeafTarget_df15c0_27(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_df15c0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df15c0_0) - 4072) + 4072);
    *reinterpret_cast<uint64_t*>((value_x0 + 16)) = (((reinterpret_cast<uintptr_t>(LeafData_df15c0_0) - 4072) + 4072) + 56);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 72));
    value_x19 = value_x0;
    value_x8 = field0;
    if (field0 == 0) goto block_24;
    goto block_8;
}
block_8: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 56));
    *reinterpret_cast<uint64_t*>((value_x19 + 72)) = (value_x8 - 1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + ((value_x8 - 1) << 3)));
    value_x0 = field2;
    value_x8 = (value_x8 - 1);
    if (field2 == 0) goto block_23;
    goto block_13;
}
block_13: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field3 - 1)) != 0) goto block_22;
    goto block_19;
}
block_19: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_22;
}
block_22: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 72));
    value_x8 = field6;
    goto block_23;
}
block_23: {

    if (value_x8 != 0) goto block_8;
    goto block_24;
}
block_24: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 56));
    const uint64_t result1 = RecoveredCall_df15c0_1(field7);
    return LeafTarget_df15c0_27(value_x19);
}
}





extern "C" unsigned char LeafData_df1680_0[];
extern "C" uint64_t RecoveredCall_df1680_1(uint64_t);
extern "C" uint64_t RecoveredCall_df1680_3(uint64_t);
extern "C" uint64_t RecoveredCall_df1680_5(uint64_t);
extern "C" void LeafTarget_df1680_83(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_df1680(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df1680_0) - 512) + 512);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 304));
    value_x19 = value_x0;
    value_x8 = field0;
    if (field0 == 0) goto block_22;
    goto block_6;
}
block_6: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 288));
    *reinterpret_cast<uint64_t*>((value_x19 + 304)) = (value_x8 - 1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + ((value_x8 - 1) << 3)));
    value_x0 = field2;
    value_x8 = (value_x8 - 1);
    if (field2 == 0) goto block_21;
    goto block_11;
}
block_11: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field3 - 1)) != 0) goto block_20;
    goto block_17;
}
block_17: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_20;
}
block_20: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 304));
    value_x8 = field6;
    goto block_21;
}
block_21: {

    if (value_x8 != 0) goto block_6;
    goto block_22;
}
block_22: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 288));
    const uint64_t result1 = RecoveredCall_df1680_1(field7);
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x19 + 272));
    value_x8 = field8;
    if (field8 == 0) goto block_42;
    goto block_26;
}
block_26: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x19 + 256));
    *reinterpret_cast<uint64_t*>((value_x19 + 272)) = (value_x8 - 1);
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + ((value_x8 - 1) << 3)));
    value_x0 = field10;
    value_x8 = (value_x8 - 1);
    if (field10 == 0) goto block_41;
    goto block_31;
}
block_31: {
    const uint32_t field11 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field11 - 1)) != 0) goto block_40;
    goto block_37;
}
block_37: {
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field13)(value_x0);
    goto block_40;
}
block_40: {
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((value_x19 + 272));
    value_x8 = field14;
    goto block_41;
}
block_41: {

    if (value_x8 != 0) goto block_26;
    goto block_42;
}
block_42: {
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((value_x19 + 256));
    const uint64_t result3 = RecoveredCall_df1680_3(field15);
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((value_x19 + 240));
    value_x8 = field16;
    if (field16 == 0) goto block_62;
    goto block_46;
}
block_46: {
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((value_x19 + 224));
    *reinterpret_cast<uint64_t*>((value_x19 + 240)) = (value_x8 - 1);
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + ((value_x8 - 1) << 3)));
    value_x0 = field18;
    value_x8 = (value_x8 - 1);
    if (field18 == 0) goto block_61;
    goto block_51;
}
block_51: {
    const uint32_t field19 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field19 - 1)) != 0) goto block_60;
    goto block_57;
}
block_57: {
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 8));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t)>(field21)(value_x0);
    goto block_60;
}
block_60: {
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((value_x19 + 240));
    value_x8 = field22;
    goto block_61;
}
block_61: {

    if (value_x8 != 0) goto block_46;
    goto block_62;
}
block_62: {
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((value_x19 + 224));
    const uint64_t result5 = RecoveredCall_df1680_5(field23);
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>((value_x19 + 208));
    value_x8 = field24;
    if (field24 == 0) goto block_82;
    goto block_66;
}
block_66: {
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((value_x19 + 192));
    *reinterpret_cast<uint64_t*>((value_x19 + 208)) = (value_x8 - 1);
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field25 + ((value_x8 - 1) << 3)));
    value_x0 = field26;
    value_x8 = (value_x8 - 1);
    if (field26 == 0) goto block_81;
    goto block_71;
}
block_71: {
    const uint32_t field27 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field27 - 1)) != 0) goto block_80;
    goto block_77;
}
block_77: {
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 8));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t)>(field29)(value_x0);
    goto block_80;
}
block_80: {
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>((value_x19 + 208));
    value_x8 = field30;
    goto block_81;
}
block_81: {

    if (value_x8 != 0) goto block_66;
    goto block_82;
}
block_82: {
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>((value_x19 + 192));
    return LeafTarget_df1680_83(field31);
}
}





extern "C" unsigned char LeafData_df2890_0[];
extern "C" uint64_t RecoveredCall_df2890_1(uint64_t);
extern "C" uint64_t RecoveredCall_df2890_2(uint64_t);
extern "C" unsigned char LeafData_df2890_35[];
extern "C" unsigned char LeafData_df2890_49[];
extern "C" __attribute__((noinline)) void RecoveredLeaf_df2890(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df2890_0) - 1488) + 1488);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 88));
    value_x19 = value_x0;
    value_x8 = field0;
    if (field0 == 0) goto block_22;
    goto block_6;
}
block_6: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 72));
    *reinterpret_cast<uint64_t*>((value_x19 + 88)) = (value_x8 - 1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + ((value_x8 - 1) << 3)));
    value_x0 = field2;
    value_x8 = (value_x8 - 1);
    if (field2 == 0) goto block_21;
    goto block_11;
}
block_11: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field3 - 1)) != 0) goto block_20;
    goto block_17;
}
block_17: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_20;
}
block_20: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 88));
    value_x8 = field6;
    goto block_21;
}
block_21: {

    if (value_x8 != 0) goto block_6;
    goto block_22;
}
block_22: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 72));
    const uint64_t result1 = RecoveredCall_df2890_1(field7);
    const uint32_t field8 = *reinterpret_cast<const uint32_t*>((value_x19 + 64));
    if (uint32_t(uint32_t(field8)) != 2) goto block_34;
    goto block_27;
}
block_27: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x19 + 48));
    const uint32_t field10 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field9 + 0)), 1, __ATOMIC_RELAXED);
    value_x0 = field9;
    if (uint32_t((field10 - 1)) != 0) goto block_34;
    goto block_33;
}
block_33: {
    const uint64_t result2 = RecoveredCall_df2890_2(value_x0);
    goto block_34;
}
block_34: {
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint64_t*>((value_x19 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df2890_35) - 1360) + 1360);
    value_x0 = field11;
    if (field11 == 0) goto block_48;
    goto block_39;
}
block_39: {
    const uint32_t field12 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field12 - 1)) != 0) goto block_48;
    goto block_45;
}
block_45: {
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 8));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t)>(field14)(value_x0);
    goto block_48;
}
block_48: {
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((value_x19 + 16));
    *reinterpret_cast<uint64_t*>((value_x19 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df2890_49) - 1456) + 1456);
    value_x0 = field15;
    if (field15 == 0) goto block_63;
    goto block_53;
}
block_53: {
    *reinterpret_cast<uint8_t*>((value_x0 + 12)) = 0;
    const uint32_t field16 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field16 - 1)) != 0) goto block_63;
    goto block_60;
}
block_60: {
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 8));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field18)(value_x0,field18);
    return;
    __builtin_unreachable();
}
block_63: {

    return;
}
}





extern "C" unsigned char LeafData_df29a0_0[];
extern "C" uint64_t RecoveredCall_df29a0_1(uint64_t);
extern "C" uint64_t RecoveredCall_df29a0_2(uint64_t);
extern "C" unsigned char LeafData_df29a0_35[];
extern "C" unsigned char LeafData_df29a0_49[];
extern "C" void LeafTarget_df29a0_64(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_df29a0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df29a0_0) - 1488) + 1488);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 88));
    value_x19 = value_x0;
    value_x8 = field0;
    if (field0 == 0) goto block_22;
    goto block_6;
}
block_6: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 72));
    *reinterpret_cast<uint64_t*>((value_x19 + 88)) = (value_x8 - 1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + ((value_x8 - 1) << 3)));
    value_x0 = field2;
    value_x8 = (value_x8 - 1);
    if (field2 == 0) goto block_21;
    goto block_11;
}
block_11: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field3 - 1)) != 0) goto block_20;
    goto block_17;
}
block_17: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_20;
}
block_20: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 88));
    value_x8 = field6;
    goto block_21;
}
block_21: {

    if (value_x8 != 0) goto block_6;
    goto block_22;
}
block_22: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 72));
    const uint64_t result1 = RecoveredCall_df29a0_1(field7);
    const uint32_t field8 = *reinterpret_cast<const uint32_t*>((value_x19 + 64));
    if (uint32_t(uint32_t(field8)) != 2) goto block_34;
    goto block_27;
}
block_27: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x19 + 48));
    const uint32_t field10 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field9 + 0)), 1, __ATOMIC_RELAXED);
    value_x0 = field9;
    if (uint32_t((field10 - 1)) != 0) goto block_34;
    goto block_33;
}
block_33: {
    const uint64_t result2 = RecoveredCall_df29a0_2(value_x0);
    goto block_34;
}
block_34: {
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint64_t*>((value_x19 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df29a0_35) - 1360) + 1360);
    value_x0 = field11;
    if (field11 == 0) goto block_48;
    goto block_39;
}
block_39: {
    const uint32_t field12 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field12 - 1)) != 0) goto block_48;
    goto block_45;
}
block_45: {
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 8));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t)>(field14)(value_x0);
    goto block_48;
}
block_48: {
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((value_x19 + 16));
    *reinterpret_cast<uint64_t*>((value_x19 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df29a0_49) - 1456) + 1456);
    value_x0 = field15;
    if (field15 == 0) goto block_63;
    goto block_53;
}
block_53: {
    *reinterpret_cast<uint8_t*>((value_x0 + 12)) = 0;
    const uint32_t field16 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field16 - 1)) != 0) goto block_63;
    goto block_60;
}
block_60: {
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 8));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t)>(field18)(value_x0);
    goto block_63;
}
block_63: {

    return LeafTarget_df29a0_64(value_x19);
}
}





extern "C" unsigned char LeafData_df6400_0[];
extern "C" uint64_t RecoveredCall_df6400_0(uint64_t);
extern "C" uint64_t RecoveredCall_df6400_2(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_df6400(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df6400_0) - 2472) + 2472);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 104));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field0)) != 2) goto block_14;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 88));
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field1 + 0)), 1, __ATOMIC_RELAXED);
    value_x0 = field1;
    if (uint32_t((field2 - 1)) != 0) goto block_14;
    goto block_13;
}
block_13: {
    const uint64_t result0 = RecoveredCall_df6400_0(value_x0);
    goto block_14;
}
block_14: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 24));
    *reinterpret_cast<uint64_t*>((value_x19 + 24)) = 0;
    value_x21 = field3;
    if (field3 == 0) goto block_33;
    goto block_17;
}
block_17: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field5;
    value_x20 = value_x21;
    value_x21 = field4;
    if (field5 == 0) goto block_30;
    goto block_21;
}
block_21: {
    const uint32_t field6 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field6 - 1)) != 0) goto block_30;
    goto block_27;
}
block_27: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field8)(value_x0);
    goto block_30;
}
block_30: {
    const uint64_t result2 = RecoveredCall_df6400_2(value_x20);
    if (value_x21 != 0) goto block_17;
    goto block_33;
}
block_33: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field9;
    if (field9 == 0) goto block_45;
    goto block_36;
}
block_36: {
    const uint32_t field10 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field10 - 1)) != 0) goto block_45;
    goto block_42;
}
block_42: {
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((field11 + 8));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field12)(value_x0,field12);
    return;
    __builtin_unreachable();
}
block_45: {

    return;
}
}





extern "C" unsigned char LeafData_df64d0_0[];
extern "C" uint64_t RecoveredCall_df64d0_0(uint64_t);
extern "C" uint64_t RecoveredCall_df64d0_2(uint64_t);
extern "C" void LeafTarget_df64d0_46(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_df64d0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df64d0_0) - 2472) + 2472);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 104));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field0)) != 2) goto block_14;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 88));
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field1 + 0)), 1, __ATOMIC_RELAXED);
    value_x0 = field1;
    if (uint32_t((field2 - 1)) != 0) goto block_14;
    goto block_13;
}
block_13: {
    const uint64_t result0 = RecoveredCall_df64d0_0(value_x0);
    goto block_14;
}
block_14: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x19 + 24));
    *reinterpret_cast<uint64_t*>((value_x19 + 24)) = 0;
    value_x21 = field3;
    if (field3 == 0) goto block_33;
    goto block_17;
}
block_17: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field5;
    value_x20 = value_x21;
    value_x21 = field4;
    if (field5 == 0) goto block_30;
    goto block_21;
}
block_21: {
    const uint32_t field6 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field6 - 1)) != 0) goto block_30;
    goto block_27;
}
block_27: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field8)(value_x0);
    goto block_30;
}
block_30: {
    const uint64_t result2 = RecoveredCall_df64d0_2(value_x20);
    if (value_x21 != 0) goto block_17;
    goto block_33;
}
block_33: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field9;
    if (field9 == 0) goto block_45;
    goto block_36;
}
block_36: {
    const uint32_t field10 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field10 - 1)) != 0) goto block_45;
    goto block_42;
}
block_42: {
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((field11 + 8));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t)>(field12)(value_x0);
    goto block_45;
}
block_45: {

    return LeafTarget_df64d0_46(value_x19);
}
}





extern "C" unsigned char LeafData_df79a0_0[];
extern "C" uint64_t RecoveredCall_df79a0_0(uint64_t);
extern "C" uint64_t RecoveredCall_df79a0_1(uint64_t);
extern "C" uint64_t RecoveredCall_df79a0_2(uint64_t);
extern "C" uint64_t RecoveredCall_df79a0_4(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_df79a0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df79a0_0) - 3040) + 3040);
    const uint64_t result0 = RecoveredCall_df79a0_0((value_x0 + 120));
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 96));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field0)) != 2) goto block_15;
    goto block_8;
}
block_8: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 80));
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field1 + 0)), 1, __ATOMIC_RELAXED);
    value_x0 = field1;
    if (uint32_t((field2 - 1)) != 0) goto block_15;
    goto block_14;
}
block_14: {
    const uint64_t result1 = RecoveredCall_df79a0_1(value_x0);
    goto block_15;
}
block_15: {
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x19 + 72));
    if (uint32_t(uint32_t(field3)) != 2) goto block_25;
    goto block_18;
}
block_18: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 56));
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field4 + 0)), 1, __ATOMIC_RELAXED);
    value_x0 = field4;
    if (uint32_t((field5 - 1)) != 0) goto block_25;
    goto block_24;
}
block_24: {
    const uint64_t result2 = RecoveredCall_df79a0_2(value_x0);
    goto block_25;
}
block_25: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 24));
    *reinterpret_cast<uint64_t*>((value_x19 + 24)) = 0;
    value_x21 = field6;
    if (field6 == 0) goto block_44;
    goto block_28;
}
block_28: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field8;
    value_x20 = value_x21;
    value_x21 = field7;
    if (field8 == 0) goto block_41;
    goto block_32;
}
block_32: {
    const uint32_t field9 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field9 - 1)) != 0) goto block_41;
    goto block_38;
}
block_38: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 8));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t)>(field11)(value_x0);
    goto block_41;
}
block_41: {
    const uint64_t result4 = RecoveredCall_df79a0_4(value_x20);
    if (value_x21 != 0) goto block_28;
    goto block_44;
}
block_44: {
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field12;
    if (field12 == 0) goto block_56;
    goto block_47;
}
block_47: {
    const uint32_t field13 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field13 - 1)) != 0) goto block_56;
    goto block_53;
}
block_53: {
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((field14 + 8));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field15)(value_x0,field15);
    return;
    __builtin_unreachable();
}
block_56: {

    return;
}
}





extern "C" unsigned char LeafData_dfd2c0_2[];
extern "C" uint64_t RecoveredCall_dfd2c0_0(uint64_t);
extern "C" uint64_t RecoveredCall_dfd2c0_1(uint64_t);
extern "C" uint64_t RecoveredCall_dfd2c0_2(uint64_t);
extern "C" uint64_t RecoveredCall_dfd2c0_3(uint64_t);
extern "C" uint64_t RecoveredCall_dfd2c0_4(uint64_t);
extern "C" uint64_t RecoveredCall_dfd2c0_5(uint64_t);
extern "C" uint64_t RecoveredCall_dfd2c0_6(uint64_t);
extern "C" uint64_t RecoveredCall_dfd2c0_7(uint64_t);
extern "C" uint64_t RecoveredCall_dfd2c0_8(uint64_t);
extern "C" uint64_t RecoveredCall_dfd2c0_9(uint64_t);
extern "C" uint64_t RecoveredCall_dfd2c0_10(uint64_t);
extern "C" uint64_t RecoveredCall_dfd2c0_11(uint64_t);
extern "C" uint64_t RecoveredCall_dfd2c0_13(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_dfd2c0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 640));
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dfd2c0_2) - 80) + 80);
    value_x19 = value_x0;
    value_x20 = field0;
    if (field0 == 0) goto block_10;
    goto block_6;
}
block_6: {
    const uint64_t result0 = RecoveredCall_dfd2c0_0(value_x20);
    const uint64_t result1 = RecoveredCall_dfd2c0_1(value_x20);
    goto block_10;
}
block_10: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 712));
    value_x20 = field1;
    if (field1 == 0) goto block_22;
    goto block_12;
}
block_12: {
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x20 + 0));
    if (uint32_t(uint32_t(field2)) == 0) goto block_20;
    goto block_14;
}
block_14: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x20 + 8));
    value_x21 = field3;
    if (field3 == 0) goto block_20;
    goto block_16;
}
block_16: {
    const uint64_t result2 = RecoveredCall_dfd2c0_2(value_x21);
    const uint64_t result3 = RecoveredCall_dfd2c0_3(value_x21);
    goto block_20;
}
block_20: {
    const uint64_t result4 = RecoveredCall_dfd2c0_4(value_x20);
    goto block_22;
}
block_22: {
    const uint8_t field4 = *reinterpret_cast<const uint8_t*>((value_x19 + 696));
    if (uint32_t(uint32_t(field4)) == 0) goto block_32;
    goto block_24;
}
block_24: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x19 + 704));
    value_x20 = field5;
    if (field5 == 0) goto block_30;
    goto block_26;
}
block_26: {
    const uint64_t result5 = RecoveredCall_dfd2c0_5(value_x20);
    const uint64_t result6 = RecoveredCall_dfd2c0_6(value_x20);
    goto block_30;
}
block_30: {
    *reinterpret_cast<uint64_t*>((value_x19 + 704)) = 0;
    *reinterpret_cast<uint8_t*>((value_x19 + 696)) = 0;
    goto block_32;
}
block_32: {
    const uint8_t field6 = *reinterpret_cast<const uint8_t*>((value_x19 + 656));
    if (uint32_t(uint32_t(field6)) == 0) goto block_42;
    goto block_34;
}
block_34: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x19 + 664));
    value_x20 = field7;
    if (field7 == 0) goto block_40;
    goto block_36;
}
block_36: {
    const uint64_t result7 = RecoveredCall_dfd2c0_7(value_x20);
    const uint64_t result8 = RecoveredCall_dfd2c0_8(value_x20);
    goto block_40;
}
block_40: {
    *reinterpret_cast<uint64_t*>((value_x19 + 664)) = 0;
    *reinterpret_cast<uint8_t*>((value_x19 + 656)) = 0;
    goto block_42;
}
block_42: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x19 + 504));
    value_x0 = field8;
    if (field8 == 0) goto block_48;
    goto block_44;
}
block_44: {
    const uint8_t field9 = *reinterpret_cast<const uint8_t*>((value_x19 + 496));
    if (uint32_t(uint32_t(field9)) == 0) goto block_48;
    goto block_46;
}
block_46: {
    const uint64_t result9 = RecoveredCall_dfd2c0_9(value_x0);
    *reinterpret_cast<uint64_t*>((value_x19 + 504)) = 0;
    goto block_48;
}
block_48: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x19 + 16));
    if (field10 == 0) goto block_68;
    goto block_50;
}
block_50: {
    const uint64_t result10 = RecoveredCall_dfd2c0_10((value_x19 + 48));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    const uint64_t result11 = RecoveredCall_dfd2c0_11(field11);
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((value_x19 + 16));
    *reinterpret_cast<uint64_t*>(((value_x19 + 32) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x19 + 32) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((value_x19 + 16)) = 0;
    value_x0 = field12;
    if (field12 == 0) goto block_69;
    goto block_58;
}
block_58: {
    const uint32_t field13 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field13 - 1)) != 0) goto block_69;
    goto block_64;
}
block_64: {
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((field14 + 8));
    const uint64_t result12 = reinterpret_cast<uint64_t (*)(uint64_t)>(field15)(value_x0);
    goto block_69;
}
block_68: {
    *reinterpret_cast<uint64_t*>((value_x19 + 16)) = 0;
    goto block_69;
}
block_69: {
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint8_t*>((value_x19 + 24)) = 0;
    const uint64_t result13 = RecoveredCall_dfd2c0_13(field16);
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((value_x19 + 16));
    value_x0 = field17;
    if (field17 == 0) goto block_83;
    goto block_74;
}
block_74: {
    const uint32_t field18 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field18 - 1)) != 0) goto block_83;
    goto block_80;
}
block_80: {
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>((field19 + 8));
    const uint64_t result14 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field20)(value_x0,field20);
    return;
    __builtin_unreachable();
}
block_83: {

    return;
}
}





extern "C" unsigned char LeafData_e0d160_0[];
extern "C" uint64_t RecoveredCall_e0d160_0(uint64_t);
extern "C" void LeafTarget_e0d160_23(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_e0d160(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_e0d160_0) - 2608) + 2608);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 56));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field0)) != 2) goto block_14;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 40));
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field1 + 0)), 1, __ATOMIC_RELAXED);
    value_x0 = field1;
    if (uint32_t((field2 - 1)) != 0) goto block_14;
    goto block_13;
}
block_13: {
    const uint64_t result0 = RecoveredCall_e0d160_0(value_x0);
    goto block_14;
}
block_14: {
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x19 + 32));
    if (uint32_t(uint32_t(field3)) != 2) goto block_24;
    goto block_17;
}
block_17: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 16));
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field4 + 0)), 1, __ATOMIC_RELAXED);
    value_x0 = field4;
    if (uint32_t((field5 - 1)) != 0) goto block_24;
    goto block_23;
}
block_23: {

    return LeafTarget_e0d160_23(value_x0);
}
block_24: {

    return;
}
}





extern "C" unsigned char LeafData_e0d200_0[];
extern "C" uint64_t RecoveredCall_e0d200_0(uint64_t);
extern "C" void LeafTarget_e0d200_23(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_e0d200(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_e0d200_0) - 2608) + 2608);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 56));
    value_x19 = value_x0;
    if (uint32_t(uint32_t(field0)) != 2) goto block_14;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x19 + 40));
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field1 + 0)), 1, __ATOMIC_RELAXED);
    value_x0 = field1;
    if (uint32_t((field2 - 1)) != 0) goto block_14;
    goto block_13;
}
block_13: {
    const uint64_t result0 = RecoveredCall_e0d200_0(value_x0);
    goto block_14;
}
block_14: {
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x19 + 32));
    if (uint32_t(uint32_t(field3)) != 2) goto block_24;
    goto block_17;
}
block_17: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 16));
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field4 + 0)), 1, __ATOMIC_RELAXED);
    value_x0 = field4;
    if (uint32_t((field5 - 1)) != 0) goto block_24;
    goto block_23;
}
block_23: {

    return LeafTarget_e0d200_23(value_x0);
}
block_24: {

    return;
}
}





extern "C" unsigned char LeafData_e955c0_2[];
extern "C" uint64_t RecoveredCall_e955c0_1(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_e955c0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_e955c0_2) - 2240) + 2240);
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = 0;
    value_x19 = value_x0;
    value_x21 = field0;
    if (field0 == 0) goto block_23;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field2;
    value_x20 = value_x21;
    value_x21 = field1;
    if (field2 == 0) goto block_20;
    goto block_11;
}
block_11: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field3 - 1)) != 0) goto block_20;
    goto block_17;
}
block_17: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_20;
}
block_20: {
    const uint64_t result1 = RecoveredCall_e955c0_1(value_x20);
    if (value_x21 != 0) goto block_7;
    goto block_23;
}
block_23: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field6;
    if (field6 == 0) goto block_35;
    goto block_26;
}
block_26: {
    const uint32_t field7 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field7 - 1)) != 0) goto block_35;
    goto block_32;
}
block_32: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field9)(value_x0,field9);
    return;
    __builtin_unreachable();
}
block_35: {

    return;
}
}





extern "C" unsigned char LeafData_e95670_2[];
extern "C" uint64_t RecoveredCall_e95670_1(uint64_t);
extern "C" void LeafTarget_e95670_36(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_e95670(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_e95670_2) - 2240) + 2240);
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = 0;
    value_x19 = value_x0;
    value_x21 = field0;
    if (field0 == 0) goto block_23;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field2;
    value_x20 = value_x21;
    value_x21 = field1;
    if (field2 == 0) goto block_20;
    goto block_11;
}
block_11: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field3 - 1)) != 0) goto block_20;
    goto block_17;
}
block_17: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_20;
}
block_20: {
    const uint64_t result1 = RecoveredCall_e95670_1(value_x20);
    if (value_x21 != 0) goto block_7;
    goto block_23;
}
block_23: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field6;
    if (field6 == 0) goto block_35;
    goto block_26;
}
block_26: {
    const uint32_t field7 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field7 - 1)) != 0) goto block_35;
    goto block_32;
}
block_32: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field9)(value_x0);
    goto block_35;
}
block_35: {

    return LeafTarget_e95670_36(value_x19);
}
}





extern "C" unsigned char LeafData_ea2330_0[];
extern "C" uint64_t RecoveredCall_ea2330_0(uint64_t);
extern "C" unsigned char LeafData_ea2330_7[];
extern "C" uint64_t RecoveredCall_ea2330_1(uint64_t);
extern "C" uint64_t RecoveredCall_ea2330_3(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ea2330(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_ea2330_0) - 2640) + 2640);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 80));
    const uint64_t result0 = RecoveredCall_ea2330_0(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 56));
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_ea2330_7) - 816) + 816);
    const uint64_t result1 = RecoveredCall_ea2330_1(field1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = 0;
    value_x19 = value_x0;
    value_x21 = field2;
    if (field2 == 0) goto block_30;
    goto block_14;
}
block_14: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field4;
    value_x20 = value_x21;
    value_x21 = field3;
    if (field4 == 0) goto block_27;
    goto block_18;
}
block_18: {
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field5 - 1)) != 0) goto block_27;
    goto block_24;
}
block_24: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(value_x0);
    goto block_27;
}
block_27: {
    const uint64_t result3 = RecoveredCall_ea2330_3(value_x20);
    if (value_x21 != 0) goto block_14;
    goto block_30;
}
block_30: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field8;
    if (field8 == 0) goto block_42;
    goto block_33;
}
block_33: {
    const uint32_t field9 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field9 - 1)) != 0) goto block_42;
    goto block_39;
}
block_39: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 8));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field11)(value_x0,field11);
    return;
    __builtin_unreachable();
}
block_42: {

    return;
}
}





extern "C" unsigned char LeafData_ea2400_0[];
extern "C" uint64_t RecoveredCall_ea2400_0(uint64_t);
extern "C" unsigned char LeafData_ea2400_7[];
extern "C" uint64_t RecoveredCall_ea2400_1(uint64_t);
extern "C" uint64_t RecoveredCall_ea2400_3(uint64_t);
extern "C" void LeafTarget_ea2400_43(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ea2400(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_ea2400_0) - 2640) + 2640);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 80));
    const uint64_t result0 = RecoveredCall_ea2400_0(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 56));
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_ea2400_7) - 816) + 816);
    const uint64_t result1 = RecoveredCall_ea2400_1(field1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = 0;
    value_x19 = value_x0;
    value_x21 = field2;
    if (field2 == 0) goto block_30;
    goto block_14;
}
block_14: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field4;
    value_x20 = value_x21;
    value_x21 = field3;
    if (field4 == 0) goto block_27;
    goto block_18;
}
block_18: {
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field5 - 1)) != 0) goto block_27;
    goto block_24;
}
block_24: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(value_x0);
    goto block_27;
}
block_27: {
    const uint64_t result3 = RecoveredCall_ea2400_3(value_x20);
    if (value_x21 != 0) goto block_14;
    goto block_30;
}
block_30: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field8;
    if (field8 == 0) goto block_42;
    goto block_33;
}
block_33: {
    const uint32_t field9 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field9 - 1)) != 0) goto block_42;
    goto block_39;
}
block_39: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 8));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t)>(field11)(value_x0);
    goto block_42;
}
block_42: {

    return LeafTarget_ea2400_43(value_x19);
}
}





extern "C" unsigned char LeafData_ea2690_2[];
extern "C" uint64_t RecoveredCall_ea2690_1(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ea2690(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_ea2690_2) - 1336) + 1336);
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = 0;
    value_x19 = value_x0;
    value_x21 = field0;
    if (field0 == 0) goto block_23;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field2;
    value_x20 = value_x21;
    value_x21 = field1;
    if (field2 == 0) goto block_20;
    goto block_11;
}
block_11: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field3 - 1)) != 0) goto block_20;
    goto block_17;
}
block_17: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_20;
}
block_20: {
    const uint64_t result1 = RecoveredCall_ea2690_1(value_x20);
    if (value_x21 != 0) goto block_7;
    goto block_23;
}
block_23: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field6;
    if (field6 == 0) goto block_35;
    goto block_26;
}
block_26: {
    const uint32_t field7 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field7 - 1)) != 0) goto block_35;
    goto block_32;
}
block_32: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field9)(value_x0,field9);
    return;
    __builtin_unreachable();
}
block_35: {

    return;
}
}





extern "C" unsigned char LeafData_ea2740_2[];
extern "C" uint64_t RecoveredCall_ea2740_1(uint64_t);
extern "C" void LeafTarget_ea2740_36(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ea2740(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_ea2740_2) - 1336) + 1336);
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = 0;
    value_x19 = value_x0;
    value_x21 = field0;
    if (field0 == 0) goto block_23;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field2;
    value_x20 = value_x21;
    value_x21 = field1;
    if (field2 == 0) goto block_20;
    goto block_11;
}
block_11: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field3 - 1)) != 0) goto block_20;
    goto block_17;
}
block_17: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_20;
}
block_20: {
    const uint64_t result1 = RecoveredCall_ea2740_1(value_x20);
    if (value_x21 != 0) goto block_7;
    goto block_23;
}
block_23: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field6;
    if (field6 == 0) goto block_35;
    goto block_26;
}
block_26: {
    const uint32_t field7 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field7 - 1)) != 0) goto block_35;
    goto block_32;
}
block_32: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field9)(value_x0);
    goto block_35;
}
block_35: {

    return LeafTarget_ea2740_36(value_x19);
}
}





extern "C" unsigned char LeafData_ea27f0_2[];
extern "C" uint64_t RecoveredCall_ea27f0_1(uint64_t);
extern "C" void LeafTarget_ea27f0_36(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ea27f0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_ea27f0_2) - 2632) + 2632);
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = 0;
    value_x19 = value_x0;
    value_x21 = field0;
    if (field0 == 0) goto block_23;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x21 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x0 = field2;
    value_x20 = value_x21;
    value_x21 = field1;
    if (field2 == 0) goto block_20;
    goto block_11;
}
block_11: {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field3 - 1)) != 0) goto block_20;
    goto block_17;
}
block_17: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(value_x0);
    goto block_20;
}
block_20: {
    const uint64_t result1 = RecoveredCall_ea27f0_1(value_x20);
    if (value_x21 != 0) goto block_7;
    goto block_23;
}
block_23: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 32));
    *reinterpret_cast<uint32_t*>((value_x19 + 40)) = 0;
    value_x0 = field6;
    if (field6 == 0) goto block_35;
    goto block_26;
}
block_26: {
    const uint32_t field7 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((value_x0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field7 - 1)) != 0) goto block_35;
    goto block_32;
}
block_32: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field9)(value_x0);
    goto block_35;
}
block_35: {

    return LeafTarget_ea27f0_36(value_x19);
}
}
