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

extern "C" __attribute__((noinline)) void RecoveredLeaf_56dc00(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 8));
    if ((uint32_t(uint32_t(field0)) & 0x80000000ull) != 0) return;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(arg1,arg0,field2);
    return;
}

extern "C" unsigned char LeafData_8c3400_4[];
extern "C" unsigned char LeafData_8c3400_19[];
extern "C" uint64_t RecoveredCall_8c3400_0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8c3400(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) | 2)));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((((field1 == 0) ? reinterpret_cast<uintptr_t>(LeafData_8c3400_4) : field1) + 0));
    if (uint32_t(uint32_t(field2)) != uint32_t(uint32_t(((uint32_t(uint32_t(15662)) & 0xffffull) | (57344ull << 16))))) return;
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((((field1 == 0) ? reinterpret_cast<uintptr_t>(LeafData_8c3400_4) : field1) + 4));
    if (uint32_t(uint32_t(field3)) != uint32_t(uint32_t((uint32_t(uint32_t(((uint32_t(uint32_t(15662)) & 0xffffull) | (57344ull << 16)))) + 1)))) return;
    *reinterpret_cast<uint8_t*>((arg0 + 96)) = 0;
    const uint64_t result0 = RecoveredCall_8c3400_0(reinterpret_cast<uintptr_t>(LeafData_8c3400_19));
    *reinterpret_cast<uint32_t*>((arg0 + 240)) = uint32_t(result0);
    *reinterpret_cast<uint32_t*>((arg0 + 176)) = uint32_t(uint32_t(10));
    return;
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_c6ab20(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 272));
    if (field0 == 0) return;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 88));
    if (field1 == 0) return;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,uint32_t(((uint32_t(uint32_t(27894)) & 0xffffull) | (19354ull << 16))));
    if ((uint32_t(result0) & 0x1ull) == 0) return;
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((field1 + 8));
    *reinterpret_cast<uint32_t*>((arg0 + 248)) = uint32_t(uint32_t(field4));
    return;
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_c6ab90(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 256));
    if (field0 == 0) return;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 128));
    if (field1 == 0) return;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,uint32_t(((uint32_t(uint32_t(27894)) & 0xffffull) | (19354ull << 16))));
    if ((uint32_t(result0) & 0x1ull) == 0) return;
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((field1 + 8));
    *reinterpret_cast<uint32_t*>((arg0 + 248)) = uint32_t(uint32_t(field4));
    return;
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_c6ac00(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 264));
    if (field0 == 0) return;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 128));
    if (field1 == 0) return;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,uint32_t(((uint32_t(uint32_t(27894)) & 0xffffull) | (19354ull << 16))));
    if ((uint32_t(result0) & 0x1ull) == 0) return;
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((field1 + 8));
    *reinterpret_cast<uint32_t*>((arg0 + 248)) = uint32_t(uint32_t(field4));
    return;
}

extern "C" uint64_t RecoveredCall_ca78c0_0(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_ca78c0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ca78c0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 152));
    if (field0 == 0) return;
    const uint64_t result0 = RecoveredCall_ca78c0_0(arg1,(arg0 + 248),uint32_t(3));
    LeafTarget_ca78c0(arg1,(arg0 + 160),uint32_t(3));
}

extern "C" unsigned char LeafData_cfd5c0_0[];
extern "C" uint64_t RecoveredCall_cfd5c0_0(uint64_t);
extern "C" uint64_t LeafData_cfd5c0_8;
extern "C" __attribute__((noinline)) void RecoveredLeaf_cfd5c0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_cfd5c0_0);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 24));
    if (uint32_t(uint32_t(field0)) == 1) return;
    const uint64_t result0 = RecoveredCall_cfd5c0_0(arg0);
    const uint64_t field1 = LeafData_cfd5c0_8;
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = (result0 - field1);
    *reinterpret_cast<uint32_t*>((arg0 + 24)) = uint32_t(uint32_t(1));
    return;
}

extern "C" unsigned char LeafData_cfd8b0_0[];
extern "C" unsigned char LeafData_cfd8b0_3[];
extern "C" uint64_t RecoveredCall_cfd8b0_0(uint64_t);
extern "C" uint64_t LeafData_cfd8b0_11;
extern "C" __attribute__((noinline)) void RecoveredLeaf_cfd8b0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_cfd8b0_0);
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = reinterpret_cast<uintptr_t>(LeafData_cfd8b0_3);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    if (uint32_t(uint32_t(field0)) == 1) return;
    const uint64_t result0 = RecoveredCall_cfd8b0_0(arg0);
    const uint64_t field1 = LeafData_cfd8b0_11;
    *reinterpret_cast<uint64_t*>((arg0 + 64)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = (result0 - field1);
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t(1));
    return;
}

extern "C" unsigned char LeafData_d00520_0[];
extern "C" uint64_t RecoveredCall_d00520_0(uint64_t);
extern "C" uint64_t LeafData_d00520_8;
extern "C" __attribute__((noinline)) void RecoveredLeaf_d00520(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_d00520_0);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 24));
    if (uint32_t(uint32_t(field0)) == 1) return;
    const uint64_t result0 = RecoveredCall_d00520_0(arg0);
    const uint64_t field1 = LeafData_d00520_8;
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = (result0 - field1);
    *reinterpret_cast<uint32_t*>((arg0 + 24)) = uint32_t(uint32_t(1));
    return;
}

extern "C" unsigned char LeafData_d007f0_0[];
extern "C" unsigned char LeafData_d007f0_3[];
extern "C" uint64_t RecoveredCall_d007f0_0(uint64_t);
extern "C" uint64_t LeafData_d007f0_11;
extern "C" __attribute__((noinline)) void RecoveredLeaf_d007f0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_d007f0_0);
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = reinterpret_cast<uintptr_t>(LeafData_d007f0_3);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    if (uint32_t(uint32_t(field0)) == 1) return;
    const uint64_t result0 = RecoveredCall_d007f0_0(arg0);
    const uint64_t field1 = LeafData_d007f0_11;
    *reinterpret_cast<uint64_t*>((arg0 + 64)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = (result0 - field1);
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t(1));
    return;
}

extern "C" unsigned char LeafData_d1abd0_0[];
extern "C" unsigned char LeafData_d1abd0_3[];
extern "C" uint64_t RecoveredCall_d1abd0_0(uint64_t);
extern "C" uint64_t LeafData_d1abd0_11;
extern "C" __attribute__((noinline)) void RecoveredLeaf_d1abd0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_d1abd0_0);
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = reinterpret_cast<uintptr_t>(LeafData_d1abd0_3);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    if (uint32_t(uint32_t(field0)) == 1) return;
    const uint64_t result0 = RecoveredCall_d1abd0_0(arg0);
    const uint64_t field1 = LeafData_d1abd0_11;
    *reinterpret_cast<uint64_t*>((arg0 + 64)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = (result0 - field1);
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t(1));
    return;
}

extern "C" unsigned char LeafData_d1b1b0_0[];
extern "C" unsigned char LeafData_d1b1b0_3[];
extern "C" uint64_t RecoveredCall_d1b1b0_0(uint64_t);
extern "C" uint64_t LeafData_d1b1b0_11;
extern "C" __attribute__((noinline)) void RecoveredLeaf_d1b1b0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_d1b1b0_0);
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = reinterpret_cast<uintptr_t>(LeafData_d1b1b0_3);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    if (uint32_t(uint32_t(field0)) == 1) return;
    const uint64_t result0 = RecoveredCall_d1b1b0_0(arg0);
    const uint64_t field1 = LeafData_d1b1b0_11;
    *reinterpret_cast<uint64_t*>((arg0 + 64)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = (result0 - field1);
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t(1));
    return;
}

extern "C" unsigned char LeafData_d1d700_0[];
extern "C" unsigned char LeafData_d1d700_3[];
extern "C" uint64_t RecoveredCall_d1d700_0(uint64_t);
extern "C" uint64_t LeafData_d1d700_11;
extern "C" __attribute__((noinline)) void RecoveredLeaf_d1d700(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_d1d700_0);
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = reinterpret_cast<uintptr_t>(LeafData_d1d700_3);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    if (uint32_t(uint32_t(field0)) == 1) return;
    const uint64_t result0 = RecoveredCall_d1d700_0(arg0);
    const uint64_t field1 = LeafData_d1d700_11;
    *reinterpret_cast<uint64_t*>((arg0 + 64)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = (result0 - field1);
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t(1));
    return;
}

extern "C" unsigned char LeafData_d1d7a0_0[];
extern "C" unsigned char LeafData_d1d7a0_3[];
extern "C" uint64_t RecoveredCall_d1d7a0_0(uint64_t);
extern "C" uint64_t LeafData_d1d7a0_11;
extern "C" __attribute__((noinline)) void RecoveredLeaf_d1d7a0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_d1d7a0_0);
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = reinterpret_cast<uintptr_t>(LeafData_d1d7a0_3);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    if (uint32_t(uint32_t(field0)) == 1) return;
    const uint64_t result0 = RecoveredCall_d1d7a0_0(arg0);
    const uint64_t field1 = LeafData_d1d7a0_11;
    *reinterpret_cast<uint64_t*>((arg0 + 64)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = (result0 - field1);
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t(1));
    return;
}

extern "C" uint64_t RecoveredCall_daa480_1(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_daa480(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (arg1 == 0) return;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 400));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,arg1);
    const uint64_t result1 = RecoveredCall_daa480_1(arg1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 408));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(arg0,field3);
    return;
}

extern "C" uint64_t RecoveredCall_daa4d0_1(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_daa4d0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (arg1 == 0) return;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 400));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,arg1);
    const uint64_t result1 = RecoveredCall_daa4d0_1(arg1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 408));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(arg0,field3);
    return;
}

extern "C" uint64_t RecoveredCall_f83bd0_0(uint64_t);
extern "C" uint64_t RecoveredCall_f83bd0_1(uint64_t);
extern "C" uint64_t RecoveredCall_f83bd0_2(uint64_t);
extern "C" uint64_t RecoveredCall_f83bd0_3(uint64_t);
extern "C" uint64_t RecoveredCall_f83bd0_4(uint64_t);
extern "C" void LeafTarget_f83bd0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_f83bd0(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 2112));
    if (uint32_t(uint32_t(field0)) == 0) return;
    *reinterpret_cast<uint32_t*>((arg0 + 2112)) = 0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 2128));
    const uint64_t result0 = RecoveredCall_f83bd0_0(field1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 2136));
    const uint64_t result1 = RecoveredCall_f83bd0_1(field2);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 2144));
    const uint64_t result2 = RecoveredCall_f83bd0_2(field3);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 2152));
    const uint64_t result3 = RecoveredCall_f83bd0_3(field4);
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((arg0 + 2160));
    const uint64_t result4 = RecoveredCall_f83bd0_4(field5);
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 2168));
    LeafTarget_f83bd0(field6);
}
