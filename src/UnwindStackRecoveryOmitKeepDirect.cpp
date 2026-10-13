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


extern "C" uint64_t RecoveredCall_105de0_0(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_105de0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[24];
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 16) + 0)) = 0;
    *reinterpret_cast<uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 16) + 8)) = 0;
    const uint64_t result0 = RecoveredCall_105de0_0(arg0,arg1,arg2,arg3,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8),arg4);
    return result0;
}



extern "C" uint64_t RecoveredCall_2cd840_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2cd840(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    *reinterpret_cast<uint32_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8) + 0)) = uint32_t(arg2);
    *reinterpret_cast<uint32_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8) + 4)) = uint32_t(arg1);
    const uint64_t result0 = RecoveredCall_2cd840_0((arg0 + 120),((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return result0;
}




extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3b2dc0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = arg2;
    if (!(arg2 == 0)) {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (!(field0 == 0)) {
    const int16_t field1 = *reinterpret_cast<const int16_t*>((arg2 + 248));
    if (!(int32_t(uint32_t(uint32_t(field1))) < int32_t(1))) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 64));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field3)(field0,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8),arg2);
    }
    }
    }
    return uint32_t(1);
}



struct RecoveredOutput_43b8e0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_43b8e0 RecoveredLeaf_43b8e0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    RecoveredOutput_43b8e0 output;
    alignas(8) unsigned char stack_storage[8];
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>(((field3 + 0) + 0));
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>(((field3 + 0) + 4));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint32_t field7 = *reinterpret_cast<const uint32_t*>((arg0 + 24));
    *reinterpret_cast<uint32_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8) + 0)) = uint32_t(uint32_t(field4));
    *reinterpret_cast<uint32_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8) + 4)) = uint32_t(uint32_t(field5));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg2 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 152));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(field9)(arg2,field6,uint32_t(field7),((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



extern "C" uint64_t RecoveredCall_49bb00_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_49bb00(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = arg1;
    const uint64_t result0 = RecoveredCall_49bb00_0((arg0 + 32),((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return result0;
}



extern "C" uint64_t RecoveredCall_49da60_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_49da60(uint64_t arg0) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    *reinterpret_cast<uint32_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = uint32_t(uint32_t(((uint32_t(uint32_t(967)) & 0xffffull) | (27062ull << 16))));
    const uint64_t result0 = RecoveredCall_49da60_0(arg0,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    if (result0 == 0) return result0;
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((result0 + 26));
    return uint32_t((uint32_t(uint32_t(field0)) != 0));
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4af370(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[16];
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 0)) = field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 8)) = field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 1592));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(arg0,(reinterpret_cast<uintptr_t>(stack_storage) + 0));
    return result0;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4af3b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[16];
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 0)) = field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 8)) = field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 1600));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(arg0,(reinterpret_cast<uintptr_t>(stack_storage) + 0));
    return result0;
}



extern "C" uint64_t RecoveredCall_4ecc40_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_4ecc40_1(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_4ecc40_2(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4ecc40(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[40];
    const uint64_t result0 = RecoveredCall_4ecc40_0(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8),arg1);
    const uint64_t result1 = RecoveredCall_4ecc40_1(arg0,uint32_t(2),((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8),uint32_t(1));
    const uint64_t result2 = RecoveredCall_4ecc40_2((((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8) + 24));
    return result2;
}



extern "C" uint64_t RecoveredCall_4ecfe0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_4ecfe0_1(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_4ecfe0_2(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4ecfe0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[40];
    const uint64_t result0 = RecoveredCall_4ecfe0_0(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8),arg1);
    const uint64_t result1 = RecoveredCall_4ecfe0_1(arg0,uint32_t(3),((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8),uint32_t(1));
    const uint64_t result2 = RecoveredCall_4ecfe0_2((((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8) + 24));
    return result2;
}



extern "C" uint64_t RecoveredCall_508ae0_0(uint64_t);
extern "C" uint64_t RecoveredCall_508ae0_1(uint64_t);
extern "C" uint64_t RecoveredCall_508ae0_2(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_508ae0(uint64_t arg0) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    const uint64_t result0 = RecoveredCall_508ae0_0((arg0 + 8));
    const uint64_t result1 = RecoveredCall_508ae0_1(result0);
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = result1;
    const uint64_t result2 = RecoveredCall_508ae0_2(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return uint32_t((int64_t(result0) < int64_t(result2)));
}



extern "C" uint64_t RecoveredCall_508b30_0(uint64_t);
extern "C" uint64_t RecoveredCall_508b30_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_508b30(uint64_t arg0) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    const uint64_t result0 = RecoveredCall_508b30_0(arg0);
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = result0;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 0));
    const uint64_t result1 = RecoveredCall_508b30_1(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8),uint32_t(field0));
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = result1;
    return result1;
}



extern "C" uint64_t RecoveredCall_5109b0_0(uint64_t);
extern "C" uint64_t RecoveredCall_5109b0_1(uint64_t);
extern "C" uint64_t RecoveredCall_5109b0_3(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_5109b0_5(uint64_t);
extern "C" uint64_t RecoveredCall_5109b0_6(uint64_t);
extern "C" uint64_t RecoveredCall_5109b0_8(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5109b0(uint64_t arg0) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[136];
    const uint64_t result0 = RecoveredCall_5109b0_0(arg0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    const uint64_t result1 = RecoveredCall_5109b0_1((((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8) + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    const uint64_t result3 = RecoveredCall_5109b0_3((((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8) + 8),(field0 + 24));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>(((field4 + 0) + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>(((field4 + 0) + 8));
    *reinterpret_cast<uint64_t*>((field5 + 8)) = field6;
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((field4 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((field4 + 0) + 8));
    *reinterpret_cast<uint64_t*>((field8 + 0)) = field7;
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    *reinterpret_cast<uint64_t*>((arg0 + 80)) = (field9 - 1);
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((field11 + 24));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t)>(field12)(field10);
    const uint64_t result5 = RecoveredCall_5109b0_5((field4 + 24));
    const uint64_t result6 = RecoveredCall_5109b0_6(field4);
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 0));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((field14 + 24));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t)>(field15)(field13);
    const uint64_t result8 = RecoveredCall_5109b0_8((((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8) + 8));
    return result8;
}



extern "C" unsigned char LeafData_513cb0_0[];
extern "C" uint64_t RecoveredCall_513cb0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_513cb0_1(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_513cb0_2(uint64_t);
struct RecoveredOutput_513cb0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_513cb0 RecoveredLeaf_513cb0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_513cb0 output;
    alignas(8) unsigned char stack_storage[8];
    const uint64_t result0 = RecoveredCall_513cb0_0(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8),((reinterpret_cast<uintptr_t>(LeafData_513cb0_0) - 3286) + 3286));
    const uint64_t result1 = RecoveredCall_513cb0_1(reinterpret_cast<uintptr_t>(&output),((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8),uint32_t(2),uint32_t(1));
    const uint64_t result2 = RecoveredCall_513cb0_2(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return output;
}



extern "C" uint64_t RecoveredCall_516ac0_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_516ac0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    const uint16_t field0 = *reinterpret_cast<const uint16_t*>((arg1 + 48));
    *reinterpret_cast<uint16_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = uint32_t(uint32_t(field0));
    const uint64_t result0 = RecoveredCall_516ac0_0((arg0 + 8),((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 24));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(arg1);
    return result1;
}



extern "C" unsigned char LeafData_518e10_0[];
extern "C" uint64_t RecoveredCall_518e10_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_518e10_1(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_518e10_2(uint64_t);
struct RecoveredOutput_518e10 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_518e10 RecoveredLeaf_518e10(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_518e10 output;
    alignas(8) unsigned char stack_storage[8];
    const uint64_t result0 = RecoveredCall_518e10_0(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8),((reinterpret_cast<uintptr_t>(LeafData_518e10_0) - 3286) + 3286));
    const uint64_t result1 = RecoveredCall_518e10_1(reinterpret_cast<uintptr_t>(&output),((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8),uint32_t(2),uint32_t(1));
    const uint64_t result2 = RecoveredCall_518e10_2(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return output;
}



extern "C" unsigned char LeafData_518e60_0[];
extern "C" uint64_t RecoveredCall_518e60_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_518e60_1(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_518e60_2(uint64_t);
struct RecoveredOutput_518e60 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_518e60 RecoveredLeaf_518e60(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_518e60 output;
    alignas(8) unsigned char stack_storage[8];
    const uint64_t result0 = RecoveredCall_518e60_0(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8),((reinterpret_cast<uintptr_t>(LeafData_518e60_0) - 3286) + 3286));
    const uint64_t result1 = RecoveredCall_518e60_1(reinterpret_cast<uintptr_t>(&output),((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8),uint32_t(2),uint32_t(1));
    const uint64_t result2 = RecoveredCall_518e60_2(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return output;
}



extern "C" unsigned char LeafData_518eb0_0[];
extern "C" uint64_t RecoveredCall_518eb0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_518eb0_1(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_518eb0_2(uint64_t);
struct RecoveredOutput_518eb0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_518eb0 RecoveredLeaf_518eb0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_518eb0 output;
    alignas(8) unsigned char stack_storage[8];
    const uint64_t result0 = RecoveredCall_518eb0_0(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8),((reinterpret_cast<uintptr_t>(LeafData_518eb0_0) - 3286) + 3286));
    const uint64_t result1 = RecoveredCall_518eb0_1(reinterpret_cast<uintptr_t>(&output),((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8),uint32_t(2),uint32_t(1));
    const uint64_t result2 = RecoveredCall_518eb0_2(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return output;
}



extern "C" unsigned char LeafData_518f00_0[];
extern "C" uint64_t RecoveredCall_518f00_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_518f00_1(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_518f00_2(uint64_t);
struct RecoveredOutput_518f00 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_518f00 RecoveredLeaf_518f00(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_518f00 output;
    alignas(8) unsigned char stack_storage[8];
    const uint64_t result0 = RecoveredCall_518f00_0(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8),((reinterpret_cast<uintptr_t>(LeafData_518f00_0) - 3286) + 3286));
    const uint64_t result1 = RecoveredCall_518f00_1(reinterpret_cast<uintptr_t>(&output),((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8),uint32_t(2),uint32_t(1));
    const uint64_t result2 = RecoveredCall_518f00_2(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return output;
}



extern "C" uint64_t RecoveredCall_528a40_0(uint64_t);
extern "C" uint64_t RecoveredCall_528a40_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_528a40(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = arg1;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 152));
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint64_t result0 = RecoveredCall_528a40_0(arg1);
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((arg1 + 152));
    if (uint32_t(uint32_t(field1)) != 0) return result0;
    }
    const uint64_t result1 = RecoveredCall_528a40_1((arg0 + 40),((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    if (field2 == 0) return field2;
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 200));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field4)(field2);
    return result2;
}



extern "C" unsigned char LeafData_528ec0_0[];
extern "C" uint64_t RecoveredCall_528ec0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_528ec0_1(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_528ec0_2(uint64_t);
struct RecoveredOutput_528ec0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_528ec0 RecoveredLeaf_528ec0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_528ec0 output;
    alignas(8) unsigned char stack_storage[8];
    const uint64_t result0 = RecoveredCall_528ec0_0(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8),((reinterpret_cast<uintptr_t>(LeafData_528ec0_0) - 3286) + 3286));
    const uint64_t result1 = RecoveredCall_528ec0_1(reinterpret_cast<uintptr_t>(&output),((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8),uint32_t(2),uint32_t(1));
    const uint64_t result2 = RecoveredCall_528ec0_2(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return output;
}



extern "C" unsigned char LeafData_52de60_0[];
extern "C" uint64_t RecoveredCall_52de60_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_52de60_1(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_52de60_2(uint64_t);
struct RecoveredOutput_52de60 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_52de60 RecoveredLeaf_52de60(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_52de60 output;
    alignas(8) unsigned char stack_storage[8];
    const uint64_t result0 = RecoveredCall_52de60_0(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8),((reinterpret_cast<uintptr_t>(LeafData_52de60_0) - 3286) + 3286));
    const uint64_t result1 = RecoveredCall_52de60_1(reinterpret_cast<uintptr_t>(&output),((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8),uint32_t(2),uint32_t(1));
    const uint64_t result2 = RecoveredCall_52de60_2(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return output;
}



extern "C" unsigned char LeafData_52deb0_0[];
extern "C" uint64_t RecoveredCall_52deb0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_52deb0_1(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_52deb0_2(uint64_t);
struct RecoveredOutput_52deb0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_52deb0 RecoveredLeaf_52deb0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_52deb0 output;
    alignas(8) unsigned char stack_storage[8];
    const uint64_t result0 = RecoveredCall_52deb0_0(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8),((reinterpret_cast<uintptr_t>(LeafData_52deb0_0) - 3286) + 3286));
    const uint64_t result1 = RecoveredCall_52deb0_1(reinterpret_cast<uintptr_t>(&output),((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8),uint32_t(2),uint32_t(1));
    const uint64_t result2 = RecoveredCall_52deb0_2(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return output;
}



extern "C" unsigned char LeafData_52df00_0[];
extern "C" uint64_t RecoveredCall_52df00_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_52df00_1(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_52df00_2(uint64_t);
struct RecoveredOutput_52df00 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_52df00 RecoveredLeaf_52df00(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_52df00 output;
    alignas(8) unsigned char stack_storage[8];
    const uint64_t result0 = RecoveredCall_52df00_0(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8),((reinterpret_cast<uintptr_t>(LeafData_52df00_0) - 3286) + 3286));
    const uint64_t result1 = RecoveredCall_52df00_1(reinterpret_cast<uintptr_t>(&output),((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8),uint32_t(2),uint32_t(1));
    const uint64_t result2 = RecoveredCall_52df00_2(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return output;
}



extern "C" uint64_t RecoveredCall_52f570_0(uint64_t);
extern "C" uint64_t RecoveredCall_52f570_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_52f570_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_52f570_3(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_52f570(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[40];
    const uint64_t result0 = RecoveredCall_52f570_0(arg0);
    const uint64_t result1 = RecoveredCall_52f570_1(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8),arg1);
    const uint64_t result2 = RecoveredCall_52f570_2((result0 + 40),((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    const uint64_t result3 = RecoveredCall_52f570_3((((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8) + 24));
    return result3;
}



extern "C" uint64_t RecoveredCall_530430_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_530430_1(uint64_t,uint64_t);
struct RecoveredOutput_530430 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_530430 RecoveredLeaf_530430(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_530430 output;
    alignas(8) unsigned char stack_storage[256];
    const uint64_t result0 = RecoveredCall_530430_0(arg0,(reinterpret_cast<uintptr_t>(stack_storage) + 0),uint32_t(255));
    if (!((uint32_t(result0) & 0x1ull) != 0)) {
    *reinterpret_cast<uint8_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 0)) = 0;
    }
    const uint64_t result1 = RecoveredCall_530430_1(reinterpret_cast<uintptr_t>(&output),(reinterpret_cast<uintptr_t>(stack_storage) + 0));
    return output;
}



extern "C" uint64_t RecoveredCall_53a160_0(uint64_t);
extern "C" uint64_t RecoveredCall_53a160_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_53a160_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_53a160_3(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_53a160(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    const uint64_t result0 = RecoveredCall_53a160_0(arg1);
    const uint64_t result1 = RecoveredCall_53a160_1(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8),result0);
    const uint64_t result2 = RecoveredCall_53a160_2(arg0,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    const uint64_t result3 = RecoveredCall_53a160_3(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return result3;
}



extern "C" unsigned char LeafData_53a6e0_2[];
extern "C" uint64_t RecoveredCall_53a6e0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_53a6e0_1(uint64_t);
extern "C" uint64_t RecoveredCall_53a6e0_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_53a6e0_3(uint64_t);
extern "C" uint64_t RecoveredCall_53a6e0_4(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_53a6e0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4,uint64_t arg5,uint64_t arg6) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[120];
    const uint64_t result0 = RecoveredCall_53a6e0_0(arg5,((reinterpret_cast<uintptr_t>(LeafData_53a6e0_2) - 3649) + 3649));
    const uint64_t result1 = RecoveredCall_53a6e0_1(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    const uint64_t result2 = RecoveredCall_53a6e0_2(arg6,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    const uint64_t result3 = RecoveredCall_53a6e0_3(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    const uint64_t result4 = RecoveredCall_53a6e0_4((arg0 + 24),arg1,arg2,arg3,arg4,arg5,arg6);
    return uint32_t((uint32_t(result4) & 1));
}



extern "C" uint64_t RecoveredCall_53b3b0_0(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_53b3b0_1(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_53b3b0_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_53b3b0_3(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_53b3b0_4(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_53b3b0_5(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_53b3b0_6(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_53b3b0_7(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_53b3b0_8(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_53b3b0_9(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_53b3b0_10(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_53b3b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    const uint64_t result0 = RecoveredCall_53b3b0_0(arg0,(arg1 + 8),uint32_t(4),uint32_t(1));
    const uint64_t result1 = RecoveredCall_53b3b0_1(arg0,(arg1 + 12),uint32_t(4),uint32_t(1));
    const uint64_t result2 = RecoveredCall_53b3b0_2(arg0,(arg1 + 16));
    const uint64_t result3 = RecoveredCall_53b3b0_3(arg0,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8),uint32_t(8),uint32_t(1));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 24)) = field0;
    const uint64_t result4 = RecoveredCall_53b3b0_4(arg0,(arg1 + 32),uint32_t(4),uint32_t(1));
    const uint64_t result5 = RecoveredCall_53b3b0_5(arg0,(arg1 + 36),uint32_t(4),uint32_t(1));
    const uint64_t result6 = RecoveredCall_53b3b0_6(arg0,(arg1 + 40));
    const uint64_t result7 = RecoveredCall_53b3b0_7(arg0,(arg1 + 41));
    const uint64_t result8 = RecoveredCall_53b3b0_8(arg0,(arg1 + 48));
    const uint64_t result9 = RecoveredCall_53b3b0_9(arg0,(arg1 + 72));
    const uint64_t result10 = RecoveredCall_53b3b0_10(arg0,(arg1 + 96));
    return result10;
}



extern "C" uint64_t RecoveredCall_543340_0(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_543340_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_543340(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    const uint64_t result0 = RecoveredCall_543340_0(arg0,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8),uint32_t(8),uint32_t(1));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 8)) = field0;
    const uint64_t result1 = RecoveredCall_543340_1(arg0,(arg1 + 16));
    return result1;
}



extern "C" uint64_t RecoveredCall_543660_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_543660_1(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_543660_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_543660_3(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_543660_4(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_543660_5(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_543660(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    const uint64_t result0 = RecoveredCall_543660_0(arg0,(arg1 + 8));
    const uint64_t result1 = RecoveredCall_543660_1(arg0,(arg1 + 16),uint32_t(4),uint32_t(1));
    const uint64_t result2 = RecoveredCall_543660_2(arg0,(arg1 + 20));
    const uint64_t result3 = RecoveredCall_543660_3(arg0,(arg1 + 36));
    const uint64_t result4 = RecoveredCall_543660_4(arg0,(arg1 + 56));
    const uint64_t result5 = RecoveredCall_543660_5(arg0,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8),uint32_t(8),uint32_t(1));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 64)) = field0;
    return result5;
}



extern "C" uint64_t RecoveredCall_562e80_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_562e80(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = arg1;
    const uint64_t result0 = RecoveredCall_562e80_0((arg0 + 56),((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return uint32_t((result0 != 0));
}



extern "C" unsigned char LeafData_62be50_2[];
extern "C" unsigned char LeafData_62be50_5[];
extern "C" unsigned char LeafData_62be50_8[];
extern "C" uint64_t RecoveredCall_62be50_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_62be50(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[72];
    *reinterpret_cast<uint64_t*>((arg2 + 0)) = 0;
    *reinterpret_cast<uint64_t*>((arg2 + 72)) = 0;
    *reinterpret_cast<uint32_t*>((arg2 + 80)) = 0;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = arg0;
    *reinterpret_cast<uint32_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 32)) = uint32_t(arg1);
    *reinterpret_cast<uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 40) + 0)) = arg2;
    *reinterpret_cast<uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 40) + 8)) = ((reinterpret_cast<uintptr_t>(LeafData_62be50_2) - 3760) + 3760);
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 72)) = 0;
    *reinterpret_cast<uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 56) + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_62be50_5) - 3856) + 3856);
    *reinterpret_cast<uint64_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 56) + 8)) = ((reinterpret_cast<uintptr_t>(LeafData_62be50_8) - 4080) + 4080);
    const uint64_t result0 = RecoveredCall_62be50_0(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return result0;
}
