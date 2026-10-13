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

extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_175700(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((arg0 + 16) + 0)), 0, __ATOMIC_ACQ_REL);
    if (field0 == 0) return field0;
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (uint32_t((field1 - 1)) != 0) return field0;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field0,field3);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1cb9f0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 32));
    if (field1 == 0) return arg0;
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((field1 + 8));
    if ((uint32_t(uint32_t(field2)) & 0x2ull) == 0) return arg0;
    const int32_t field3 = *reinterpret_cast<const int32_t*>((field1 + 32));
    if ((field0 + field3) == 0) return arg0;
    *reinterpret_cast<uint64_t*>((((field0 + field3) + 0) + 0)) = 0;
    *reinterpret_cast<uint64_t*>((((field0 + field3) + 0) + 8)) = 0;
    *reinterpret_cast<uint32_t*>(((field0 + field3) + 16)) = uint32_t(uint32_t(1));
    return arg0;
}

extern "C" uint64_t RecoveredCall_1cba30_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1cba30(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 32));
    if (field1 == 0) return arg0;
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((field1 + 8));
    if ((uint32_t(uint32_t(field2)) & 0x2ull) == 0) return arg0;
    const int32_t field3 = *reinterpret_cast<const int32_t*>((field1 + 32));
    if ((field0 + field3) == 0) return arg0;
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((field0 + field3) + 0));
    uint64_t merged5 = field4;
    if (!(field4 == 0)) {
    const uint64_t result0 = RecoveredCall_1cba30_0(field4);
        merged5 = result0;
    }
    *reinterpret_cast<uint64_t*>((((field0 + field3) + 0) + 0)) = 0;
    *reinterpret_cast<uint64_t*>((((field0 + field3) + 0) + 8)) = 0;
    *reinterpret_cast<uint32_t*>(((field0 + field3) + 16)) = uint32_t(uint32_t(1));
    return merged5;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4f4a50(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((arg0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (arg0 == 0) return arg0;
    if (uint32_t(uint32_t(field0)) != 1) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5867d0(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = __atomic_load_n(reinterpret_cast<const uint32_t*>(((arg0 + 8) + 0)), __ATOMIC_ACQUIRE);
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((arg0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (uint32_t((field1 - 1)) != 0) return arg0;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(arg0,field3);
    return result0;
}

extern "C" uint64_t LeafTarget_6736c0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_6736c0(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 40));
    if (uint32_t(uint32_t(field0)) != 2) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field1 + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field2 - 1)) != 0) return field1;
    return LeafTarget_6736c0(field1);
}

extern "C" unsigned char LeafData_6b3850_0[];
extern "C" uint64_t LeafTarget_6b3850(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_6b3850(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_6b3850_0) - 2208) + 2208);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 48));
    if (uint32_t(uint32_t(field0)) != 2) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field1 + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field2 - 1)) != 0) return field1;
    return LeafTarget_6b3850(field1);
}

extern "C" unsigned char LeafData_6b3890_0[];
extern "C" uint64_t RecoveredCall_6b3890_0(uint64_t);
extern "C" void LeafTarget_6b3890(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_6b3890(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_6b3890_0) - 2208) + 2208);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 48));
    if (!(uint32_t(uint32_t(field0)) != 2)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field1 + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field2 - 1)) != 0)) {
    const uint64_t result0 = RecoveredCall_6b3890_0(field1);
    }
    }
    LeafTarget_6b3890(arg0);
}

extern "C" unsigned char LeafData_6b3940_0[];
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_6b3940(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_6b3940_0) - 2208) + 2208);
    const ByteVector16 field0 = *reinterpret_cast<const ByteVector16*>((arg0 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 21));
    *reinterpret_cast<uint64_t*>((arg1 + 21)) = field1;
    *reinterpret_cast<ByteVector16*>((arg1 + 8)) = field0;
    *reinterpret_cast<uint32_t*>((arg1 + 32)) = 0;
    *reinterpret_cast<uint64_t*>((arg1 + 40)) = 0;
    *reinterpret_cast<uint32_t*>((arg1 + 48)) = 0;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    *reinterpret_cast<uint64_t*>((arg1 + 32)) = field2;
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    *reinterpret_cast<uint64_t*>((arg1 + 40)) = field3;
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((arg0 + 48));
    *reinterpret_cast<uint32_t*>((arg1 + 48)) = uint32_t(uint32_t(field4));
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((arg0 + 48));
    if (uint32_t(uint32_t(field5)) != 2) return arg0;
    const uint32_t field6 = __atomic_fetch_add(reinterpret_cast<uint32_t*>((field2 + 0)), 1, __ATOMIC_RELAXED);
    return arg0;
}

extern "C" uint64_t LeafTarget_6b39a0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_6b39a0(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 48));
    if (uint32_t(uint32_t(field0)) != 2) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field1 + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field2 - 1)) != 0) return field1;
    return LeafTarget_6b39a0(field1);
}

extern "C" uint64_t RecoveredCall_6b39d0_0(uint64_t);
extern "C" void LeafTarget_6b39d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_6b39d0(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 48));
    if (!(uint32_t(uint32_t(field0)) != 2)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field1 + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field2 - 1)) != 0)) {
    const uint64_t result0 = RecoveredCall_6b39d0_0(field1);
    }
    }
    LeafTarget_6b39d0(arg0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_6ca540(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint32_t field0 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((arg0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field0 - 1)) != 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}

extern "C" unsigned char LeafData_6d01d0_0[];
extern "C" uint64_t RecoveredCall_6d01d0_0(uint64_t);
extern "C" uint64_t RecoveredCall_6d01d0_1(uint64_t);
extern "C" uint64_t RecoveredCall_6d01d0_2(uint64_t);
extern "C" unsigned char LeafData_6d01d0_28[];
extern "C" uint64_t RecoveredCall_6d01d0_4(uint64_t);
extern "C" void LeafTarget_6d01d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_6d01d0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_6d01d0_0) - 1272) + 1272);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 112));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 112)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    const uint64_t result0 = RecoveredCall_6d01d0_0(field1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    if (!(field2 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 80)) = 0;
    }
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    const uint64_t result1 = RecoveredCall_6d01d0_1(field3);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    if (!(field4 == 0)) {
    const uint64_t result2 = RecoveredCall_6d01d0_2(field4);
    }
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    if (!(field5 == 0)) {
    const uint32_t field6 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field5 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field6 - 1)) != 0)) {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 8));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t)>(field8)(field5);
    }
    }
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_6d01d0_28) - 1240) + 1240);
    const uint32_t field9 = *reinterpret_cast<const uint32_t*>((arg0 + 32));
    if (!(uint32_t(uint32_t(field9)) != 2)) {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint32_t field11 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field10 + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field11 - 1)) != 0)) {
    const uint64_t result4 = RecoveredCall_6d01d0_4(field10);
    }
    }
    LeafTarget_6d01d0(arg0);
}

extern "C" unsigned char LeafData_6d0290_0[];
extern "C" uint64_t LeafTarget_6d0290(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_6d0290(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_6d0290_0) - 1240) + 1240);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 32));
    if (uint32_t(uint32_t(field0)) != 2) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field1 + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field2 - 1)) != 0) return field1;
    return LeafTarget_6d0290(field1);
}

extern "C" unsigned char LeafData_6d02d0_0[];
extern "C" uint64_t RecoveredCall_6d02d0_0(uint64_t);
extern "C" void LeafTarget_6d02d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_6d02d0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_6d02d0_0) - 1240) + 1240);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 32));
    if (!(uint32_t(uint32_t(field0)) != 2)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field1 + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field2 - 1)) != 0)) {
    const uint64_t result0 = RecoveredCall_6d02d0_0(field1);
    }
    }
    LeafTarget_6d02d0(arg0);
}

extern "C" uint64_t LeafTarget_759360(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_759360(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 48));
    if (uint32_t(uint32_t(field0)) != 2) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field1 + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field2 - 1)) != 0) return field1;
    return LeafTarget_759360(field1);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_a84ec0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint32_t field0 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((arg1 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (arg1 == 0) return arg0;
    if (uint32_t(uint32_t(field0)) != 1) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(arg1,arg1,field2);
    return result0;
}

extern "C" unsigned char LeafData_a99390_0[];
extern "C" unsigned char LeafData_a99390_27[];
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_a99390(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_a99390_0) - 104) + 104);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 304));
    *reinterpret_cast<uint64_t*>((arg0 + 304)) = 0;
    uint64_t merged10 = field0;
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 304));
    uint64_t merged9 = field4;
    if (!(field4 == 0)) {
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field4 + 8) + 0)), 1, __ATOMIC_RELAXED);
    uint64_t merged8 = field4;
    if (!(uint32_t((field5 - 1)) != 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field4);
        merged8 = result1;
    }
        merged9 = merged8;
    }
        merged10 = merged9;
    }
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_a99390_27) - 800) + 800);
    return merged10;
}

extern "C" unsigned char LeafData_a99420_0[];
extern "C" void LeafTarget_a99420(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_a99420(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_a99420_0) - 104) + 104);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 304));
    *reinterpret_cast<uint64_t*>((arg0 + 304)) = 0;
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 304));
    if (!(field4 == 0)) {
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field4 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field5 - 1)) != 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field4);
    }
    }
    }
    LeafTarget_a99420(arg0);
}

extern "C" uint64_t LeafTarget_dd0180(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dd0180(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 16));
    if (uint32_t(uint32_t(field0)) != 2) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field1 + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field2 - 1)) != 0) return field1;
    return LeafTarget_dd0180(field1);
}

extern "C" unsigned char LeafData_dd13f0_0[];
extern "C" uint64_t RecoveredCall_dd13f0_0(uint64_t);
extern "C" uint64_t RecoveredCall_dd13f0_1(uint64_t);
extern "C" unsigned char LeafData_dd13f0_9[];
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dd13f0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dd13f0_0) - 1168) + 1168);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    const uint64_t result0 = RecoveredCall_dd13f0_0(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t result1 = RecoveredCall_dd13f0_1(field1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dd13f0_9) - 1096) + 1096);
    if (field2 == 0) return field2;
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field2 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field3 - 1)) != 0) return field2;
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field2 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)(field2,field5);
    return result2;
}

extern "C" unsigned char LeafData_dd1460_0[];
extern "C" uint64_t RecoveredCall_dd1460_0(uint64_t);
extern "C" uint64_t RecoveredCall_dd1460_1(uint64_t);
extern "C" unsigned char LeafData_dd1460_9[];
extern "C" void LeafTarget_dd1460(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_dd1460(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dd1460_0) - 1168) + 1168);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    const uint64_t result0 = RecoveredCall_dd1460_0(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t result1 = RecoveredCall_dd1460_1(field1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dd1460_9) - 1096) + 1096);
    if (!(field2 == 0)) {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field2 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field3 - 1)) != 0)) {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field2 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(field2);
    }
    }
    LeafTarget_dd1460(arg0);
}

extern "C" unsigned char LeafData_dd1a70_0[];
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dd1a70(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dd1a70_0) - 1096) + 1096);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (field0 == 0) return field0;
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field1 - 1)) != 0) return field0;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field0,field3);
    return result0;
}

extern "C" unsigned char LeafData_dd1fd0_0[];
extern "C" void LeafTarget_dd1fd0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_dd1fd0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dd1fd0_0) - 1096) + 1096);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    LeafTarget_dd1fd0(arg0);
}

extern "C" unsigned char LeafData_dd2520_0[];
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dd2520(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dd2520_0) - 1504) + 1504);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (field4 == 0) return field4;
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field4 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field5 - 1)) != 0) return field4;
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field7)(field4,field7);
    return result1;
}

extern "C" unsigned char LeafData_dd25a0_0[];
extern "C" void LeafTarget_dd25a0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_dd25a0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dd25a0_0) - 1504) + 1504);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field4 == 0)) {
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field4 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field5 - 1)) != 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field4);
    }
    }
    LeafTarget_dd25a0(arg0);
}

extern "C" unsigned char LeafData_dd28c0_0[];
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dd28c0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dd28c0_0) - 1720) + 1720);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = 0;
    if (field0 == 0) return field0;
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (field4 == 0) return field4;
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field4 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field5 - 1)) != 0) return field4;
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field7)(field4,field7);
    return result1;
}

extern "C" unsigned char LeafData_dd2940_0[];
extern "C" void LeafTarget_dd2940(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_dd2940(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dd2940_0) - 1720) + 1720);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = 0;
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field4 == 0)) {
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field4 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field5 - 1)) != 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field4);
    }
    }
    }
    LeafTarget_dd2940(arg0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dd2bc0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = 0;
    if (field0 == 0) return field0;
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field1 - 1)) != 0) return field0;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field0,field3);
    return result0;
}

extern "C" unsigned char LeafData_dd5bc0_0[];
extern "C" void LeafTarget_dd5bc0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_dd5bc0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dd5bc0_0) - 1096) + 1096);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    LeafTarget_dd5bc0(arg0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dd6000(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint32_t field0 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((arg0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field0 - 1)) != 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}

extern "C" unsigned char LeafData_dd6910_0[];
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dd6910(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dd6910_0) - 2840) + 2840);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    if (field0 == 0) return field0;
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field1 - 1)) != 0) return field0;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field0,field3);
    return result0;
}

extern "C" unsigned char LeafData_dd6950_0[];
extern "C" void LeafTarget_dd6950(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_dd6950(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dd6950_0) - 2840) + 2840);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    LeafTarget_dd6950(arg0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dd6ce0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint32_t field0 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((arg0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field0 - 1)) != 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dd6d10(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint32_t field0 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((arg0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field0 - 1)) != 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}

extern "C" unsigned char LeafData_dd7000_0[];
extern "C" uint64_t RecoveredCall_dd7000_1(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dd7000(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dd7000_0) - 3144) + 3144);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 192));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 128));
    const uint64_t result1 = RecoveredCall_dd7000_1(field4);
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    if (!(field5 == 0)) {
    const uint32_t field6 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field5 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field6 - 1)) != 0)) {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field8)(field5);
    }
    }
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (field9 == 0) return field9;
    const uint32_t field10 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field9 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field10 - 1)) != 0) return field9;
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field9 + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((field11 + 8));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field12)(field9,field12);
    return result3;
}

extern "C" unsigned char LeafData_dd70b0_0[];
extern "C" uint64_t RecoveredCall_dd70b0_1(uint64_t);
extern "C" void LeafTarget_dd70b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_dd70b0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dd70b0_0) - 3144) + 3144);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 192));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 128));
    const uint64_t result1 = RecoveredCall_dd70b0_1(field4);
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    if (!(field5 == 0)) {
    const uint32_t field6 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field5 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field6 - 1)) != 0)) {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field8)(field5);
    }
    }
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field9 == 0)) {
    const uint32_t field10 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field9 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field10 - 1)) != 0)) {
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field9 + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((field11 + 8));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t)>(field12)(field9);
    }
    }
    LeafTarget_dd70b0(arg0);
}

extern "C" unsigned char LeafData_dd74d0_0[];
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dd74d0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dd74d0_0) - 3224) + 3224);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (field0 == 0) return field0;
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field1 - 1)) != 0) return field0;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field0,field3);
    return result0;
}

extern "C" unsigned char LeafData_dd7510_0[];
extern "C" void LeafTarget_dd7510(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_dd7510(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dd7510_0) - 3224) + 3224);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    LeafTarget_dd7510(arg0);
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_ddb100(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 256));
    *reinterpret_cast<uint64_t*>((arg0 + 256)) = arg1;
    if (!(arg1 == 0)) {
    const uint32_t field1 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((arg1 + 8) + 0)), 1, __ATOMIC_RELAXED);
    }
    if (!(field0 == 0)) {
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field2 - 1)) != 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field4)(field0,arg1);
    }
    }
    return uint32_t(0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_de4060(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 2000));
    *reinterpret_cast<uint64_t*>((arg0 + 2000)) = 0;
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 4048));
    *reinterpret_cast<uint64_t*>((arg0 + 4048)) = 0;
    if (!(field4 == 0)) {
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field4 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field5 - 1)) != 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 24));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field4);
    }
    }
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 5496));
    *reinterpret_cast<uint64_t*>((arg0 + 5496)) = 0;
    if (!(field8 == 0)) {
    const uint32_t field9 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field8 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field9 - 1)) != 0)) {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 24));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field11)(field8);
    }
    }
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((arg0 + 5536));
    *reinterpret_cast<uint64_t*>((arg0 + 5536)) = 0;
    if (field12 == 0) return field12;
    const uint32_t field13 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field12 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field13 - 1)) != 0) return field12;
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((field14 + 24));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field15)(field12,field15);
    return result3;
}

extern "C" unsigned char LeafData_deff20_0[];
extern "C" uint64_t LeafTarget_deff20(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_deff20(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_deff20_0) - 2976) + 2976);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 72));
    if (uint32_t(uint32_t(field0)) != 2) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field1 + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field2 - 1)) != 0) return field1;
    return LeafTarget_deff20(field1);
}

extern "C" unsigned char LeafData_deff60_0[];
extern "C" uint64_t RecoveredCall_deff60_0(uint64_t);
extern "C" void LeafTarget_deff60(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_deff60(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_deff60_0) - 2976) + 2976);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 72));
    if (!(uint32_t(uint32_t(field0)) != 2)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field1 + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field2 - 1)) != 0)) {
    const uint64_t result0 = RecoveredCall_deff60_0(field1);
    }
    }
    LeafTarget_deff60(arg0);
}

extern "C" unsigned char LeafData_df0b00_0[];
extern "C" uint64_t RecoveredCall_df0b00_0(uint64_t);
extern "C" unsigned char LeafData_df0b00_17[];
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_df0b00(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df0b00_0) - 3296) + 3296);
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = (((reinterpret_cast<uintptr_t>(LeafData_df0b00_0) - 3296) + 3296) + 64);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 104));
    if (!(uint32_t(uint32_t(field0)) != 2)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field1 + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field2 - 1)) != 0)) {
    const uint64_t result0 = RecoveredCall_df0b00_0(field1);
    }
    }
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df0b00_17) - 3184) + 3184);
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = (((reinterpret_cast<uintptr_t>(LeafData_df0b00_17) - 3184) + 3184) + 64);
    if (field3 == 0) return field3;
    const uint32_t field4 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field3 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field4 - 1)) != 0) return field3;
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field6)(field3,field6);
    return result1;
}

extern "C" unsigned char LeafData_df0b90_0[];
extern "C" uint64_t RecoveredCall_df0b90_0(uint64_t);
extern "C" unsigned char LeafData_df0b90_17[];
extern "C" void LeafTarget_df0b90(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_df0b90(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df0b90_0) - 3296) + 3296);
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = (((reinterpret_cast<uintptr_t>(LeafData_df0b90_0) - 3296) + 3296) + 64);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 104));
    if (!(uint32_t(uint32_t(field0)) != 2)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field1 + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field2 - 1)) != 0)) {
    const uint64_t result0 = RecoveredCall_df0b90_0(field1);
    }
    }
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df0b90_17) - 3184) + 3184);
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = (((reinterpret_cast<uintptr_t>(LeafData_df0b90_17) - 3184) + 3184) + 64);
    if (!(field3 == 0)) {
    const uint32_t field4 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field3 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field4 - 1)) != 0)) {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field6)(field3);
    }
    }
    LeafTarget_df0b90(arg0);
}

extern "C" unsigned char LeafData_df0d00_0[];
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_df0d00(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df0d00_0) - 3184) + 3184);
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = (((reinterpret_cast<uintptr_t>(LeafData_df0d00_0) - 3184) + 3184) + 64);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    if (field0 == 0) return field0;
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field1 - 1)) != 0) return field0;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field0,field3);
    return result0;
}

extern "C" unsigned char LeafData_df0d50_0[];
extern "C" void LeafTarget_df0d50(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_df0d50(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df0d50_0) - 3184) + 3184);
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = (((reinterpret_cast<uintptr_t>(LeafData_df0d50_0) - 3184) + 3184) + 64);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    LeafTarget_df0d50(arg0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_df1aa0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    if (field4 == 0) return field4;
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field4 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field5 - 1)) != 0) return field4;
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 24));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field7)(field4,field7);
    return result1;
}

extern "C" unsigned char LeafData_df3f40_0[];
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_df3f40(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df3f40_0) - 1456) + 1456);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (field0 == 0) return field0;
    *reinterpret_cast<uint8_t*>((field0 + 12)) = 0;
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field1 - 1)) != 0) return field0;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field0,field3);
    return result0;
}

extern "C" unsigned char LeafData_df3f80_0[];
extern "C" void LeafTarget_df3f80(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_df3f80(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df3f80_0) - 1456) + 1456);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint8_t*>((field0 + 12)) = 0;
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    LeafTarget_df3f80(arg0);
}

extern "C" unsigned char LeafData_df3fd0_0[];
extern "C" uint64_t LeafTarget_df3fd0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_df3fd0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df3fd0_0) - 1408) + 1408);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 32));
    if (uint32_t(uint32_t(field0)) != 2) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field1 + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field2 - 1)) != 0) return field1;
    return LeafTarget_df3fd0(field1);
}

extern "C" unsigned char LeafData_df4010_0[];
extern "C" uint64_t RecoveredCall_df4010_0(uint64_t);
extern "C" void LeafTarget_df4010(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_df4010(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df4010_0) - 1408) + 1408);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 32));
    if (!(uint32_t(uint32_t(field0)) != 2)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field1 + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field2 - 1)) != 0)) {
    const uint64_t result0 = RecoveredCall_df4010_0(field1);
    }
    }
    LeafTarget_df4010(arg0);
}

extern "C" unsigned char LeafData_df4150_0[];
extern "C" unsigned char LeafData_df4150_16[];
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_df4150(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df4150_0) - 1360) + 1360);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df4150_16) - 1456) + 1456);
    if (field4 == 0) return field4;
    *reinterpret_cast<uint8_t*>((field4 + 12)) = 0;
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field4 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field5 - 1)) != 0) return field4;
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field7)(field4,field7);
    return result1;
}

extern "C" unsigned char LeafData_df4870_0[];
extern "C" unsigned char LeafData_df4870_16[];
extern "C" unsigned char LeafData_df4870_30[];
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_df4870(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df4870_0) - 1728) + 1728);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df4870_16) - 1360) + 1360);
    if (!(field4 == 0)) {
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field4 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field5 - 1)) != 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field4);
    }
    }
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df4870_30) - 1456) + 1456);
    if (field8 == 0) return field8;
    *reinterpret_cast<uint8_t*>((field8 + 12)) = 0;
    const uint32_t field9 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field8 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field9 - 1)) != 0) return field8;
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field11)(field8,field11);
    return result2;
}

extern "C" unsigned char LeafData_df4930_0[];
extern "C" unsigned char LeafData_df4930_16[];
extern "C" unsigned char LeafData_df4930_30[];
extern "C" void LeafTarget_df4930(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_df4930(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df4930_0) - 1728) + 1728);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df4930_16) - 1360) + 1360);
    if (!(field4 == 0)) {
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field4 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field5 - 1)) != 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field4);
    }
    }
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df4930_30) - 1456) + 1456);
    if (!(field8 == 0)) {
    *reinterpret_cast<uint8_t*>((field8 + 12)) = 0;
    const uint32_t field9 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field8 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field9 - 1)) != 0)) {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field11)(field8);
    }
    }
    LeafTarget_df4930(arg0);
}

extern "C" unsigned char LeafData_df4e50_0[];
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_df4e50(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df4e50_0) - 1800) + 1800);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    if (field0 == 0) return field0;
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field1 - 1)) != 0) return field0;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field0,field3);
    return result0;
}

extern "C" unsigned char LeafData_df4e90_0[];
extern "C" void LeafTarget_df4e90(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_df4e90(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df4e90_0) - 1800) + 1800);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    LeafTarget_df4e90(arg0);
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_df7240(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    *reinterpret_cast<uint64_t*>((arg0 + 80)) = 0;
    }
    return uint32_t(0);
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_dfaad0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    *reinterpret_cast<uint64_t*>((arg0 + 80)) = 0;
    }
    return uint32_t(0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dfab60(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (field0 == 0) return field0;
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field1 - 1)) != 0) return field0;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field0,field3);
    return result0;
}

extern "C" unsigned char LeafData_dfab90_0[];
extern "C" unsigned char LeafData_dfab90_16[];
extern "C" void LeafTarget_dfab90(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_dfab90(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dfab90_0) - 3488) + 3488);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 752));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 728));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dfab90_16) - 3400) + 3400);
    if (!(field4 == 0)) {
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field4 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field5 - 1)) != 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field4);
    }
    }
    LeafTarget_dfab90(arg0);
}

extern "C" unsigned char LeafData_dfac20_0[];
extern "C" unsigned char LeafData_dfac20_16[];
extern "C" uint64_t RecoveredCall_dfac20_2(uint64_t);
extern "C" void LeafTarget_dfac20(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_dfac20(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dfac20_0) - 3488) + 3488);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 752));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 728));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dfac20_16) - 3400) + 3400);
    if (!(field4 == 0)) {
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field4 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field5 - 1)) != 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field4);
    }
    }
    const uint64_t result2 = RecoveredCall_dfac20_2(arg0);
    LeafTarget_dfac20(arg0);
}

extern "C" unsigned char LeafData_dfb230_0[];
extern "C" void LeafTarget_dfb230(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_dfb230(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dfb230_0) - 3400) + 3400);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 728));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    LeafTarget_dfb230(arg0);
}

extern "C" unsigned char LeafData_dfb280_0[];
extern "C" uint64_t RecoveredCall_dfb280_1(uint64_t);
extern "C" void LeafTarget_dfb280(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_dfb280(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dfb280_0) - 3400) + 3400);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 728));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    const uint64_t result1 = RecoveredCall_dfb280_1(arg0);
    LeafTarget_dfb280(arg0);
}

extern "C" unsigned char LeafData_dfb2e0_0[];
extern "C" unsigned char LeafData_dfb2e0_16[];
extern "C" void LeafTarget_dfb2e0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_dfb2e0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dfb2e0_0) - 3696) + 3696);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 752));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 728));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dfb2e0_16) - 3400) + 3400);
    if (!(field4 == 0)) {
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field4 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field5 - 1)) != 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field4);
    }
    }
    LeafTarget_dfb2e0(arg0);
}

extern "C" unsigned char LeafData_dfb370_0[];
extern "C" unsigned char LeafData_dfb370_16[];
extern "C" uint64_t RecoveredCall_dfb370_2(uint64_t);
extern "C" void LeafTarget_dfb370(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_dfb370(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dfb370_0) - 3696) + 3696);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 752));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 728));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dfb370_16) - 3400) + 3400);
    if (!(field4 == 0)) {
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field4 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field5 - 1)) != 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field4);
    }
    }
    const uint64_t result2 = RecoveredCall_dfb370_2(arg0);
    LeafTarget_dfb370(arg0);
}

extern "C" unsigned char LeafData_dfba70_0[];
extern "C" void LeafTarget_dfba70(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_dfba70(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dfba70_0) - 3808) + 3808);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    LeafTarget_dfba70(field4);
}

extern "C" unsigned char LeafData_dfbac0_0[];
extern "C" uint64_t RecoveredCall_dfbac0_1(uint64_t);
extern "C" void LeafTarget_dfbac0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_dfbac0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dfbac0_0) - 3808) + 3808);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint64_t result1 = RecoveredCall_dfbac0_1(field4);
    LeafTarget_dfbac0(arg0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dfc800(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 760));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 760));
    *reinterpret_cast<uint64_t*>((arg0 + 760)) = 0;
    if (field3 == 0) return field3;
    const uint32_t field4 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field3 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field4 - 1)) != 0) return field3;
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field6)(field3,field6);
    return result1;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dfd930(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((field0 + 16) + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((field0 + 16) + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(field2);
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (field0 == 0) return result0;
    if (uint32_t(uint32_t(field3)) != 1) return result0;
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)(field0,field5);
    return result1;
}

extern "C" unsigned char LeafData_dfd980_0[];
extern "C" uint64_t LeafTarget_dfd980(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dfd980(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dfd980_0) - 224) + 224);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 48));
    if (uint32_t(uint32_t(field0)) != 2) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field1 + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field2 - 1)) != 0) return field1;
    return LeafTarget_dfd980(field1);
}

extern "C" unsigned char LeafData_dfd9c0_0[];
extern "C" uint64_t RecoveredCall_dfd9c0_0(uint64_t);
extern "C" void LeafTarget_dfd9c0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_dfd9c0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dfd9c0_0) - 224) + 224);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 48));
    if (!(uint32_t(uint32_t(field0)) != 2)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field1 + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field2 - 1)) != 0)) {
    const uint64_t result0 = RecoveredCall_dfd9c0_0(field1);
    }
    }
    LeafTarget_dfd9c0(arg0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dfde00(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint32_t field0 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((arg0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field0 - 1)) != 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}

extern "C" unsigned char LeafData_dfdf00_0[];
extern "C" unsigned char LeafData_dfdf00_16[];
extern "C" uint64_t RecoveredCall_dfdf00_2(uint64_t);
extern "C" unsigned char LeafData_dfdf00_31[];
extern "C" uint64_t LeafTarget_dfdf00(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dfdf00(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dfdf00_0) - 624) + 624);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 104));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = ((reinterpret_cast<uintptr_t>(LeafData_dfdf00_16) - 3808) + 3808);
    if (!(field4 == 0)) {
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field4 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field5 - 1)) != 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field4);
    }
    }
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    const uint64_t result2 = RecoveredCall_dfdf00_2(field8);
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dfdf00_31) - 496) + 496);
    const uint32_t field9 = *reinterpret_cast<const uint32_t*>((arg0 + 32));
    if (uint32_t(uint32_t(field9)) != 2) return result2;
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint32_t field11 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field10 + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field11 - 1)) != 0) return field10;
    return LeafTarget_dfdf00(field10);
}

extern "C" unsigned char LeafData_dfdfc0_0[];
extern "C" unsigned char LeafData_dfdfc0_16[];
extern "C" uint64_t RecoveredCall_dfdfc0_2(uint64_t);
extern "C" unsigned char LeafData_dfdfc0_31[];
extern "C" uint64_t RecoveredCall_dfdfc0_3(uint64_t);
extern "C" void LeafTarget_dfdfc0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_dfdfc0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dfdfc0_0) - 624) + 624);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 104));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = ((reinterpret_cast<uintptr_t>(LeafData_dfdfc0_16) - 3808) + 3808);
    if (!(field4 == 0)) {
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field4 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field5 - 1)) != 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field4);
    }
    }
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    const uint64_t result2 = RecoveredCall_dfdfc0_2(field8);
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dfdfc0_31) - 496) + 496);
    const uint32_t field9 = *reinterpret_cast<const uint32_t*>((arg0 + 32));
    if (!(uint32_t(uint32_t(field9)) != 2)) {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint32_t field11 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field10 + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field11 - 1)) != 0)) {
    const uint64_t result3 = RecoveredCall_dfdfc0_3(field10);
    }
    }
    LeafTarget_dfdfc0(arg0);
}

extern "C" unsigned char LeafData_dfe730_0[];
extern "C" uint64_t LeafTarget_dfe730(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dfe730(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dfe730_0) - 496) + 496);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 32));
    if (uint32_t(uint32_t(field0)) != 2) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field1 + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field2 - 1)) != 0) return field1;
    return LeafTarget_dfe730(field1);
}

extern "C" unsigned char LeafData_e06870_0[];
extern "C" unsigned char LeafData_e06870_30[];
extern "C" uint64_t RecoveredCall_e06870_2(uint64_t);
extern "C" void LeafTarget_e06870(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_e06870(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_e06870_0) - 1528) + 1528);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 64)) = 0;
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    *reinterpret_cast<uint32_t*>((arg0 + 44)) = uint32_t(uint32_t(-1));
    *reinterpret_cast<uint64_t*>(((arg0 + 48) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 48) + 8)) = 0;
    if (!(field4 == 0)) {
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field4 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field5 - 1)) != 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field4);
    }
    }
    }
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_e06870_30) - 496) + 496);
    const uint32_t field8 = *reinterpret_cast<const uint32_t*>((arg0 + 32));
    if (!(uint32_t(uint32_t(field8)) != 2)) {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint32_t field10 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field9 + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field10 - 1)) != 0)) {
    const uint64_t result2 = RecoveredCall_e06870_2(field9);
    }
    }
    LeafTarget_e06870(arg0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e06950(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    if (field0 == 0) return field0;
    *reinterpret_cast<uint64_t*>((arg0 + 64)) = 0;
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    uint64_t merged4 = field0;
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
        merged4 = result0;
    }
    *reinterpret_cast<uint32_t*>((arg0 + 44)) = uint32_t(uint32_t(-1));
    *reinterpret_cast<uint64_t*>(((arg0 + 48) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 48) + 8)) = 0;
    return merged4;
}

extern "C" uint64_t RecoveredCall_e071d0_0(uint64_t);
extern "C" uint64_t RecoveredCall_e071d0_1(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e071d0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    if (!(field0 == 0)) {
    const uint64_t result0 = RecoveredCall_e071d0_0(field0);
    *reinterpret_cast<uint64_t*>((arg0 + 96)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t result1 = RecoveredCall_e071d0_1(field1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    *reinterpret_cast<uint64_t*>(((arg0 + 80) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 80) + 8)) = 0;
    if (field2 == 0) return field2;
    *reinterpret_cast<uint64_t*>((arg0 + 64)) = 0;
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field2 + 8) + 0)), 1, __ATOMIC_RELAXED);
    uint64_t merged6 = field2;
    if (!(uint32_t((field3 - 1)) != 0)) {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field2 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(field2);
        merged6 = result2;
    }
    *reinterpret_cast<uint32_t*>((arg0 + 44)) = uint32_t(uint32_t(-1));
    *reinterpret_cast<uint64_t*>(((arg0 + 48) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 48) + 8)) = 0;
    return merged6;
}

extern "C" uint64_t RecoveredCall_e083e0_1(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e083e0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 56));
    uint64_t merged5 = field0;
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((field0 + 72) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + 72) + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field3,field1);
    *reinterpret_cast<uint64_t*>((field0 + 56)) = 0;
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
        merged5 = field4;
    }
    const uint64_t result1 = RecoveredCall_e083e0_1(merged5);
    *reinterpret_cast<uint64_t*>((arg0 + 96)) = 0;
    }
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    if (field6 == 0) return field6;
    *reinterpret_cast<uint64_t*>((arg0 + 64)) = 0;
    const uint32_t field7 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field6 + 8) + 0)), 1, __ATOMIC_RELAXED);
    uint64_t merged10 = field6;
    if (!(uint32_t((field7 - 1)) != 0)) {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field6 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field9)(field6);
        merged10 = result2;
    }
    *reinterpret_cast<uint32_t*>((arg0 + 44)) = uint32_t(uint32_t(-1));
    *reinterpret_cast<uint64_t*>(((arg0 + 48) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 48) + 8)) = 0;
    return merged10;
}

extern "C" unsigned char LeafData_e08660_0[];
extern "C" unsigned char LeafData_e08660_30[];
extern "C" uint64_t RecoveredCall_e08660_2(uint64_t);
extern "C" void LeafTarget_e08660(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_e08660(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_e08660_0) - 1528) + 1528);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 64)) = 0;
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    *reinterpret_cast<uint32_t*>((arg0 + 44)) = uint32_t(uint32_t(-1));
    *reinterpret_cast<uint64_t*>(((arg0 + 48) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 48) + 8)) = 0;
    if (!(field4 == 0)) {
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field4 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field5 - 1)) != 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field4);
    }
    }
    }
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_e08660_30) - 496) + 496);
    const uint32_t field8 = *reinterpret_cast<const uint32_t*>((arg0 + 32));
    if (!(uint32_t(uint32_t(field8)) != 2)) {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint32_t field10 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field9 + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field10 - 1)) != 0)) {
    const uint64_t result2 = RecoveredCall_e08660_2(field9);
    }
    }
    LeafTarget_e08660(arg0);
}

extern "C" unsigned char LeafData_e09c30_0[];
extern "C" unsigned char LeafData_e09c30_15[];
extern "C" uint64_t RecoveredCall_e09c30_1(uint64_t);
extern "C" void LeafTarget_e09c30(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_e09c30(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_e09c30_0) - 1984) + 1984);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 832));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_e09c30_15) - 2104) + 2104);
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((arg0 + 32));
    if (!(uint32_t(uint32_t(field4)) != 2)) {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint32_t field6 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field5 + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field6 - 1)) != 0)) {
    const uint64_t result1 = RecoveredCall_e09c30_1(field5);
    }
    }
    LeafTarget_e09c30(arg0);
}

extern "C" unsigned char LeafData_e0a690_0[];
extern "C" uint64_t LeafTarget_e0a690(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e0a690(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_e0a690_0) - 2104) + 2104);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 32));
    if (uint32_t(uint32_t(field0)) != 2) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field1 + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field2 - 1)) != 0) return field1;
    return LeafTarget_e0a690(field1);
}

extern "C" unsigned char LeafData_e0d270_0[];
extern "C" uint64_t RecoveredCall_e0d270_0(uint64_t);
extern "C" uint64_t RecoveredCall_e0d270_1(uint64_t);
extern "C" void LeafTarget_e0d270(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_e0d270(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_e0d270_0) - 2608) + 2608);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    if (!(uint32_t(uint32_t(field0)) != 2)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field1 + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field2 - 1)) != 0)) {
    const uint64_t result0 = RecoveredCall_e0d270_0(field1);
    }
    }
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((arg0 + 32));
    if (!(uint32_t(uint32_t(field3)) != 2)) {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field4 + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field5 - 1)) != 0)) {
    const uint64_t result1 = RecoveredCall_e0d270_1(field4);
    }
    }
    LeafTarget_e0d270(arg0);
}

extern "C" unsigned char LeafData_e0df60_0[];
extern "C" uint64_t RecoveredCall_e0df60_0(uint64_t);
extern "C" uint64_t RecoveredCall_e0df60_1(uint64_t);
extern "C" unsigned char LeafData_e0df60_10[];
extern "C" uint64_t LeafTarget_e0df60(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e0df60(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_e0df60_0) - 2880) + 2880);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 824));
    if (!(field0 == 0)) {
    const uint64_t result0 = RecoveredCall_e0df60_0(field0);
    *reinterpret_cast<uint64_t*>((arg0 + 824)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 832));
    const uint64_t result1 = RecoveredCall_e0df60_1(field1);
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_e0df60_10) - 2104) + 2104);
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((arg0 + 32));
    if (uint32_t(uint32_t(field2)) != 2) return result1;
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint32_t field4 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field3 + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field4 - 1)) != 0) return field3;
    return LeafTarget_e0df60(field3);
}

extern "C" unsigned char LeafData_e0dfd0_0[];
extern "C" uint64_t RecoveredCall_e0dfd0_0(uint64_t);
extern "C" uint64_t RecoveredCall_e0dfd0_1(uint64_t);
extern "C" unsigned char LeafData_e0dfd0_10[];
extern "C" uint64_t RecoveredCall_e0dfd0_2(uint64_t);
extern "C" void LeafTarget_e0dfd0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_e0dfd0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_e0dfd0_0) - 2880) + 2880);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 824));
    if (!(field0 == 0)) {
    const uint64_t result0 = RecoveredCall_e0dfd0_0(field0);
    *reinterpret_cast<uint64_t*>((arg0 + 824)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 832));
    const uint64_t result1 = RecoveredCall_e0dfd0_1(field1);
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_e0dfd0_10) - 2104) + 2104);
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((arg0 + 32));
    if (!(uint32_t(uint32_t(field2)) != 2)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint32_t field4 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field3 + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field4 - 1)) != 0)) {
    const uint64_t result2 = RecoveredCall_e0dfd0_2(field3);
    }
    }
    LeafTarget_e0dfd0(arg0);
}

extern "C" unsigned char LeafData_e0e1e0_0[];
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e0e1e0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_e0e1e0_0) - 3000) + 3000);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 216));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 176));
    if (!(field4 == 0)) {
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field4 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field5 - 1)) != 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field4);
    }
    }
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 168));
    if (!(field8 == 0)) {
    const uint32_t field9 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field8 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field9 - 1)) != 0)) {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field11)(field8);
    }
    }
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((arg0 + 152));
    if (!(field12 == 0)) {
    const uint32_t field13 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field12 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field13 - 1)) != 0)) {
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((field14 + 8));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t)>(field15)(field12);
    }
    }
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((arg0 + 112));
    if (!(field16 == 0)) {
    const uint32_t field17 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field16 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field17 - 1)) != 0)) {
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((field18 + 8));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t)>(field19)(field16);
    }
    }
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>((arg0 + 104));
    if (!(field20 == 0)) {
    const uint32_t field21 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field20 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field21 - 1)) != 0)) {
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((field22 + 8));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t)>(field23)(field20);
    }
    }
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    if (!(field24 == 0)) {
    const uint32_t field25 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field24 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field25 - 1)) != 0)) {
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field24 + 0));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>((field26 + 8));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t)>(field27)(field24);
    }
    }
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    if (!(field28 == 0)) {
    const uint32_t field29 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field28 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field29 - 1)) != 0)) {
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>((field28 + 0));
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>((field30 + 8));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t)>(field31)(field28);
    }
    }
    const uint64_t field32 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    if (!(field32 == 0)) {
    const uint32_t field33 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field32 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field33 - 1)) != 0)) {
    const uint64_t field34 = *reinterpret_cast<const uint64_t*>((field32 + 0));
    const uint64_t field35 = *reinterpret_cast<const uint64_t*>((field34 + 8));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t)>(field35)(field32);
    }
    }
    const uint64_t field36 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    if (!(field36 == 0)) {
    const uint32_t field37 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field36 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field37 - 1)) != 0)) {
    const uint64_t field38 = *reinterpret_cast<const uint64_t*>((field36 + 0));
    const uint64_t field39 = *reinterpret_cast<const uint64_t*>((field38 + 8));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t)>(field39)(field36);
    }
    }
    const uint64_t field40 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (field40 == 0) return field40;
    const uint32_t field41 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field40 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field41 - 1)) != 0) return field40;
    const uint64_t field42 = *reinterpret_cast<const uint64_t*>((field40 + 0));
    const uint64_t field43 = *reinterpret_cast<const uint64_t*>((field42 + 8));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field43)(field40,field43);
    return result10;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e95720(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint32_t field0 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((arg0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field0 - 1)) != 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}

extern "C" unsigned char LeafData_ea2eb0_0[];
extern "C" uint64_t RecoveredCall_ea2eb0_0(uint64_t);
extern "C" void LeafTarget_ea2eb0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ea2eb0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_ea2eb0_0) - 280) + 280);
    const uint64_t result0 = RecoveredCall_ea2eb0_0((arg0 + uint32_t(5616)));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 5584));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    LeafTarget_ea2eb0(arg0);
}

extern "C" unsigned char LeafData_ea2f10_0[];
extern "C" uint64_t RecoveredCall_ea2f10_0(uint64_t);
extern "C" uint64_t RecoveredCall_ea2f10_2(uint64_t);
extern "C" void LeafTarget_ea2f10(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ea2f10(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_ea2f10_0) - 280) + 280);
    const uint64_t result0 = RecoveredCall_ea2f10_0((arg0 + uint32_t(5616)));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 5584));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    const uint64_t result2 = RecoveredCall_ea2f10_2(arg0);
    LeafTarget_ea2f10(arg0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ea6a50(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 2000));
    *reinterpret_cast<uint64_t*>((arg0 + 2000)) = 0;
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 4048));
    *reinterpret_cast<uint64_t*>((arg0 + 4048)) = 0;
    if (!(field4 == 0)) {
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field4 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field5 - 1)) != 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 24));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field4);
    }
    }
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 5496));
    *reinterpret_cast<uint64_t*>((arg0 + 5496)) = 0;
    if (!(field8 == 0)) {
    const uint32_t field9 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field8 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field9 - 1)) != 0)) {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 24));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field11)(field8);
    }
    }
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((arg0 + 5536));
    *reinterpret_cast<uint64_t*>((arg0 + 5536)) = 0;
    if (field12 == 0) return field12;
    const uint32_t field13 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field12 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field13 - 1)) != 0) return field12;
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((field14 + 24));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field15)(field12,field15);
    return result3;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ea7940(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint32_t field0 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((arg0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field0 - 1)) != 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(arg0,field2);
    return result0;
}

extern "C" unsigned char LeafData_ea7ad0_0[];
extern "C" uint64_t RecoveredCall_ea7ad0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ea7ad0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_ea7ad0_0) - 1656) + 1656);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 40)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    const uint64_t result0 = RecoveredCall_ea7ad0_0(field1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (field2 == 0) return field2;
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field2 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field3 - 1)) != 0) return field2;
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field2 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)(field2,field5);
    return result1;
}

extern "C" unsigned char LeafData_ea7b30_0[];
extern "C" uint64_t RecoveredCall_ea7b30_0(uint64_t);
extern "C" void LeafTarget_ea7b30(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ea7b30(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_ea7b30_0) - 1656) + 1656);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 40)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    const uint64_t result0 = RecoveredCall_ea7b30_0(field1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field2 == 0)) {
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field2 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field3 - 1)) != 0)) {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field2 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(field2);
    }
    }
    LeafTarget_ea7b30(arg0);
}

extern "C" unsigned char LeafData_eab7c0_12[];
extern "C" uint64_t RecoveredCall_eab7c0_9(uint64_t);
extern "C" uint64_t RecoveredCall_eab7c0_10(uint64_t);
extern "C" void LeafTarget_eab7c0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_eab7c0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 888));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 1096));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(field3);
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 296));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field8)(field6,((reinterpret_cast<uintptr_t>(LeafData_eab7c0_12) - 3084) + 3084),0);
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    *reinterpret_cast<uint64_t*>((arg0 + 96)) = 0;
    if (!(field9 == 0)) {
    const uint32_t field10 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field9 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field10 - 1)) != 0)) {
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field9 + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((field11 + 8));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t)>(field12)(field9);
    }
    }
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((arg0 + 120));
    *reinterpret_cast<uint64_t*>((arg0 + 120)) = 0;
    if (!(field13 == 0)) {
    const uint32_t field14 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field13 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field14 - 1)) != 0)) {
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((field13 + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((field15 + 8));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t)>(field16)(field13);
    }
    }
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((arg0 + 136));
    *reinterpret_cast<uint64_t*>((arg0 + 136)) = 0;
    if (!(field17 == 0)) {
    const uint32_t field18 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field17 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field18 - 1)) != 0)) {
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((field17 + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>((field19 + 8));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t)>(field20)(field17);
    }
    }
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((arg0 + 152));
    *reinterpret_cast<uint64_t*>((arg0 + 152)) = 0;
    if (!(field21 == 0)) {
    const uint32_t field22 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field21 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field22 - 1)) != 0)) {
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((field21 + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>((field23 + 8));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t)>(field24)(field21);
    }
    }
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    if (!(field25 == 0)) {
    const uint32_t field26 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field25 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field26 - 1)) != 0)) {
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>((field25 + 0));
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>((field27 + 24));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t)>(field28)(field25);
    }
    }
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    if (!(field29 == 0)) {
    const uint32_t field30 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field29 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field30 - 1)) != 0)) {
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>((field29 + 0));
    const uint64_t field32 = *reinterpret_cast<const uint64_t*>((field31 + 24));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t)>(field32)(field29);
    }
    }
    const uint64_t field33 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    const uint64_t result9 = RecoveredCall_eab7c0_9(field33);
    const uint64_t field34 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t result10 = RecoveredCall_eab7c0_10(field34);
    LeafTarget_eab7c0(result10);
}

extern "C" unsigned char LeafData_eafc10_0[];
extern "C" uint64_t RecoveredCall_eafc10_0(uint64_t);
extern "C" void LeafTarget_eafc10(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_eafc10(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_eafc10_0) - 2488) + 2488);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 136));
    if (!(uint32_t(uint32_t(field0)) != 2)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 120));
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field1 + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field2 - 1)) != 0)) {
    const uint64_t result0 = RecoveredCall_eafc10_0(field1);
    }
    }
    LeafTarget_eafc10(arg0);
}

extern "C" unsigned char LeafData_eafc60_0[];
extern "C" uint64_t RecoveredCall_eafc60_0(uint64_t);
extern "C" uint64_t RecoveredCall_eafc60_1(uint64_t);
extern "C" void LeafTarget_eafc60(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_eafc60(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_eafc60_0) - 2488) + 2488);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 136));
    if (!(uint32_t(uint32_t(field0)) != 2)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 120));
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field1 + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field2 - 1)) != 0)) {
    const uint64_t result0 = RecoveredCall_eafc60_0(field1);
    }
    }
    const uint64_t result1 = RecoveredCall_eafc60_1(arg0);
    LeafTarget_eafc60(arg0);
}

extern "C" unsigned char LeafData_eb0740_0[];
extern "C" void LeafTarget_eb0740(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_eb0740(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_eb0740_0) - 2992) + 2992);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 168));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 160));
    if (!(field4 == 0)) {
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field4 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field5 - 1)) != 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field4);
    }
    }
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 152));
    if (!(field8 == 0)) {
    const uint32_t field9 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field8 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field9 - 1)) != 0)) {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field11)(field8);
    }
    }
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((arg0 + 136));
    if (!(field12 == 0)) {
    const uint32_t field13 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field12 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field13 - 1)) != 0)) {
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((field14 + 8));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t)>(field15)(field12);
    }
    }
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((arg0 + 120));
    if (!(field16 == 0)) {
    const uint32_t field17 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field16 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field17 - 1)) != 0)) {
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((field18 + 8));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t)>(field19)(field16);
    }
    }
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    if (!(field20 == 0)) {
    const uint32_t field21 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field20 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field21 - 1)) != 0)) {
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((field22 + 8));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t)>(field23)(field20);
    }
    }
    LeafTarget_eb0740(arg0);
}

extern "C" unsigned char LeafData_eb0870_0[];
extern "C" uint64_t RecoveredCall_eb0870_6(uint64_t);
extern "C" void LeafTarget_eb0870(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_eb0870(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_eb0870_0) - 2992) + 2992);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 168));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 160));
    if (!(field4 == 0)) {
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field4 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field5 - 1)) != 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field4);
    }
    }
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 152));
    if (!(field8 == 0)) {
    const uint32_t field9 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field8 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field9 - 1)) != 0)) {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 8));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field11)(field8);
    }
    }
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((arg0 + 136));
    if (!(field12 == 0)) {
    const uint32_t field13 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field12 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field13 - 1)) != 0)) {
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((field14 + 8));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t)>(field15)(field12);
    }
    }
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((arg0 + 120));
    if (!(field16 == 0)) {
    const uint32_t field17 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field16 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field17 - 1)) != 0)) {
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((field18 + 8));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t)>(field19)(field16);
    }
    }
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    if (!(field20 == 0)) {
    const uint32_t field21 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field20 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field21 - 1)) != 0)) {
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((field22 + 8));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t)>(field23)(field20);
    }
    }
    const uint64_t result6 = RecoveredCall_eb0870_6(arg0);
    LeafTarget_eb0870(arg0);
}

extern "C" unsigned char LeafData_eb3a50_0[];
extern "C" uint64_t RecoveredCall_eb3a50_0(uint64_t);
extern "C" uint64_t RecoveredCall_eb3a50_1(uint64_t);
extern "C" uint64_t RecoveredCall_eb3a50_2(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_eb3a50(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_eb3a50_0) - 872) + 872);
    const uint64_t result0 = RecoveredCall_eb3a50_0((arg0 + 288));
    const uint64_t result1 = RecoveredCall_eb3a50_1((arg0 + 232));
    const uint64_t result2 = RecoveredCall_eb3a50_2((arg0 + 24));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (field0 == 0) return field0;
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field1 - 1)) != 0) return field0;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field0,field3);
    return result3;
}

extern "C" unsigned char LeafData_eb3ac0_0[];
extern "C" uint64_t RecoveredCall_eb3ac0_0(uint64_t);
extern "C" uint64_t RecoveredCall_eb3ac0_1(uint64_t);
extern "C" uint64_t RecoveredCall_eb3ac0_2(uint64_t);
extern "C" void LeafTarget_eb3ac0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_eb3ac0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_eb3ac0_0) - 872) + 872);
    const uint64_t result0 = RecoveredCall_eb3ac0_0((arg0 + 288));
    const uint64_t result1 = RecoveredCall_eb3ac0_1((arg0 + 232));
    const uint64_t result2 = RecoveredCall_eb3ac0_2((arg0 + 24));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    LeafTarget_eb3ac0(arg0);
}

extern "C" unsigned char LeafData_eb56f0_0[];
extern "C" uint64_t RecoveredCall_eb56f0_0(uint64_t);
extern "C" uint64_t LeafTarget_eb56f0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_eb56f0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_eb56f0_0) - 1568) + 1568);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t result0 = RecoveredCall_eb56f0_0(field0);
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((arg0 + 32));
    if (uint32_t(uint32_t(field1)) != 2) return result0;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field2 + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field3 - 1)) != 0) return field2;
    return LeafTarget_eb56f0(field2);
}

extern "C" unsigned char LeafData_eb5740_0[];
extern "C" uint64_t RecoveredCall_eb5740_0(uint64_t);
extern "C" uint64_t RecoveredCall_eb5740_1(uint64_t);
extern "C" void LeafTarget_eb5740(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_eb5740(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_eb5740_0) - 1568) + 1568);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t result0 = RecoveredCall_eb5740_0(field0);
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((arg0 + 32));
    if (!(uint32_t(uint32_t(field1)) != 2)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint32_t field3 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field2 + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field3 - 1)) != 0)) {
    const uint64_t result1 = RecoveredCall_eb5740_1(field2);
    }
    }
    LeafTarget_eb5740(arg0);
}

extern "C" unsigned char LeafData_eb7500_0[];
extern "C" uint64_t RecoveredCall_eb7500_0(uint64_t);
extern "C" uint64_t RecoveredCall_eb7500_1(uint64_t);
extern "C" uint64_t RecoveredCall_eb7500_2(uint64_t);
extern "C" uint64_t RecoveredCall_eb7500_3(uint64_t);
extern "C" uint64_t RecoveredCall_eb7500_4(uint64_t);
extern "C" uint64_t LeafTarget_eb7500(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_eb7500(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_eb7500_0) - 2152) + 2152);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 104));
    const uint64_t result0 = RecoveredCall_eb7500_0(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    if (!(field1 == 0)) {
    const uint64_t result1 = RecoveredCall_eb7500_1(field1);
    }
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    if (!(field2 == 0)) {
    const uint64_t result2 = RecoveredCall_eb7500_2(field2);
    }
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    if (!(field3 == 0)) {
    const uint64_t result3 = RecoveredCall_eb7500_3(field3);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t result4 = RecoveredCall_eb7500_4(field4);
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((arg0 + 32));
    if (uint32_t(uint32_t(field5)) != 2) return result4;
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint32_t field7 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field6 + 0)), 1, __ATOMIC_RELAXED);
    if (uint32_t((field7 - 1)) != 0) return field6;
    return LeafTarget_eb7500(field6);
}

extern "C" unsigned char LeafData_eb7720_0[];
extern "C" uint64_t RecoveredCall_eb7720_0(uint64_t);
extern "C" uint64_t RecoveredCall_eb7720_1(uint64_t);
extern "C" uint64_t RecoveredCall_eb7720_2(uint64_t);
extern "C" uint64_t RecoveredCall_eb7720_3(uint64_t);
extern "C" uint64_t RecoveredCall_eb7720_4(uint64_t);
extern "C" uint64_t RecoveredCall_eb7720_5(uint64_t);
extern "C" void LeafTarget_eb7720(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_eb7720(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_eb7720_0) - 2152) + 2152);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 104));
    const uint64_t result0 = RecoveredCall_eb7720_0(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    if (!(field1 == 0)) {
    const uint64_t result1 = RecoveredCall_eb7720_1(field1);
    }
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    if (!(field2 == 0)) {
    const uint64_t result2 = RecoveredCall_eb7720_2(field2);
    }
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    if (!(field3 == 0)) {
    const uint64_t result3 = RecoveredCall_eb7720_3(field3);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t result4 = RecoveredCall_eb7720_4(field4);
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((arg0 + 32));
    if (!(uint32_t(uint32_t(field5)) != 2)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint32_t field7 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((field6 + 0)), 1, __ATOMIC_RELAXED);
    if (!(uint32_t((field7 - 1)) != 0)) {
    const uint64_t result5 = RecoveredCall_eb7720_5(field6);
    }
    }
    LeafTarget_eb7720(arg0);
}
