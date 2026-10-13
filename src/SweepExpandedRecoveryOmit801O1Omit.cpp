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


extern "C" uint64_t RecoveredCall_1e5980_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1e5980_2(uint64_t);
extern "C" uint64_t RecoveredCall_1e5980_3(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1e5980(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 40));
    if (!(field1 == 0)) {
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    if (uint32_t(result0) == 0) return result0;
    }
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 120));
    if (!(field2 == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const int32_t field4 = *reinterpret_cast<const int32_t*>((field3 + 48));
    const uint64_t result1 = RecoveredCall_1e5980_1(field2,field4);
    }
    }
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((arg0 + 120));
    if (!(field5 == 0)) {
    const uint64_t result2 = RecoveredCall_1e5980_2(field5);
    }
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (!(field6 == 0)) {
    const uint64_t result3 = RecoveredCall_1e5980_3(field6);
    }
    *reinterpret_cast<uint64_t*>(((arg0 + 152) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 152) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 136) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 136) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 120) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 120) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 104) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 104) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 88) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 88) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 72) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 72) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 56) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 56) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 40) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 40) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 24) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 24) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 8) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 8) + 8)) = 0;
    return uint32_t(1);
}



extern "C" uint64_t RecoveredCall_2133f0_0(uint64_t);
extern "C" uint64_t RecoveredCall_2133f0_1(uint64_t);
extern "C" uint64_t RecoveredCall_2133f0_2(uint64_t);
extern "C" uint64_t RecoveredCall_2133f0_3(uint64_t);
extern "C" uint64_t RecoveredCall_2133f0_4(uint64_t);
extern "C" uint64_t RecoveredCall_2133f0_5(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2133f0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 32));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 24));
    const uint64_t result0 = RecoveredCall_2133f0_0(field1);
    if (result0 == 0) return result0;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    uint64_t merged5 = field2;
    if (!(field3 == 0)) {
    const uint64_t result1 = RecoveredCall_2133f0_1(field3);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
        merged5 = field4;
    }
    *reinterpret_cast<uint64_t*>((merged5 + 24)) = result0;
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg1 + 32));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 32));
    const uint64_t result2 = RecoveredCall_2133f0_2(field7);
    if (result2 == 0) return result2;
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 32));
    uint64_t merged11 = field8;
    if (!(field9 == 0)) {
    const uint64_t result3 = RecoveredCall_2133f0_3(field9);
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
        merged11 = field10;
    }
    *reinterpret_cast<uint64_t*>((merged11 + 32)) = result2;
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((arg1 + 32));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 40));
    const uint64_t result4 = RecoveredCall_2133f0_4(field13);
    if (result4 == 0) return result4;
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((field14 + 40));
    uint64_t merged17 = field14;
    if (!(field15 == 0)) {
    const uint64_t result5 = RecoveredCall_2133f0_5(field15);
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
        merged17 = field16;
    }
    *reinterpret_cast<uint64_t*>((merged17 + 40)) = result4;
    return uint32_t(1);
}



extern "C" uint64_t RecoveredCall_c3d700_1(uint64_t);
extern "C" uint64_t RecoveredCall_c3d700_2(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c3d700(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 48));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field2 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field4)(field1,field3);
    }
    const uint64_t result1 = RecoveredCall_c3d700_1(field0);
    const uint64_t result2 = RecoveredCall_c3d700_2(result1);
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (field5 == 0) return field5;
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 8));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field7)(field5,field7);
    return result3;
}
