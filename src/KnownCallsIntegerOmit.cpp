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
extern "C" uint64_t LeafTarget_221b10_10(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_221b10(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x2;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x0 + 0));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    if (uint32_t(uint32_t(field0)) != uint32_t(uint32_t(field1))) goto block_11;
    goto block_4;
}
block_4: {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x0 + 68));
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x1 + 68));
    value_x2 = uint32_t(field2);
    if (uint32_t(uint32_t(field2)) != uint32_t(uint32_t(field3))) goto block_11;
    goto block_8;
}
block_8: {

    return LeafTarget_221b10_10((value_x0 + 72),(value_x1 + 72),value_x2);
}
block_11: {

    return uint32_t(1);
}
}

extern "C" unsigned char LeafData_e1f8a0_1[];
extern "C" uint64_t RecoveredCall_e1f8a0_0(uint64_t,uint64_t);
extern "C" unsigned char LeafData_e1f8a0_6[];
extern "C" uint64_t RecoveredCall_e1f8a0_1(uint64_t,uint64_t);
extern "C" unsigned char LeafData_e1f8a0_11[];
extern "C" uint64_t RecoveredCall_e1f8a0_2(uint64_t,uint64_t);
extern "C" unsigned char LeafData_e1f8a0_16[];
extern "C" uint64_t RecoveredCall_e1f8a0_3(uint64_t,uint64_t);
extern "C" unsigned char LeafData_e1f8a0_21[];
extern "C" uint64_t RecoveredCall_e1f8a0_4(uint64_t,uint64_t);
extern "C" unsigned char LeafData_e1f8a0_30[];
extern "C" unsigned char LeafData_e1f8a0_33[];
extern "C" unsigned char LeafData_e1f8a0_36[];
extern "C" unsigned char LeafData_e1f8a0_39[];
extern "C" unsigned char LeafData_e1f8a0_42[];
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e1f8a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {

    if (value_x1 == 0) goto block_28;
    goto block_1;
}
block_1: {
    const uint64_t result0 = RecoveredCall_e1f8a0_0(((reinterpret_cast<uintptr_t>(LeafData_e1f8a0_1) - 2741) + 2741),value_x1);
    value_x19 = value_x1;
    if (uint32_t(result0) == 0) goto block_30;
    goto block_6;
}
block_6: {
    const uint64_t result1 = RecoveredCall_e1f8a0_1(((reinterpret_cast<uintptr_t>(LeafData_e1f8a0_6) - 1657) + 1657),value_x19);
    if (uint32_t(result1) == 0) goto block_33;
    goto block_11;
}
block_11: {
    const uint64_t result2 = RecoveredCall_e1f8a0_2(((reinterpret_cast<uintptr_t>(LeafData_e1f8a0_11) - 2098) + 2098),value_x19);
    if (uint32_t(result2) == 0) goto block_36;
    goto block_16;
}
block_16: {
    const uint64_t result3 = RecoveredCall_e1f8a0_3(((reinterpret_cast<uintptr_t>(LeafData_e1f8a0_16) - 313) + 313),value_x19);
    if (uint32_t(result3) == 0) goto block_39;
    goto block_21;
}
block_21: {
    const uint64_t result4 = RecoveredCall_e1f8a0_4(((reinterpret_cast<uintptr_t>(LeafData_e1f8a0_21) - 350) + 350),value_x19);
    if (uint32_t(result4) == 0) goto block_42;
    goto block_26;
}
block_26: {

    return 0;
}
block_28: {

    return 0;
}
block_30: {
    value_x8 = ((reinterpret_cast<uintptr_t>(LeafData_e1f8a0_30) - 264) + 264);
    goto block_44;
}
block_33: {
    value_x8 = ((reinterpret_cast<uintptr_t>(LeafData_e1f8a0_33) - 280) + 280);
    goto block_44;
}
block_36: {
    value_x8 = ((reinterpret_cast<uintptr_t>(LeafData_e1f8a0_36) - 296) + 296);
    goto block_44;
}
block_39: {
    value_x8 = ((reinterpret_cast<uintptr_t>(LeafData_e1f8a0_39) - 312) + 312);
    goto block_44;
}
block_42: {
    value_x8 = ((reinterpret_cast<uintptr_t>(LeafData_e1f8a0_42) - 328) + 328);
    goto block_44;
}
block_44: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    return field0;
}
}

extern "C" unsigned char LeafData_e4b470_1[];
extern "C" uint64_t RecoveredCall_e4b470_0(uint64_t,uint64_t);
extern "C" unsigned char LeafData_e4b470_6[];
extern "C" uint64_t RecoveredCall_e4b470_1(uint64_t,uint64_t);
extern "C" unsigned char LeafData_e4b470_11[];
extern "C" uint64_t RecoveredCall_e4b470_2(uint64_t,uint64_t);
extern "C" unsigned char LeafData_e4b470_20[];
extern "C" unsigned char LeafData_e4b470_23[];
extern "C" unsigned char LeafData_e4b470_26[];
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e4b470(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {

    if (value_x1 == 0) goto block_18;
    goto block_1;
}
block_1: {
    const uint64_t result0 = RecoveredCall_e4b470_0(((reinterpret_cast<uintptr_t>(LeafData_e4b470_1) - 313) + 313),value_x1);
    value_x19 = value_x1;
    if (uint32_t(result0) == 0) goto block_20;
    goto block_6;
}
block_6: {
    const uint64_t result1 = RecoveredCall_e4b470_1(((reinterpret_cast<uintptr_t>(LeafData_e4b470_6) - 2129) + 2129),value_x19);
    if (uint32_t(result1) == 0) goto block_23;
    goto block_11;
}
block_11: {
    const uint64_t result2 = RecoveredCall_e4b470_2(((reinterpret_cast<uintptr_t>(LeafData_e4b470_11) - 3033) + 3033),value_x19);
    if (uint32_t(result2) == 0) goto block_26;
    goto block_16;
}
block_16: {

    return 0;
}
block_18: {

    return 0;
}
block_20: {
    value_x8 = ((reinterpret_cast<uintptr_t>(LeafData_e4b470_20) - 3248) + 3248);
    goto block_28;
}
block_23: {
    value_x8 = ((reinterpret_cast<uintptr_t>(LeafData_e4b470_23) - 3264) + 3264);
    goto block_28;
}
block_26: {
    value_x8 = ((reinterpret_cast<uintptr_t>(LeafData_e4b470_26) - 3280) + 3280);
    goto block_28;
}
block_28: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    return field0;
}
}

extern "C" unsigned char LeafData_e51e60_1[];
extern "C" uint64_t RecoveredCall_e51e60_0(uint64_t,uint64_t);
extern "C" unsigned char LeafData_e51e60_6[];
extern "C" uint64_t RecoveredCall_e51e60_1(uint64_t,uint64_t);
extern "C" unsigned char LeafData_e51e60_11[];
extern "C" uint64_t RecoveredCall_e51e60_2(uint64_t,uint64_t);
extern "C" unsigned char LeafData_e51e60_16[];
extern "C" uint64_t RecoveredCall_e51e60_3(uint64_t,uint64_t);
extern "C" unsigned char LeafData_e51e60_25[];
extern "C" unsigned char LeafData_e51e60_28[];
extern "C" unsigned char LeafData_e51e60_31[];
extern "C" unsigned char LeafData_e51e60_34[];
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e51e60(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {

    if (value_x1 == 0) goto block_23;
    goto block_1;
}
block_1: {
    const uint64_t result0 = RecoveredCall_e51e60_0(((reinterpret_cast<uintptr_t>(LeafData_e51e60_1) - 2098) + 2098),value_x1);
    value_x19 = value_x1;
    if (uint32_t(result0) == 0) goto block_25;
    goto block_6;
}
block_6: {
    const uint64_t result1 = RecoveredCall_e51e60_1(((reinterpret_cast<uintptr_t>(LeafData_e51e60_6) - 1657) + 1657),value_x19);
    if (uint32_t(result1) == 0) goto block_28;
    goto block_11;
}
block_11: {
    const uint64_t result2 = RecoveredCall_e51e60_2(((reinterpret_cast<uintptr_t>(LeafData_e51e60_11) - 1097) + 1097),value_x19);
    if (uint32_t(result2) == 0) goto block_31;
    goto block_16;
}
block_16: {
    const uint64_t result3 = RecoveredCall_e51e60_3(((reinterpret_cast<uintptr_t>(LeafData_e51e60_16) - 2129) + 2129),value_x19);
    if (uint32_t(result3) == 0) goto block_34;
    goto block_21;
}
block_21: {

    return 0;
}
block_23: {

    return 0;
}
block_25: {
    value_x8 = ((reinterpret_cast<uintptr_t>(LeafData_e51e60_25) - 344) + 344);
    goto block_36;
}
block_28: {
    value_x8 = ((reinterpret_cast<uintptr_t>(LeafData_e51e60_28) - 360) + 360);
    goto block_36;
}
block_31: {
    value_x8 = ((reinterpret_cast<uintptr_t>(LeafData_e51e60_31) - 376) + 376);
    goto block_36;
}
block_34: {
    value_x8 = ((reinterpret_cast<uintptr_t>(LeafData_e51e60_34) - 392) + 392);
    goto block_36;
}
block_36: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    return field0;
}
}

extern "C" unsigned char LeafData_e58dd0_1[];
extern "C" uint64_t RecoveredCall_e58dd0_0(uint64_t,uint64_t);
extern "C" unsigned char LeafData_e58dd0_6[];
extern "C" uint64_t RecoveredCall_e58dd0_1(uint64_t,uint64_t);
extern "C" unsigned char LeafData_e58dd0_11[];
extern "C" uint64_t RecoveredCall_e58dd0_2(uint64_t,uint64_t);
extern "C" unsigned char LeafData_e58dd0_16[];
extern "C" uint64_t RecoveredCall_e58dd0_3(uint64_t,uint64_t);
extern "C" unsigned char LeafData_e58dd0_21[];
extern "C" uint64_t RecoveredCall_e58dd0_4(uint64_t,uint64_t);
extern "C" unsigned char LeafData_e58dd0_30[];
extern "C" unsigned char LeafData_e58dd0_33[];
extern "C" unsigned char LeafData_e58dd0_36[];
extern "C" unsigned char LeafData_e58dd0_39[];
extern "C" unsigned char LeafData_e58dd0_42[];
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e58dd0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {

    if (value_x1 == 0) goto block_28;
    goto block_1;
}
block_1: {
    const uint64_t result0 = RecoveredCall_e58dd0_0(((reinterpret_cast<uintptr_t>(LeafData_e58dd0_1) - 2129) + 2129),value_x1);
    value_x19 = value_x1;
    if (uint32_t(result0) == 0) goto block_30;
    goto block_6;
}
block_6: {
    const uint64_t result1 = RecoveredCall_e58dd0_1(((reinterpret_cast<uintptr_t>(LeafData_e58dd0_6) - 1657) + 1657),value_x19);
    if (uint32_t(result1) == 0) goto block_33;
    goto block_11;
}
block_11: {
    const uint64_t result2 = RecoveredCall_e58dd0_2(((reinterpret_cast<uintptr_t>(LeafData_e58dd0_11) - 1097) + 1097),value_x19);
    if (uint32_t(result2) == 0) goto block_36;
    goto block_16;
}
block_16: {
    const uint64_t result3 = RecoveredCall_e58dd0_3(((reinterpret_cast<uintptr_t>(LeafData_e58dd0_16) - 2164) + 2164),value_x19);
    if (uint32_t(result3) == 0) goto block_39;
    goto block_21;
}
block_21: {
    const uint64_t result4 = RecoveredCall_e58dd0_4(((reinterpret_cast<uintptr_t>(LeafData_e58dd0_21) - 3033) + 3033),value_x19);
    if (uint32_t(result4) == 0) goto block_42;
    goto block_26;
}
block_26: {

    return 0;
}
block_28: {

    return 0;
}
block_30: {
    value_x8 = ((reinterpret_cast<uintptr_t>(LeafData_e58dd0_30) - 3088) + 3088);
    goto block_44;
}
block_33: {
    value_x8 = ((reinterpret_cast<uintptr_t>(LeafData_e58dd0_33) - 3104) + 3104);
    goto block_44;
}
block_36: {
    value_x8 = ((reinterpret_cast<uintptr_t>(LeafData_e58dd0_36) - 3120) + 3120);
    goto block_44;
}
block_39: {
    value_x8 = ((reinterpret_cast<uintptr_t>(LeafData_e58dd0_39) - 3136) + 3136);
    goto block_44;
}
block_42: {
    value_x8 = ((reinterpret_cast<uintptr_t>(LeafData_e58dd0_42) - 3152) + 3152);
    goto block_44;
}
block_44: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    return field0;
}
}

extern "C" unsigned char LeafData_e66e50_1[];
extern "C" uint64_t RecoveredCall_e66e50_0(uint64_t,uint64_t);
extern "C" unsigned char LeafData_e66e50_6[];
extern "C" uint64_t RecoveredCall_e66e50_1(uint64_t,uint64_t);
extern "C" unsigned char LeafData_e66e50_11[];
extern "C" uint64_t RecoveredCall_e66e50_2(uint64_t,uint64_t);
extern "C" unsigned char LeafData_e66e50_16[];
extern "C" uint64_t RecoveredCall_e66e50_3(uint64_t,uint64_t);
extern "C" unsigned char LeafData_e66e50_21[];
extern "C" uint64_t RecoveredCall_e66e50_4(uint64_t,uint64_t);
extern "C" unsigned char LeafData_e66e50_26[];
extern "C" uint64_t RecoveredCall_e66e50_5(uint64_t,uint64_t);
extern "C" unsigned char LeafData_e66e50_31[];
extern "C" uint64_t RecoveredCall_e66e50_6(uint64_t,uint64_t);
extern "C" unsigned char LeafData_e66e50_40[];
extern "C" unsigned char LeafData_e66e50_43[];
extern "C" unsigned char LeafData_e66e50_46[];
extern "C" unsigned char LeafData_e66e50_49[];
extern "C" unsigned char LeafData_e66e50_52[];
extern "C" unsigned char LeafData_e66e50_55[];
extern "C" unsigned char LeafData_e66e50_58[];
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e66e50(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x8;
block_0: {

    if (value_x1 == 0) goto block_38;
    goto block_1;
}
block_1: {
    const uint64_t result0 = RecoveredCall_e66e50_0(((reinterpret_cast<uintptr_t>(LeafData_e66e50_1) - 1657) + 1657),value_x1);
    value_x19 = value_x1;
    if (uint32_t(result0) == 0) goto block_40;
    goto block_6;
}
block_6: {
    const uint64_t result1 = RecoveredCall_e66e50_1(((reinterpret_cast<uintptr_t>(LeafData_e66e50_6) - 2098) + 2098),value_x19);
    if (uint32_t(result1) == 0) goto block_43;
    goto block_11;
}
block_11: {
    const uint64_t result2 = RecoveredCall_e66e50_2(((reinterpret_cast<uintptr_t>(LeafData_e66e50_11) - 2129) + 2129),value_x19);
    if (uint32_t(result2) == 0) goto block_46;
    goto block_16;
}
block_16: {
    const uint64_t result3 = RecoveredCall_e66e50_3(((reinterpret_cast<uintptr_t>(LeafData_e66e50_16) - 1097) + 1097),value_x19);
    if (uint32_t(result3) == 0) goto block_49;
    goto block_21;
}
block_21: {
    const uint64_t result4 = RecoveredCall_e66e50_4(((reinterpret_cast<uintptr_t>(LeafData_e66e50_21) - 3033) + 3033),value_x19);
    if (uint32_t(result4) == 0) goto block_52;
    goto block_26;
}
block_26: {
    const uint64_t result5 = RecoveredCall_e66e50_5(((reinterpret_cast<uintptr_t>(LeafData_e66e50_26) - 1827) + 1827),value_x19);
    if (uint32_t(result5) == 0) goto block_55;
    goto block_31;
}
block_31: {
    const uint64_t result6 = RecoveredCall_e66e50_6(((reinterpret_cast<uintptr_t>(LeafData_e66e50_31) - 1529) + 1529),value_x19);
    if (uint32_t(result6) == 0) goto block_58;
    goto block_36;
}
block_36: {

    return 0;
}
block_38: {

    return 0;
}
block_40: {
    value_x8 = ((reinterpret_cast<uintptr_t>(LeafData_e66e50_40) - 432) + 432);
    goto block_60;
}
block_43: {
    value_x8 = ((reinterpret_cast<uintptr_t>(LeafData_e66e50_43) - 448) + 448);
    goto block_60;
}
block_46: {
    value_x8 = ((reinterpret_cast<uintptr_t>(LeafData_e66e50_46) - 464) + 464);
    goto block_60;
}
block_49: {
    value_x8 = ((reinterpret_cast<uintptr_t>(LeafData_e66e50_49) - 480) + 480);
    goto block_60;
}
block_52: {
    value_x8 = ((reinterpret_cast<uintptr_t>(LeafData_e66e50_52) - 496) + 496);
    goto block_60;
}
block_55: {
    value_x8 = ((reinterpret_cast<uintptr_t>(LeafData_e66e50_55) - 512) + 512);
    goto block_60;
}
block_58: {
    value_x8 = ((reinterpret_cast<uintptr_t>(LeafData_e66e50_58) - 528) + 528);
    goto block_60;
}
block_60: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x8 + 8));
    return field0;
}
}
