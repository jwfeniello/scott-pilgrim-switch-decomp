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
extern "C" unsigned char LeafData_37030_1[];
extern "C" uint64_t RecoveredCall_37030_0(uint64_t);
extern "C" uint64_t LeafData_37030_6;
extern "C" uint64_t RecoveredCall_37030_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_37030_2(uint64_t);
extern "C" uint64_t LeafData_37030_13;
extern "C" uint64_t LeafTarget_37030(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_37030(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t result0 = RecoveredCall_37030_0(reinterpret_cast<uintptr_t>(LeafData_37030_1));
    const uint64_t field0 = LeafData_37030_6;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t result1 = RecoveredCall_37030_1(field1,(arg0 - 24));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + -24));
    const uint64_t result2 = RecoveredCall_37030_2(field2);
    const uint64_t field3 = LeafData_37030_13;
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    *reinterpret_cast<uint64_t*>((field3 + 0)) = (field4 - 1);
    return LeafTarget_37030(reinterpret_cast<uintptr_t>(LeafData_37030_1));
}

extern "C" unsigned char LeafData_370a0_1[];
extern "C" uint64_t RecoveredCall_370a0_0(uint64_t);
extern "C" uint64_t LeafData_370a0_6;
extern "C" uint64_t RecoveredCall_370a0_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_370a0_2(uint64_t);
extern "C" uint64_t LeafData_370a0_13;
extern "C" uint64_t LeafTarget_370a0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_370a0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t result0 = RecoveredCall_370a0_0(reinterpret_cast<uintptr_t>(LeafData_370a0_1));
    const uint64_t field0 = LeafData_370a0_6;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t result1 = RecoveredCall_370a0_1(field1,(arg0 - 24));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + -24));
    const uint64_t result2 = RecoveredCall_370a0_2(field2);
    const uint64_t field3 = LeafData_370a0_13;
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    *reinterpret_cast<uint64_t*>((field3 + 0)) = (field4 - 1);
    return LeafTarget_370a0(reinterpret_cast<uintptr_t>(LeafData_370a0_1));
}

extern "C" uint64_t LeafTarget_588a0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_588a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (arg1 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg1,arg1);
    return LeafTarget_588a0(arg1);
}

extern "C" uint64_t LeafData_70820_0;
extern "C" uint64_t RecoveredCall_70820_1(uint64_t);
extern "C" uint64_t RecoveredCall_70820_3(uint64_t);
extern "C" void LeafTarget_70820(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_70820(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_70820_0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    *reinterpret_cast<uint64_t*>(((arg0 + 0) + 0)) = (field0 + 16);
    *reinterpret_cast<uint64_t*>(((arg0 + 0) + 8)) = 0;
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 0));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    const uint64_t result1 = RecoveredCall_70820_1(field1);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = 0;
    if (!(field4 == 0)) {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field6)(field4);
    const uint64_t result3 = RecoveredCall_70820_3(field4);
    }
    LeafTarget_70820(arg0);
}

extern "C" uint64_t LeafData_77c90_0;
extern "C" uint64_t RecoveredCall_77c90_0(uint64_t);
extern "C" uint64_t LeafData_77c90_14;
extern "C" void LeafTarget_77c90(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_77c90(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_77c90_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((arg0 + 20));
    if (!((uint32_t(uint32_t(field1)) + 1) == 0)) {
    const uint64_t result0 = RecoveredCall_77c90_0(uint32_t(field1));
    *reinterpret_cast<uint8_t*>((arg0 + 12)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = -1;
    }
    *reinterpret_cast<uint32_t*>((arg0 + 8)) = 0;
    const uint64_t field2 = LeafData_77c90_14;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field2 + 16);
    LeafTarget_77c90(arg0);
}

extern "C" uint64_t LeafData_7dc00_0;
extern "C" uint64_t RecoveredCall_7dc00_0(uint64_t);
extern "C" void LeafTarget_7dc00(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7dc00(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_7dc00_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    if (!(field1 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 80)) = field1;
    const uint64_t result0 = RecoveredCall_7dc00_0(field1);
    }
    LeafTarget_7dc00((arg0 + 16));
}

extern "C" uint64_t LeafData_f89f0_0;
extern "C" uint64_t RecoveredCall_f89f0_0(uint64_t);
extern "C" uint64_t RecoveredCall_f89f0_1(uint64_t);
extern "C" void LeafTarget_f89f0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_f89f0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_f89f0_0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 304));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    *reinterpret_cast<uint64_t*>((arg0 + 304)) = 0;
    if (!(field1 == 0)) {
    const uint64_t result0 = RecoveredCall_f89f0_0(field1);
    const uint64_t result1 = RecoveredCall_f89f0_1(field1);
    }
    LeafTarget_f89f0(arg0);
}

extern "C" uint64_t LeafData_f8a40_0;
extern "C" uint64_t RecoveredCall_f8a40_0(uint64_t);
extern "C" uint64_t RecoveredCall_f8a40_1(uint64_t);
extern "C" uint64_t RecoveredCall_f8a40_2(uint64_t);
extern "C" void LeafTarget_f8a40(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_f8a40(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_f8a40_0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 304));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    *reinterpret_cast<uint64_t*>((arg0 + 304)) = 0;
    if (!(field1 == 0)) {
    const uint64_t result0 = RecoveredCall_f8a40_0(field1);
    const uint64_t result1 = RecoveredCall_f8a40_1(field1);
    }
    const uint64_t result2 = RecoveredCall_f8a40_2(arg0);
    LeafTarget_f8a40(arg0);
}

extern "C" uint64_t LeafData_fbd00_0;
extern "C" void LeafTarget_fbd00(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_fbd00(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_fbd00_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = 0;
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    LeafTarget_fbd00(arg0);
}

extern "C" uint64_t LeafData_14f0f0_0;
extern "C" uint64_t RecoveredCall_14f0f0_0(uint64_t);
extern "C" void LeafTarget_14f0f0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_14f0f0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_14f0f0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((arg0 + 32));
    if (!(uint32_t(uint32_t(field1)) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field2 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = 0;
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((field2 + -4));
    const uint64_t result0 = RecoveredCall_14f0f0_0((field2 - uint32_t(field3)));
    }
    }
    LeafTarget_14f0f0(arg0);
}

extern "C" uint64_t LeafData_155dc0_0;
extern "C" void LeafTarget_155dc0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_155dc0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_155dc0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 288));
    *reinterpret_cast<uint64_t*>((arg0 + 288)) = 0;
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    LeafTarget_155dc0(arg0);
}

extern "C" uint64_t LeafData_155e10_0;
extern "C" uint64_t RecoveredCall_155e10_1(uint64_t);
extern "C" void LeafTarget_155e10(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_155e10(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_155e10_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 288));
    *reinterpret_cast<uint64_t*>((arg0 + 288)) = 0;
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    const uint64_t result1 = RecoveredCall_155e10_1(arg0);
    LeafTarget_155e10(arg0);
}

extern "C" uint64_t LeafData_15b540_0;
extern "C" uint64_t RecoveredCall_15b540_0(uint64_t);
extern "C" void LeafTarget_15b540(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_15b540(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_15b540_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((arg0 + 16));
    if (!((uint32_t(uint32_t(field1)) & 0x1ull) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    const uint64_t result0 = RecoveredCall_15b540_0(field2);
    }
    LeafTarget_15b540(arg0);
}

extern "C" uint64_t LeafData_15c700_0;
extern "C" uint64_t RecoveredCall_15c700_0(uint64_t);
extern "C" uint64_t RecoveredCall_15c700_1(uint64_t);
extern "C" uint64_t RecoveredCall_15c700_2(uint64_t);
extern "C" void LeafTarget_15c700(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_15c700(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_15c700_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t result0 = RecoveredCall_15c700_0((arg0 + 312));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 288));
    if (!(field1 == 0)) {
    const uint64_t result1 = RecoveredCall_15c700_1((arg0 + 288));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg0 + 288) + 0));
    const uint64_t result2 = RecoveredCall_15c700_2(field2);
    }
    LeafTarget_15c700(arg0);
}

extern "C" uint64_t LeafData_15c760_0;
extern "C" uint64_t RecoveredCall_15c760_0(uint64_t);
extern "C" uint64_t RecoveredCall_15c760_1(uint64_t);
extern "C" uint64_t RecoveredCall_15c760_2(uint64_t);
extern "C" uint64_t RecoveredCall_15c760_3(uint64_t);
extern "C" void LeafTarget_15c760(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_15c760(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_15c760_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t result0 = RecoveredCall_15c760_0((arg0 + 312));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 288));
    if (!(field1 == 0)) {
    const uint64_t result1 = RecoveredCall_15c760_1((arg0 + 288));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg0 + 288) + 0));
    const uint64_t result2 = RecoveredCall_15c760_2(field2);
    }
    const uint64_t result3 = RecoveredCall_15c760_3(arg0);
    LeafTarget_15c760(arg0);
}

extern "C" uint64_t LeafData_15f810_0;
extern "C" uint64_t RecoveredCall_15f810_0(uint64_t);
extern "C" void LeafTarget_15f810(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_15f810(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_15f810_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((arg0 + 32));
    if (!(uint32_t(uint32_t(field1)) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field2 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = 0;
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((field2 + -4));
    const uint64_t result0 = RecoveredCall_15f810_0((field2 - uint32_t(field3)));
    }
    }
    LeafTarget_15f810(arg0);
}

extern "C" uint64_t LeafData_15ffe0_0;
extern "C" uint64_t RecoveredCall_15ffe0_0(uint64_t);
extern "C" void LeafTarget_15ffe0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_15ffe0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_15ffe0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((arg0 + 64));
    if (!((uint32_t(uint32_t(field1)) & 0x1ull) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t result0 = RecoveredCall_15ffe0_0(field2);
    }
    LeafTarget_15ffe0(arg0);
}

extern "C" uint64_t LeafData_160020_0;
extern "C" uint64_t RecoveredCall_160020_0(uint64_t);
extern "C" uint64_t RecoveredCall_160020_1(uint64_t);
extern "C" void LeafTarget_160020(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_160020(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_160020_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((arg0 + 64));
    if (!((uint32_t(uint32_t(field1)) & 0x1ull) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t result0 = RecoveredCall_160020_0(field2);
    }
    const uint64_t result1 = RecoveredCall_160020_1(arg0);
    LeafTarget_160020(arg0);
}

extern "C" uint64_t LeafData_161a30_0;
extern "C" uint64_t RecoveredCall_161a30_0(uint64_t);
extern "C" uint64_t LeafData_161a30_6;
extern "C" uint64_t RecoveredCall_161a30_1(uint64_t);
extern "C" void LeafTarget_161a30(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_161a30(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_161a30_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t result0 = RecoveredCall_161a30_0(arg0);
    const uint64_t field1 = LeafData_161a30_6;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field1 + 16);
    if (!(field2 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 80)) = field2;
    const uint64_t result1 = RecoveredCall_161a30_1(field2);
    }
    LeafTarget_161a30((arg0 + 16));
}

extern "C" uint64_t LeafData_161a90_0;
extern "C" uint64_t RecoveredCall_161a90_0(uint64_t);
extern "C" uint64_t LeafData_161a90_6;
extern "C" uint64_t RecoveredCall_161a90_1(uint64_t);
extern "C" uint64_t RecoveredCall_161a90_2(uint64_t);
extern "C" void LeafTarget_161a90(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_161a90(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_161a90_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t result0 = RecoveredCall_161a90_0(arg0);
    const uint64_t field1 = LeafData_161a90_6;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field1 + 16);
    if (!(field2 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 80)) = field2;
    const uint64_t result1 = RecoveredCall_161a90_1(field2);
    }
    const uint64_t result2 = RecoveredCall_161a90_2((arg0 + 16));
    LeafTarget_161a90(arg0);
}

extern "C" uint64_t LeafData_192a00_0;
extern "C" uint64_t RecoveredCall_192a00_0(uint64_t);
extern "C" void LeafTarget_192a00(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_192a00(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_192a00_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field1 == 0)) {
    const uint64_t result0 = RecoveredCall_192a00_0(field1);
    }
    LeafTarget_192a00(arg0);
}

extern "C" uint64_t LeafData_280060_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_280060(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_280060_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = 0;
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    *reinterpret_cast<uint64_t*>((arg0 + 40)) = 0;
    if (field4 == 0) return field4;
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field6)(field4,field6);
    return result1;
}

extern "C" uint64_t LeafData_280570_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_280570(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_280570_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = 0;
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    *reinterpret_cast<uint64_t*>((arg0 + 40)) = 0;
    if (field4 == 0) return field4;
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field6)(field4,field6);
    return result1;
}

extern "C" uint64_t LeafData_280b00_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_280b00(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_280b00_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    *reinterpret_cast<uint64_t*>((arg0 + 56)) = 0;
    return result0;
}

extern "C" uint64_t LeafData_283270_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_283270(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_283270_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    *reinterpret_cast<uint64_t*>((arg0 + 40)) = 0;
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    if (field4 == 0) return field4;
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field6)(field4,field6);
    return result1;
}

extern "C" uint64_t LeafData_2bf970_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2bf970(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_2bf970_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    *reinterpret_cast<uint64_t*>((arg0 + 96)) = 0;
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    if (field4 == 0) return field4;
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field6)(field4);
    *reinterpret_cast<uint64_t*>((arg0 + 80)) = 0;
    return result1;
}

extern "C" uint64_t LeafData_2e67d0_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2e67d0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_2e67d0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    *reinterpret_cast<uint64_t*>((arg0 + 80)) = 0;
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    *reinterpret_cast<uint64_t*>((arg0 + 72)) = 0;
    if (field4 == 0) return field4;
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field6)(field4,field6);
    return result1;
}

extern "C" uint64_t LeafData_2ea250_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2ea250(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_2ea250_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    *reinterpret_cast<uint64_t*>((arg0 + 72)) = 0;
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    *reinterpret_cast<uint64_t*>((arg0 + 64)) = 0;
    if (!(field4 == 0)) {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field6)(field4);
    }
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    *reinterpret_cast<uint64_t*>((arg0 + 56)) = 0;
    if (field7 == 0) return field7;
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field9)(field7,field9);
    return result2;
}

extern "C" uint64_t LeafData_2ea680_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2ea680(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_2ea680_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    *reinterpret_cast<uint64_t*>((arg0 + 72)) = 0;
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    *reinterpret_cast<uint64_t*>((arg0 + 64)) = 0;
    if (!(field4 == 0)) {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field6)(field4);
    }
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    *reinterpret_cast<uint64_t*>((arg0 + 56)) = 0;
    if (field7 == 0) return field7;
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field9)(field7,field9);
    return result2;
}

extern "C" uint64_t LeafData_2ebd30_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2ebd30(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_2ebd30_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    *reinterpret_cast<uint64_t*>((arg0 + 72)) = 0;
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    *reinterpret_cast<uint64_t*>((arg0 + 64)) = 0;
    if (field4 == 0) return field4;
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field6)(field4,field6);
    return result1;
}

extern "C" uint64_t LeafData_3610e0_0;
extern "C" void LeafTarget_3610e0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_3610e0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_3610e0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 1008));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    *reinterpret_cast<uint64_t*>((arg0 + 1008)) = 0;
    }
    LeafTarget_3610e0((arg0 + 48));
}

extern "C" uint64_t LeafData_390150_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_390150(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_390150_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = 0;
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    *reinterpret_cast<uint64_t*>((arg0 + 40)) = 0;
    if (field4 == 0) return field4;
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field6)(field4,field6);
    return result1;
}

extern "C" uint64_t LeafData_3c2c00_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_3c2c00(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_3c2c00_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    *reinterpret_cast<uint64_t*>((arg0 + 64)) = 0;
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    *reinterpret_cast<uint64_t*>((arg0 + 56)) = 0;
    if (field4 == 0) return field4;
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field6)(field4,field6);
    return result1;
}

extern "C" uint64_t LeafData_3c6dc0_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_3c6dc0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_3c6dc0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = 0;
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    *reinterpret_cast<uint64_t*>((arg0 + 40)) = 0;
    if (field4 == 0) return field4;
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field6)(field4,field6);
    return result1;
}

extern "C" uint64_t LeafData_455890_0;
extern "C" void LeafTarget_455890(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_455890(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_455890_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = 0;
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    LeafTarget_455890(arg0);
}

extern "C" uint64_t LeafData_4558e0_0;
extern "C" void LeafTarget_4558e0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4558e0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_4558e0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = 0;
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    LeafTarget_4558e0(arg0);
}

extern "C" uint64_t LeafData_45de80_0;
extern "C" void LeafTarget_45de80(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_45de80(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_45de80_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 536));
    *reinterpret_cast<uint64_t*>((arg0 + 536)) = 0;
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    LeafTarget_45de80(arg0);
}

extern "C" uint64_t LeafData_45ded0_0;
extern "C" uint64_t RecoveredCall_45ded0_1(uint64_t);
extern "C" void LeafTarget_45ded0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_45ded0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_45ded0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 536));
    *reinterpret_cast<uint64_t*>((arg0 + 536)) = 0;
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    const uint64_t result1 = RecoveredCall_45ded0_1(arg0);
    LeafTarget_45ded0(arg0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4c9f80(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 536));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 72));
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    *reinterpret_cast<uint64_t*>((field0 + 72)) = 0;
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 536));
    *reinterpret_cast<uint64_t*>((field4 + 72)) = 0;
    return result0;
}

extern "C" uint64_t LeafData_4d6670_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4d6670(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_4d6670_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    if (field4 == 0) return field4;
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field6)(field4,field6);
    return result1;
}

extern "C" uint64_t LeafData_4d66e0_0;
extern "C" void LeafTarget_4d66e0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4d66e0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_4d66e0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    if (!(field4 == 0)) {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field6)(field4);
    }
    LeafTarget_4d66e0(arg0);
}

extern "C" uint64_t LeafTarget_4d6cc0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4d6cc0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    return LeafTarget_4d6cc0(field0);
}

extern "C" uint64_t LeafTarget_4d6da0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4d6da0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    return LeafTarget_4d6da0(field0);
}

extern "C" uint64_t LeafTarget_4d6e90(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4d6e90(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    return LeafTarget_4d6e90(field0);
}

extern "C" uint64_t LeafTarget_4d76f0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4d76f0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    return LeafTarget_4d76f0(field0);
}

extern "C" uint64_t LeafTarget_4d85e0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4d85e0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    return LeafTarget_4d85e0(field0);
}

extern "C" uint64_t LeafTarget_4d9130(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4d9130(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    return LeafTarget_4d9130(field0);
}

extern "C" uint64_t LeafTarget_4dae60(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4dae60(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    return LeafTarget_4dae60(field0);
}

extern "C" uint64_t LeafTarget_4dc6e0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4dc6e0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    return LeafTarget_4dc6e0(field0);
}

extern "C" uint64_t LeafTarget_4de3c0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4de3c0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    return LeafTarget_4de3c0(field0);
}

extern "C" uint64_t LeafTarget_4dfc10(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4dfc10(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    return LeafTarget_4dfc10(field0);
}

extern "C" uint64_t LeafData_4dfe30_0;
extern "C" void LeafTarget_4dfe30(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4dfe30(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_4dfe30_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    LeafTarget_4dfe30(arg0);
}

extern "C" uint64_t LeafTarget_4e1ab0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4e1ab0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    return LeafTarget_4e1ab0(field0);
}

extern "C" uint64_t LeafTarget_4e3440(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4e3440(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    return LeafTarget_4e3440(field0);
}

extern "C" uint64_t LeafData_4e34b0_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4e34b0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_4e34b0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    return result0;
}

extern "C" uint64_t LeafData_4e3500_0;
extern "C" void LeafTarget_4e3500(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4e3500(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_4e3500_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    LeafTarget_4e3500(arg0);
}

extern "C" uint64_t LeafData_4e3550_0;
extern "C" void LeafTarget_4e3550(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4e3550(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_4e3550_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    LeafTarget_4e3550(arg0);
}

extern "C" uint64_t LeafTarget_4e4ed0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4e4ed0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    return LeafTarget_4e4ed0(field0);
}

extern "C" uint64_t LeafData_4e5080_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4e5080(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_4e5080_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    return result0;
}

extern "C" uint64_t LeafData_4e50d0_0;
extern "C" void LeafTarget_4e50d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4e50d0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_4e50d0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    LeafTarget_4e50d0(arg0);
}

extern "C" uint64_t LeafTarget_4e6a40(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4e6a40(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    return LeafTarget_4e6a40(field0);
}

extern "C" uint64_t LeafData_4e6ab0_0;
extern "C" void LeafTarget_4e6ab0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4e6ab0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_4e6ab0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    if (!(field4 == 0)) {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field6)(field4);
    }
    LeafTarget_4e6ab0(arg0);
}

extern "C" uint64_t LeafTarget_4e78a0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4e78a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    return LeafTarget_4e78a0(field0);
}

extern "C" uint64_t LeafTarget_4e9460(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4e9460(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    return LeafTarget_4e9460(field0);
}

extern "C" uint64_t RecoveredCall_4eb590_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4eb590(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (!(arg0 == arg1)) {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (!(field0 == 0)) {
    const uint64_t result0 = RecoveredCall_4eb590_0((field0 - 4));
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = field1;
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = 0;
    }
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4ed680(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    if (field0 == 0) return result0;
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field4)(field0,field4);
    return result1;
}

extern "C" uint64_t LeafData_4eddc0_0;
extern "C" uint64_t LeafData_4eddc0_7;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4eddc0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_4eddc0_0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    const uint64_t field4 = LeafData_4eddc0_7;
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    if (field5 == 0) return field5;
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field7)(field5,field7);
    return result1;
}

extern "C" uint64_t LeafData_4ee750_0;
extern "C" uint64_t RecoveredCall_4ee750_0(uint64_t);
extern "C" void LeafTarget_4ee750(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4ee750(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_4ee750_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field1 == 0)) {
    const uint64_t result0 = RecoveredCall_4ee750_0(field1);
    }
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    LeafTarget_4ee750((arg0 + 8));
}

extern "C" uint64_t RecoveredCall_4f2810_0(uint64_t);
extern "C" uint64_t RecoveredCall_4f2810_1(uint64_t);
extern "C" uint64_t RecoveredCall_4f2810_2(uint64_t);
extern "C" void LeafTarget_4f2810(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4f2810(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    const uint64_t result0 = RecoveredCall_4f2810_0((field0 - 4));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t result1 = RecoveredCall_4f2810_1((field2 - 4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    if (!(field3 == 0)) {
    const uint64_t result2 = RecoveredCall_4f2810_2(field3);
    }
    LeafTarget_4f2810((arg0 + 8));
}

extern "C" uint64_t LeafData_4f3d00_0;
extern "C" uint64_t RecoveredCall_4f3d00_0(uint64_t);
extern "C" uint64_t RecoveredCall_4f3d00_1(uint64_t);
extern "C" void LeafTarget_4f3d00(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4f3d00(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_4f3d00_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t result0 = RecoveredCall_4f3d00_0(arg0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    if (!(field1 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 56)) = field1;
    const uint64_t result1 = RecoveredCall_4f3d00_1(field1);
    }
    LeafTarget_4f3d00((arg0 + 8));
}

extern "C" uint64_t LeafData_4f5410_0;
extern "C" uint64_t RecoveredCall_4f5410_0(uint64_t);
extern "C" void LeafTarget_4f5410(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4f5410(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_4f5410_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    if (!(field1 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    }
    const uint64_t result0 = RecoveredCall_4f5410_0((arg0 + 16));
    LeafTarget_4f5410(arg0);
}

extern "C" uint64_t RecoveredCall_4f6680_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_4f6680_1(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4f6680(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    const uint64_t result0 = RecoveredCall_4f6680_0(field0,field1);
    if (!((uint32_t(result0) & 0x1ull) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    const uint64_t result1 = RecoveredCall_4f6680_1(field2);
    }
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 24));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(field3);
    *reinterpret_cast<uint64_t*>((arg0 + 64)) = 0;
    return uint32_t(1);
}

extern "C" uint64_t RecoveredCall_4f8720_0(uint64_t);
extern "C" uint64_t RecoveredCall_4f8720_1(uint64_t);
extern "C" uint64_t RecoveredCall_4f8720_2(uint64_t);
extern "C" uint64_t RecoveredCall_4f8720_3(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_4f8720_4(uint64_t,uint64_t);
extern "C" void LeafTarget_4f8720(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4f8720(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    if (!(field0 == 0)) {
    const uint64_t result0 = RecoveredCall_4f8720_0((field0 - 4));
    *reinterpret_cast<uint64_t*>((arg0 + 88)) = 0;
    *reinterpret_cast<uint8_t*>((arg0 + 97)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (!(field1 == 0)) {
    const uint64_t result1 = RecoveredCall_4f8720_1(field1);
    const uint64_t result2 = RecoveredCall_4f8720_2(field1);
    }
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    const uint64_t result3 = RecoveredCall_4f8720_3((arg0 + 64),field2);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    const uint64_t result4 = RecoveredCall_4f8720_4((arg0 + 40),field3);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    LeafTarget_4f8720((arg0 + 16),field4);
}

extern "C" uint64_t RecoveredCall_4f92d0_0(uint64_t);
extern "C" uint64_t RecoveredCall_4f92d0_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4f92d0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 96));
    if (!(uint32_t(uint32_t(field0)) != 0)) {
    const uint64_t result0 = RecoveredCall_4f92d0_0(arg0);
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t result1 = RecoveredCall_4f92d0_1(field1,arg1);
    *reinterpret_cast<uint8_t*>((arg0 + 97)) = 0;
    return uint32_t(1);
}

extern "C" uint64_t LeafData_4fd290_0;
extern "C" uint64_t RecoveredCall_4fd290_0(uint64_t);
extern "C" void LeafTarget_4fd290(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4fd290(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_4fd290_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((arg0 + 64));
    if (!((uint32_t(uint32_t(field1)) & 0x1ull) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t result0 = RecoveredCall_4fd290_0(field2);
    }
    LeafTarget_4fd290(arg0);
}

extern "C" uint64_t LeafData_4fd2d0_0;
extern "C" uint64_t RecoveredCall_4fd2d0_0(uint64_t);
extern "C" uint64_t RecoveredCall_4fd2d0_1(uint64_t);
extern "C" void LeafTarget_4fd2d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4fd2d0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_4fd2d0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((arg0 + 64));
    if (!((uint32_t(uint32_t(field1)) & 0x1ull) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t result0 = RecoveredCall_4fd2d0_0(field2);
    }
    const uint64_t result1 = RecoveredCall_4fd2d0_1(arg0);
    LeafTarget_4fd2d0(arg0);
}

extern "C" uint64_t RecoveredCall_4fe780_1(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4fe780(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 128));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    if (!(result0 == 0)) {
    const uint64_t result1 = RecoveredCall_4fe780_1(result0);
    }
    return result0;
}

extern "C" uint64_t LeafData_504790_0;
extern "C" uint64_t RecoveredCall_504790_0(uint64_t);
extern "C" uint64_t RecoveredCall_504790_1(uint64_t);
extern "C" void LeafTarget_504790(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_504790(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_504790_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    if (!(field1 == 0)) {
    const uint64_t result0 = RecoveredCall_504790_0(field1);
    }
    *reinterpret_cast<uint64_t*>((arg0 + 56)) = 0;
    const uint64_t result1 = RecoveredCall_504790_1((arg0 + 72));
    LeafTarget_504790(arg0);
}

extern "C" uint64_t LeafData_5047e0_0;
extern "C" uint64_t RecoveredCall_5047e0_0(uint64_t);
extern "C" uint64_t RecoveredCall_5047e0_1(uint64_t);
extern "C" uint64_t RecoveredCall_5047e0_2(uint64_t);
extern "C" void LeafTarget_5047e0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5047e0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_5047e0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    if (!(field1 == 0)) {
    const uint64_t result0 = RecoveredCall_5047e0_0(field1);
    }
    *reinterpret_cast<uint64_t*>((arg0 + 56)) = 0;
    const uint64_t result1 = RecoveredCall_5047e0_1((arg0 + 72));
    const uint64_t result2 = RecoveredCall_5047e0_2(arg0);
    LeafTarget_5047e0(arg0);
}

extern "C" uint64_t LeafData_505ee0_0;
extern "C" uint64_t RecoveredCall_505ee0_0(uint64_t);
extern "C" void LeafTarget_505ee0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_505ee0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_505ee0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field1 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = field1;
    const uint64_t result0 = RecoveredCall_505ee0_0(field1);
    }
    LeafTarget_505ee0(arg0);
}

extern "C" uint64_t LeafData_505f20_0;
extern "C" uint64_t RecoveredCall_505f20_0(uint64_t);
extern "C" uint64_t RecoveredCall_505f20_1(uint64_t);
extern "C" void LeafTarget_505f20(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_505f20(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_505f20_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field1 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = field1;
    const uint64_t result0 = RecoveredCall_505f20_0(field1);
    }
    const uint64_t result1 = RecoveredCall_505f20_1(arg0);
    LeafTarget_505f20(arg0);
}

extern "C" uint64_t RecoveredCall_505f70_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_505f70(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (!(arg0 == arg1)) {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg1 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg1 + 16) + 8));
    const uint64_t result0 = RecoveredCall_505f70_0((arg0 + 16),field0,field1);
    }
    return arg0;
}

extern "C" uint64_t LeafData_508d60_0;
extern "C" uint64_t RecoveredCall_508d60_2(uint64_t);
extern "C" void LeafTarget_508d60(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_508d60(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_508d60_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 224));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 288));
    *reinterpret_cast<uint64_t*>((arg0 + 224)) = 0;
    if (!(field4 == 0)) {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 24));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field6)(field4);
    }
    *reinterpret_cast<uint64_t*>((arg0 + 288)) = 0;
    const uint64_t result2 = RecoveredCall_508d60_2((arg0 + 240));
    LeafTarget_508d60(arg0);
}

extern "C" uint64_t LeafData_509930_0;
extern "C" uint64_t RecoveredCall_509930_2(uint64_t);
extern "C" void LeafTarget_509930(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_509930(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_509930_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 232));
    if (!(field4 == 0)) {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field6)(field4);
    }
    const uint64_t result2 = RecoveredCall_509930_2((arg0 + 72));
    LeafTarget_509930(arg0);
}

extern "C" uint64_t LeafData_509990_0;
extern "C" uint64_t RecoveredCall_509990_2(uint64_t);
extern "C" uint64_t RecoveredCall_509990_3(uint64_t);
extern "C" void LeafTarget_509990(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_509990(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_509990_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 232));
    if (!(field4 == 0)) {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field6)(field4);
    }
    const uint64_t result2 = RecoveredCall_509990_2((arg0 + 72));
    const uint64_t result3 = RecoveredCall_509990_3(arg0);
    LeafTarget_509990(arg0);
}

extern "C" uint64_t RecoveredCall_509dd0_1(uint64_t);
extern "C" uint64_t RecoveredCall_509dd0_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_509dd0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 232));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    *reinterpret_cast<uint64_t*>((arg0 + 232)) = 0;
    }
    const uint64_t result1 = RecoveredCall_509dd0_1(uint32_t(32));
    const uint64_t result2 = RecoveredCall_509dd0_2(result1,arg1);
    *reinterpret_cast<uint64_t*>((arg0 + 232)) = result1;
    return result2;
}

extern "C" uint64_t RecoveredCall_50de60_0(uint64_t,uint64_t);
extern "C" uint64_t LeafTarget_50de60(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_50de60(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_50de60_0(arg0,arg1);
    if (result0 == 0) return result0;
    return LeafTarget_50de60(arg0,result0,arg2,arg3);
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_50fd40(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 168));
    *reinterpret_cast<uint64_t*>((field0 + 0)) = 0;
    *reinterpret_cast<uint32_t*>((field0 + 8)) = 0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 168));
    *reinterpret_cast<uint64_t*>((field2 + 40)) = 0;
    if (!(field1 == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field4)(field1);
    }
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((arg0 + 168));
    *reinterpret_cast<uint8_t*>((field5 + 32)) = 0;
    *reinterpret_cast<uint8_t*>((arg0 + 184)) = 0;
    return uint32_t(0);
}

extern "C" uint64_t LeafData_511790_11;
extern "C" void LeafTarget_511790(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_511790(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 0));
    if (!(uint32_t(uint32_t(field0)) == 3)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 152));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    *reinterpret_cast<uint32_t*>((arg0 + 0)) = uint32_t(uint32_t(3));
    }
    }
    const uint64_t field4 = LeafData_511790_11;
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    if (!(field5 == 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg0 + 152));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field6 + 24));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field8)(field5,field7);
    }
    LeafTarget_511790((arg0 + 4));
}

extern "C" uint64_t LeafData_512e20_0;
extern "C" void LeafTarget_512e20(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_512e20(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_512e20_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 248));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 224));
    *reinterpret_cast<uint64_t*>((arg0 + 248)) = 0;
    if (!(field4 == 0)) {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field6)(field4);
    }
    *reinterpret_cast<uint64_t*>((arg0 + 224)) = 0;
    LeafTarget_512e20(arg0);
}

extern "C" uint64_t RecoveredCall_513e90_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_513e90(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (field0 == 0) return field0;
    const uint64_t result0 = RecoveredCall_513e90_0(field0);
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = 0;
    return result0;
}

extern "C" uint64_t LeafData_5151e0_0;
extern "C" uint64_t RecoveredCall_5151e0_0(uint64_t);
extern "C" uint64_t RecoveredCall_5151e0_1(uint64_t);
extern "C" void LeafTarget_5151e0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5151e0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_5151e0_0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 576));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    if (!(field1 == 0)) {
    const uint64_t result0 = RecoveredCall_5151e0_0(field1);
    const uint64_t result1 = RecoveredCall_5151e0_1(field1);
    }
    LeafTarget_5151e0(arg0);
}

extern "C" uint64_t LeafData_515230_0;
extern "C" uint64_t RecoveredCall_515230_0(uint64_t);
extern "C" uint64_t RecoveredCall_515230_1(uint64_t);
extern "C" uint64_t RecoveredCall_515230_2(uint64_t);
extern "C" void LeafTarget_515230(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_515230(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_515230_0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 576));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    if (!(field1 == 0)) {
    const uint64_t result0 = RecoveredCall_515230_0(field1);
    const uint64_t result1 = RecoveredCall_515230_1(field1);
    }
    const uint64_t result2 = RecoveredCall_515230_2(arg0);
    LeafTarget_515230(arg0);
}

extern "C" uint64_t LeafData_515740_0;
extern "C" uint64_t RecoveredCall_515740_0(uint64_t);
extern "C" uint64_t RecoveredCall_515740_1(uint64_t);
extern "C" uint64_t RecoveredCall_515740_2(uint64_t);
extern "C" void LeafTarget_515740(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_515740(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_515740_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 352));
    const uint64_t result0 = RecoveredCall_515740_0(field1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 352));
    const uint64_t result1 = RecoveredCall_515740_1((field2 + 112));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 352));
    if (!(field3 == 0)) {
    const uint64_t result2 = RecoveredCall_515740_2(field3);
    }
    *reinterpret_cast<uint64_t*>((arg0 + 352)) = 0;
    LeafTarget_515740(arg0);
}

extern "C" uint64_t LeafData_5157a0_0;
extern "C" uint64_t RecoveredCall_5157a0_0(uint64_t);
extern "C" uint64_t RecoveredCall_5157a0_1(uint64_t);
extern "C" uint64_t RecoveredCall_5157a0_2(uint64_t);
extern "C" uint64_t RecoveredCall_5157a0_3(uint64_t);
extern "C" void LeafTarget_5157a0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5157a0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_5157a0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 352));
    const uint64_t result0 = RecoveredCall_5157a0_0(field1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 352));
    const uint64_t result1 = RecoveredCall_5157a0_1((field2 + 112));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 352));
    if (!(field3 == 0)) {
    const uint64_t result2 = RecoveredCall_5157a0_2(field3);
    }
    *reinterpret_cast<uint64_t*>((arg0 + 352)) = 0;
    const uint64_t result3 = RecoveredCall_5157a0_3(arg0);
    LeafTarget_5157a0(arg0);
}

extern "C" uint64_t LeafData_517070_0;
extern "C" void LeafTarget_517070(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_517070(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_517070_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    LeafTarget_517070(arg0);
}

extern "C" uint64_t LeafData_519970_0;
extern "C" uint64_t RecoveredCall_519970_0(uint64_t);
extern "C" uint64_t RecoveredCall_519970_1(uint64_t);
extern "C" void LeafTarget_519970(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_519970(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_519970_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    if (!(field1 == 0)) {
    const uint64_t result0 = RecoveredCall_519970_0(field1);
    }
    const uint64_t result1 = RecoveredCall_519970_1((arg0 + 56));
    LeafTarget_519970(arg0);
}

extern "C" uint64_t LeafData_51a070_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_51a070(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_51a070_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (!(field4 == 0)) {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field6)(field4);
    }
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (field7 == 0) return field7;
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field9)(field7,field9);
    return result2;
}

extern "C" uint64_t LeafData_51a0e0_0;
extern "C" void LeafTarget_51a0e0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_51a0e0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_51a0e0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (!(field4 == 0)) {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field6)(field4);
    }
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field7 == 0)) {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field9)(field7);
    }
    LeafTarget_51a0e0(arg0);
}

extern "C" uint64_t RecoveredCall_51ee80_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_51ee80(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 376));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 208));
    const uint64_t result0 = RecoveredCall_51ee80_0(field0,field1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 376));
    return field2;
}

extern "C" uint64_t LeafData_5205b0_0;
extern "C" unsigned char LeafData_5205b0_9[];
extern "C" uint64_t RecoveredCall_5205b0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_5205b0_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_5205b0_2(uint64_t);
extern "C" uint64_t RecoveredCall_5205b0_3(uint64_t);
extern "C" uint64_t RecoveredCall_5205b0_4(uint64_t);
extern "C" void LeafTarget_5205b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5205b0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_5205b0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    if (!(field1 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 56)) = 0;
    }
    *reinterpret_cast<uint32_t*>((arg0 + 12)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 64) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 64) + 8)) = 0;
    const uint64_t result0 = RecoveredCall_5205b0_0((arg0 + 40),reinterpret_cast<uintptr_t>(LeafData_5205b0_9));
    const uint64_t result1 = RecoveredCall_5205b0_1((arg0 + 48),reinterpret_cast<uintptr_t>(LeafData_5205b0_9));
    const uint64_t result2 = RecoveredCall_5205b0_2((arg0 + 48));
    const uint64_t result3 = RecoveredCall_5205b0_3((arg0 + 40));
    const uint64_t result4 = RecoveredCall_5205b0_4((arg0 + 16));
    LeafTarget_5205b0(arg0);
}

extern "C" uint64_t LeafData_520640_0;
extern "C" unsigned char LeafData_520640_9[];
extern "C" uint64_t RecoveredCall_520640_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_520640_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_520640_2(uint64_t);
extern "C" uint64_t RecoveredCall_520640_3(uint64_t);
extern "C" uint64_t RecoveredCall_520640_4(uint64_t);
extern "C" uint64_t RecoveredCall_520640_5(uint64_t);
extern "C" void LeafTarget_520640(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_520640(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_520640_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    if (!(field1 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 56)) = 0;
    }
    *reinterpret_cast<uint32_t*>((arg0 + 12)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 64) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 64) + 8)) = 0;
    const uint64_t result0 = RecoveredCall_520640_0((arg0 + 40),reinterpret_cast<uintptr_t>(LeafData_520640_9));
    const uint64_t result1 = RecoveredCall_520640_1((arg0 + 48),reinterpret_cast<uintptr_t>(LeafData_520640_9));
    const uint64_t result2 = RecoveredCall_520640_2((arg0 + 48));
    const uint64_t result3 = RecoveredCall_520640_3((arg0 + 40));
    const uint64_t result4 = RecoveredCall_520640_4((arg0 + 16));
    const uint64_t result5 = RecoveredCall_520640_5(arg0);
    LeafTarget_520640(arg0);
}

extern "C" uint64_t LeafData_520990_0;
extern "C" uint64_t RecoveredCall_520990_1(uint64_t);
extern "C" uint64_t RecoveredCall_520990_2(uint64_t);
extern "C" uint64_t RecoveredCall_520990_3(uint64_t);
extern "C" void LeafTarget_520990(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_520990(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_520990_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t result1 = RecoveredCall_520990_1((arg0 + 152));
    const uint64_t result2 = RecoveredCall_520990_2((arg0 + 48));
    const uint64_t result3 = RecoveredCall_520990_3((arg0 + 32));
    LeafTarget_520990(arg0);
}

extern "C" uint64_t LeafData_5209f0_0;
extern "C" uint64_t RecoveredCall_5209f0_1(uint64_t);
extern "C" uint64_t RecoveredCall_5209f0_2(uint64_t);
extern "C" uint64_t RecoveredCall_5209f0_3(uint64_t);
extern "C" uint64_t RecoveredCall_5209f0_4(uint64_t);
extern "C" void LeafTarget_5209f0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5209f0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_5209f0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t result1 = RecoveredCall_5209f0_1((arg0 + 152));
    const uint64_t result2 = RecoveredCall_5209f0_2((arg0 + 48));
    const uint64_t result3 = RecoveredCall_5209f0_3((arg0 + 32));
    const uint64_t result4 = RecoveredCall_5209f0_4(arg0);
    LeafTarget_5209f0(arg0);
}

extern "C" uint64_t LeafData_522320_0;
extern "C" uint64_t RecoveredCall_522320_0(uint64_t);
extern "C" uint64_t LeafTarget_522320(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_522320(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_522320_0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    if (field1 == 0) return arg0;
    const uint64_t result0 = RecoveredCall_522320_0(field1);
    return LeafTarget_522320(field1);
}

extern "C" uint64_t LeafData_52b2b0_0;
extern "C" void LeafTarget_52b2b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_52b2b0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_52b2b0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    *reinterpret_cast<uint64_t*>((arg0 + 88)) = 0;
    }
    LeafTarget_52b2b0(arg0);
}

extern "C" uint64_t LeafData_52cc50_0;
extern "C" void LeafTarget_52cc50(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_52cc50(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_52cc50_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    *reinterpret_cast<uint64_t*>((arg0 + 56)) = 0;
    }
    LeafTarget_52cc50(arg0);
}

extern "C" uint64_t LeafData_52cca0_0;
extern "C" uint64_t RecoveredCall_52cca0_1(uint64_t);
extern "C" void LeafTarget_52cca0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_52cca0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_52cca0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    *reinterpret_cast<uint64_t*>((arg0 + 56)) = 0;
    }
    const uint64_t result1 = RecoveredCall_52cca0_1(arg0);
    LeafTarget_52cca0(arg0);
}

extern "C" uint64_t LeafData_52f4d0_0;
extern "C" uint64_t RecoveredCall_52f4d0_0(uint64_t);
extern "C" uint64_t RecoveredCall_52f4d0_1(uint64_t);
extern "C" uint64_t RecoveredCall_52f4d0_2(uint64_t);
extern "C" uint64_t RecoveredCall_52f4d0_3(uint64_t);
extern "C" uint64_t RecoveredCall_52f4d0_4(uint64_t);
extern "C" uint64_t RecoveredCall_52f4d0_5(uint64_t);
extern "C" void LeafTarget_52f4d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_52f4d0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_52f4d0_0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    if (!(field1 == 0)) {
    const uint64_t result0 = RecoveredCall_52f4d0_0(field1);
    const uint64_t result1 = RecoveredCall_52f4d0_1(field1);
    *reinterpret_cast<uint64_t*>((arg0 + 88)) = 0;
    }
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    if (!(field2 == 0)) {
    const uint64_t result2 = RecoveredCall_52f4d0_2(field2);
    const uint64_t result3 = RecoveredCall_52f4d0_3(field2);
    *reinterpret_cast<uint64_t*>((arg0 + 96)) = 0;
    }
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 104));
    if (!(field3 == 0)) {
    const uint64_t result4 = RecoveredCall_52f4d0_4(field3);
    const uint64_t result5 = RecoveredCall_52f4d0_5(field3);
    *reinterpret_cast<uint64_t*>((arg0 + 104)) = 0;
    }
    LeafTarget_52f4d0(arg0);
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_530000(uint64_t arg0) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 56));
    if (!((uint32_t(uint32_t(field0)) & 0x1ull) == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 40));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,arg0);
    }
    return uint32_t(1);
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_530030(uint64_t arg0) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 56));
    if (!((uint32_t(uint32_t(field0)) & 0x1ull) == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,arg0);
    }
    return uint32_t(1);
}

extern "C" uint64_t RecoveredCall_530a10_0(uint64_t);
extern "C" uint64_t LeafData_530a10_3;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_530a10(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_530a10_0(arg0);
    const uint64_t field0 = LeafData_530a10_3;
    *reinterpret_cast<uint64_t*>(((arg0 + 160) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 160) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    *reinterpret_cast<uint64_t*>(((arg0 + 144) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 144) + 8)) = 0;
    if (arg1 == 0) return result0;
    *reinterpret_cast<uint64_t*>((arg0 + 168)) = arg1;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg1,field2);
    return result1;
}

extern "C" uint64_t LeafData_566b10_0;
extern "C" uint64_t RecoveredCall_566b10_0(uint64_t);
extern "C" uint64_t RecoveredCall_566b10_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_566b10_2(uint64_t);
extern "C" uint64_t LeafData_566b10_11;
extern "C" uint64_t LeafTarget_566b10(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_566b10(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_566b10_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t result0 = RecoveredCall_566b10_0(arg0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 248));
    const uint64_t result1 = RecoveredCall_566b10_1((arg0 + 240),field1);
    const uint64_t result2 = RecoveredCall_566b10_2((arg0 + 48));
    const uint64_t field2 = LeafData_566b10_11;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field2 + 16);
    const uint8_t field3 = *reinterpret_cast<const uint8_t*>((arg0 + 16));
    if ((uint32_t(uint32_t(field3)) & 0x1ull) == 0) return result2;
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    if (field4 == 0) return field4;
    return LeafTarget_566b10(field4);
}

extern "C" uint64_t LeafData_566b80_0;
extern "C" uint64_t RecoveredCall_566b80_0(uint64_t);
extern "C" uint64_t RecoveredCall_566b80_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_566b80_2(uint64_t);
extern "C" uint64_t LeafData_566b80_11;
extern "C" uint64_t RecoveredCall_566b80_3(uint64_t);
extern "C" void LeafTarget_566b80(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_566b80(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_566b80_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t result0 = RecoveredCall_566b80_0(arg0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 248));
    const uint64_t result1 = RecoveredCall_566b80_1((arg0 + 240),field1);
    const uint64_t result2 = RecoveredCall_566b80_2((arg0 + 48));
    const uint64_t field2 = LeafData_566b80_11;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field2 + 16);
    const uint8_t field3 = *reinterpret_cast<const uint8_t*>((arg0 + 16));
    if (!((uint32_t(uint32_t(field3)) & 0x1ull) == 0)) {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    if (!(field4 == 0)) {
    const uint64_t result3 = RecoveredCall_566b80_3(field4);
    }
    }
    LeafTarget_566b80(arg0);
}

extern "C" uint64_t LeafData_56a1a0_0;
extern "C" uint64_t RecoveredCall_56a1a0_0(uint64_t);
extern "C" uint64_t RecoveredCall_56a1a0_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_56a1a0_2(uint64_t);
extern "C" uint64_t LeafData_56a1a0_11;
extern "C" uint64_t RecoveredCall_56a1a0_3(uint64_t);
extern "C" void LeafTarget_56a1a0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_56a1a0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_56a1a0_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t result0 = RecoveredCall_56a1a0_0(arg0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 248));
    const uint64_t result1 = RecoveredCall_56a1a0_1((arg0 + 240),field1);
    const uint64_t result2 = RecoveredCall_56a1a0_2((arg0 + 48));
    const uint64_t field2 = LeafData_56a1a0_11;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field2 + 16);
    const uint8_t field3 = *reinterpret_cast<const uint8_t*>((arg0 + 16));
    if (!((uint32_t(uint32_t(field3)) & 0x1ull) == 0)) {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    if (!(field4 == 0)) {
    const uint64_t result3 = RecoveredCall_56a1a0_3(field4);
    }
    }
    LeafTarget_56a1a0(arg0);
}

extern "C" void LeafTarget_56a210(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_56a210(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 288));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 32));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,0);
    }
    LeafTarget_56a210(arg0);
}

extern "C" uint64_t LeafData_56f030_0;
extern "C" uint64_t RecoveredCall_56f030_0(uint64_t);
extern "C" uint64_t RecoveredCall_56f030_1(uint64_t);
extern "C" void LeafTarget_56f030(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_56f030(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_56f030_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((arg0 + 40));
    if (!((uint32_t(uint32_t(field1)) & 0x1ull) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    if (!(field2 == 0)) {
    const uint64_t result0 = RecoveredCall_56f030_0(field2);
    }
    }
    const uint8_t field3 = *reinterpret_cast<const uint8_t*>((arg0 + 16));
    if (!((uint32_t(uint32_t(field3)) & 0x1ull) == 0)) {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    if (!(field4 == 0)) {
    const uint64_t result1 = RecoveredCall_56f030_1(field4);
    }
    }
    LeafTarget_56f030(arg0);
}

extern "C" uint64_t LeafData_576000_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_576000(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_576000_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    return result0;
}

extern "C" uint64_t LeafData_576050_0;
extern "C" void LeafTarget_576050(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_576050(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_576050_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    LeafTarget_576050(arg0);
}

extern "C" uint64_t RecoveredCall_5760a0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_5760a0_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5760a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_5760a0_0(arg0,arg1);
    const uint64_t result1 = RecoveredCall_5760a0_1((arg0 + 32),arg1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 104));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,field2);
    return result2;
}

extern "C" uint64_t LeafData_588330_0;
extern "C" void LeafTarget_588330(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_588330(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_588330_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    }
    LeafTarget_588330(arg0);
}

extern "C" uint64_t LeafData_588380_0;
extern "C" uint64_t RecoveredCall_588380_1(uint64_t);
extern "C" void LeafTarget_588380(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_588380(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = LeafData_588380_0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    }
    const uint64_t result1 = RecoveredCall_588380_1(arg0);
    LeafTarget_588380(arg0);
}
