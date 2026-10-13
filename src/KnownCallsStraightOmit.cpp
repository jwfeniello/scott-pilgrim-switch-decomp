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
extern "C" void LeafTarget_1b98d0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1b98d0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    LeafTarget_1b98d0(arg0,arg1,uint32_t(16));
}

extern "C" void LeafTarget_1f4e00(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1f4e00(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    LeafTarget_1f4e00((arg0 + 72),(arg1 + 72),uint32_t(20));
}

extern "C" uint64_t RecoveredCall_2039d0_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_2039d0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (!(arg1 == 0)) {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const int32_t field2 = *reinterpret_cast<const int32_t*>((arg0 + 0));
    const uint64_t result0 = RecoveredCall_2039d0_0(field0,field1,field2);
    const int32_t field3 = *reinterpret_cast<const int32_t*>((arg0 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field4 + field3);
    }
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((arg0 + 0));
    return uint32_t(field5);
}

extern "C" uint64_t RecoveredCall_220110_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_220110(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    if (!(arg2 == arg1)) {
    const uint64_t result0 = RecoveredCall_220110_0(arg1,arg2,arg3);
    }
    return uint32_t(1);
}

extern "C" uint64_t RecoveredCall_23d990_0(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_23d990(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_23d990(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_23d990_0(arg0,0,0);
    LeafTarget_23d990(arg1,(arg0 + 64),((arg2 < 16) ? arg2 : uint32_t(16)));
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_5867b0(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = __atomic_load_n(reinterpret_cast<const uint32_t*>(((arg0 + 8) + 0)), __ATOMIC_ACQUIRE);
    const uint32_t field1 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((arg0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
}

extern "C" void LeafTarget_9ad030(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_9ad030(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    LeafTarget_9ad030(field0,arg1,uint32_t(2048));
}

extern "C" uint64_t RecoveredCall_dfd4c0_0(uint64_t);
extern "C" uint64_t RecoveredCall_dfd4c0_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_dfd4c0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_dfd4c0_0(arg0);
    const uint64_t result1 = RecoveredCall_dfd4c0_1((arg0 + 48),result0,uint32_t(448));
    *reinterpret_cast<uint8_t*>((arg0 + 24)) = uint32_t(uint32_t(1));
    return result1;
}

extern "C" uint64_t RecoveredCall_e06260_0(uint64_t);
extern "C" uint64_t RecoveredCall_e06260_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_e06260_2(uint64_t);
extern "C" unsigned char LeafData_e06260_13[];
struct RecoveredOutput_e06260 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_e06260 RecoveredLeaf_e06260(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_e06260 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t result0 = RecoveredCall_e06260_0(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    const uint64_t result1 = RecoveredCall_e06260_1(result0,field1,field0);
    const uint64_t result2 = RecoveredCall_e06260_2(uint32_t(112));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    *reinterpret_cast<uint32_t*>((result2 + 8)) = 0;
    *reinterpret_cast<uint64_t*>((result2 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_e06260_13) - 952) + 952);
    *reinterpret_cast<uint8_t*>((result2 + 16)) = 0;
    *reinterpret_cast<uint32_t*>((result2 + 32)) = 0;
    *reinterpret_cast<uint64_t*>(((result2 + 16) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((result2 + 16) + 8)) = 0;
    *reinterpret_cast<uint8_t*>((result2 + 40)) = 0;
    *reinterpret_cast<uint8_t*>((result2 + 48)) = 0;
    *reinterpret_cast<uint64_t*>((result2 + 56)) = 0;
    *reinterpret_cast<uint32_t*>((result2 + 64)) = 0;
    *reinterpret_cast<uint8_t*>((result2 + 104)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = result2;
    *reinterpret_cast<uint64_t*>(((result2 + 72) + 0)) = result0;
    *reinterpret_cast<uint64_t*>(((result2 + 72) + 8)) = field0;
    *reinterpret_cast<uint64_t*>(((result2 + 88) + 0)) = field2;
    *reinterpret_cast<uint64_t*>(((result2 + 88) + 8)) = 0;
    const uint32_t field3 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((result2 + 8) + 0)), 1, __ATOMIC_RELAXED);
    return output;
}
