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
extern "C" uint64_t LeafTarget_51b40(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_51b40(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + -4));
    return LeafTarget_51b40((arg0 - uint32_t(field0)));
}

extern "C" uint64_t LeafTarget_56d60(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_56d60(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + -4));
    return LeafTarget_56d60((arg0 - uint32_t(field0)));
}

extern "C" uint64_t LeafData_99810_0;
extern "C" uint64_t LeafTarget_99810(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_99810(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_99810_0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    if (field1 == 0) return field1;
    return LeafTarget_99810(field1,arg0);
}

extern "C" uint64_t LeafData_fbcd0_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_fbcd0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_fbcd0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_15f7d0_0;
extern "C" uint64_t LeafTarget_15f7d0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_15f7d0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_15f7d0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((arg0 + 32));
    if (uint32_t(uint32_t(field1)) == 0) return arg0;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (field2 == 0) return arg0;
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = 0;
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((field2 + -4));
    return LeafTarget_15f7d0((field2 - uint32_t(field3)));
}

extern "C" uint64_t LeafData_1929e0_0;
extern "C" uint64_t LeafTarget_1929e0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1929e0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_1929e0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (field1 == 0) return field1;
    return LeafTarget_1929e0(field1);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1b9490(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    return field0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1bf7c0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    return field0;
}

extern "C" unsigned char LeafData_1c95d0_0[];
extern "C" uint64_t RecoveredCall_1c95d0_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1c95d0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_1c95d0_0(uint32_t(48),reinterpret_cast<uintptr_t>(LeafData_1c95d0_0),uint32_t(132));
    if (result0 == 0) return result0;
    *reinterpret_cast<uint64_t*>(((result0 + 32) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 32) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 16) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 16) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 0) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 0) + 8)) = 0;
    return result0;
}

extern "C" uint64_t RecoveredCall_1c9d10_0(uint64_t);
extern "C" uint64_t LeafTarget_1c9d10(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1c9d10(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t result0 = RecoveredCall_1c9d10_0(arg0);
    return LeafTarget_1c9d10(arg0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1ca2c0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    return field0;
}

extern "C" uint64_t RecoveredCall_1cffd0_0(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1cffd0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t result0 = RecoveredCall_1cffd0_0(arg0,arg1,0,uint32_t(-1));
    if (uint32_t(result0) == 0) return result0;
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = arg2;
    return uint32_t((arg2 != 0));
}

extern "C" unsigned char LeafData_1d8fd0_0[];
extern "C" uint64_t RecoveredCall_1d8fd0_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1d8fd0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_1d8fd0_0(uint32_t(16),reinterpret_cast<uintptr_t>(LeafData_1d8fd0_0),uint32_t(93));
    if (result0 == 0) return result0;
    *reinterpret_cast<uint64_t*>(((result0 + 0) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 0) + 8)) = 0;
    return result0;
}

extern "C" uint64_t RecoveredCall_1da3e0_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1da3e0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_1da3e0_0(arg1,(arg0 + 16));
    if (result0 == 0) return result0;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 8));
    return uint32_t((uint32_t(uint32_t(field0)) != 0));
}

extern "C" uint64_t RecoveredCall_1da410_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1da410(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_1da410_0(arg1,(arg0 + 40));
    if (result0 == 0) return result0;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 48));
    return uint32_t((uint32_t(uint32_t(field0)) != 0));
}

extern "C" uint64_t RecoveredCall_1dd930_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1dd930_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1dd930_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1dd930(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_1dd930_0((arg0 + 8),(arg1 + 8));
    if (result0 == 0) return result0;
    const uint64_t result1 = RecoveredCall_1dd930_1((arg0 + 32),(arg1 + 32));
    if (result1 == 0) return result1;
    const uint64_t result2 = RecoveredCall_1dd930_2((arg0 + 56),(arg1 + 56));
    if (result2 == 0) return result2;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 80));
    *reinterpret_cast<uint32_t*>((arg0 + 80)) = uint32_t(uint32_t(field0));
    return uint32_t(1);
}

extern "C" uint64_t RecoveredCall_1e0d20_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1e0d20_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1e0d20_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1e0d20(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_1e0d20_0((arg0 + 104),(arg1 + 104));
    if (result0 == 0) return result0;
    const uint64_t result1 = RecoveredCall_1e0d20_1((arg0 + 152),(arg1 + 152));
    if (result1 == 0) return result1;
    const uint64_t result2 = RecoveredCall_1e0d20_2((arg0 + 176),(arg1 + 176));
    if (result2 == 0) return result2;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 200));
    *reinterpret_cast<uint32_t*>((arg0 + 200)) = uint32_t(uint32_t(field0));
    return uint32_t(1);
}

extern "C" uint64_t RecoveredCall_1e1310_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1e1310_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1e1310_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1e1310(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_1e1310_0((arg0 + 8),(arg1 + 8));
    if (result0 == 0) return result0;
    const uint64_t result1 = RecoveredCall_1e1310_1((arg0 + 32),(arg1 + 32));
    if (result1 == 0) return result1;
    const uint64_t result2 = RecoveredCall_1e1310_2((arg0 + 56),(arg1 + 56));
    if (result2 == 0) return result2;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 80));
    *reinterpret_cast<uint32_t*>((arg0 + 80)) = uint32_t(uint32_t(field0));
    return uint32_t(1);
}

extern "C" uint64_t LeafTarget_1e4e50(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1e4e50(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    if (field0 == 0) return field0;
    return LeafTarget_1e4e50(field0);
}

extern "C" uint64_t RecoveredCall_1e4ea0_0(uint64_t);
extern "C" uint64_t RecoveredCall_1e4ea0_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1e4ea0_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1e4ea0_3(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1e4ea0_4(uint64_t,uint64_t);
extern "C" uint64_t LeafTarget_1e4ea0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1e4ea0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t result0 = RecoveredCall_1e4ea0_0(arg0);
    const uint64_t result1 = RecoveredCall_1e4ea0_1((arg0 + 232),uint32_t(32));
    const uint64_t result2 = RecoveredCall_1e4ea0_2((arg0 + 168),uint32_t(32));
    const uint64_t result3 = RecoveredCall_1e4ea0_3((arg0 + 200),uint32_t(32));
    const uint64_t result4 = RecoveredCall_1e4ea0_4((arg0 + 264),uint32_t(32));
    *reinterpret_cast<uint32_t*>((arg0 + 296)) = uint32_t(uint32_t(-1));
    return LeafTarget_1e4ea0(arg0);
}

extern "C" unsigned char LeafData_1e5500_0[];
extern "C" uint64_t RecoveredCall_1e5500_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1e5500(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_1e5500_0(uint32_t(168),reinterpret_cast<uintptr_t>(LeafData_1e5500_0),uint32_t(88));
    if (result0 == 0) return result0;
    *reinterpret_cast<uint64_t*>(((result0 + 152) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 152) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((result0 + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 136) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 136) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 120) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 120) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 104) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 104) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 88) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 88) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 72) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 72) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 56) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 56) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 40) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 40) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 24) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 24) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 8) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 8) + 8)) = 0;
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1ed3f0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (arg1 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 24));
    if (field1 == 0) return arg0;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field1)(field2,arg1,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1f34e0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    return field0;
}

extern "C" uint64_t LeafTarget_1f3540(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1f3540(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    return LeafTarget_1f3540(field0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1f3a90(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    return field0;
}

extern "C" uint64_t LeafTarget_1f9ce0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1f9ce0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    return LeafTarget_1f9ce0(arg0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1f9de0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    return field0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1f9df0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    return field0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1f9e00(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 8));
    return uint32_t((int32_t(uint32_t(uint32_t(field0))) > int32_t(0)));
}

extern "C" uint64_t RecoveredCall_1fe670_0(uint64_t,uint64_t);
extern "C" unsigned char LeafData_1fe670_4[];
extern "C" uint64_t RecoveredCall_1fe670_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1fe670(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    const uint64_t result0 = RecoveredCall_1fe670_0(arg0,field0);
    if (uint32_t(result0) == 0) return result0;
    const uint64_t result1 = RecoveredCall_1fe670_1(arg0,reinterpret_cast<uintptr_t>(LeafData_1fe670_4));
    return uint32_t((int32_t(uint32_t(result1)) > int32_t(0)));
}

extern "C" unsigned char LeafData_207050_1[];
extern "C" uint64_t RecoveredCall_207050_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_207050_1(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_207050(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_207050_0(uint32_t(4360),reinterpret_cast<uintptr_t>(LeafData_207050_1),uint32_t(115));
    if (result0 == 0) return result0;
    const uint64_t result1 = RecoveredCall_207050_1((result0 + 24));
    *reinterpret_cast<uint64_t*>(((result0 + 0) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 0) + 8)) = uint32_t(1);
    *reinterpret_cast<uint32_t*>((result0 + 16)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint32_t*>((arg0 + 24)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = result0;
    *reinterpret_cast<uint32_t*>((arg0 + 32)) = 0;
    return uint32_t(1);
}

extern "C" uint64_t RecoveredCall_2070b0_0(uint64_t);
extern "C" uint64_t RecoveredCall_2070b0_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_2070b0_2(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2070b0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    const uint64_t result0 = RecoveredCall_2070b0_0((field0 + 24));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    const uint64_t result1 = RecoveredCall_2070b0_1(field1,uint32_t(4360));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    const uint64_t result2 = RecoveredCall_2070b0_2(field2);
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = 0;
    *reinterpret_cast<uint32_t*>((arg0 + 24)) = 0;
    *reinterpret_cast<uint32_t*>((arg0 + 32)) = 0;
    return uint32_t(1);
}

extern "C" uint64_t LeafTarget_207100(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_207100(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    if (field0 == 0) return field0;
    return LeafTarget_207100(field0,arg1,arg2);
}

extern "C" uint64_t RecoveredCall_207460_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_207460(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_207460_0(arg0);
    if (result0 == 0) return result0;
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = result0;
    *reinterpret_cast<uint32_t*>((arg0 + 24)) = 0;
    *reinterpret_cast<uint32_t*>((arg0 + 32)) = 0;
    return uint32_t(1);
}

extern "C" uint64_t RecoveredCall_207490_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_207490(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    const uint64_t result0 = RecoveredCall_207490_0(field0);
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = 0;
    *reinterpret_cast<uint32_t*>((arg0 + 24)) = 0;
    *reinterpret_cast<uint32_t*>((arg0 + 32)) = 0;
    return uint32_t(1);
}

extern "C" uint64_t LeafTarget_2074c0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2074c0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    if (field0 == 0) return field0;
    return LeafTarget_2074c0(field0,arg1,arg2);
}

extern "C" uint64_t LeafTarget_208b60(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_208b60(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 160));
    if (field0 == 0) return field0;
    return LeafTarget_208b60(field0);
}

extern "C" uint64_t RecoveredCall_209840_0(uint64_t);
extern "C" uint64_t LeafTarget_209840(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_209840(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_209840_0(arg1);
    if (result0 == 0) return result0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    return LeafTarget_209840(field0,result0);
}

extern "C" uint64_t RecoveredCall_20b040_0(uint64_t);
extern "C" uint64_t RecoveredCall_20b040_1(uint64_t);
extern "C" uint64_t LeafTarget_20b040(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_20b040(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t result0 = RecoveredCall_20b040_0(arg0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    const uint64_t result1 = RecoveredCall_20b040_1(field0);
    return LeafTarget_20b040(arg0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_20c7f0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (arg1 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = field0;
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_20e070(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((field0 + 72));
    return uint32_t(field1);
}

extern "C" uint64_t RecoveredCall_214290_0(uint64_t);
extern "C" uint64_t RecoveredCall_214290_1(uint64_t);
extern "C" uint64_t RecoveredCall_214290_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_214290(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    const uint64_t result0 = RecoveredCall_214290_0(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 32));
    const uint64_t result1 = RecoveredCall_214290_1(field1);
    if (result0 == 0) return uint32_t(-2);
    if (result1 == 0) return uint32_t(-2);
    const uint64_t result2 = RecoveredCall_214290_2(result0,result1,0);
    return uint32_t((uint32_t(result2) == 0));
}

extern "C" uint64_t LeafTarget_214a90(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_214a90(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    return LeafTarget_214a90(arg0);
}

extern "C" uint64_t RecoveredCall_215b40_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_215b40(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_215b40_0(arg0);
    if (result0 == 0) return result0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((result0 + 24));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t)>(field1)(arg0,arg1,arg2,arg3,field1);
    return result1;
}

extern "C" uint64_t RecoveredCall_217750_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_217750(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_217750_0(arg0);
    *reinterpret_cast<uint64_t*>((arg0 + 40)) = result0;
    if (result0 == 0) return result0;
    *reinterpret_cast<uint32_t*>((arg0 + 72)) = 0;
    return uint32_t(1);
}

extern "C" uint64_t RecoveredCall_217780_0(uint64_t);
extern "C" uint64_t RecoveredCall_217780_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_217780(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_217780_0(arg0);
    *reinterpret_cast<uint64_t*>((arg0 + 40)) = result0;
    if (result0 == 0) return result0;
    *reinterpret_cast<uint32_t*>((arg0 + 72)) = 0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 40));
    const uint64_t result1 = RecoveredCall_217780_1(result0,field0);
    return uint32_t((uint32_t(result1) != 0));
}

extern "C" unsigned char LeafData_21a000_1[];
extern "C" uint64_t RecoveredCall_21a000_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_21a000(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_21a000_0(uint32_t(32),reinterpret_cast<uintptr_t>(LeafData_21a000_1),uint32_t(84));
    if (result0 == 0) return result0;
    *reinterpret_cast<uint64_t*>((result0 + 24)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 0) + 0)) = ((1024 & 0xffff0000ffffffffull) | (160ull << 32));
    *reinterpret_cast<uint64_t*>(((result0 + 0) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 40)) = result0;
    *reinterpret_cast<uint64_t*>((arg0 + 64)) = (result0 + 16);
    *reinterpret_cast<uint32_t*>((arg0 + 72)) = uint32_t(uint32_t(2));
    return uint32_t(1);
}

extern "C" unsigned char LeafData_21a050_2[];
extern "C" uint64_t RecoveredCall_21a050_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_21a050(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_21a050_0(uint32_t(32),reinterpret_cast<uintptr_t>(LeafData_21a050_2),uint32_t(84));
    if (result0 == 0) return result0;
    *reinterpret_cast<uint64_t*>((result0 + 24)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 0) + 0)) = ((1024 & 0xffff0000ffffffffull) | (160ull << 32));
    *reinterpret_cast<uint64_t*>(((result0 + 0) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 64)) = (result0 + 16);
    *reinterpret_cast<uint64_t*>((arg0 + 40)) = result0;
    *reinterpret_cast<uint32_t*>((arg0 + 72)) = uint32_t(uint32_t(2));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 40));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((field0 + 0));
    *reinterpret_cast<uint32_t*>((result0 + 0)) = uint32_t(uint32_t(field1));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((field0 + 4));
    *reinterpret_cast<uint32_t*>((result0 + 4)) = uint32_t(uint32_t(field2));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    *reinterpret_cast<uint64_t*>((result0 + 8)) = field3;
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field0 + 24));
    *reinterpret_cast<uint64_t*>((result0 + 24)) = field4;
    return uint32_t(1);
}

extern "C" uint64_t LeafTarget_21a0d0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_21a0d0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    if (field0 == 0) return field0;
    return LeafTarget_21a0d0(field0);
}

extern "C" uint64_t RecoveredCall_21b470_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_21b470(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_21b470_0(arg3);
    if (result0 == 0) return result0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((result0 + 24));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t)>(field1)(arg0,arg1,arg2,arg3,arg4,field1);
    return result1;
}

extern "C" uint64_t LeafTarget_21b600(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_21b600(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    return LeafTarget_21b600(arg0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_220090(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 144));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg1);
    if (result0 == 0) return result0;
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((result0 + 0));
    return ((uint32_t(uint32_t(field2)) == 0) ? 0 : result0);
}

extern "C" uint64_t LeafTarget_2230b0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2230b0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    if (field0 == 0) return field0;
    return LeafTarget_2230b0(field0,arg1,arg2);
}

extern "C" uint64_t LeafTarget_234f50(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_234f50(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (field0 == 0) return field0;
    return LeafTarget_234f50(field0);
}

extern "C" uint64_t RecoveredCall_234f70_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_234f70(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_234f70_0(arg0);
    if (uint32_t(result0) == 0) return result0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    return uint32_t(1);
}

extern "C" uint64_t RecoveredCall_241e00_0(uint64_t);
extern "C" uint64_t RecoveredCall_241e00_1(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_241e00(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_241e00_0(arg0);
    if (uint32_t(result0) == 0) return result0;
    const uint64_t result1 = RecoveredCall_241e00_1(arg0);
    return uint32_t((uint32_t(result1) != 0));
}

extern "C" unsigned char LeafData_247d70_2[];
extern "C" uint64_t RecoveredCall_247d70_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_247d70(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_247d70_0(uint32_t(24),reinterpret_cast<uintptr_t>(LeafData_247d70_2),uint32_t(71));
    if (result0 == 0) return result0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    *reinterpret_cast<uint64_t*>(((result0 + 0) + 0)) = field0;
    *reinterpret_cast<uint64_t*>(((result0 + 0) + 8)) = arg1;
    *reinterpret_cast<uint64_t*>((result0 + 16)) = 0;
    return result0;
}

extern "C" uint64_t LeafTarget_247db0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_247db0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    return LeafTarget_247db0(arg0);
}

extern "C" unsigned char LeafData_247dc0_0[];
extern "C" uint64_t RecoveredCall_247dc0_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_247dc0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_247dc0_0(uint32_t(16),reinterpret_cast<uintptr_t>(LeafData_247dc0_0),uint32_t(93));
    if (result0 == 0) return result0;
    *reinterpret_cast<uint64_t*>(((result0 + 0) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 0) + 8)) = 0;
    return result0;
}

extern "C" uint64_t LeafTarget_247df0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_247df0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    return LeafTarget_247df0(arg0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_247ec0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = field1;
    return field0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_247f40(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = field1;
    return field0;
}

extern "C" uint64_t LeafData_25cdb0_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_25cdb0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_25cdb0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_25cf10_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_25cf10(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_25cf10_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_25da40_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_25da40(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_25da40_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_25e190_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_25e190(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_25e190_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_26daf0_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_26daf0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_26daf0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_26dc60_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_26dc60(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_26dc60_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_26e0f0_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_26e0f0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_26e0f0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_286c40_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_286c40(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_286c40_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2911c0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}

extern "C" uint64_t LeafData_293520_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_293520(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_293520_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    *reinterpret_cast<uint64_t*>((arg0 + 40)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_2966b0_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2966b0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_2966b0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    *reinterpret_cast<uint64_t*>((arg0 + 40)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_2995a0_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2995a0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_2995a0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_29b010_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_29b010(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_29b010_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    *reinterpret_cast<uint64_t*>((arg0 + 40)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_2a38a0_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2a38a0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_2a38a0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2b6920(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2b6b50(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2b7450(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}

extern "C" uint64_t LeafData_2bf7b0_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2bf7b0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_2bf7b0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    *reinterpret_cast<uint64_t*>((arg0 + 56)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_2c0b00_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2c0b00(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_2c0b00_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    *reinterpret_cast<uint64_t*>((arg0 + 40)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_2c0e20_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2c0e20(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_2c0e20_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    *reinterpret_cast<uint64_t*>((arg0 + 40)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_2c1190_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2c1190(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_2c1190_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    *reinterpret_cast<uint64_t*>((arg0 + 56)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_2c1340_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2c1340(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_2c1340_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    *reinterpret_cast<uint64_t*>((arg0 + 56)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_2eb8e0_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2eb8e0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_2eb8e0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    *reinterpret_cast<uint64_t*>((arg0 + 64)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_2ec450_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2ec450(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_2ec450_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    *reinterpret_cast<uint64_t*>((arg0 + 56)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_2ec890_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2ec890(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_2ec890_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    *reinterpret_cast<uint64_t*>((arg0 + 64)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_2ecce0_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2ecce0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_2ecce0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    *reinterpret_cast<uint64_t*>((arg0 + 56)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_2ed120_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2ed120(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_2ed120_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    *reinterpret_cast<uint64_t*>((arg0 + 56)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafTarget_3036f0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_3036f0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    if (field0 == 0) return field0;
    return LeafTarget_3036f0(field0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_305100(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}

extern "C" uint64_t LeafData_343c40_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_343c40(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_343c40_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    *reinterpret_cast<uint64_t*>((arg0 + 56)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_361f70_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_361f70(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_361f70_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    *reinterpret_cast<uint64_t*>((arg0 + 64)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafTarget_380990(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_380990(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    if (field0 == 0) return field0;
    return LeafTarget_380990(field0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_38b0a0(uint64_t arg0) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 32));
    if ((uint32_t(uint32_t(field0)) & 0x4ull) == 0) return arg0;
    *reinterpret_cast<uint8_t*>((arg0 + 32)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) & 4294967291)));
    return arg0;
}

extern "C" uint64_t LeafData_38fcd0_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_38fcd0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_38fcd0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    *reinterpret_cast<uint64_t*>((arg0 + 40)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_391540_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_391540(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_391540_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    *reinterpret_cast<uint64_t*>((arg0 + 64)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_39f1d0_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_39f1d0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_39f1d0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    *reinterpret_cast<uint64_t*>((arg0 + 64)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_39f360_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_39f360(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_39f360_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    *reinterpret_cast<uint64_t*>((arg0 + 64)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_3c4820_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_3c4820(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_3c4820_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    *reinterpret_cast<uint64_t*>((arg0 + 56)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_3c58c0_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_3c58c0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_3c58c0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    *reinterpret_cast<uint64_t*>((arg0 + 40)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_3c5d00_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_3c5d00(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_3c5d00_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    *reinterpret_cast<uint64_t*>((arg0 + 40)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_3c6540_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_3c6540(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_3c6540_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    *reinterpret_cast<uint64_t*>((arg0 + 40)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_3c6980_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_3c6980(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_3c6980_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    *reinterpret_cast<uint64_t*>((arg0 + 40)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_3c7280_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_3c7280(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_3c7280_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    *reinterpret_cast<uint64_t*>((arg0 + 40)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_3c7e80_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_3c7e80(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_3c7e80_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    *reinterpret_cast<uint64_t*>((arg0 + 56)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_3c81f0_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_3c81f0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_3c81f0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    *reinterpret_cast<uint64_t*>((arg0 + 56)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_3f3220(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_3f48f0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg3 + 0));
    if (int32_t(uint32_t(uint32_t(field0))) < int32_t(1)) return arg0;
    *reinterpret_cast<uint8_t*>((arg0 + 81)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint8_t*>((arg0 + 320)) = 0;
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_42ee20(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_42ee40(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,arg2,arg3,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_42ee60(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,arg2,arg3,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_42ee80(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 64));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,arg2,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_42eea0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 72));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,arg2,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_42eec0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 80));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,arg2,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_42eee0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 88));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_42ef00(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_42ef20(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 32));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_42ef40(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 40));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_42ef60(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 96));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_42ef80(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 104));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_42efa0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 112));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,arg2,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_42efc0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 120));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,arg2,field2);
    return result0;
}

extern "C" uint64_t LeafData_43cec0_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_43cec0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_43cec0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_455860_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_455860(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_455860_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_455e30(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}

extern "C" uint64_t LeafData_45e6a0_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_45e6a0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_45e6a0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_45ed90_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_45ed90(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_45ed90_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_460660(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 240));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 48));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field4)(field0,field2,field4);
    return result0;
}

extern "C" uint64_t LeafTarget_47ac20(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_47ac20(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (field0 == 0) return field0;
    return LeafTarget_47ac20(field0,arg1);
}

extern "C" uint64_t LeafTarget_47ad90(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_47ad90(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (field0 == 0) return field0;
    return LeafTarget_47ad90(field0,arg1);
}

extern "C" uint64_t LeafTarget_47af60(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_47af60(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (field0 == 0) return field0;
    return LeafTarget_47af60(field0,arg1);
}

extern "C" uint64_t LeafTarget_47b0f0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_47b0f0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (field0 == 0) return field0;
    return LeafTarget_47b0f0(field0,arg1);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4957c0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_49a430(uint64_t arg0) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 234));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    *reinterpret_cast<uint8_t*>((arg0 + 284)) = uint32_t(uint32_t(1));
    return arg0;
}

extern "C" uint64_t LeafTarget_4d27e0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4d27e0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 16));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 32));
    if (field1 == 0) return arg0;
    return LeafTarget_4d27e0(arg0,field0,0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4d2800(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 32));
    if (field0 == 0) return arg0;
    *reinterpret_cast<uint32_t*>((field0 + 12)) = 0;
    return arg0;
}

extern "C" uint64_t LeafTarget_4eb5e0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4eb5e0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (field0 == 0) return arg0;
    return LeafTarget_4eb5e0((field0 - 4));
}

extern "C" uint64_t LeafTarget_4ebad0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4ebad0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    return LeafTarget_4ebad0((arg0 - 4));
}

extern "C" uint64_t LeafData_4f4510_0;
extern "C" uint64_t LeafTarget_4f4510(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4f4510(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_4f4510_0;
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((field0 + 0));
    if (uint32_t(uint32_t(field1)) == 0) return arg0;
    return LeafTarget_4f4510(arg0);
}

extern "C" uint64_t LeafData_4f4590_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4f4590(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_4f4590_0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4f48f0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t(5));
    if (field0 == 0) return arg0;
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field0)(arg0,(arg0 + 40),field0);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4f4910(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t(5));
    if (field0 == 0) return arg0;
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field0)(arg0,(arg0 + 40),field0);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4f4970(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t(5));
    if (field0 == 0) return arg0;
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field0)(arg0,(arg0 + 40),field0);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5125d0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (arg1 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 80));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field1)(arg1,arg1,field1);
    return result0;
}

extern "C" uint64_t LeafTarget_515b70(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_515b70(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    return LeafTarget_515b70((arg0 - 4));
}

extern "C" uint64_t LeafData_516f20_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_516f20(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_516f20_0;
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_516f50_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_516f50(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_516f50_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafTarget_51d950(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_51d950(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (field0 == 0) return arg0;
    return LeafTarget_51d950((field0 - 4));
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_51ef20(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 184));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 88));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}

extern "C" uint64_t LeafTarget_51ef40(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_51ef40(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 232));
    if (field0 == 0) return field0;
    return LeafTarget_51ef40(field0,arg1);
}

extern "C" uint64_t LeafTarget_51ef50(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_51ef50(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 232));
    if (field0 == 0) return field0;
    return LeafTarget_51ef50(field0,arg1);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_54df40(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 388));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    *reinterpret_cast<uint32_t*>((arg0 + 388)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) - 1)));
    return arg0;
}

extern "C" uint64_t LeafTarget_54fbb0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_54fbb0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 304));
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((field0 + 81));
    if (uint32_t(uint32_t(field1)) == 0) return arg0;
    return LeafTarget_54fbb0((field0 + 296));
}

extern "C" uint64_t LeafTarget_54fbd0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_54fbd0(uint64_t arg0) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 81));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    return LeafTarget_54fbd0((arg0 + 296));
}

extern "C" uint64_t LeafTarget_54fbf0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_54fbf0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 304));
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((field0 + 81));
    if (uint32_t(uint32_t(field1)) == 0) return arg0;
    return LeafTarget_54fbf0((field0 + 296));
}

extern "C" uint64_t LeafTarget_54fc10(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_54fc10(uint64_t arg0) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 81));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    return LeafTarget_54fc10((arg0 + 296));
}

extern "C" uint64_t LeafTarget_54fc30(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_54fc30(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 304));
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((field0 + 81));
    if (uint32_t(uint32_t(field1)) == 0) return arg0;
    return LeafTarget_54fc30((field0 + 296));
}

extern "C" uint64_t LeafTarget_54fc50(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_54fc50(uint64_t arg0) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 81));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    return LeafTarget_54fc50((arg0 + 296));
}

extern "C" uint64_t LeafTarget_54fc70(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_54fc70(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 304));
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((field0 + 81));
    if (uint32_t(uint32_t(field1)) == 0) return arg0;
    return LeafTarget_54fc70((field0 + 296));
}

extern "C" uint64_t LeafTarget_54fc90(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_54fc90(uint64_t arg0) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 81));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    return LeafTarget_54fc90((arg0 + 296));
}

extern "C" uint64_t LeafTarget_554110(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_554110(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    return LeafTarget_554110(arg0);
}

extern "C" uint64_t LeafTarget_554c20(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_554c20(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    return LeafTarget_554c20(arg0);
}

extern "C" uint64_t LeafTarget_55a910(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_55a910(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 200));
    if (field0 == 0) return field0;
    return LeafTarget_55a910(field0);
}

extern "C" uint64_t LeafData_55b910_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_55b910(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_55b910_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    *reinterpret_cast<uint64_t*>((arg0 + 40)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_564e80_0;
extern "C" uint64_t LeafTarget_564e80(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_564e80(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_564e80_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((arg0 + 16));
    if ((uint32_t(uint32_t(field1)) & 0x1ull) == 0) return arg0;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    if (field2 == 0) return field2;
    return LeafTarget_564e80(field2);
}

extern "C" uint64_t LeafTarget_56ca00(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_56ca00(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    return LeafTarget_56ca00(arg0);
}

extern "C" uint64_t LeafTarget_56e470(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_56e470(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    return LeafTarget_56e470(arg0);
}

extern "C" uint64_t LeafTarget_56f090(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_56f090(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    return LeafTarget_56f090(arg0);
}

extern "C" uint64_t LeafTarget_573ae0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_573ae0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    if (field0 == 0) return field0;
    return LeafTarget_573ae0(field0);
}

extern "C" uint64_t LeafTarget_57edc0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_57edc0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    return LeafTarget_57edc0(arg0);
}

extern "C" uint64_t LeafTarget_57edd0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_57edd0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    return LeafTarget_57edd0(arg0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_584900(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 24) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 24) + 8));
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = (field1 - 16);
    if (field0 == (field1 - 16)) return arg0;
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((field1 + -24));
    *reinterpret_cast<uint32_t*>((field1 + -24)) = uint32_t(uint32_t((uint32_t(uint32_t(field2)) + 1)));
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_584930(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 24) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 24) + 8));
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = (field1 - 16);
    if (field0 == (field1 - 16)) return arg0;
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((field1 + -24));
    *reinterpret_cast<uint32_t*>((field1 + -24)) = uint32_t(uint32_t((uint32_t(uint32_t(field2)) + 1)));
    return arg0;
}

extern "C" uint64_t LeafTarget_590af0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_590af0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    if (field0 == 0) return field0;
    return LeafTarget_590af0(field0);
}

extern "C" uint64_t LeafTarget_590e20(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_590e20(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    if (field0 == 0) return field0;
    return LeafTarget_590e20(field0);
}

extern "C" uint64_t LeafTarget_591510(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_591510(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    if (field0 == 0) return field0;
    return LeafTarget_591510(field0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5932c0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 84));
    if (uint32_t(uint32_t(field0)) != 0) return arg0;
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((arg0 + 80));
    if (uint32_t(uint32_t(field1)) != uint32_t(arg1)) return arg0;
    *reinterpret_cast<uint32_t*>((arg0 + 80)) = 0;
    *reinterpret_cast<uint8_t*>((arg0 + 75)) = 0;
    *reinterpret_cast<uint8_t*>((arg0 + 84)) = uint32_t(uint32_t(1));
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_599990(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 392));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 32));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5999b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 360));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 32));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}

extern "C" uint64_t LeafData_599a10_3;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_599a10(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 392));
    if (field0 == 0) return field0;
    const uint64_t field1 = LeafData_599a10_3;
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((field1 + 0));
    *reinterpret_cast<uint32_t*>((arg0 + 76)) = uint32_t(uint32_t(field2));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field4)(field0,field4);
    return result0;
}

extern "C" uint64_t LeafData_599a40_3;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_599a40(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 360));
    if (field0 == 0) return field0;
    const uint64_t field1 = LeafData_599a40_3;
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((field1 + 0));
    *reinterpret_cast<uint32_t*>((arg0 + 44)) = uint32_t(uint32_t(field2));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field4)(field0,field4);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_599a70(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 392));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 40));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,arg2,arg3,arg4,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_599a90(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 360));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 40));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,arg2,arg3,arg4,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_59a400(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 392));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 248));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_59a420(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 360));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 248));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_59a440(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 392));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 280));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_59a460(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 360));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 280));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_59a480(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 392));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 296));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_59a4a0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 360));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 296));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5c0f50(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 392));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 224));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5c0fc0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 360));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 224));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}

extern "C" uint64_t LeafData_601ea0_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_601ea0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_601ea0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafData_62b070_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_62b070(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_62b070_0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    if (field1 == 0) return field1;
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(field1);
    return result0;
}

extern "C" uint64_t LeafData_62b090_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_62b090(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_62b090_0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    if (field1 == 0) return arg0;
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}

extern "C" uint64_t LeafData_62e070_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_62e070(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_62e070_0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    if (field1 == 0) return arg0;
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}

extern "C" uint64_t LeafTarget_6736a0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_6736a0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (field0 == 0) return field0;
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = field0;
    return LeafTarget_6736a0(field0);
}

extern "C" uint64_t LeafTarget_67d6b0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_67d6b0(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) | 2)));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    if (field1 == 0) return arg0;
    return LeafTarget_67d6b0(arg0);
}

extern "C" uint64_t LeafTarget_680010(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_680010(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) | 2)));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    if (field1 == 0) return arg0;
    return LeafTarget_680010(arg0);
}

extern "C" uint64_t LeafTarget_69ea30(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_69ea30(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) | 2)));
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((arg0 + 188));
    if (uint32_t(uint32_t(field1)) == 0) return arg0;
    return LeafTarget_69ea30(arg0);
}

extern "C" uint64_t LeafTarget_6e92f0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_6e92f0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    return LeafTarget_6e92f0(arg0);
}

extern "C" uint64_t LeafTarget_702e00(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_702e00(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (field0 == 0) return field0;
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = field0;
    return LeafTarget_702e00(field0);
}

extern "C" uint64_t LeafData_709830_4;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_709830(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) | 2)));
    if ((uint32_t(uint32_t(field0)) & 0x1ull) == 0) return arg0;
    const uint64_t field1 = LeafData_709830_4;
    *reinterpret_cast<uint64_t*>((field1 + 152)) = arg0;
    return arg0;
}

extern "C" uint64_t LeafTarget_722b80(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_722b80(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (field0 == 0) return field0;
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = field0;
    return LeafTarget_722b80(field0);
}

extern "C" uint64_t LeafTarget_732ee0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_732ee0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (field0 == 0) return field0;
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = field0;
    return LeafTarget_732ee0(field0);
}

extern "C" uint64_t LeafTarget_734820(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_734820(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (field0 == 0) return field0;
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = field0;
    return LeafTarget_734820(field0);
}

extern "C" uint64_t LeafData_738410_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_738410(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_738410_0;
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((field0 + 11656));
    *reinterpret_cast<uint32_t*>((field0 + 11656)) = uint32_t(uint32_t((uint32_t(uint32_t(field1)) - 1)));
    *reinterpret_cast<uint32_t*>((field0 + 11928)) = uint32_t(uint32_t(2));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((field0 + 11920));
    *reinterpret_cast<uint32_t*>((field0 + 11920)) = uint32_t(uint32_t((uint32_t(uint32_t(field2)) - 1)));
    const uint8_t field3 = *reinterpret_cast<const uint8_t*>((field0 + 468));
    *reinterpret_cast<uint32_t*>((field0 + 9184)) = 0;
    *reinterpret_cast<uint8_t*>((field0 + 468)) = uint32_t(uint32_t((uint32_t(uint32_t(field3)) | uint32_t(uint32_t(27)))));
    const uint8_t field4 = *reinterpret_cast<const uint8_t*>((arg0 + 69));
    if (uint32_t(uint32_t(field4)) == 0) return arg0;
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((field0 + 440));
    *reinterpret_cast<uint32_t*>((field0 + 440)) = uint32_t(uint32_t((uint32_t(uint32_t(field5)) & 4294967294)));
    return arg0;
}

extern "C" uint64_t LeafTarget_740450(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_740450(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (field0 == 0) return field0;
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = field0;
    return LeafTarget_740450(field0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_762e60(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    *reinterpret_cast<uint8_t*>((arg0 + 237)) = 0;
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    if (field1 == 0) return arg0;
    *reinterpret_cast<uint8_t*>((field1 + 120)) = 0;
    return arg0;
}

extern "C" uint8_t LeafData_78c830_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_78c830(uint64_t arg0) {
    LEAF_CHECK
    const uint8_t field0 = LeafData_78c830_0;
    if ((uint32_t(uint32_t(field0)) & 0x1ull) != 0) return arg0;
    *reinterpret_cast<uint8_t*>((arg0 + 784)) = uint32_t(uint32_t(1));
    return arg0;
}

extern "C" uint64_t LeafTarget_7a34e0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7a34e0(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) | 2)));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    if (field1 == 0) return arg0;
    return LeafTarget_7a34e0(arg0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7aafa0(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) & 4294967293)));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 144));
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7ab020(uint64_t arg0) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 288));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    *reinterpret_cast<uint8_t*>((arg0 + 288)) = 0;
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7c0550(uint64_t arg0) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 218));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    *reinterpret_cast<uint8_t*>((arg0 + 218)) = 0;
    return arg0;
}

extern "C" unsigned char LeafData_7c9330_0[];
extern "C" uint64_t LeafTarget_7c9330(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7c9330(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_7c9330_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    if (field0 == 0) return field0;
    return LeafTarget_7c9330(field0);
}

extern "C" uint64_t LeafData_80d260_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_80d260(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_80d260_0;
    if (field0 == 0) return arg0;
    *reinterpret_cast<uint8_t*>((field0 + 227)) = uint32_t(uint32_t(1));
    return arg0;
}

extern "C" uint64_t RecoveredCall_82f4e0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_82f4e0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_82f4e0_0(arg0);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 728));
    if ((uint32_t(uint32_t(field0)) + 1) == 0) return result0;
    *reinterpret_cast<uint32_t*>((arg0 + 728)) = uint32_t(uint32_t(-1));
    return result0;
}

extern "C" uint64_t LeafTarget_8554a0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8554a0(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) | 2)));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    if (field1 == 0) return arg0;
    return LeafTarget_8554a0(arg0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_85f360(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 744));
    if (field0 == 0) return arg0;
    *reinterpret_cast<uint8_t*>((field0 + 96)) = 0;
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_87a990(uint64_t arg0) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 696));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    *reinterpret_cast<uint8_t*>((arg0 + 624)) = uint32_t(uint32_t(1));
    return arg0;
}

extern "C" uint64_t LeafTarget_8823b0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8823b0(uint64_t arg0) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 300));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    return LeafTarget_8823b0(arg0);
}

extern "C" uint64_t LeafTarget_897b20(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_897b20(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (field0 == 0) return field0;
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = field0;
    return LeafTarget_897b20(field0);
}

extern "C" uint64_t LeafTarget_897b90(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_897b90(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (field0 == 0) return field0;
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = field0;
    return LeafTarget_897b90(field0);
}

extern "C" uint64_t LeafTarget_897bb0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_897bb0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (field0 == 0) return field0;
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = field0;
    return LeafTarget_897bb0(field0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_932340(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 76));
    if ((uint32_t(uint32_t(field0)) + 1) != 0) return arg0;
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((arg0 + 112));
    if (uint32_t(uint32_t(field1)) == 0) return arg0;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((field2 + 32));
    *reinterpret_cast<uint32_t*>((arg0 + 76)) = uint32_t(uint32_t(field3));
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_937ed0(uint64_t arg0) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 152));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 144));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_937ef0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint16_t*>((arg0 + 152)) = uint32_t(uint32_t(1));
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 176));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 144));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_95ab70(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 104));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 344));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_986440(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 0));
    if (uint32_t(uint32_t((uint32_t(uint32_t(field0)) - 17))) > 1) return arg0;
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((arg2 + 0));
    *reinterpret_cast<uint32_t*>((arg2 + 0)) = uint32_t(uint32_t((uint32_t(uint32_t(field1)) + 3)));
    return arg0;
}

extern "C" uint64_t LeafData_994d20_2;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_994d20(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg0 + 5256)) = field0;
    const uint64_t field1 = LeafData_994d20_2;
    if (field1 == 0) return arg0;
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((field1 + 224));
    if (uint32_t(uint32_t(field2)) == 0) return arg0;
    *reinterpret_cast<uint64_t*>((arg0 + 5256)) = 0;
    return arg0;
}

extern "C" uint64_t RecoveredCall_9c06b0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_9c06b0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_9c06b0_0(arg0);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 152));
    *reinterpret_cast<uint32_t*>((arg0 + 156)) = uint32_t(uint32_t(field0));
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((arg0 + 1082));
    if (uint32_t(uint32_t(field1)) == 0) return result0;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    if (field2 == 0) return result0;
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    if (field3 == 0) return result0;
    *reinterpret_cast<uint8_t*>((field3 + 120)) = 0;
    return result0;
}

extern "C" uint64_t RecoveredCall_a94810_0(uint64_t);
extern "C" uint64_t RecoveredCall_a94810_1(uint64_t);
extern "C" uint64_t LeafTarget_a94810(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_a94810(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t result0 = RecoveredCall_a94810_0(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result1 = RecoveredCall_a94810_1(field1);
    return LeafTarget_a94810(arg0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aa0c20(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (arg1 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg1,arg1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((result0 + 16));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 160));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field4)(field2,arg1,field4);
    return result1;
}

extern "C" uint64_t LeafData_aa1340_1;
extern "C" uint64_t LeafTarget_aa1340(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aa1340(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = LeafData_aa1340_1;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(arg0);
    return LeafTarget_aa1340(field0,arg0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aa9cf0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 32));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aa9f20(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 568));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,uint32_t(41),field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aa9f40(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 568));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,uint32_t(40),field2);
    return result0;
}

extern "C" uint64_t LeafTarget_ab5ec0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ab5ec0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (field0 == 0) return field0;
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = field0;
    return LeafTarget_ab5ec0(field0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ac7780(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 56));
    *reinterpret_cast<uint8_t*>((arg0 + 112)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) & 1)));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    if (field1 == 0) return arg0;
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((field1 + 0));
    *reinterpret_cast<uint32_t*>((arg0 + 120)) = uint32_t(uint32_t(field2));
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((field1 + 4));
    *reinterpret_cast<uint32_t*>((arg0 + 124)) = uint32_t(uint32_t(field3));
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((field1 + 8));
    *reinterpret_cast<uint32_t*>((arg0 + 128)) = uint32_t(uint32_t(field4));
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((field1 + 12));
    *reinterpret_cast<uint32_t*>((arg0 + 132)) = uint32_t(uint32_t(field5));
    const uint32_t field6 = *reinterpret_cast<const uint32_t*>((field1 + 16));
    *reinterpret_cast<uint32_t*>((arg0 + 136)) = uint32_t(uint32_t(field6));
    const uint32_t field7 = *reinterpret_cast<const uint32_t*>((field1 + 20));
    *reinterpret_cast<uint32_t*>((arg0 + 140)) = uint32_t(uint32_t(field7));
    const ByteVector16 field8 = *reinterpret_cast<const ByteVector16*>((field1 + 24));
    const uint32_t field9 = *reinterpret_cast<const uint32_t*>((field1 + 40));
    *reinterpret_cast<uint32_t*>((arg0 + 160)) = uint32_t(uint32_t(field9));
    *reinterpret_cast<ByteVector16*>((arg0 + 144)) = field8;
    return arg0;
}

extern "C" uint64_t LeafTarget_acc210(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_acc210(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 208));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 216));
    if (field1 == 0) return arg0;
    return LeafTarget_acc210(arg0,(field1 + 108));
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ad0300(uint64_t arg0) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 248));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    *reinterpret_cast<uint32_t*>((arg0 + 244)) = uint32_t(uint32_t(2));
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ae20d0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ae20f0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ae2190(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aebe80(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_af96a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 200));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 32));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_af96c0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 200));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 40));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_af96e0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 200));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}

extern "C" uint64_t LeafData_b14830_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b14830(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_b14830_0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 9176));
    if (field2 == field1) return arg0;
    *reinterpret_cast<uint64_t*>((field0 + 576)) = field1;
    *reinterpret_cast<uint32_t*>((field0 + 9184)) = 0;
    *reinterpret_cast<uint64_t*>((field0 + 9176)) = field1;
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b30e90(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 144));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    if (field1 == 0) return arg0;
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((arg0 + 100));
    *reinterpret_cast<uint32_t*>((field1 + 100)) = uint32_t(uint32_t(field2));
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((arg0 + 104));
    *reinterpret_cast<uint32_t*>((field1 + 104)) = uint32_t(uint32_t(field3));
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((arg0 + 108));
    *reinterpret_cast<uint32_t*>((field1 + 108)) = uint32_t(uint32_t(field4));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 104));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field6)(field1,field6);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b30f00(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 144));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 160));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field3)(field1,arg1,field3);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b30f20(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 144));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 112));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field3)(field1,arg1,field3);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b39380(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 144));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 120));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field3)(field1,arg1,field3);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b393a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 144));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 160));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field3)(field1,arg1,field3);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b393c0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 144));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 112));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field3)(field1,arg1,field3);
    return result0;
}

extern "C" uint64_t RecoveredCall_b39400_0(uint64_t);
extern "C" uint64_t LeafTarget_b39400(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b39400(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b39400_0(arg0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    if (field0 == 0) return result0;
    return LeafTarget_b39400(arg0);
}

extern "C" uint64_t LeafTarget_b463e0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b463e0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    if (field0 == 0) return arg0;
    return LeafTarget_b463e0(arg0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b46b80(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) | 2)));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 208));
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t RecoveredCall_b4e690_0(uint64_t);
extern "C" uint64_t LeafTarget_b4e690(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b4e690(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b4e690_0(arg0);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 96));
    if (uint32_t(uint32_t(field0)) == 0) return result0;
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((arg0 + 160));
    return LeafTarget_b4e690(arg0,uint32_t(field1));
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b52470(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) & 4294967293)));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 272));
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafTarget_b5fe70(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b5fe70(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) | 2)));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    if (field1 == 0) return arg0;
    return LeafTarget_b5fe70(arg0);
}

extern "C" uint64_t LeafTarget_b5ff30(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b5ff30(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) | 2)));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    if (field1 == 0) return arg0;
    return LeafTarget_b5ff30(arg0);
}

extern "C" uint64_t LeafTarget_b60e00(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b60e00(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) | 2)));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    if (field1 == 0) return arg0;
    return LeafTarget_b60e00(arg0);
}

extern "C" uint64_t LeafTarget_b610d0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b610d0(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) | 2)));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    if (field1 == 0) return arg0;
    return LeafTarget_b610d0(arg0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b61890(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 184));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    *reinterpret_cast<uint8_t*>((arg0 + 212)) = uint32_t(uint32_t(1));
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b671a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b672d0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b67400(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b67490(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b679b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b67b10(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b67b30(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b67c00(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b67c20(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b67d40(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b67d60(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b67df0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b67e10(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b67ea0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b67ec0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b67f90(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b67fb0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b68080(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b680a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b68170(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b68190(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b68260(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b68280(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b68310(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b68330(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b683c0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b683e0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b68480(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b684a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b68730(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b68830(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}

extern "C" uint64_t LeafTarget_b693f0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b693f0(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) | 2)));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    if (field1 == 0) return arg0;
    return LeafTarget_b693f0(arg0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b69490(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b699a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b699c0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b78370(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b83380(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b833a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}

extern "C" uint64_t LeafTarget_b87860(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b87860(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) | 2)));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    if (field1 == 0) return arg0;
    return LeafTarget_b87860(arg0);
}

extern "C" uint64_t LeafData_b8deb0_2;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b8deb0(uint64_t arg0) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 130));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = LeafData_b8deb0_2;
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((arg0 + 131));
    *reinterpret_cast<uint32_t*>((field1 + 9336)) = uint32_t(uint32_t(field2));
    return arg0;
}

extern "C" uint64_t LeafData_b8def0_2;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b8def0(uint64_t arg0) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 130));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = LeafData_b8def0_2;
    *reinterpret_cast<uint32_t*>((field1 + 9336)) = uint32_t(uint32_t(-16777216));
    return arg0;
}

extern "C" uint64_t LeafData_b8eee0_7;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b8eee0(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) | 2)));
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((arg0 + 128));
    if (uint32_t(uint32_t(field1)) == 0) return arg0;
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((arg0 + 130));
    if (uint32_t(uint32_t(field2)) == 0) return arg0;
    const uint64_t field3 = LeafData_b8eee0_7;
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((arg0 + 131));
    *reinterpret_cast<uint32_t*>((field3 + 9336)) = uint32_t(uint32_t(field4));
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ba9640(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bacfa0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field1)(field0,arg1,field1);
    return result0;
}

extern "C" uint64_t LeafTarget_bdc070(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bdc070(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (field0 == 0) return field0;
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = field0;
    return LeafTarget_bdc070(field0);
}

extern "C" uint64_t LeafTarget_be5ca0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_be5ca0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (field0 == 0) return field0;
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = field0;
    return LeafTarget_be5ca0(field0);
}

extern "C" uint64_t LeafTarget_bf0570(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bf0570(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (field0 == 0) return field0;
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = field0;
    return LeafTarget_bf0570(field0);
}

extern "C" uint64_t LeafTarget_bf1ad0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bf1ad0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (field0 == 0) return field0;
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = field0;
    return LeafTarget_bf1ad0(field0);
}

extern "C" uint64_t RecoveredCall_bf1c30_0(uint64_t);
extern "C" uint64_t LeafTarget_bf1c30(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bf1c30(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = 0;
    if (field0 == 0) return arg0;
    const uint64_t result0 = RecoveredCall_bf1c30_0(field0);
    return LeafTarget_bf1c30(field0);
}

extern "C" uint64_t LeafTarget_bf1d50(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bf1d50(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (field0 == 0) return field0;
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = field0;
    return LeafTarget_bf1d50(field0);
}

extern "C" uint64_t LeafData_c259c0_0;
extern "C" uint64_t RecoveredCall_c259c0_0(uint64_t,uint64_t);
extern "C" uint32_t LeafData_c259c0_7;
extern "C" uint32_t LeafData_c259c0_11;
extern "C" uint64_t LeafTarget_c259c0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c259c0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_c259c0_0;
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>(((field0 + 56) + 0));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>(((field0 + 56) + 4));
    if (uint32_t(uint32_t(field1)) != uint32_t(uint32_t(field2))) return arg0;
    const uint64_t result0 = RecoveredCall_c259c0_0(0,arg1);
    const uint32_t field3 = LeafData_c259c0_7;
    if (result0 >= uint32_t(field3)) return result0;
    const uint32_t field4 = LeafData_c259c0_11;
    if (uint32_t(uint32_t(field4)) != 3) return result0;
    return LeafTarget_c259c0(uint32_t(1));
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c3dff0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 96));
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field4)(field1,field2,field4);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c4f610(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}

extern "C" uint64_t LeafTarget_c5a510(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c5a510(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (field0 == 0) return field0;
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = field0;
    return LeafTarget_c5a510(field0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c95c00(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 0));
    if (uint32_t(uint32_t((uint32_t(uint32_t(field0)) - 1))) > 2) return arg0;
    *reinterpret_cast<uint32_t*>((arg0 + 248)) = uint32_t(uint32_t(field0));
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c985c0(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) & 4294967293)));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 152));
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafTarget_c98930(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c98930(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 152));
    if (field0 == 0) return arg0;
    return LeafTarget_c98930(arg1,(arg0 + 160),uint32_t(1));
}

extern "C" uint64_t RecoveredCall_ca9640_2(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t LeafTarget_ca9640(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ca9640(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 200));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((result0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 128));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(result0);
    if (result1 == 0) return result1;
    const uint64_t result2 = RecoveredCall_ca9640_2(arg1,(arg0 + 168),uint32_t(3));
    return LeafTarget_ca9640(arg1,(arg0 + 264),uint32_t(3));
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cdea90(uint64_t arg0) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 128));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 152));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cdeed0(uint64_t arg0) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 128));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 152));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d19980(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if ((arg0 + 8) == arg1) return arg0;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 8));
    *reinterpret_cast<uint32_t*>((arg0 + 16)) = uint32_t(uint32_t(field0));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((arg1 + 12));
    *reinterpret_cast<uint32_t*>((arg0 + 20)) = uint32_t(uint32_t(field1));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((arg1 + 16));
    *reinterpret_cast<uint32_t*>((arg0 + 24)) = uint32_t(uint32_t(field2));
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((arg1 + 20));
    *reinterpret_cast<uint32_t*>((arg0 + 28)) = uint32_t(uint32_t(field3));
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((arg1 + 24));
    *reinterpret_cast<uint32_t*>((arg0 + 32)) = uint32_t(uint32_t(field4));
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((arg1 + 28));
    *reinterpret_cast<uint32_t*>((arg0 + 36)) = uint32_t(uint32_t(field5));
    const uint32_t field6 = *reinterpret_cast<const uint32_t*>((arg1 + 32));
    *reinterpret_cast<uint32_t*>((arg0 + 40)) = uint32_t(uint32_t(field6));
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d25b50(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}

extern "C" uint64_t LeafTarget_d37b70(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d37b70(uint64_t arg0) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 352));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    return LeafTarget_d37b70((arg0 + 376));
}

extern "C" uint64_t RecoveredCall_d3bc10_1(uint64_t);
extern "C" uint64_t RecoveredCall_d3bc10_2(uint64_t);
extern "C" uint64_t LeafTarget_d3bc10(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d3bc10(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 40));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 840));
    const uint64_t result1 = RecoveredCall_d3bc10_1((field2 + 8));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 896));
    const uint64_t result2 = RecoveredCall_d3bc10_2((field3 + 8));
    const uint8_t field4 = *reinterpret_cast<const uint8_t*>((arg0 + 360));
    if (uint32_t(uint32_t(field4)) == 0) return result2;
    return LeafTarget_d3bc10((arg0 + 384));
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d5ad00(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 608));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,arg2,arg3,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d5ada0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 608));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 32));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d5b570(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 608));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 104));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 608));
    const ByteVector16 field4 = *reinterpret_cast<const ByteVector16*>((field3 + 136));
    const ByteVector16 field5 = *reinterpret_cast<const ByteVector16*>((field3 + 152));
    *reinterpret_cast<ByteVector16*>((arg0 + 152)) = field5;
    *reinterpret_cast<ByteVector16*>((arg0 + 136)) = field4;
    const ByteVector16 field6 = *reinterpret_cast<const ByteVector16*>((field3 + 168));
    const ByteVector16 field7 = *reinterpret_cast<const ByteVector16*>((field3 + 184));
    const ByteVector16 field8 = *reinterpret_cast<const ByteVector16*>((field3 + 200));
    const ByteVector16 field9 = *reinterpret_cast<const ByteVector16*>((field3 + 216));
    *reinterpret_cast<ByteVector16*>((arg0 + 216)) = field9;
    *reinterpret_cast<ByteVector16*>((arg0 + 200)) = field8;
    *reinterpret_cast<ByteVector16*>((arg0 + 184)) = field7;
    *reinterpret_cast<ByteVector16*>((arg0 + 168)) = field6;
    const ByteVector16 field10 = *reinterpret_cast<const ByteVector16*>(((field3 + 264) + 0));
    const ByteVector16 field11 = *reinterpret_cast<const ByteVector16*>(((field3 + 280) + 0));
    const ByteVector16 field12 = *reinterpret_cast<const ByteVector16*>((field3 + 232));
    const ByteVector16 field13 = *reinterpret_cast<const ByteVector16*>((field3 + 248));
    *reinterpret_cast<ByteVector16*>((arg0 + 248)) = field13;
    *reinterpret_cast<ByteVector16*>((arg0 + 232)) = field12;
    *reinterpret_cast<ByteVector16*>(((arg0 + 280) + 0)) = field11;
    *reinterpret_cast<ByteVector16*>(((arg0 + 264) + 0)) = field10;
    const ByteVector16 field14 = *reinterpret_cast<const ByteVector16*>(((field3 + 296) + 0));
    const ByteVector16 field15 = *reinterpret_cast<const ByteVector16*>(((field3 + 312) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((field3 + 344));
    const ByteVector16 field17 = *reinterpret_cast<const ByteVector16*>(((field3 + 328) + 0));
    *reinterpret_cast<uint64_t*>((arg0 + 344)) = field16;
    *reinterpret_cast<ByteVector16*>(((arg0 + 328) + 0)) = field17;
    *reinterpret_cast<ByteVector16*>(((arg0 + 312) + 0)) = field15;
    *reinterpret_cast<ByteVector16*>(((arg0 + 296) + 0)) = field14;
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d5b630(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 608));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 112));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d5b650(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 608));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 120));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d5ccc0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 616));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,arg2,arg3,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d5d1f0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 616));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 104));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 616));
    const ByteVector16 field4 = *reinterpret_cast<const ByteVector16*>((field3 + 136));
    const ByteVector16 field5 = *reinterpret_cast<const ByteVector16*>((field3 + 152));
    *reinterpret_cast<ByteVector16*>((arg0 + 152)) = field5;
    *reinterpret_cast<ByteVector16*>((arg0 + 136)) = field4;
    const ByteVector16 field6 = *reinterpret_cast<const ByteVector16*>((field3 + 168));
    const ByteVector16 field7 = *reinterpret_cast<const ByteVector16*>((field3 + 184));
    const ByteVector16 field8 = *reinterpret_cast<const ByteVector16*>((field3 + 200));
    const ByteVector16 field9 = *reinterpret_cast<const ByteVector16*>((field3 + 216));
    *reinterpret_cast<ByteVector16*>((arg0 + 216)) = field9;
    *reinterpret_cast<ByteVector16*>((arg0 + 200)) = field8;
    *reinterpret_cast<ByteVector16*>((arg0 + 184)) = field7;
    *reinterpret_cast<ByteVector16*>((arg0 + 168)) = field6;
    const ByteVector16 field10 = *reinterpret_cast<const ByteVector16*>(((field3 + 264) + 0));
    const ByteVector16 field11 = *reinterpret_cast<const ByteVector16*>(((field3 + 280) + 0));
    const ByteVector16 field12 = *reinterpret_cast<const ByteVector16*>((field3 + 232));
    const ByteVector16 field13 = *reinterpret_cast<const ByteVector16*>((field3 + 248));
    *reinterpret_cast<ByteVector16*>((arg0 + 248)) = field13;
    *reinterpret_cast<ByteVector16*>((arg0 + 232)) = field12;
    *reinterpret_cast<ByteVector16*>(((arg0 + 280) + 0)) = field11;
    *reinterpret_cast<ByteVector16*>(((arg0 + 264) + 0)) = field10;
    const ByteVector16 field14 = *reinterpret_cast<const ByteVector16*>(((field3 + 296) + 0));
    const ByteVector16 field15 = *reinterpret_cast<const ByteVector16*>(((field3 + 312) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((field3 + 344));
    const ByteVector16 field17 = *reinterpret_cast<const ByteVector16*>(((field3 + 328) + 0));
    *reinterpret_cast<uint64_t*>((arg0 + 344)) = field16;
    *reinterpret_cast<ByteVector16*>(((arg0 + 328) + 0)) = field17;
    *reinterpret_cast<ByteVector16*>(((arg0 + 312) + 0)) = field15;
    *reinterpret_cast<ByteVector16*>(((arg0 + 296) + 0)) = field14;
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d5d2b0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 616));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 112));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d5d2d0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 616));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 120));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}

extern "C" uint64_t RecoveredCall_d621a0_0(uint64_t);
extern "C" uint32_t LeafData_d621a0_3;
extern "C" uint64_t LeafData_d621a0_6;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d621a0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t result0 = RecoveredCall_d621a0_0(arg0);
    const uint32_t field0 = LeafData_d621a0_3;
    if (uint32_t(uint32_t(field0)) == 0) return result0;
    const uint64_t field1 = LeafData_d621a0_6;
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field3)(field1,arg0,field3);
    return result1;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d6a620(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 40));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    if (uint32_t(result0) == 0) return result0;
    const ByteVector16 field2 = *reinterpret_cast<const ByteVector16*>((arg1 + 0));
    *reinterpret_cast<ByteVector16*>((arg0 + 16)) = field2;
    return uint32_t(1);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d6a6f0(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 8));
    if (uint32_t(uint32_t(field0)) != 1) return arg0;
    *reinterpret_cast<uint32_t*>((arg0 + 8)) = 0;
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d6aa20(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    if (uint32_t(result0) == 0) return result0;
    const ByteVector16 field2 = *reinterpret_cast<const ByteVector16*>((arg1 + 0));
    *reinterpret_cast<ByteVector16*>((arg0 + 24)) = field2;
    return uint32_t(1);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d6aa70(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 144));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 112));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d70680(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 40));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    if (uint32_t(result0) == 0) return result0;
    const ByteVector16 field2 = *reinterpret_cast<const ByteVector16*>((arg1 + 0));
    *reinterpret_cast<ByteVector16*>((arg0 + 16)) = field2;
    return uint32_t(1);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d72070(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 40));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    if (uint32_t(result0) == 0) return result0;
    const ByteVector16 field2 = *reinterpret_cast<const ByteVector16*>((arg1 + 0));
    *reinterpret_cast<ByteVector16*>((arg0 + 16)) = field2;
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((arg0 + 24));
    *reinterpret_cast<uint32_t*>((arg0 + 80)) = uint32_t(uint32_t((uint32_t(uint32_t(field3)) << 1)));
    return uint32_t(1);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d72150(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 80));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d72b60(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 40));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    if (uint32_t(result0) == 0) return result0;
    const ByteVector16 field2 = *reinterpret_cast<const ByteVector16*>((arg1 + 0));
    *reinterpret_cast<ByteVector16*>((arg0 + 16)) = field2;
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((arg1 + 8));
    *reinterpret_cast<uint32_t*>((arg0 + 76)) = uint32_t(uint32_t(field3));
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((arg1 + 8));
    *reinterpret_cast<uint32_t*>((arg0 + 104)) = uint32_t(uint32_t((uint32_t(uint32_t(field4)) << 1)));
    return uint32_t(1);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d72bb0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 80));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d74130(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 40));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    if (uint32_t(result0) == 0) return result0;
    const ByteVector16 field2 = *reinterpret_cast<const ByteVector16*>((arg1 + 0));
    *reinterpret_cast<ByteVector16*>((arg0 + 16)) = field2;
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((arg1 + 8));
    *reinterpret_cast<uint32_t*>((arg0 + 80)) = uint32_t(uint32_t(field3));
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((arg1 + 8));
    *reinterpret_cast<uint32_t*>((arg0 + 84)) = uint32_t(uint32_t((uint32_t(uint32_t(field4)) << 1)));
    return uint32_t(1);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d74d80(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 40));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    if (uint32_t(result0) == 0) return result0;
    const ByteVector16 field2 = *reinterpret_cast<const ByteVector16*>((arg1 + 0));
    *reinterpret_cast<ByteVector16*>((arg0 + 16)) = field2;
    return uint32_t(1);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d75740(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 40));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    if (uint32_t(result0) == 0) return result0;
    const ByteVector16 field2 = *reinterpret_cast<const ByteVector16*>((arg1 + 0));
    *reinterpret_cast<ByteVector16*>((arg0 + 16)) = field2;
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((arg1 + 8));
    *reinterpret_cast<uint32_t*>((arg0 + 72)) = uint32_t(uint32_t(field3));
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((arg1 + 8));
    *reinterpret_cast<uint32_t*>((arg0 + 112)) = uint32_t(uint32_t((uint32_t(uint32_t(field4)) != 1)));
    return uint32_t(1);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d760c0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 40));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    if (uint32_t(result0) == 0) return result0;
    const ByteVector16 field2 = *reinterpret_cast<const ByteVector16*>((arg1 + 0));
    *reinterpret_cast<ByteVector16*>((arg0 + 16)) = field2;
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((arg1 + 8));
    *reinterpret_cast<uint32_t*>((arg0 + 88)) = uint32_t(uint32_t(field3));
    return uint32_t(1);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d844f0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 176));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 96));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    if (uint32_t(result0) == 0) return result0;
    *reinterpret_cast<uint32_t*>((arg0 + 16)) = uint32_t(uint32_t(2));
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d84a80(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 128));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 176));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 72));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d84aa0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 128));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 176));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 80));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d870e0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 40));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    if (uint32_t(result0) == 0) return result0;
    const ByteVector16 field2 = *reinterpret_cast<const ByteVector16*>((arg1 + 0));
    *reinterpret_cast<ByteVector16*>((arg0 + 16)) = field2;
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((arg1 + 8));
    *reinterpret_cast<uint32_t*>((arg0 + 168)) = uint32_t(uint32_t((uint32_t(uint32_t(field3)) << 1)));
    return uint32_t(1);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d87850(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 136));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d87870(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 136));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d87890(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 136));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 64));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d878b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 136));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 72));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d878d0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 136));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 80));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d89f50(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 176));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 96));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    if (uint32_t(result0) == 0) return result0;
    *reinterpret_cast<uint32_t*>((arg0 + 16)) = uint32_t(uint32_t(2));
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d8bd90(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d8bdb0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d8bdd0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d8bdf0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d8be10(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d8be50(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + -40));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d8be90(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + -40));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d8bed0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + -40));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d8bf10(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + -40));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d8bf50(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + -40));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d8d980(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d8d9a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d8d9c0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 64));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d8d9e0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 72));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d8da00(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 80));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d8dd00(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 176));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 96));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    if (uint32_t(result0) == 0) return result0;
    *reinterpret_cast<uint32_t*>((arg0 + 16)) = uint32_t(uint32_t(2));
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d8f840(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 128));
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 32));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d8f860(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 128));
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 40));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}

extern "C" uint64_t LeafTarget_daac90(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_daac90(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 1176));
    if (field0 == 0) return field0;
    return LeafTarget_daac90(field0,arg1);
}

extern "C" uint64_t LeafTarget_dafb60(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dafb60(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (arg1 == 0) return arg0;
    return LeafTarget_dafb60(arg0,arg1);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_db5830(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field0)(field1,field2,field0);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_db5870(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field0)(field1,field2,field0);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_db58b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field0)(field1,field2,field0);
    return result0;
}

extern "C" unsigned char LeafData_db92d0_0[];
extern "C" uint64_t LeafTarget_db92d0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_db92d0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_db92d0_0);
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 32));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (field1 == 0) return arg0;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + -12));
    return LeafTarget_db92d0(field2);
}

extern "C" uint64_t RecoveredCall_dbb7a0_0(uint64_t,uint64_t);
extern "C" uint64_t LeafTarget_dbb7a0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dbb7a0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_dbb7a0_0(arg0,0);
    if (result0 == 0) return result0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((result0 + -12));
    return LeafTarget_dbb7a0(field0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dc54b0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dd8230(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dd8b30(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dd94f0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dd9b40(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dda0c0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ddb9b0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ddc440(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ddc9a0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ddcdb0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 120));
    if (field0 == 0) return arg0;
    *reinterpret_cast<uint64_t*>((arg0 + 120)) = 0;
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ddd340(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dddf60(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dde2a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (arg1 == 0) return arg0;
    *reinterpret_cast<uint32_t*>((arg1 + 0)) = uint32_t(uint32_t(1));
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dde530(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (arg1 == 0) return arg0;
    const ByteVector16 field0 = *reinterpret_cast<const ByteVector16*>((arg0 + 64));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    *reinterpret_cast<uint64_t*>((arg1 + 16)) = field1;
    *reinterpret_cast<ByteVector16*>((arg1 + 0)) = field0;
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dde560(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dde980(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ddeda0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (arg1 == 0) return arg0;
    const ByteVector16 field0 = *reinterpret_cast<const ByteVector16*>((arg0 + 64));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    *reinterpret_cast<uint64_t*>((arg1 + 16)) = field1;
    *reinterpret_cast<ByteVector16*>((arg1 + 0)) = field0;
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ddedd0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de1900(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de36e0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (arg1 == 0) return arg0;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 600));
    *reinterpret_cast<uint32_t*>((arg1 + 0)) = uint32_t(uint32_t(field0));
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de4140(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de4530(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de4920(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de4d10(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de4ef0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (arg1 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = field0;
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de5080(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de5460(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (arg1 == 0) return arg0;
    const ByteVector16 field0 = *reinterpret_cast<const ByteVector16*>((arg0 + 56));
    const ByteVector16 field1 = *reinterpret_cast<const ByteVector16*>((arg0 + 72));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    *reinterpret_cast<uint64_t*>((arg1 + 32)) = field2;
    *reinterpret_cast<ByteVector16*>(((arg1 + 0) + 0)) = field0;
    *reinterpret_cast<ByteVector16*>(((arg1 + 0) + 16)) = field1;
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de5490(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de58b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (arg1 == 0) return arg0;
    const ByteVector16 field0 = *reinterpret_cast<const ByteVector16*>((arg0 + 64));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((arg0 + 80));
    *reinterpret_cast<uint32_t*>((arg1 + 16)) = uint32_t(uint32_t(field1));
    *reinterpret_cast<ByteVector16*>((arg1 + 0)) = field0;
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de58e0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de6e10(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de9980(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de9ea0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_debd00(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (arg1 == 0) return arg0;
    const ByteVector16 field0 = *reinterpret_cast<const ByteVector16*>((arg0 + 64));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    *reinterpret_cast<uint64_t*>((arg1 + 16)) = field1;
    *reinterpret_cast<ByteVector16*>((arg1 + 0)) = field0;
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_debd30(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dec020(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dec0f0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (arg1 == 0) return arg0;
    const ByteVector16 field0 = *reinterpret_cast<const ByteVector16*>((arg0 + 56));
    const ByteVector16 field1 = *reinterpret_cast<const ByteVector16*>((arg0 + 72));
    *reinterpret_cast<ByteVector16*>(((arg1 + 0) + 0)) = field0;
    *reinterpret_cast<ByteVector16*>(((arg1 + 0) + 16)) = field1;
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dec3d0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dec4a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (arg1 == 0) return arg0;
    const ByteVector16 field0 = *reinterpret_cast<const ByteVector16*>((arg0 + 56));
    const ByteVector16 field1 = *reinterpret_cast<const ByteVector16*>((arg0 + 72));
    const ByteVector16 field2 = *reinterpret_cast<const ByteVector16*>((arg0 + 84));
    *reinterpret_cast<ByteVector16*>((arg1 + 28)) = field2;
    *reinterpret_cast<ByteVector16*>(((arg1 + 0) + 0)) = field0;
    *reinterpret_cast<ByteVector16*>(((arg1 + 0) + 16)) = field1;
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dec780(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dec850(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (arg1 == 0) return arg0;
    const ByteVector16 field0 = *reinterpret_cast<const ByteVector16*>((arg0 + 56));
    const ByteVector16 field1 = *reinterpret_cast<const ByteVector16*>((arg0 + 72));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((arg0 + 88));
    *reinterpret_cast<uint32_t*>((arg1 + 32)) = uint32_t(uint32_t(field2));
    *reinterpret_cast<ByteVector16*>(((arg1 + 0) + 0)) = field0;
    *reinterpret_cast<ByteVector16*>(((arg1 + 0) + 16)) = field1;
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dec900(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (arg1 == 0) return arg0;
    *reinterpret_cast<uint32_t*>((arg1 + 0)) = uint32_t(uint32_t(2));
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_decab0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (arg1 == 0) return arg0;
    *reinterpret_cast<uint32_t*>((arg1 + 0)) = uint32_t(uint32_t(3));
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_decc60(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (arg1 == 0) return arg0;
    *reinterpret_cast<uint32_t*>((arg1 + 0)) = uint32_t(uint32_t(4));
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ded280(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (arg1 == 0) return arg0;
    const ByteVector16 field0 = *reinterpret_cast<const ByteVector16*>((arg0 + 64));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((arg0 + 80));
    *reinterpret_cast<uint32_t*>((arg1 + 16)) = uint32_t(uint32_t(field1));
    *reinterpret_cast<ByteVector16*>((arg1 + 0)) = field0;
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ded2b0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ded6a0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_df18b0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_df67b0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_df7480(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_df7970(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_df9f90(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dfab30(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dfc6b0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 104));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((arg0 + 728));
    if (uint32_t(uint32_t((uint32_t(uint32_t(field2)) & 96))) != 64) return result0;
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 112));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field4)(arg0);
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 120));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field6)(arg0);
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 128));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field8)(arg0,field8);
    return result3;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dfff30(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}

extern "C" uint64_t RecoveredCall_e0cd50_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e0cd50(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    if (field0 == 0) return field0;
    const uint64_t result0 = RecoveredCall_e0cd50_0(field0);
    return uint32_t((uint32_t(result0) == 0));
}

extern "C" uint64_t RecoveredCall_e0e040_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e0e040(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 824));
    if (field0 == 0) return field0;
    const uint64_t result0 = RecoveredCall_e0e040_0(field0);
    *reinterpret_cast<uint64_t*>((arg0 + 824)) = 0;
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e1e040(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field1)(field0,arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e29b70(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    *reinterpret_cast<uint32_t*>((arg0 + 48)) = 0;
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    if (field1 == 0) return field0;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field1);
    *reinterpret_cast<uint64_t*>((arg0 + 56)) = 0;
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e2d770(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (arg1 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field0)(arg0,arg1,field0);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e2fbc0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (arg1 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field0)(arg0,arg1,field0);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e308e0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field1)(field0,arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e33c20(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    *reinterpret_cast<uint32_t*>((arg0 + 8)) = 0;
    *reinterpret_cast<uint32_t*>((arg0 + 416)) = 0;
    *reinterpret_cast<uint32_t*>((arg0 + 824)) = 0;
    *reinterpret_cast<uint32_t*>((arg0 + 1600)) = 0;
    *reinterpret_cast<uint32_t*>((arg0 + 2376)) = 0;
    *reinterpret_cast<uint32_t*>((arg0 + 3152)) = 0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field1)(field0,arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e45870(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    const ByteVector16 field2 = *reinterpret_cast<const ByteVector16*>(((field1 + 0) + 0));
    const ByteVector16 field3 = *reinterpret_cast<const ByteVector16*>(((field1 + 0) + 16));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field1 + 32));
    *reinterpret_cast<ByteVector16*>((field0 + 216)) = field3;
    *reinterpret_cast<uint64_t*>((field0 + 232)) = field4;
    *reinterpret_cast<ByteVector16*>((field0 + 200)) = field2;
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e47ce0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    const ByteVector16 field2 = *reinterpret_cast<const ByteVector16*>(((field1 + 0) + 0));
    const ByteVector16 field3 = *reinterpret_cast<const ByteVector16*>(((field1 + 0) + 16));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field1 + 32));
    *reinterpret_cast<ByteVector16*>((field0 + 216)) = field3;
    *reinterpret_cast<uint64_t*>((field0 + 232)) = field4;
    *reinterpret_cast<ByteVector16*>((field0 + 200)) = field2;
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e48240(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    const ByteVector16 field2 = *reinterpret_cast<const ByteVector16*>(((field1 + 0) + 0));
    const ByteVector16 field3 = *reinterpret_cast<const ByteVector16*>(((field1 + 0) + 16));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field1 + 32));
    *reinterpret_cast<ByteVector16*>((field0 + 216)) = field3;
    *reinterpret_cast<uint64_t*>((field0 + 232)) = field4;
    *reinterpret_cast<ByteVector16*>((field0 + 200)) = field2;
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e66da0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 896));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 72));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e95970(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}

extern "C" uint64_t LeafTarget_e9b740(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e9b740(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    return LeafTarget_e9b740(arg0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e9bf00(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e9c4b0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e9c640(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e9cab0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}

extern "C" uint64_t LeafTarget_e9cc80(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e9cc80(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    return LeafTarget_e9cc80(arg0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e9e080(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e9e7d0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e9e960(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e9f1b0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}

extern "C" uint64_t LeafTarget_e9f380(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e9f380(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    return LeafTarget_e9f380(arg0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ea05b0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ea0a70(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ea0c00(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ea0f40(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ea12e0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_eac3c0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 328));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 192));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_f08630(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 187));
    *reinterpret_cast<uint8_t*>((arg0 + 187)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) | 1)));
    return arg0;
}

extern "C" uint64_t RecoveredCall_f2f8b0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_f2f8b0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (field0 == 0) return field0;
    const uint64_t result0 = RecoveredCall_f2f8b0_0(field0);
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = 0;
    return result0;
}

extern "C" uint64_t LeafTarget_f5a580(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_f5a580(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (arg1 == 0) return arg0;
    return LeafTarget_f5a580(arg1);
}

extern "C" uint64_t LeafTarget_f6af50(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_f6af50(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (arg1 == 0) return arg0;
    return LeafTarget_f6af50(arg1,0);
}

extern "C" uint64_t LeafTarget_f888a0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_f888a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (arg1 == 0) return arg0;
    return LeafTarget_f888a0(arg1);
}
