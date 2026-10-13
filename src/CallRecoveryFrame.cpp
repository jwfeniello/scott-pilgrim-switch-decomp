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

extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_37e50(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 0) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 0) + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field0)(field1);
    return 0;
}

extern "C" uint64_t RecoveredCall_51ba0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_51ba0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_51ba0_0(arg0);
    return (result0 & 4294967295);
}

extern "C" uint64_t RecoveredCall_83780_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t LeafData_83780_2;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_83780(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_83780_0(arg0,arg1,arg2);
    const uint64_t field0 = LeafData_83780_2;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c0710(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 32));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(arg0,arg1);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 40));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)(arg0,arg1);
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field7)(arg0,arg1);
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 56));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field9)(arg0,arg1);
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 64));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field11)(arg0,arg1,field11);
    return result5;
}

extern "C" uint64_t RecoveredCall_c0d40_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_c0d40_1(uint64_t);
extern "C" void LeafTarget_c0d40(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c0d40(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_c0d40_0(arg1,(arg1 + 136));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((result0 + 32));
    const uint64_t result1 = RecoveredCall_c0d40_1((field0 + 16));
    *reinterpret_cast<uint8_t*>((field0 + 80)) = 0;
    LeafTarget_c0d40((field0 + 16));
}

extern "C" uint64_t RecoveredCall_fe320_0(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t LeafData_fe320_2;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_fe320(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_fe320_0(arg0,arg1,arg2,arg3);
    const uint64_t field0 = LeafData_fe320_2;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_1340b0_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_1340b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_1340b0_0(arg1,arg0);
    return uint32_t(1);
}

extern "C" uint64_t RecoveredCall_1342c0_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_1342c0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_1342c0_0(arg1,arg0);
    return uint32_t(1);
}

extern "C" uint64_t RecoveredCall_184df0_0(uint64_t);
extern "C" unsigned char LeafData_184df0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_184df0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_184df0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_184df0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_187cc0_0(uint64_t);
extern "C" unsigned char LeafData_187cc0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_187cc0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_187cc0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_187cc0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_19ad20_0(uint64_t);
extern "C" unsigned char LeafData_19ad20_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_19ad20(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_19ad20_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_19ad20_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_25a230_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_25a230_1(uint64_t,uint64_t);
extern "C" void LeafTarget_25a230(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_25a230(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_25a230_0((arg0 + 8),(arg1 + 8));
    const uint64_t result1 = RecoveredCall_25a230_1((arg0 + 80),(arg1 + 80));
    LeafTarget_25a230((arg0 + 136),(arg1 + 136));
}

extern "C" uint64_t RecoveredCall_25c490_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_25c490(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_25c490_0(arg0,arg1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 64));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 96));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field3)(arg0,arg1,field3);
    return result2;
}

extern "C" uint64_t RecoveredCall_25ee20_0(uint64_t,uint64_t);
extern "C" void LeafTarget_25ee20(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_25ee20(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_25ee20_0((arg0 + 312),arg1);
    LeafTarget_25ee20(result0,arg2);
}

extern "C" uint64_t RecoveredCall_268a60_0(uint64_t,uint64_t);
extern "C" void LeafTarget_268a60(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_268a60(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_268a60_0((arg0 + 168),arg1);
    LeafTarget_268a60(result0,arg2);
}

extern "C" uint64_t RecoveredCall_268b90_0(uint64_t);
extern "C" uint64_t RecoveredCall_268b90_1(uint64_t,uint64_t);
extern "C" uint64_t LeafData_268b90_5;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_268b90(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_268b90_0(arg0);
    const uint64_t result1 = RecoveredCall_268b90_1(arg0,result0);
    const uint64_t field0 = LeafData_268b90_5;
    *reinterpret_cast<uint64_t*>(((arg0 + 0) + 0)) = (field0 + 16);
    *reinterpret_cast<uint64_t*>(((arg0 + 0) + 8)) = (field0 + 200);
    return result1;
}

extern "C" uint64_t RecoveredCall_26c680_0(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t LeafData_26c680_2;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_26c680(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4,uint64_t arg5,uint64_t arg6) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_26c680_0(arg0,arg1,arg2,arg3,arg4,arg5,arg6);
    const uint64_t field0 = LeafData_26c680_2;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_26c6b0_0(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t LeafData_26c6b0_2;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_26c6b0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4,uint64_t arg5,uint64_t arg6) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_26c6b0_0(arg0,arg1,arg2,arg3,arg4,arg5,arg6);
    const uint64_t field0 = LeafData_26c6b0_2;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_27d560_0(uint64_t);
extern "C" void LeafTarget_27d560(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_27d560(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_27d560_0((arg0 + 32));
    LeafTarget_27d560(arg0);
}

extern "C" uint64_t RecoveredCall_27d590_0(uint64_t);
extern "C" uint64_t RecoveredCall_27d590_1(uint64_t);
extern "C" void LeafTarget_27d590(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_27d590(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_27d590_0((arg0 + 32));
    const uint64_t result1 = RecoveredCall_27d590_1(arg0);
    LeafTarget_27d590(arg0);
}

extern "C" uint64_t RecoveredCall_2a0080_0(uint64_t,uint64_t);
extern "C" void LeafTarget_2a0080(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_2a0080(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_2a0080_0((arg0 + 32),arg1);
    LeafTarget_2a0080((arg0 + 104),arg1);
}

extern "C" uint64_t RecoveredCall_2c31e0_0(uint64_t,uint64_t);
extern "C" void LeafTarget_2c31e0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_2c31e0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_2c31e0_0((arg0 + 816),arg1);
    LeafTarget_2c31e0(result0,arg2);
}

extern "C" uint64_t RecoveredCall_2cd1e0_0(uint64_t);
extern "C" void LeafTarget_2cd1e0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_2cd1e0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_2cd1e0_0((arg0 - 32));
    LeafTarget_2cd1e0((arg0 - 32));
}

extern "C" uint64_t RecoveredCall_2cd210_0(uint64_t);
extern "C" void LeafTarget_2cd210(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_2cd210(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_2cd210_0((arg0 - 56));
    LeafTarget_2cd210((arg0 - 56));
}

extern "C" uint64_t RecoveredCall_2d0550_0(uint64_t);
extern "C" void LeafTarget_2d0550(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_2d0550(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_2d0550_0((arg0 + 32));
    LeafTarget_2d0550(arg0);
}

extern "C" uint64_t RecoveredCall_2d05b0_0(uint64_t);
extern "C" uint64_t RecoveredCall_2d05b0_1(uint64_t);
extern "C" void LeafTarget_2d05b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_2d05b0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_2d05b0_0((arg0 + 32));
    const uint64_t result1 = RecoveredCall_2d05b0_1(arg0);
    LeafTarget_2d05b0(arg0);
}

extern "C" uint64_t RecoveredCall_2d9590_0(uint64_t);
extern "C" void LeafTarget_2d9590(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_2d9590(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_2d9590_0((arg0 - 32));
    LeafTarget_2d9590((arg0 - 32));
}

extern "C" uint64_t RecoveredCall_2d95c0_0(uint64_t);
extern "C" void LeafTarget_2d95c0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_2d95c0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_2d95c0_0((arg0 - 40));
    LeafTarget_2d95c0((arg0 - 40));
}

extern "C" uint64_t RecoveredCall_2d95f0_0(uint64_t);
extern "C" void LeafTarget_2d95f0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_2d95f0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_2d95f0_0((arg0 - 48));
    LeafTarget_2d95f0((arg0 - 48));
}

extern "C" uint64_t RecoveredCall_2df510_0(uint64_t);
extern "C" void LeafTarget_2df510(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_2df510(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_2df510_0((arg0 + 32));
    LeafTarget_2df510(arg0);
}

extern "C" uint64_t RecoveredCall_2df570_0(uint64_t);
extern "C" uint64_t RecoveredCall_2df570_1(uint64_t);
extern "C" void LeafTarget_2df570(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_2df570(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_2df570_0((arg0 + 32));
    const uint64_t result1 = RecoveredCall_2df570_1(arg0);
    LeafTarget_2df570(arg0);
}

extern "C" uint64_t RecoveredCall_2dfcd0_0(uint64_t);
extern "C" void LeafTarget_2dfcd0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_2dfcd0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_2dfcd0_0((arg0 - 24));
    LeafTarget_2dfcd0((arg0 - 24));
}

extern "C" uint64_t RecoveredCall_2dfd00_0(uint64_t);
extern "C" void LeafTarget_2dfd00(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_2dfd00(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_2dfd00_0((arg0 - 56));
    LeafTarget_2dfd00((arg0 - 56));
}

extern "C" uint64_t RecoveredCall_2dfd30_0(uint64_t);
extern "C" void LeafTarget_2dfd30(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_2dfd30(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_2dfd30_0((arg0 - 64));
    LeafTarget_2dfd30((arg0 - 64));
}

extern "C" uint64_t RecoveredCall_2e5c10_0(uint64_t);
extern "C" void LeafTarget_2e5c10(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_2e5c10(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_2e5c10_0((arg0 + 32));
    LeafTarget_2e5c10(arg0);
}

extern "C" uint64_t RecoveredCall_2e5c70_0(uint64_t);
extern "C" uint64_t RecoveredCall_2e5c70_1(uint64_t);
extern "C" void LeafTarget_2e5c70(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_2e5c70(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_2e5c70_0((arg0 + 32));
    const uint64_t result1 = RecoveredCall_2e5c70_1(arg0);
    LeafTarget_2e5c70(arg0);
}

extern "C" uint64_t RecoveredCall_2ee5c0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2ee5c0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_2ee5c0_0((arg0 + 32));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 128));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result1;
}

extern "C" uint64_t RecoveredCall_303590_0(uint64_t);
extern "C" uint64_t LeafData_303590_2;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_303590(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_303590_0(uint32_t(16));
    const uint64_t field0 = LeafData_303590_2;
    *reinterpret_cast<uint64_t*>((result0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_303600_0(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_303600(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_303600_0(uint32_t(8));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = -4294967296;
    return result0;
}

extern "C" uint64_t RecoveredCall_303680_0(uint64_t);
extern "C" uint64_t LeafData_303680_2;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_303680(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_303680_0(uint32_t(16));
    const uint64_t field0 = LeafData_303680_2;
    *reinterpret_cast<uint64_t*>((result0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_303920_0(uint64_t);
extern "C" unsigned char LeafData_303920_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_303920(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_303920_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_303920_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_303b80_0(uint64_t);
extern "C" unsigned char LeafData_303b80_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_303b80(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_303b80_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_303b80_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_30fc70_0(uint64_t);
extern "C" void LeafTarget_30fc70(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_30fc70(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_30fc70_0((arg0 - 24));
    LeafTarget_30fc70((arg0 - 24));
}

extern "C" uint64_t RecoveredCall_312930_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_312930_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_312930_2(uint64_t,uint64_t);
extern "C" void LeafTarget_312930(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_312930(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_312930_0((arg0 + 8),arg1);
    const uint64_t result1 = RecoveredCall_312930_1((arg0 + 32),arg1);
    const uint64_t result2 = RecoveredCall_312930_2((arg0 + 72),arg1);
    LeafTarget_312930((arg0 + 120),arg1);
}

extern "C" uint64_t RecoveredCall_312fa0_0(uint64_t,uint64_t);
extern "C" void LeafTarget_312fa0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_312fa0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_312fa0_0((arg0 + 8),arg1);
    LeafTarget_312fa0((arg0 + 32),arg1);
}

extern "C" uint64_t RecoveredCall_313240_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_313240_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_313240_2(uint64_t,uint64_t);
extern "C" void LeafTarget_313240(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_313240(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_313240_0((arg0 + 8),arg1);
    const uint64_t result1 = RecoveredCall_313240_1((arg0 + 32),arg1);
    const uint64_t result2 = RecoveredCall_313240_2((arg0 + 72),arg1);
    LeafTarget_313240((arg0 + 120),arg1);
}

extern "C" uint64_t RecoveredCall_313560_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_313560_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_313560_2(uint64_t,uint64_t);
extern "C" void LeafTarget_313560(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_313560(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_313560_0((arg0 + 8),arg1);
    const uint64_t result1 = RecoveredCall_313560_1((arg0 + 32),arg1);
    const uint64_t result2 = RecoveredCall_313560_2((arg0 + 72),arg1);
    LeafTarget_313560((arg0 + 120),arg1);
}

extern "C" uint64_t RecoveredCall_315f50_0(uint64_t);
extern "C" void LeafTarget_315f50(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_315f50(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_315f50_0((arg0 - 64));
    LeafTarget_315f50((arg0 - 64));
}

extern "C" uint64_t RecoveredCall_31cae0_0(uint64_t);
extern "C" void LeafTarget_31cae0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_31cae0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_31cae0_0((arg0 - 88));
    LeafTarget_31cae0((arg0 - 88));
}

extern "C" uint64_t RecoveredCall_329f10_0(uint64_t);
extern "C" void LeafTarget_329f10(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_329f10(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_329f10_0((arg0 + 32));
    LeafTarget_329f10(arg0);
}

extern "C" uint64_t RecoveredCall_329fa0_0(uint64_t);
extern "C" uint64_t RecoveredCall_329fa0_1(uint64_t);
extern "C" void LeafTarget_329fa0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_329fa0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_329fa0_0((arg0 + 32));
    const uint64_t result1 = RecoveredCall_329fa0_1(arg0);
    LeafTarget_329fa0(arg0);
}

extern "C" uint64_t RecoveredCall_33c2d0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_33c2d0_1(uint64_t,uint64_t);
extern "C" void LeafTarget_33c2d0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_33c2d0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_33c2d0_0((arg0 + 48),arg1);
    const uint64_t result1 = RecoveredCall_33c2d0_1((arg0 + 80),arg1);
    LeafTarget_33c2d0((arg0 + 128),arg1);
}

extern "C" uint64_t RecoveredCall_33ced0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_33ced0_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_33ced0_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_33ced0_3(uint64_t,uint64_t);
extern "C" void LeafTarget_33ced0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_33ced0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_33ced0_0((arg0 + 48),arg1);
    const uint64_t result1 = RecoveredCall_33ced0_1((arg0 + 120),arg1);
    const uint64_t result2 = RecoveredCall_33ced0_2((arg0 + 80),arg1);
    const uint64_t result3 = RecoveredCall_33ced0_3((arg0 + 144),arg1);
    LeafTarget_33ced0((arg0 + 192),arg1);
}

extern "C" uint64_t RecoveredCall_33d320_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_33d320_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_33d320_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_33d320_3(uint64_t,uint64_t);
extern "C" void LeafTarget_33d320(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_33d320(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_33d320_0((arg0 + 48),arg1);
    const uint64_t result1 = RecoveredCall_33d320_1((arg0 + 120),arg1);
    const uint64_t result2 = RecoveredCall_33d320_2((arg0 + 80),arg1);
    const uint64_t result3 = RecoveredCall_33d320_3((arg0 + 144),arg1);
    LeafTarget_33d320((arg0 + 192),arg1);
}

extern "C" uint64_t RecoveredCall_33e1d0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_33e1d0_1(uint64_t,uint64_t);
extern "C" void LeafTarget_33e1d0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_33e1d0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_33e1d0_0((arg0 + 48),arg1);
    const uint64_t result1 = RecoveredCall_33e1d0_1((arg0 + 80),arg1);
    LeafTarget_33e1d0((arg0 + 104),arg1);
}

extern "C" uint64_t RecoveredCall_33e710_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_33e710_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_33e710_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_33e710_3(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_33e710_4(uint64_t,uint64_t);
extern "C" void LeafTarget_33e710(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_33e710(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_33e710_0((arg0 + 48),arg1);
    const uint64_t result1 = RecoveredCall_33e710_1((arg0 + 80),arg1);
    const uint64_t result2 = RecoveredCall_33e710_2((arg0 + 104),arg1);
    const uint64_t result3 = RecoveredCall_33e710_3((arg0 + 128),arg1);
    const uint64_t result4 = RecoveredCall_33e710_4((arg0 + 168),arg1);
    LeafTarget_33e710((arg0 + 216),arg1);
}

extern "C" uint64_t RecoveredCall_33ed60_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_33ed60_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_33ed60_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_33ed60_3(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_33ed60_4(uint64_t,uint64_t);
extern "C" void LeafTarget_33ed60(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_33ed60(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_33ed60_0((arg0 + 48),arg1);
    const uint64_t result1 = RecoveredCall_33ed60_1((arg0 + 80),arg1);
    const uint64_t result2 = RecoveredCall_33ed60_2((arg0 + 104),arg1);
    const uint64_t result3 = RecoveredCall_33ed60_3((arg0 + 128),arg1);
    const uint64_t result4 = RecoveredCall_33ed60_4((arg0 + 168),arg1);
    LeafTarget_33ed60((arg0 + 216),arg1);
}

extern "C" uint64_t RecoveredCall_33f470_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_33f470_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_33f470_2(uint64_t,uint64_t);
extern "C" void LeafTarget_33f470(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_33f470(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_33f470_0((arg0 + 8),arg1);
    const uint64_t result1 = RecoveredCall_33f470_1((arg0 + 80),arg1);
    const uint64_t result2 = RecoveredCall_33f470_2((arg0 + 120),arg1);
    LeafTarget_33f470((arg0 + 168),arg1);
}

extern "C" uint64_t RecoveredCall_33f830_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_33f830_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_33f830_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_33f830_3(uint64_t,uint64_t);
extern "C" void LeafTarget_33f830(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_33f830(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_33f830_0((arg0 + 48),arg1);
    const uint64_t result1 = RecoveredCall_33f830_1((arg0 + 120),arg1);
    const uint64_t result2 = RecoveredCall_33f830_2((arg0 + 80),arg1);
    const uint64_t result3 = RecoveredCall_33f830_3((arg0 + 144),arg1);
    LeafTarget_33f830((arg0 + 192),arg1);
}

extern "C" uint64_t RecoveredCall_33fc80_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_33fc80_1(uint64_t,uint64_t);
extern "C" void LeafTarget_33fc80(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_33fc80(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_33fc80_0((arg0 + 48),arg1);
    const uint64_t result1 = RecoveredCall_33fc80_1((arg0 + 80),arg1);
    LeafTarget_33fc80((arg0 + 128),arg1);
}

extern "C" uint64_t RecoveredCall_33fe90_0(uint64_t,uint64_t);
extern "C" void LeafTarget_33fe90(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_33fe90(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_33fe90_0((arg0 + 48),arg1);
    LeafTarget_33fe90((arg0 + 80),arg1);
}

extern "C" uint64_t RecoveredCall_3403f0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_3403f0_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_3403f0_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_3403f0_3(uint64_t,uint64_t);
extern "C" void LeafTarget_3403f0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_3403f0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3403f0_0((arg0 + 48),arg1);
    const uint64_t result1 = RecoveredCall_3403f0_1((arg0 + 80),arg1);
    const uint64_t result2 = RecoveredCall_3403f0_2((arg0 + 104),arg1);
    const uint64_t result3 = RecoveredCall_3403f0_3((arg0 + 128),arg1);
    LeafTarget_3403f0((arg0 + 176),arg1);
}

extern "C" uint64_t RecoveredCall_341140_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_341140_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_341140_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_341140_3(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_341140_4(uint64_t,uint64_t);
extern "C" void LeafTarget_341140(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_341140(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_341140_0((arg0 + 48),arg1);
    const uint64_t result1 = RecoveredCall_341140_1((arg0 + 80),arg1);
    const uint64_t result2 = RecoveredCall_341140_2((arg0 + 112),arg1);
    const uint64_t result3 = RecoveredCall_341140_3((arg0 + 136),arg1);
    const uint64_t result4 = RecoveredCall_341140_4((arg0 + 168),arg1);
    LeafTarget_341140((arg0 + 192),arg1);
}

extern "C" uint64_t RecoveredCall_357eb0_0(uint64_t);
extern "C" void LeafTarget_357eb0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_357eb0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_357eb0_0((arg0 - 24));
    LeafTarget_357eb0((arg0 - 24));
}

extern "C" uint64_t RecoveredCall_3617d0_0(uint64_t);
extern "C" void LeafTarget_3617d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_3617d0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3617d0_0((arg0 - 24));
    LeafTarget_3617d0((arg0 - 24));
}

extern "C" uint64_t RecoveredCall_361810_0(uint64_t);
extern "C" void LeafTarget_361810(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_361810(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_361810_0((arg0 - 32));
    LeafTarget_361810((arg0 - 32));
}

extern "C" uint64_t RecoveredCall_380920_0(uint64_t);
extern "C" uint64_t LeafData_380920_2;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_380920(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_380920_0(uint32_t(16));
    const uint64_t field0 = LeafData_380920_2;
    *reinterpret_cast<uint64_t*>((result0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_389050_0(uint64_t);
extern "C" void LeafTarget_389050(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_389050(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_389050_0((arg0 - 40));
    LeafTarget_389050((arg0 - 40));
}

extern "C" uint64_t RecoveredCall_38a160_0(uint64_t);
extern "C" void LeafTarget_38a160(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_38a160(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_38a160_0((arg0 - 40));
    LeafTarget_38a160((arg0 - 40));
}

extern "C" uint64_t RecoveredCall_38ace0_0(uint64_t);
extern "C" void LeafTarget_38ace0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_38ace0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_38ace0_0((arg0 - 40));
    LeafTarget_38ace0((arg0 - 40));
}

extern "C" uint64_t RecoveredCall_38b440_0(uint64_t);
extern "C" void LeafTarget_38b440(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_38b440(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_38b440_0((arg0 - 40));
    LeafTarget_38b440((arg0 - 40));
}

extern "C" uint64_t RecoveredCall_395200_0(uint64_t);
extern "C" void LeafTarget_395200(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_395200(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_395200_0((arg0 - 24));
    LeafTarget_395200((arg0 - 24));
}

extern "C" uint64_t RecoveredCall_395230_0(uint64_t);
extern "C" void LeafTarget_395230(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_395230(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_395230_0((arg0 - 32));
    LeafTarget_395230((arg0 - 32));
}

extern "C" uint64_t RecoveredCall_3b9830_0(uint64_t);
extern "C" uint64_t LeafData_3b9830_2;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_3b9830(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3b9830_0(arg0);
    const uint64_t field0 = LeafData_3b9830_2;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    *reinterpret_cast<uint32_t*>((arg0 + 24)) = uint32_t(uint32_t(-1));
    return result0;
}

extern "C" uint64_t RecoveredCall_3ba520_0(uint64_t);
extern "C" void LeafTarget_3ba520(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_3ba520(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3ba520_0((arg0 - 24));
    LeafTarget_3ba520((arg0 - 24));
}

extern "C" uint64_t RecoveredCall_3ba550_0(uint64_t);
extern "C" void LeafTarget_3ba550(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_3ba550(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3ba550_0((arg0 - 56));
    LeafTarget_3ba550((arg0 - 56));
}

extern "C" uint64_t RecoveredCall_3ba580_0(uint64_t);
extern "C" void LeafTarget_3ba580(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_3ba580(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3ba580_0((arg0 - 88));
    LeafTarget_3ba580((arg0 - 88));
}

extern "C" uint64_t RecoveredCall_3ba5b0_0(uint64_t);
extern "C" void LeafTarget_3ba5b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_3ba5b0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3ba5b0_0((arg0 - 96));
    LeafTarget_3ba5b0((arg0 - 96));
}

extern "C" uint64_t RecoveredCall_3ba5e0_0(uint64_t);
extern "C" void LeafTarget_3ba5e0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_3ba5e0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3ba5e0_0((arg0 - 104));
    LeafTarget_3ba5e0((arg0 - 104));
}

extern "C" uint64_t RecoveredCall_3ba610_0(uint64_t);
extern "C" void LeafTarget_3ba610(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_3ba610(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3ba610_0((arg0 - 112));
    LeafTarget_3ba610((arg0 - 112));
}

extern "C" uint64_t RecoveredCall_3bf300_0(uint64_t);
extern "C" void LeafTarget_3bf300(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_3bf300(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3bf300_0(arg0);
    *reinterpret_cast<uint64_t*>(((arg0 + 224) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 224) + 8)) = 0;
    LeafTarget_3bf300(arg0);
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3c26b0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    return uint32_t((uint32_t(uint32_t((~uint32_t(result0)))) & 1));
}

extern "C" uint64_t RecoveredCall_3c8af0_0(uint64_t);
extern "C" void LeafTarget_3c8af0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_3c8af0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3c8af0_0((arg0 - 8));
    LeafTarget_3c8af0((arg0 - 8));
}

extern "C" uint64_t RecoveredCall_3caa10_0(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_1(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_2(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_3(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_4(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_5(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_6(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_7(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_8(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_9(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_10(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_11(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_12(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_13(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_14(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_15(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_16(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_17(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_18(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_19(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_20(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_21(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_22(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_23(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_24(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_25(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_26(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_27(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_28(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_29(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_30(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_31(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_32(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_33(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_34(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_35(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_36(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_37(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_38(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_39(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_40(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_41(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_42(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_43(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_44(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_45(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_46(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_47(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_48(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_49(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_50(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_51(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_52(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_53(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_54(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_55(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_56(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_57(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_58(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_59(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_60(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_61(uint64_t);
extern "C" uint64_t RecoveredCall_3caa10_62(uint64_t);
extern "C" void LeafTarget_3caa10(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_3caa10(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3caa10_0(arg0);
    const uint64_t result1 = RecoveredCall_3caa10_1((arg0 + 32));
    const uint64_t result2 = RecoveredCall_3caa10_2((arg0 + 64));
    const uint64_t result3 = RecoveredCall_3caa10_3((arg0 + 96));
    const uint64_t result4 = RecoveredCall_3caa10_4((arg0 + 128));
    const uint64_t result5 = RecoveredCall_3caa10_5((arg0 + 160));
    const uint64_t result6 = RecoveredCall_3caa10_6((arg0 + 192));
    const uint64_t result7 = RecoveredCall_3caa10_7((arg0 + 224));
    const uint64_t result8 = RecoveredCall_3caa10_8((arg0 + 256));
    const uint64_t result9 = RecoveredCall_3caa10_9((arg0 + 288));
    const uint64_t result10 = RecoveredCall_3caa10_10((arg0 + 320));
    const uint64_t result11 = RecoveredCall_3caa10_11((arg0 + 352));
    const uint64_t result12 = RecoveredCall_3caa10_12((arg0 + 384));
    const uint64_t result13 = RecoveredCall_3caa10_13((arg0 + 416));
    const uint64_t result14 = RecoveredCall_3caa10_14((arg0 + 448));
    const uint64_t result15 = RecoveredCall_3caa10_15((arg0 + 480));
    const uint64_t result16 = RecoveredCall_3caa10_16((arg0 + 512));
    const uint64_t result17 = RecoveredCall_3caa10_17((arg0 + 544));
    const uint64_t result18 = RecoveredCall_3caa10_18((arg0 + 576));
    const uint64_t result19 = RecoveredCall_3caa10_19((arg0 + 608));
    const uint64_t result20 = RecoveredCall_3caa10_20((arg0 + 640));
    const uint64_t result21 = RecoveredCall_3caa10_21((arg0 + 672));
    const uint64_t result22 = RecoveredCall_3caa10_22((arg0 + 704));
    const uint64_t result23 = RecoveredCall_3caa10_23((arg0 + 736));
    const uint64_t result24 = RecoveredCall_3caa10_24((arg0 + 768));
    const uint64_t result25 = RecoveredCall_3caa10_25((arg0 + 800));
    const uint64_t result26 = RecoveredCall_3caa10_26((arg0 + 832));
    const uint64_t result27 = RecoveredCall_3caa10_27((arg0 + 864));
    const uint64_t result28 = RecoveredCall_3caa10_28((arg0 + 896));
    const uint64_t result29 = RecoveredCall_3caa10_29((arg0 + 928));
    const uint64_t result30 = RecoveredCall_3caa10_30((arg0 + 960));
    const uint64_t result31 = RecoveredCall_3caa10_31((arg0 + 992));
    const uint64_t result32 = RecoveredCall_3caa10_32((arg0 + 1024));
    const uint64_t result33 = RecoveredCall_3caa10_33((arg0 + 1056));
    const uint64_t result34 = RecoveredCall_3caa10_34((arg0 + 1088));
    const uint64_t result35 = RecoveredCall_3caa10_35((arg0 + 1120));
    const uint64_t result36 = RecoveredCall_3caa10_36((arg0 + 1152));
    const uint64_t result37 = RecoveredCall_3caa10_37((arg0 + 1184));
    const uint64_t result38 = RecoveredCall_3caa10_38((arg0 + 1216));
    const uint64_t result39 = RecoveredCall_3caa10_39((arg0 + 1248));
    const uint64_t result40 = RecoveredCall_3caa10_40((arg0 + 1280));
    const uint64_t result41 = RecoveredCall_3caa10_41((arg0 + 1312));
    const uint64_t result42 = RecoveredCall_3caa10_42((arg0 + 1344));
    const uint64_t result43 = RecoveredCall_3caa10_43((arg0 + 1376));
    const uint64_t result44 = RecoveredCall_3caa10_44((arg0 + 1408));
    const uint64_t result45 = RecoveredCall_3caa10_45((arg0 + 1440));
    const uint64_t result46 = RecoveredCall_3caa10_46((arg0 + 1472));
    const uint64_t result47 = RecoveredCall_3caa10_47((arg0 + 1504));
    const uint64_t result48 = RecoveredCall_3caa10_48((arg0 + 1536));
    const uint64_t result49 = RecoveredCall_3caa10_49((arg0 + 1568));
    const uint64_t result50 = RecoveredCall_3caa10_50((arg0 + 1600));
    const uint64_t result51 = RecoveredCall_3caa10_51((arg0 + 1632));
    const uint64_t result52 = RecoveredCall_3caa10_52((arg0 + 1664));
    const uint64_t result53 = RecoveredCall_3caa10_53((arg0 + 1696));
    const uint64_t result54 = RecoveredCall_3caa10_54((arg0 + 1728));
    const uint64_t result55 = RecoveredCall_3caa10_55((arg0 + 1760));
    const uint64_t result56 = RecoveredCall_3caa10_56((arg0 + 1792));
    const uint64_t result57 = RecoveredCall_3caa10_57((arg0 + 1824));
    const uint64_t result58 = RecoveredCall_3caa10_58((arg0 + 1856));
    const uint64_t result59 = RecoveredCall_3caa10_59((arg0 + 1888));
    const uint64_t result60 = RecoveredCall_3caa10_60((arg0 + 1920));
    const uint64_t result61 = RecoveredCall_3caa10_61((arg0 + 1952));
    const uint64_t result62 = RecoveredCall_3caa10_62((arg0 + 1984));
    LeafTarget_3caa10((arg0 + 2016));
}

extern "C" uint64_t RecoveredCall_3cac30_0(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_1(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_2(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_3(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_4(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_5(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_6(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_7(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_8(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_9(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_10(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_11(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_12(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_13(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_14(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_15(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_16(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_17(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_18(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_19(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_20(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_21(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_22(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_23(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_24(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_25(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_26(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_27(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_28(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_29(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_30(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_31(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_32(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_33(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_34(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_35(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_36(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_37(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_38(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_39(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_40(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_41(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_42(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_43(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_44(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_45(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_46(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_47(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_48(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_49(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_50(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_51(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_52(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_53(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_54(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_55(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_56(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_57(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_58(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_59(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_60(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_61(uint64_t);
extern "C" uint64_t RecoveredCall_3cac30_62(uint64_t);
extern "C" void LeafTarget_3cac30(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_3cac30(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3cac30_0((arg0 + 2016));
    const uint64_t result1 = RecoveredCall_3cac30_1((arg0 + 1984));
    const uint64_t result2 = RecoveredCall_3cac30_2((arg0 + 1952));
    const uint64_t result3 = RecoveredCall_3cac30_3((arg0 + 1920));
    const uint64_t result4 = RecoveredCall_3cac30_4((arg0 + 1888));
    const uint64_t result5 = RecoveredCall_3cac30_5((arg0 + 1856));
    const uint64_t result6 = RecoveredCall_3cac30_6((arg0 + 1824));
    const uint64_t result7 = RecoveredCall_3cac30_7((arg0 + 1792));
    const uint64_t result8 = RecoveredCall_3cac30_8((arg0 + 1760));
    const uint64_t result9 = RecoveredCall_3cac30_9((arg0 + 1728));
    const uint64_t result10 = RecoveredCall_3cac30_10((arg0 + 1696));
    const uint64_t result11 = RecoveredCall_3cac30_11((arg0 + 1664));
    const uint64_t result12 = RecoveredCall_3cac30_12((arg0 + 1632));
    const uint64_t result13 = RecoveredCall_3cac30_13((arg0 + 1600));
    const uint64_t result14 = RecoveredCall_3cac30_14((arg0 + 1568));
    const uint64_t result15 = RecoveredCall_3cac30_15((arg0 + 1536));
    const uint64_t result16 = RecoveredCall_3cac30_16((arg0 + 1504));
    const uint64_t result17 = RecoveredCall_3cac30_17((arg0 + 1472));
    const uint64_t result18 = RecoveredCall_3cac30_18((arg0 + 1440));
    const uint64_t result19 = RecoveredCall_3cac30_19((arg0 + 1408));
    const uint64_t result20 = RecoveredCall_3cac30_20((arg0 + 1376));
    const uint64_t result21 = RecoveredCall_3cac30_21((arg0 + 1344));
    const uint64_t result22 = RecoveredCall_3cac30_22((arg0 + 1312));
    const uint64_t result23 = RecoveredCall_3cac30_23((arg0 + 1280));
    const uint64_t result24 = RecoveredCall_3cac30_24((arg0 + 1248));
    const uint64_t result25 = RecoveredCall_3cac30_25((arg0 + 1216));
    const uint64_t result26 = RecoveredCall_3cac30_26((arg0 + 1184));
    const uint64_t result27 = RecoveredCall_3cac30_27((arg0 + 1152));
    const uint64_t result28 = RecoveredCall_3cac30_28((arg0 + 1120));
    const uint64_t result29 = RecoveredCall_3cac30_29((arg0 + 1088));
    const uint64_t result30 = RecoveredCall_3cac30_30((arg0 + 1056));
    const uint64_t result31 = RecoveredCall_3cac30_31((arg0 + 1024));
    const uint64_t result32 = RecoveredCall_3cac30_32((arg0 + 992));
    const uint64_t result33 = RecoveredCall_3cac30_33((arg0 + 960));
    const uint64_t result34 = RecoveredCall_3cac30_34((arg0 + 928));
    const uint64_t result35 = RecoveredCall_3cac30_35((arg0 + 896));
    const uint64_t result36 = RecoveredCall_3cac30_36((arg0 + 864));
    const uint64_t result37 = RecoveredCall_3cac30_37((arg0 + 832));
    const uint64_t result38 = RecoveredCall_3cac30_38((arg0 + 800));
    const uint64_t result39 = RecoveredCall_3cac30_39((arg0 + 768));
    const uint64_t result40 = RecoveredCall_3cac30_40((arg0 + 736));
    const uint64_t result41 = RecoveredCall_3cac30_41((arg0 + 704));
    const uint64_t result42 = RecoveredCall_3cac30_42((arg0 + 672));
    const uint64_t result43 = RecoveredCall_3cac30_43((arg0 + 640));
    const uint64_t result44 = RecoveredCall_3cac30_44((arg0 + 608));
    const uint64_t result45 = RecoveredCall_3cac30_45((arg0 + 576));
    const uint64_t result46 = RecoveredCall_3cac30_46((arg0 + 544));
    const uint64_t result47 = RecoveredCall_3cac30_47((arg0 + 512));
    const uint64_t result48 = RecoveredCall_3cac30_48((arg0 + 480));
    const uint64_t result49 = RecoveredCall_3cac30_49((arg0 + 448));
    const uint64_t result50 = RecoveredCall_3cac30_50((arg0 + 416));
    const uint64_t result51 = RecoveredCall_3cac30_51((arg0 + 384));
    const uint64_t result52 = RecoveredCall_3cac30_52((arg0 + 352));
    const uint64_t result53 = RecoveredCall_3cac30_53((arg0 + 320));
    const uint64_t result54 = RecoveredCall_3cac30_54((arg0 + 288));
    const uint64_t result55 = RecoveredCall_3cac30_55((arg0 + 256));
    const uint64_t result56 = RecoveredCall_3cac30_56((arg0 + 224));
    const uint64_t result57 = RecoveredCall_3cac30_57((arg0 + 192));
    const uint64_t result58 = RecoveredCall_3cac30_58((arg0 + 160));
    const uint64_t result59 = RecoveredCall_3cac30_59((arg0 + 128));
    const uint64_t result60 = RecoveredCall_3cac30_60((arg0 + 96));
    const uint64_t result61 = RecoveredCall_3cac30_61((arg0 + 64));
    const uint64_t result62 = RecoveredCall_3cac30_62((arg0 + 32));
    LeafTarget_3cac30(arg0);
}

extern "C" uint64_t RecoveredCall_3d6c50_0(uint64_t,uint64_t);
extern "C" void LeafTarget_3d6c50(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_3d6c50(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3d6c50_0((arg0 + 8),arg1);
    LeafTarget_3d6c50((arg0 + 32),arg1);
}

extern "C" uint64_t RecoveredCall_3db4d0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_3db4d0_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_3db4d0_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_3db4d0_3(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_3db4d0_4(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_3db4d0_5(uint64_t,uint64_t);
extern "C" void LeafTarget_3db4d0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_3db4d0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3db4d0_0((arg0 + 8),arg1);
    const uint64_t result1 = RecoveredCall_3db4d0_1((arg0 + 32),arg1);
    const uint64_t result2 = RecoveredCall_3db4d0_2((arg0 + 56),arg1);
    const uint64_t result3 = RecoveredCall_3db4d0_3((arg0 + 80),arg1);
    const uint64_t result4 = RecoveredCall_3db4d0_4((arg0 + 128),arg1);
    const uint64_t result5 = RecoveredCall_3db4d0_5((arg0 + 152),arg1);
    LeafTarget_3db4d0((arg0 + 192),arg1);
}

extern "C" uint64_t RecoveredCall_3dc300_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_3dc300_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_3dc300_2(uint64_t,uint64_t);
extern "C" void LeafTarget_3dc300(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_3dc300(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3dc300_0((arg0 + 8),arg1);
    const uint64_t result1 = RecoveredCall_3dc300_1((arg0 + 32),arg1);
    const uint64_t result2 = RecoveredCall_3dc300_2((arg0 + 56),arg1);
    LeafTarget_3dc300((arg0 + 104),arg1);
}

extern "C" uint64_t RecoveredCall_3dd1e0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_3dd1e0_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_3dd1e0_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_3dd1e0_3(uint64_t,uint64_t);
extern "C" void LeafTarget_3dd1e0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_3dd1e0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3dd1e0_0((arg0 + 8),arg1);
    const uint64_t result1 = RecoveredCall_3dd1e0_1((arg0 + 32),arg1);
    const uint64_t result2 = RecoveredCall_3dd1e0_2((arg0 + 56),arg1);
    const uint64_t result3 = RecoveredCall_3dd1e0_3((arg0 + 96),arg1);
    LeafTarget_3dd1e0((arg0 + 144),arg1);
}

extern "C" uint64_t RecoveredCall_3e6ac0_0(uint64_t);
extern "C" unsigned char LeafData_3e6ac0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e6ac0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e6ac0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e6ac0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e6b70_0(uint64_t);
extern "C" unsigned char LeafData_3e6b70_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e6b70(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e6b70_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e6b70_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e6c20_0(uint64_t);
extern "C" unsigned char LeafData_3e6c20_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e6c20(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e6c20_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e6c20_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e6cd0_0(uint64_t);
extern "C" unsigned char LeafData_3e6cd0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e6cd0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e6cd0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e6cd0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e6d80_0(uint64_t);
extern "C" unsigned char LeafData_3e6d80_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e6d80(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e6d80_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e6d80_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e6e30_0(uint64_t);
extern "C" unsigned char LeafData_3e6e30_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e6e30(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e6e30_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e6e30_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e6ee0_0(uint64_t);
extern "C" unsigned char LeafData_3e6ee0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e6ee0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e6ee0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e6ee0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e6f90_0(uint64_t);
extern "C" unsigned char LeafData_3e6f90_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e6f90(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e6f90_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e6f90_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e70e0_0(uint64_t);
extern "C" unsigned char LeafData_3e70e0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e70e0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e70e0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e70e0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e7200_0(uint64_t);
extern "C" unsigned char LeafData_3e7200_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e7200(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e7200_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e7200_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e72b0_0(uint64_t);
extern "C" unsigned char LeafData_3e72b0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e72b0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e72b0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e72b0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e7360_0(uint64_t);
extern "C" unsigned char LeafData_3e7360_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e7360(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e7360_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e7360_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e7410_0(uint64_t);
extern "C" unsigned char LeafData_3e7410_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e7410(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e7410_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e7410_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e74c0_0(uint64_t);
extern "C" unsigned char LeafData_3e74c0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e74c0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e74c0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e74c0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e7570_0(uint64_t);
extern "C" unsigned char LeafData_3e7570_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e7570(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e7570_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e7570_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e7620_0(uint64_t);
extern "C" unsigned char LeafData_3e7620_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e7620(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e7620_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e7620_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e7740_0(uint64_t);
extern "C" unsigned char LeafData_3e7740_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e7740(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e7740_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e7740_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e7890_0(uint64_t);
extern "C" unsigned char LeafData_3e7890_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e7890(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e7890_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e7890_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e7940_0(uint64_t);
extern "C" unsigned char LeafData_3e7940_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e7940(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e7940_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e7940_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e7a50_0(uint64_t);
extern "C" unsigned char LeafData_3e7a50_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e7a50(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e7a50_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e7a50_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e7b00_0(uint64_t);
extern "C" unsigned char LeafData_3e7b00_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e7b00(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e7b00_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e7b00_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e7bb0_0(uint64_t);
extern "C" unsigned char LeafData_3e7bb0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e7bb0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e7bb0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e7bb0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e7c60_0(uint64_t);
extern "C" unsigned char LeafData_3e7c60_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e7c60(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e7c60_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e7c60_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e7d10_0(uint64_t);
extern "C" unsigned char LeafData_3e7d10_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e7d10(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e7d10_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e7d10_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e7dc0_0(uint64_t);
extern "C" unsigned char LeafData_3e7dc0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e7dc0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e7dc0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e7dc0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e7e70_0(uint64_t);
extern "C" unsigned char LeafData_3e7e70_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e7e70(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e7e70_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e7e70_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e7fe0_0(uint64_t);
extern "C" unsigned char LeafData_3e7fe0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e7fe0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e7fe0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e7fe0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e8100_0(uint64_t);
extern "C" unsigned char LeafData_3e8100_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e8100(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e8100_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e8100_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e81b0_0(uint64_t);
extern "C" unsigned char LeafData_3e81b0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e81b0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e81b0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e81b0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e8260_0(uint64_t);
extern "C" unsigned char LeafData_3e8260_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e8260(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e8260_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e8260_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e8310_0(uint64_t);
extern "C" unsigned char LeafData_3e8310_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e8310(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e8310_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e8310_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e8430_0(uint64_t);
extern "C" unsigned char LeafData_3e8430_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e8430(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e8430_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e8430_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e84e0_0(uint64_t);
extern "C" unsigned char LeafData_3e84e0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e84e0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e84e0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e84e0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e8590_0(uint64_t);
extern "C" unsigned char LeafData_3e8590_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e8590(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e8590_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e8590_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e86e0_0(uint64_t);
extern "C" unsigned char LeafData_3e86e0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e86e0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e86e0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e86e0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e8850_0(uint64_t);
extern "C" unsigned char LeafData_3e8850_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e8850(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e8850_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e8850_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e8970_0(uint64_t);
extern "C" unsigned char LeafData_3e8970_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e8970(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e8970_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e8970_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e8a20_0(uint64_t);
extern "C" unsigned char LeafData_3e8a20_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e8a20(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e8a20_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e8a20_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e8ad0_0(uint64_t);
extern "C" unsigned char LeafData_3e8ad0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e8ad0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e8ad0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e8ad0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e8b80_0(uint64_t);
extern "C" unsigned char LeafData_3e8b80_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e8b80(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e8b80_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e8b80_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e8c30_0(uint64_t);
extern "C" unsigned char LeafData_3e8c30_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e8c30(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e8c30_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e8c30_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e8ce0_0(uint64_t);
extern "C" unsigned char LeafData_3e8ce0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e8ce0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e8ce0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e8ce0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e8d90_0(uint64_t);
extern "C" unsigned char LeafData_3e8d90_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e8d90(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e8d90_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e8d90_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e8e40_0(uint64_t);
extern "C" unsigned char LeafData_3e8e40_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e8e40(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e8e40_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e8e40_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e8ef0_0(uint64_t);
extern "C" unsigned char LeafData_3e8ef0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e8ef0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e8ef0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e8ef0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e9000_0(uint64_t);
extern "C" unsigned char LeafData_3e9000_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e9000(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e9000_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e9000_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e90b0_0(uint64_t);
extern "C" unsigned char LeafData_3e90b0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e90b0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e90b0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e90b0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e9160_0(uint64_t);
extern "C" unsigned char LeafData_3e9160_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e9160(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e9160_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e9160_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e92b0_0(uint64_t);
extern "C" unsigned char LeafData_3e92b0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e92b0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e92b0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e92b0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e9360_0(uint64_t);
extern "C" unsigned char LeafData_3e9360_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e9360(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e9360_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e9360_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e9410_0(uint64_t);
extern "C" unsigned char LeafData_3e9410_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e9410(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e9410_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e9410_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e94c0_0(uint64_t);
extern "C" unsigned char LeafData_3e94c0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e94c0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e94c0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e94c0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e9570_0(uint64_t);
extern "C" unsigned char LeafData_3e9570_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e9570(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e9570_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e9570_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e9620_0(uint64_t);
extern "C" unsigned char LeafData_3e9620_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e9620(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e9620_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e9620_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e96d0_0(uint64_t);
extern "C" unsigned char LeafData_3e96d0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e96d0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e96d0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e96d0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e9840_0(uint64_t);
extern "C" unsigned char LeafData_3e9840_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e9840(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e9840_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e9840_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e98f0_0(uint64_t);
extern "C" unsigned char LeafData_3e98f0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e98f0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e98f0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e98f0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e99a0_0(uint64_t);
extern "C" unsigned char LeafData_3e99a0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e99a0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e99a0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e99a0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e9a50_0(uint64_t);
extern "C" unsigned char LeafData_3e9a50_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e9a50(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e9a50_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e9a50_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e9b00_0(uint64_t);
extern "C" unsigned char LeafData_3e9b00_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e9b00(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e9b00_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e9b00_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e9bb0_0(uint64_t);
extern "C" unsigned char LeafData_3e9bb0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e9bb0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e9bb0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e9bb0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e9d20_0(uint64_t);
extern "C" unsigned char LeafData_3e9d20_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e9d20(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e9d20_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e9d20_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e9e70_0(uint64_t);
extern "C" unsigned char LeafData_3e9e70_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e9e70(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e9e70_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e9e70_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e9f20_0(uint64_t);
extern "C" unsigned char LeafData_3e9f20_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e9f20(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e9f20_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e9f20_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3e9fd0_0(uint64_t);
extern "C" unsigned char LeafData_3e9fd0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e9fd0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3e9fd0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3e9fd0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3ea080_0(uint64_t);
extern "C" unsigned char LeafData_3ea080_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3ea080(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3ea080_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3ea080_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3ea130_0(uint64_t);
extern "C" unsigned char LeafData_3ea130_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3ea130(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3ea130_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3ea130_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3ea250_0(uint64_t);
extern "C" unsigned char LeafData_3ea250_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3ea250(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3ea250_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3ea250_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3ea300_0(uint64_t);
extern "C" unsigned char LeafData_3ea300_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3ea300(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3ea300_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3ea300_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3ea3b0_0(uint64_t);
extern "C" unsigned char LeafData_3ea3b0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3ea3b0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3ea3b0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3ea3b0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3ea460_0(uint64_t);
extern "C" unsigned char LeafData_3ea460_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3ea460(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3ea460_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3ea460_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3ea5a0_0(uint64_t);
extern "C" unsigned char LeafData_3ea5a0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3ea5a0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3ea5a0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3ea5a0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3ea700_0(uint64_t);
extern "C" unsigned char LeafData_3ea700_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3ea700(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3ea700_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3ea700_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3ea7e0_0(uint64_t);
extern "C" unsigned char LeafData_3ea7e0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3ea7e0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3ea7e0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3ea7e0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3ea890_0(uint64_t);
extern "C" unsigned char LeafData_3ea890_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3ea890(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3ea890_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3ea890_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3ea940_0(uint64_t);
extern "C" unsigned char LeafData_3ea940_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3ea940(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3ea940_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3ea940_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3ea9f0_0(uint64_t);
extern "C" unsigned char LeafData_3ea9f0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3ea9f0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3ea9f0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3ea9f0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3eaaa0_0(uint64_t);
extern "C" unsigned char LeafData_3eaaa0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3eaaa0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3eaaa0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3eaaa0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3eabc0_0(uint64_t);
extern "C" unsigned char LeafData_3eabc0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3eabc0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3eabc0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3eabc0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3eac70_0(uint64_t);
extern "C" unsigned char LeafData_3eac70_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3eac70(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3eac70_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3eac70_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3ead20_0(uint64_t);
extern "C" unsigned char LeafData_3ead20_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3ead20(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3ead20_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3ead20_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3eae60_0(uint64_t);
extern "C" unsigned char LeafData_3eae60_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3eae60(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3eae60_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3eae60_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3eafb0_0(uint64_t);
extern "C" unsigned char LeafData_3eafb0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3eafb0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3eafb0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3eafb0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3eb090_0(uint64_t);
extern "C" unsigned char LeafData_3eb090_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3eb090(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3eb090_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3eb090_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3eb140_0(uint64_t);
extern "C" unsigned char LeafData_3eb140_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3eb140(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3eb140_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3eb140_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3eb1f0_0(uint64_t);
extern "C" unsigned char LeafData_3eb1f0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3eb1f0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3eb1f0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3eb1f0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3eb2a0_0(uint64_t);
extern "C" unsigned char LeafData_3eb2a0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3eb2a0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3eb2a0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3eb2a0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3eb350_0(uint64_t);
extern "C" unsigned char LeafData_3eb350_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3eb350(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3eb350_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3eb350_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3eb400_0(uint64_t);
extern "C" unsigned char LeafData_3eb400_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3eb400(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3eb400_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3eb400_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3eb4b0_0(uint64_t);
extern "C" unsigned char LeafData_3eb4b0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3eb4b0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3eb4b0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3eb4b0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3eb560_0(uint64_t);
extern "C" unsigned char LeafData_3eb560_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3eb560(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3eb560_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3eb560_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3eb610_0(uint64_t);
extern "C" unsigned char LeafData_3eb610_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3eb610(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3eb610_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3eb610_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3eb6c0_0(uint64_t);
extern "C" unsigned char LeafData_3eb6c0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3eb6c0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3eb6c0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3eb6c0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3eb770_0(uint64_t);
extern "C" unsigned char LeafData_3eb770_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3eb770(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3eb770_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3eb770_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3eb820_0(uint64_t);
extern "C" unsigned char LeafData_3eb820_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3eb820(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3eb820_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3eb820_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3eb8d0_0(uint64_t);
extern "C" unsigned char LeafData_3eb8d0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3eb8d0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3eb8d0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3eb8d0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_3eb980_0(uint64_t);
extern "C" unsigned char LeafData_3eb980_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3eb980(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_3eb980_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_3eb980_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_41a160_0(uint64_t);
extern "C" void LeafTarget_41a160(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_41a160(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_41a160_0((arg0 - 32));
    LeafTarget_41a160((arg0 - 32));
}

extern "C" uint64_t RecoveredCall_42fa90_0(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_42fa90(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_42fa90_0(arg0);
    return uint32_t(-1);
}

extern "C" uint64_t RecoveredCall_42fac0_0(uint64_t);
extern "C" void LeafTarget_42fac0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_42fac0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_42fac0_0((arg0 - 8));
    LeafTarget_42fac0((arg0 - 8));
}

extern "C" uint64_t RecoveredCall_42fb00_0(uint64_t);
extern "C" void LeafTarget_42fb00(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_42fb00(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_42fb00_0((arg0 - 72));
    LeafTarget_42fb00((arg0 - 72));
}

extern "C" uint64_t RecoveredCall_42fdf0_0(uint64_t);
extern "C" void LeafTarget_42fdf0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_42fdf0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_42fdf0_0((arg0 - 8));
    LeafTarget_42fdf0((arg0 - 8));
}

extern "C" uint64_t RecoveredCall_42fe30_0(uint64_t);
extern "C" void LeafTarget_42fe30(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_42fe30(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_42fe30_0((arg0 - 88));
    LeafTarget_42fe30((arg0 - 88));
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_431530(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 128));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg1);
    return uint32_t(1);
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_431570(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 96));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg1);
    return uint32_t(1);
}

extern "C" uint64_t RecoveredCall_444a70_0(uint64_t,uint64_t);
extern "C" void LeafTarget_444a70(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_444a70(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_444a70_0((arg0 + 8),arg1);
    LeafTarget_444a70((arg0 + 32),arg1);
}

extern "C" uint64_t RecoveredCall_466210_0(uint64_t);
extern "C" void LeafTarget_466210(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_466210(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_466210_0((arg0 - 32));
    LeafTarget_466210((arg0 - 32));
}

extern "C" uint64_t RecoveredCall_46f380_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_46f380_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_46f380_2(uint64_t,uint64_t);
extern "C" void LeafTarget_46f380(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_46f380(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_46f380_0((arg0 + 80),arg1);
    const uint64_t result1 = RecoveredCall_46f380_1((arg0 + 104),arg1);
    const uint64_t result2 = RecoveredCall_46f380_2((arg0 + 32),arg1);
    LeafTarget_46f380((arg0 + 8),arg1);
}

extern "C" uint64_t RecoveredCall_46fef0_0(uint64_t);
extern "C" void LeafTarget_46fef0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_46fef0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_46fef0_0((arg0 - 8));
    LeafTarget_46fef0((arg0 - 8));
}

extern "C" uint64_t RecoveredCall_472e60_0(uint64_t);
extern "C" void LeafTarget_472e60(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_472e60(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint8_t*>((arg0 + 68)) = uint32_t(uint32_t(1));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    const uint64_t result0 = RecoveredCall_472e60_0(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    LeafTarget_472e60(field1);
}

extern "C" uint64_t RecoveredCall_4792c0_0(uint64_t,uint64_t);
extern "C" void LeafTarget_4792c0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4792c0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 360));
    const uint64_t result0 = RecoveredCall_4792c0_0(field0,arg1);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 368));
    LeafTarget_4792c0(field1,arg1);
}

extern "C" uint64_t RecoveredCall_47c250_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_47c250(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 32));
    const uint64_t result0 = RecoveredCall_47c250_0(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((result0 + 0) + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((result0 + 0) + 8));
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((result0 + 15));
    *reinterpret_cast<uint32_t*>((arg0 + 79)) = uint32_t(uint32_t(field3));
    *reinterpret_cast<uint64_t*>(((arg0 + 64) + 0)) = field1;
    *reinterpret_cast<uint64_t*>(((arg0 + 64) + 8)) = field2;
    return result0;
}

extern "C" uint64_t RecoveredCall_489a20_0(uint64_t);
extern "C" uint64_t LeafData_489a20_2;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_489a20(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_489a20_0(uint32_t(16));
    const uint64_t field0 = LeafData_489a20_2;
    *reinterpret_cast<uint64_t*>((result0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_489fa0_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_489fa0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_489fa0_0((arg0 + 32),0,0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 128));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result1;
}

extern "C" uint64_t RecoveredCall_48b180_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_48b180(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_48b180_0((arg0 + 32),0,0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 128));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result1;
}

extern "C" uint64_t RecoveredCall_495930_0(uint64_t);
extern "C" unsigned char LeafData_495930_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_495930(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_495930_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_495930_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_4959e0_0(uint64_t);
extern "C" unsigned char LeafData_4959e0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4959e0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4959e0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_4959e0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_495a90_0(uint64_t);
extern "C" unsigned char LeafData_495a90_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_495a90(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_495a90_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_495a90_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_495b40_0(uint64_t);
extern "C" unsigned char LeafData_495b40_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_495b40(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_495b40_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_495b40_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_495bf0_0(uint64_t);
extern "C" unsigned char LeafData_495bf0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_495bf0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_495bf0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_495bf0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_495ca0_0(uint64_t);
extern "C" unsigned char LeafData_495ca0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_495ca0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_495ca0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_495ca0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_495d60_0(uint64_t);
extern "C" unsigned char LeafData_495d60_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_495d60(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_495d60_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_495d60_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_496080_0(uint64_t);
extern "C" uint64_t LeafData_496080_2;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_496080(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_496080_0(uint32_t(16));
    const uint64_t field0 = LeafData_496080_2;
    *reinterpret_cast<uint64_t*>((result0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_496140_0(uint64_t);
extern "C" uint64_t LeafData_496140_2;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_496140(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_496140_0(uint32_t(16));
    const uint64_t field0 = LeafData_496140_2;
    *reinterpret_cast<uint64_t*>((result0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_4964f0_0(uint64_t);
extern "C" unsigned char LeafData_4964f0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4964f0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4964f0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_4964f0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_49c5f0_0(uint64_t);
extern "C" void LeafTarget_49c5f0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_49c5f0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_49c5f0_0((arg0 - 88));
    LeafTarget_49c5f0((arg0 - 88));
}

extern "C" uint64_t RecoveredCall_49c620_0(uint64_t);
extern "C" void LeafTarget_49c620(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_49c620(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_49c620_0((arg0 - 96));
    LeafTarget_49c620((arg0 - 96));
}

extern "C" uint64_t RecoveredCall_49d690_0(uint64_t);
extern "C" void LeafTarget_49d690(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_49d690(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 64));
    const uint64_t result0 = RecoveredCall_49d690_0(field0);
    LeafTarget_49d690(arg0,result0);
}

extern "C" uint64_t RecoveredCall_49e830_0(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_49e830(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_49e830_0(arg0);
    return uint32_t((uint32_t(result0) != 0));
}

extern "C" uint64_t RecoveredCall_4a3c10_0(uint64_t);
extern "C" void LeafTarget_4a3c10(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4a3c10(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4a3c10_0((arg0 - 88));
    LeafTarget_4a3c10((arg0 - 88));
}

extern "C" uint64_t RecoveredCall_4a3c40_0(uint64_t);
extern "C" void LeafTarget_4a3c40(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4a3c40(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4a3c40_0((arg0 - 96));
    LeafTarget_4a3c40((arg0 - 96));
}

extern "C" uint64_t RecoveredCall_4b1d20_0(uint64_t);
extern "C" uint64_t LeafData_4b1d20_3;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4b1d20(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4b1d20_0(arg0);
    const uint64_t field0 = LeafData_4b1d20_3;
    *reinterpret_cast<uint8_t*>((arg0 + 64)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 72)) = arg1;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_4b5cb0_0(uint64_t);
extern "C" void LeafTarget_4b5cb0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4b5cb0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4b5cb0_0((arg0 - 88));
    LeafTarget_4b5cb0((arg0 - 88));
}

extern "C" uint64_t RecoveredCall_4b5cf0_0(uint64_t);
extern "C" void LeafTarget_4b5cf0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4b5cf0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4b5cf0_0((arg0 - 96));
    LeafTarget_4b5cf0((arg0 - 96));
}

extern "C" uint64_t RecoveredCall_4b5d30_0(uint64_t);
extern "C" void LeafTarget_4b5d30(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4b5d30(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4b5d30_0((arg0 - 104));
    LeafTarget_4b5d30((arg0 - 104));
}

extern "C" uint64_t RecoveredCall_4c89b0_0(uint64_t);
extern "C" unsigned char LeafData_4c89b0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4c89b0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4c89b0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_4c89b0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_4c8a70_0(uint64_t);
extern "C" unsigned char LeafData_4c8a70_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4c8a70(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4c8a70_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_4c8a70_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_4c9320_0(uint64_t);
extern "C" void LeafTarget_4c9320(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4c9320(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4c9320_0((arg0 - 64));
    LeafTarget_4c9320((arg0 - 64));
}

extern "C" uint64_t RecoveredCall_4c98c0_0(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4c98c0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 208));
    const uint64_t result0 = RecoveredCall_4c98c0_0(field0);
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((result0 + 0));
    return uint32_t(field1);
}

extern "C" uint64_t RecoveredCall_4c98e0_0(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4c98e0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 208));
    const uint64_t result0 = RecoveredCall_4c98e0_0(field0);
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((result0 + 0));
    return uint32_t(field1);
}

extern "C" uint64_t RecoveredCall_4c9900_0(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4c9900(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 208));
    const uint64_t result0 = RecoveredCall_4c9900_0(field0);
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((result0 + 0));
    return uint32_t(field1);
}

extern "C" uint64_t RecoveredCall_4d43f0_1(uint64_t,uint64_t);
extern "C" void LeafTarget_4d43f0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4d43f0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 896));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 120));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 80));
    const uint64_t result1 = RecoveredCall_4d43f0_1(field3,result0);
    LeafTarget_4d43f0(arg0);
}

extern "C" uint64_t RecoveredCall_4d4430_0(uint64_t);
extern "C" void LeafTarget_4d4430(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4d4430(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4d4430_0(arg0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 120));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 80));
    LeafTarget_4d4430(field1,0);
}

extern "C" uint64_t RecoveredCall_4d6c60_0(uint64_t);
extern "C" unsigned char LeafData_4d6c60_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4d6c60(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4d6c60_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_4d6c60_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_4d6d40_0(uint64_t);
extern "C" unsigned char LeafData_4d6d40_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4d6d40(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4d6d40_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_4d6d40_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_4d6e30_0(uint64_t);
extern "C" unsigned char LeafData_4d6e30_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4d6e30(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4d6e30_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_4d6e30_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_4d7640_0(uint64_t,uint64_t);
extern "C" void LeafTarget_4d7640(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4d7640(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 512));
    const uint64_t result0 = RecoveredCall_4d7640_0(field0,uint32_t(4));
    LeafTarget_4d7640(arg0);
}

extern "C" uint64_t RecoveredCall_4d7680_0(uint64_t);
extern "C" uint64_t LeafData_4d7680_2;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4d7680(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4d7680_0(uint32_t(16));
    const uint64_t field0 = LeafData_4d7680_2;
    *reinterpret_cast<uint64_t*>((result0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_4d8530_0(uint64_t,uint64_t);
extern "C" void LeafTarget_4d8530(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4d8530(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 512));
    const uint64_t result0 = RecoveredCall_4d8530_0(field0,uint32_t(4));
    LeafTarget_4d8530(arg0);
}

extern "C" uint64_t RecoveredCall_4d8570_0(uint64_t);
extern "C" uint64_t LeafData_4d8570_2;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4d8570(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4d8570_0(uint32_t(16));
    const uint64_t field0 = LeafData_4d8570_2;
    *reinterpret_cast<uint64_t*>((result0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_4d9080_0(uint64_t,uint64_t);
extern "C" void LeafTarget_4d9080(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4d9080(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 512));
    const uint64_t result0 = RecoveredCall_4d9080_0(field0,uint32_t(4));
    LeafTarget_4d9080(arg0);
}

extern "C" uint64_t RecoveredCall_4d90c0_0(uint64_t);
extern "C" uint64_t LeafData_4d90c0_2;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4d90c0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4d90c0_0(uint32_t(16));
    const uint64_t field0 = LeafData_4d90c0_2;
    *reinterpret_cast<uint64_t*>((result0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_4dadb0_0(uint64_t,uint64_t);
extern "C" void LeafTarget_4dadb0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4dadb0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 512));
    const uint64_t result0 = RecoveredCall_4dadb0_0(field0,uint32_t(4));
    LeafTarget_4dadb0(arg0);
}

extern "C" uint64_t RecoveredCall_4dadf0_0(uint64_t);
extern "C" uint64_t LeafData_4dadf0_2;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4dadf0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4dadf0_0(uint32_t(16));
    const uint64_t field0 = LeafData_4dadf0_2;
    *reinterpret_cast<uint64_t*>((result0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_4dc630_0(uint64_t,uint64_t);
extern "C" void LeafTarget_4dc630(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4dc630(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 512));
    const uint64_t result0 = RecoveredCall_4dc630_0(field0,uint32_t(4));
    LeafTarget_4dc630(arg0);
}

extern "C" uint64_t RecoveredCall_4dc670_0(uint64_t);
extern "C" uint64_t LeafData_4dc670_2;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4dc670(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4dc670_0(uint32_t(16));
    const uint64_t field0 = LeafData_4dc670_2;
    *reinterpret_cast<uint64_t*>((result0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_4de300_0(uint64_t,uint64_t);
extern "C" void LeafTarget_4de300(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4de300(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 512));
    const uint64_t result0 = RecoveredCall_4de300_0(field0,uint32_t(4));
    LeafTarget_4de300(arg0);
}

extern "C" uint64_t RecoveredCall_4de350_0(uint64_t);
extern "C" uint64_t LeafData_4de350_2;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4de350(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4de350_0(uint32_t(16));
    const uint64_t field0 = LeafData_4de350_2;
    *reinterpret_cast<uint64_t*>((result0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_4dfb60_0(uint64_t,uint64_t);
extern "C" void LeafTarget_4dfb60(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4dfb60(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 512));
    const uint64_t result0 = RecoveredCall_4dfb60_0(field0,uint32_t(4));
    LeafTarget_4dfb60(arg0);
}

extern "C" uint64_t RecoveredCall_4dfba0_0(uint64_t);
extern "C" uint64_t LeafData_4dfba0_2;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4dfba0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4dfba0_0(uint32_t(16));
    const uint64_t field0 = LeafData_4dfba0_2;
    *reinterpret_cast<uint64_t*>((result0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_4e1a00_0(uint64_t,uint64_t);
extern "C" void LeafTarget_4e1a00(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4e1a00(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 512));
    const uint64_t result0 = RecoveredCall_4e1a00_0(field0,uint32_t(4));
    LeafTarget_4e1a00(arg0);
}

extern "C" uint64_t RecoveredCall_4e1a40_0(uint64_t);
extern "C" uint64_t LeafData_4e1a40_2;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4e1a40(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4e1a40_0(uint32_t(16));
    const uint64_t field0 = LeafData_4e1a40_2;
    *reinterpret_cast<uint64_t*>((result0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_4e3390_0(uint64_t,uint64_t);
extern "C" void LeafTarget_4e3390(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4e3390(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 512));
    const uint64_t result0 = RecoveredCall_4e3390_0(field0,uint32_t(4));
    LeafTarget_4e3390(arg0);
}

extern "C" uint64_t RecoveredCall_4e33d0_0(uint64_t);
extern "C" uint64_t LeafData_4e33d0_2;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4e33d0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4e33d0_0(uint32_t(16));
    const uint64_t field0 = LeafData_4e33d0_2;
    *reinterpret_cast<uint64_t*>((result0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_4e4e20_0(uint64_t,uint64_t);
extern "C" void LeafTarget_4e4e20(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4e4e20(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 512));
    const uint64_t result0 = RecoveredCall_4e4e20_0(field0,uint32_t(4));
    LeafTarget_4e4e20(arg0);
}

extern "C" uint64_t RecoveredCall_4e4e60_0(uint64_t);
extern "C" uint64_t LeafData_4e4e60_2;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4e4e60(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4e4e60_0(uint32_t(16));
    const uint64_t field0 = LeafData_4e4e60_2;
    *reinterpret_cast<uint64_t*>((result0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_4e6990_0(uint64_t,uint64_t);
extern "C" void LeafTarget_4e6990(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4e6990(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 512));
    const uint64_t result0 = RecoveredCall_4e6990_0(field0,uint32_t(4));
    LeafTarget_4e6990(arg0);
}

extern "C" uint64_t RecoveredCall_4e69d0_0(uint64_t);
extern "C" uint64_t LeafData_4e69d0_2;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4e69d0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4e69d0_0(uint32_t(16));
    const uint64_t field0 = LeafData_4e69d0_2;
    *reinterpret_cast<uint64_t*>((result0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_4e77f0_0(uint64_t,uint64_t);
extern "C" void LeafTarget_4e77f0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4e77f0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 512));
    const uint64_t result0 = RecoveredCall_4e77f0_0(field0,uint32_t(4));
    LeafTarget_4e77f0(arg0);
}

extern "C" uint64_t RecoveredCall_4e7830_0(uint64_t);
extern "C" uint64_t LeafData_4e7830_2;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4e7830(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4e7830_0(uint32_t(16));
    const uint64_t field0 = LeafData_4e7830_2;
    *reinterpret_cast<uint64_t*>((result0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_4e93b0_0(uint64_t,uint64_t);
extern "C" void LeafTarget_4e93b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4e93b0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 512));
    const uint64_t result0 = RecoveredCall_4e93b0_0(field0,uint32_t(4));
    LeafTarget_4e93b0(arg0);
}

extern "C" uint64_t RecoveredCall_4e93f0_0(uint64_t);
extern "C" uint64_t LeafData_4e93f0_2;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4e93f0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4e93f0_0(uint32_t(16));
    const uint64_t field0 = LeafData_4e93f0_2;
    *reinterpret_cast<uint64_t*>((result0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_4eb250_0(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_4eb250_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_4eb250_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_4eb250_3(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_4eb250_4(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_4eb250_5(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_4eb250_6(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_4eb250_7(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_4eb250_8(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_4eb250_9(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_4eb250(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4eb250(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4eb250_0(arg0,(arg1 + 8),uint32_t(4),uint32_t(1));
    const uint64_t result1 = RecoveredCall_4eb250_1(arg0,(arg1 + 16));
    const uint64_t result2 = RecoveredCall_4eb250_2(arg0,(arg1 + 24));
    const uint64_t result3 = RecoveredCall_4eb250_3(arg0,(arg1 + 32));
    const uint64_t result4 = RecoveredCall_4eb250_4(arg0,(arg1 + 40));
    const uint64_t result5 = RecoveredCall_4eb250_5(arg0,(arg1 + 48));
    const uint64_t result6 = RecoveredCall_4eb250_6(arg0,(arg1 + 56),uint32_t(4),uint32_t(1));
    const uint64_t result7 = RecoveredCall_4eb250_7(arg0,(arg1 + 60),uint32_t(4),uint32_t(1));
    const uint64_t result8 = RecoveredCall_4eb250_8(arg0,(arg1 + 64),uint32_t(4),uint32_t(1));
    const uint64_t result9 = RecoveredCall_4eb250_9(arg0,(arg1 + 68),uint32_t(4),uint32_t(1));
    LeafTarget_4eb250(arg0,(arg1 + 72),uint32_t(4),uint32_t(1));
}

extern "C" uint64_t LeafData_4ede10_0;
extern "C" uint64_t RecoveredCall_4ede10_0(uint64_t);
extern "C" uint64_t RecoveredCall_4ede10_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_4ede10_2(uint64_t);
extern "C" void LeafTarget_4ede10(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4ede10(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_4ede10_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t result0 = RecoveredCall_4ede10_0(arg0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    const uint64_t result1 = RecoveredCall_4ede10_1((arg0 + 64),field1);
    const uint64_t result2 = RecoveredCall_4ede10_2((arg0 + 32));
    LeafTarget_4ede10(arg0);
}

extern "C" uint64_t LeafData_4ede60_0;
extern "C" uint64_t RecoveredCall_4ede60_0(uint64_t);
extern "C" uint64_t RecoveredCall_4ede60_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_4ede60_2(uint64_t);
extern "C" uint64_t RecoveredCall_4ede60_3(uint64_t);
extern "C" void LeafTarget_4ede60(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4ede60(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_4ede60_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t result0 = RecoveredCall_4ede60_0(arg0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    const uint64_t result1 = RecoveredCall_4ede60_1((arg0 + 64),field1);
    const uint64_t result2 = RecoveredCall_4ede60_2((arg0 + 32));
    const uint64_t result3 = RecoveredCall_4ede60_3(arg0);
    LeafTarget_4ede60(arg0);
}

extern "C" uint64_t RecoveredCall_4ee1e0_0(uint64_t);
extern "C" void LeafTarget_4ee1e0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4ee1e0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4ee1e0_0((arg0 + 16));
    LeafTarget_4ee1e0((arg0 + 8));
}

extern "C" uint64_t LeafData_4eeef0_0;
extern "C" uint64_t RecoveredCall_4eeef0_0(uint64_t);
extern "C" uint64_t RecoveredCall_4eeef0_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_4eeef0_2(uint64_t);
extern "C" void LeafTarget_4eeef0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4eeef0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_4eeef0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t result0 = RecoveredCall_4eeef0_0(arg0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    const uint64_t result1 = RecoveredCall_4eeef0_1((arg0 + 64),field1);
    const uint64_t result2 = RecoveredCall_4eeef0_2((arg0 + 32));
    LeafTarget_4eeef0(arg0);
}

extern "C" uint64_t LeafData_4eef40_0;
extern "C" uint64_t RecoveredCall_4eef40_0(uint64_t);
extern "C" uint64_t RecoveredCall_4eef40_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_4eef40_2(uint64_t);
extern "C" uint64_t RecoveredCall_4eef40_3(uint64_t);
extern "C" void LeafTarget_4eef40(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4eef40(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_4eef40_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t result0 = RecoveredCall_4eef40_0(arg0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    const uint64_t result1 = RecoveredCall_4eef40_1((arg0 + 64),field1);
    const uint64_t result2 = RecoveredCall_4eef40_2((arg0 + 32));
    const uint64_t result3 = RecoveredCall_4eef40_3(arg0);
    LeafTarget_4eef40(arg0);
}

extern "C" uint64_t LeafData_4ef1f0_0;
extern "C" uint64_t RecoveredCall_4ef1f0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4ef1f0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_4ef1f0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = 0;
    *reinterpret_cast<uint32_t*>((arg0 + 28)) = uint32_t(arg1);
    *reinterpret_cast<uint32_t*>((arg0 + 12)) = uint32_t(arg2);
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t result0 = RecoveredCall_4ef1f0_0(arg0);
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = ((1000 & 0xffffffffffffull) | (64ull << 48));
    *reinterpret_cast<uint32_t*>((arg0 + 24)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = result0;
    *reinterpret_cast<uint8_t*>((arg0 + 40)) = 0;
    *reinterpret_cast<uint16_t*>((arg0 + 8)) = uint32_t(uint32_t(1));
    return result0;
}

extern "C" uint64_t RecoveredCall_4f0040_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4f0040(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4f0040_0((arg0 + 8));
    *reinterpret_cast<uint64_t*>((arg0 + 128)) = 0;
    return result0;
}

extern "C" uint64_t RecoveredCall_4f3180_0(uint64_t,uint64_t);
extern "C" void LeafTarget_4f3180(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4f3180(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4f3180_0((arg0 + 8),arg1);
    LeafTarget_4f3180((arg0 + 88),arg1);
}

extern "C" uint64_t RecoveredCall_4f45b0_0(uint64_t);
extern "C" uint64_t RecoveredCall_4f45b0_1(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4f45b0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = 0;
    const uint64_t result0 = RecoveredCall_4f45b0_0(arg0);
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = result0;
    const uint64_t result1 = RecoveredCall_4f45b0_1(result0);
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = result1;
    return result1;
}

extern "C" uint64_t RecoveredCall_4f45e0_0(uint64_t);
extern "C" uint64_t RecoveredCall_4f45e0_1(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4f45e0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4f45e0_0(arg0);
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = result0;
    const uint64_t result1 = RecoveredCall_4f45e0_1(result0);
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = result1;
    return result1;
}

extern "C" uint64_t RecoveredCall_4f4760_0(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4f4760(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint64_t result0 = RecoveredCall_4f4760_0(arg0);
    return uint32_t((field0 == result0));
}

extern "C" uint64_t RecoveredCall_4f53c0_0(uint64_t);
extern "C" uint64_t LeafData_4f53c0_3;
extern "C" uint64_t RecoveredCall_4f53c0_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4f53c0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4f53c0_0(arg0);
    const uint64_t field0 = LeafData_4f53c0_3;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t result1 = RecoveredCall_4f53c0_1((arg0 + 16),arg1);
    *reinterpret_cast<uint64_t*>(((arg0 + 24) + 0)) = uint32_t(1);
    *reinterpret_cast<uint64_t*>(((arg0 + 24) + 8)) = 0;
    return result1;
}

extern "C" unsigned char LeafData_4f5c90_2[];
extern "C" unsigned char LeafData_4f5c90_8[];
extern "C" uint64_t RecoveredCall_4f5c90_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4f5c90(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint16_t*>((arg0 + 0)) = uint32_t(uint32_t(21));
    *reinterpret_cast<uint32_t*>((arg0 + 16)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = reinterpret_cast<uintptr_t>(LeafData_4f5c90_2);
    const uint64_t result0 = RecoveredCall_4f5c90_0((arg0 + 24),reinterpret_cast<uintptr_t>(LeafData_4f5c90_8));
    *reinterpret_cast<uint8_t*>((arg0 + 32)) = uint32_t(uint32_t(1));
    return result0;
}

extern "C" uint64_t RecoveredCall_4f5ce0_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4f5ce0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint16_t field0 = *reinterpret_cast<const uint16_t*>((arg1 + 0));
    *reinterpret_cast<uint16_t*>((arg0 + 0)) = uint32_t(uint32_t(field0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = field1;
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((arg1 + 16));
    *reinterpret_cast<uint32_t*>((arg0 + 16)) = uint32_t(uint32_t(field2));
    const uint64_t result0 = RecoveredCall_4f5ce0_0((arg0 + 24),(arg1 + 24));
    const uint8_t field3 = *reinterpret_cast<const uint8_t*>((arg1 + 32));
    *reinterpret_cast<uint8_t*>((arg0 + 32)) = uint32_t(uint32_t(field3));
    return result0;
}

extern "C" uint64_t RecoveredCall_4f5d90_0(uint64_t);
extern "C" unsigned char LeafData_4f5d90_12[];
extern "C" uint64_t RecoveredCall_4f5d90_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4f5d90(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4f5d90_0((arg0 + 24));
    const uint16_t field0 = *reinterpret_cast<const uint16_t*>((arg1 + 0));
    *reinterpret_cast<uint16_t*>((arg0 + 0)) = uint32_t(uint32_t(field0));
    *reinterpret_cast<uint16_t*>((arg1 + 0)) = uint32_t(uint32_t(21));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = field1;
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((arg1 + 16));
    *reinterpret_cast<uint64_t*>((arg1 + 8)) = reinterpret_cast<uintptr_t>(LeafData_4f5d90_12);
    *reinterpret_cast<uint32_t*>((arg0 + 16)) = uint32_t(uint32_t(field2));
    *reinterpret_cast<uint32_t*>((arg1 + 16)) = 0;
    const uint64_t result1 = RecoveredCall_4f5d90_1((arg0 + 24),(arg1 + 24));
    const uint8_t field3 = *reinterpret_cast<const uint8_t*>((arg1 + 32));
    *reinterpret_cast<uint8_t*>((arg0 + 32)) = uint32_t(uint32_t(field3));
    *reinterpret_cast<uint8_t*>((arg1 + 32)) = uint32_t(uint32_t(1));
    return result1;
}

extern "C" unsigned char LeafData_4f5e90_0[];
extern "C" unsigned char LeafData_4f5e90_7[];
extern "C" uint64_t RecoveredCall_4f5e90_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4f5e90(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    *reinterpret_cast<uint32_t*>((arg0 + 16)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = reinterpret_cast<uintptr_t>(LeafData_4f5e90_0);
    const uint64_t result0 = RecoveredCall_4f5e90_0((arg0 + 24),reinterpret_cast<uintptr_t>(LeafData_4f5e90_7));
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 0));
    *reinterpret_cast<uint8_t*>((arg0 + 32)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) ^ 1)));
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((arg1 + 0));
    *reinterpret_cast<uint16_t*>((arg0 + 0)) = uint32_t(uint32_t((uint32_t(uint32_t(field1)) ^ 1)));
    return result0;
}

extern "C" uint64_t LeafData_4f6440_0;
extern "C" uint64_t RecoveredCall_4f6440_0(uint64_t);
extern "C" uint64_t RecoveredCall_4f6440_1(uint64_t,uint64_t);
extern "C" void LeafTarget_4f6440(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4f6440(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_4f6440_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t result0 = RecoveredCall_4f6440_0(arg0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    const uint64_t result1 = RecoveredCall_4f6440_1((arg0 + 40),field1);
    LeafTarget_4f6440(arg0);
}

extern "C" uint64_t LeafData_4f6560_0;
extern "C" uint64_t RecoveredCall_4f6560_0(uint64_t);
extern "C" uint64_t RecoveredCall_4f6560_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_4f6560_2(uint64_t);
extern "C" void LeafTarget_4f6560(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4f6560(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_4f6560_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t result0 = RecoveredCall_4f6560_0(arg0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    const uint64_t result1 = RecoveredCall_4f6560_1((arg0 + 40),field1);
    const uint64_t result2 = RecoveredCall_4f6560_2(arg0);
    LeafTarget_4f6560(arg0);
}

extern "C" uint64_t RecoveredCall_4f7700_0(uint64_t);
extern "C" uint64_t RecoveredCall_4f7700_1(uint64_t);
extern "C" void LeafTarget_4f7700(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4f7700(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4f7700_0((arg0 + 8));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((result0 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((field0 + 0) + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((field0 + 0) + 8));
    *reinterpret_cast<uint64_t*>((field1 + 8)) = field2;
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((field0 + 0) + 8));
    *reinterpret_cast<uint64_t*>((field4 + 0)) = field3;
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((result0 + 16));
    *reinterpret_cast<uint64_t*>((result0 + 16)) = (field5 - 1);
    const uint64_t result1 = RecoveredCall_4f7700_1((field0 + 32));
    LeafTarget_4f7700(field0);
}

extern "C" uint64_t RecoveredCall_4f8660_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4f8660(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4f8660_0(arg0);
    return arg0;
}

extern "C" uint64_t RecoveredCall_4fade0_0(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4fade0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 0));
    const uint64_t result0 = RecoveredCall_4fade0_0(uint32_t(field0));
    *reinterpret_cast<uint32_t*>((arg0 + 4)) = uint32_t(result0);
    return result0;
}

extern "C" uint64_t RecoveredCall_4fc1a0_0(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4fc1a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 16));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((arg1 + 24));
    const uint64_t result0 = RecoveredCall_4fc1a0_0(arg0,field0,uint32_t(field1),uint32_t(-1));
    return arg0;
}

extern "C" uint64_t RecoveredCall_4fe270_0(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4fe270(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_4fe270_0(arg1);
    return uint32_t((uint32_t(result0) == 1));
}

extern "C" uint64_t LeafData_503f30_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_503f30(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_503f30_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = 0;
    return result0;
}

extern "C" uint64_t LeafData_503f70_0;
extern "C" void LeafTarget_503f70(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_503f70(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_503f70_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = 0;
    LeafTarget_503f70(arg0);
}

extern "C" uint64_t RecoveredCall_503fc0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_503fc0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_503fc0_0(field0);
    *reinterpret_cast<uint8_t*>((arg0 + 24)) = 0;
    *reinterpret_cast<uint32_t*>((arg0 + 16)) = 0;
    return result0;
}

extern "C" uint64_t RecoveredCall_504040_0(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_504040(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_504040_0(field0,arg1,arg2,uint32_t(-1));
    return uint32_t(1);
}

extern "C" uint64_t RecoveredCall_504140_0(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_504140(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_504140_0(field0,arg1,uint32_t((uint32_t(arg3) * uint32_t(arg2))),uint32_t(-1));
    return uint32_t(1);
}

extern "C" uint64_t RecoveredCall_504830_0(uint64_t);
extern "C" void LeafTarget_504830(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_504830(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_504830_0(arg0);
    LeafTarget_504830(result0);
}

extern "C" uint64_t RecoveredCall_509520_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_509520(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_509520_0(arg0);
    *reinterpret_cast<uint64_t*>((arg0 + 208)) = result0;
    return result0;
}

extern "C" uint64_t RecoveredCall_5098b0_0(uint64_t);
extern "C" uint64_t LeafData_5098b0_3;
extern "C" uint64_t RecoveredCall_5098b0_1(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5098b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5098b0_0(arg0);
    const uint64_t field0 = LeafData_5098b0_3;
    *reinterpret_cast<uint16_t*>((arg0 + 48)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 16) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 16) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 64)) = arg1;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t result1 = RecoveredCall_5098b0_1((arg0 + 72));
    *reinterpret_cast<uint16_t*>((arg0 + 32)) = 0;
    *reinterpret_cast<uint16_t*>((arg0 + 48)) = 0;
    *reinterpret_cast<uint32_t*>((arg0 + 52)) = 0;
    *reinterpret_cast<uint8_t*>((arg0 + 56)) = 0;
    *reinterpret_cast<uint8_t*>((arg0 + 34)) = 0;
    *reinterpret_cast<uint32_t*>((arg0 + 36)) = 0;
    *reinterpret_cast<uint32_t*>((arg0 + 44)) = 0;
    *reinterpret_cast<uint8_t*>((arg0 + 40)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 214)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 200) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 200) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 224) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 224) + 8)) = 0;
    return result1;
}

extern "C" uint64_t RecoveredCall_50eb10_0(uint64_t);
extern "C" void LeafTarget_50eb10(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_50eb10(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_50eb10_0((arg0 + 24));
    LeafTarget_50eb10((arg0 + 144),arg1);
}

extern "C" uint64_t RecoveredCall_50eb40_0(uint64_t);
extern "C" void LeafTarget_50eb40(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_50eb40(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_50eb40_0((arg0 + 24));
    LeafTarget_50eb40((arg0 + 152),arg1);
}

extern "C" uint64_t RecoveredCall_5104b0_1(uint64_t);
extern "C" void LeafTarget_5104b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5104b0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((field0 + 0) + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((field0 + 0) + 8));
    *reinterpret_cast<uint64_t*>((field1 + 8)) = field2;
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((field0 + 0) + 8));
    *reinterpret_cast<uint64_t*>((field4 + 0)) = field3;
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = (field5 - 1);
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field8)(field6);
    const uint64_t result1 = RecoveredCall_5104b0_1((field0 + 24));
    LeafTarget_5104b0(field0);
}

extern "C" uint64_t RecoveredCall_510c20_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_510c20(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_510c20_0((arg0 + 8),uint32_t(1073741824));
    *reinterpret_cast<uint64_t*>(((arg0 + 88) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 88) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 72) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 72) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 56) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 56) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 40) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 40) + 8)) = 0;
    return result0;
}

extern "C" uint64_t RecoveredCall_512dc0_0(uint64_t);
extern "C" uint64_t RecoveredCall_512dc0_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_512dc0_2(uint64_t,uint64_t);
extern "C" uint64_t LeafData_512dc0_9;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_512dc0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_512dc0_0(uint32_t(32));
    const uint64_t result1 = RecoveredCall_512dc0_1(result0,uint32_t(1024));
    const uint64_t result2 = RecoveredCall_512dc0_2(arg0,result0);
    const uint64_t field0 = LeafData_512dc0_9;
    *reinterpret_cast<uint8_t*>((arg0 + 240)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 248)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    return result2;
}

extern "C" uint64_t RecoveredCall_5150a0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5150a0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5150a0_0((arg0 + 16));
    *reinterpret_cast<uint64_t*>(((arg0 + 0) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 0) + 8)) = 0;
    return result0;
}

extern "C" uint64_t RecoveredCall_515480_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_515480(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_515480_0(arg2,arg1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 24));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,arg2);
    return uint32_t(0);
}

extern "C" uint64_t RecoveredCall_5155f0_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5155f0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5155f0_0(arg2,arg1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 40));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,arg2);
    return uint32_t(0);
}

extern "C" uint64_t RecoveredCall_516520_0(uint64_t);
extern "C" uint64_t LeafData_516520_2;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_516520(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_516520_0(arg0);
    const uint64_t field0 = LeafData_516520_2;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_516790_0(uint64_t);
extern "C" void LeafTarget_516790(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_516790(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_516790_0(arg0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    LeafTarget_516790((arg0 + 8),field0);
}

extern "C" uint64_t RecoveredCall_5170c0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t LeafData_5170c0_5;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5170c0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5170c0_0(arg0,uint32_t(8),uint32_t(64));
    *reinterpret_cast<uint16_t*>((arg0 + 192)) = 0;
    const uint64_t field0 = LeafData_5170c0_5;
    *reinterpret_cast<uint64_t*>(((arg0 + 176) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 176) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 160) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 160) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    *reinterpret_cast<uint64_t*>(((arg0 + 144) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 144) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 128) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 128) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 112) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 112) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 96) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 96) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 80) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 80) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 64) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 64) + 8)) = 0;
    return result0;
}

extern "C" uint64_t RecoveredCall_518330_1(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_518330(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = arg1;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    *reinterpret_cast<uint8_t*>((arg0 + 20)) = 0;
    *reinterpret_cast<uint32_t*>((arg0 + 16)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = 30064771072;
    const uint64_t result1 = RecoveredCall_518330_1(field2);
    *reinterpret_cast<uint32_t*>((arg0 + 16)) = uint32_t(uint32_t((uint32_t(result1) << 3)));
    return result1;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_518380(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = 0;
    return result0;
}

extern "C" uint64_t RecoveredCall_518b70_0(uint64_t,uint64_t);
extern "C" uint64_t LeafData_518b70_3;
extern "C" uint64_t RecoveredCall_518b70_1(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_518b70(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_518b70_0(arg0,arg1);
    const uint64_t field0 = LeafData_518b70_3;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t result1 = RecoveredCall_518b70_1(result0);
    *reinterpret_cast<uint8_t*>((arg0 + 32)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 16) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 16) + 8)) = arg2;
    return result1;
}

extern "C" uint64_t LeafData_518bb0_0;
extern "C" uint64_t RecoveredCall_518bb0_0(uint64_t);
extern "C" void LeafTarget_518bb0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_518bb0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_518bb0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t result0 = RecoveredCall_518bb0_0(arg0);
    LeafTarget_518bb0(arg0);
}

extern "C" uint64_t RecoveredCall_519ac0_0(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_519ac0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_519ac0_0(field0);
    return uint32_t((uint32_t(result0) - 4));
}

extern "C" uint64_t RecoveredCall_51ddc0_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_51ddc0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    const uint64_t result0 = RecoveredCall_51ddc0_0(arg0,field0);
    *reinterpret_cast<uint32_t*>((arg0 + 8)) = uint32_t(uint32_t(4));
    return result0;
}

extern "C" uint64_t RecoveredCall_51ddf0_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_51ddf0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_51ddf0_0(arg0,arg1);
    *reinterpret_cast<uint32_t*>((arg0 + 8)) = uint32_t(uint32_t(4));
    return result0;
}

extern "C" uint64_t RecoveredCall_51de20_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_51de20(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_51de20_0(arg1);
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = result0;
    *reinterpret_cast<uint32_t*>((arg0 + 8)) = uint32_t(uint32_t(5));
    return result0;
}

extern "C" uint64_t RecoveredCall_51e060_0(uint64_t);
extern "C" uint64_t LeafData_51e060_2;
extern "C" uint64_t RecoveredCall_51e060_1(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_51e060(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_51e060_0(arg0);
    const uint64_t field0 = LeafData_51e060_2;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t result1 = RecoveredCall_51e060_1((arg0 + 400));
    *reinterpret_cast<uint16_t*>((arg0 + 408)) = 0;
    *reinterpret_cast<uint8_t*>((arg0 + 410)) = 0;
    return result1;
}

extern "C" uint64_t LeafData_51e0a0_0;
extern "C" uint64_t RecoveredCall_51e0a0_0(uint64_t);
extern "C" void LeafTarget_51e0a0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_51e0a0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_51e0a0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t result0 = RecoveredCall_51e0a0_0((arg0 + 400));
    LeafTarget_51e0a0(arg0);
}

extern "C" uint64_t LeafData_51e0e0_0;
extern "C" uint64_t RecoveredCall_51e0e0_0(uint64_t);
extern "C" uint64_t RecoveredCall_51e0e0_1(uint64_t);
extern "C" void LeafTarget_51e0e0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_51e0e0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_51e0e0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t result0 = RecoveredCall_51e0e0_0((arg0 + 400));
    const uint64_t result1 = RecoveredCall_51e0e0_1(arg0);
    LeafTarget_51e0e0(arg0);
}

extern "C" uint64_t RecoveredCall_51e5e0_0(uint64_t,uint64_t);
extern "C" void LeafTarget_51e5e0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_51e5e0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_51e5e0_0(arg0,arg1);
    LeafTarget_51e5e0(arg0,arg1);
}

extern "C" uint64_t RecoveredCall_5257f0_0(uint64_t);
extern "C" void LeafTarget_5257f0(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5257f0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 136));
    const uint64_t result0 = RecoveredCall_5257f0_0(field0);
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((arg0 + 1168));
    LeafTarget_5257f0(result0,(arg0 + 144),(arg0 + 568),(arg0 + 360),(arg0 + 464),uint32_t(field1));
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5289d0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 256));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 264));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(arg0);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 272));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)(arg0,field5);
    return result2;
}

extern "C" uint64_t RecoveredCall_528a20_0(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_528a20(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_528a20_0(arg1);
    return uint32_t(1);
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_529140(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    return uint32_t((uint32_t(uint32_t((~uint32_t(result0)))) & 1));
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5291d0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    return uint32_t((uint32_t(uint32_t((~uint32_t(result0)))) & 1));
}

extern "C" uint64_t RecoveredCall_52ac80_0(uint64_t,uint64_t);
extern "C" void LeafTarget_52ac80(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_52ac80(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_52ac80_0(arg0,(arg1 + 8));
    LeafTarget_52ac80(arg0,(arg1 + 24));
}

extern "C" uint64_t RecoveredCall_52b270_0(uint64_t,uint64_t);
extern "C" uint64_t LeafData_52b270_2;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_52b270(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_52b270_0(arg0,arg1);
    const uint64_t field0 = LeafData_52b270_2;
    *reinterpret_cast<uint64_t*>((arg0 + 88)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_52cad0_0(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_52cad0_1(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_52cad0_2(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_52cad0_3(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_52cad0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_52cad0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_52cad0_0(arg0,(arg1 + 8),uint32_t(2),uint32_t(1));
    const uint64_t result1 = RecoveredCall_52cad0_1(arg0,(arg1 + 10),uint32_t(2),uint32_t(1));
    const uint64_t result2 = RecoveredCall_52cad0_2(arg0,(arg1 + 12),uint32_t(2),uint32_t(1));
    const uint64_t result3 = RecoveredCall_52cad0_3(arg0,(arg1 + 16),uint32_t(4),uint32_t(1));
    LeafTarget_52cad0(arg0,(arg1 + 24));
}

extern "C" uint64_t RecoveredCall_52cf70_0(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_52cf70(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 136)) = arg2;
    const uint64_t result0 = RecoveredCall_52cf70_0(arg0,arg1,arg2,arg3);
    *reinterpret_cast<uint64_t*>((arg0 + 136)) = 0;
    return result0;
}

extern "C" uint64_t RecoveredCall_52e7e0_0(uint64_t,uint64_t);
extern "C" uint64_t LeafData_52e7e0_2;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_52e7e0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_52e7e0_0(arg0,arg1);
    const uint64_t field0 = LeafData_52e7e0_2;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_52e8f0_0(uint64_t,uint64_t);
extern "C" uint64_t LeafData_52e8f0_2;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_52e8f0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_52e8f0_0(arg0,arg1);
    const uint64_t field0 = LeafData_52e8f0_2;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t LeafData_530670_0;
extern "C" uint64_t RecoveredCall_530670_1(uint64_t);
extern "C" void LeafTarget_530670(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_530670(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_530670_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 200));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    const uint64_t result1 = RecoveredCall_530670_1((arg0 + 120));
    LeafTarget_530670(arg0);
}

extern "C" uint64_t LeafData_5306c0_0;
extern "C" uint64_t RecoveredCall_5306c0_1(uint64_t);
extern "C" uint64_t RecoveredCall_5306c0_2(uint64_t);
extern "C" void LeafTarget_5306c0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5306c0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_5306c0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 200));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    const uint64_t result1 = RecoveredCall_5306c0_1((arg0 + 120));
    const uint64_t result2 = RecoveredCall_5306c0_2(arg0);
    LeafTarget_5306c0(arg0);
}

extern "C" unsigned char LeafData_53b230_0[];
extern "C" uint64_t RecoveredCall_53b230_0(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_53b230(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_53b230(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_53b230_0(arg0,reinterpret_cast<uintptr_t>(LeafData_53b230_0),uint32_t(1));
    LeafTarget_53b230(arg0);
}

extern "C" uint64_t RecoveredCall_53ce10_0(uint64_t,uint64_t);
extern "C" void LeafTarget_53ce10(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_53ce10(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_53ce10_0(arg0,(arg1 + 8));
    LeafTarget_53ce10(arg0,(arg1 + 24),uint32_t(4),uint32_t(1));
}

extern "C" uint64_t RecoveredCall_5434b0_0(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_5434b0_1(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_5434b0_2(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_5434b0_3(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_5434b0(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5434b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5434b0_0(arg0,(arg1 + 8),uint32_t(4),uint32_t(1));
    const uint64_t result1 = RecoveredCall_5434b0_1(arg0,(arg1 + 12),uint32_t(4),uint32_t(1));
    const uint64_t result2 = RecoveredCall_5434b0_2(arg0,(arg1 + 16),uint32_t(4),uint32_t(1));
    const uint64_t result3 = RecoveredCall_5434b0_3(arg0,(arg1 + 20),uint32_t(4),uint32_t(1));
    LeafTarget_5434b0(arg0,(arg1 + 24),uint32_t(4),uint32_t(1));
}

extern "C" uint64_t LeafData_549990_0;
extern "C" uint64_t RecoveredCall_549990_0(uint64_t);
extern "C" uint64_t RecoveredCall_549990_1(uint64_t);
extern "C" uint64_t RecoveredCall_549990_2(uint64_t);
extern "C" uint64_t RecoveredCall_549990_3(uint64_t);
extern "C" uint64_t RecoveredCall_549990_4(uint64_t);
extern "C" uint64_t RecoveredCall_549990_5(uint64_t,uint64_t);
extern "C" void LeafTarget_549990(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_549990(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_549990_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t result0 = RecoveredCall_549990_0((arg0 + 496));
    const uint64_t result1 = RecoveredCall_549990_1((arg0 + 472));
    const uint64_t result2 = RecoveredCall_549990_2((arg0 + 464));
    const uint64_t result3 = RecoveredCall_549990_3((arg0 + 312));
    const uint64_t result4 = RecoveredCall_549990_4((arg0 + 168));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 144));
    const uint64_t result5 = RecoveredCall_549990_5((arg0 + 136),field1);
    LeafTarget_549990(arg0);
}

extern "C" uint64_t LeafData_549a00_0;
extern "C" uint64_t RecoveredCall_549a00_0(uint64_t);
extern "C" uint64_t RecoveredCall_549a00_1(uint64_t);
extern "C" uint64_t RecoveredCall_549a00_2(uint64_t);
extern "C" uint64_t RecoveredCall_549a00_3(uint64_t);
extern "C" uint64_t RecoveredCall_549a00_4(uint64_t);
extern "C" uint64_t RecoveredCall_549a00_5(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_549a00_6(uint64_t);
extern "C" void LeafTarget_549a00(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_549a00(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_549a00_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t result0 = RecoveredCall_549a00_0((arg0 + 496));
    const uint64_t result1 = RecoveredCall_549a00_1((arg0 + 472));
    const uint64_t result2 = RecoveredCall_549a00_2((arg0 + 464));
    const uint64_t result3 = RecoveredCall_549a00_3((arg0 + 312));
    const uint64_t result4 = RecoveredCall_549a00_4((arg0 + 168));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 144));
    const uint64_t result5 = RecoveredCall_549a00_5((arg0 + 136),field1);
    const uint64_t result6 = RecoveredCall_549a00_6(arg0);
    LeafTarget_549a00(arg0);
}

extern "C" uint64_t RecoveredCall_54df00_0(uint64_t);
extern "C" void LeafTarget_54df00(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_54df00(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_54df00_0((arg0 - 264));
    LeafTarget_54df00((arg0 - 264));
}

extern "C" uint64_t RecoveredCall_5505c0_0(uint64_t);
extern "C" void LeafTarget_5505c0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5505c0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5505c0_0((arg0 - 264));
    LeafTarget_5505c0((arg0 - 264));
}

extern "C" uint64_t RecoveredCall_554c50_0(uint64_t);
extern "C" void LeafTarget_554c50(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_554c50(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_554c50_0((arg0 + 24));
    LeafTarget_554c50(arg0);
}

extern "C" uint64_t RecoveredCall_5554a0_0(uint64_t);
extern "C" void LeafTarget_5554a0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5554a0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5554a0_0((arg0 - 24));
    LeafTarget_5554a0((arg0 - 24));
}

extern "C" uint64_t RecoveredCall_5554d0_0(uint64_t);
extern "C" void LeafTarget_5554d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5554d0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5554d0_0((arg0 - 56));
    LeafTarget_5554d0((arg0 - 56));
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_56deb0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 248));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    return uint32_t((uint32_t(result0) << 3));
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_56df60(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 280));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    return uint32_t((uint32_t(result0) << 3));
}

extern "C" uint64_t RecoveredCall_573a70_0(uint64_t);
extern "C" uint64_t LeafData_573a70_2;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_573a70(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_573a70_0(uint32_t(16));
    const uint64_t field0 = LeafData_573a70_2;
    *reinterpret_cast<uint64_t*>((result0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_5832a0_0(uint64_t,uint64_t);
extern "C" uint64_t LeafData_5832a0_3;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5832a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5832a0_0(arg0,arg1);
    *reinterpret_cast<uint8_t*>((arg0 + 56)) = 0;
    const uint64_t field0 = LeafData_5832a0_3;
    *reinterpret_cast<uint64_t*>(((arg0 + 40) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 40) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 0) + 0)) = (field0 + 16);
    *reinterpret_cast<uint64_t*>(((arg0 + 0) + 8)) = (field0 + 192);
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    return result0;
}

extern "C" uint64_t RecoveredCall_585c70_0(uint64_t);
extern "C" void LeafTarget_585c70(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_585c70(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_585c70_0(arg0);
    LeafTarget_585c70(result0,arg0,arg1);
}

extern "C" uint64_t RecoveredCall_588850_0(uint64_t);
extern "C" void LeafTarget_588850(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_588850(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t result0 = RecoveredCall_588850_0((field0 + 8));
    *reinterpret_cast<uint8_t*>((field0 + 40)) = 0;
    LeafTarget_588850((field0 + 8));
}

extern "C" uint64_t LeafData_58ee20_0;
extern "C" uint64_t RecoveredCall_58ee20_0(uint64_t);
extern "C" void LeafTarget_58ee20(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_58ee20(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_58ee20_0;
    *reinterpret_cast<uint64_t*>((field0 + 0)) = uint32_t(((uint32_t(uint32_t(57005)) & 0xffffull) | (57005ull << 16)));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((arg0 + 32));
    const uint64_t result0 = RecoveredCall_58ee20_0(uint32_t(field1));
    LeafTarget_58ee20(arg0);
}

extern "C" uint64_t RecoveredCall_590930_0(uint64_t);
extern "C" uint64_t LeafData_590930_2;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_590930(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_590930_0(uint32_t(16));
    const uint64_t field0 = LeafData_590930_2;
    *reinterpret_cast<uint64_t*>((result0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_590a80_0(uint64_t);
extern "C" uint64_t LeafData_590a80_2;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_590a80(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_590a80_0(uint32_t(16));
    const uint64_t field0 = LeafData_590a80_2;
    *reinterpret_cast<uint64_t*>((result0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_590db0_0(uint64_t);
extern "C" uint64_t LeafData_590db0_2;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_590db0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_590db0_0(uint32_t(16));
    const uint64_t field0 = LeafData_590db0_2;
    *reinterpret_cast<uint64_t*>((result0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_5914a0_0(uint64_t);
extern "C" uint64_t LeafData_5914a0_2;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5914a0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5914a0_0(uint32_t(16));
    const uint64_t field0 = LeafData_5914a0_2;
    *reinterpret_cast<uint64_t*>((result0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_5917c0_0(uint64_t);
extern "C" uint64_t LeafData_5917c0_2;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5917c0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5917c0_0(uint32_t(16));
    const uint64_t field0 = LeafData_5917c0_2;
    *reinterpret_cast<uint64_t*>((result0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_591960_0(uint64_t);
extern "C" uint64_t LeafData_591960_2;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_591960(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_591960_0(uint32_t(16));
    const uint64_t field0 = LeafData_591960_2;
    *reinterpret_cast<uint64_t*>((result0 + 0)) = (field0 + 16);
    return result0;
}

extern "C" uint64_t RecoveredCall_5940a0_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5940a0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5940a0_0((arg1 + 122),(arg2 + 122));
    return uint32_t((uint32_t(uint32_t((~uint32_t(result0)))) & 1));
}

extern "C" uint64_t LeafData_597240_0;
extern "C" uint64_t RecoveredCall_597240_0(uint64_t);
extern "C" uint64_t LeafData_597240_7;
extern "C" void LeafTarget_597240(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_597240(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_597240_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t result0 = RecoveredCall_597240_0(arg0);
    const uint64_t field1 = LeafData_597240_7;
    *reinterpret_cast<uint8_t*>((arg0 + 16)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint64_t*>(((arg0 + 0) + 0)) = (field1 + 16);
    *reinterpret_cast<uint64_t*>(((arg0 + 0) + 8)) = result0;
    LeafTarget_597240((arg0 + 24),arg1);
}

extern "C" uint64_t RecoveredCall_599840_0(uint64_t);
extern "C" void LeafTarget_599840(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_599840(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_599840_0((arg0 - 32));
    LeafTarget_599840((arg0 - 32));
}

extern "C" uint64_t RecoveredCall_5a0910_0(uint64_t);
extern "C" uint64_t LeafData_5a0910_2;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5a0910(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5a0910_0(arg0);
    const uint64_t field0 = LeafData_5a0910_2;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = (field0 + 424);
    *reinterpret_cast<uint64_t*>((arg0 + 56)) = (field0 + 1224);
    return result0;
}

extern "C" uint64_t RecoveredCall_5a10a0_0(uint64_t);
extern "C" void LeafTarget_5a10a0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5a10a0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5a10a0_0((arg0 - 24));
    LeafTarget_5a10a0((arg0 - 24));
}

extern "C" uint64_t RecoveredCall_5a10d0_0(uint64_t);
extern "C" void LeafTarget_5a10d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5a10d0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5a10d0_0((arg0 - 56));
    LeafTarget_5a10d0((arg0 - 56));
}

extern "C" uint64_t RecoveredCall_5ac800_0(uint64_t);
extern "C" void LeafTarget_5ac800(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5ac800(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5ac800_0((arg0 - 24));
    LeafTarget_5ac800((arg0 - 24));
}

extern "C" uint64_t RecoveredCall_5ac830_0(uint64_t);
extern "C" void LeafTarget_5ac830(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5ac830(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5ac830_0((arg0 - 56));
    LeafTarget_5ac830((arg0 - 56));
}

extern "C" uint64_t RecoveredCall_5ac860_0(uint64_t);
extern "C" void LeafTarget_5ac860(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5ac860(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5ac860_0((arg0 - 64));
    LeafTarget_5ac860((arg0 - 64));
}

extern "C" uint64_t RecoveredCall_5ac890_0(uint64_t);
extern "C" void LeafTarget_5ac890(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5ac890(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5ac890_0((arg0 - 96));
    LeafTarget_5ac890((arg0 - 96));
}

extern "C" uint64_t RecoveredCall_5b2e10_0(uint64_t);
extern "C" uint64_t LeafData_5b2e10_4;
extern "C" void LeafTarget_5b2e10(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5b2e10(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>(((arg0 + 8) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 8) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = 0;
    const uint64_t result0 = RecoveredCall_5b2e10_0(arg0);
    const uint64_t field0 = LeafData_5b2e10_4;
    *reinterpret_cast<uint64_t*>(((arg0 + 24) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 24) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    LeafTarget_5b2e10((arg0 + 40));
}

extern "C" uint64_t RecoveredCall_5bd1f0_0(uint64_t,uint64_t);
extern "C" void LeafTarget_5bd1f0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5bd1f0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5bd1f0_0((arg0 + 1048),arg1);
    LeafTarget_5bd1f0(result0,arg2);
}

extern "C" uint64_t RecoveredCall_5becf0_0(uint64_t);
extern "C" void LeafTarget_5becf0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5becf0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5becf0_0((arg0 + 24));
    LeafTarget_5becf0(arg0);
}

extern "C" uint64_t RecoveredCall_5bed20_0(uint64_t);
extern "C" uint64_t RecoveredCall_5bed20_1(uint64_t);
extern "C" void LeafTarget_5bed20(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5bed20(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5bed20_0((arg0 + 24));
    const uint64_t result1 = RecoveredCall_5bed20_1(arg0);
    LeafTarget_5bed20(arg0);
}

extern "C" uint64_t RecoveredCall_5c9050_0(uint64_t);
extern "C" unsigned char LeafData_5c9050_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5c9050(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5c9050_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5c9050_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5c91c0_0(uint64_t);
extern "C" unsigned char LeafData_5c91c0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5c91c0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5c91c0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5c91c0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5c9270_0(uint64_t);
extern "C" unsigned char LeafData_5c9270_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5c9270(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5c9270_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5c9270_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5c9320_0(uint64_t);
extern "C" unsigned char LeafData_5c9320_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5c9320(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5c9320_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5c9320_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5c93d0_0(uint64_t);
extern "C" unsigned char LeafData_5c93d0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5c93d0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5c93d0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5c93d0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5c94c0_0(uint64_t);
extern "C" unsigned char LeafData_5c94c0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5c94c0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5c94c0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5c94c0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5c95b0_0(uint64_t);
extern "C" unsigned char LeafData_5c95b0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5c95b0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5c95b0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5c95b0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5c96a0_0(uint64_t);
extern "C" unsigned char LeafData_5c96a0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5c96a0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5c96a0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5c96a0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5c9750_0(uint64_t);
extern "C" unsigned char LeafData_5c9750_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5c9750(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5c9750_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5c9750_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5c9800_0(uint64_t);
extern "C" unsigned char LeafData_5c9800_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5c9800(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5c9800_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5c9800_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5c98b0_0(uint64_t);
extern "C" unsigned char LeafData_5c98b0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5c98b0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5c98b0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5c98b0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5c9960_0(uint64_t);
extern "C" unsigned char LeafData_5c9960_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5c9960(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5c9960_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5c9960_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5c9a10_0(uint64_t);
extern "C" unsigned char LeafData_5c9a10_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5c9a10(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5c9a10_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5c9a10_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5c9ac0_0(uint64_t);
extern "C" unsigned char LeafData_5c9ac0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5c9ac0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5c9ac0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5c9ac0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5c9c10_0(uint64_t);
extern "C" unsigned char LeafData_5c9c10_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5c9c10(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5c9c10_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5c9c10_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5c9cc0_0(uint64_t);
extern "C" unsigned char LeafData_5c9cc0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5c9cc0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5c9cc0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5c9cc0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5c9d70_0(uint64_t);
extern "C" unsigned char LeafData_5c9d70_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5c9d70(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5c9d70_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5c9d70_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5c9e20_0(uint64_t);
extern "C" unsigned char LeafData_5c9e20_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5c9e20(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5c9e20_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5c9e20_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5c9ed0_0(uint64_t);
extern "C" unsigned char LeafData_5c9ed0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5c9ed0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5c9ed0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5c9ed0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5c9f80_0(uint64_t);
extern "C" unsigned char LeafData_5c9f80_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5c9f80(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5c9f80_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5c9f80_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5ca030_0(uint64_t);
extern "C" unsigned char LeafData_5ca030_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5ca030(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5ca030_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5ca030_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5ca150_0(uint64_t);
extern "C" unsigned char LeafData_5ca150_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5ca150(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5ca150_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5ca150_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5ca200_0(uint64_t);
extern "C" unsigned char LeafData_5ca200_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5ca200(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5ca200_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5ca200_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5ca2b0_0(uint64_t);
extern "C" unsigned char LeafData_5ca2b0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5ca2b0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5ca2b0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5ca2b0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5ca3a0_0(uint64_t);
extern "C" unsigned char LeafData_5ca3a0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5ca3a0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5ca3a0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5ca3a0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5ca450_0(uint64_t);
extern "C" unsigned char LeafData_5ca450_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5ca450(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5ca450_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5ca450_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5ca580_0(uint64_t);
extern "C" unsigned char LeafData_5ca580_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5ca580(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5ca580_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5ca580_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5ca6b0_0(uint64_t);
extern "C" unsigned char LeafData_5ca6b0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5ca6b0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5ca6b0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5ca6b0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5ca820_0(uint64_t);
extern "C" unsigned char LeafData_5ca820_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5ca820(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5ca820_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5ca820_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5ca960_0(uint64_t);
extern "C" unsigned char LeafData_5ca960_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5ca960(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5ca960_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5ca960_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5caa10_0(uint64_t);
extern "C" unsigned char LeafData_5caa10_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5caa10(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5caa10_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5caa10_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5cab00_0(uint64_t);
extern "C" unsigned char LeafData_5cab00_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5cab00(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5cab00_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5cab00_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5cac00_0(uint64_t);
extern "C" unsigned char LeafData_5cac00_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5cac00(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5cac00_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5cac00_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5cad00_0(uint64_t);
extern "C" unsigned char LeafData_5cad00_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5cad00(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5cad00_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5cad00_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5cae00_0(uint64_t);
extern "C" unsigned char LeafData_5cae00_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5cae00(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5cae00_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5cae00_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5caf00_0(uint64_t);
extern "C" unsigned char LeafData_5caf00_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5caf00(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5caf00_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5caf00_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5cafb0_0(uint64_t);
extern "C" unsigned char LeafData_5cafb0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5cafb0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5cafb0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5cafb0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5cb0f0_0(uint64_t);
extern "C" unsigned char LeafData_5cb0f0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5cb0f0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5cb0f0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5cb0f0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5cb220_0(uint64_t);
extern "C" unsigned char LeafData_5cb220_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5cb220(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5cb220_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5cb220_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5cb350_0(uint64_t);
extern "C" unsigned char LeafData_5cb350_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5cb350(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5cb350_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5cb350_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5cb4d0_0(uint64_t);
extern "C" unsigned char LeafData_5cb4d0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5cb4d0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5cb4d0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5cb4d0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5cb580_0(uint64_t);
extern "C" unsigned char LeafData_5cb580_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5cb580(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5cb580_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5cb580_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5cb630_0(uint64_t);
extern "C" unsigned char LeafData_5cb630_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5cb630(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5cb630_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5cb630_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5cb720_0(uint64_t);
extern "C" unsigned char LeafData_5cb720_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5cb720(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5cb720_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5cb720_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5cb7d0_0(uint64_t);
extern "C" unsigned char LeafData_5cb7d0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5cb7d0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5cb7d0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5cb7d0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5cb880_0(uint64_t);
extern "C" unsigned char LeafData_5cb880_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5cb880(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5cb880_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5cb880_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5cb930_0(uint64_t);
extern "C" unsigned char LeafData_5cb930_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5cb930(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5cb930_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5cb930_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5cb9e0_0(uint64_t);
extern "C" unsigned char LeafData_5cb9e0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5cb9e0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5cb9e0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5cb9e0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5cba90_0(uint64_t);
extern "C" unsigned char LeafData_5cba90_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5cba90(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5cba90_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5cba90_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5cbb40_0(uint64_t);
extern "C" unsigned char LeafData_5cbb40_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5cbb40(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5cbb40_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5cbb40_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5cbbf0_0(uint64_t);
extern "C" unsigned char LeafData_5cbbf0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5cbbf0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5cbbf0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5cbbf0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5cbce0_0(uint64_t);
extern "C" unsigned char LeafData_5cbce0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5cbce0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5cbce0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5cbce0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5cbdd0_0(uint64_t);
extern "C" unsigned char LeafData_5cbdd0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_5cbdd0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5cbdd0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_5cbdd0_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_5d2370_0(uint64_t);
extern "C" void LeafTarget_5d2370(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5d2370(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5d2370_0((arg0 - 8));
    LeafTarget_5d2370((arg0 - 8));
}

extern "C" uint64_t RecoveredCall_5d23a0_0(uint64_t);
extern "C" void LeafTarget_5d23a0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5d23a0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5d23a0_0((arg0 - 32));
    LeafTarget_5d23a0((arg0 - 32));
}

extern "C" uint64_t RecoveredCall_5d62c0_0(uint64_t);
extern "C" void LeafTarget_5d62c0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5d62c0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5d62c0_0((arg0 - 96));
    LeafTarget_5d62c0((arg0 - 96));
}

extern "C" uint64_t RecoveredCall_5d62f0_0(uint64_t);
extern "C" void LeafTarget_5d62f0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5d62f0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5d62f0_0((arg0 - 112));
    LeafTarget_5d62f0((arg0 - 112));
}

extern "C" uint64_t RecoveredCall_5d7a30_0(uint64_t);
extern "C" void LeafTarget_5d7a30(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5d7a30(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5d7a30_0((arg0 - 24));
    LeafTarget_5d7a30((arg0 - 24));
}

extern "C" uint64_t RecoveredCall_5d7a60_0(uint64_t);
extern "C" void LeafTarget_5d7a60(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5d7a60(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5d7a60_0((arg0 - 56));
    LeafTarget_5d7a60((arg0 - 56));
}

extern "C" uint64_t RecoveredCall_5ddcb0_0(uint64_t);
extern "C" void LeafTarget_5ddcb0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5ddcb0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5ddcb0_0((arg0 - 88));
    LeafTarget_5ddcb0((arg0 - 88));
}

extern "C" uint64_t RecoveredCall_5e5630_0(uint64_t);
extern "C" void LeafTarget_5e5630(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5e5630(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5e5630_0((arg0 - 32));
    LeafTarget_5e5630((arg0 - 32));
}

extern "C" uint64_t RecoveredCall_5e9c60_0(uint64_t);
extern "C" void LeafTarget_5e9c60(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5e9c60(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5e9c60_0((arg0 - 96));
    LeafTarget_5e9c60((arg0 - 96));
}

extern "C" uint64_t RecoveredCall_5e9c90_0(uint64_t);
extern "C" void LeafTarget_5e9c90(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5e9c90(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5e9c90_0((arg0 - 104));
    LeafTarget_5e9c90((arg0 - 104));
}

extern "C" uint64_t RecoveredCall_5ecd90_0(uint64_t);
extern "C" void LeafTarget_5ecd90(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5ecd90(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5ecd90_0((arg0 - 96));
    LeafTarget_5ecd90((arg0 - 96));
}

extern "C" uint64_t RecoveredCall_5ee1b0_0(uint64_t);
extern "C" void LeafTarget_5ee1b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5ee1b0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5ee1b0_0((arg0 - 24));
    LeafTarget_5ee1b0((arg0 - 24));
}

extern "C" uint64_t RecoveredCall_5ee1e0_0(uint64_t);
extern "C" void LeafTarget_5ee1e0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5ee1e0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5ee1e0_0((arg0 - 56));
    LeafTarget_5ee1e0((arg0 - 56));
}

extern "C" uint64_t RecoveredCall_5ee210_0(uint64_t);
extern "C" void LeafTarget_5ee210(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5ee210(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5ee210_0((arg0 - 88));
    LeafTarget_5ee210((arg0 - 88));
}

extern "C" uint64_t RecoveredCall_5ee240_0(uint64_t);
extern "C" void LeafTarget_5ee240(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5ee240(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5ee240_0((arg0 - 104));
    LeafTarget_5ee240((arg0 - 104));
}

extern "C" uint64_t RecoveredCall_5ee270_0(uint64_t);
extern "C" void LeafTarget_5ee270(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5ee270(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5ee270_0((arg0 - 112));
    LeafTarget_5ee270((arg0 - 112));
}

extern "C" uint64_t RecoveredCall_60a320_0(uint64_t);
extern "C" void LeafTarget_60a320(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_60a320(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_60a320_0((arg0 - 24));
    LeafTarget_60a320((arg0 - 24));
}

extern "C" uint64_t RecoveredCall_60a360_0(uint64_t);
extern "C" void LeafTarget_60a360(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_60a360(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_60a360_0((arg0 - 56));
    LeafTarget_60a360((arg0 - 56));
}

extern "C" uint64_t RecoveredCall_624c10_0(uint64_t);
extern "C" unsigned char LeafData_624c10_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_624c10(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_624c10_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_624c10_2);
    return result0;
}

extern "C" uint64_t RecoveredCall_624cd0_0(uint64_t);
extern "C" unsigned char LeafData_624cd0_2[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_624cd0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_624cd0_0(uint32_t(16));
    *reinterpret_cast<uint64_t*>((result0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_624cd0_2);
    return result0;
}
