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

extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_176e40(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 80) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 80) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    uint64_t merged5 = field0;
    if (!((uint32_t(field1) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field2 + (int64_t(field1) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field0));
        merged5 = field4;
    }
    const uint32_t field6 = *reinterpret_cast<const uint32_t*>((arg0 + 104));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field2 + (int64_t(field1) >> 1)),uint32_t(field6),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_17c020(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 80) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 80) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    uint64_t merged5 = field0;
    if (!((uint32_t(field1) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field2 + (int64_t(field1) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field0));
        merged5 = field4;
    }
    const uint32_t field6 = *reinterpret_cast<const uint32_t*>((arg0 + 104));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field2 + (int64_t(field1) >> 1)),uint32_t(field6),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_17e320(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 80) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 80) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    uint64_t merged5 = field0;
    if (!((uint32_t(field1) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field2 + (int64_t(field1) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field0));
        merged5 = field4;
    }
    const uint32_t field6 = *reinterpret_cast<const uint32_t*>((arg0 + 104));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field2 + (int64_t(field1) >> 1)),uint32_t(field6),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_187df0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 80) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 80) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    uint64_t merged5 = field0;
    if (!((uint32_t(field1) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field2 + (int64_t(field1) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field0));
        merged5 = field4;
    }
    const uint32_t field6 = *reinterpret_cast<const uint32_t*>((arg0 + 104));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field2 + (int64_t(field1) >> 1)),uint32_t(field6),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_1e7ee0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4) {
    LEAF_CHECK
    uint64_t merged2 = arg4;
    if (!(arg0 == 0)) {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg4 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = field1;
        merged2 = arg4;
    }
    if (!(arg1 == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((merged2 + 8));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = field4;
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((merged2 + 8));
    const uint32_t field6 = *reinterpret_cast<const uint32_t*>((field5 + 0));
    *reinterpret_cast<uint32_t*>((arg2 + 0)) = uint32_t(uint32_t(field6));
    }
    if (!(arg3 == 0)) {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((merged2 + 0));
    *reinterpret_cast<uint64_t*>((arg3 + 0)) = field7;
    }
    return uint32_t(1);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_20c7c0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    uint64_t merged1 = arg0;
    if (!(arg1 == 0)) {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = field0;
        merged1 = arg0;
    }
    if (!(arg2 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((merged1 + 16));
    *reinterpret_cast<uint64_t*>((arg2 + 0)) = field2;
    }
    if (arg3 == 0) return merged1;
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((merged1 + 32));
    *reinterpret_cast<uint64_t*>((arg3 + 0)) = field3;
    return merged1;
}

extern "C" uint64_t RecoveredCall_2428a0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_2428a0_1(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2428a0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 128));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 1008));
    uint64_t merged7 = field1;
    uint64_t merged8 = field0;
    if (!(field1 == 0)) {
    const int32_t field2 = *reinterpret_cast<const int32_t*>((field0 + 1004));
    const uint64_t result0 = RecoveredCall_2428a0_0(field1,field2);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 128));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 1008));
    const uint64_t result1 = RecoveredCall_2428a0_1(field4);
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((arg0 + 128));
    *reinterpret_cast<uint64_t*>((field5 + 1008)) = 0;
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 128));
        merged7 = result1;
        merged8 = field6;
    }
    *reinterpret_cast<uint32_t*>((merged8 + 1004)) = 0;
    return merged7;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_247460(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4,uint64_t arg5) {
    LEAF_CHECK
    uint64_t merged5 = arg0;
    if (!(arg4 != 0)) {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 136));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((field0 + 640));
    if (!(uint32_t(uint32_t(field1)) != 0)) {
    const uint16_t field2 = *reinterpret_cast<const uint16_t*>((field0 + 562));
    *reinterpret_cast<uint16_t*>((field0 + 560)) = uint32_t(uint32_t(field2));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 136));
    const uint16_t field4 = *reinterpret_cast<const uint16_t*>((field3 + 562));
    *reinterpret_cast<uint16_t*>((field3 + 562)) = uint32_t(uint32_t((uint32_t(uint32_t(field4)) + 1)));
    }
        merged5 = arg0;
    }
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((merged5 + 136));
    const uint16_t field7 = *reinterpret_cast<const uint16_t*>((field6 + 560));
    *reinterpret_cast<uint8_t*>((field6 + 656)) = uint32_t(arg2);
    *reinterpret_cast<uint64_t*>((field6 + 664)) = arg3;
    *reinterpret_cast<uint64_t*>((field6 + 680)) = arg4;
    *reinterpret_cast<uint16_t*>((field6 + 672)) = uint32_t(uint32_t(field7));
    *reinterpret_cast<uint64_t*>((field6 + 688)) = arg5;
    return (arg1 + 12);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_383aa0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 8) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 8) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    uint64_t merged5 = field0;
    if (!((uint32_t(field1) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field2 + (int64_t(field1) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field0));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t)>(merged5)((field2 + (int64_t(field1) >> 1)),arg2,arg3,arg3,merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_3c1760(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t merged1 = arg1;
    if (!(arg2 <= arg1)) {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 184));
        merged1 = field0;
    }
    return merged1;
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_4fc1f0(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>(((arg0 + 24) + 0));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>(((arg0 + 24) + 4));
    uint64_t merged2 = uint32_t(field0);
    if (!(uint32_t(uint32_t(field0)) <= uint32_t(uint32_t(field1)))) {
    *reinterpret_cast<uint32_t*>((arg0 + 24)) = uint32_t(uint32_t(field1));
        merged2 = uint32_t(uint32_t(uint32_t(field1)));
    }
    return uint32_t(uint32_t(merged2));
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_4fc2b0(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>(((arg0 + 24) + 0));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>(((arg0 + 24) + 4));
    uint64_t merged2 = uint32_t(field0);
    if (!(uint32_t(uint32_t(field0)) <= uint32_t(uint32_t(field1)))) {
    *reinterpret_cast<uint32_t*>((arg0 + 24)) = uint32_t(uint32_t(field1));
        merged2 = uint32_t(uint32_t(uint32_t(field1)));
    }
    *reinterpret_cast<uint32_t*>((arg0 + 24)) = uint32_t(uint32_t((uint32_t(merged2) - 4)));
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_51d560(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 8) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 8) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),field6,merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_51d5a0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 8) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 8) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),field6,merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_52e7b0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 8) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 8) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),field6,merged5);
    return result0;
}

extern "C" unsigned char LeafData_6d0450_0[];
extern "C" uint64_t RecoveredCall_6d0450_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_6d0450(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_6d0450_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    if (field0 == 0) return field0;
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((arg0 + 40));
    uint64_t merged2 = field0;
    if (!(uint32_t(uint32_t(field1)) == 0)) {
    const uint64_t result0 = RecoveredCall_6d0450_0(field0);
        merged2 = result0;
    }
    *reinterpret_cast<uint64_t*>(((arg0 + 16) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 16) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    return merged2;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_6dfed0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_6e8a20(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7051f0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),arg1,arg2,arg3,merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_705fe0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_707660(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_70e750(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_71b140(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),arg1,arg2,merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_71ded0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),arg1,arg2,arg3,arg4,merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_72d010(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7326c0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_78c850(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_796430(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7a2ae0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7a3550(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 176));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg0 + 112) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg0 + 112) + 8));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((arg0 + 128));
    uint64_t merged8 = field4;
    if (!((uint32_t(field5) & 0x1ull) == 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>(((field3 + (int64_t(field5) >> 1)) + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + field4));
        merged8 = field7;
    }
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged8)((field3 + (int64_t(field5) >> 1)),uint32_t(10000),merged8);
    return result1;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7c3bd0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7c3cc0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7c3fe0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7c9300(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7c9670(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7d24b0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7fa8c0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7fb080(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7fb380(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_804020(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_806900(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_847e30(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_84b6a0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_85b540(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_864c90(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 0) + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg0 + 0) + 8));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),arg1,merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_87dee0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_87fef0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8b1170(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8b9be0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8b9de0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8b9fe0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}

extern "C" uint64_t RecoveredCall_8bf2c0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8bf2c0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    *reinterpret_cast<uint8_t*>((arg0 + 24)) = uint32_t(uint32_t(1));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 64) + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg0 + 64) + 8));
    if (field0 == (field2 + (field1 << 6))) return arg0;
    *reinterpret_cast<uint8_t*>((field0 + 24)) = uint32_t(uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    if (field3 == 0) return arg0;
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 80));
    if (field4 == 0) return arg0;
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    if (uint32_t(field5) == 0) return arg0;
    uint64_t merged8 = arg0;
    if (!(field5 == 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field4 + 24));
    const uint64_t result0 = RecoveredCall_8bf2c0_0(((field6 + (field5 << 3)) - 8));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    *reinterpret_cast<uint64_t*>((field4 + 16)) = (field7 - 1);
        merged8 = result0;
    }
    *reinterpret_cast<uint64_t*>((field0 + 0)) = 0;
    return merged8;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8cc760(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8dd1f0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_91a550(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 240) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 240) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 256));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),uint32_t(10000),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_92f350(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),arg1,arg2,arg3,arg4,merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_937b40(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}

extern "C" uint64_t RecoveredCall_93f550_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_93f550(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_93f550_0(arg0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 496) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 496) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 512));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),uint32_t(10000),merged5);
    return result1;
}

extern "C" uint64_t RecoveredCall_959740_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_959740(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_959740_0(arg0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 640));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 656));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 648));
    uint64_t merged5 = field2;
    if (!((uint32_t(field1) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field1) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field2));
        merged5 = field4;
    }
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field1) >> 1)),uint32_t(10000),merged5);
    return result1;
}

extern "C" uint64_t RecoveredCall_9a3e10_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_9a3e10(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_9a3e10_0(arg0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 496) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 496) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 512));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),uint32_t(10000),merged5);
    return result1;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_9a8bf0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),merged5);
    return result0;
}

extern "C" uint64_t RecoveredCall_9c0660_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_9c0660(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_9c0660_0(arg0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 592));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 608));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 600));
    uint64_t merged5 = field2;
    if (!((uint32_t(field1) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field1) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field2));
        merged5 = field4;
    }
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field1) >> 1)),uint32_t(10000));
    *reinterpret_cast<uint8_t*>((arg0 + 320)) = 0;
    return result1;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_a0d700(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_a149f0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 144) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 144) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 160));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),uint32_t(10000),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_a5f280(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aada50(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    uint64_t merged3 = field0;
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 32));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
        merged3 = result0;
    }
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = 0;
    return merged3;
}

extern "C" uint64_t RecoveredCall_aafc70_1(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_aafc70(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 152));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    uint64_t merged3 = result0;
    if (!((uint32_t(result0) & 0x1ull) == 0)) {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((arg0 + 32));
    const uint64_t result1 = RecoveredCall_aafc70_1(uint32_t(field2));
    *reinterpret_cast<uint32_t*>((arg0 + 32)) = uint32_t(uint32_t(-1));
    *reinterpret_cast<uint8_t*>((arg0 + 12)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint32_t*>((arg0 + 16)) = uint32_t(uint32_t(-1));
        merged3 = result1;
    }
    *reinterpret_cast<uint32_t*>((arg0 + 8)) = 0;
    return merged3;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ac6ad0(uint64_t arg0) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 112));
    uint64_t merged5 = arg0;
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 176));
    uint64_t merged4 = field1;
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,arg0);
        merged4 = result0;
    }
        merged5 = merged4;
    }
    *reinterpret_cast<uint8_t*>((arg0 + 112)) = 0;
    return merged5;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_acc120(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_adf8f0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}

extern "C" uint64_t LeafData_ae1f60_6;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ae1f60(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    uint64_t merged3 = arg0;
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(arg0);
    if ((uint32_t(result0) & 0x1ull) == 0) return result0;
        merged3 = result0;
    }
    const uint64_t field4 = LeafData_ae1f60_6;
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((field4 + 440));
    *reinterpret_cast<uint32_t*>((field4 + 440)) = uint32_t(uint32_t((uint32_t(uint32_t(field5)) & 4294967294)));
    return merged3;
}

extern "C" uint64_t LeafData_aeb5a0_6;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aeb5a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    uint64_t merged3 = arg0;
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(arg0);
    if ((uint32_t(result0) & 0x1ull) == 0) return result0;
        merged3 = result0;
    }
    const uint64_t field4 = LeafData_aeb5a0_6;
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((field4 + 460));
    *reinterpret_cast<uint32_t*>((field4 + 460)) = uint32_t(uint32_t((uint32_t(uint32_t(field5)) | 1)));
    return merged3;
}

extern "C" uint64_t LeafData_aeb5e0_6;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aeb5e0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    uint64_t merged3 = arg0;
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(arg0);
    if ((uint32_t(result0) & 0x1ull) == 0) return result0;
        merged3 = result0;
    }
    const uint64_t field4 = LeafData_aeb5e0_6;
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((field4 + 460));
    *reinterpret_cast<uint32_t*>((field4 + 460)) = uint32_t(uint32_t((uint32_t(uint32_t(field5)) & 4294967294)));
    return merged3;
}

extern "C" uint64_t LeafData_aeb660_6;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aeb660(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    uint64_t merged3 = arg0;
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(arg0);
    if ((uint32_t(result0) & 0x1ull) == 0) return result0;
        merged3 = result0;
    }
    const uint64_t field4 = LeafData_aeb660_6;
    const uint8_t field5 = *reinterpret_cast<const uint8_t*>((field4 + 468));
    *reinterpret_cast<uint8_t*>((field4 + 468)) = uint32_t(uint32_t((uint32_t(uint32_t(field5)) | 3)));
    return merged3;
}

extern "C" uint64_t LeafData_aeb6a0_6;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aeb6a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    uint64_t merged3 = arg0;
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(arg0);
    if ((uint32_t(result0) & 0x1ull) == 0) return result0;
        merged3 = result0;
    }
    const uint64_t field4 = LeafData_aeb6a0_6;
    const uint8_t field5 = *reinterpret_cast<const uint8_t*>((field4 + 468));
    *reinterpret_cast<uint8_t*>((field4 + 468)) = uint32_t(uint32_t((uint32_t(uint32_t((uint32_t(uint32_t(field5)) & 252))) | 1)));
    return merged3;
}

extern "C" uint64_t LeafData_aebd20_6;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aebd20(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    uint64_t merged3 = arg0;
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(arg0);
    if ((uint32_t(result0) & 0x1ull) == 0) return result0;
        merged3 = result0;
    }
    const uint64_t field4 = LeafData_aebd20_6;
    *reinterpret_cast<uint8_t*>((field4 + uint32_t(11989))) = 0;
    return merged3;
}

extern "C" uint64_t LeafData_aebd60_6;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aebd60(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    uint64_t merged3 = arg0;
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(arg0);
    if ((uint32_t(result0) & 0x1ull) == 0) return result0;
        merged3 = result0;
    }
    const uint64_t field4 = LeafData_aebd60_6;
    *reinterpret_cast<uint8_t*>((field4 + uint32_t(11989))) = uint32_t(uint32_t(1));
    return merged3;
}

extern "C" uint64_t LeafData_aebdd0_6;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aebdd0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    uint64_t merged3 = arg0;
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(arg0);
    if ((uint32_t(result0) & 0x1ull) == 0) return result0;
        merged3 = result0;
    }
    const uint64_t field4 = LeafData_aebdd0_6;
    *reinterpret_cast<uint8_t*>((field4 + uint32_t(12064))) = uint32_t(uint32_t(1));
    return merged3;
}

extern "C" uint64_t LeafData_aebe10_6;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aebe10(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    uint64_t merged3 = arg0;
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(arg0);
    if ((uint32_t(result0) & 0x1ull) == 0) return result0;
        merged3 = result0;
    }
    const uint64_t field4 = LeafData_aebe10_6;
    *reinterpret_cast<uint8_t*>((field4 + uint32_t(12064))) = 0;
    return merged3;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aef450(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),merged5);
    return result0;
}

extern "C" uint64_t RecoveredCall_af1c20_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_af1c20(uint64_t arg0) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 384));
    *reinterpret_cast<uint8_t*>((arg0 + 372)) = 0;
    *reinterpret_cast<uint32_t*>((arg0 + 376)) = 0;
    uint64_t merged2 = arg0;
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint64_t result0 = RecoveredCall_af1c20_0((arg0 + 272));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((arg0 + 380));
    *reinterpret_cast<uint32_t*>((arg0 + 376)) = uint32_t(uint32_t(field1));
    *reinterpret_cast<uint8_t*>((arg0 + 384)) = uint32_t(uint32_t(1));
        merged2 = result0;
    }
    *reinterpret_cast<uint8_t*>((arg0 + 372)) = uint32_t(uint32_t(1));
    return merged2;
}

extern "C" uint64_t LeafData_afbc30_6;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_afbc30(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    uint64_t merged3 = arg0;
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(arg0);
    if ((uint32_t(result0) & 0x1ull) == 0) return result0;
        merged3 = result0;
    }
    const uint64_t field4 = LeafData_afbc30_6;
    const uint8_t field5 = *reinterpret_cast<const uint8_t*>((field4 + 468));
    *reinterpret_cast<uint8_t*>((field4 + 468)) = uint32_t(uint32_t((uint32_t(uint32_t(field5)) | 24)));
    return merged3;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b3ef00(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),arg1,arg2,merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b448f0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),arg1,arg2,merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b46bb0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 208));
    uint64_t merged3 = field0;
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
        merged3 = result0;
    }
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t((uint32_t(uint32_t(field4)) & 4294967293)));
    return merged3;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b4eb20(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}

extern "C" uint64_t LeafData_b670f0_6;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b670f0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    uint64_t merged3 = arg0;
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(arg0);
    if ((uint32_t(result0) & 0x1ull) == 0) return result0;
        merged3 = result0;
    }
    const uint64_t field4 = LeafData_b670f0_6;
    *reinterpret_cast<uint32_t*>((field4 + 9336)) = uint32_t(uint32_t(-16777216));
    return merged3;
}

extern "C" uint64_t LeafData_b67130_8;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b67130(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    uint64_t merged3 = arg0;
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(arg0);
    if ((uint32_t(result0) & 0x1ull) == 0) return result0;
        merged3 = result0;
    }
    const uint64_t field4 = LeafData_b67130_8;
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((arg0 + 8));
    *reinterpret_cast<uint32_t*>((field4 + 9336)) = uint32_t(uint32_t(field5));
    return merged3;
}

extern "C" uint64_t LeafData_b68ad0_6;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b68ad0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    uint64_t merged3 = arg0;
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(arg0);
    if ((uint32_t(result0) & 0x1ull) == 0) return result0;
        merged3 = result0;
    }
    const uint64_t field4 = LeafData_b68ad0_6;
    *reinterpret_cast<uint32_t*>((field4 + 11928)) = uint32_t(uint32_t(2));
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((field4 + 11920));
    *reinterpret_cast<uint32_t*>((field4 + 11920)) = uint32_t(uint32_t((uint32_t(uint32_t(field5)) - 1)));
    return merged3;
}

extern "C" uint64_t LeafData_b695b0_6;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b695b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    uint64_t merged3 = arg0;
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(arg0);
    if ((uint32_t(result0) & 0x1ull) == 0) return result0;
        merged3 = result0;
    }
    const uint64_t field4 = LeafData_b695b0_6;
    *reinterpret_cast<uint8_t*>((field4 + uint32_t(11988))) = uint32_t(uint32_t(1));
    return merged3;
}

extern "C" uint64_t LeafData_b695f0_6;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b695f0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    uint64_t merged3 = arg0;
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(arg0);
    if ((uint32_t(result0) & 0x1ull) == 0) return result0;
        merged3 = result0;
    }
    const uint64_t field4 = LeafData_b695f0_6;
    *reinterpret_cast<uint8_t*>((field4 + uint32_t(11988))) = 0;
    return merged3;
}

extern "C" uint64_t LeafData_b69670_6;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b69670(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    uint64_t merged3 = arg0;
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(arg0);
    if ((uint32_t(result0) & 0x1ull) == 0) return result0;
        merged3 = result0;
    }
    const uint64_t field4 = LeafData_b69670_6;
    const uint8_t field5 = *reinterpret_cast<const uint8_t*>((field4 + 468));
    *reinterpret_cast<uint8_t*>((field4 + 468)) = uint32_t(uint32_t((uint32_t(uint32_t(field5)) | 4)));
    return merged3;
}

extern "C" uint64_t LeafData_b697b0_6;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b697b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    uint64_t merged3 = arg0;
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(arg0);
    if ((uint32_t(result0) & 0x1ull) == 0) return result0;
        merged3 = result0;
    }
    const uint64_t field4 = LeafData_b697b0_6;
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((field4 + 460));
    *reinterpret_cast<uint32_t*>((field4 + 460)) = uint32_t(uint32_t((uint32_t(uint32_t((uint32_t(uint32_t(field5)) & 4294967265))) | 8)));
    return merged3;
}

extern "C" uint64_t LeafData_b69a50_6;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b69a50(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 112));
    uint64_t merged3 = arg0;
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(arg0);
    if ((uint32_t(result0) & 0x1ull) == 0) return result0;
        merged3 = result0;
    }
    const uint64_t field4 = LeafData_b69a50_6;
    const uint16_t field5 = *reinterpret_cast<const uint16_t*>((field4 + 476));
    *reinterpret_cast<uint16_t*>((field4 + 476)) = uint32_t(uint32_t((uint32_t(uint32_t(field5)) & 65534)));
    return merged3;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b71f00(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b87350(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b8b7d0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b8cc80(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bb13e0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bb14d0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bb15c0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bc73e0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bec200(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bf7020(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bf7430(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bf7840(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bf7f60(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bf84c0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bf88d0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bf8ce0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bff810(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),arg1,arg2,arg3,merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c00c40(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),arg1,arg2,arg3,merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c021b0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c0ef30(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 0) + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg0 + 0) + 8));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),arg1,merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c1f860(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c58a70(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 8));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c6cca0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 96) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 96) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 112));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),uint32_t(10000),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c720a0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c7f890(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c8cf50(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 200) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 200) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 216));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),uint32_t(10000),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c92f60(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c93380(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c95a70(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c9d710(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 176) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 176) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 192));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),uint32_t(10000),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ca1f00(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ca8ca0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 256));
    uint64_t merged3 = field0;
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
        merged3 = result0;
    }
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t((uint32_t(uint32_t(field4)) & 4294967293)));
    return merged3;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cc0130(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 48) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 48) + 8));
    uint64_t merged4 = field0;
    if (!((uint32_t(field1) & 0x1ull) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg1 + (int64_t(field1) >> 1)) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + field0));
        merged4 = field3;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(merged4)((arg1 + (int64_t(field1) >> 1)),arg2,arg2,merged4);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cc0150(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 8));
    uint64_t merged4 = field0;
    if (!((uint32_t(field1) & 0x1ull) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg1 + (int64_t(field1) >> 1)) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + field0));
        merged4 = field3;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(merged4)((arg1 + (int64_t(field1) >> 1)),arg2,arg2,merged4);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cc0360(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 48) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 48) + 8));
    uint64_t merged4 = field0;
    if (!((uint32_t(field1) & 0x1ull) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg1 + (int64_t(field1) >> 1)) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + field0));
        merged4 = field3;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(merged4)((arg1 + (int64_t(field1) >> 1)),arg2,arg2,merged4);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cc0380(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 8));
    uint64_t merged4 = field0;
    if (!((uint32_t(field1) & 0x1ull) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg1 + (int64_t(field1) >> 1)) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + field0));
        merged4 = field3;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(merged4)((arg1 + (int64_t(field1) >> 1)),arg2,arg2,merged4);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cc03e0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 48) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 48) + 8));
    uint64_t merged4 = field0;
    if (!((uint32_t(field1) & 0x1ull) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg1 + (int64_t(field1) >> 1)) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + field0));
        merged4 = field3;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(merged4)((arg1 + (int64_t(field1) >> 1)),arg2,arg2,merged4);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cc0400(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 8));
    uint64_t merged4 = field0;
    if (!((uint32_t(field1) & 0x1ull) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg1 + (int64_t(field1) >> 1)) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + field0));
        merged4 = field3;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(merged4)((arg1 + (int64_t(field1) >> 1)),arg2,arg2,merged4);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cc0560(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 48) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 48) + 8));
    uint64_t merged4 = field0;
    if (!((uint32_t(field1) & 0x1ull) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg1 + (int64_t(field1) >> 1)) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + field0));
        merged4 = field3;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(merged4)((arg1 + (int64_t(field1) >> 1)),arg2,arg2,merged4);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cc0580(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 8));
    uint64_t merged4 = field0;
    if (!((uint32_t(field1) & 0x1ull) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg1 + (int64_t(field1) >> 1)) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + field0));
        merged4 = field3;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(merged4)((arg1 + (int64_t(field1) >> 1)),arg2,arg2,merged4);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cc0670(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 48) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 48) + 8));
    uint64_t merged4 = field0;
    if (!((uint32_t(field1) & 0x1ull) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg1 + (int64_t(field1) >> 1)) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + field0));
        merged4 = field3;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(merged4)((arg1 + (int64_t(field1) >> 1)),arg2,arg2,merged4);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cc0690(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 8));
    uint64_t merged4 = field0;
    if (!((uint32_t(field1) & 0x1ull) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg1 + (int64_t(field1) >> 1)) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + field0));
        merged4 = field3;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(merged4)((arg1 + (int64_t(field1) >> 1)),arg2,arg2,merged4);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cc06f0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 48) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 48) + 8));
    uint64_t merged4 = field0;
    if (!((uint32_t(field1) & 0x1ull) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg1 + (int64_t(field1) >> 1)) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + field0));
        merged4 = field3;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(merged4)((arg1 + (int64_t(field1) >> 1)),arg2,arg2,merged4);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cc0710(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 8));
    uint64_t merged4 = field0;
    if (!((uint32_t(field1) & 0x1ull) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg1 + (int64_t(field1) >> 1)) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + field0));
        merged4 = field3;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(merged4)((arg1 + (int64_t(field1) >> 1)),arg2,arg2,merged4);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cc0870(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 48) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 48) + 8));
    uint64_t merged4 = field0;
    if (!((uint32_t(field1) & 0x1ull) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg1 + (int64_t(field1) >> 1)) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + field0));
        merged4 = field3;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(merged4)((arg1 + (int64_t(field1) >> 1)),arg2,arg2,merged4);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cc0890(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 8));
    uint64_t merged4 = field0;
    if (!((uint32_t(field1) & 0x1ull) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg1 + (int64_t(field1) >> 1)) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + field0));
        merged4 = field3;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(merged4)((arg1 + (int64_t(field1) >> 1)),arg2,arg2,merged4);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cc19c0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cc4fa0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cc6ea0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 48) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 48) + 8));
    uint64_t merged4 = field0;
    if (!((uint32_t(field1) & 0x1ull) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg1 + (int64_t(field1) >> 1)) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + field0));
        merged4 = field3;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(merged4)((arg1 + (int64_t(field1) >> 1)),arg2,arg2,merged4);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cc6ec0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 8));
    uint64_t merged4 = field0;
    if (!((uint32_t(field1) & 0x1ull) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg1 + (int64_t(field1) >> 1)) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + field0));
        merged4 = field3;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(merged4)((arg1 + (int64_t(field1) >> 1)),arg2,arg2,merged4);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cc6f20(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 48) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 48) + 8));
    uint64_t merged4 = field0;
    if (!((uint32_t(field1) & 0x1ull) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg1 + (int64_t(field1) >> 1)) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + field0));
        merged4 = field3;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(merged4)((arg1 + (int64_t(field1) >> 1)),arg2,arg2,merged4);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cc6f40(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 8));
    uint64_t merged4 = field0;
    if (!((uint32_t(field1) & 0x1ull) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg1 + (int64_t(field1) >> 1)) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + field0));
        merged4 = field3;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(merged4)((arg1 + (int64_t(field1) >> 1)),arg2,arg2,merged4);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cc72c0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 48) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 48) + 8));
    uint64_t merged4 = field0;
    if (!((uint32_t(field1) & 0x1ull) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg1 + (int64_t(field1) >> 1)) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + field0));
        merged4 = field3;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(merged4)((arg1 + (int64_t(field1) >> 1)),arg2,arg2,merged4);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cc72e0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 8));
    uint64_t merged4 = field0;
    if (!((uint32_t(field1) & 0x1ull) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg1 + (int64_t(field1) >> 1)) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + field0));
        merged4 = field3;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(merged4)((arg1 + (int64_t(field1) >> 1)),arg2,arg2,merged4);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cc78b0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 48) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 48) + 8));
    uint64_t merged4 = field0;
    if (!((uint32_t(field1) & 0x1ull) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg1 + (int64_t(field1) >> 1)) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + field0));
        merged4 = field3;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(merged4)((arg1 + (int64_t(field1) >> 1)),arg2,arg2,merged4);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cc78d0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 8));
    uint64_t merged4 = field0;
    if (!((uint32_t(field1) & 0x1ull) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg1 + (int64_t(field1) >> 1)) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + field0));
        merged4 = field3;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(merged4)((arg1 + (int64_t(field1) >> 1)),arg2,arg2,merged4);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ce0940(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ce2e30(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ce4690(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 176) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 176) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 192));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),uint32_t(10000),merged5);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ced9c0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)),(arg0 + 40),merged5);
    return result0;
}

extern "C" uint64_t RecoveredCall_cfd640_1(uint64_t);
extern "C" uint64_t LeafData_cfd640_9;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cfd640(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    if (uint32_t(result0) == 0) return result0;
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((arg0 + 24));
    uint64_t merged4 = result0;
    if (!(uint32_t(uint32_t(field2)) == 1)) {
    const uint64_t result1 = RecoveredCall_cfd640_1(result0);
    const uint64_t field3 = LeafData_cfd640_9;
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = (result1 - field3);
    *reinterpret_cast<uint32_t*>((arg0 + 24)) = uint32_t(uint32_t(1));
        merged4 = result1;
    }
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    return merged4;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cfff90(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 8));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((arg0 + 40));
    uint64_t merged3 = uint32_t(field1);
    if (!(int32_t(uint32_t(uint32_t(field0))) < int32_t(uint32_t(uint32_t(field1))))) {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((arg0 + 44));
    if (int32_t(uint32_t(uint32_t(field0))) <= int32_t(uint32_t(uint32_t(field2)))) return arg0;
        merged3 = uint32_t(field2);
    }
    *reinterpret_cast<uint32_t*>((arg0 + 8)) = uint32_t(merged3);
    return arg0;
}

extern "C" uint64_t RecoveredCall_d005a0_1(uint64_t);
extern "C" uint64_t LeafData_d005a0_9;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d005a0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    if (uint32_t(result0) == 0) return result0;
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((arg0 + 24));
    uint64_t merged4 = result0;
    if (!(uint32_t(uint32_t(field2)) == 1)) {
    const uint64_t result1 = RecoveredCall_d005a0_1(result0);
    const uint64_t field3 = LeafData_d005a0_9;
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = (result1 - field3);
    *reinterpret_cast<uint32_t*>((arg0 + 24)) = uint32_t(uint32_t(1));
        merged4 = result1;
    }
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    return merged4;
}

extern "C" uint64_t RecoveredCall_d1a420_1(uint64_t);
extern "C" uint64_t LeafData_d1a420_9;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d1a420(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    if (uint32_t(result0) == 0) return result0;
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((arg0 + 24));
    uint64_t merged4 = result0;
    if (!(uint32_t(uint32_t(field2)) == 1)) {
    const uint64_t result1 = RecoveredCall_d1a420_1(result0);
    const uint64_t field3 = LeafData_d1a420_9;
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = (result1 - field3);
    *reinterpret_cast<uint32_t*>((arg0 + 24)) = uint32_t(uint32_t(1));
        merged4 = result1;
    }
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    return merged4;
}

extern "C" uint32_t LeafData_d85c90_11;
extern "C" uint64_t LeafData_d85c90_14;
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d85c90(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 176));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 192));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 128));
    uint64_t merged12 = result0;
    if (!(field3 == 0)) {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(field3);
    const uint32_t field6 = LeafData_d85c90_11;
    uint64_t merged11 = result1;
    if (!(uint32_t(uint32_t(field6)) == 0)) {
    const uint64_t field7 = LeafData_d85c90_14;
    uint64_t merged10 = field7;
    if (!(field7 == 0)) {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field9)(field7,field3);
        merged10 = result2;
    }
        merged11 = merged10;
    }
    *reinterpret_cast<uint64_t*>((arg0 + 128)) = 0;
        merged12 = merged11;
    }
    *reinterpret_cast<uint32_t*>((arg0 + 16)) = 0;
    return merged12;
}

extern "C" uint64_t RecoveredCall_dd4340_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dd4340(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (field0 == 0) return field0;
    const uint64_t result0 = RecoveredCall_dd4340_0(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    uint64_t merged4 = field1;
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 8));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
        merged4 = result1;
    }
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = 0;
    return merged4;
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_dfb1d0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 8) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 8) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    uint64_t merged5 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + field1));
        merged5 = field4;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(merged5)((field0 + (int64_t(field2) >> 1)));
    return uint32_t(32);
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_dfce40(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 8) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 8) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    const uint8_t field3 = *reinterpret_cast<const uint8_t*>((arg0 + 32));
    uint64_t merged6 = field1;
    if (!((uint32_t(field2) & 0x1ull) == 0)) {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((field0 + (int64_t(field2) >> 1)) + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + field1));
        merged6 = field5;
    }
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(merged6)((field0 + (int64_t(field2) >> 1)),uint32_t((uint32_t(uint32_t(field3)) != 0)));
    return uint32_t(40);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e14eb0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    uint64_t merged3 = arg0;
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field1,field0);
        merged3 = result0;
    }
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 0) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 0) + 8)) = 0;
    return merged3;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e29ac0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged4 = arg0;
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 184));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field2,field0);
        merged4 = result0;
    }
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    *reinterpret_cast<uint32_t*>((arg0 + 24)) = 0;
    return merged4;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e2d6f0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    uint64_t merged3 = arg0;
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field1,field0);
        merged3 = result0;
    }
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 0) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 0) + 8)) = 0;
    return merged3;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e45ca0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    uint64_t merged3 = arg0;
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(field1,field0);
        merged3 = result0;
    }
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = 0;
    return merged3;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e47940(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged4 = arg0;
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 184));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field2,field0);
        merged4 = result0;
    }
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    *reinterpret_cast<uint32_t*>((arg0 + 24)) = 0;
    return merged4;
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e5bd50(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    uint64_t merged1 = arg0;
    if (!(arg1 == 0)) {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 288));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = field0;
        merged1 = arg0;
    }
    if (!(arg2 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((merged1 + 296));
    *reinterpret_cast<uint64_t*>((arg2 + 0)) = field2;
    }
    if (!(arg3 == 0)) {
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((merged1 + 304));
    *reinterpret_cast<uint32_t*>((arg3 + 0)) = uint32_t(uint32_t(field3));
    }
    return uint32_t(0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e634d0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged4 = arg0;
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 184));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field2,field0);
        merged4 = result0;
    }
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    *reinterpret_cast<uint32_t*>((arg0 + 24)) = 0;
    return merged4;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e7c850(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 40));
    uint64_t merged6 = arg0;
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    uint64_t merged5 = arg0;
    if (!(field2 == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field0 + 56));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field4)(field3,field2);
        merged5 = result0;
    }
    *reinterpret_cast<uint64_t*>((field0 + 0)) = 0;
        merged6 = merged5;
    }
    *reinterpret_cast<uint64_t*>(((field0 + 64) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((field0 + 64) + 8)) = 0;
    return merged6;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e88020(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    uint64_t merged1 = arg0;
    if (!(arg1 == 0)) {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 14888));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = field0;
        merged1 = arg0;
    }
    if (arg2 == 0) return merged1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((merged1 + 496));
    *reinterpret_cast<uint64_t*>((arg2 + 0)) = field2;
    return merged1;
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_ec9c70(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 5968));
    *reinterpret_cast<uint32_t*>((arg1 + 0)) = uint32_t(uint32_t(field0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 5960));
    uint64_t merged3 = field1;
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
        merged3 = field2;
    }
    *reinterpret_cast<uint64_t*>((arg2 + 0)) = merged3;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_f79db0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 512));
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((arg0 + 110));
    uint64_t merged4 = arg0;
    if (!(uint32_t(uint32_t(field1)) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 592));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(arg0);
        merged4 = result0;
    }
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((field0 + 24));
    *reinterpret_cast<uint32_t*>((field0 + 24)) = uint32_t(uint32_t((uint32_t(uint32_t(field5)) + 1)));
    return merged4;
}
