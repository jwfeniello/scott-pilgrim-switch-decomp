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
extern "C" uint64_t RecoveredCall_6a40f0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_6a40f0(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_6a40f0_0(arg0);
    return result0;
}

extern "C" uint64_t RecoveredCall_6b2a90_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_6b2a90(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_6b2a90_0(arg0);
    return result0;
}

extern "C" uint64_t RecoveredCall_6b2ab0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_6b2ab0(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_6b2ab0_0(arg0);
    return result0;
}

extern "C" uint64_t RecoveredCall_6b4850_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_6b4850(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_6b4850_0(arg0);
    return result0;
}

extern "C" uint64_t RecoveredCall_6ba700_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_6ba700(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_6ba700_0(arg0);
    return result0;
}

extern "C" uint64_t RecoveredCall_7aa8d0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7aa8d0(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_7aa8d0_0(arg0);
    return result0;
}

extern "C" unsigned char LeafData_893630_0[];
extern "C" uint64_t RecoveredCall_893630_0(uint64_t);
extern "C" void LeafTarget_893630(uint64_t) noexcept;
extern "C" __attribute__((noinline)) void RecoveredLeaf_893630(uint64_t arg0) noexcept {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_893630_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    const uint64_t result0 = RecoveredCall_893630_0(field0);
    LeafTarget_893630(arg0);
}

extern "C" uint64_t RecoveredCall_8ac350_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8ac350(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8ac350_0(arg0);
    return result0;
}

extern "C" unsigned char LeafData_929090_0[];
extern "C" uint64_t RecoveredCall_929090_0(uint64_t);
extern "C" void LeafTarget_929090(uint64_t) noexcept;
extern "C" __attribute__((noinline)) void RecoveredLeaf_929090(uint64_t arg0) noexcept {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_929090_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 112));
    const uint64_t result0 = RecoveredCall_929090_0(field0);
    LeafTarget_929090(arg0);
}

extern "C" unsigned char LeafData_932780_0[];
extern "C" uint64_t RecoveredCall_932780_0(uint64_t);
extern "C" void LeafTarget_932780(uint64_t) noexcept;
extern "C" __attribute__((noinline)) void RecoveredLeaf_932780(uint64_t arg0) noexcept {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_932780_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    const uint64_t result0 = RecoveredCall_932780_0(field0);
    LeafTarget_932780(arg0);
}

extern "C" unsigned char LeafData_932a70_0[];
extern "C" uint64_t RecoveredCall_932a70_0(uint64_t);
extern "C" void LeafTarget_932a70(uint64_t) noexcept;
extern "C" __attribute__((noinline)) void RecoveredLeaf_932a70(uint64_t arg0) noexcept {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_932a70_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 104));
    const uint64_t result0 = RecoveredCall_932a70_0(field0);
    LeafTarget_932a70(arg0);
}

extern "C" uint64_t RecoveredCall_962d40_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_962d40(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_962d40_0(arg0);
    return result0;
}

extern "C" unsigned char LeafData_a89fa0_1[];
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_a89fa0(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_a89fa0_1);
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field0);
    return result0;
}

extern "C" unsigned char LeafData_a9e610_0[];
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_a9e610(uint64_t arg0) noexcept {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_a9e610_0);
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 32));
    if (uint32_t(uint32_t(field0)) == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field4)(field2,field1);
    return result0;
}

extern "C" unsigned char LeafData_a9e650_0[];
extern "C" void LeafTarget_a9e650(uint64_t) noexcept;
extern "C" __attribute__((noinline)) void RecoveredLeaf_a9e650(uint64_t arg0) noexcept {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_a9e650_0);
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 32));
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field2 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field4)(field1,field3);
    }
    LeafTarget_a9e650(arg0);
}

extern "C" unsigned char LeafData_b21480_0[];
extern "C" uint64_t RecoveredCall_b21480_0(uint64_t);
extern "C" void LeafTarget_b21480(uint64_t) noexcept;
extern "C" __attribute__((noinline)) void RecoveredLeaf_b21480(uint64_t arg0) noexcept {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_b21480_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 120));
    const uint64_t result0 = RecoveredCall_b21480_0(field0);
    LeafTarget_b21480(arg0);
}

extern "C" unsigned char LeafData_b23840_0[];
extern "C" uint64_t RecoveredCall_b23840_0(uint64_t);
extern "C" void LeafTarget_b23840(uint64_t) noexcept;
extern "C" __attribute__((noinline)) void RecoveredLeaf_b23840(uint64_t arg0) noexcept {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_b23840_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 152));
    const uint64_t result0 = RecoveredCall_b23840_0(field0);
    LeafTarget_b23840(arg0);
}

extern "C" unsigned char LeafData_b24400_0[];
extern "C" uint64_t RecoveredCall_b24400_0(uint64_t);
extern "C" void LeafTarget_b24400(uint64_t) noexcept;
extern "C" __attribute__((noinline)) void RecoveredLeaf_b24400(uint64_t arg0) noexcept {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_b24400_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 176));
    const uint64_t result0 = RecoveredCall_b24400_0(field0);
    LeafTarget_b24400(arg0);
}

extern "C" unsigned char LeafData_b25ee0_0[];
extern "C" uint64_t RecoveredCall_b25ee0_0(uint64_t);
extern "C" void LeafTarget_b25ee0(uint64_t) noexcept;
extern "C" __attribute__((noinline)) void RecoveredLeaf_b25ee0(uint64_t arg0) noexcept {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_b25ee0_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 144));
    const uint64_t result0 = RecoveredCall_b25ee0_0(field0);
    LeafTarget_b25ee0(arg0);
}

extern "C" unsigned char LeafData_b29410_0[];
extern "C" uint64_t RecoveredCall_b29410_0(uint64_t);
extern "C" void LeafTarget_b29410(uint64_t) noexcept;
extern "C" __attribute__((noinline)) void RecoveredLeaf_b29410(uint64_t arg0) noexcept {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_b29410_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 128));
    const uint64_t result0 = RecoveredCall_b29410_0(field0);
    LeafTarget_b29410(arg0);
}

extern "C" unsigned char LeafData_bccdf0_0[];
extern "C" uint64_t RecoveredCall_bccdf0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bccdf0(uint64_t arg0) noexcept {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_bccdf0_0);
    const uint64_t result0 = RecoveredCall_bccdf0_0(arg0);
    return result0;
}

extern "C" unsigned char LeafData_bcd1c0_1[];
extern "C" uint64_t RecoveredCall_bcd1c0_0(uint64_t);
extern "C" void LeafTarget_bcd1c0(uint64_t) noexcept;
extern "C" __attribute__((noinline)) void RecoveredLeaf_bcd1c0(uint64_t arg0) noexcept {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_bcd1c0_1);
    const uint64_t result0 = RecoveredCall_bcd1c0_0(arg0);
    LeafTarget_bcd1c0(arg0);
}

extern "C" uint64_t RecoveredCall_beadf0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_beadf0(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_beadf0_0(arg0);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c00940(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field0);
    return result0;
}

extern "C" unsigned char LeafData_c03490_0[];
extern "C" uint64_t RecoveredCall_c03490_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c03490(uint64_t arg0) noexcept {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_c03490_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    const uint64_t result0 = RecoveredCall_c03490_0(field0);
    return result0;
}

extern "C" unsigned char LeafData_c034c0_0[];
extern "C" uint64_t RecoveredCall_c034c0_0(uint64_t);
extern "C" void LeafTarget_c034c0(uint64_t) noexcept;
extern "C" __attribute__((noinline)) void RecoveredLeaf_c034c0(uint64_t arg0) noexcept {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_c034c0_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    const uint64_t result0 = RecoveredCall_c034c0_0(field0);
    LeafTarget_c034c0(arg0);
}

extern "C" uint64_t RecoveredCall_c16fc0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c16fc0(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_c16fc0_0(arg0);
    return result0;
}

extern "C" uint64_t RecoveredCall_c47010_0(uint64_t);
extern "C" void LeafTarget_c47010(uint64_t) noexcept;
extern "C" __attribute__((noinline)) void RecoveredLeaf_c47010(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_c47010_0(arg0);
    *reinterpret_cast<uint64_t*>((arg0 + 1528)) = result0;
    LeafTarget_c47010(arg0);
}

extern "C" unsigned char LeafData_c54c20_0[];
extern "C" uint64_t RecoveredCall_c54c20_0(uint64_t);
extern "C" uint64_t RecoveredCall_c54c20_1(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c54c20(uint64_t arg0) noexcept {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_c54c20_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = 0;
    const uint64_t result0 = RecoveredCall_c54c20_0(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint64_t result1 = RecoveredCall_c54c20_1(field1);
    return result1;
}

extern "C" uint64_t RecoveredCall_d14370_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d14370(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_d14370_0(arg0);
    return result0;
}

extern "C" uint64_t RecoveredCall_d17150_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d17150(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_d17150_0(arg0);
    return result0;
}

extern "C" uint64_t RecoveredCall_d175d0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d175d0(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_d175d0_0(arg0);
    return result0;
}

extern "C" unsigned char LeafData_d2fe10_2[];
extern "C" uint32_t LeafData_d2fe10_9;
extern "C" uint64_t LeafData_d2fe10_12;
extern "C" void LeafTarget_d2fe10(uint64_t) noexcept;
extern "C" __attribute__((noinline)) void RecoveredLeaf_d2fe10(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_d2fe10_2);
    if (!(field0 == 0)) {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((arg0 + 24));
    if (!((uint32_t(uint32_t(field1)) + 1) != 0)) {
    const uint32_t field2 = LeafData_d2fe10_9;
    if (!(uint32_t(uint32_t(field2)) == 0)) {
    const uint64_t field3 = LeafData_d2fe10_12;
    if (!(field3 == 0)) {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)(field3,field0);
    }
    }
    }
    }
    LeafTarget_d2fe10(arg0);
}

extern "C" unsigned char LeafData_d2fe70_1[];
extern "C" uint32_t LeafData_d2fe70_8;
extern "C" uint64_t LeafData_d2fe70_11;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d2fe70(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_d2fe70_1);
    if (field0 == 0) return arg0;
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((arg0 + 24));
    if ((uint32_t(uint32_t(field1)) + 1) != 0) return arg0;
    const uint32_t field2 = LeafData_d2fe70_8;
    if (uint32_t(uint32_t(field2)) == 0) return arg0;
    const uint64_t field3 = LeafData_d2fe70_11;
    if (field3 == 0) return field3;
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)(field3,field0);
    return result0;
}

extern "C" uint64_t RecoveredCall_d4e7c0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d4e7c0(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_d4e7c0_0(arg0);
    return result0;
}

extern "C" unsigned char LeafData_da5990_2[];
extern "C" uint32_t LeafData_da5990_9;
extern "C" uint64_t LeafData_da5990_12;
extern "C" void LeafTarget_da5990(uint64_t) noexcept;
extern "C" __attribute__((noinline)) void RecoveredLeaf_da5990(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_da5990_2);
    if (!(field0 == 0)) {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((arg0 + 24));
    if (!((uint32_t(uint32_t(field1)) + 1) != 0)) {
    const uint32_t field2 = LeafData_da5990_9;
    if (!(uint32_t(uint32_t(field2)) == 0)) {
    const uint64_t field3 = LeafData_da5990_12;
    if (!(field3 == 0)) {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)(field3,field0);
    }
    }
    }
    }
    LeafTarget_da5990(arg0);
}

extern "C" uint64_t RecoveredCall_db1460_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_db1460(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_db1460_0(arg0);
    return result0;
}

extern "C" uint64_t RecoveredCall_db1790_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_db1790(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_db1790_0(arg0);
    return result0;
}

extern "C" uint64_t RecoveredCall_db17b0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_db17b0(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_db17b0_0(arg0);
    return result0;
}

extern "C" uint64_t RecoveredCall_db18d0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_db18d0(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_db18d0_0(arg0);
    return result0;
}

extern "C" uint64_t RecoveredCall_db1c00_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_db1c00(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_db1c00_0(arg0);
    return result0;
}

extern "C" uint64_t RecoveredCall_db1c20_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_db1c20(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_db1c20_0(arg0);
    return result0;
}

extern "C" uint64_t RecoveredCall_db1d00_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_db1d00(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_db1d00_0(arg0);
    return result0;
}

extern "C" uint64_t RecoveredCall_db1fe0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_db1fe0(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_db1fe0_0(arg0);
    return result0;
}

extern "C" uint64_t RecoveredCall_db2000_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_db2000(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_db2000_0(arg0);
    return result0;
}

extern "C" uint64_t LeafData_ea7c60_0;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ea7c60(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t field0 = LeafData_ea7c60_0;
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field0)(arg0);
    return result0;
}

extern "C" uint64_t RecoveredCall_ec2760_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ec2760(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_ec2760_0(arg0);
    return result0;
}

extern "C" unsigned char LeafData_ec5310_0[];
extern "C" uint64_t RecoveredCall_ec5310_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ec5310(uint64_t arg0) noexcept {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_ec5310_0);
    const uint64_t result0 = RecoveredCall_ec5310_0(arg0);
    return result0;
}

extern "C" unsigned char LeafData_ec9fd0_0[];
extern "C" uint64_t RecoveredCall_ec9fd0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ec9fd0(uint64_t arg0) noexcept {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_ec9fd0_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    if (field1 == 0) return field1;
    const uint64_t result0 = RecoveredCall_ec9fd0_0(field1);
    return result0;
}

extern "C" unsigned char LeafData_eca000_0[];
extern "C" uint64_t RecoveredCall_eca000_0(uint64_t);
extern "C" uint64_t RecoveredCall_eca000_1(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_eca000(uint64_t arg0) noexcept {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_eca000_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    if (!(field1 == 0)) {
    const uint64_t result0 = RecoveredCall_eca000_0(field1);
    }
    }
    const uint64_t result1 = RecoveredCall_eca000_1(arg0);
    return result1;
}

extern "C" unsigned char LeafData_f10d50_0[];
extern "C" uint64_t RecoveredCall_f10d50_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_f10d50(uint64_t arg0) noexcept {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_f10d50_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 8) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 8) + 8));
    const uint64_t result0 = RecoveredCall_f10d50_0(field0,field1);
    return result0;
}

extern "C" unsigned char LeafData_f10d80_0[];
extern "C" uint64_t RecoveredCall_f10d80_0(uint64_t,uint64_t);
extern "C" void LeafTarget_f10d80(uint64_t) noexcept;
extern "C" __attribute__((noinline)) void RecoveredLeaf_f10d80(uint64_t arg0) noexcept {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_f10d80_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint64_t result0 = RecoveredCall_f10d80_0(field0,field1);
    LeafTarget_f10d80(arg0);
}

extern "C" uint64_t RecoveredCall_f11880_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_f11880(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    uint64_t merged1 = field0;
    if (!(field0 == 0)) {
    const uint64_t result0 = RecoveredCall_f11880_0(field0);
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = 0;
        merged1 = result0;
    }
    *reinterpret_cast<uint32_t*>((arg0 + 8)) = 0;
    return merged1;
}

extern "C" uint64_t RecoveredCall_f27f00_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_f27f00(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (field1 == 0) return field0;
    const uint64_t result0 = RecoveredCall_f27f00_0(field0);
    return result0;
}

extern "C" unsigned char LeafData_f29460_0[];
extern "C" uint64_t RecoveredCall_f29460_0(uint64_t);
extern "C" uint64_t RecoveredCall_f29460_1(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_f29460(uint64_t arg0) noexcept {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_f29460_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    if (!(field0 == 0)) {
    const uint64_t result0 = RecoveredCall_f29460_0(field0);
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    if (field1 == 0) return field1;
    const uint64_t result1 = RecoveredCall_f29460_1(field1);
    *reinterpret_cast<uint64_t*>((arg0 + 40)) = 0;
    return result1;
}

extern "C" unsigned char LeafData_f2b2c0_0[];
extern "C" uint64_t RecoveredCall_f2b2c0_0(uint64_t);
extern "C" uint64_t RecoveredCall_f2b2c0_1(uint64_t);
extern "C" uint64_t RecoveredCall_f2b2c0_2(uint64_t);
extern "C" uint64_t RecoveredCall_f2b2c0_3(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_f2b2c0(uint64_t arg0) noexcept {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_f2b2c0_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 136));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 160));
    if (!(field1 == 0)) {
    const uint64_t result0 = RecoveredCall_f2b2c0_0(field0);
    }
    }
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 104));
    if (!(field2 == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 128));
    if (!(field3 == 0)) {
    const uint64_t result1 = RecoveredCall_f2b2c0_1(field2);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    if (!(field4 == 0)) {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    if (!(field5 == 0)) {
    const uint64_t result2 = RecoveredCall_f2b2c0_2(field4);
    }
    }
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (field6 == 0) return field6;
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    if (field7 == 0) return field6;
    const uint64_t result3 = RecoveredCall_f2b2c0_3(field6);
    return result3;
}

extern "C" uint64_t RecoveredCall_f34b70_0(uint64_t);
extern "C" uint64_t RecoveredCall_f34b70_1(uint64_t);
extern "C" uint64_t RecoveredCall_f34b70_2(uint64_t);
extern "C" uint64_t RecoveredCall_f34b70_3(uint64_t);
extern "C" uint64_t RecoveredCall_f34b70_4(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_f34b70(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 136));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 160));
    if (!(field1 == 0)) {
    const uint64_t result0 = RecoveredCall_f34b70_0(field0);
    }
    }
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    if (!(field2 == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 120));
    if (!(field3 == 0)) {
    const uint64_t result1 = RecoveredCall_f34b70_1(field2);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    if (!(field4 == 0)) {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    if (!(field5 == 0)) {
    const uint64_t result2 = RecoveredCall_f34b70_2(field4);
    }
    }
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    if (!(field6 == 0)) {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    if (!(field7 == 0)) {
    const uint64_t result3 = RecoveredCall_f34b70_3(field6);
    }
    }
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (field8 == 0) return field8;
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (field9 == 0) return field8;
    const uint64_t result4 = RecoveredCall_f34b70_4(field8);
    return result4;
}

extern "C" uint64_t RecoveredCall_f65b50_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_f65b50(uint64_t arg0,uint64_t arg1) noexcept {
    LEAF_CHECK
    if (arg1 == 0) return arg0;
    const uint64_t result0 = RecoveredCall_f65b50_0(arg1);
    return result0;
}

extern "C" uint64_t RecoveredCall_f6ffb0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_f6ffb0(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_f6ffb0_0(arg0);
    return result0;
}

extern "C" unsigned char LeafData_f8cfe0_0[];
extern "C" uint64_t RecoveredCall_f8cfe0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_f8cfe0(uint64_t arg0) noexcept {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_f8cfe0_0);
    const uint64_t result0 = RecoveredCall_f8cfe0_0(arg0);
    return result0;
}

extern "C" uint64_t RecoveredCall_f98fb0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_f98fb0(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_f98fb0_0(arg0);
    return result0;
}

extern "C" uint64_t RecoveredCall_fa14e0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_fa14e0(uint64_t arg0) noexcept {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_fa14e0_0(arg0);
    return result0;
}
