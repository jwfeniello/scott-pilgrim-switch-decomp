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
extern "C" unsigned char LeafData_1fdcf0_3[];
extern "C" uint64_t RecoveredCall_1fdcf0_0(uint64_t,uint64_t,uint64_t);
extern "C" unsigned char LeafData_1fdcf0_8[];
extern "C" uint64_t RecoveredCall_1fdcf0_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1fdcf0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = arg2;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    const uint64_t result0 = RecoveredCall_1fdcf0_0(((reinterpret_cast<uintptr_t>(LeafData_1fdcf0_3) - 1801) + 1801),field0,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t result1 = RecoveredCall_1fdcf0_1(((reinterpret_cast<uintptr_t>(LeafData_1fdcf0_8) - 3407) + 3407),field1,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return field2;
}

extern "C" uint64_t RecoveredCall_203300_0(uint64_t,uint64_t);
extern "C" unsigned char LeafData_203300_8[];
extern "C" uint64_t RecoveredCall_203300_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_203300_2(uint64_t);
extern "C" uint64_t RecoveredCall_203300_3(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_203300_4(uint64_t,uint64_t);
extern "C" unsigned char LeafData_203300_27[];
extern "C" uint64_t RecoveredCall_203300_5(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_203300_6(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_203300(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = arg2;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const int32_t field2 = *reinterpret_cast<const int32_t*>((field0 + 0));
    const uint64_t result0 = RecoveredCall_203300_0(field1,field2);
    const uint64_t result1 = RecoveredCall_203300_1(((reinterpret_cast<uintptr_t>(LeafData_203300_8) - 2724) + 2724),result0,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    const uint64_t result2 = RecoveredCall_203300_2(result0);
    }
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    if (!(field3 == 0)) {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    const uint64_t result3 = RecoveredCall_203300_3(0,field3,field4);
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = result3;
    }
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((arg1 + 16));
    if (!(field5 == 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 8));
    const int32_t field7 = *reinterpret_cast<const int32_t*>((field5 + 0));
    const uint64_t result4 = RecoveredCall_203300_4(field6,field7);
    const uint64_t result5 = RecoveredCall_203300_5(((reinterpret_cast<uintptr_t>(LeafData_203300_27) - 879) + 879),result4,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    const uint64_t result6 = RecoveredCall_203300_6(result4);
    }
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return field8;
}

extern "C" uint64_t RecoveredCall_693d70_0(uint64_t,uint64_t,uint64_t);
struct RecoveredOutput_693d70 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_693d70 RecoveredLeaf_693d70(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_693d70 output;
    alignas(8) unsigned char stack_storage[8];
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 0));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((arg0 + 64));
    uint64_t merged4 = uint32_t(field0);
    if (!(uint32_t(uint32_t(field0)) != uint32_t(uint32_t(field1)))) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((field2 + 48));
        merged4 = uint32_t(field3);
    }
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint32_t field6 = *reinterpret_cast<const uint32_t*>((arg1 + 4));
    *reinterpret_cast<uint32_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8) + 0)) = uint32_t(merged4);
    *reinterpret_cast<uint32_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8) + 4)) = uint32_t(uint32_t(field6));
    const uint64_t result0 = RecoveredCall_693d70_0(reinterpret_cast<uintptr_t>(&output),field5,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return output;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_721150(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[16];
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 120));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(field0,(reinterpret_cast<uintptr_t>(stack_storage) + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 0));
    *reinterpret_cast<uint64_t*>((arg2 + 0)) = field2;
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 8));
    *reinterpret_cast<uint32_t*>((arg2 + 8)) = uint32_t(uint32_t(field3));
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7a3370(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    *reinterpret_cast<uint8_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = 0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(field0,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7a3390(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    *reinterpret_cast<uint8_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = 0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(field0,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return result0;
}

extern "C" uint64_t RecoveredCall_83a050_0(uint64_t);
extern "C" uint64_t RecoveredCall_83a050_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_83a050(uint64_t arg0) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    const uint64_t result0 = RecoveredCall_83a050_0(arg0);
    *reinterpret_cast<uint32_t*>((arg0 + 1664)) = 0;
    *reinterpret_cast<uint32_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = uint32_t(uint32_t(1));
    const uint64_t result1 = RecoveredCall_83a050_1(arg0,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return result1;
}

extern "C" uint64_t RecoveredCall_8408b0_0(uint64_t);
extern "C" unsigned char LeafData_8408b0_4[];
extern "C" uint64_t RecoveredCall_8408b0_1(uint64_t);
extern "C" uint64_t RecoveredCall_8408b0_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8408b0(uint64_t arg0) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_8408b0_0((field0 + 368));
    const uint64_t result1 = RecoveredCall_8408b0_1(((reinterpret_cast<uintptr_t>(LeafData_8408b0_4) - 1820) + 1820));
    *reinterpret_cast<uint32_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = uint32_t(result1);
    const uint64_t result2 = RecoveredCall_8408b0_2(result0,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    *reinterpret_cast<uint8_t*>((field0 + 568)) = uint32_t(uint32_t(1));
    return result2;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c020a0(uint64_t arg0) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = 0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 104));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 32));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field0,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return field3;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c4b3e0(uint64_t arg0) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field0,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c4bac0(uint64_t arg0) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field0,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return result0;
}

extern "C" uint64_t RecoveredCall_c4d770_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c4d770(uint64_t arg0) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint64_t result0 = RecoveredCall_c4d770_0(field0,uint32_t(1));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    if (field1 == 0) return field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = field2;
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field4)(field1,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return result1;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c4e090(uint64_t arg0) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field0,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c4e850(uint64_t arg0) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field0,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c4ef60(uint64_t arg0) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field0,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return result0;
}

extern "C" uint64_t RecoveredCall_c500f0_1(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c500f0(uint64_t arg0) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 240));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = field2;
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field4)(field1,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    }
    const uint64_t result1 = RecoveredCall_c500f0_1(field0);
    return result1;
}

extern "C" uint64_t RecoveredCall_c50710_1(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c50710(uint64_t arg0) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 240));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = field2;
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field4)(field1,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    }
    const uint64_t result1 = RecoveredCall_c50710_1(field0);
    return result1;
}

extern "C" uint64_t RecoveredCall_c509b0_1(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c509b0(uint64_t arg0) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((field0 + 272));
    if (!(uint32_t(uint32_t(field1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 240));
    if (!(field2 == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = field3;
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field2 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)(field2,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    }
    }
    const uint64_t result1 = RecoveredCall_c509b0_1(field0);
    return result1;
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_cc07c0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    *reinterpret_cast<uint32_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8)) = uint32_t(uint32_t(-16777216));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg3 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 40));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field1)(arg3,arg2,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field3)(arg0,arg1,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return uint32_t(1);
}

extern "C" uint64_t RecoveredCall_d84830_0(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d84830(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    const uint64_t result0 = RecoveredCall_d84830_0(arg0,arg1,arg2,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return result0;
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_dd2840(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[16];
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 0)) = arg1;
    *reinterpret_cast<uint32_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 8) + 0)) = uint32_t(arg2);
    *reinterpret_cast<uint32_t*>((((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 8) + 4)) = 0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field0)((reinterpret_cast<uintptr_t>(stack_storage) + 0),field1,uint32_t(2));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 12));
    return uint32_t(field2);
}

extern "C" uint64_t RecoveredCall_e29b10_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e29b10(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    const uint64_t result0 = RecoveredCall_e29b10_0(arg0,arg1,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    return field0;
}

extern "C" uint64_t RecoveredCall_e52e30_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e52e30(uint64_t arg0) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[8];
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 808));
    const uint64_t result0 = RecoveredCall_e52e30_0(field1,((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + -8) + 8));
    *reinterpret_cast<uint64_t*>((arg0 + 88)) = field2;
    if (field2 == 0) return result0;
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 0));
    if (field3 == 0) return result0;
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 176));
    if (field4 == 0) return result0;
    *reinterpret_cast<uint64_t*>((field3 + 160)) = field2;
    return result0;
}

extern "C" uint64_t RecoveredCall_e95320_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e95320(uint64_t arg0) {
    LEAF_CHECK
    alignas(8) unsigned char stack_storage[16];
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 808));
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 0)) = field0;
    *reinterpret_cast<uint32_t*>(((reinterpret_cast<uintptr_t>(stack_storage) + 0) + 8)) = uint32_t(uint32_t(1));
    const uint64_t result0 = RecoveredCall_e95320_0(arg0,(reinterpret_cast<uintptr_t>(stack_storage) + 0));
    return result0;
}
