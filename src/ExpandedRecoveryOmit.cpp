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

extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_3e560(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>(((arg0 + 8) + 0)), __ATOMIC_ACQUIRE);
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((field0 + 24));
    return uint32_t((uint32_t(uint32_t(field1)) == 1));
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4e7e0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0)), __ATOMIC_ACQUIRE);
    return (field0 + 120);
}

extern "C" void LeafTarget_51a30(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_51a30(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>((arg0 + 0)), __ATOMIC_ACQUIRE);
    LeafTarget_51a30(field0,(field0 + 112));
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_52410(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>(((arg0 + 8) + 0)), __ATOMIC_ACQUIRE);
    return (field0 + 40);
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_70800(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>(((arg0 + 8) + 0)), __ATOMIC_ACQUIRE);
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((field0 + 24));
    return uint32_t((uint32_t(uint32_t(field1)) == 2));
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_717e0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>(((arg0 + 8) + 0)), __ATOMIC_ACQUIRE);
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((field0 + 24));
    return uint32_t((uint32_t(uint32_t((uint32_t(uint32_t(field1)) - 3))) < 2));
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_72c90(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0)), __ATOMIC_ACQUIRE);
    return (field0 + 16);
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_72f90(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0)), __ATOMIC_ACQUIRE);
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((field0 + 72));
    return uint32_t(field1);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_73270(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0)), __ATOMIC_ACQUIRE);
    return (field0 + 40);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_795c0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>(((arg0 + 8) + 0)), __ATOMIC_ACQUIRE);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    return field1;
}

extern "C" void LeafTarget_79950(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_79950(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>(((arg0 + 8) + 0)), __ATOMIC_ACQUIRE);
    LeafTarget_79950(field0,arg1);
}

extern "C" void LeafTarget_95090(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_95090(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4,uint64_t arg5,uint64_t arg6) {
    LEAF_CHECK
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>((arg0 + 0)), __ATOMIC_ACQUIRE);
    LeafTarget_95090(field0,arg1,arg2,arg3,arg4,arg5,arg6);
}

extern "C" void LeafTarget_95380(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_95380(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>((arg0 + 0)), __ATOMIC_ACQUIRE);
    LeafTarget_95380(field0);
}

extern "C" void LeafTarget_957a0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_957a0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>((arg0 + 0)), __ATOMIC_ACQUIRE);
    LeafTarget_957a0(field0,(field0 + 104));
}

extern "C" void LeafTarget_957d0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_957d0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>((arg0 + 0)), __ATOMIC_ACQUIRE);
    LeafTarget_957d0(field0,(field0 + 152));
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b7bc0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0)), __ATOMIC_ACQUIRE);
    return (field0 + 200);
}

extern "C" uint64_t LeafTarget_d1a50(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d1a50(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>(((arg0 + 192) + 0)), __ATOMIC_ACQUIRE);
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((field0 + 24));
    if (uint32_t(uint32_t(field1)) != 1) return arg0;
    return LeafTarget_d1a50((arg0 + 184));
}

extern "C" void LeafTarget_e2f30(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_e2f30(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint8_t*>((arg0 + 400)) = uint32_t(uint32_t(1));
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>(((arg0 + 192) + 0)), __ATOMIC_ACQUIRE);
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((field0 + 24));
    LeafTarget_e2f30(arg0,uint32_t((uint32_t(uint32_t(field1)) == 1)));
}

extern "C" uint64_t LeafTarget_11fb30(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_11fb30(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>(((arg0 + 344) + 0)), __ATOMIC_ACQUIRE);
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((field0 + 24));
    if (uint32_t(uint32_t(field1)) != 1) return arg0;
    return LeafTarget_11fb30((arg0 + 336));
}

extern "C" unsigned char LeafData_1ba490_0[];
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1ba490(uint64_t arg0) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>(((reinterpret_cast<uintptr_t>(LeafData_1ba490_0) - 792) + 792));
    if ((uint32_t(uint32_t(field0)) & 0x1ull) != 0) return arg0;
    *reinterpret_cast<uint8_t*>(((reinterpret_cast<uintptr_t>(LeafData_1ba490_0) - 792) + 792)) = uint32_t(uint32_t(1));
    return arg0;
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_1c20c0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    *reinterpret_cast<uint16_t*>((field0 + 0)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field0 + 2);
    return uint32_t(2);
}

extern "C" unsigned char LeafData_1d97a0_4[];
extern "C" uint64_t RecoveredCall_1d97a0_0(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1d97a0_1(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1d97a0_2(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" unsigned char LeafData_1d97a0_24[];
extern "C" uint64_t RecoveredCall_1d97a0_3(uint64_t,uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1d97a0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3,uint64_t arg4) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_1d97a0_0(uint32_t(9),uint32_t(33),((reinterpret_cast<uintptr_t>(LeafData_1d97a0_4) - 2416) + 2416),uint32_t(526));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    const uint64_t result1 = RecoveredCall_1d97a0_1(field0,arg2,arg3,arg4);
    if (!(result1 != 0)) {
    const uint64_t result2 = RecoveredCall_1d97a0_2((arg0 + 48),arg1,arg2,arg3,arg4);
    }
    const uint64_t result3 = RecoveredCall_1d97a0_3(uint32_t(10),uint32_t(33),((reinterpret_cast<uintptr_t>(LeafData_1d97a0_24) - 2416) + 2416),uint32_t(533));
    return result1;
}

extern "C" unsigned char LeafData_21bcc0_1[];
extern "C" uint64_t RecoveredCall_21bcc0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_21bcc0_1(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_21bcc0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_21bcc0_0(uint32_t(320),((reinterpret_cast<uintptr_t>(LeafData_21bcc0_1) - 2102) + 2102),uint32_t(78));
    if (result0 == 0) return result0;
    *reinterpret_cast<uint64_t*>(((result0 + 0) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 0) + 8)) = 17179869184;
    *reinterpret_cast<uint64_t*>(((result0 + 16) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 16) + 8)) = 0;
    const uint64_t result1 = RecoveredCall_21bcc0_1((result0 + 32));
    *reinterpret_cast<uint64_t*>((arg0 + 40)) = result0;
    *reinterpret_cast<uint32_t*>((arg0 + 72)) = 0;
    return uint32_t(1);
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_32cd70(uint64_t arg0) {
    LEAF_CHECK
    __atomic_store_n(reinterpret_cast<uint8_t*>(((arg0 + 49) + 0)), 0, __ATOMIC_RELEASE);
}

struct RecoveredOutput_35b150 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_35b150 RecoveredLeaf_35b150(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_35b150 output;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 0));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((arg0 + 1164));
    *reinterpret_cast<uint32_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) - (uint32_t(uint32_t((uint32_t(uint32_t(field0)) / uint32_t(uint32_t(field1))))) * uint32_t(uint32_t(field1))))));
    return output;
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_38c530(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 3080));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    *reinterpret_cast<uint32_t*>(((arg0 + ((uint32_t(field0) - ((uint32_t(field0) / field1) * field1)) * uint32_t(48))) + 16)) = 0;
    *reinterpret_cast<uint8_t*>(((arg0 + ((uint32_t(field0) - ((uint32_t(field0) / field1) * field1)) * uint32_t(48))) + 20)) = 0;
    *reinterpret_cast<uint32_t*>((arg0 + 3080)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) - 1)));
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_436a90(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field1)((arg0 + 40),arg1,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_437120(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field1)((arg0 + 40),arg1,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4377b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field1)((arg0 + 40),arg1,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_438610(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field1)((arg0 + 40),arg1,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_43eb80(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field1)((arg0 + 40),arg1,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_43f210(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field1)((arg0 + 40),arg1,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_449260(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field1)((arg0 + 40),arg1,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_44add0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field1)((arg0 + 40),arg1,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_44df60(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field1)((arg0 + 40),arg1,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_44e500(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field1)((arg0 + 40),arg1,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_451e10(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field1)((arg0 + 40),arg1,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4b5da0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 48));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((field0 + 12));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + -88));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 976));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field3)((arg0 + -88),uint32_t(field1),field3);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4b5dc0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 48));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((field0 + 12));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + -88));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 984));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field3)((arg0 + -88),uint32_t(field1),field3);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4b5de0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 48));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + -96));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 976));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)((arg0 + -96),uint32_t(field0),field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4b5df0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 48));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + -96));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 984));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)((arg0 + -96),uint32_t(field0),field2);
    return result0;
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_4ebf00(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint8_t*>((arg0 + 24)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (arg0 + 24);
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = (arg0 + 24);
    *reinterpret_cast<uint32_t*>((arg0 + 8)) = uint32_t(uint32_t(256));
    *reinterpret_cast<uint16_t*>((arg0 + 280)) = uint32_t(uint32_t(256));
    *reinterpret_cast<uint8_t*>((arg0 + 282)) = uint32_t(uint32_t(1));
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_516770(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 16) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 16) + -8)) = (arg0 + 16);
    *reinterpret_cast<uint16_t*>(((arg0 + 16) + 16)) = uint32_t(uint32_t(1));
    return (arg0 + 16);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5854d0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 8));
    return ((((int64_t((field1 - field0)) >> 4) * ((-6148914691236517206 & 0xffffffffffff0000ull) | (43691ull << 0))) > arg1) ? (field0 + (arg1 * uint32_t(48))) : 0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_585820(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 8));
    return ((((int64_t((field1 - field0)) >> 4) * ((-6148914691236517206 & 0xffffffffffff0000ull) | (43691ull << 0))) > arg1) ? (field0 + (arg1 * uint32_t(48))) : 0);
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_58aa80(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = __atomic_load_n(reinterpret_cast<const uint32_t*>(((arg0 + 20) + 0)), __ATOMIC_ACQUIRE);
    return uint32_t(field0);
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_58aff0(uint64_t arg0) {
    LEAF_CHECK
    const uint8_t field0 = __atomic_load_n(reinterpret_cast<const uint8_t*>(((arg0 + 104) + 0)), __ATOMIC_ACQUIRE);
    return uint32_t((uint32_t(uint32_t(field0)) & 1));
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_59d250(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 472) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 472) + 8));
    return (field0 + (field1 * uint32_t(56)));
}

extern "C" unsigned char LeafData_67d670_0[];
extern "C" uint64_t RecoveredCall_67d670_0(uint64_t);
extern "C" void LeafTarget_67d670(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_67d670(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_67d670_0) - 1000) + 1000);
    const uint64_t result0 = RecoveredCall_67d670_0((arg0 + 88));
    LeafTarget_67d670(arg0);
}

extern "C" unsigned char LeafData_68d140_0[];
extern "C" uint64_t RecoveredCall_68d140_0(uint64_t);
extern "C" void LeafTarget_68d140(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_68d140(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_68d140_0) - 3976) + 3976);
    const uint64_t result0 = RecoveredCall_68d140_0((arg0 + 88));
    LeafTarget_68d140(arg0);
}

extern "C" unsigned char LeafData_68d170_0[];
extern "C" uint64_t RecoveredCall_68d170_0(uint64_t);
extern "C" uint64_t RecoveredCall_68d170_1(uint64_t);
extern "C" void LeafTarget_68d170(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_68d170(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_68d170_0) - 3976) + 3976);
    const uint64_t result0 = RecoveredCall_68d170_0((arg0 + 88));
    const uint64_t result1 = RecoveredCall_68d170_1(arg0);
    LeafTarget_68d170(arg0);
}

extern "C" unsigned char LeafData_696030_0[];
extern "C" uint64_t RecoveredCall_696030_0(uint64_t);
extern "C" void LeafTarget_696030(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_696030(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_696030_0) - 1048) + 1048);
    const uint64_t result0 = RecoveredCall_696030_0((arg0 + 80));
    LeafTarget_696030(arg0);
}

extern "C" unsigned char LeafData_696060_0[];
extern "C" uint64_t RecoveredCall_696060_0(uint64_t);
extern "C" uint64_t RecoveredCall_696060_1(uint64_t);
extern "C" void LeafTarget_696060(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_696060(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_696060_0) - 1048) + 1048);
    const uint64_t result0 = RecoveredCall_696060_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_696060_1(arg0);
    LeafTarget_696060(arg0);
}

extern "C" unsigned char LeafData_697990_0[];
extern "C" uint64_t RecoveredCall_697990_0(uint64_t);
extern "C" uint64_t RecoveredCall_697990_1(uint64_t);
extern "C" void LeafTarget_697990(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_697990(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_697990_0) - 1048) + 1048);
    const uint64_t result0 = RecoveredCall_697990_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_697990_1(arg0);
    LeafTarget_697990(arg0);
}

extern "C" unsigned char LeafData_699640_0[];
extern "C" uint64_t RecoveredCall_699640_0(uint64_t);
extern "C" void LeafTarget_699640(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_699640(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_699640_0) - 368) + 368);
    const uint64_t result0 = RecoveredCall_699640_0((arg0 + 80));
    LeafTarget_699640(arg0);
}

extern "C" unsigned char LeafData_699670_0[];
extern "C" uint64_t RecoveredCall_699670_0(uint64_t);
extern "C" uint64_t RecoveredCall_699670_1(uint64_t);
extern "C" void LeafTarget_699670(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_699670(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_699670_0) - 368) + 368);
    const uint64_t result0 = RecoveredCall_699670_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_699670_1(arg0);
    LeafTarget_699670(arg0);
}

extern "C" unsigned char LeafData_6a5fe0_0[];
extern "C" uint64_t RecoveredCall_6a5fe0_0(uint64_t);
extern "C" void LeafTarget_6a5fe0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_6a5fe0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_6a5fe0_0) - 1016) + 1016);
    const uint64_t result0 = RecoveredCall_6a5fe0_0((arg0 + 80));
    LeafTarget_6a5fe0(arg0);
}

extern "C" unsigned char LeafData_6a6010_0[];
extern "C" uint64_t RecoveredCall_6a6010_0(uint64_t);
extern "C" uint64_t RecoveredCall_6a6010_1(uint64_t);
extern "C" void LeafTarget_6a6010(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_6a6010(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_6a6010_0) - 1016) + 1016);
    const uint64_t result0 = RecoveredCall_6a6010_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_6a6010_1(arg0);
    LeafTarget_6a6010(arg0);
}

extern "C" unsigned char LeafData_6a83b0_0[];
extern "C" uint64_t RecoveredCall_6a83b0_0(uint64_t);
extern "C" void LeafTarget_6a83b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_6a83b0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_6a83b0_0) - 1664) + 1664);
    const uint64_t result0 = RecoveredCall_6a83b0_0((arg0 + 80));
    LeafTarget_6a83b0(arg0);
}

extern "C" unsigned char LeafData_6a83e0_0[];
extern "C" uint64_t RecoveredCall_6a83e0_0(uint64_t);
extern "C" uint64_t RecoveredCall_6a83e0_1(uint64_t);
extern "C" void LeafTarget_6a83e0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_6a83e0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_6a83e0_0) - 1664) + 1664);
    const uint64_t result0 = RecoveredCall_6a83e0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_6a83e0_1(arg0);
    LeafTarget_6a83e0(arg0);
}

extern "C" unsigned char LeafData_6a8e70_0[];
extern "C" uint64_t RecoveredCall_6a8e70_0(uint64_t);
extern "C" void LeafTarget_6a8e70(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_6a8e70(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_6a8e70_0) - 1832) + 1832);
    const uint64_t result0 = RecoveredCall_6a8e70_0((arg0 + 80));
    LeafTarget_6a8e70(arg0);
}

extern "C" unsigned char LeafData_6a8ea0_0[];
extern "C" uint64_t RecoveredCall_6a8ea0_0(uint64_t);
extern "C" uint64_t RecoveredCall_6a8ea0_1(uint64_t);
extern "C" void LeafTarget_6a8ea0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_6a8ea0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_6a8ea0_0) - 1832) + 1832);
    const uint64_t result0 = RecoveredCall_6a8ea0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_6a8ea0_1(arg0);
    LeafTarget_6a8ea0(arg0);
}

extern "C" unsigned char LeafData_6e44a0_0[];
extern "C" void LeafTarget_6e44a0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_6e44a0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_6e44a0_0) - 2416) + 2416);
    LeafTarget_6e44a0((arg0 + 8));
}

extern "C" unsigned char LeafData_6e44b0_0[];
extern "C" uint64_t RecoveredCall_6e44b0_0(uint64_t);
extern "C" void LeafTarget_6e44b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_6e44b0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_6e44b0_0) - 2416) + 2416);
    const uint64_t result0 = RecoveredCall_6e44b0_0((arg0 + 8));
    LeafTarget_6e44b0(arg0);
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_6ecd20(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = __atomic_load_n(reinterpret_cast<const uint32_t*>(((arg0 + 152) + 0)), __ATOMIC_ACQUIRE);
    return uint32_t(field0);
}

extern "C" unsigned char LeafData_6ed660_1[];
extern "C" void LeafTarget_6ed660(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_6ed660(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_6ed660_1) - 144) + 144);
    LeafTarget_6ed660((arg1 + 16),(arg0 + 16));
}

extern "C" unsigned char LeafData_6f5800_0[];
extern "C" void LeafTarget_6f5800(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_6f5800(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_6f5800_0) - 2216) + 2216);
    LeafTarget_6f5800((arg0 + 16));
}

extern "C" unsigned char LeafData_6f5810_0[];
extern "C" uint64_t RecoveredCall_6f5810_0(uint64_t);
extern "C" void LeafTarget_6f5810(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_6f5810(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_6f5810_0) - 2216) + 2216);
    const uint64_t result0 = RecoveredCall_6f5810_0((arg0 + 16));
    LeafTarget_6f5810(arg0);
}

extern "C" unsigned char LeafData_7011c0_0[];
extern "C" void LeafTarget_7011c0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7011c0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7011c0_0) - 3640) + 3640);
    LeafTarget_7011c0((arg0 + 16));
}

extern "C" unsigned char LeafData_7011d0_0[];
extern "C" uint64_t RecoveredCall_7011d0_0(uint64_t);
extern "C" void LeafTarget_7011d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7011d0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7011d0_0) - 3640) + 3640);
    const uint64_t result0 = RecoveredCall_7011d0_0((arg0 + 16));
    LeafTarget_7011d0(arg0);
}

extern "C" uint64_t RecoveredCall_708950_0(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_708950(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_708950(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_708950_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 75),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    LeafTarget_708950((arg0 + 80),arg1);
}

extern "C" unsigned char LeafData_7184c0_0[];
extern "C" uint64_t RecoveredCall_7184c0_0(uint64_t);
extern "C" void LeafTarget_7184c0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7184c0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7184c0_0) - 3776) + 3776);
    const uint64_t result0 = RecoveredCall_7184c0_0((arg0 + 80));
    LeafTarget_7184c0(arg0);
}

extern "C" unsigned char LeafData_7184f0_0[];
extern "C" uint64_t RecoveredCall_7184f0_0(uint64_t);
extern "C" uint64_t RecoveredCall_7184f0_1(uint64_t);
extern "C" void LeafTarget_7184f0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7184f0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7184f0_0) - 3776) + 3776);
    const uint64_t result0 = RecoveredCall_7184f0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_7184f0_1(arg0);
    LeafTarget_7184f0(arg0);
}

extern "C" unsigned char LeafData_71a8c0_0[];
extern "C" uint64_t RecoveredCall_71a8c0_0(uint64_t);
extern "C" void LeafTarget_71a8c0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_71a8c0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_71a8c0_0) - 352) + 352);
    const uint64_t result0 = RecoveredCall_71a8c0_0((arg0 + 80));
    LeafTarget_71a8c0(arg0);
}

extern "C" unsigned char LeafData_71a8f0_0[];
extern "C" uint64_t RecoveredCall_71a8f0_0(uint64_t);
extern "C" uint64_t RecoveredCall_71a8f0_1(uint64_t);
extern "C" void LeafTarget_71a8f0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_71a8f0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_71a8f0_0) - 352) + 352);
    const uint64_t result0 = RecoveredCall_71a8f0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_71a8f0_1(arg0);
    LeafTarget_71a8f0(arg0);
}

extern "C" unsigned char LeafData_71c3a0_0[];
extern "C" uint64_t RecoveredCall_71c3a0_0(uint64_t);
extern "C" void LeafTarget_71c3a0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_71c3a0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_71c3a0_0) - 1224) + 1224);
    const uint64_t result0 = RecoveredCall_71c3a0_0((arg0 + 80));
    LeafTarget_71c3a0(arg0);
}

extern "C" unsigned char LeafData_71c3d0_0[];
extern "C" uint64_t RecoveredCall_71c3d0_0(uint64_t);
extern "C" uint64_t RecoveredCall_71c3d0_1(uint64_t);
extern "C" void LeafTarget_71c3d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_71c3d0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_71c3d0_0) - 1224) + 1224);
    const uint64_t result0 = RecoveredCall_71c3d0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_71c3d0_1(arg0);
    LeafTarget_71c3d0(arg0);
}

extern "C" unsigned char LeafData_71c440_0[];
extern "C" uint64_t RecoveredCall_71c440_0(uint64_t);
extern "C" unsigned char LeafData_71c440_5[];
extern "C" uint64_t RecoveredCall_71c440_1(uint64_t);
extern "C" void LeafTarget_71c440(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_71c440(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_71c440_0) - 936) + 936);
    const uint64_t result0 = RecoveredCall_71c440_0((arg0 + 108));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_71c440_5) - 1224) + 1224);
    const uint64_t result1 = RecoveredCall_71c440_1((arg0 + 80));
    LeafTarget_71c440(arg0);
}

extern "C" unsigned char LeafData_71c480_0[];
extern "C" uint64_t RecoveredCall_71c480_0(uint64_t);
extern "C" unsigned char LeafData_71c480_5[];
extern "C" uint64_t RecoveredCall_71c480_1(uint64_t);
extern "C" uint64_t RecoveredCall_71c480_2(uint64_t);
extern "C" void LeafTarget_71c480(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_71c480(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_71c480_0) - 936) + 936);
    const uint64_t result0 = RecoveredCall_71c480_0((arg0 + 108));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_71c480_5) - 1224) + 1224);
    const uint64_t result1 = RecoveredCall_71c480_1((arg0 + 80));
    const uint64_t result2 = RecoveredCall_71c480_2(arg0);
    LeafTarget_71c480(arg0);
}

extern "C" uint64_t RecoveredCall_71c700_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_71c700_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_71c700_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_71c700(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_71c700_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_71c700_1((arg0 + 80),arg1,arg2);
    const uint64_t result2 = RecoveredCall_71c700_2((arg0 + 88),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 112),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 116),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 120),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 124),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 140),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result7)) << 0));
    return result7;
}

extern "C" uint64_t RecoveredCall_71d000_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_71d000_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_71d000_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_71d000(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_71d000_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_71d000_1((arg0 + 80),arg1,arg2);
    const uint64_t result2 = RecoveredCall_71d000_2((arg0 + 88),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 112),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 116),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 120),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 124),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result6)) << 0));
    return result6;
}

extern "C" unsigned char LeafData_71d1a0_0[];
extern "C" uint64_t RecoveredCall_71d1a0_0(uint64_t);
extern "C" unsigned char LeafData_71d1a0_5[];
extern "C" uint64_t RecoveredCall_71d1a0_1(uint64_t);
extern "C" void LeafTarget_71d1a0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_71d1a0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_71d1a0_0) - 936) + 936);
    const uint64_t result0 = RecoveredCall_71d1a0_0((arg0 + 108));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_71d1a0_5) - 1224) + 1224);
    const uint64_t result1 = RecoveredCall_71d1a0_1((arg0 + 80));
    LeafTarget_71d1a0(arg0);
}

extern "C" unsigned char LeafData_71d1f0_0[];
extern "C" uint64_t RecoveredCall_71d1f0_0(uint64_t);
extern "C" unsigned char LeafData_71d1f0_5[];
extern "C" uint64_t RecoveredCall_71d1f0_1(uint64_t);
extern "C" void LeafTarget_71d1f0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_71d1f0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_71d1f0_0) - 936) + 936);
    const uint64_t result0 = RecoveredCall_71d1f0_0((arg0 + 108));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_71d1f0_5) - 1224) + 1224);
    const uint64_t result1 = RecoveredCall_71d1f0_1((arg0 + 80));
    LeafTarget_71d1f0(arg0);
}

extern "C" unsigned char LeafData_71d230_0[];
extern "C" uint64_t RecoveredCall_71d230_0(uint64_t);
extern "C" unsigned char LeafData_71d230_5[];
extern "C" uint64_t RecoveredCall_71d230_1(uint64_t);
extern "C" uint64_t RecoveredCall_71d230_2(uint64_t);
extern "C" void LeafTarget_71d230(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_71d230(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_71d230_0) - 936) + 936);
    const uint64_t result0 = RecoveredCall_71d230_0((arg0 + 108));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_71d230_5) - 1224) + 1224);
    const uint64_t result1 = RecoveredCall_71d230_1((arg0 + 80));
    const uint64_t result2 = RecoveredCall_71d230_2(arg0);
    LeafTarget_71d230(arg0);
}

extern "C" uint64_t RecoveredCall_71d270_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_71d270_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_71d270_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_71d270(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_71d270_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_71d270_1((arg0 + 80),arg1,arg2);
    const uint64_t result2 = RecoveredCall_71d270_2((arg0 + 88),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 112),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 116),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 120),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 124),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 140),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 144),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result8)) << 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 0));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field25 + 48));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field26)(field24,(arg0 + 148),uint32_t(4));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field27 + (uint32_t(uint32_t(result9)) << 0));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 0));
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>((field29 + 48));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field30)(field28,(arg0 + 152),uint32_t(4));
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field31 + (uint32_t(uint32_t(result10)) << 0));
    return result10;
}

extern "C" unsigned char LeafData_71d7d0_0[];
extern "C" uint64_t RecoveredCall_71d7d0_0(uint64_t);
extern "C" unsigned char LeafData_71d7d0_5[];
extern "C" uint64_t RecoveredCall_71d7d0_1(uint64_t);
extern "C" void LeafTarget_71d7d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_71d7d0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_71d7d0_0) - 936) + 936);
    const uint64_t result0 = RecoveredCall_71d7d0_0((arg0 + 108));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_71d7d0_5) - 1224) + 1224);
    const uint64_t result1 = RecoveredCall_71d7d0_1((arg0 + 80));
    LeafTarget_71d7d0(arg0);
}

extern "C" unsigned char LeafData_71d810_0[];
extern "C" uint64_t RecoveredCall_71d810_0(uint64_t);
extern "C" unsigned char LeafData_71d810_5[];
extern "C" uint64_t RecoveredCall_71d810_1(uint64_t);
extern "C" uint64_t RecoveredCall_71d810_2(uint64_t);
extern "C" void LeafTarget_71d810(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_71d810(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_71d810_0) - 936) + 936);
    const uint64_t result0 = RecoveredCall_71d810_0((arg0 + 108));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_71d810_5) - 1224) + 1224);
    const uint64_t result1 = RecoveredCall_71d810_1((arg0 + 80));
    const uint64_t result2 = RecoveredCall_71d810_2(arg0);
    LeafTarget_71d810(arg0);
}

extern "C" uint64_t RecoveredCall_71d850_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_71d850_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_71d850_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_71d850(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_71d850_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_71d850_1((arg0 + 80),arg1,arg2);
    const uint64_t result2 = RecoveredCall_71d850_2((arg0 + 88),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 112),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 116),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 120),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 124),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 140),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 144),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result8)) << 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 0));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field25 + 48));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field26)(field24,(arg0 + 148),uint32_t(4));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field27 + (uint32_t(uint32_t(result9)) << 0));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 0));
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>((field29 + 48));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field30)(field28,(arg0 + 152),uint32_t(4));
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field32 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field31 + (uint32_t(uint32_t(result10)) << 0));
    const uint64_t field33 = *reinterpret_cast<const uint64_t*>((field32 + 0));
    const uint64_t field34 = *reinterpret_cast<const uint64_t*>((field33 + 48));
    const uint64_t result11 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field34)(field32,(arg0 + 156),uint32_t(4));
    const uint64_t field35 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field36 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field35 + (uint32_t(uint32_t(result11)) << 0));
    const uint64_t field37 = *reinterpret_cast<const uint64_t*>((field36 + 0));
    const uint64_t field38 = *reinterpret_cast<const uint64_t*>((field37 + 48));
    const uint64_t result12 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field38)(field36,(arg0 + 160),uint32_t(4));
    const uint64_t field39 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field39 + (uint32_t(uint32_t(result12)) << 0));
    return result12;
}

extern "C" unsigned char LeafData_727d90_0[];
extern "C" uint64_t RecoveredCall_727d90_0(uint64_t);
extern "C" void LeafTarget_727d90(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_727d90(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_727d90_0) - 3704) + 3704);
    const uint64_t result0 = RecoveredCall_727d90_0((arg0 + 80));
    LeafTarget_727d90(arg0);
}

extern "C" unsigned char LeafData_727dc0_0[];
extern "C" uint64_t RecoveredCall_727dc0_0(uint64_t);
extern "C" uint64_t RecoveredCall_727dc0_1(uint64_t);
extern "C" void LeafTarget_727dc0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_727dc0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_727dc0_0) - 3704) + 3704);
    const uint64_t result0 = RecoveredCall_727dc0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_727dc0_1(arg0);
    LeafTarget_727dc0(arg0);
}

extern "C" unsigned char LeafData_72d040_0[];
extern "C" void LeafTarget_72d040(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_72d040(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_72d040_0) - 712) + 712);
    LeafTarget_72d040((arg0 + 40));
}

extern "C" unsigned char LeafData_72d050_0[];
extern "C" uint64_t RecoveredCall_72d050_0(uint64_t);
extern "C" void LeafTarget_72d050(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_72d050(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_72d050_0) - 712) + 712);
    const uint64_t result0 = RecoveredCall_72d050_0((arg0 + 40));
    LeafTarget_72d050(arg0);
}

extern "C" unsigned char LeafData_733300_0[];
extern "C" uint64_t RecoveredCall_733300_0(uint64_t);
extern "C" void LeafTarget_733300(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_733300(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_733300_0) - 2200) + 2200);
    const uint64_t result0 = RecoveredCall_733300_0((arg0 + 80));
    LeafTarget_733300(arg0);
}

extern "C" unsigned char LeafData_733330_0[];
extern "C" uint64_t RecoveredCall_733330_0(uint64_t);
extern "C" uint64_t RecoveredCall_733330_1(uint64_t);
extern "C" void LeafTarget_733330(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_733330(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_733330_0) - 2200) + 2200);
    const uint64_t result0 = RecoveredCall_733330_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_733330_1(arg0);
    LeafTarget_733330(arg0);
}

extern "C" unsigned char LeafData_7336a0_0[];
extern "C" uint64_t RecoveredCall_7336a0_0(uint64_t);
extern "C" unsigned char LeafData_7336a0_5[];
extern "C" uint64_t RecoveredCall_7336a0_1(uint64_t);
extern "C" void LeafTarget_7336a0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7336a0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7336a0_0) - 2080) + 2080);
    const uint64_t result0 = RecoveredCall_7336a0_0((arg0 + 96));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7336a0_5) - 2200) + 2200);
    const uint64_t result1 = RecoveredCall_7336a0_1((arg0 + 80));
    LeafTarget_7336a0(arg0);
}

extern "C" unsigned char LeafData_7336e0_0[];
extern "C" uint64_t RecoveredCall_7336e0_0(uint64_t);
extern "C" unsigned char LeafData_7336e0_5[];
extern "C" uint64_t RecoveredCall_7336e0_1(uint64_t);
extern "C" uint64_t RecoveredCall_7336e0_2(uint64_t);
extern "C" void LeafTarget_7336e0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7336e0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7336e0_0) - 2080) + 2080);
    const uint64_t result0 = RecoveredCall_7336e0_0((arg0 + 96));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7336e0_5) - 2200) + 2200);
    const uint64_t result1 = RecoveredCall_7336e0_1((arg0 + 80));
    const uint64_t result2 = RecoveredCall_7336e0_2(arg0);
    LeafTarget_7336e0(arg0);
}

extern "C" unsigned char LeafData_736c90_0[];
extern "C" uint64_t RecoveredCall_736c90_0(uint64_t);
extern "C" unsigned char LeafData_736c90_5[];
extern "C" uint64_t RecoveredCall_736c90_1(uint64_t);
extern "C" void LeafTarget_736c90(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_736c90(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_736c90_0) - 2856) + 2856);
    const uint64_t result0 = RecoveredCall_736c90_0((arg0 + 144));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_736c90_5) - 4080) + 4080);
    const uint64_t result1 = RecoveredCall_736c90_1((arg0 + 80));
    LeafTarget_736c90(arg0);
}

extern "C" unsigned char LeafData_736cd0_0[];
extern "C" uint64_t RecoveredCall_736cd0_0(uint64_t);
extern "C" unsigned char LeafData_736cd0_5[];
extern "C" uint64_t RecoveredCall_736cd0_1(uint64_t);
extern "C" uint64_t RecoveredCall_736cd0_2(uint64_t);
extern "C" void LeafTarget_736cd0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_736cd0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_736cd0_0) - 2856) + 2856);
    const uint64_t result0 = RecoveredCall_736cd0_0((arg0 + 144));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_736cd0_5) - 4080) + 4080);
    const uint64_t result1 = RecoveredCall_736cd0_1((arg0 + 80));
    const uint64_t result2 = RecoveredCall_736cd0_2(arg0);
    LeafTarget_736cd0(arg0);
}

extern "C" unsigned char LeafData_7394d0_0[];
extern "C" uint64_t RecoveredCall_7394d0_0(uint64_t);
extern "C" void LeafTarget_7394d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7394d0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7394d0_0) - 3472) + 3472);
    const uint64_t result0 = RecoveredCall_7394d0_0((arg0 + 80));
    LeafTarget_7394d0(arg0);
}

extern "C" unsigned char LeafData_739620_0[];
extern "C" uint64_t RecoveredCall_739620_0(uint64_t);
extern "C" uint64_t RecoveredCall_739620_1(uint64_t);
extern "C" void LeafTarget_739620(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_739620(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_739620_0) - 3472) + 3472);
    const uint64_t result0 = RecoveredCall_739620_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_739620_1(arg0);
    LeafTarget_739620(arg0);
}

extern "C" unsigned char LeafData_739940_0[];
extern "C" uint64_t RecoveredCall_739940_0(uint64_t);
extern "C" void LeafTarget_739940(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_739940(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_739940_0) - 3960) + 3960);
    const uint64_t result0 = RecoveredCall_739940_0((arg0 + 80));
    LeafTarget_739940(arg0);
}

extern "C" unsigned char LeafData_739970_0[];
extern "C" uint64_t RecoveredCall_739970_0(uint64_t);
extern "C" uint64_t RecoveredCall_739970_1(uint64_t);
extern "C" void LeafTarget_739970(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_739970(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_739970_0) - 3960) + 3960);
    const uint64_t result0 = RecoveredCall_739970_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_739970_1(arg0);
    LeafTarget_739970(arg0);
}

extern "C" unsigned char LeafData_7642a0_0[];
extern "C" uint64_t RecoveredCall_7642a0_0(uint64_t);
extern "C" void LeafTarget_7642a0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7642a0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7642a0_0) - 2560) + 2560);
    const uint64_t result0 = RecoveredCall_7642a0_0((arg0 + 80));
    LeafTarget_7642a0(arg0);
}

extern "C" unsigned char LeafData_7642d0_0[];
extern "C" uint64_t RecoveredCall_7642d0_0(uint64_t);
extern "C" uint64_t RecoveredCall_7642d0_1(uint64_t);
extern "C" void LeafTarget_7642d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7642d0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7642d0_0) - 2560) + 2560);
    const uint64_t result0 = RecoveredCall_7642d0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_7642d0_1(arg0);
    LeafTarget_7642d0(arg0);
}

extern "C" uint64_t RecoveredCall_778f40_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_778f40(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    __atomic_store_n(reinterpret_cast<uint8_t*>(((field0 + 152) + 0)), 0, __ATOMIC_RELEASE);
    __atomic_store_n(reinterpret_cast<uint64_t*>(((field0 + 144) + 0)), 0, __ATOMIC_RELEASE);
    const uint64_t result0 = RecoveredCall_778f40_0(field0);
    *reinterpret_cast<uint16_t*>(((field0 + 345) + 0)) = 0;
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_783fd0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field3)((arg0 + 80),arg1,field3);
    return result1;
}

extern "C" unsigned char LeafData_788250_0[];
extern "C" void LeafTarget_788250(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_788250(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_788250_0) - 2488) + 2488);
    LeafTarget_788250((arg0 + 8));
}

extern "C" unsigned char LeafData_788260_0[];
extern "C" uint64_t RecoveredCall_788260_0(uint64_t);
extern "C" void LeafTarget_788260(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_788260(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_788260_0) - 2488) + 2488);
    const uint64_t result0 = RecoveredCall_788260_0((arg0 + 8));
    LeafTarget_788260(arg0);
}

extern "C" unsigned char LeafData_78fc30_0[];
extern "C" uint64_t RecoveredCall_78fc30_0(uint64_t);
extern "C" void LeafTarget_78fc30(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_78fc30(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_78fc30_0) - 3464) + 3464);
    const uint64_t result0 = RecoveredCall_78fc30_0((arg0 + 80));
    LeafTarget_78fc30(arg0);
}

extern "C" unsigned char LeafData_78fc60_0[];
extern "C" uint64_t RecoveredCall_78fc60_0(uint64_t);
extern "C" uint64_t RecoveredCall_78fc60_1(uint64_t);
extern "C" void LeafTarget_78fc60(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_78fc60(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_78fc60_0) - 3464) + 3464);
    const uint64_t result0 = RecoveredCall_78fc60_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_78fc60_1(arg0);
    LeafTarget_78fc60(arg0);
}

extern "C" unsigned char LeafData_795310_0[];
extern "C" uint64_t RecoveredCall_795310_0(uint64_t);
extern "C" void LeafTarget_795310(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_795310(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_795310_0) - 696) + 696);
    const uint64_t result0 = RecoveredCall_795310_0((arg0 + 80));
    LeafTarget_795310(arg0);
}

extern "C" unsigned char LeafData_795340_0[];
extern "C" uint64_t RecoveredCall_795340_0(uint64_t);
extern "C" uint64_t RecoveredCall_795340_1(uint64_t);
extern "C" void LeafTarget_795340(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_795340(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_795340_0) - 696) + 696);
    const uint64_t result0 = RecoveredCall_795340_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_795340_1(arg0);
    LeafTarget_795340(arg0);
}

extern "C" unsigned char LeafData_798aa0_0[];
extern "C" uint64_t RecoveredCall_798aa0_0(uint64_t);
extern "C" uint64_t RecoveredCall_798aa0_1(uint64_t);
extern "C" void LeafTarget_798aa0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_798aa0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_798aa0_0) - 696) + 696);
    const uint64_t result0 = RecoveredCall_798aa0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_798aa0_1(arg0);
    LeafTarget_798aa0(arg0);
}

extern "C" unsigned char LeafData_799ae0_0[];
extern "C" uint64_t RecoveredCall_799ae0_0(uint64_t);
extern "C" void LeafTarget_799ae0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_799ae0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_799ae0_0) - 1008) + 1008);
    const uint64_t result0 = RecoveredCall_799ae0_0((arg0 + 80));
    LeafTarget_799ae0(arg0);
}

extern "C" unsigned char LeafData_799b10_0[];
extern "C" uint64_t RecoveredCall_799b10_0(uint64_t);
extern "C" uint64_t RecoveredCall_799b10_1(uint64_t);
extern "C" void LeafTarget_799b10(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_799b10(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_799b10_0) - 1008) + 1008);
    const uint64_t result0 = RecoveredCall_799b10_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_799b10_1(arg0);
    LeafTarget_799b10(arg0);
}

extern "C" unsigned char LeafData_79b070_0[];
extern "C" uint64_t RecoveredCall_79b070_0(uint64_t);
extern "C" void LeafTarget_79b070(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_79b070(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_79b070_0) - 1512) + 1512);
    const uint64_t result0 = RecoveredCall_79b070_0((arg0 + 80));
    LeafTarget_79b070(arg0);
}

extern "C" unsigned char LeafData_79b0a0_0[];
extern "C" uint64_t RecoveredCall_79b0a0_0(uint64_t);
extern "C" uint64_t RecoveredCall_79b0a0_1(uint64_t);
extern "C" void LeafTarget_79b0a0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_79b0a0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_79b0a0_0) - 1512) + 1512);
    const uint64_t result0 = RecoveredCall_79b0a0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_79b0a0_1(arg0);
    LeafTarget_79b0a0(arg0);
}

extern "C" unsigned char LeafData_7a0d30_0[];
extern "C" uint64_t RecoveredCall_7a0d30_0(uint64_t);
extern "C" void LeafTarget_7a0d30(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7a0d30(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7a0d30_0) - 1952) + 1952);
    const uint64_t result0 = RecoveredCall_7a0d30_0((arg0 + 88));
    LeafTarget_7a0d30(arg0);
}

extern "C" uint64_t RecoveredCall_7a2360_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_7a2360_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_7a2360_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_7a2360_3(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_7a2360_4(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_7a2360_5(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_7a2360_6(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_7a2360_7(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_7a2360_8(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7a2360(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_7a2360_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg2 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 224));
    *reinterpret_cast<uint64_t*>((arg0 + 80)) = field1;
    const uint64_t result1 = RecoveredCall_7a2360_1((arg0 + 88),arg2);
    const uint64_t result2 = RecoveredCall_7a2360_2((arg0 + 96),arg2);
    const uint64_t result3 = RecoveredCall_7a2360_3((arg0 + 104),arg2);
    const uint64_t result4 = RecoveredCall_7a2360_4((arg0 + 112),arg2);
    const uint64_t result5 = RecoveredCall_7a2360_5((arg0 + 120),arg2);
    const uint64_t result6 = RecoveredCall_7a2360_6((arg0 + 128),arg2);
    const uint64_t result7 = RecoveredCall_7a2360_7((arg0 + 136),arg2);
    const uint64_t result8 = RecoveredCall_7a2360_8((arg0 + 144),arg2);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 48));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field4)(field2,(arg0 + 392),uint32_t(4));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field5 + (uint32_t(uint32_t(result9)) << 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 48));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field8)(field6,(arg0 + 396),uint32_t(4));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field9 + (uint32_t(uint32_t(result10)) << 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((field11 + 48));
    const uint64_t result11 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field12)(field10,(arg0 + 404),uint32_t(4));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field13 + (uint32_t(uint32_t(result11)) << 0));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((field14 + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((field15 + 48));
    const uint64_t result12 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field16)(field14,(arg0 + 408),uint32_t(1));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field17 + (uint32_t(uint32_t(result12)) << 0));
    const uint32_t field18 = *reinterpret_cast<const uint32_t*>((arg0 + 404));
    *reinterpret_cast<uint32_t*>((arg0 + 400)) = uint32_t(uint32_t(field18));
    return result12;
}

extern "C" unsigned char LeafData_7abeb0_0[];
extern "C" uint64_t RecoveredCall_7abeb0_0(uint64_t);
extern "C" void LeafTarget_7abeb0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7abeb0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7abeb0_0) - 560) + 560);
    const uint64_t result0 = RecoveredCall_7abeb0_0((arg0 + 80));
    LeafTarget_7abeb0(arg0);
}

extern "C" unsigned char LeafData_7abee0_0[];
extern "C" uint64_t RecoveredCall_7abee0_0(uint64_t);
extern "C" uint64_t RecoveredCall_7abee0_1(uint64_t);
extern "C" void LeafTarget_7abee0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7abee0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7abee0_0) - 560) + 560);
    const uint64_t result0 = RecoveredCall_7abee0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_7abee0_1(arg0);
    LeafTarget_7abee0(arg0);
}

extern "C" uint64_t RecoveredCall_7abf10_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_7abf10_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_7abf10_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7abf10(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_7abf10_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_7abf10_1((arg0 + 80),arg1,arg2);
    const uint64_t result2 = RecoveredCall_7abf10_2((arg0 + 88),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 96),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    return result3;
}

extern "C" unsigned char LeafData_7ac230_0[];
extern "C" uint64_t RecoveredCall_7ac230_0(uint64_t);
extern "C" uint64_t RecoveredCall_7ac230_1(uint64_t);
extern "C" void LeafTarget_7ac230(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7ac230(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7ac230_0) - 560) + 560);
    const uint64_t result0 = RecoveredCall_7ac230_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_7ac230_1(arg0);
    LeafTarget_7ac230(arg0);
}

extern "C" uint64_t RecoveredCall_7ac2c0_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7ac2c0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_7ac2c0_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 76),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    return result1;
}

extern "C" uint64_t RecoveredCall_7ac6d0_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7ac6d0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_7ac6d0_0(arg0,arg1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 604),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    return result1;
}

extern "C" unsigned char LeafData_7af380_0[];
extern "C" uint64_t RecoveredCall_7af380_0(uint64_t);
extern "C" void LeafTarget_7af380(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7af380(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7af380_0) - 1800) + 1800);
    const uint64_t result0 = RecoveredCall_7af380_0((arg0 + 80));
    LeafTarget_7af380(arg0);
}

extern "C" unsigned char LeafData_7af3b0_0[];
extern "C" uint64_t RecoveredCall_7af3b0_0(uint64_t);
extern "C" uint64_t RecoveredCall_7af3b0_1(uint64_t);
extern "C" void LeafTarget_7af3b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7af3b0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7af3b0_0) - 1800) + 1800);
    const uint64_t result0 = RecoveredCall_7af3b0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_7af3b0_1(arg0);
    LeafTarget_7af3b0(arg0);
}

extern "C" unsigned char LeafData_7af460_0[];
extern "C" uint64_t RecoveredCall_7af460_0(uint64_t);
extern "C" void LeafTarget_7af460(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7af460(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7af460_0) - 2256) + 2256);
    const uint64_t result0 = RecoveredCall_7af460_0((arg0 + 96));
    LeafTarget_7af460(arg0);
}

extern "C" unsigned char LeafData_7af490_0[];
extern "C" uint64_t RecoveredCall_7af490_0(uint64_t);
extern "C" uint64_t RecoveredCall_7af490_1(uint64_t);
extern "C" void LeafTarget_7af490(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7af490(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7af490_0) - 2256) + 2256);
    const uint64_t result0 = RecoveredCall_7af490_0((arg0 + 96));
    const uint64_t result1 = RecoveredCall_7af490_1(arg0);
    LeafTarget_7af490(arg0);
}

extern "C" unsigned char LeafData_7b7010_0[];
extern "C" uint64_t RecoveredCall_7b7010_0(uint64_t);
extern "C" void LeafTarget_7b7010(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7b7010(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7b7010_0) - 2256) + 2256);
    const uint64_t result0 = RecoveredCall_7b7010_0((arg0 + 96));
    LeafTarget_7b7010(arg0);
}

extern "C" unsigned char LeafData_7b7040_0[];
extern "C" uint64_t RecoveredCall_7b7040_0(uint64_t);
extern "C" uint64_t RecoveredCall_7b7040_1(uint64_t);
extern "C" void LeafTarget_7b7040(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7b7040(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7b7040_0) - 2256) + 2256);
    const uint64_t result0 = RecoveredCall_7b7040_0((arg0 + 96));
    const uint64_t result1 = RecoveredCall_7b7040_1(arg0);
    LeafTarget_7b7040(arg0);
}

extern "C" uint64_t RecoveredCall_7b7320_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_7b7320_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7b7320(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_7b7320_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_7b7320_1((arg0 + 80),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 200),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    return result2;
}

extern "C" unsigned char LeafData_7b78b0_0[];
extern "C" uint64_t RecoveredCall_7b78b0_0(uint64_t);
extern "C" void LeafTarget_7b78b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7b78b0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7b78b0_0) - 2856) + 2856);
    const uint64_t result0 = RecoveredCall_7b78b0_0((arg0 + 96));
    LeafTarget_7b78b0(arg0);
}

extern "C" unsigned char LeafData_7b78e0_0[];
extern "C" uint64_t RecoveredCall_7b78e0_0(uint64_t);
extern "C" uint64_t RecoveredCall_7b78e0_1(uint64_t);
extern "C" void LeafTarget_7b78e0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7b78e0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7b78e0_0) - 2856) + 2856);
    const uint64_t result0 = RecoveredCall_7b78e0_0((arg0 + 96));
    const uint64_t result1 = RecoveredCall_7b78e0_1(arg0);
    LeafTarget_7b78e0(arg0);
}

extern "C" unsigned char LeafData_7b7970_0[];
extern "C" uint64_t RecoveredCall_7b7970_0(uint64_t);
extern "C" uint64_t RecoveredCall_7b7970_1(uint64_t);
extern "C" void LeafTarget_7b7970(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7b7970(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7b7970_0) - 2856) + 2856);
    const uint64_t result0 = RecoveredCall_7b7970_0((arg0 + 96));
    const uint64_t result1 = RecoveredCall_7b7970_1(arg0);
    LeafTarget_7b7970(arg0);
}

extern "C" uint64_t RecoveredCall_7b9da0_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7b9da0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_7b9da0_0(arg0,arg1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 604),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    return result1;
}

extern "C" uint64_t RecoveredCall_7c4000_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7c4000(uint64_t arg0) {
    LEAF_CHECK
    __atomic_store_n(reinterpret_cast<uint8_t*>(((arg0 + 152) + 0)), 0, __ATOMIC_RELEASE);
    __atomic_store_n(reinterpret_cast<uint64_t*>(((arg0 + 144) + 0)), 0, __ATOMIC_RELEASE);
    const uint64_t result0 = RecoveredCall_7c4000_0(arg0);
    *reinterpret_cast<uint16_t*>(((arg0 + 345) + 0)) = 0;
    return result0;
}

extern "C" unsigned char LeafData_7c48e0_0[];
extern "C" uint64_t RecoveredCall_7c48e0_0(uint64_t);
extern "C" void LeafTarget_7c48e0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7c48e0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7c48e0_0) - 184) + 184);
    const uint64_t result0 = RecoveredCall_7c48e0_0((arg0 + 80));
    LeafTarget_7c48e0(arg0);
}

extern "C" unsigned char LeafData_7c4910_0[];
extern "C" uint64_t RecoveredCall_7c4910_0(uint64_t);
extern "C" uint64_t RecoveredCall_7c4910_1(uint64_t);
extern "C" void LeafTarget_7c4910(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7c4910(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7c4910_0) - 184) + 184);
    const uint64_t result0 = RecoveredCall_7c4910_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_7c4910_1(arg0);
    LeafTarget_7c4910(arg0);
}

extern "C" unsigned char LeafData_7cac50_5[];
extern "C" uint64_t LeafTarget_7cac50(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_7cac50(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((field0 + 224));
    if (uint32_t(uint32_t(field1)) == 0) return field0;
    *reinterpret_cast<uint8_t*>((field0 + 226)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint16_t*>((field0 + 224)) = 0;
    *reinterpret_cast<uint8_t*>(((reinterpret_cast<uintptr_t>(LeafData_7cac50_5) - 344) + 344)) = 0;
    return LeafTarget_7cac50(field0);
}

extern "C" unsigned char LeafData_7d5680_0[];
extern "C" uint64_t RecoveredCall_7d5680_0(uint64_t);
extern "C" void LeafTarget_7d5680(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7d5680(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7d5680_0) - 3480) + 3480);
    const uint64_t result0 = RecoveredCall_7d5680_0((arg0 + 80));
    LeafTarget_7d5680(arg0);
}

extern "C" unsigned char LeafData_7d56b0_0[];
extern "C" uint64_t RecoveredCall_7d56b0_0(uint64_t);
extern "C" uint64_t RecoveredCall_7d56b0_1(uint64_t);
extern "C" void LeafTarget_7d56b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7d56b0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7d56b0_0) - 3480) + 3480);
    const uint64_t result0 = RecoveredCall_7d56b0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_7d56b0_1(arg0);
    LeafTarget_7d56b0(arg0);
}

extern "C" void LeafTarget_7da010(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7da010(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    LeafTarget_7da010(((arg0 + 40) + 64),arg1);
}

extern "C" unsigned char LeafData_7dabb0_0[];
extern "C" void LeafTarget_7dabb0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7dabb0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7dabb0_0) - 1272) + 1272);
    LeafTarget_7dabb0((arg0 + 16));
}

extern "C" unsigned char LeafData_7dabc0_0[];
extern "C" uint64_t RecoveredCall_7dabc0_0(uint64_t);
extern "C" void LeafTarget_7dabc0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7dabc0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7dabc0_0) - 1272) + 1272);
    const uint64_t result0 = RecoveredCall_7dabc0_0((arg0 + 16));
    LeafTarget_7dabc0(arg0);
}

extern "C" unsigned char LeafData_7db950_0[];
extern "C" void LeafTarget_7db950(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7db950(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7db950_0) - 1440) + 1440);
    LeafTarget_7db950((arg0 + 16));
}

extern "C" unsigned char LeafData_7db960_0[];
extern "C" uint64_t RecoveredCall_7db960_0(uint64_t);
extern "C" void LeafTarget_7db960(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7db960(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7db960_0) - 1440) + 1440);
    const uint64_t result0 = RecoveredCall_7db960_0((arg0 + 16));
    LeafTarget_7db960(arg0);
}

extern "C" unsigned char LeafData_7e4f20_1[];
extern "C" unsigned char LeafData_7e4f20_3[];
extern "C" unsigned char LeafData_7e4f20_5[];
extern "C" unsigned char LeafData_7e4f20_8[];
extern "C" __attribute__((noinline)) void RecoveredLeaf_7e4f20(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    *reinterpret_cast<uint8_t*>(((reinterpret_cast<uintptr_t>(LeafData_7e4f20_1) - 3428) + 3428)) = 0;
    *reinterpret_cast<uint8_t*>(((reinterpret_cast<uintptr_t>(LeafData_7e4f20_3) - 3424) + 3424)) = 0;
    *reinterpret_cast<uint8_t*>((field0 + 605)) = 0;
    *reinterpret_cast<uint8_t*>(((reinterpret_cast<uintptr_t>(LeafData_7e4f20_5) - 3436) + 3436)) = 0;
    *reinterpret_cast<uint8_t*>(((reinterpret_cast<uintptr_t>(LeafData_7e4f20_8) - 3432) + 3432)) = 0;
    *reinterpret_cast<uint8_t*>((field0 + 600)) = 0;
}

extern "C" unsigned char LeafData_7e9620_0[];
extern "C" uint64_t RecoveredCall_7e9620_0(uint64_t);
extern "C" void LeafTarget_7e9620(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7e9620(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7e9620_0) - 3744) + 3744);
    const uint64_t result0 = RecoveredCall_7e9620_0((arg0 + 104));
    LeafTarget_7e9620(arg0);
}

extern "C" unsigned char LeafData_7f5720_0[];
extern "C" void LeafTarget_7f5720(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7f5720(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7f5720_0) - 752) + 752);
    LeafTarget_7f5720((arg0 + 24));
}

extern "C" unsigned char LeafData_7f5730_0[];
extern "C" uint64_t RecoveredCall_7f5730_0(uint64_t);
extern "C" void LeafTarget_7f5730(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7f5730(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_7f5730_0) - 752) + 752);
    const uint64_t result0 = RecoveredCall_7f5730_0((arg0 + 24));
    LeafTarget_7f5730(arg0);
}

extern "C" uint64_t RecoveredCall_804b50_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_804b50_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_804b50_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_804b50_3(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_804b50_4(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_804b50(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_804b50_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_804b50_1((arg0 + 688),arg2);
    const uint64_t result2 = RecoveredCall_804b50_2((arg0 + 696),arg2);
    const uint64_t result3 = RecoveredCall_804b50_3((arg0 + 704),arg2);
    const uint64_t result4 = RecoveredCall_804b50_4((arg0 + 712),arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 720),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result5)) << 0));
    return result5;
}

extern "C" uint64_t RecoveredCall_851d80_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_851d80_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_851d80_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_851d80_3(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_851d80_4(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_851d80_5(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_851d80_6(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_851d80_7(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_851d80(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_851d80_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_851d80_1((arg0 + 688),arg2);
    const uint64_t result2 = RecoveredCall_851d80_2((arg0 + 696),arg2);
    const uint64_t result3 = RecoveredCall_851d80_3((arg0 + 704),arg1,arg2);
    const uint64_t result4 = RecoveredCall_851d80_4((arg0 + 712),arg2);
    const uint64_t result5 = RecoveredCall_851d80_5((arg0 + 720),arg2);
    const uint64_t result6 = RecoveredCall_851d80_6((arg0 + 728),arg2);
    const uint64_t result7 = RecoveredCall_851d80_7((arg0 + 736),arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 744),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result8)) << 0));
    return result8;
}

extern "C" uint64_t RecoveredCall_85ca00_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_85ca00_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_85ca00_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_85ca00_3(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_85ca00(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_85ca00_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_85ca00_1((arg0 + 688),arg2);
    const uint64_t result2 = RecoveredCall_85ca00_2((arg0 + 696),arg2);
    const uint64_t result3 = RecoveredCall_85ca00_3((arg0 + 704),arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 712),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result4)) << 0));
    return result4;
}

extern "C" unsigned char LeafData_861b50_0[];
extern "C" uint64_t RecoveredCall_861b50_0(uint64_t);
extern "C" void LeafTarget_861b50(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_861b50(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_861b50_0) - 3424) + 3424);
    const uint64_t result0 = RecoveredCall_861b50_0((arg0 + 80));
    LeafTarget_861b50(arg0);
}

extern "C" unsigned char LeafData_861b80_0[];
extern "C" uint64_t RecoveredCall_861b80_0(uint64_t);
extern "C" uint64_t RecoveredCall_861b80_1(uint64_t);
extern "C" void LeafTarget_861b80(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_861b80(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_861b80_0) - 3424) + 3424);
    const uint64_t result0 = RecoveredCall_861b80_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_861b80_1(arg0);
    LeafTarget_861b80(arg0);
}

extern "C" unsigned char LeafData_861d40_0[];
extern "C" uint64_t RecoveredCall_861d40_0(uint64_t);
extern "C" void LeafTarget_861d40(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_861d40(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_861d40_0) - 4064) + 4064);
    const uint64_t result0 = RecoveredCall_861d40_0((arg0 + 80));
    LeafTarget_861d40(arg0);
}

extern "C" unsigned char LeafData_861d70_0[];
extern "C" uint64_t RecoveredCall_861d70_0(uint64_t);
extern "C" uint64_t RecoveredCall_861d70_1(uint64_t);
extern "C" void LeafTarget_861d70(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_861d70(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_861d70_0) - 4064) + 4064);
    const uint64_t result0 = RecoveredCall_861d70_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_861d70_1(arg0);
    LeafTarget_861d70(arg0);
}

extern "C" unsigned char LeafData_862240_0[];
extern "C" uint64_t RecoveredCall_862240_0(uint64_t);
extern "C" uint64_t RecoveredCall_862240_1(uint64_t);
extern "C" void LeafTarget_862240(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_862240(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_862240_0) - 4064) + 4064);
    const uint64_t result0 = RecoveredCall_862240_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_862240_1(arg0);
    LeafTarget_862240(arg0);
}

extern "C" unsigned char LeafData_862560_0[];
extern "C" uint64_t RecoveredCall_862560_0(uint64_t);
extern "C" void LeafTarget_862560(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_862560(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_862560_0) - 320) + 320);
    const uint64_t result0 = RecoveredCall_862560_0((arg0 + 88));
    LeafTarget_862560(arg0);
}

extern "C" unsigned char LeafData_862590_0[];
extern "C" uint64_t RecoveredCall_862590_0(uint64_t);
extern "C" uint64_t RecoveredCall_862590_1(uint64_t);
extern "C" void LeafTarget_862590(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_862590(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_862590_0) - 320) + 320);
    const uint64_t result0 = RecoveredCall_862590_0((arg0 + 88));
    const uint64_t result1 = RecoveredCall_862590_1(arg0);
    LeafTarget_862590(arg0);
}

extern "C" unsigned char LeafData_863a70_0[];
extern "C" uint64_t RecoveredCall_863a70_0(uint64_t);
extern "C" void LeafTarget_863a70(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_863a70(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_863a70_0) - 1200) + 1200);
    const uint64_t result0 = RecoveredCall_863a70_0((arg0 + 88));
    LeafTarget_863a70(arg0);
}

extern "C" unsigned char LeafData_863aa0_0[];
extern "C" uint64_t RecoveredCall_863aa0_0(uint64_t);
extern "C" uint64_t RecoveredCall_863aa0_1(uint64_t);
extern "C" void LeafTarget_863aa0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_863aa0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_863aa0_0) - 1200) + 1200);
    const uint64_t result0 = RecoveredCall_863aa0_0((arg0 + 88));
    const uint64_t result1 = RecoveredCall_863aa0_1(arg0);
    LeafTarget_863aa0(arg0);
}

extern "C" unsigned char LeafData_863fb0_0[];
extern "C" uint64_t RecoveredCall_863fb0_0(uint64_t);
extern "C" uint64_t RecoveredCall_863fb0_1(uint64_t);
extern "C" void LeafTarget_863fb0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_863fb0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_863fb0_0) - 1200) + 1200);
    const uint64_t result0 = RecoveredCall_863fb0_0((arg0 + 88));
    const uint64_t result1 = RecoveredCall_863fb0_1(arg0);
    LeafTarget_863fb0(arg0);
}

extern "C" unsigned char LeafData_864a60_0[];
extern "C" uint64_t RecoveredCall_864a60_0(uint64_t);
extern "C" void LeafTarget_864a60(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_864a60(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_864a60_0) - 1552) + 1552);
    const uint64_t result0 = RecoveredCall_864a60_0((arg0 + 96));
    LeafTarget_864a60(arg0);
}

extern "C" unsigned char LeafData_864a90_0[];
extern "C" uint64_t RecoveredCall_864a90_0(uint64_t);
extern "C" uint64_t RecoveredCall_864a90_1(uint64_t);
extern "C" void LeafTarget_864a90(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_864a90(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_864a90_0) - 1552) + 1552);
    const uint64_t result0 = RecoveredCall_864a90_0((arg0 + 96));
    const uint64_t result1 = RecoveredCall_864a90_1(arg0);
    LeafTarget_864a90(arg0);
}

extern "C" unsigned char LeafData_86da40_0[];
extern "C" uint64_t RecoveredCall_86da40_0(uint64_t);
extern "C" void LeafTarget_86da40(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_86da40(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_86da40_0) - 2248) + 2248);
    const uint64_t result0 = RecoveredCall_86da40_0((arg0 + 80));
    LeafTarget_86da40(arg0);
}

extern "C" unsigned char LeafData_86da70_0[];
extern "C" uint64_t RecoveredCall_86da70_0(uint64_t);
extern "C" uint64_t RecoveredCall_86da70_1(uint64_t);
extern "C" void LeafTarget_86da70(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_86da70(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_86da70_0) - 2248) + 2248);
    const uint64_t result0 = RecoveredCall_86da70_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_86da70_1(arg0);
    LeafTarget_86da70(arg0);
}

extern "C" uint64_t RecoveredCall_8710c0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8710c0_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8710c0_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8710c0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8710c0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_8710c0_1((arg0 + 688),arg2);
    const uint64_t result2 = RecoveredCall_8710c0_2((arg0 + 696),arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 704),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    *reinterpret_cast<uint8_t*>((arg0 + 704)) = uint32_t(uint32_t(1));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 705),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result4)) << 0));
    return result4;
}

extern "C" uint64_t RecoveredCall_8733c0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8733c0_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8733c0_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8733c0_3(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8733c0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8733c0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_8733c0_1((arg0 + 688),arg2);
    const uint64_t result2 = RecoveredCall_8733c0_2((arg0 + 696),arg2);
    const uint64_t result3 = RecoveredCall_8733c0_3((arg0 + 704),arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 712),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result4)) << 0));
    return result4;
}

extern "C" uint64_t RecoveredCall_874860_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_874860_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_874860_2(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_874860_3(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_874860(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_874860_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_874860_1((arg0 + 688),arg2);
    *reinterpret_cast<uint64_t*>((arg0 + 704)) = arg0;
    const uint64_t result2 = RecoveredCall_874860_2(arg1,arg2,(arg0 + 696));
    *reinterpret_cast<uint64_t*>((arg0 + 728)) = arg0;
    const uint64_t result3 = RecoveredCall_874860_3(arg1,arg2,(arg0 + 720));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 744),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result4)) << 0));
    return result4;
}

extern "C" uint64_t RecoveredCall_87b130_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_87b130_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_87b130_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_87b130_3(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_87b130_4(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_87b130_5(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_87b130_6(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_87b130(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_87b130_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_87b130_1((arg0 + 688),arg2);
    const uint64_t result2 = RecoveredCall_87b130_2((arg0 + 696),arg2);
    const uint64_t result3 = RecoveredCall_87b130_3((arg0 + 704),arg2);
    const uint64_t result4 = RecoveredCall_87b130_4((arg0 + 712),arg2);
    const uint64_t result5 = RecoveredCall_87b130_5((arg0 + 720),arg2);
    const uint64_t result6 = RecoveredCall_87b130_6((arg0 + 728),arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 740),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 744),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result8)) << 0));
    const uint32_t field8 = *reinterpret_cast<const uint32_t*>((arg0 + 740));
    *reinterpret_cast<uint32_t*>((arg0 + 736)) = uint32_t(uint32_t(field8));
    return result8;
}

extern "C" unsigned char LeafData_87d5f0_0[];
extern "C" uint64_t RecoveredCall_87d5f0_0(uint64_t);
extern "C" void LeafTarget_87d5f0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_87d5f0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_87d5f0_0) - 2976) + 2976);
    const uint64_t result0 = RecoveredCall_87d5f0_0((arg0 + 80));
    LeafTarget_87d5f0(arg0);
}

extern "C" unsigned char LeafData_87d620_0[];
extern "C" uint64_t RecoveredCall_87d620_0(uint64_t);
extern "C" uint64_t RecoveredCall_87d620_1(uint64_t);
extern "C" void LeafTarget_87d620(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_87d620(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_87d620_0) - 2976) + 2976);
    const uint64_t result0 = RecoveredCall_87d620_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_87d620_1(arg0);
    LeafTarget_87d620(arg0);
}

extern "C" unsigned char LeafData_87d980_0[];
extern "C" uint64_t RecoveredCall_87d980_0(uint64_t);
extern "C" uint64_t RecoveredCall_87d980_1(uint64_t);
extern "C" void LeafTarget_87d980(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_87d980(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_87d980_0) - 2976) + 2976);
    const uint64_t result0 = RecoveredCall_87d980_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_87d980_1(arg0);
    LeafTarget_87d980(arg0);
}

extern "C" unsigned char LeafData_87d9f0_0[];
extern "C" uint64_t RecoveredCall_87d9f0_0(uint64_t);
extern "C" void LeafTarget_87d9f0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_87d9f0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_87d9f0_0) - 3264) + 3264);
    const uint64_t result0 = RecoveredCall_87d9f0_0((arg0 + 80));
    LeafTarget_87d9f0(arg0);
}

extern "C" unsigned char LeafData_87da20_0[];
extern "C" uint64_t RecoveredCall_87da20_0(uint64_t);
extern "C" uint64_t RecoveredCall_87da20_1(uint64_t);
extern "C" void LeafTarget_87da20(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_87da20(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_87da20_0) - 3264) + 3264);
    const uint64_t result0 = RecoveredCall_87da20_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_87da20_1(arg0);
    LeafTarget_87da20(arg0);
}

extern "C" unsigned char LeafData_87dd40_0[];
extern "C" uint64_t RecoveredCall_87dd40_0(uint64_t);
extern "C" uint64_t RecoveredCall_87dd40_1(uint64_t);
extern "C" void LeafTarget_87dd40(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_87dd40(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_87dd40_0) - 3264) + 3264);
    const uint64_t result0 = RecoveredCall_87dd40_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_87dd40_1(arg0);
    LeafTarget_87dd40(arg0);
}

extern "C" unsigned char LeafData_87ffe0_0[];
extern "C" uint64_t RecoveredCall_87ffe0_0(uint64_t);
extern "C" void LeafTarget_87ffe0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_87ffe0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_87ffe0_0) - 3408) + 3408);
    const uint64_t result0 = RecoveredCall_87ffe0_0((arg0 + 80));
    LeafTarget_87ffe0(arg0);
}

extern "C" unsigned char LeafData_880010_0[];
extern "C" uint64_t RecoveredCall_880010_0(uint64_t);
extern "C" uint64_t RecoveredCall_880010_1(uint64_t);
extern "C" void LeafTarget_880010(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_880010(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_880010_0) - 3408) + 3408);
    const uint64_t result0 = RecoveredCall_880010_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_880010_1(arg0);
    LeafTarget_880010(arg0);
}

extern "C" unsigned char LeafData_8826f0_0[];
extern "C" uint64_t RecoveredCall_8826f0_0(uint64_t);
extern "C" void LeafTarget_8826f0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8826f0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8826f0_0) - 856) + 856);
    const uint64_t result0 = RecoveredCall_8826f0_0((arg0 + 216));
    LeafTarget_8826f0(arg0);
}

extern "C" unsigned char LeafData_882720_0[];
extern "C" uint64_t RecoveredCall_882720_0(uint64_t);
extern "C" uint64_t RecoveredCall_882720_1(uint64_t);
extern "C" void LeafTarget_882720(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_882720(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_882720_0) - 856) + 856);
    const uint64_t result0 = RecoveredCall_882720_0((arg0 + 216));
    const uint64_t result1 = RecoveredCall_882720_1(arg0);
    LeafTarget_882720(arg0);
}

extern "C" unsigned char LeafData_8835a0_0[];
extern "C" uint64_t RecoveredCall_8835a0_0(uint64_t);
extern "C" void LeafTarget_8835a0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8835a0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8835a0_0) - 1152) + 1152);
    const uint64_t result0 = RecoveredCall_8835a0_0((arg0 + 88));
    LeafTarget_8835a0(arg0);
}

extern "C" uint64_t RecoveredCall_888700_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_888700(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_888700_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 76),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 80),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 84),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 88),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 92),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 96),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result6)) << 0));
    return result6;
}

extern "C" uint64_t RecoveredCall_889780_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_889780(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_889780_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 76),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 80),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    return result2;
}

extern "C" uint64_t RecoveredCall_889c60_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_889c60_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_889c60_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_889c60(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_889c60_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_889c60_1((arg0 + 80),arg1,arg2);
    const uint64_t result2 = RecoveredCall_889c60_2((arg0 + 128),arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 136),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 140),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 144),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 148),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result6)) << 0));
    return result6;
}

extern "C" uint64_t RecoveredCall_88a840_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_88a840_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_88a840(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_88a840_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_88a840_1((arg0 + 80),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 128),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 132),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 136),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 140),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 144),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 148),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 0));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field25 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field26)(field24,(arg0 + 152),uint32_t(4));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field27 + (uint32_t(uint32_t(result8)) << 0));
    return result8;
}

extern "C" unsigned char LeafData_88ab20_0[];
extern "C" uint64_t RecoveredCall_88ab20_0(uint64_t);
extern "C" void LeafTarget_88ab20(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_88ab20(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_88ab20_0) - 1264) + 1264);
    const uint64_t result0 = RecoveredCall_88ab20_0((arg0 + 96));
    LeafTarget_88ab20(arg0);
}

extern "C" unsigned char LeafData_88ab50_0[];
extern "C" uint64_t RecoveredCall_88ab50_0(uint64_t);
extern "C" uint64_t RecoveredCall_88ab50_1(uint64_t);
extern "C" void LeafTarget_88ab50(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_88ab50(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_88ab50_0) - 1264) + 1264);
    const uint64_t result0 = RecoveredCall_88ab50_0((arg0 + 96));
    const uint64_t result1 = RecoveredCall_88ab50_1(arg0);
    LeafTarget_88ab50(arg0);
}

extern "C" unsigned char LeafData_88d470_0[];
extern "C" uint64_t RecoveredCall_88d470_0(uint64_t);
extern "C" void LeafTarget_88d470(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_88d470(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_88d470_0) - 1264) + 1264);
    const uint64_t result0 = RecoveredCall_88d470_0((arg0 + 96));
    LeafTarget_88d470(arg0);
}

extern "C" unsigned char LeafData_88d4a0_0[];
extern "C" uint64_t RecoveredCall_88d4a0_0(uint64_t);
extern "C" uint64_t RecoveredCall_88d4a0_1(uint64_t);
extern "C" void LeafTarget_88d4a0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_88d4a0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_88d4a0_0) - 1264) + 1264);
    const uint64_t result0 = RecoveredCall_88d4a0_0((arg0 + 96));
    const uint64_t result1 = RecoveredCall_88d4a0_1(arg0);
    LeafTarget_88d4a0(arg0);
}

extern "C" unsigned char LeafData_88f5d0_0[];
extern "C" uint64_t RecoveredCall_88f5d0_0(uint64_t);
extern "C" void LeafTarget_88f5d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_88f5d0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_88f5d0_0) - 2400) + 2400);
    const uint64_t result0 = RecoveredCall_88f5d0_0((arg0 + 80));
    LeafTarget_88f5d0(arg0);
}

extern "C" unsigned char LeafData_88f600_0[];
extern "C" uint64_t RecoveredCall_88f600_0(uint64_t);
extern "C" uint64_t RecoveredCall_88f600_1(uint64_t);
extern "C" void LeafTarget_88f600(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_88f600(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_88f600_0) - 2400) + 2400);
    const uint64_t result0 = RecoveredCall_88f600_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_88f600_1(arg0);
    LeafTarget_88f600(arg0);
}

extern "C" uint64_t RecoveredCall_893850_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_893850_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_893850(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_893850_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_893850_1((arg0 + 80),arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 88),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 92),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 96),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 100),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 104),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 108),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 0));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field25 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field26)(field24,(arg0 + 112),uint32_t(4));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field27 + (uint32_t(uint32_t(result8)) << 0));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 0));
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>((field29 + 48));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field30)(field28,(arg0 + 116),uint32_t(4));
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field32 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field31 + (uint32_t(uint32_t(result9)) << 0));
    const uint64_t field33 = *reinterpret_cast<const uint64_t*>((field32 + 0));
    const uint64_t field34 = *reinterpret_cast<const uint64_t*>((field33 + 48));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field34)(field32,(arg0 + 120),uint32_t(4));
    const uint64_t field35 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field36 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field35 + (uint32_t(uint32_t(result10)) << 0));
    const uint64_t field37 = *reinterpret_cast<const uint64_t*>((field36 + 0));
    const uint64_t field38 = *reinterpret_cast<const uint64_t*>((field37 + 48));
    const uint64_t result11 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field38)(field36,(arg0 + 124),uint32_t(4));
    const uint64_t field39 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field40 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field39 + (uint32_t(uint32_t(result11)) << 0));
    const uint64_t field41 = *reinterpret_cast<const uint64_t*>((field40 + 0));
    const uint64_t field42 = *reinterpret_cast<const uint64_t*>((field41 + 48));
    const uint64_t result12 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field42)(field40,(arg0 + 128),uint32_t(4));
    const uint64_t field43 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field43 + (uint32_t(uint32_t(result12)) << 0));
    return result12;
}

extern "C" unsigned char LeafData_893d10_0[];
extern "C" uint64_t RecoveredCall_893d10_0(uint64_t);
extern "C" void LeafTarget_893d10(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_893d10(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_893d10_0) - 480) + 480);
    const uint64_t result0 = RecoveredCall_893d10_0((arg0 + 80));
    LeafTarget_893d10(arg0);
}

extern "C" unsigned char LeafData_893d40_0[];
extern "C" uint64_t RecoveredCall_893d40_0(uint64_t);
extern "C" uint64_t RecoveredCall_893d40_1(uint64_t);
extern "C" void LeafTarget_893d40(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_893d40(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_893d40_0) - 480) + 480);
    const uint64_t result0 = RecoveredCall_893d40_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_893d40_1(arg0);
    LeafTarget_893d40(arg0);
}

extern "C" unsigned char LeafData_897bd0_0[];
extern "C" uint64_t RecoveredCall_897bd0_0(uint64_t);
extern "C" void LeafTarget_897bd0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_897bd0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_897bd0_0) - 1384) + 1384);
    const uint64_t result0 = RecoveredCall_897bd0_0((arg0 + 96));
    LeafTarget_897bd0(arg0);
}

extern "C" unsigned char LeafData_897c00_0[];
extern "C" uint64_t RecoveredCall_897c00_0(uint64_t);
extern "C" uint64_t RecoveredCall_897c00_1(uint64_t);
extern "C" void LeafTarget_897c00(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_897c00(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_897c00_0) - 1384) + 1384);
    const uint64_t result0 = RecoveredCall_897c00_0((arg0 + 96));
    const uint64_t result1 = RecoveredCall_897c00_1(arg0);
    LeafTarget_897c00(arg0);
}

extern "C" unsigned char LeafData_898850_0[];
extern "C" uint64_t RecoveredCall_898850_0(uint64_t);
extern "C" uint64_t RecoveredCall_898850_1(uint64_t);
extern "C" void LeafTarget_898850(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_898850(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_898850_0) - 1384) + 1384);
    const uint64_t result0 = RecoveredCall_898850_0((arg0 + 96));
    const uint64_t result1 = RecoveredCall_898850_1(arg0);
    LeafTarget_898850(arg0);
}

extern "C" unsigned char LeafData_899700_0[];
extern "C" uint64_t RecoveredCall_899700_0(uint64_t);
extern "C" void LeafTarget_899700(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_899700(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_899700_0) - 2496) + 2496);
    const uint64_t result0 = RecoveredCall_899700_0((arg0 + 80));
    LeafTarget_899700(arg0);
}

extern "C" unsigned char LeafData_899730_0[];
extern "C" uint64_t RecoveredCall_899730_0(uint64_t);
extern "C" uint64_t RecoveredCall_899730_1(uint64_t);
extern "C" void LeafTarget_899730(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_899730(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_899730_0) - 2496) + 2496);
    const uint64_t result0 = RecoveredCall_899730_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_899730_1(arg0);
    LeafTarget_899730(arg0);
}

extern "C" unsigned char LeafData_899c00_0[];
extern "C" uint64_t RecoveredCall_899c00_0(uint64_t);
extern "C" uint64_t RecoveredCall_899c00_1(uint64_t);
extern "C" void LeafTarget_899c00(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_899c00(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_899c00_0) - 2496) + 2496);
    const uint64_t result0 = RecoveredCall_899c00_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_899c00_1(arg0);
    LeafTarget_899c00(arg0);
}

extern "C" unsigned char LeafData_89a080_0[];
extern "C" uint64_t RecoveredCall_89a080_0(uint64_t);
extern "C" void LeafTarget_89a080(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_89a080(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_89a080_0) - 2896) + 2896);
    const uint64_t result0 = RecoveredCall_89a080_0((arg0 + 88));
    LeafTarget_89a080(arg0);
}

extern "C" unsigned char LeafData_89a0b0_0[];
extern "C" uint64_t RecoveredCall_89a0b0_0(uint64_t);
extern "C" uint64_t RecoveredCall_89a0b0_1(uint64_t);
extern "C" void LeafTarget_89a0b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_89a0b0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_89a0b0_0) - 2896) + 2896);
    const uint64_t result0 = RecoveredCall_89a0b0_0((arg0 + 88));
    const uint64_t result1 = RecoveredCall_89a0b0_1(arg0);
    LeafTarget_89a0b0(arg0);
}

extern "C" unsigned char LeafData_89f8d0_0[];
extern "C" uint64_t RecoveredCall_89f8d0_0(uint64_t);
extern "C" void LeafTarget_89f8d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_89f8d0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_89f8d0_0) - 3272) + 3272);
    const uint64_t result0 = RecoveredCall_89f8d0_0((arg0 + 80));
    LeafTarget_89f8d0(arg0);
}

extern "C" unsigned char LeafData_89f900_0[];
extern "C" uint64_t RecoveredCall_89f900_0(uint64_t);
extern "C" uint64_t RecoveredCall_89f900_1(uint64_t);
extern "C" void LeafTarget_89f900(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_89f900(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_89f900_0) - 3272) + 3272);
    const uint64_t result0 = RecoveredCall_89f900_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_89f900_1(arg0);
    LeafTarget_89f900(arg0);
}

extern "C" uint64_t RecoveredCall_8ad5b0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8ad5b0_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8ad5b0_2(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8ad5b0_3(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8ad5b0_4(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8ad5b0_5(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8ad5b0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8ad5b0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_8ad5b0_1((arg0 + 80),arg1,arg2);
    const uint64_t result2 = RecoveredCall_8ad5b0_2((arg0 + 88),arg1,arg2);
    const uint64_t result3 = RecoveredCall_8ad5b0_3((arg0 + 96),arg1,arg2);
    const uint64_t result4 = RecoveredCall_8ad5b0_4((arg0 + 136),arg1,arg2);
    const uint64_t result5 = RecoveredCall_8ad5b0_5((arg0 + 176),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 184),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result6)) << 0));
    return result6;
}

extern "C" unsigned char LeafData_8b3d80_0[];
extern "C" uint64_t RecoveredCall_8b3d80_0(uint64_t);
extern "C" void LeafTarget_8b3d80(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8b3d80(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8b3d80_0) - 2328) + 2328);
    const uint64_t result0 = RecoveredCall_8b3d80_0((arg0 + 80));
    LeafTarget_8b3d80(arg0);
}

extern "C" unsigned char LeafData_8b3db0_0[];
extern "C" uint64_t RecoveredCall_8b3db0_0(uint64_t);
extern "C" uint64_t RecoveredCall_8b3db0_1(uint64_t);
extern "C" void LeafTarget_8b3db0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8b3db0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8b3db0_0) - 2328) + 2328);
    const uint64_t result0 = RecoveredCall_8b3db0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_8b3db0_1(arg0);
    LeafTarget_8b3db0(arg0);
}

extern "C" uint64_t RecoveredCall_8ba6e0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8ba6e0_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8ba6e0_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8ba6e0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8ba6e0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_8ba6e0_1((arg0 + 80),arg1,arg2);
    const uint64_t result2 = RecoveredCall_8ba6e0_2((arg0 + 88),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 96),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 100),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 104),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 108),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 112),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 116),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result8)) << 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 0));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field25 + 48));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field26)(field24,(arg0 + 120),uint32_t(1));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field27 + (uint32_t(uint32_t(result9)) << 0));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 0));
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>((field29 + 48));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field30)(field28,(arg0 + 121),uint32_t(1));
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field32 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field31 + (uint32_t(uint32_t(result10)) << 0));
    const uint64_t field33 = *reinterpret_cast<const uint64_t*>((field32 + 0));
    const uint64_t field34 = *reinterpret_cast<const uint64_t*>((field33 + 48));
    const uint64_t result11 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field34)(field32,(arg0 + 122),uint32_t(1));
    const uint64_t field35 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field36 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field35 + (uint32_t(uint32_t(result11)) << 0));
    const uint64_t field37 = *reinterpret_cast<const uint64_t*>((field36 + 0));
    const uint64_t field38 = *reinterpret_cast<const uint64_t*>((field37 + 48));
    const uint64_t result12 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field38)(field36,(arg0 + 123),uint32_t(1));
    const uint64_t field39 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field40 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field39 + (uint32_t(uint32_t(result12)) << 0));
    const uint64_t field41 = *reinterpret_cast<const uint64_t*>((field40 + 0));
    const uint64_t field42 = *reinterpret_cast<const uint64_t*>((field41 + 48));
    const uint64_t result13 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field42)(field40,(arg0 + 124),uint32_t(4));
    const uint64_t field43 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field44 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field43 + (uint32_t(uint32_t(result13)) << 0));
    const uint64_t field45 = *reinterpret_cast<const uint64_t*>((field44 + 0));
    const uint64_t field46 = *reinterpret_cast<const uint64_t*>((field45 + 48));
    const uint64_t result14 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field46)(field44,(arg0 + 128),uint32_t(4));
    const uint64_t field47 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field48 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field47 + (uint32_t(uint32_t(result14)) << 0));
    const uint64_t field49 = *reinterpret_cast<const uint64_t*>((field48 + 0));
    const uint64_t field50 = *reinterpret_cast<const uint64_t*>((field49 + 48));
    const uint64_t result15 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field50)(field48,(arg0 + 132),uint32_t(1));
    const uint64_t field51 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field52 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field51 + (uint32_t(uint32_t(result15)) << 0));
    const uint64_t field53 = *reinterpret_cast<const uint64_t*>((field52 + 0));
    const uint64_t field54 = *reinterpret_cast<const uint64_t*>((field53 + 48));
    const uint64_t result16 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field54)(field52,(arg0 + 136),uint32_t(4));
    const uint64_t field55 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field55 + (uint32_t(uint32_t(result16)) << 0));
    return result16;
}

extern "C" unsigned char LeafData_8bade0_0[];
extern "C" uint64_t RecoveredCall_8bade0_0(uint64_t);
extern "C" void LeafTarget_8bade0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8bade0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8bade0_0) - 4080) + 4080);
    const uint64_t result0 = RecoveredCall_8bade0_0((arg0 + 80));
    LeafTarget_8bade0(arg0);
}

extern "C" unsigned char LeafData_8bae10_0[];
extern "C" uint64_t RecoveredCall_8bae10_0(uint64_t);
extern "C" uint64_t RecoveredCall_8bae10_1(uint64_t);
extern "C" void LeafTarget_8bae10(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8bae10(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8bae10_0) - 4080) + 4080);
    const uint64_t result0 = RecoveredCall_8bae10_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_8bae10_1(arg0);
    LeafTarget_8bae10(arg0);
}

extern "C" uint64_t RecoveredCall_8bc0f0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8bc0f0_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8bc0f0_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8bc0f0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8bc0f0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_8bc0f0_1((arg0 + 80),arg1,arg2);
    const uint64_t result2 = RecoveredCall_8bc0f0_2((arg0 + 96),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 104),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 105),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 106),uint32_t(1));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result5)) << 0));
    return result5;
}

extern "C" unsigned char LeafData_8c3240_0[];
extern "C" uint64_t RecoveredCall_8c3240_0(uint64_t);
extern "C" void LeafTarget_8c3240(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8c3240(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8c3240_0) - 3480) + 3480);
    const uint64_t result0 = RecoveredCall_8c3240_0((arg0 + 80));
    LeafTarget_8c3240(arg0);
}

extern "C" unsigned char LeafData_8c3270_0[];
extern "C" uint64_t RecoveredCall_8c3270_0(uint64_t);
extern "C" uint64_t RecoveredCall_8c3270_1(uint64_t);
extern "C" void LeafTarget_8c3270(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8c3270(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8c3270_0) - 3480) + 3480);
    const uint64_t result0 = RecoveredCall_8c3270_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_8c3270_1(arg0);
    LeafTarget_8c3270(arg0);
}

extern "C" uint64_t RecoveredCall_8c4a00_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8c4a00_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8c4a00_3(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8c4a00_4(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8c4a00_5(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8c4a00_6(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8c4a00_7(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_8c4a00(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8c4a00(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8c4a00_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 74),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t result2 = RecoveredCall_8c4a00_2((arg0 + 80),arg2);
    const uint64_t result3 = RecoveredCall_8c4a00_3((arg0 + 88),arg1,arg2);
    const uint64_t result4 = RecoveredCall_8c4a00_4((arg0 + 96),arg1,arg2);
    const uint64_t result5 = RecoveredCall_8c4a00_5((arg0 + 104),arg1,arg2);
    const uint64_t result6 = RecoveredCall_8c4a00_6((arg0 + 112),arg1,arg2);
    const uint64_t result7 = RecoveredCall_8c4a00_7((arg0 + 120),arg1,arg2);
    LeafTarget_8c4a00((arg0 + 128),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_8c4c10_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8c4c10_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8c4c10_3(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8c4c10_4(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8c4c10_5(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8c4c10_6(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8c4c10_7(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8c4c10_8(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8c4c10(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8c4c10_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 74),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t result2 = RecoveredCall_8c4c10_2((arg0 + 80),arg2);
    const uint64_t result3 = RecoveredCall_8c4c10_3((arg0 + 88),arg1,arg2);
    const uint64_t result4 = RecoveredCall_8c4c10_4((arg0 + 96),arg1,arg2);
    const uint64_t result5 = RecoveredCall_8c4c10_5((arg0 + 104),arg1,arg2);
    const uint64_t result6 = RecoveredCall_8c4c10_6((arg0 + 112),arg1,arg2);
    const uint64_t result7 = RecoveredCall_8c4c10_7((arg0 + 120),arg1,arg2);
    const uint64_t result8 = RecoveredCall_8c4c10_8((arg0 + 128),arg1,arg2);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 136),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result9)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 140),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result10)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result11 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 144),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result11)) << 0));
    return result11;
}

extern "C" uint64_t RecoveredCall_8c8570_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8c8570_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8c8570_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8c8570(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8c8570_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_8c8570_1((arg0 + 288),arg1,arg2);
    const uint64_t result2 = RecoveredCall_8c8570_2((arg0 + 296),arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 304),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 308),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 312),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 316),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result6)) << 0));
    return result6;
}

extern "C" unsigned char LeafData_8ccc10_0[];
extern "C" uint64_t RecoveredCall_8ccc10_0(uint64_t);
extern "C" void LeafTarget_8ccc10(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8ccc10(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8ccc10_0) - 464) + 464);
    const uint64_t result0 = RecoveredCall_8ccc10_0((arg0 + 80));
    LeafTarget_8ccc10(arg0);
}

extern "C" unsigned char LeafData_8ccc40_0[];
extern "C" uint64_t RecoveredCall_8ccc40_0(uint64_t);
extern "C" uint64_t RecoveredCall_8ccc40_1(uint64_t);
extern "C" void LeafTarget_8ccc40(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8ccc40(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8ccc40_0) - 464) + 464);
    const uint64_t result0 = RecoveredCall_8ccc40_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_8ccc40_1(arg0);
    LeafTarget_8ccc40(arg0);
}

extern "C" unsigned char LeafData_8cd8a0_0[];
extern "C" uint64_t RecoveredCall_8cd8a0_0(uint64_t);
extern "C" void LeafTarget_8cd8a0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8cd8a0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8cd8a0_0) - 1328) + 1328);
    const uint64_t result0 = RecoveredCall_8cd8a0_0((arg0 + 88));
    LeafTarget_8cd8a0(arg0);
}

extern "C" unsigned char LeafData_8de0d0_0[];
extern "C" uint64_t RecoveredCall_8de0d0_0(uint64_t);
extern "C" void LeafTarget_8de0d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8de0d0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8de0d0_0) - 224) + 224);
    const uint64_t result0 = RecoveredCall_8de0d0_0((arg0 + 96));
    LeafTarget_8de0d0(arg0);
}

extern "C" unsigned char LeafData_8de100_0[];
extern "C" uint64_t RecoveredCall_8de100_0(uint64_t);
extern "C" uint64_t RecoveredCall_8de100_1(uint64_t);
extern "C" void LeafTarget_8de100(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8de100(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8de100_0) - 224) + 224);
    const uint64_t result0 = RecoveredCall_8de100_0((arg0 + 96));
    const uint64_t result1 = RecoveredCall_8de100_1(arg0);
    LeafTarget_8de100(arg0);
}

extern "C" uint64_t RecoveredCall_8e0e00_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8e0e00_3(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8e0e00(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8e0e00_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 169),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t result3 = RecoveredCall_8e0e00_3((arg0 + 176),arg1,arg2);
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 184),uint32_t(1));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result4)) << 0));
    return result4;
}

extern "C" uint64_t RecoveredCall_8e1ad0_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8e1ad0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8e1ad0_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 169),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    return result2;
}

extern "C" uint64_t RecoveredCall_8e1b60_0(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_8e1b60(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8e1b60(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8e1b60_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 169),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    LeafTarget_8e1b60((arg0 + 176),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_8e1c00_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8e1c00(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8e1c00_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 169),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 171),uint32_t(1));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    return result3;
}

extern "C" unsigned char LeafData_8e20f0_0[];
extern "C" uint64_t RecoveredCall_8e20f0_0(uint64_t);
extern "C" void LeafTarget_8e20f0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8e20f0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8e20f0_0) - 1784) + 1784);
    const uint64_t result0 = RecoveredCall_8e20f0_0((arg0 + 176));
    LeafTarget_8e20f0(arg0);
}

extern "C" unsigned char LeafData_8e2120_0[];
extern "C" uint64_t RecoveredCall_8e2120_0(uint64_t);
extern "C" uint64_t RecoveredCall_8e2120_1(uint64_t);
extern "C" void LeafTarget_8e2120(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8e2120(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8e2120_0) - 1784) + 1784);
    const uint64_t result0 = RecoveredCall_8e2120_0((arg0 + 176));
    const uint64_t result1 = RecoveredCall_8e2120_1(arg0);
    LeafTarget_8e2120(arg0);
}

extern "C" uint64_t RecoveredCall_8e2150_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8e2150_3(uint64_t,uint64_t);
extern "C" void LeafTarget_8e2150(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8e2150(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8e2150_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 169),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t result3 = RecoveredCall_8e2150_3((arg0 + 176),arg2);
    LeafTarget_8e2150((arg0 + 184),arg2);
}

extern "C" uint64_t RecoveredCall_8e49e0_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8e49e0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8e49e0_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 169),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 171),uint32_t(1));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 172),uint32_t(1));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result4)) << 0));
    return result4;
}

extern "C" uint64_t RecoveredCall_8e58c0_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8e58c0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8e58c0_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 169),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    return result2;
}

extern "C" uint64_t RecoveredCall_8e5ae0_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8e5ae0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8e5ae0_0(arg0,arg1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 248),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    return result1;
}

extern "C" uint64_t RecoveredCall_8e7bf0_0(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_8e7bf0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8e7bf0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8e7bf0_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 169),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    LeafTarget_8e7bf0((arg0 + 176),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_8e7f30_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8e7f30(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8e7f30_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 169),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    return result2;
}

extern "C" uint64_t RecoveredCall_8e82a0_0(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_8e82a0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8e82a0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8e82a0_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 169),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    LeafTarget_8e82a0((arg0 + 176),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_8e8890_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8e8890(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8e8890_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 169),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 171),uint32_t(1));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 172),uint32_t(1));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 173),uint32_t(1));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 176),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 0));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field25 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field26)(field24,(arg0 + 180),uint32_t(4));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field27 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 0));
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>((field29 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field30)(field28,(arg0 + 184),uint32_t(4));
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field32 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field31 + (uint32_t(uint32_t(result8)) << 0));
    const uint64_t field33 = *reinterpret_cast<const uint64_t*>((field32 + 0));
    const uint64_t field34 = *reinterpret_cast<const uint64_t*>((field33 + 48));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field34)(field32,(arg0 + 188),uint32_t(4));
    const uint64_t field35 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field36 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field35 + (uint32_t(uint32_t(result9)) << 0));
    const uint64_t field37 = *reinterpret_cast<const uint64_t*>((field36 + 0));
    const uint64_t field38 = *reinterpret_cast<const uint64_t*>((field37 + 48));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field38)(field36,(arg0 + 192),uint32_t(4));
    const uint64_t field39 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field40 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field39 + (uint32_t(uint32_t(result10)) << 0));
    const uint64_t field41 = *reinterpret_cast<const uint64_t*>((field40 + 0));
    const uint64_t field42 = *reinterpret_cast<const uint64_t*>((field41 + 48));
    const uint64_t result11 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field42)(field40,(arg0 + 196),uint32_t(4));
    const uint64_t field43 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field44 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field43 + (uint32_t(uint32_t(result11)) << 0));
    const uint64_t field45 = *reinterpret_cast<const uint64_t*>((field44 + 0));
    const uint64_t field46 = *reinterpret_cast<const uint64_t*>((field45 + 48));
    const uint64_t result12 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field46)(field44,(arg0 + 200),uint32_t(4));
    const uint64_t field47 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field48 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field47 + (uint32_t(uint32_t(result12)) << 0));
    const uint64_t field49 = *reinterpret_cast<const uint64_t*>((field48 + 0));
    const uint64_t field50 = *reinterpret_cast<const uint64_t*>((field49 + 48));
    const uint64_t result13 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field50)(field48,(arg0 + 204),uint32_t(4));
    const uint64_t field51 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field52 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field51 + (uint32_t(uint32_t(result13)) << 0));
    const uint64_t field53 = *reinterpret_cast<const uint64_t*>((field52 + 0));
    const uint64_t field54 = *reinterpret_cast<const uint64_t*>((field53 + 48));
    const uint64_t result14 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field54)(field52,(arg0 + 208),uint32_t(4));
    const uint64_t field55 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field55 + (uint32_t(uint32_t(result14)) << 0));
    return result14;
}

extern "C" uint64_t RecoveredCall_8e9220_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8e9220(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8e9220_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 169),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 172),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 176),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 180),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result5)) << 0));
    return result5;
}

extern "C" uint64_t RecoveredCall_8e9730_0(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_8e9730(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8e9730(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8e9730_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 169),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    LeafTarget_8e9730((arg0 + 176),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_8eb210_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8eb210(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8eb210_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 169),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    return result2;
}

extern "C" uint64_t RecoveredCall_8ec700_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8ec700_3(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8ec700_4(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_8ec700(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8ec700(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8ec700_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 169),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t result3 = RecoveredCall_8ec700_3((arg0 + 176),arg1,arg2);
    const uint64_t result4 = RecoveredCall_8ec700_4((arg0 + 184),arg1,arg2);
    LeafTarget_8ec700((arg0 + 192),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_8ece20_0(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_8ece20(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8ece20(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8ece20_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 169),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    LeafTarget_8ece20((arg0 + 176),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_8ed120_0(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_8ed120(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8ed120(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8ed120_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 169),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    LeafTarget_8ed120((arg0 + 176),arg1,arg2);
}

extern "C" unsigned char LeafData_8ed1a0_0[];
extern "C" uint64_t RecoveredCall_8ed1a0_0(uint64_t);
extern "C" void LeafTarget_8ed1a0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8ed1a0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8ed1a0_0) - 1704) + 1704);
    const uint64_t result0 = RecoveredCall_8ed1a0_0((arg0 + 176));
    LeafTarget_8ed1a0(arg0);
}

extern "C" unsigned char LeafData_8ed1d0_0[];
extern "C" uint64_t RecoveredCall_8ed1d0_0(uint64_t);
extern "C" uint64_t RecoveredCall_8ed1d0_1(uint64_t);
extern "C" void LeafTarget_8ed1d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8ed1d0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8ed1d0_0) - 1704) + 1704);
    const uint64_t result0 = RecoveredCall_8ed1d0_0((arg0 + 176));
    const uint64_t result1 = RecoveredCall_8ed1d0_1(arg0);
    LeafTarget_8ed1d0(arg0);
}

extern "C" uint64_t RecoveredCall_8ed200_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8ed200_3(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8ed200_4(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8ed200(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8ed200_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 169),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t result3 = RecoveredCall_8ed200_3((arg0 + 176),arg1,arg2);
    const uint64_t result4 = RecoveredCall_8ed200_4((arg0 + 184),arg1,arg2);
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 192),uint32_t(1));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result5)) << 0));
    return result5;
}

extern "C" unsigned char LeafData_8ed960_0[];
extern "C" uint64_t RecoveredCall_8ed960_0(uint64_t);
extern "C" uint64_t RecoveredCall_8ed960_1(uint64_t);
extern "C" void LeafTarget_8ed960(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8ed960(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8ed960_0) - 1704) + 1704);
    const uint64_t result0 = RecoveredCall_8ed960_0((arg0 + 176));
    const uint64_t result1 = RecoveredCall_8ed960_1(arg0);
    LeafTarget_8ed960(arg0);
}

extern "C" uint64_t RecoveredCall_8ed990_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8ed990_3(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_8ed990(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8ed990(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8ed990_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 169),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t result3 = RecoveredCall_8ed990_3((arg0 + 176),arg1,arg2);
    LeafTarget_8ed990((arg0 + 184),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_8edaf0_0(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_8edaf0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8edaf0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8edaf0_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 169),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    LeafTarget_8edaf0((arg0 + 176),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_8ee7a0_0(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_8ee7a0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8ee7a0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8ee7a0_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 169),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    LeafTarget_8ee7a0((arg0 + 176),arg1,arg2);
}

extern "C" unsigned char LeafData_8f03c0_0[];
extern "C" uint64_t RecoveredCall_8f03c0_0(uint64_t);
extern "C" void LeafTarget_8f03c0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8f03c0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8f03c0_0) - 2232) + 2232);
    const uint64_t result0 = RecoveredCall_8f03c0_0((arg0 + 80));
    LeafTarget_8f03c0(arg0);
}

extern "C" unsigned char LeafData_8f03f0_0[];
extern "C" uint64_t RecoveredCall_8f03f0_0(uint64_t);
extern "C" uint64_t RecoveredCall_8f03f0_1(uint64_t);
extern "C" void LeafTarget_8f03f0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8f03f0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8f03f0_0) - 2232) + 2232);
    const uint64_t result0 = RecoveredCall_8f03f0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_8f03f0_1(arg0);
    LeafTarget_8f03f0(arg0);
}

extern "C" unsigned char LeafData_8f1310_0[];
extern "C" uint64_t RecoveredCall_8f1310_0(uint64_t);
extern "C" void LeafTarget_8f1310(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8f1310(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8f1310_0) - 3336) + 3336);
    const uint64_t result0 = RecoveredCall_8f1310_0((arg0 + 160));
    LeafTarget_8f1310(arg0);
}

extern "C" unsigned char LeafData_8f1340_0[];
extern "C" uint64_t RecoveredCall_8f1340_0(uint64_t);
extern "C" uint64_t RecoveredCall_8f1340_1(uint64_t);
extern "C" void LeafTarget_8f1340(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8f1340(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8f1340_0) - 3336) + 3336);
    const uint64_t result0 = RecoveredCall_8f1340_0((arg0 + 160));
    const uint64_t result1 = RecoveredCall_8f1340_1(arg0);
    LeafTarget_8f1340(arg0);
}

extern "C" unsigned char LeafData_8f1900_0[];
extern "C" uint64_t RecoveredCall_8f1900_0(uint64_t);
extern "C" uint64_t RecoveredCall_8f1900_1(uint64_t);
extern "C" void LeafTarget_8f1900(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8f1900(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8f1900_0) - 3336) + 3336);
    const uint64_t result0 = RecoveredCall_8f1900_0((arg0 + 160));
    const uint64_t result1 = RecoveredCall_8f1900_1(arg0);
    LeafTarget_8f1900(arg0);
}

extern "C" uint64_t RecoveredCall_8f1b10_0(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_8f1b10(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8f1b10(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8f1b10_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 169),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    LeafTarget_8f1b10((arg0 + 176),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_8f2140_0(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_8f2140(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8f2140(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8f2140_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 169),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    LeafTarget_8f2140((arg0 + 176),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_8f4060_0(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_8f4060(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8f4060(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8f4060_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 169),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    LeafTarget_8f4060((arg0 + 176),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_8f4300_0(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_8f4300(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8f4300(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8f4300_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 169),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    LeafTarget_8f4300((arg0 + 176),arg1,arg2);
}

extern "C" unsigned char LeafData_8f4380_0[];
extern "C" uint64_t RecoveredCall_8f4380_0(uint64_t);
extern "C" void LeafTarget_8f4380(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8f4380(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8f4380_0) - 1392) + 1392);
    const uint64_t result0 = RecoveredCall_8f4380_0((arg0 + 160));
    LeafTarget_8f4380(arg0);
}

extern "C" unsigned char LeafData_8f43b0_0[];
extern "C" uint64_t RecoveredCall_8f43b0_0(uint64_t);
extern "C" uint64_t RecoveredCall_8f43b0_1(uint64_t);
extern "C" void LeafTarget_8f43b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8f43b0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8f43b0_0) - 1392) + 1392);
    const uint64_t result0 = RecoveredCall_8f43b0_0((arg0 + 160));
    const uint64_t result1 = RecoveredCall_8f43b0_1(arg0);
    LeafTarget_8f43b0(arg0);
}

extern "C" unsigned char LeafData_8f49d0_0[];
extern "C" uint64_t RecoveredCall_8f49d0_0(uint64_t);
extern "C" uint64_t RecoveredCall_8f49d0_1(uint64_t);
extern "C" void LeafTarget_8f49d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8f49d0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8f49d0_0) - 1392) + 1392);
    const uint64_t result0 = RecoveredCall_8f49d0_0((arg0 + 160));
    const uint64_t result1 = RecoveredCall_8f49d0_1(arg0);
    LeafTarget_8f49d0(arg0);
}

extern "C" unsigned char LeafData_8f4a40_0[];
extern "C" uint64_t RecoveredCall_8f4a40_0(uint64_t);
extern "C" void LeafTarget_8f4a40(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8f4a40(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8f4a40_0) - 1744) + 1744);
    const uint64_t result0 = RecoveredCall_8f4a40_0((arg0 + 160));
    LeafTarget_8f4a40(arg0);
}

extern "C" unsigned char LeafData_8f4a70_0[];
extern "C" uint64_t RecoveredCall_8f4a70_0(uint64_t);
extern "C" uint64_t RecoveredCall_8f4a70_1(uint64_t);
extern "C" void LeafTarget_8f4a70(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8f4a70(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8f4a70_0) - 1744) + 1744);
    const uint64_t result0 = RecoveredCall_8f4a70_0((arg0 + 160));
    const uint64_t result1 = RecoveredCall_8f4a70_1(arg0);
    LeafTarget_8f4a70(arg0);
}

extern "C" unsigned char LeafData_8f51b0_0[];
extern "C" uint64_t RecoveredCall_8f51b0_0(uint64_t);
extern "C" uint64_t RecoveredCall_8f51b0_1(uint64_t);
extern "C" void LeafTarget_8f51b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8f51b0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8f51b0_0) - 1744) + 1744);
    const uint64_t result0 = RecoveredCall_8f51b0_0((arg0 + 160));
    const uint64_t result1 = RecoveredCall_8f51b0_1(arg0);
    LeafTarget_8f51b0(arg0);
}

extern "C" uint64_t RecoveredCall_8f5750_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8f5750_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8f5750_2(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8f5750_3(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8f5750_4(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8f5750_5(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8f5750(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8f5750_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_8f5750_1((arg0 + 80),arg2);
    const uint64_t result2 = RecoveredCall_8f5750_2((arg0 + 88),arg1,arg2);
    const uint64_t result3 = RecoveredCall_8f5750_3((arg0 + 96),arg1,arg2);
    const uint64_t result4 = RecoveredCall_8f5750_4((arg0 + 104),arg1,arg2);
    const uint64_t result5 = RecoveredCall_8f5750_5((arg0 + 144),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 184),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result6)) << 0));
    return result6;
}

extern "C" unsigned char LeafData_8f7d10_0[];
extern "C" uint64_t RecoveredCall_8f7d10_0(uint64_t);
extern "C" void LeafTarget_8f7d10(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8f7d10(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8f7d10_0) - 2808) + 2808);
    const uint64_t result0 = RecoveredCall_8f7d10_0((arg0 + 160));
    LeafTarget_8f7d10(arg0);
}

extern "C" unsigned char LeafData_8f7d40_0[];
extern "C" uint64_t RecoveredCall_8f7d40_0(uint64_t);
extern "C" uint64_t RecoveredCall_8f7d40_1(uint64_t);
extern "C" void LeafTarget_8f7d40(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8f7d40(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8f7d40_0) - 2808) + 2808);
    const uint64_t result0 = RecoveredCall_8f7d40_0((arg0 + 160));
    const uint64_t result1 = RecoveredCall_8f7d40_1(arg0);
    LeafTarget_8f7d40(arg0);
}

extern "C" uint64_t RecoveredCall_8f7d70_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8f7d70_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8f7d70_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8f7d70(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8f7d70_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_8f7d70_1((arg0 + 160),arg2);
    const uint64_t result2 = RecoveredCall_8f7d70_2((arg0 + 168),arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 176),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    return result3;
}

extern "C" unsigned char LeafData_8f85f0_0[];
extern "C" uint64_t RecoveredCall_8f85f0_0(uint64_t);
extern "C" uint64_t RecoveredCall_8f85f0_1(uint64_t);
extern "C" void LeafTarget_8f85f0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8f85f0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8f85f0_0) - 2808) + 2808);
    const uint64_t result0 = RecoveredCall_8f85f0_0((arg0 + 160));
    const uint64_t result1 = RecoveredCall_8f85f0_1(arg0);
    LeafTarget_8f85f0(arg0);
}

extern "C" uint64_t RecoveredCall_8f8b00_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8f8b00_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8f8b00_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8f8b00_3(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8f8b00(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8f8b00_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_8f8b00_1((arg0 + 160),arg1,arg2);
    const uint64_t result2 = RecoveredCall_8f8b00_2((arg0 + 200),arg2);
    const uint64_t result3 = RecoveredCall_8f8b00_3((arg0 + 208),arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 232),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 233),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 234),uint32_t(1));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result6)) << 0));
    return result6;
}

extern "C" unsigned char LeafData_8fa770_0[];
extern "C" uint64_t RecoveredCall_8fa770_0(uint64_t);
extern "C" uint64_t RecoveredCall_8fa770_1(uint64_t);
extern "C" void LeafTarget_8fa770(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8fa770(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_8fa770_0) - 2808) + 2808);
    const uint64_t result0 = RecoveredCall_8fa770_0((arg0 + 160));
    const uint64_t result1 = RecoveredCall_8fa770_1(arg0);
    LeafTarget_8fa770(arg0);
}

extern "C" uint64_t RecoveredCall_8feca0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8feca0_3(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8feca0_4(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8feca0_5(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_8feca0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8feca0_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 169),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t result3 = RecoveredCall_8feca0_3((arg0 + 176),arg2);
    const uint64_t result4 = RecoveredCall_8feca0_4((arg0 + 184),arg2);
    const uint64_t result5 = RecoveredCall_8feca0_5((arg0 + 192),arg1,arg2);
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 200),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 204),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 208),uint32_t(1));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result8)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 212),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result9)) << 0));
    return result9;
}

extern "C" uint64_t RecoveredCall_8ff840_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8ff840_3(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_8ff840_4(uint64_t,uint64_t);
extern "C" void LeafTarget_8ff840(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8ff840(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_8ff840_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 169),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t result3 = RecoveredCall_8ff840_3((arg0 + 176),arg2);
    const uint64_t result4 = RecoveredCall_8ff840_4((arg0 + 184),arg2);
    LeafTarget_8ff840((arg0 + 192),arg1,arg2);
}

extern "C" unsigned char LeafData_903f90_0[];
extern "C" uint64_t RecoveredCall_903f90_0(uint64_t);
extern "C" void LeafTarget_903f90(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_903f90(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_903f90_0) - 992) + 992);
    const uint64_t result0 = RecoveredCall_903f90_0((arg0 + 160));
    LeafTarget_903f90(arg0);
}

extern "C" unsigned char LeafData_903fc0_0[];
extern "C" uint64_t RecoveredCall_903fc0_0(uint64_t);
extern "C" uint64_t RecoveredCall_903fc0_1(uint64_t);
extern "C" void LeafTarget_903fc0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_903fc0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_903fc0_0) - 992) + 992);
    const uint64_t result0 = RecoveredCall_903fc0_0((arg0 + 160));
    const uint64_t result1 = RecoveredCall_903fc0_1(arg0);
    LeafTarget_903fc0(arg0);
}

extern "C" uint64_t RecoveredCall_906590_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_906590_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_906590_2(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_906590_3(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_906590(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_906590_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_906590_1((arg0 + 160),arg2);
    const uint64_t result2 = RecoveredCall_906590_2((arg0 + 168),arg1,arg2);
    const uint64_t result3 = RecoveredCall_906590_3((arg0 + 176),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 184),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 185),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 186),uint32_t(1));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result6)) << 0));
    return result6;
}

extern "C" uint64_t RecoveredCall_906c40_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_906c40_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_906c40(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_906c40_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_906c40_1((arg0 + 160),arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    return result2;
}

extern "C" uint64_t RecoveredCall_907080_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_907080_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_907080(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_907080_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_907080_1((arg0 + 160),arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 172),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 176),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 180),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 184),uint32_t(1));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 185),uint32_t(1));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result7)) << 0));
    return result7;
}

extern "C" uint64_t RecoveredCall_90a4b0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_90a4b0_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_90a4b0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_90a4b0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_90a4b0_1((arg0 + 160),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    return result2;
}

extern "C" uint64_t RecoveredCall_90a9e0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_90a9e0_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_90a9e0_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_90a9e0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_90a9e0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_90a9e0_1((arg0 + 160),arg2);
    const uint64_t result2 = RecoveredCall_90a9e0_2((arg0 + 184),arg1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 188),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 189),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 192),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 196),uint32_t(1));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result6)) << 0));
    return result6;
}

extern "C" uint64_t RecoveredCall_90c400_0(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_90c400(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_90c400(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_90c400_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 169),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    LeafTarget_90c400((arg0 + 176),arg1,arg2);
}

extern "C" unsigned char LeafData_90c8a0_0[];
extern "C" uint64_t RecoveredCall_90c8a0_0(uint64_t);
extern "C" void LeafTarget_90c8a0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_90c8a0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_90c8a0_0) - 1744) + 1744);
    const uint64_t result0 = RecoveredCall_90c8a0_0((arg0 + 160));
    LeafTarget_90c8a0(arg0);
}

extern "C" unsigned char LeafData_90c8d0_0[];
extern "C" uint64_t RecoveredCall_90c8d0_0(uint64_t);
extern "C" uint64_t RecoveredCall_90c8d0_1(uint64_t);
extern "C" void LeafTarget_90c8d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_90c8d0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_90c8d0_0) - 1744) + 1744);
    const uint64_t result0 = RecoveredCall_90c8d0_0((arg0 + 160));
    const uint64_t result1 = RecoveredCall_90c8d0_1(arg0);
    LeafTarget_90c8d0(arg0);
}

extern "C" uint64_t RecoveredCall_90cac0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_90cac0_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_90cac0_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_90cac0_3(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_90cac0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_90cac0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_90cac0_1((arg0 + 160),arg1,arg2);
    const uint64_t result2 = RecoveredCall_90cac0_2((arg0 + 168),arg2);
    const uint64_t result3 = RecoveredCall_90cac0_3(arg1,(arg0 + 176));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 216),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 220),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result5)) << 0));
    return result5;
}

extern "C" unsigned char LeafData_90e7a0_0[];
extern "C" uint64_t RecoveredCall_90e7a0_0(uint64_t);
extern "C" void LeafTarget_90e7a0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_90e7a0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_90e7a0_0) - 2264) + 2264);
    const uint64_t result0 = RecoveredCall_90e7a0_0((arg0 + 160));
    LeafTarget_90e7a0(arg0);
}

extern "C" unsigned char LeafData_90e7d0_0[];
extern "C" uint64_t RecoveredCall_90e7d0_0(uint64_t);
extern "C" uint64_t RecoveredCall_90e7d0_1(uint64_t);
extern "C" void LeafTarget_90e7d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_90e7d0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_90e7d0_0) - 2264) + 2264);
    const uint64_t result0 = RecoveredCall_90e7d0_0((arg0 + 160));
    const uint64_t result1 = RecoveredCall_90e7d0_1(arg0);
    LeafTarget_90e7d0(arg0);
}

extern "C" uint64_t RecoveredCall_90e860_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_90e860_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_90e860(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_90e860_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_90e860_1((arg0 + 160),arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 169),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    return result3;
}

extern "C" unsigned char LeafData_910510_0[];
extern "C" uint64_t RecoveredCall_910510_0(uint64_t);
extern "C" void LeafTarget_910510(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_910510(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_910510_0) - 3144) + 3144);
    const uint64_t result0 = RecoveredCall_910510_0((arg0 + 160));
    LeafTarget_910510(arg0);
}

extern "C" unsigned char LeafData_910540_0[];
extern "C" uint64_t RecoveredCall_910540_0(uint64_t);
extern "C" uint64_t RecoveredCall_910540_1(uint64_t);
extern "C" void LeafTarget_910540(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_910540(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_910540_0) - 3144) + 3144);
    const uint64_t result0 = RecoveredCall_910540_0((arg0 + 160));
    const uint64_t result1 = RecoveredCall_910540_1(arg0);
    LeafTarget_910540(arg0);
}

extern "C" uint64_t RecoveredCall_910570_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_910570_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_910570_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_910570(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_910570_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_910570_1((arg0 + 160),arg1,arg2);
    const uint64_t result2 = RecoveredCall_910570_2((arg0 + 168),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 176),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 177),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result4)) << 0));
    return result4;
}

extern "C" unsigned char LeafData_910b60_0[];
extern "C" uint64_t RecoveredCall_910b60_0(uint64_t);
extern "C" uint64_t RecoveredCall_910b60_1(uint64_t);
extern "C" void LeafTarget_910b60(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_910b60(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_910b60_0) - 3144) + 3144);
    const uint64_t result0 = RecoveredCall_910b60_0((arg0 + 160));
    const uint64_t result1 = RecoveredCall_910b60_1(arg0);
    LeafTarget_910b60(arg0);
}

extern "C" unsigned char LeafData_919d50_0[];
extern "C" uint64_t RecoveredCall_919d50_0(uint64_t);
extern "C" void LeafTarget_919d50(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_919d50(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_919d50_0) - 1656) + 1656);
    const uint64_t result0 = RecoveredCall_919d50_0((arg0 + 160));
    LeafTarget_919d50(arg0);
}

extern "C" unsigned char LeafData_919d80_0[];
extern "C" uint64_t RecoveredCall_919d80_0(uint64_t);
extern "C" uint64_t RecoveredCall_919d80_1(uint64_t);
extern "C" void LeafTarget_919d80(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_919d80(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_919d80_0) - 1656) + 1656);
    const uint64_t result0 = RecoveredCall_919d80_0((arg0 + 160));
    const uint64_t result1 = RecoveredCall_919d80_1(arg0);
    LeafTarget_919d80(arg0);
}

extern "C" unsigned char LeafData_91ef90_0[];
extern "C" uint64_t RecoveredCall_91ef90_0(uint64_t);
extern "C" uint64_t RecoveredCall_91ef90_1(uint64_t);
extern "C" void LeafTarget_91ef90(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_91ef90(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_91ef90_0) - 1656) + 1656);
    const uint64_t result0 = RecoveredCall_91ef90_0((arg0 + 160));
    const uint64_t result1 = RecoveredCall_91ef90_1(arg0);
    LeafTarget_91ef90(arg0);
}

extern "C" unsigned char LeafData_91f060_0[];
extern "C" uint64_t RecoveredCall_91f060_0(uint64_t);
extern "C" void LeafTarget_91f060(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_91f060(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_91f060_0) - 1832) + 1832);
    const uint64_t result0 = RecoveredCall_91f060_0((arg0 + 160));
    LeafTarget_91f060(arg0);
}

extern "C" unsigned char LeafData_91f090_0[];
extern "C" uint64_t RecoveredCall_91f090_0(uint64_t);
extern "C" uint64_t RecoveredCall_91f090_1(uint64_t);
extern "C" void LeafTarget_91f090(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_91f090(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_91f090_0) - 1832) + 1832);
    const uint64_t result0 = RecoveredCall_91f090_0((arg0 + 160));
    const uint64_t result1 = RecoveredCall_91f090_1(arg0);
    LeafTarget_91f090(arg0);
}

extern "C" uint64_t RecoveredCall_91f0c0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_91f0c0_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_91f0c0_2(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_91f0c0_3(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_91f0c0_4(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_91f0c0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_91f0c0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_91f0c0_1((arg0 + 160),arg2);
    const uint64_t result2 = RecoveredCall_91f0c0_2((arg0 + 168),arg1,arg2);
    const uint64_t result3 = RecoveredCall_91f0c0_3((arg0 + 208),arg2);
    const uint64_t result4 = RecoveredCall_91f0c0_4((arg0 + 216),arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 224),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 228),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 232),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result7)) << 0));
    return result7;
}

extern "C" unsigned char LeafData_920070_0[];
extern "C" uint64_t RecoveredCall_920070_0(uint64_t);
extern "C" uint64_t RecoveredCall_920070_1(uint64_t);
extern "C" void LeafTarget_920070(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_920070(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_920070_0) - 1832) + 1832);
    const uint64_t result0 = RecoveredCall_920070_0((arg0 + 160));
    const uint64_t result1 = RecoveredCall_920070_1(arg0);
    LeafTarget_920070(arg0);
}

extern "C" unsigned char LeafData_920100_0[];
extern "C" uint64_t RecoveredCall_920100_0(uint64_t);
extern "C" void LeafTarget_920100(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_920100(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_920100_0) - 2360) + 2360);
    const uint64_t result0 = RecoveredCall_920100_0((arg0 + 160));
    LeafTarget_920100(arg0);
}

extern "C" unsigned char LeafData_920130_0[];
extern "C" uint64_t RecoveredCall_920130_0(uint64_t);
extern "C" uint64_t RecoveredCall_920130_1(uint64_t);
extern "C" void LeafTarget_920130(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_920130(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_920130_0) - 2360) + 2360);
    const uint64_t result0 = RecoveredCall_920130_0((arg0 + 160));
    const uint64_t result1 = RecoveredCall_920130_1(arg0);
    LeafTarget_920130(arg0);
}

extern "C" uint64_t RecoveredCall_920160_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_920160_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_920160_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_920160(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_920160_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_920160_1((arg0 + 160),arg1,arg2);
    const uint64_t result2 = RecoveredCall_920160_2((arg0 + 168),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 176),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 180),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result4)) << 0));
    return result4;
}

extern "C" unsigned char LeafData_9204d0_0[];
extern "C" uint64_t RecoveredCall_9204d0_0(uint64_t);
extern "C" uint64_t RecoveredCall_9204d0_1(uint64_t);
extern "C" void LeafTarget_9204d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_9204d0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_9204d0_0) - 2360) + 2360);
    const uint64_t result0 = RecoveredCall_9204d0_0((arg0 + 160));
    const uint64_t result1 = RecoveredCall_9204d0_1(arg0);
    LeafTarget_9204d0(arg0);
}

extern "C" unsigned char LeafData_921090_0[];
extern "C" uint64_t RecoveredCall_921090_0(uint64_t);
extern "C" void LeafTarget_921090(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_921090(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_921090_0) - 3040) + 3040);
    const uint64_t result0 = RecoveredCall_921090_0((arg0 + 160));
    LeafTarget_921090(arg0);
}

extern "C" unsigned char LeafData_9210c0_0[];
extern "C" uint64_t RecoveredCall_9210c0_0(uint64_t);
extern "C" uint64_t RecoveredCall_9210c0_1(uint64_t);
extern "C" void LeafTarget_9210c0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_9210c0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_9210c0_0) - 3040) + 3040);
    const uint64_t result0 = RecoveredCall_9210c0_0((arg0 + 160));
    const uint64_t result1 = RecoveredCall_9210c0_1(arg0);
    LeafTarget_9210c0(arg0);
}

extern "C" uint64_t RecoveredCall_9230b0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_9230b0_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_9230b0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_9230b0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_9230b0_1((arg0 + 160),arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 172),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 176),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 180),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 184),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 188),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 0));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field25 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field26)(field24,(arg0 + 192),uint32_t(4));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field27 + (uint32_t(uint32_t(result8)) << 0));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 0));
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>((field29 + 48));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field30)(field28,(arg0 + 196),uint32_t(4));
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field31 + (uint32_t(uint32_t(result9)) << 0));
    return result9;
}

extern "C" unsigned char LeafData_924bf0_0[];
extern "C" uint64_t RecoveredCall_924bf0_0(uint64_t);
extern "C" void LeafTarget_924bf0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_924bf0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_924bf0_0) - 272) + 272);
    const uint64_t result0 = RecoveredCall_924bf0_0((arg0 + 160));
    LeafTarget_924bf0(arg0);
}

extern "C" unsigned char LeafData_924c20_0[];
extern "C" uint64_t RecoveredCall_924c20_0(uint64_t);
extern "C" uint64_t RecoveredCall_924c20_1(uint64_t);
extern "C" void LeafTarget_924c20(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_924c20(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_924c20_0) - 272) + 272);
    const uint64_t result0 = RecoveredCall_924c20_0((arg0 + 160));
    const uint64_t result1 = RecoveredCall_924c20_1(arg0);
    LeafTarget_924c20(arg0);
}

extern "C" unsigned char LeafData_9252e0_0[];
extern "C" uint64_t RecoveredCall_9252e0_0(uint64_t);
extern "C" uint64_t RecoveredCall_9252e0_1(uint64_t);
extern "C" void LeafTarget_9252e0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_9252e0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_9252e0_0) - 272) + 272);
    const uint64_t result0 = RecoveredCall_9252e0_0((arg0 + 160));
    const uint64_t result1 = RecoveredCall_9252e0_1(arg0);
    LeafTarget_9252e0(arg0);
}

extern "C" uint64_t RecoveredCall_925430_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_925430_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_925430(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_925430_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_925430_1((arg0 + 160),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 200),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 201),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 202),uint32_t(1));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 203),uint32_t(1));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 204),uint32_t(1));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result6)) << 0));
    return result6;
}

extern "C" uint64_t RecoveredCall_925c50_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_925c50_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_925c50(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_925c50_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_925c50_1((arg0 + 160),arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    return result2;
}

extern "C" uint64_t RecoveredCall_926050_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_926050_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_926050(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_926050_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_926050_1((arg0 + 160),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    return result2;
}

extern "C" uint64_t RecoveredCall_926430_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_926430_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_926430(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_926430_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_926430_1((arg0 + 160),arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 169),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 170),uint32_t(1));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result4)) << 0));
    return result4;
}

extern "C" uint64_t RecoveredCall_928820_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_928820_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_928820(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_928820_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_928820_1((arg0 + 160),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 201),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    return result2;
}

extern "C" unsigned char LeafData_92cac0_0[];
extern "C" uint64_t RecoveredCall_92cac0_0(uint64_t);
extern "C" void LeafTarget_92cac0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_92cac0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_92cac0_0) - 3680) + 3680);
    const uint64_t result0 = RecoveredCall_92cac0_0((arg0 + 80));
    LeafTarget_92cac0(arg0);
}

extern "C" unsigned char LeafData_92caf0_0[];
extern "C" uint64_t RecoveredCall_92caf0_0(uint64_t);
extern "C" uint64_t RecoveredCall_92caf0_1(uint64_t);
extern "C" void LeafTarget_92caf0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_92caf0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_92caf0_0) - 3680) + 3680);
    const uint64_t result0 = RecoveredCall_92caf0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_92caf0_1(arg0);
    LeafTarget_92caf0(arg0);
}

extern "C" uint64_t RecoveredCall_92eba0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_92eba0_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_92eba0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_92eba0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_92eba0_1((arg0 + 80),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 88),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    return result2;
}

extern "C" uint64_t RecoveredCall_9322e0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_9322e0_2(uint64_t,uint64_t);
extern "C" void LeafTarget_9322e0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_9322e0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_9322e0_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 76),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t result2 = RecoveredCall_9322e0_2(arg1,(arg0 + 80));
    LeafTarget_9322e0((arg0 + 136),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_9327f0_0(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_9327f0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_9327f0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_9327f0_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 76),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    LeafTarget_9327f0(arg1,(arg0 + 80));
}

extern "C" unsigned char LeafData_936aa0_0[];
extern "C" uint64_t RecoveredCall_936aa0_0(uint64_t);
extern "C" void LeafTarget_936aa0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_936aa0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_936aa0_0) - 3784) + 3784);
    const uint64_t result0 = RecoveredCall_936aa0_0((arg0 + 80));
    LeafTarget_936aa0(arg0);
}

extern "C" unsigned char LeafData_936ad0_0[];
extern "C" uint64_t RecoveredCall_936ad0_0(uint64_t);
extern "C" uint64_t RecoveredCall_936ad0_1(uint64_t);
extern "C" void LeafTarget_936ad0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_936ad0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_936ad0_0) - 3784) + 3784);
    const uint64_t result0 = RecoveredCall_936ad0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_936ad0_1(arg0);
    LeafTarget_936ad0(arg0);
}

extern "C" uint64_t RecoveredCall_937e60_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_937e60_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_937e60_2(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_937e60(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_937e60(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_937e60_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_937e60_1((arg0 + 160),arg1,arg2);
    const uint64_t result2 = RecoveredCall_937e60_2((arg0 + 168),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 176),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    LeafTarget_937e60(arg1,(arg0 + 184));
}

extern "C" unsigned char LeafData_937fc0_0[];
extern "C" uint64_t RecoveredCall_937fc0_0(uint64_t);
extern "C" void LeafTarget_937fc0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_937fc0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_937fc0_0) - 272) + 272);
    const uint64_t result0 = RecoveredCall_937fc0_0((arg0 + 160));
    LeafTarget_937fc0(arg0);
}

extern "C" unsigned char LeafData_937ff0_0[];
extern "C" uint64_t RecoveredCall_937ff0_0(uint64_t);
extern "C" uint64_t RecoveredCall_937ff0_1(uint64_t);
extern "C" void LeafTarget_937ff0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_937ff0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_937ff0_0) - 272) + 272);
    const uint64_t result0 = RecoveredCall_937ff0_0((arg0 + 160));
    const uint64_t result1 = RecoveredCall_937ff0_1(arg0);
    LeafTarget_937ff0(arg0);
}

extern "C" unsigned char LeafData_938380_0[];
extern "C" uint64_t RecoveredCall_938380_0(uint64_t);
extern "C" void LeafTarget_938380(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_938380(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_938380_0) - 936) + 936);
    const uint64_t result0 = RecoveredCall_938380_0((arg0 + 96));
    LeafTarget_938380(arg0);
}

extern "C" unsigned char LeafData_9383b0_0[];
extern "C" uint64_t RecoveredCall_9383b0_0(uint64_t);
extern "C" uint64_t RecoveredCall_9383b0_1(uint64_t);
extern "C" void LeafTarget_9383b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_9383b0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_9383b0_0) - 936) + 936);
    const uint64_t result0 = RecoveredCall_9383b0_0((arg0 + 96));
    const uint64_t result1 = RecoveredCall_9383b0_1(arg0);
    LeafTarget_9383b0(arg0);
}

extern "C" unsigned char LeafData_939490_0[];
extern "C" uint64_t RecoveredCall_939490_0(uint64_t);
extern "C" uint64_t RecoveredCall_939490_1(uint64_t);
extern "C" void LeafTarget_939490(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_939490(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_939490_0) - 936) + 936);
    const uint64_t result0 = RecoveredCall_939490_0((arg0 + 96));
    const uint64_t result1 = RecoveredCall_939490_1(arg0);
    LeafTarget_939490(arg0);
}

extern "C" unsigned char LeafData_93a010_0[];
extern "C" uint64_t RecoveredCall_93a010_0(uint64_t);
extern "C" void LeafTarget_93a010(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_93a010(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_93a010_0) - 1680) + 1680);
    const uint64_t result0 = RecoveredCall_93a010_0((arg0 + 96));
    LeafTarget_93a010(arg0);
}

extern "C" unsigned char LeafData_93a040_0[];
extern "C" uint64_t RecoveredCall_93a040_0(uint64_t);
extern "C" uint64_t RecoveredCall_93a040_1(uint64_t);
extern "C" void LeafTarget_93a040(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_93a040(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_93a040_0) - 1680) + 1680);
    const uint64_t result0 = RecoveredCall_93a040_0((arg0 + 96));
    const uint64_t result1 = RecoveredCall_93a040_1(arg0);
    LeafTarget_93a040(arg0);
}

extern "C" unsigned char LeafData_93b120_0[];
extern "C" uint64_t RecoveredCall_93b120_0(uint64_t);
extern "C" uint64_t RecoveredCall_93b120_1(uint64_t);
extern "C" void LeafTarget_93b120(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_93b120(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_93b120_0) - 1680) + 1680);
    const uint64_t result0 = RecoveredCall_93b120_0((arg0 + 96));
    const uint64_t result1 = RecoveredCall_93b120_1(arg0);
    LeafTarget_93b120(arg0);
}

extern "C" uint64_t RecoveredCall_93b460_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_93b460(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_93b460_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 152),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    return result1;
}

extern "C" unsigned char LeafData_93c260_0[];
extern "C" uint64_t RecoveredCall_93c260_0(uint64_t);
extern "C" void LeafTarget_93c260(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_93c260(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_93c260_0) - 2184) + 2184);
    const uint64_t result0 = RecoveredCall_93c260_0((arg0 + 152));
    LeafTarget_93c260(arg0);
}

extern "C" unsigned char LeafData_93c290_0[];
extern "C" uint64_t RecoveredCall_93c290_0(uint64_t);
extern "C" uint64_t RecoveredCall_93c290_1(uint64_t);
extern "C" void LeafTarget_93c290(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_93c290(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_93c290_0) - 2184) + 2184);
    const uint64_t result0 = RecoveredCall_93c290_0((arg0 + 152));
    const uint64_t result1 = RecoveredCall_93c290_1(arg0);
    LeafTarget_93c290(arg0);
}

extern "C" unsigned char LeafData_93d510_0[];
extern "C" uint64_t RecoveredCall_93d510_0(uint64_t);
extern "C" void LeafTarget_93d510(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_93d510(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_93d510_0) - 2784) + 2784);
    const uint64_t result0 = RecoveredCall_93d510_0((arg0 + 80));
    LeafTarget_93d510(arg0);
}

extern "C" unsigned char LeafData_93d540_0[];
extern "C" uint64_t RecoveredCall_93d540_0(uint64_t);
extern "C" uint64_t RecoveredCall_93d540_1(uint64_t);
extern "C" void LeafTarget_93d540(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_93d540(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_93d540_0) - 2784) + 2784);
    const uint64_t result0 = RecoveredCall_93d540_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_93d540_1(arg0);
    LeafTarget_93d540(arg0);
}

extern "C" unsigned char LeafData_93d670_0[];
extern "C" uint64_t RecoveredCall_93d670_0(uint64_t);
extern "C" uint64_t RecoveredCall_93d670_1(uint64_t);
extern "C" void LeafTarget_93d670(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_93d670(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_93d670_0) - 2184) + 2184);
    const uint64_t result0 = RecoveredCall_93d670_0((arg0 + 152));
    const uint64_t result1 = RecoveredCall_93d670_1(arg0);
    LeafTarget_93d670(arg0);
}

extern "C" unsigned char LeafData_93d990_0[];
extern "C" uint64_t RecoveredCall_93d990_0(uint64_t);
extern "C" void LeafTarget_93d990(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_93d990(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_93d990_0) - 2904) + 2904);
    const uint64_t result0 = RecoveredCall_93d990_0((arg0 + 152));
    LeafTarget_93d990(arg0);
}

extern "C" unsigned char LeafData_93d9c0_0[];
extern "C" uint64_t RecoveredCall_93d9c0_0(uint64_t);
extern "C" uint64_t RecoveredCall_93d9c0_1(uint64_t);
extern "C" void LeafTarget_93d9c0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_93d9c0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_93d9c0_0) - 2904) + 2904);
    const uint64_t result0 = RecoveredCall_93d9c0_0((arg0 + 152));
    const uint64_t result1 = RecoveredCall_93d9c0_1(arg0);
    LeafTarget_93d9c0(arg0);
}

extern "C" unsigned char LeafData_93ec40_0[];
extern "C" uint64_t RecoveredCall_93ec40_0(uint64_t);
extern "C" void LeafTarget_93ec40(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_93ec40(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_93ec40_0) - 3504) + 3504);
    const uint64_t result0 = RecoveredCall_93ec40_0((arg0 + 80));
    LeafTarget_93ec40(arg0);
}

extern "C" unsigned char LeafData_93ec70_0[];
extern "C" uint64_t RecoveredCall_93ec70_0(uint64_t);
extern "C" uint64_t RecoveredCall_93ec70_1(uint64_t);
extern "C" void LeafTarget_93ec70(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_93ec70(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_93ec70_0) - 3504) + 3504);
    const uint64_t result0 = RecoveredCall_93ec70_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_93ec70_1(arg0);
    LeafTarget_93ec70(arg0);
}

extern "C" unsigned char LeafData_93eda0_0[];
extern "C" uint64_t RecoveredCall_93eda0_0(uint64_t);
extern "C" uint64_t RecoveredCall_93eda0_1(uint64_t);
extern "C" void LeafTarget_93eda0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_93eda0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_93eda0_0) - 2904) + 2904);
    const uint64_t result0 = RecoveredCall_93eda0_0((arg0 + 152));
    const uint64_t result1 = RecoveredCall_93eda0_1(arg0);
    LeafTarget_93eda0(arg0);
}

extern "C" uint64_t RecoveredCall_93f3d0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_93f3d0_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_93f3d0_3(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_93f3d0_4(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_93f3d0_5(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_93f3d0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_93f3d0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_93f3d0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_93f3d0_1((arg0 + 544),arg1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 632),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t result3 = RecoveredCall_93f3d0_3((arg0 + 768),arg2);
    const uint64_t result4 = RecoveredCall_93f3d0_4((arg0 + 776),arg1,arg2);
    const uint64_t result5 = RecoveredCall_93f3d0_5((arg0 + 784),arg1,arg2);
    LeafTarget_93f3d0((arg0 + 792),arg1,arg2);
}

extern "C" unsigned char LeafData_947fa0_0[];
extern "C" uint64_t RecoveredCall_947fa0_0(uint64_t);
extern "C" void LeafTarget_947fa0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_947fa0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_947fa0_0) - 2328) + 2328);
    const uint64_t result0 = RecoveredCall_947fa0_0((arg0 + 88));
    LeafTarget_947fa0(arg0);
}

extern "C" unsigned char LeafData_947fd0_0[];
extern "C" uint64_t RecoveredCall_947fd0_0(uint64_t);
extern "C" uint64_t RecoveredCall_947fd0_1(uint64_t);
extern "C" void LeafTarget_947fd0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_947fd0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_947fd0_0) - 2328) + 2328);
    const uint64_t result0 = RecoveredCall_947fd0_0((arg0 + 88));
    const uint64_t result1 = RecoveredCall_947fd0_1(arg0);
    LeafTarget_947fd0(arg0);
}

extern "C" uint64_t RecoveredCall_9481b0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_9481b0_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_9481b0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_9481b0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_9481b0_1((arg0 + 544),arg1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 632),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    return result2;
}

extern "C" uint64_t RecoveredCall_948d90_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_948d90_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_948d90_3(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_948d90_4(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_948d90_5(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_948d90(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_948d90(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_948d90_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_948d90_1((arg0 + 544),arg1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 632),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t result3 = RecoveredCall_948d90_3((arg0 + 768),arg2);
    const uint64_t result4 = RecoveredCall_948d90_4((arg0 + 776),arg1,arg2);
    const uint64_t result5 = RecoveredCall_948d90_5((arg0 + 784),arg1,arg2);
    LeafTarget_948d90((arg0 + 792),arg1,arg2);
}

extern "C" unsigned char LeafData_94a380_0[];
extern "C" uint64_t RecoveredCall_94a380_0(uint64_t);
extern "C" void LeafTarget_94a380(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_94a380(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_94a380_0) - 2984) + 2984);
    const uint64_t result0 = RecoveredCall_94a380_0((arg0 + 80));
    LeafTarget_94a380(arg0);
}

extern "C" unsigned char LeafData_94a3b0_0[];
extern "C" uint64_t RecoveredCall_94a3b0_0(uint64_t);
extern "C" uint64_t RecoveredCall_94a3b0_1(uint64_t);
extern "C" void LeafTarget_94a3b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_94a3b0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_94a3b0_0) - 2984) + 2984);
    const uint64_t result0 = RecoveredCall_94a3b0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_94a3b0_1(arg0);
    LeafTarget_94a3b0(arg0);
}

extern "C" unsigned char LeafData_94a5a0_0[];
extern "C" uint64_t RecoveredCall_94a5a0_0(uint64_t);
extern "C" void LeafTarget_94a5a0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_94a5a0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_94a5a0_0) - 3344) + 3344);
    const uint64_t result0 = RecoveredCall_94a5a0_0((arg0 + 80));
    LeafTarget_94a5a0(arg0);
}

extern "C" unsigned char LeafData_94a5d0_0[];
extern "C" uint64_t RecoveredCall_94a5d0_0(uint64_t);
extern "C" uint64_t RecoveredCall_94a5d0_1(uint64_t);
extern "C" void LeafTarget_94a5d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_94a5d0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_94a5d0_0) - 3344) + 3344);
    const uint64_t result0 = RecoveredCall_94a5d0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_94a5d0_1(arg0);
    LeafTarget_94a5d0(arg0);
}

extern "C" unsigned char LeafData_94a9d0_0[];
extern "C" uint64_t RecoveredCall_94a9d0_0(uint64_t);
extern "C" uint64_t RecoveredCall_94a9d0_1(uint64_t);
extern "C" void LeafTarget_94a9d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_94a9d0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_94a9d0_0) - 3344) + 3344);
    const uint64_t result0 = RecoveredCall_94a9d0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_94a9d0_1(arg0);
    LeafTarget_94a9d0(arg0);
}

extern "C" uint64_t RecoveredCall_94b6c0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_94b6c0_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_94b6c0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_94b6c0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_94b6c0_1((arg0 + 544),arg1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 632),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 764),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 768),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 772),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result5)) << 0));
    return result5;
}

extern "C" uint64_t RecoveredCall_94c940_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_94c940_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_94c940(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_94c940_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_94c940_1((arg0 + 544),arg1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 632),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 764),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 768),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 772),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 776),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 780),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 0));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field25 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field26)(field24,(arg0 + 784),uint32_t(4));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field27 + (uint32_t(uint32_t(result8)) << 0));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 0));
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>((field29 + 48));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field30)(field28,(arg0 + 788),uint32_t(4));
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field32 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field31 + (uint32_t(uint32_t(result9)) << 0));
    const uint64_t field33 = *reinterpret_cast<const uint64_t*>((field32 + 0));
    const uint64_t field34 = *reinterpret_cast<const uint64_t*>((field33 + 48));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field34)(field32,(arg0 + 792),uint32_t(4));
    const uint64_t field35 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field35 + (uint32_t(uint32_t(result10)) << 0));
    return result10;
}

extern "C" uint64_t RecoveredCall_94d920_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_94d920_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_94d920(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_94d920_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_94d920_1((arg0 + 544),arg1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 632),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    return result2;
}

extern "C" uint64_t RecoveredCall_94dfb0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_94dfb0_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_94dfb0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_94dfb0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_94dfb0_1((arg0 + 544),arg1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 632),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 764),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 768),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 772),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 776),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result6)) << 0));
    return result6;
}

extern "C" uint64_t RecoveredCall_94e970_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_94e970_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_94e970(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_94e970_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_94e970_1((arg0 + 544),arg1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 632),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 764),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    return result3;
}

extern "C" uint64_t RecoveredCall_94f1b0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_94f1b0_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_94f1b0_3(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_94f1b0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_94f1b0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_94f1b0_1((arg0 + 544),arg1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 632),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t result3 = RecoveredCall_94f1b0_3((arg0 + 768),arg1,arg2);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 808),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result4)) << 0));
    return result4;
}

extern "C" uint64_t RecoveredCall_9502d0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_9502d0_1(uint64_t,uint64_t);
extern "C" void LeafTarget_9502d0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_9502d0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_9502d0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_9502d0_1((arg0 + 544),arg1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 632),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    LeafTarget_9502d0((arg0 + 768),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_950360_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_950360_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_950360(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_950360_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_950360_1((arg0 + 544),arg1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 632),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 764),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 768),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 772),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 776),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 780),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result7)) << 0));
    return result7;
}

extern "C" unsigned char LeafData_9515a0_0[];
extern "C" uint64_t RecoveredCall_9515a0_0(uint64_t);
extern "C" void LeafTarget_9515a0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_9515a0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_9515a0_0) - 1984) + 1984);
    const uint64_t result0 = RecoveredCall_9515a0_0((arg0 + 96));
    LeafTarget_9515a0(arg0);
}

extern "C" unsigned char LeafData_9515d0_0[];
extern "C" uint64_t RecoveredCall_9515d0_0(uint64_t);
extern "C" uint64_t RecoveredCall_9515d0_1(uint64_t);
extern "C" void LeafTarget_9515d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_9515d0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_9515d0_0) - 1984) + 1984);
    const uint64_t result0 = RecoveredCall_9515d0_0((arg0 + 96));
    const uint64_t result1 = RecoveredCall_9515d0_1(arg0);
    LeafTarget_9515d0(arg0);
}

extern "C" unsigned char LeafData_9526b0_0[];
extern "C" uint64_t RecoveredCall_9526b0_0(uint64_t);
extern "C" uint64_t RecoveredCall_9526b0_1(uint64_t);
extern "C" void LeafTarget_9526b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_9526b0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_9526b0_0) - 1984) + 1984);
    const uint64_t result0 = RecoveredCall_9526b0_0((arg0 + 96));
    const uint64_t result1 = RecoveredCall_9526b0_1(arg0);
    LeafTarget_9526b0(arg0);
}

extern "C" unsigned char LeafData_955c00_0[];
extern "C" uint64_t RecoveredCall_955c00_0(uint64_t);
extern "C" void LeafTarget_955c00(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_955c00(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_955c00_0) - 3616) + 3616);
    const uint64_t result0 = RecoveredCall_955c00_0((arg0 + 80));
    LeafTarget_955c00(arg0);
}

extern "C" unsigned char LeafData_955c30_0[];
extern "C" uint64_t RecoveredCall_955c30_0(uint64_t);
extern "C" uint64_t RecoveredCall_955c30_1(uint64_t);
extern "C" void LeafTarget_955c30(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_955c30(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_955c30_0) - 3616) + 3616);
    const uint64_t result0 = RecoveredCall_955c30_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_955c30_1(arg0);
    LeafTarget_955c30(arg0);
}

extern "C" unsigned char LeafData_956030_0[];
extern "C" uint64_t RecoveredCall_956030_0(uint64_t);
extern "C" uint64_t RecoveredCall_956030_1(uint64_t);
extern "C" void LeafTarget_956030(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_956030(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_956030_0) - 3616) + 3616);
    const uint64_t result0 = RecoveredCall_956030_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_956030_1(arg0);
    LeafTarget_956030(arg0);
}

extern "C" unsigned char LeafData_95cec0_0[];
extern "C" uint64_t RecoveredCall_95cec0_0(uint64_t);
extern "C" void LeafTarget_95cec0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_95cec0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_95cec0_0) - 936) + 936);
    const uint64_t result0 = RecoveredCall_95cec0_0((arg0 + 80));
    LeafTarget_95cec0(arg0);
}

extern "C" unsigned char LeafData_95cef0_0[];
extern "C" uint64_t RecoveredCall_95cef0_0(uint64_t);
extern "C" uint64_t RecoveredCall_95cef0_1(uint64_t);
extern "C" void LeafTarget_95cef0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_95cef0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_95cef0_0) - 936) + 936);
    const uint64_t result0 = RecoveredCall_95cef0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_95cef0_1(arg0);
    LeafTarget_95cef0(arg0);
}

extern "C" unsigned char LeafData_9a19f0_0[];
extern "C" uint64_t RecoveredCall_9a19f0_0(uint64_t);
extern "C" void LeafTarget_9a19f0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_9a19f0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_9a19f0_0) - 3488) + 3488);
    const uint64_t result0 = RecoveredCall_9a19f0_0((arg0 + 80));
    LeafTarget_9a19f0(arg0);
}

extern "C" unsigned char LeafData_9a1a20_0[];
extern "C" uint64_t RecoveredCall_9a1a20_0(uint64_t);
extern "C" uint64_t RecoveredCall_9a1a20_1(uint64_t);
extern "C" void LeafTarget_9a1a20(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_9a1a20(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_9a1a20_0) - 3488) + 3488);
    const uint64_t result0 = RecoveredCall_9a1a20_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_9a1a20_1(arg0);
    LeafTarget_9a1a20(arg0);
}

extern "C" unsigned char LeafData_9a1e20_0[];
extern "C" uint64_t RecoveredCall_9a1e20_0(uint64_t);
extern "C" uint64_t RecoveredCall_9a1e20_1(uint64_t);
extern "C" void LeafTarget_9a1e20(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_9a1e20(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_9a1e20_0) - 3488) + 3488);
    const uint64_t result0 = RecoveredCall_9a1e20_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_9a1e20_1(arg0);
    LeafTarget_9a1e20(arg0);
}

extern "C" uint64_t RecoveredCall_9b8a00_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_9b8a00(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_9b8a00_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 668),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    return result1;
}

extern "C" unsigned char LeafData_9bed80_0[];
extern "C" uint64_t RecoveredCall_9bed80_0(uint64_t);
extern "C" void LeafTarget_9bed80(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_9bed80(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_9bed80_0) - 312) + 312);
    const uint64_t result0 = RecoveredCall_9bed80_0((arg0 + 80));
    LeafTarget_9bed80(arg0);
}

extern "C" unsigned char LeafData_9bedb0_0[];
extern "C" uint64_t RecoveredCall_9bedb0_0(uint64_t);
extern "C" uint64_t RecoveredCall_9bedb0_1(uint64_t);
extern "C" void LeafTarget_9bedb0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_9bedb0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_9bedb0_0) - 312) + 312);
    const uint64_t result0 = RecoveredCall_9bedb0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_9bedb0_1(arg0);
    LeafTarget_9bedb0(arg0);
}

extern "C" unsigned char LeafData_9bf1b0_0[];
extern "C" uint64_t RecoveredCall_9bf1b0_0(uint64_t);
extern "C" uint64_t RecoveredCall_9bf1b0_1(uint64_t);
extern "C" void LeafTarget_9bf1b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_9bf1b0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_9bf1b0_0) - 312) + 312);
    const uint64_t result0 = RecoveredCall_9bf1b0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_9bf1b0_1(arg0);
    LeafTarget_9bf1b0(arg0);
}

extern "C" unsigned char LeafData_9c5d50_0[];
extern "C" uint64_t RecoveredCall_9c5d50_0(uint64_t);
extern "C" void LeafTarget_9c5d50(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_9c5d50(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_9c5d50_0) - 3024) + 3024);
    const uint64_t result0 = RecoveredCall_9c5d50_0((arg0 + 104));
    LeafTarget_9c5d50(arg0);
}

extern "C" uint64_t RecoveredCall_9c6780_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_9c6780(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_9c6780_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 144),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 148),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 160),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 164),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 176),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 180),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result6)) << 0));
    return result6;
}

extern "C" unsigned char LeafData_9c87b0_0[];
extern "C" uint64_t RecoveredCall_9c87b0_0(uint64_t);
extern "C" void LeafTarget_9c87b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_9c87b0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_9c87b0_0) - 664) + 664);
    const uint64_t result0 = RecoveredCall_9c87b0_0((arg0 + 80));
    LeafTarget_9c87b0(arg0);
}

extern "C" unsigned char LeafData_9c87e0_0[];
extern "C" uint64_t RecoveredCall_9c87e0_0(uint64_t);
extern "C" uint64_t RecoveredCall_9c87e0_1(uint64_t);
extern "C" void LeafTarget_9c87e0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_9c87e0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_9c87e0_0) - 664) + 664);
    const uint64_t result0 = RecoveredCall_9c87e0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_9c87e0_1(arg0);
    LeafTarget_9c87e0(arg0);
}

extern "C" unsigned char LeafData_9c8be0_0[];
extern "C" uint64_t RecoveredCall_9c8be0_0(uint64_t);
extern "C" uint64_t RecoveredCall_9c8be0_1(uint64_t);
extern "C" void LeafTarget_9c8be0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_9c8be0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_9c8be0_0) - 664) + 664);
    const uint64_t result0 = RecoveredCall_9c8be0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_9c8be0_1(arg0);
    LeafTarget_9c8be0(arg0);
}

extern "C" unsigned char LeafData_9c8c50_0[];
extern "C" uint64_t RecoveredCall_9c8c50_0(uint64_t);
extern "C" void LeafTarget_9c8c50(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_9c8c50(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_9c8c50_0) - 1088) + 1088);
    const uint64_t result0 = RecoveredCall_9c8c50_0((arg0 + 96));
    LeafTarget_9c8c50(arg0);
}

extern "C" unsigned char LeafData_9c8c80_0[];
extern "C" uint64_t RecoveredCall_9c8c80_0(uint64_t);
extern "C" uint64_t RecoveredCall_9c8c80_1(uint64_t);
extern "C" void LeafTarget_9c8c80(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_9c8c80(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_9c8c80_0) - 1088) + 1088);
    const uint64_t result0 = RecoveredCall_9c8c80_0((arg0 + 96));
    const uint64_t result1 = RecoveredCall_9c8c80_1(arg0);
    LeafTarget_9c8c80(arg0);
}

extern "C" unsigned char LeafData_9cb240_0[];
extern "C" uint64_t RecoveredCall_9cb240_0(uint64_t);
extern "C" uint64_t RecoveredCall_9cb240_1(uint64_t);
extern "C" void LeafTarget_9cb240(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_9cb240(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_9cb240_0) - 1088) + 1088);
    const uint64_t result0 = RecoveredCall_9cb240_0((arg0 + 96));
    const uint64_t result1 = RecoveredCall_9cb240_1(arg0);
    LeafTarget_9cb240(arg0);
}

extern "C" uint64_t RecoveredCall_9e3f70_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_9e3f70(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_9e3f70_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 3004),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 3008),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 3012),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    return result3;
}

extern "C" uint64_t RecoveredCall_9e5ef0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_9e5ef0_4(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_9e5ef0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_9e5ef0_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 3004),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 3008),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 3012),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t result4 = RecoveredCall_9e5ef0_4((arg0 + 3024),arg1);
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 3144),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result5)) << 0));
    return result5;
}

extern "C" uint64_t RecoveredCall_9e67c0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_9e67c0_4(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_9e67c0_6(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_9e67c0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_9e67c0_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 3004),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 3008),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 3012),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t result4 = RecoveredCall_9e67c0_4((arg0 + 3024),arg1);
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 3144),uint32_t(1));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t result6 = RecoveredCall_9e67c0_6((arg0 + 3152),arg1);
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 3272),uint32_t(1));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 3276),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result8)) << 0));
    return result8;
}

extern "C" uint64_t RecoveredCall_9e7d10_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_9e7d10_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_9e7d10_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_9e7d10_3(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_9e7d10_4(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_9e7d10_5(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_9e7d10(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_9e7d10_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_9e7d10_1((arg0 + 2960),arg1);
    const uint64_t result2 = RecoveredCall_9e7d10_2((arg0 + 3080),arg1);
    const uint64_t result3 = RecoveredCall_9e7d10_3((arg0 + 3200),arg1);
    const uint64_t result4 = RecoveredCall_9e7d10_4((arg0 + 3320),arg1);
    const uint64_t result5 = RecoveredCall_9e7d10_5((arg0 + 3440),arg1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 3560),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 3564),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result7)) << 0));
    return result7;
}

extern "C" uint64_t RecoveredCall_9e9f90_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_9e9f90_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_9e9f90(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_9e9f90_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_9e9f90_1((arg0 + 2960),arg1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 3080),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 3084),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    return result3;
}

extern "C" uint64_t RecoveredCall_9eab10_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_9eab10_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_9eab10_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_9eab10_3(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_9eab10_4(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_9eab10_5(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_9eab10(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_9eab10_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_9eab10_1((arg0 + 2960),arg1);
    const uint64_t result2 = RecoveredCall_9eab10_2((arg0 + 3080),arg1);
    const uint64_t result3 = RecoveredCall_9eab10_3((arg0 + 3200),arg1);
    const uint64_t result4 = RecoveredCall_9eab10_4((arg0 + 3320),arg1);
    const uint64_t result5 = RecoveredCall_9eab10_5((arg0 + 3440),arg1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 3560),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result6)) << 0));
    return result6;
}

extern "C" uint64_t RecoveredCall_9f5b90_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_9f5b90_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_9f5b90_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_9f5b90_3(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_9f5b90_4(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_9f5b90_5(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_9f5b90_6(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_9f5b90_7(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_9f5b90_8(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_9f5b90_9(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_9f5b90(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_9f5b90_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_9f5b90_1((arg0 + 2960),arg1);
    const uint64_t result2 = RecoveredCall_9f5b90_2((arg0 + 3080),arg1);
    const uint64_t result3 = RecoveredCall_9f5b90_3((arg0 + 3200),arg1);
    const uint64_t result4 = RecoveredCall_9f5b90_4((arg0 + 3320),arg1);
    const uint64_t result5 = RecoveredCall_9f5b90_5((arg0 + 3440),arg1);
    const uint64_t result6 = RecoveredCall_9f5b90_6((arg0 + 3560),arg1);
    const uint64_t result7 = RecoveredCall_9f5b90_7((arg0 + 3680),arg1);
    const uint64_t result8 = RecoveredCall_9f5b90_8((arg0 + 3800),arg1);
    const uint64_t result9 = RecoveredCall_9f5b90_9((arg0 + 3920),arg1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 4040),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result10)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result11 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 4044),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result11)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result12 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 4048),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result12)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result13 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 4052),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result13)) << 0));
    return result13;
}

extern "C" uint64_t RecoveredCall_9fdc60_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_9fdc60(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_9fdc60_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 3004),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 3008),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 3012),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 3024),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 3028),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result5)) << 0));
    return result5;
}

extern "C" uint64_t RecoveredCall_9ffd30_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_9ffd30(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_9ffd30_0(arg0,arg1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 3172),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 3176),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 3180),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 3184),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 3188),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 3192),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 0));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field25 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field26)(field24,(arg0 + 3196),uint32_t(4));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field27 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 0));
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>((field29 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field30)(field28,(arg0 + 3200),uint32_t(4));
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field31 + (uint32_t(uint32_t(result8)) << 0));
    return result8;
}

extern "C" unsigned char LeafData_a05d70_0[];
extern "C" uint64_t RecoveredCall_a05d70_0(uint64_t);
extern "C" void LeafTarget_a05d70(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_a05d70(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_a05d70_0) - 4040) + 4040);
    const uint64_t result0 = RecoveredCall_a05d70_0((arg0 + 88));
    LeafTarget_a05d70(arg0);
}

extern "C" unsigned char LeafData_a05da0_0[];
extern "C" uint64_t RecoveredCall_a05da0_0(uint64_t);
extern "C" uint64_t RecoveredCall_a05da0_1(uint64_t);
extern "C" void LeafTarget_a05da0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_a05da0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_a05da0_0) - 4040) + 4040);
    const uint64_t result0 = RecoveredCall_a05da0_0((arg0 + 88));
    const uint64_t result1 = RecoveredCall_a05da0_1(arg0);
    LeafTarget_a05da0(arg0);
}

extern "C" unsigned char LeafData_a08b10_0[];
extern "C" uint64_t RecoveredCall_a08b10_0(uint64_t);
extern "C" void LeafTarget_a08b10(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_a08b10(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_a08b10_0) - 4040) + 4040);
    const uint64_t result0 = RecoveredCall_a08b10_0((arg0 + 88));
    LeafTarget_a08b10(arg0);
}

extern "C" unsigned char LeafData_a08b40_0[];
extern "C" uint64_t RecoveredCall_a08b40_0(uint64_t);
extern "C" uint64_t RecoveredCall_a08b40_1(uint64_t);
extern "C" void LeafTarget_a08b40(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_a08b40(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_a08b40_0) - 4040) + 4040);
    const uint64_t result0 = RecoveredCall_a08b40_0((arg0 + 88));
    const uint64_t result1 = RecoveredCall_a08b40_1(arg0);
    LeafTarget_a08b40(arg0);
}

extern "C" uint64_t RecoveredCall_a25900_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_a25900(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_a25900_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 3404),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 3408),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 3412),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 3416),uint32_t(1));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result4)) << 0));
    return result4;
}

extern "C" uint64_t RecoveredCall_a26b40_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_a26b40(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_a26b40_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 3401),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    return result1;
}

extern "C" uint64_t RecoveredCall_a3a550_0(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_a3a550(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_a3a550(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_a3a550_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 3404),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 3408),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 3412),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    LeafTarget_a3a550(arg1,(arg0 + 3416));
}

extern "C" uint64_t RecoveredCall_a3c1b0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_a3c1b0_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_a3c1b0_7(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_a3c1b0_8(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_a3c1b0_9(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_a3c1b0_10(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_a3c1b0_11(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_a3c1b0_12(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_a3c1b0_13(uint64_t,uint64_t);
extern "C" void LeafTarget_a3c1b0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_a3c1b0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_a3c1b0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_a3c1b0_1((arg0 + 3400),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 3444),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 3448),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    const uint32_t field8 = *reinterpret_cast<const uint32_t*>((arg0 + 3444));
    *reinterpret_cast<uint32_t*>((arg0 + 3440)) = uint32_t(uint32_t(field8));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field11)(field9,(arg0 + 3452),uint32_t(4));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field12 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 0));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((field14 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field15)(field13,(arg0 + 3456),uint32_t(4));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field16 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 0));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((field18 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field19)(field17,(arg0 + 3460),uint32_t(4));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field20 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t result7 = RecoveredCall_a3c1b0_7((arg0 + 3464),arg1);
    const uint64_t result8 = RecoveredCall_a3c1b0_8((arg0 + 3584),arg1);
    const uint64_t result9 = RecoveredCall_a3c1b0_9((arg0 + 3704),arg1);
    const uint64_t result10 = RecoveredCall_a3c1b0_10((arg0 + 3824),arg1);
    const uint64_t result11 = RecoveredCall_a3c1b0_11((arg0 + 3944),arg1);
    const uint64_t result12 = RecoveredCall_a3c1b0_12((arg0 + 4064),arg1);
    const uint64_t result13 = RecoveredCall_a3c1b0_13((arg0 + uint32_t(4184)),arg1);
    LeafTarget_a3c1b0((arg0 + uint32_t(4304)),arg1);
}

extern "C" uint64_t RecoveredCall_a3f8c0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_a3f8c0_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_a3f8c0_9(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_a3f8c0_10(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_a3f8c0_11(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_a3f8c0_12(uint64_t,uint64_t);
extern "C" void LeafTarget_a3f8c0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_a3f8c0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_a3f8c0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_a3f8c0_1((arg0 + 3400),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 3440),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 3444),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 3448),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 3452),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 3456),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 3460),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 0));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field25 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field26)(field24,(arg0 + 3464),uint32_t(4));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field27 + (uint32_t(uint32_t(result8)) << 0));
    const uint64_t result9 = RecoveredCall_a3f8c0_9((arg0 + 3472),arg1);
    const uint64_t result10 = RecoveredCall_a3f8c0_10((arg0 + 3592),arg1);
    const uint64_t result11 = RecoveredCall_a3f8c0_11((arg0 + 3712),arg1);
    const uint64_t result12 = RecoveredCall_a3f8c0_12((arg0 + 3832),arg1);
    LeafTarget_a3f8c0((arg0 + 3952),arg1);
}

extern "C" uint64_t RecoveredCall_a42580_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_a42580_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_a42580_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_a42580(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_a42580_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_a42580_1((arg0 + 3408),arg1);
    const uint64_t result2 = RecoveredCall_a42580_2((arg0 + 3528),arg1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 3640),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 3644),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 3648),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 3652),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 3656),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 3660),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result8)) << 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 0));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field25 + 48));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field26)(field24,(arg0 + 3664),uint32_t(4));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field27 + (uint32_t(uint32_t(result9)) << 0));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 0));
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>((field29 + 48));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field30)(field28,(arg0 + 3668),uint32_t(4));
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field32 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field31 + (uint32_t(uint32_t(result10)) << 0));
    const uint64_t field33 = *reinterpret_cast<const uint64_t*>((field32 + 0));
    const uint64_t field34 = *reinterpret_cast<const uint64_t*>((field33 + 48));
    const uint64_t result11 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field34)(field32,(arg0 + 3672),uint32_t(4));
    const uint64_t field35 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field36 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field35 + (uint32_t(uint32_t(result11)) << 0));
    const uint64_t field37 = *reinterpret_cast<const uint64_t*>((field36 + 0));
    const uint64_t field38 = *reinterpret_cast<const uint64_t*>((field37 + 48));
    const uint64_t result12 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field38)(field36,(arg0 + 3676),uint32_t(4));
    const uint64_t field39 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field40 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field39 + (uint32_t(uint32_t(result12)) << 0));
    const uint64_t field41 = *reinterpret_cast<const uint64_t*>((field40 + 0));
    const uint64_t field42 = *reinterpret_cast<const uint64_t*>((field41 + 48));
    const uint64_t result13 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field42)(field40,(arg0 + 3680),uint32_t(4));
    const uint64_t field43 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field44 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field43 + (uint32_t(uint32_t(result13)) << 0));
    const uint64_t field45 = *reinterpret_cast<const uint64_t*>((field44 + 0));
    const uint64_t field46 = *reinterpret_cast<const uint64_t*>((field45 + 48));
    const uint64_t result14 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field46)(field44,(arg0 + 3684),uint32_t(4));
    const uint64_t field47 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field48 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field47 + (uint32_t(uint32_t(result14)) << 0));
    const uint64_t field49 = *reinterpret_cast<const uint64_t*>((field48 + 0));
    const uint64_t field50 = *reinterpret_cast<const uint64_t*>((field49 + 48));
    const uint64_t result15 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field50)(field48,(arg0 + 3688),uint32_t(4));
    const uint64_t field51 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field52 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field51 + (uint32_t(uint32_t(result15)) << 0));
    const uint64_t field53 = *reinterpret_cast<const uint64_t*>((field52 + 0));
    const uint64_t field54 = *reinterpret_cast<const uint64_t*>((field53 + 48));
    const uint64_t result16 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field54)(field52,(arg0 + 3692),uint32_t(4));
    const uint64_t field55 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field56 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field55 + (uint32_t(uint32_t(result16)) << 0));
    const uint64_t field57 = *reinterpret_cast<const uint64_t*>((field56 + 0));
    const uint64_t field58 = *reinterpret_cast<const uint64_t*>((field57 + 48));
    const uint64_t result17 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field58)(field56,(arg0 + 3696),uint32_t(4));
    const uint64_t field59 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field60 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field59 + (uint32_t(uint32_t(result17)) << 0));
    const uint64_t field61 = *reinterpret_cast<const uint64_t*>((field60 + 0));
    const uint64_t field62 = *reinterpret_cast<const uint64_t*>((field61 + 48));
    const uint64_t result18 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field62)(field60,(arg0 + 3700),uint32_t(4));
    const uint64_t field63 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field63 + (uint32_t(uint32_t(result18)) << 0));
    return result18;
}

extern "C" uint64_t RecoveredCall_a47740_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_a47740_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_a47740_2(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_a47740_3(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_a47740_4(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_a47740_5(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_a47740_6(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_a47740_7(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_a47740(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_a47740_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_a47740_1((arg0 + 3400),arg1,arg2);
    const uint64_t result2 = RecoveredCall_a47740_2((arg0 + 3408),arg1,arg2);
    const uint64_t result3 = RecoveredCall_a47740_3((arg0 + 3416),arg1);
    const uint64_t result4 = RecoveredCall_a47740_4((arg0 + 3536),arg1);
    const uint64_t result5 = RecoveredCall_a47740_5((arg0 + 3656),arg1);
    const uint64_t result6 = RecoveredCall_a47740_6((arg0 + 3776),arg1);
    const uint64_t result7 = RecoveredCall_a47740_7((arg0 + 3896),arg1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 4016),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result8)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 4020),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result9)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 4024),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result10)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result11 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 4028),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result11)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result12 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 4032),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result12)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result13 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 4036),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result13)) << 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 0));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field25 + 48));
    const uint64_t result14 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field26)(field24,(arg0 + 4040),uint32_t(4));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field27 + (uint32_t(uint32_t(result14)) << 0));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 0));
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>((field29 + 48));
    const uint64_t result15 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field30)(field28,(arg0 + 4044),uint32_t(4));
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field31 + (uint32_t(uint32_t(result15)) << 0));
    return result15;
}

extern "C" uint64_t RecoveredCall_a65460_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_a65460(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_a65460_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 220),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 224),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 228),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 232),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 236),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 240),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result6)) << 0));
    return result6;
}

extern "C" uint64_t RecoveredCall_a66bd0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_a66bd0_5(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_a66bd0_6(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_a66bd0_7(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_a66bd0_8(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_a66bd0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_a66bd0_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 3404),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 3408),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 3412),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 3416),uint32_t(1));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t result5 = RecoveredCall_a66bd0_5((arg0 + 3480),arg1);
    const uint64_t result6 = RecoveredCall_a66bd0_6((arg0 + 3600),arg1);
    const uint64_t result7 = RecoveredCall_a66bd0_7((arg0 + 3720),arg1);
    const uint64_t result8 = RecoveredCall_a66bd0_8((arg0 + 3840),arg1);
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 3960),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result9)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 3964),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result10)) << 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 0));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field25 + 48));
    const uint64_t result11 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field26)(field24,(arg0 + 3968),uint32_t(4));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field27 + (uint32_t(uint32_t(result11)) << 0));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 0));
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>((field29 + 48));
    const uint64_t result12 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field30)(field28,(arg0 + 3972),uint32_t(4));
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field32 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field31 + (uint32_t(uint32_t(result12)) << 0));
    const uint64_t field33 = *reinterpret_cast<const uint64_t*>((field32 + 0));
    const uint64_t field34 = *reinterpret_cast<const uint64_t*>((field33 + 48));
    const uint64_t result13 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field34)(field32,(arg0 + 3976),uint32_t(4));
    const uint64_t field35 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field36 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field35 + (uint32_t(uint32_t(result13)) << 0));
    const uint64_t field37 = *reinterpret_cast<const uint64_t*>((field36 + 0));
    const uint64_t field38 = *reinterpret_cast<const uint64_t*>((field37 + 48));
    const uint64_t result14 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field38)(field36,(arg0 + 3980),uint32_t(4));
    const uint64_t field39 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field40 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field39 + (uint32_t(uint32_t(result14)) << 0));
    const uint64_t field41 = *reinterpret_cast<const uint64_t*>((field40 + 0));
    const uint64_t field42 = *reinterpret_cast<const uint64_t*>((field41 + 48));
    const uint64_t result15 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field42)(field40,(arg0 + 3984),uint32_t(4));
    const uint64_t field43 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field44 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field43 + (uint32_t(uint32_t(result15)) << 0));
    const uint64_t field45 = *reinterpret_cast<const uint64_t*>((field44 + 0));
    const uint64_t field46 = *reinterpret_cast<const uint64_t*>((field45 + 48));
    const uint64_t result16 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field46)(field44,(arg0 + 3988),uint32_t(4));
    const uint64_t field47 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field48 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field47 + (uint32_t(uint32_t(result16)) << 0));
    const uint64_t field49 = *reinterpret_cast<const uint64_t*>((field48 + 0));
    const uint64_t field50 = *reinterpret_cast<const uint64_t*>((field49 + 48));
    const uint64_t result17 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field50)(field48,(arg0 + 3992),uint32_t(4));
    const uint64_t field51 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field52 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field51 + (uint32_t(uint32_t(result17)) << 0));
    const uint64_t field53 = *reinterpret_cast<const uint64_t*>((field52 + 0));
    const uint64_t field54 = *reinterpret_cast<const uint64_t*>((field53 + 48));
    const uint64_t result18 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field54)(field52,(arg0 + 3996),uint32_t(4));
    const uint64_t field55 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field55 + (uint32_t(uint32_t(result18)) << 0));
    return result18;
}

extern "C" unsigned char LeafData_a6f870_0[];
extern "C" uint64_t RecoveredCall_a6f870_0(uint64_t);
extern "C" void LeafTarget_a6f870(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_a6f870(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_a6f870_0) - 1344) + 1344);
    const uint64_t result0 = RecoveredCall_a6f870_0((arg0 + 96));
    LeafTarget_a6f870(arg0);
}

extern "C" unsigned char LeafData_a6f8a0_0[];
extern "C" uint64_t RecoveredCall_a6f8a0_0(uint64_t);
extern "C" uint64_t RecoveredCall_a6f8a0_1(uint64_t);
extern "C" void LeafTarget_a6f8a0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_a6f8a0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_a6f8a0_0) - 1344) + 1344);
    const uint64_t result0 = RecoveredCall_a6f8a0_0((arg0 + 96));
    const uint64_t result1 = RecoveredCall_a6f8a0_1(arg0);
    LeafTarget_a6f8a0(arg0);
}

extern "C" unsigned char LeafData_a6f910_0[];
extern "C" uint64_t RecoveredCall_a6f910_0(uint64_t);
extern "C" uint64_t RecoveredCall_a6f910_1(uint64_t);
extern "C" void LeafTarget_a6f910(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_a6f910(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_a6f910_0) - 1344) + 1344);
    const uint64_t result0 = RecoveredCall_a6f910_0((arg0 + 96));
    const uint64_t result1 = RecoveredCall_a6f910_1(arg0);
    LeafTarget_a6f910(arg0);
}

extern "C" unsigned char LeafData_a72520_0[];
extern "C" uint64_t RecoveredCall_a72520_0(uint64_t);
extern "C" void LeafTarget_a72520(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_a72520(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_a72520_0) - 1776) + 1776);
    const uint64_t result0 = RecoveredCall_a72520_0((arg0 + 96));
    LeafTarget_a72520(arg0);
}

extern "C" unsigned char LeafData_a72550_0[];
extern "C" uint64_t RecoveredCall_a72550_0(uint64_t);
extern "C" uint64_t RecoveredCall_a72550_1(uint64_t);
extern "C" void LeafTarget_a72550(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_a72550(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_a72550_0) - 1776) + 1776);
    const uint64_t result0 = RecoveredCall_a72550_0((arg0 + 96));
    const uint64_t result1 = RecoveredCall_a72550_1(arg0);
    LeafTarget_a72550(arg0);
}

extern "C" uint64_t RecoveredCall_a725e0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_a725e0_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_a725e0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_a725e0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_a725e0_1((arg0 + 80),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 136),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    return result2;
}

extern "C" unsigned char LeafData_a72fb0_0[];
extern "C" uint64_t RecoveredCall_a72fb0_0(uint64_t);
extern "C" void LeafTarget_a72fb0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_a72fb0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_a72fb0_0) - 2648) + 2648);
    const uint64_t result0 = RecoveredCall_a72fb0_0((arg0 + 96));
    LeafTarget_a72fb0(arg0);
}

extern "C" unsigned char LeafData_a72fe0_0[];
extern "C" uint64_t RecoveredCall_a72fe0_0(uint64_t);
extern "C" uint64_t RecoveredCall_a72fe0_1(uint64_t);
extern "C" void LeafTarget_a72fe0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_a72fe0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_a72fe0_0) - 2648) + 2648);
    const uint64_t result0 = RecoveredCall_a72fe0_0((arg0 + 96));
    const uint64_t result1 = RecoveredCall_a72fe0_1(arg0);
    LeafTarget_a72fe0(arg0);
}

extern "C" unsigned char LeafData_a73c70_0[];
extern "C" uint64_t RecoveredCall_a73c70_0(uint64_t);
extern "C" void LeafTarget_a73c70(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_a73c70(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_a73c70_0) - 2648) + 2648);
    const uint64_t result0 = RecoveredCall_a73c70_0((arg0 + 96));
    LeafTarget_a73c70(arg0);
}

extern "C" unsigned char LeafData_a73ca0_0[];
extern "C" uint64_t RecoveredCall_a73ca0_0(uint64_t);
extern "C" uint64_t RecoveredCall_a73ca0_1(uint64_t);
extern "C" void LeafTarget_a73ca0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_a73ca0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_a73ca0_0) - 2648) + 2648);
    const uint64_t result0 = RecoveredCall_a73ca0_0((arg0 + 96));
    const uint64_t result1 = RecoveredCall_a73ca0_1(arg0);
    LeafTarget_a73ca0(arg0);
}

extern "C" unsigned char LeafData_a74640_0[];
extern "C" uint64_t RecoveredCall_a74640_0(uint64_t);
extern "C" unsigned char LeafData_a74640_5[];
extern "C" uint64_t RecoveredCall_a74640_1(uint64_t);
extern "C" void LeafTarget_a74640(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_a74640(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_a74640_0) - 3280) + 3280);
    const uint64_t result0 = RecoveredCall_a74640_0((arg0 + 96));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_a74640_5) - 2976) + 2976);
    const uint64_t result1 = RecoveredCall_a74640_1((arg0 + 80));
    LeafTarget_a74640(arg0);
}

extern "C" unsigned char LeafData_a74680_0[];
extern "C" uint64_t RecoveredCall_a74680_0(uint64_t);
extern "C" unsigned char LeafData_a74680_5[];
extern "C" uint64_t RecoveredCall_a74680_1(uint64_t);
extern "C" uint64_t RecoveredCall_a74680_2(uint64_t);
extern "C" void LeafTarget_a74680(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_a74680(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_a74680_0) - 3280) + 3280);
    const uint64_t result0 = RecoveredCall_a74680_0((arg0 + 96));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_a74680_5) - 2976) + 2976);
    const uint64_t result1 = RecoveredCall_a74680_1((arg0 + 80));
    const uint64_t result2 = RecoveredCall_a74680_2(arg0);
    LeafTarget_a74680(arg0);
}

extern "C" unsigned char LeafData_a74a20_0[];
extern "C" uint64_t RecoveredCall_a74a20_0(uint64_t);
extern "C" unsigned char LeafData_a74a20_5[];
extern "C" uint64_t RecoveredCall_a74a20_1(uint64_t);
extern "C" void LeafTarget_a74a20(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_a74a20(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_a74a20_0) - 3280) + 3280);
    const uint64_t result0 = RecoveredCall_a74a20_0((arg0 + 96));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_a74a20_5) - 2976) + 2976);
    const uint64_t result1 = RecoveredCall_a74a20_1((arg0 + 80));
    LeafTarget_a74a20(arg0);
}

extern "C" unsigned char LeafData_a74a60_0[];
extern "C" uint64_t RecoveredCall_a74a60_0(uint64_t);
extern "C" unsigned char LeafData_a74a60_5[];
extern "C" uint64_t RecoveredCall_a74a60_1(uint64_t);
extern "C" uint64_t RecoveredCall_a74a60_2(uint64_t);
extern "C" void LeafTarget_a74a60(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_a74a60(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_a74a60_0) - 3280) + 3280);
    const uint64_t result0 = RecoveredCall_a74a60_0((arg0 + 96));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_a74a60_5) - 2976) + 2976);
    const uint64_t result1 = RecoveredCall_a74a60_1((arg0 + 80));
    const uint64_t result2 = RecoveredCall_a74a60_2(arg0);
    LeafTarget_a74a60(arg0);
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_aa3810(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 64));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>(((arg0 + (uint8_t(uint32_t(result0)) << 0)) + 24));
    return uint32_t((uint32_t(uint32_t(field2)) != 0));
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_aa3840(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 64));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>(((arg0 + (uint8_t(uint32_t(result0)) << 0)) + 24));
    return uint32_t(field2);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aac6d0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + -16));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 152));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field1)((arg0 + -16),arg1,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aadf60(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + -16));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 120));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field1)((arg0 + -16),arg1,field1);
    return result0;
}

extern "C" uint64_t RecoveredCall_ac6a70_0(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_ac6a70(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ac6a70(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_ac6a70_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 74),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    LeafTarget_ac6a70((arg0 + 80),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_ac7530_0(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_ac7530(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ac7530(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_ac7530_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 74),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    LeafTarget_ac7530((arg0 + 80),arg1,arg2);
}

extern "C" unsigned char LeafData_accac0_0[];
extern "C" uint64_t RecoveredCall_accac0_0(uint64_t);
extern "C" void LeafTarget_accac0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_accac0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_accac0_0) - 32) + 32);
    const uint64_t result0 = RecoveredCall_accac0_0((arg0 + 96));
    LeafTarget_accac0(arg0);
}

extern "C" unsigned char LeafData_accaf0_0[];
extern "C" uint64_t RecoveredCall_accaf0_0(uint64_t);
extern "C" uint64_t RecoveredCall_accaf0_1(uint64_t);
extern "C" void LeafTarget_accaf0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_accaf0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_accaf0_0) - 32) + 32);
    const uint64_t result0 = RecoveredCall_accaf0_0((arg0 + 96));
    const uint64_t result1 = RecoveredCall_accaf0_1(arg0);
    LeafTarget_accaf0(arg0);
}

extern "C" uint64_t RecoveredCall_accd90_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_accd90_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_accd90_2(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_accd90_3(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_accd90(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_accd90_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_accd90_1((arg0 + 80),arg1,arg2);
    const uint64_t result2 = RecoveredCall_accd90_2((arg0 + 96),arg1,arg2);
    const uint64_t result3 = RecoveredCall_accd90_3((arg0 + 104),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 112),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result4)) << 0));
    return result4;
}

extern "C" unsigned char LeafData_acdd00_0[];
extern "C" uint64_t RecoveredCall_acdd00_0(uint64_t);
extern "C" uint64_t RecoveredCall_acdd00_1(uint64_t);
extern "C" void LeafTarget_acdd00(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_acdd00(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_acdd00_0) - 32) + 32);
    const uint64_t result0 = RecoveredCall_acdd00_0((arg0 + 96));
    const uint64_t result1 = RecoveredCall_acdd00_1(arg0);
    LeafTarget_acdd00(arg0);
}

extern "C" uint64_t RecoveredCall_aced00_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_aced00_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_aced00(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_aced00_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_aced00_1((arg0 + 80),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 88),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 92),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 96),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 100),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 104),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 108),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 0));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field25 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field26)(field24,(arg0 + 112),uint32_t(4));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field27 + (uint32_t(uint32_t(result8)) << 0));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 0));
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>((field29 + 48));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field30)(field28,(arg0 + 116),uint32_t(4));
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field32 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field31 + (uint32_t(uint32_t(result9)) << 0));
    const uint64_t field33 = *reinterpret_cast<const uint64_t*>((field32 + 0));
    const uint64_t field34 = *reinterpret_cast<const uint64_t*>((field33 + 48));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field34)(field32,(arg0 + 120),uint32_t(4));
    const uint64_t field35 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field36 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field35 + (uint32_t(uint32_t(result10)) << 0));
    const uint64_t field37 = *reinterpret_cast<const uint64_t*>((field36 + 0));
    const uint64_t field38 = *reinterpret_cast<const uint64_t*>((field37 + 48));
    const uint64_t result11 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field38)(field36,(arg0 + 124),uint32_t(4));
    const uint64_t field39 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field40 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field39 + (uint32_t(uint32_t(result11)) << 0));
    const uint64_t field41 = *reinterpret_cast<const uint64_t*>((field40 + 0));
    const uint64_t field42 = *reinterpret_cast<const uint64_t*>((field41 + 48));
    const uint64_t result12 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field42)(field40,(arg0 + 128),uint32_t(4));
    const uint64_t field43 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field44 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field43 + (uint32_t(uint32_t(result12)) << 0));
    const uint64_t field45 = *reinterpret_cast<const uint64_t*>((field44 + 0));
    const uint64_t field46 = *reinterpret_cast<const uint64_t*>((field45 + 48));
    const uint64_t result13 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field46)(field44,(arg0 + 132),uint32_t(4));
    const uint64_t field47 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field48 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field47 + (uint32_t(uint32_t(result13)) << 0));
    const uint64_t field49 = *reinterpret_cast<const uint64_t*>((field48 + 0));
    const uint64_t field50 = *reinterpret_cast<const uint64_t*>((field49 + 48));
    const uint64_t result14 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field50)(field48,(arg0 + 136),uint32_t(4));
    const uint64_t field51 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field51 + (uint32_t(uint32_t(result14)) << 0));
    return result14;
}

extern "C" uint64_t RecoveredCall_ad2140_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_ad2140_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_ad2140_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ad2140(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_ad2140_0(arg0,arg1,arg2);
    *reinterpret_cast<uint64_t*>((arg0 + 88)) = arg0;
    const uint64_t result1 = RecoveredCall_ad2140_1(arg1,arg2,(arg0 + 80));
    *reinterpret_cast<uint64_t*>((arg0 + 112)) = arg0;
    const uint64_t result2 = RecoveredCall_ad2140_2(arg1,arg2,(arg0 + 104));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 128),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    return result3;
}

extern "C" uint64_t RecoveredCall_ad2750_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_ad2750_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_ad2750_2(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_ad2750(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ad2750(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_ad2750_0(arg0,arg1,arg2);
    *reinterpret_cast<uint64_t*>((arg0 + 88)) = arg0;
    const uint64_t result1 = RecoveredCall_ad2750_1(arg1,arg2,(arg0 + 80));
    *reinterpret_cast<uint64_t*>((arg0 + 112)) = arg0;
    const uint64_t result2 = RecoveredCall_ad2750_2(arg1,arg2,(arg0 + 104));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 128),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    LeafTarget_ad2750((arg0 + 136),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_ad4fd0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_ad4fd0_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_ad4fd0_2(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_ad4fd0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ad4fd0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_ad4fd0_0(arg0,arg1,arg2);
    *reinterpret_cast<uint64_t*>((arg0 + 88)) = arg0;
    const uint64_t result1 = RecoveredCall_ad4fd0_1(arg1,arg2,(arg0 + 80));
    *reinterpret_cast<uint64_t*>((arg0 + 112)) = arg0;
    const uint64_t result2 = RecoveredCall_ad4fd0_2(arg1,arg2,(arg0 + 104));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 128),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    LeafTarget_ad4fd0((arg0 + 136),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_ad64a0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_ad64a0_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_ad64a0_2(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_ad64a0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ad64a0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_ad64a0_0(arg0,arg1,arg2);
    *reinterpret_cast<uint64_t*>((arg0 + 88)) = arg0;
    const uint64_t result1 = RecoveredCall_ad64a0_1(arg1,arg2,(arg0 + 80));
    *reinterpret_cast<uint64_t*>((arg0 + 112)) = arg0;
    const uint64_t result2 = RecoveredCall_ad64a0_2(arg1,arg2,(arg0 + 104));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 128),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    LeafTarget_ad64a0((arg0 + 136),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_ad8190_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_ad8190_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_ad8190_2(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_ad8190_3(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ad8190(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_ad8190_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_ad8190_1((arg0 + 176),arg1,arg2);
    const uint64_t result2 = RecoveredCall_ad8190_2((arg0 + 184),arg1,arg2);
    const uint64_t result3 = RecoveredCall_ad8190_3((arg0 + 192),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 200),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result4)) << 0));
    return result4;
}

extern "C" unsigned char LeafData_ada800_0[];
extern "C" uint64_t RecoveredCall_ada800_0(uint64_t);
extern "C" void LeafTarget_ada800(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ada800(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_ada800_0) - 384) + 384);
    const uint64_t result0 = RecoveredCall_ada800_0((arg0 + 176));
    LeafTarget_ada800(arg0);
}

extern "C" unsigned char LeafData_ada830_0[];
extern "C" uint64_t RecoveredCall_ada830_0(uint64_t);
extern "C" uint64_t RecoveredCall_ada830_1(uint64_t);
extern "C" void LeafTarget_ada830(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ada830(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_ada830_0) - 384) + 384);
    const uint64_t result0 = RecoveredCall_ada830_0((arg0 + 176));
    const uint64_t result1 = RecoveredCall_ada830_1(arg0);
    LeafTarget_ada830(arg0);
}

extern "C" unsigned char LeafData_adaaf0_0[];
extern "C" uint64_t RecoveredCall_adaaf0_0(uint64_t);
extern "C" void LeafTarget_adaaf0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_adaaf0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_adaaf0_0) - 4080) + 4080);
    const uint64_t result0 = RecoveredCall_adaaf0_0((arg0 + 80));
    LeafTarget_adaaf0(arg0);
}

extern "C" unsigned char LeafData_adab20_0[];
extern "C" uint64_t RecoveredCall_adab20_0(uint64_t);
extern "C" uint64_t RecoveredCall_adab20_1(uint64_t);
extern "C" void LeafTarget_adab20(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_adab20(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_adab20_0) - 4080) + 4080);
    const uint64_t result0 = RecoveredCall_adab20_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_adab20_1(arg0);
    LeafTarget_adab20(arg0);
}

extern "C" uint64_t RecoveredCall_ae46d0_0(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_ae46d0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ae46d0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_ae46d0_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 138),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 139),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    LeafTarget_ae46d0((arg0 + 144),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_ae7740_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ae7740(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_ae7740_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 124),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    return result1;
}

extern "C" uint64_t RecoveredCall_ae7d70_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_ae7d70_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_ae7d70_2(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_ae7d70(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ae7d70(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_ae7d70_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_ae7d70_1((arg0 + 80),arg1,arg2);
    const uint64_t result2 = RecoveredCall_ae7d70_2((arg0 + 88),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 96),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    LeafTarget_ae7d70((arg0 + 104),arg1,arg2);
}

extern "C" unsigned char LeafData_af1a50_0[];
extern "C" uint64_t RecoveredCall_af1a50_0(uint64_t);
extern "C" void LeafTarget_af1a50(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_af1a50(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_af1a50_0) - 2936) + 2936);
    const uint64_t result0 = RecoveredCall_af1a50_0((arg0 + 80));
    LeafTarget_af1a50(arg0);
}

extern "C" unsigned char LeafData_af1a80_0[];
extern "C" uint64_t RecoveredCall_af1a80_0(uint64_t);
extern "C" uint64_t RecoveredCall_af1a80_1(uint64_t);
extern "C" void LeafTarget_af1a80(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_af1a80(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_af1a80_0) - 2936) + 2936);
    const uint64_t result0 = RecoveredCall_af1a80_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_af1a80_1(arg0);
    LeafTarget_af1a80(arg0);
}

extern "C" uint64_t RecoveredCall_af1b00_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_af1b00_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_af1b00_2(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_af1b00(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_af1b00(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_af1b00_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_af1b00_1((arg0 + 80),arg1,arg2);
    const uint64_t result2 = RecoveredCall_af1b00_2((arg0 + 88),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 96),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    LeafTarget_af1b00((arg0 + 104),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_af2fe0_0(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_af2fe0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_af2fe0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_af2fe0_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 138),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 139),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    LeafTarget_af2fe0((arg0 + 144),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_af5df0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_af5df0_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_af5df0_2(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_af5df0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_af5df0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_af5df0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_af5df0_1((arg0 + 80),arg1,arg2);
    const uint64_t result2 = RecoveredCall_af5df0_2((arg0 + 88),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 96),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    LeafTarget_af5df0((arg0 + 104),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_af5f60_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_af5f60_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_af5f60_2(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_af5f60(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_af5f60(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_af5f60_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_af5f60_1((arg0 + 80),arg1,arg2);
    const uint64_t result2 = RecoveredCall_af5f60_2((arg0 + 88),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 96),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    LeafTarget_af5f60((arg0 + 104),arg1,arg2);
}

extern "C" unsigned char LeafData_af8c30_0[];
extern "C" uint64_t RecoveredCall_af8c30_0(uint64_t);
extern "C" unsigned char LeafData_af8c30_5[];
extern "C" uint64_t RecoveredCall_af8c30_1(uint64_t);
extern "C" void LeafTarget_af8c30(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_af8c30(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_af8c30_0) - 1704) + 1704);
    const uint64_t result0 = RecoveredCall_af8c30_0((arg0 + 144));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_af8c30_5) - 4080) + 4080);
    const uint64_t result1 = RecoveredCall_af8c30_1((arg0 + 80));
    LeafTarget_af8c30(arg0);
}

extern "C" unsigned char LeafData_af8c70_0[];
extern "C" uint64_t RecoveredCall_af8c70_0(uint64_t);
extern "C" unsigned char LeafData_af8c70_5[];
extern "C" uint64_t RecoveredCall_af8c70_1(uint64_t);
extern "C" uint64_t RecoveredCall_af8c70_2(uint64_t);
extern "C" void LeafTarget_af8c70(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_af8c70(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_af8c70_0) - 1704) + 1704);
    const uint64_t result0 = RecoveredCall_af8c70_0((arg0 + 144));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_af8c70_5) - 4080) + 4080);
    const uint64_t result1 = RecoveredCall_af8c70_1((arg0 + 80));
    const uint64_t result2 = RecoveredCall_af8c70_2(arg0);
    LeafTarget_af8c70(arg0);
}

extern "C" unsigned char LeafData_afe630_0[];
extern "C" uint64_t RecoveredCall_afe630_0(uint64_t);
extern "C" void LeafTarget_afe630(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_afe630(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_afe630_0) - 2520) + 2520);
    const uint64_t result0 = RecoveredCall_afe630_0((arg0 + 80));
    LeafTarget_afe630(arg0);
}

extern "C" unsigned char LeafData_afe660_0[];
extern "C" uint64_t RecoveredCall_afe660_0(uint64_t);
extern "C" uint64_t RecoveredCall_afe660_1(uint64_t);
extern "C" void LeafTarget_afe660(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_afe660(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_afe660_0) - 2520) + 2520);
    const uint64_t result0 = RecoveredCall_afe660_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_afe660_1(arg0);
    LeafTarget_afe660(arg0);
}

extern "C" uint64_t RecoveredCall_b01d30_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_b01d30_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b01d30(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b01d30_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_b01d30_1((arg0 + 144),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 260),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 264),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    return result3;
}

extern "C" uint64_t RecoveredCall_b04b90_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_b04b90_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b04b90(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b04b90_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_b04b90_1((arg0 + 144),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 260),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 264),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 268),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 272),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 276),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 280),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result7)) << 0));
    return result7;
}

extern "C" uint64_t RecoveredCall_b0a9e0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_b0a9e0_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b0a9e0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b0a9e0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_b0a9e0_1((arg0 + 144),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 260),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 264),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 268),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 272),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 276),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 280),uint32_t(1));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result7)) << 0));
    return result7;
}

extern "C" uint64_t RecoveredCall_b10fb0_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b10fb0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b10fb0_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 74),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 75),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 80),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    return result3;
}

extern "C" uint64_t RecoveredCall_b11670_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b11670(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b11670_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 74),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 75),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 80),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 84),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 88),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result5)) << 0));
    return result5;
}

extern "C" uint64_t RecoveredCall_b11990_0(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_b11990(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b11990(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b11990_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 74),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 75),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    LeafTarget_b11990((arg0 + 80),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_b11db0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_b11db0_3(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b11db0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b11db0_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 74),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 75),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t result3 = RecoveredCall_b11db0_3((arg0 + 80),arg1,arg2);
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 128),uint32_t(1));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result4)) << 0));
    return result4;
}

extern "C" uint64_t RecoveredCall_b12df0_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b12df0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b12df0_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 74),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 75),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 80),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 84),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result4)) << 0));
    return result4;
}

extern "C" uint64_t RecoveredCall_b13110_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b13110(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b13110_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 74),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 75),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 80),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 84),uint32_t(1));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 88),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 96),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 0));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field25 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field26)(field24,(arg0 + 100),uint32_t(4));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field27 + (uint32_t(uint32_t(result7)) << 0));
    return result7;
}

extern "C" uint64_t RecoveredCall_b137e0_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b137e0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b137e0_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 74),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 75),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 80),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 84),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 88),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 92),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 0));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field25 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field26)(field24,(arg0 + 96),uint32_t(4));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field27 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 0));
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>((field29 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field30)(field28,(arg0 + 100),uint32_t(4));
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field31 + (uint32_t(uint32_t(result8)) << 0));
    return result8;
}

extern "C" uint64_t RecoveredCall_b13cf0_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b13cf0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b13cf0_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 74),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 75),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    return result2;
}

extern "C" uint64_t RecoveredCall_b14170_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_b14170_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b14170(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b14170_0(arg0,arg1);
    const uint64_t result1 = RecoveredCall_b14170_1((arg0 + 120),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 164),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 168),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 172),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 176),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 180),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 184),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 0));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field25 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field26)(field24,(arg0 + 188),uint32_t(4));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field27 + (uint32_t(uint32_t(result8)) << 0));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 0));
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>((field29 + 48));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field30)(field28,(arg0 + 192),uint32_t(4));
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field32 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field31 + (uint32_t(uint32_t(result9)) << 0));
    const uint64_t field33 = *reinterpret_cast<const uint64_t*>((field32 + 0));
    const uint64_t field34 = *reinterpret_cast<const uint64_t*>((field33 + 48));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field34)(field32,(arg0 + 196),uint32_t(4));
    const uint64_t field35 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field36 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field35 + (uint32_t(uint32_t(result10)) << 0));
    const uint64_t field37 = *reinterpret_cast<const uint64_t*>((field36 + 0));
    const uint64_t field38 = *reinterpret_cast<const uint64_t*>((field37 + 48));
    const uint64_t result11 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field38)(field36,(arg0 + 200),uint32_t(4));
    const uint64_t field39 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field40 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field39 + (uint32_t(uint32_t(result11)) << 0));
    const uint64_t field41 = *reinterpret_cast<const uint64_t*>((field40 + 0));
    const uint64_t field42 = *reinterpret_cast<const uint64_t*>((field41 + 48));
    const uint64_t result12 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field42)(field40,(arg0 + 204),uint32_t(4));
    const uint64_t field43 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field44 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field43 + (uint32_t(uint32_t(result12)) << 0));
    const uint64_t field45 = *reinterpret_cast<const uint64_t*>((field44 + 0));
    const uint64_t field46 = *reinterpret_cast<const uint64_t*>((field45 + 48));
    const uint64_t result13 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field46)(field44,(arg0 + 208),uint32_t(4));
    const uint64_t field47 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field48 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field47 + (uint32_t(uint32_t(result13)) << 0));
    const uint64_t field49 = *reinterpret_cast<const uint64_t*>((field48 + 0));
    const uint64_t field50 = *reinterpret_cast<const uint64_t*>((field49 + 48));
    const uint64_t result14 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field50)(field48,(arg0 + 212),uint32_t(4));
    const uint64_t field51 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field52 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field51 + (uint32_t(uint32_t(result14)) << 0));
    const uint64_t field53 = *reinterpret_cast<const uint64_t*>((field52 + 0));
    const uint64_t field54 = *reinterpret_cast<const uint64_t*>((field53 + 48));
    const uint64_t result15 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field54)(field52,(arg0 + 216),uint32_t(4));
    const uint64_t field55 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field56 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field55 + (uint32_t(uint32_t(result15)) << 0));
    const uint64_t field57 = *reinterpret_cast<const uint64_t*>((field56 + 0));
    const uint64_t field58 = *reinterpret_cast<const uint64_t*>((field57 + 48));
    const uint64_t result16 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field58)(field56,(arg0 + 220),uint32_t(4));
    const uint64_t field59 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field59 + (uint32_t(uint32_t(result16)) << 0));
    return result16;
}

extern "C" uint64_t RecoveredCall_b1d2b0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_b1d2b0_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b1d2b0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b1d2b0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_b1d2b0_1((arg0 + 80),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 124),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    return result2;
}

extern "C" uint64_t RecoveredCall_b20810_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b20810(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b20810_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 76),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 80),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 89),uint32_t(1));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 90),uint32_t(1));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result4)) << 0));
    return result4;
}

extern "C" uint64_t RecoveredCall_b20b40_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b20b40(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b20b40_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 76),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 80),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 92),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 96),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 100),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 104),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 0));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field25 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field26)(field24,(arg0 + 108),uint32_t(4));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field27 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 0));
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>((field29 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field30)(field28,(arg0 + 112),uint32_t(4));
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field32 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field31 + (uint32_t(uint32_t(result8)) << 0));
    const uint64_t field33 = *reinterpret_cast<const uint64_t*>((field32 + 0));
    const uint64_t field34 = *reinterpret_cast<const uint64_t*>((field33 + 48));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field34)(field32,(arg0 + 116),uint32_t(4));
    const uint64_t field35 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field36 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field35 + (uint32_t(uint32_t(result9)) << 0));
    const uint64_t field37 = *reinterpret_cast<const uint64_t*>((field36 + 0));
    const uint64_t field38 = *reinterpret_cast<const uint64_t*>((field37 + 48));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field38)(field36,(arg0 + 120),uint32_t(4));
    const uint64_t field39 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field40 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field39 + (uint32_t(uint32_t(result10)) << 0));
    const uint64_t field41 = *reinterpret_cast<const uint64_t*>((field40 + 0));
    const uint64_t field42 = *reinterpret_cast<const uint64_t*>((field41 + 48));
    const uint64_t result11 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field42)(field40,(arg0 + 124),uint32_t(4));
    const uint64_t field43 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field44 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field43 + (uint32_t(uint32_t(result11)) << 0));
    const uint64_t field45 = *reinterpret_cast<const uint64_t*>((field44 + 0));
    const uint64_t field46 = *reinterpret_cast<const uint64_t*>((field45 + 48));
    const uint64_t result12 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field46)(field44,(arg0 + 128),uint32_t(1));
    const uint64_t field47 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field47 + (uint32_t(uint32_t(result12)) << 0));
    return result12;
}

extern "C" uint64_t RecoveredCall_b224f0_0(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_b224f0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b224f0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b224f0_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 76),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 80),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    LeafTarget_b224f0((arg0 + 88),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_b237c0_0(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_b237c0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b237c0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b237c0_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 76),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 80),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    LeafTarget_b237c0((arg0 + 88),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_b24470_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b24470(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b24470_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 76),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 80),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 92),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 96),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 100),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 104),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 0));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field25 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field26)(field24,(arg0 + 108),uint32_t(4));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field27 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 0));
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>((field29 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field30)(field28,(arg0 + 112),uint32_t(4));
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field32 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field31 + (uint32_t(uint32_t(result8)) << 0));
    const uint64_t field33 = *reinterpret_cast<const uint64_t*>((field32 + 0));
    const uint64_t field34 = *reinterpret_cast<const uint64_t*>((field33 + 48));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field34)(field32,(arg0 + 116),uint32_t(4));
    const uint64_t field35 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field36 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field35 + (uint32_t(uint32_t(result9)) << 0));
    const uint64_t field37 = *reinterpret_cast<const uint64_t*>((field36 + 0));
    const uint64_t field38 = *reinterpret_cast<const uint64_t*>((field37 + 48));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field38)(field36,(arg0 + 120),uint32_t(4));
    const uint64_t field39 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field40 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field39 + (uint32_t(uint32_t(result10)) << 0));
    const uint64_t field41 = *reinterpret_cast<const uint64_t*>((field40 + 0));
    const uint64_t field42 = *reinterpret_cast<const uint64_t*>((field41 + 48));
    const uint64_t result11 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field42)(field40,(arg0 + 124),uint32_t(4));
    const uint64_t field43 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field44 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field43 + (uint32_t(uint32_t(result11)) << 0));
    const uint64_t field45 = *reinterpret_cast<const uint64_t*>((field44 + 0));
    const uint64_t field46 = *reinterpret_cast<const uint64_t*>((field45 + 48));
    const uint64_t result12 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field46)(field44,(arg0 + 128),uint32_t(4));
    const uint64_t field47 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field48 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field47 + (uint32_t(uint32_t(result12)) << 0));
    const uint64_t field49 = *reinterpret_cast<const uint64_t*>((field48 + 0));
    const uint64_t field50 = *reinterpret_cast<const uint64_t*>((field49 + 48));
    const uint64_t result13 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field50)(field48,(arg0 + 132),uint32_t(4));
    const uint64_t field51 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field52 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field51 + (uint32_t(uint32_t(result13)) << 0));
    const uint64_t field53 = *reinterpret_cast<const uint64_t*>((field52 + 0));
    const uint64_t field54 = *reinterpret_cast<const uint64_t*>((field53 + 48));
    const uint64_t result14 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field54)(field52,(arg0 + 136),uint32_t(4));
    const uint64_t field55 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field56 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field55 + (uint32_t(uint32_t(result14)) << 0));
    const uint64_t field57 = *reinterpret_cast<const uint64_t*>((field56 + 0));
    const uint64_t field58 = *reinterpret_cast<const uint64_t*>((field57 + 48));
    const uint64_t result15 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field58)(field56,(arg0 + 140),uint32_t(1));
    const uint64_t field59 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field60 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field59 + (uint32_t(uint32_t(result15)) << 0));
    const uint64_t field61 = *reinterpret_cast<const uint64_t*>((field60 + 0));
    const uint64_t field62 = *reinterpret_cast<const uint64_t*>((field61 + 48));
    const uint64_t result16 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field62)(field60,(arg0 + 141),uint32_t(1));
    const uint64_t field63 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field64 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field63 + (uint32_t(uint32_t(result16)) << 0));
    const uint64_t field65 = *reinterpret_cast<const uint64_t*>((field64 + 0));
    const uint64_t field66 = *reinterpret_cast<const uint64_t*>((field65 + 48));
    const uint64_t result17 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field66)(field64,(arg0 + 144),uint32_t(4));
    const uint64_t field67 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field68 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field67 + (uint32_t(uint32_t(result17)) << 0));
    const uint64_t field69 = *reinterpret_cast<const uint64_t*>((field68 + 0));
    const uint64_t field70 = *reinterpret_cast<const uint64_t*>((field69 + 48));
    const uint64_t result18 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field70)(field68,(arg0 + 148),uint32_t(4));
    const uint64_t field71 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field72 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field71 + (uint32_t(uint32_t(result18)) << 0));
    const uint64_t field73 = *reinterpret_cast<const uint64_t*>((field72 + 0));
    const uint64_t field74 = *reinterpret_cast<const uint64_t*>((field73 + 48));
    const uint64_t result19 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field74)(field72,(arg0 + 152),uint32_t(4));
    const uint64_t field75 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field76 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field75 + (uint32_t(uint32_t(result19)) << 0));
    const uint64_t field77 = *reinterpret_cast<const uint64_t*>((field76 + 0));
    const uint64_t field78 = *reinterpret_cast<const uint64_t*>((field77 + 48));
    const uint64_t result20 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field78)(field76,(arg0 + 156),uint32_t(4));
    const uint64_t field79 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field79 + (uint32_t(uint32_t(result20)) << 0));
    return result20;
}

extern "C" uint64_t RecoveredCall_b25740_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b25740(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b25740_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 76),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 80),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 92),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 96),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 100),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 104),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 0));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field25 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field26)(field24,(arg0 + 108),uint32_t(4));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field27 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 0));
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>((field29 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field30)(field28,(arg0 + 112),uint32_t(4));
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field32 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field31 + (uint32_t(uint32_t(result8)) << 0));
    const uint64_t field33 = *reinterpret_cast<const uint64_t*>((field32 + 0));
    const uint64_t field34 = *reinterpret_cast<const uint64_t*>((field33 + 48));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field34)(field32,(arg0 + 116),uint32_t(4));
    const uint64_t field35 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field36 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field35 + (uint32_t(uint32_t(result9)) << 0));
    const uint64_t field37 = *reinterpret_cast<const uint64_t*>((field36 + 0));
    const uint64_t field38 = *reinterpret_cast<const uint64_t*>((field37 + 48));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field38)(field36,(arg0 + 120),uint32_t(4));
    const uint64_t field39 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field40 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field39 + (uint32_t(uint32_t(result10)) << 0));
    const uint64_t field41 = *reinterpret_cast<const uint64_t*>((field40 + 0));
    const uint64_t field42 = *reinterpret_cast<const uint64_t*>((field41 + 48));
    const uint64_t result11 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field42)(field40,(arg0 + 124),uint32_t(4));
    const uint64_t field43 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field44 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field43 + (uint32_t(uint32_t(result11)) << 0));
    const uint64_t field45 = *reinterpret_cast<const uint64_t*>((field44 + 0));
    const uint64_t field46 = *reinterpret_cast<const uint64_t*>((field45 + 48));
    const uint64_t result12 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field46)(field44,(arg0 + 128),uint32_t(1));
    const uint64_t field47 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field47 + (uint32_t(uint32_t(result12)) << 0));
    return result12;
}

extern "C" uint64_t RecoveredCall_b270f0_0(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_b270f0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b270f0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b270f0_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 76),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 80),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    LeafTarget_b270f0((arg0 + 88),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_b271f0_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b271f0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b271f0_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 76),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 80),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 92),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 96),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 100),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 104),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 0));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field25 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field26)(field24,(arg0 + 108),uint32_t(4));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field27 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 0));
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>((field29 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field30)(field28,(arg0 + 112),uint32_t(4));
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field32 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field31 + (uint32_t(uint32_t(result8)) << 0));
    const uint64_t field33 = *reinterpret_cast<const uint64_t*>((field32 + 0));
    const uint64_t field34 = *reinterpret_cast<const uint64_t*>((field33 + 48));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field34)(field32,(arg0 + 116),uint32_t(4));
    const uint64_t field35 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field36 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field35 + (uint32_t(uint32_t(result9)) << 0));
    const uint64_t field37 = *reinterpret_cast<const uint64_t*>((field36 + 0));
    const uint64_t field38 = *reinterpret_cast<const uint64_t*>((field37 + 48));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field38)(field36,(arg0 + 120),uint32_t(4));
    const uint64_t field39 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field40 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field39 + (uint32_t(uint32_t(result10)) << 0));
    const uint64_t field41 = *reinterpret_cast<const uint64_t*>((field40 + 0));
    const uint64_t field42 = *reinterpret_cast<const uint64_t*>((field41 + 48));
    const uint64_t result11 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field42)(field40,(arg0 + 124),uint32_t(4));
    const uint64_t field43 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field44 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field43 + (uint32_t(uint32_t(result11)) << 0));
    const uint64_t field45 = *reinterpret_cast<const uint64_t*>((field44 + 0));
    const uint64_t field46 = *reinterpret_cast<const uint64_t*>((field45 + 48));
    const uint64_t result12 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field46)(field44,(arg0 + 128),uint32_t(1));
    const uint64_t field47 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field48 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field47 + (uint32_t(uint32_t(result12)) << 0));
    const uint64_t field49 = *reinterpret_cast<const uint64_t*>((field48 + 0));
    const uint64_t field50 = *reinterpret_cast<const uint64_t*>((field49 + 48));
    const uint64_t result13 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field50)(field48,(arg0 + 132),uint32_t(4));
    const uint64_t field51 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field52 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field51 + (uint32_t(uint32_t(result13)) << 0));
    const uint64_t field53 = *reinterpret_cast<const uint64_t*>((field52 + 0));
    const uint64_t field54 = *reinterpret_cast<const uint64_t*>((field53 + 48));
    const uint64_t result14 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field54)(field52,(arg0 + 136),uint32_t(4));
    const uint64_t field55 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field56 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field55 + (uint32_t(uint32_t(result14)) << 0));
    const uint64_t field57 = *reinterpret_cast<const uint64_t*>((field56 + 0));
    const uint64_t field58 = *reinterpret_cast<const uint64_t*>((field57 + 48));
    const uint64_t result15 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field58)(field56,(arg0 + 140),uint32_t(4));
    const uint64_t field59 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field60 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field59 + (uint32_t(uint32_t(result15)) << 0));
    const uint64_t field61 = *reinterpret_cast<const uint64_t*>((field60 + 0));
    const uint64_t field62 = *reinterpret_cast<const uint64_t*>((field61 + 48));
    const uint64_t result16 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field62)(field60,(arg0 + 144),uint32_t(4));
    const uint64_t field63 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field64 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field63 + (uint32_t(uint32_t(result16)) << 0));
    const uint64_t field65 = *reinterpret_cast<const uint64_t*>((field64 + 0));
    const uint64_t field66 = *reinterpret_cast<const uint64_t*>((field65 + 48));
    const uint64_t result17 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field66)(field64,(arg0 + 148),uint32_t(4));
    const uint64_t field67 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field68 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field67 + (uint32_t(uint32_t(result17)) << 0));
    const uint64_t field69 = *reinterpret_cast<const uint64_t*>((field68 + 0));
    const uint64_t field70 = *reinterpret_cast<const uint64_t*>((field69 + 48));
    const uint64_t result18 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field70)(field68,(arg0 + 152),uint32_t(4));
    const uint64_t field71 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field71 + (uint32_t(uint32_t(result18)) << 0));
    return result18;
}

extern "C" uint64_t RecoveredCall_b29180_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b29180(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b29180_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 76),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 80),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    return result2;
}

extern "C" uint64_t RecoveredCall_b2aaa0_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b2aaa0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b2aaa0_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 76),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 80),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    return result2;
}

extern "C" uint64_t RecoveredCall_b2ab40_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b2ab40(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b2ab40_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 76),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 80),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 89),uint32_t(1));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 90),uint32_t(1));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 91),uint32_t(1));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 92),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 0));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field25 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field26)(field24,(arg0 + 96),uint32_t(4));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field27 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 0));
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>((field29 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field30)(field28,(arg0 + 100),uint32_t(4));
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field32 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field31 + (uint32_t(uint32_t(result8)) << 0));
    const uint64_t field33 = *reinterpret_cast<const uint64_t*>((field32 + 0));
    const uint64_t field34 = *reinterpret_cast<const uint64_t*>((field33 + 48));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field34)(field32,(arg0 + 104),uint32_t(4));
    const uint64_t field35 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field36 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field35 + (uint32_t(uint32_t(result9)) << 0));
    const uint64_t field37 = *reinterpret_cast<const uint64_t*>((field36 + 0));
    const uint64_t field38 = *reinterpret_cast<const uint64_t*>((field37 + 48));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field38)(field36,(arg0 + 108),uint32_t(4));
    const uint64_t field39 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field40 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field39 + (uint32_t(uint32_t(result10)) << 0));
    const uint64_t field41 = *reinterpret_cast<const uint64_t*>((field40 + 0));
    const uint64_t field42 = *reinterpret_cast<const uint64_t*>((field41 + 48));
    const uint64_t result11 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field42)(field40,(arg0 + 112),uint32_t(4));
    const uint64_t field43 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field44 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field43 + (uint32_t(uint32_t(result11)) << 0));
    const uint64_t field45 = *reinterpret_cast<const uint64_t*>((field44 + 0));
    const uint64_t field46 = *reinterpret_cast<const uint64_t*>((field45 + 48));
    const uint64_t result12 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field46)(field44,(arg0 + 116),uint32_t(4));
    const uint64_t field47 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field47 + (uint32_t(uint32_t(result12)) << 0));
    return result12;
}

extern "C" uint64_t RecoveredCall_b2f140_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_b2f140_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_b2f140_2(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_b2f140_3(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b2f140(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b2f140_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_b2f140_1((arg0 + 144),arg1,arg2);
    const uint64_t result2 = RecoveredCall_b2f140_2((arg0 + 256),arg1,arg2);
    const uint64_t result3 = RecoveredCall_b2f140_3((arg0 + 264),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 272),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result4)) << 0));
    return result4;
}

extern "C" unsigned char LeafData_b30be0_0[];
extern "C" uint64_t RecoveredCall_b30be0_0(uint64_t);
extern "C" unsigned char LeafData_b30be0_5[];
extern "C" uint64_t RecoveredCall_b30be0_1(uint64_t);
extern "C" void LeafTarget_b30be0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b30be0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b30be0_0) - 1632) + 1632);
    const uint64_t result0 = RecoveredCall_b30be0_0((arg0 + 144));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b30be0_5) - 4080) + 4080);
    const uint64_t result1 = RecoveredCall_b30be0_1((arg0 + 80));
    LeafTarget_b30be0(arg0);
}

extern "C" unsigned char LeafData_b30c20_0[];
extern "C" uint64_t RecoveredCall_b30c20_0(uint64_t);
extern "C" unsigned char LeafData_b30c20_5[];
extern "C" uint64_t RecoveredCall_b30c20_1(uint64_t);
extern "C" uint64_t RecoveredCall_b30c20_2(uint64_t);
extern "C" void LeafTarget_b30c20(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b30c20(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b30c20_0) - 1632) + 1632);
    const uint64_t result0 = RecoveredCall_b30c20_0((arg0 + 144));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b30c20_5) - 4080) + 4080);
    const uint64_t result1 = RecoveredCall_b30c20_1((arg0 + 80));
    const uint64_t result2 = RecoveredCall_b30c20_2(arg0);
    LeafTarget_b30c20(arg0);
}

extern "C" unsigned char LeafData_b34ca0_0[];
extern "C" uint64_t RecoveredCall_b34ca0_0(uint64_t);
extern "C" unsigned char LeafData_b34ca0_5[];
extern "C" uint64_t RecoveredCall_b34ca0_1(uint64_t);
extern "C" uint64_t RecoveredCall_b34ca0_2(uint64_t);
extern "C" void LeafTarget_b34ca0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b34ca0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b34ca0_0) - 1632) + 1632);
    const uint64_t result0 = RecoveredCall_b34ca0_0((arg0 + 144));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b34ca0_5) - 4080) + 4080);
    const uint64_t result1 = RecoveredCall_b34ca0_1((arg0 + 80));
    const uint64_t result2 = RecoveredCall_b34ca0_2(arg0);
    LeafTarget_b34ca0(arg0);
}

extern "C" unsigned char LeafData_b34d60_0[];
extern "C" uint64_t RecoveredCall_b34d60_0(uint64_t);
extern "C" unsigned char LeafData_b34d60_5[];
extern "C" uint64_t RecoveredCall_b34d60_1(uint64_t);
extern "C" void LeafTarget_b34d60(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b34d60(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b34d60_0) - 2584) + 2584);
    const uint64_t result0 = RecoveredCall_b34d60_0((arg0 + 144));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b34d60_5) - 4080) + 4080);
    const uint64_t result1 = RecoveredCall_b34d60_1((arg0 + 80));
    LeafTarget_b34d60(arg0);
}

extern "C" unsigned char LeafData_b34da0_0[];
extern "C" uint64_t RecoveredCall_b34da0_0(uint64_t);
extern "C" unsigned char LeafData_b34da0_5[];
extern "C" uint64_t RecoveredCall_b34da0_1(uint64_t);
extern "C" uint64_t RecoveredCall_b34da0_2(uint64_t);
extern "C" void LeafTarget_b34da0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b34da0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b34da0_0) - 2584) + 2584);
    const uint64_t result0 = RecoveredCall_b34da0_0((arg0 + 144));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b34da0_5) - 4080) + 4080);
    const uint64_t result1 = RecoveredCall_b34da0_1((arg0 + 80));
    const uint64_t result2 = RecoveredCall_b34da0_2(arg0);
    LeafTarget_b34da0(arg0);
}

extern "C" unsigned char LeafData_b38f40_0[];
extern "C" uint64_t RecoveredCall_b38f40_0(uint64_t);
extern "C" unsigned char LeafData_b38f40_5[];
extern "C" uint64_t RecoveredCall_b38f40_1(uint64_t);
extern "C" uint64_t RecoveredCall_b38f40_2(uint64_t);
extern "C" void LeafTarget_b38f40(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b38f40(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b38f40_0) - 2584) + 2584);
    const uint64_t result0 = RecoveredCall_b38f40_0((arg0 + 144));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b38f40_5) - 4080) + 4080);
    const uint64_t result1 = RecoveredCall_b38f40_1((arg0 + 80));
    const uint64_t result2 = RecoveredCall_b38f40_2(arg0);
    LeafTarget_b38f40(arg0);
}

extern "C" unsigned char LeafData_b38f80_0[];
extern "C" uint64_t RecoveredCall_b38f80_0(uint64_t);
extern "C" unsigned char LeafData_b38f80_5[];
extern "C" uint64_t RecoveredCall_b38f80_1(uint64_t);
extern "C" void LeafTarget_b38f80(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b38f80(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b38f80_0) - 3120) + 3120);
    const uint64_t result0 = RecoveredCall_b38f80_0((arg0 + 144));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b38f80_5) - 4080) + 4080);
    const uint64_t result1 = RecoveredCall_b38f80_1((arg0 + 80));
    LeafTarget_b38f80(arg0);
}

extern "C" unsigned char LeafData_b38fc0_0[];
extern "C" uint64_t RecoveredCall_b38fc0_0(uint64_t);
extern "C" unsigned char LeafData_b38fc0_5[];
extern "C" uint64_t RecoveredCall_b38fc0_1(uint64_t);
extern "C" uint64_t RecoveredCall_b38fc0_2(uint64_t);
extern "C" void LeafTarget_b38fc0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b38fc0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b38fc0_0) - 3120) + 3120);
    const uint64_t result0 = RecoveredCall_b38fc0_0((arg0 + 144));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b38fc0_5) - 4080) + 4080);
    const uint64_t result1 = RecoveredCall_b38fc0_1((arg0 + 80));
    const uint64_t result2 = RecoveredCall_b38fc0_2(arg0);
    LeafTarget_b38fc0(arg0);
}

extern "C" unsigned char LeafData_b3bb50_0[];
extern "C" uint64_t RecoveredCall_b3bb50_0(uint64_t);
extern "C" unsigned char LeafData_b3bb50_5[];
extern "C" uint64_t RecoveredCall_b3bb50_1(uint64_t);
extern "C" uint64_t RecoveredCall_b3bb50_2(uint64_t);
extern "C" void LeafTarget_b3bb50(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b3bb50(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b3bb50_0) - 3120) + 3120);
    const uint64_t result0 = RecoveredCall_b3bb50_0((arg0 + 144));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b3bb50_5) - 4080) + 4080);
    const uint64_t result1 = RecoveredCall_b3bb50_1((arg0 + 80));
    const uint64_t result2 = RecoveredCall_b3bb50_2(arg0);
    LeafTarget_b3bb50(arg0);
}

extern "C" unsigned char LeafData_b3bb90_0[];
extern "C" uint64_t RecoveredCall_b3bb90_0(uint64_t);
extern "C" uint64_t RecoveredCall_b3bb90_1(uint64_t);
extern "C" void LeafTarget_b3bb90(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b3bb90(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b3bb90_0) - 4080) + 4080);
    const uint64_t result0 = RecoveredCall_b3bb90_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_b3bb90_1(arg0);
    LeafTarget_b3bb90(arg0);
}

extern "C" unsigned char LeafData_b42600_0[];
extern "C" uint64_t RecoveredCall_b42600_0(uint64_t);
extern "C" unsigned char LeafData_b42600_5[];
extern "C" uint64_t RecoveredCall_b42600_1(uint64_t);
extern "C" void LeafTarget_b42600(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b42600(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b42600_0) - 840) + 840);
    const uint64_t result0 = RecoveredCall_b42600_0((arg0 + 128));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b42600_5) - 720) + 720);
    const uint64_t result1 = RecoveredCall_b42600_1((arg0 + 80));
    LeafTarget_b42600(arg0);
}

extern "C" unsigned char LeafData_b42640_0[];
extern "C" uint64_t RecoveredCall_b42640_0(uint64_t);
extern "C" unsigned char LeafData_b42640_5[];
extern "C" uint64_t RecoveredCall_b42640_1(uint64_t);
extern "C" uint64_t RecoveredCall_b42640_2(uint64_t);
extern "C" void LeafTarget_b42640(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b42640(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b42640_0) - 840) + 840);
    const uint64_t result0 = RecoveredCall_b42640_0((arg0 + 128));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b42640_5) - 720) + 720);
    const uint64_t result1 = RecoveredCall_b42640_1((arg0 + 80));
    const uint64_t result2 = RecoveredCall_b42640_2(arg0);
    LeafTarget_b42640(arg0);
}

extern "C" unsigned char LeafData_b426e0_0[];
extern "C" uint64_t RecoveredCall_b426e0_0(uint64_t);
extern "C" void LeafTarget_b426e0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b426e0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b426e0_0) - 720) + 720);
    const uint64_t result0 = RecoveredCall_b426e0_0((arg0 + 80));
    LeafTarget_b426e0(arg0);
}

extern "C" unsigned char LeafData_b42710_0[];
extern "C" uint64_t RecoveredCall_b42710_0(uint64_t);
extern "C" uint64_t RecoveredCall_b42710_1(uint64_t);
extern "C" void LeafTarget_b42710(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b42710(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b42710_0) - 720) + 720);
    const uint64_t result0 = RecoveredCall_b42710_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_b42710_1(arg0);
    LeafTarget_b42710(arg0);
}

extern "C" uint64_t RecoveredCall_b472a0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_b472a0_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b472a0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b472a0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_b472a0_1((arg0 + 80),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 88),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 92),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    return result3;
}

extern "C" unsigned char LeafData_b478b0_0[];
extern "C" uint64_t RecoveredCall_b478b0_0(uint64_t);
extern "C" unsigned char LeafData_b478b0_5[];
extern "C" uint64_t RecoveredCall_b478b0_1(uint64_t);
extern "C" void LeafTarget_b478b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b478b0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b478b0_0) - 680) + 680);
    const uint64_t result0 = RecoveredCall_b478b0_0((arg0 + 144));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b478b0_5) - 4080) + 4080);
    const uint64_t result1 = RecoveredCall_b478b0_1((arg0 + 80));
    LeafTarget_b478b0(arg0);
}

extern "C" unsigned char LeafData_b478f0_0[];
extern "C" uint64_t RecoveredCall_b478f0_0(uint64_t);
extern "C" unsigned char LeafData_b478f0_5[];
extern "C" uint64_t RecoveredCall_b478f0_1(uint64_t);
extern "C" uint64_t RecoveredCall_b478f0_2(uint64_t);
extern "C" void LeafTarget_b478f0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b478f0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b478f0_0) - 680) + 680);
    const uint64_t result0 = RecoveredCall_b478f0_0((arg0 + 144));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b478f0_5) - 4080) + 4080);
    const uint64_t result1 = RecoveredCall_b478f0_1((arg0 + 80));
    const uint64_t result2 = RecoveredCall_b478f0_2(arg0);
    LeafTarget_b478f0(arg0);
}

extern "C" unsigned char LeafData_b4d8d0_0[];
extern "C" uint64_t RecoveredCall_b4d8d0_0(uint64_t);
extern "C" void LeafTarget_b4d8d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b4d8d0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b4d8d0_0) - 2104) + 2104);
    const uint64_t result0 = RecoveredCall_b4d8d0_0((arg0 + 80));
    LeafTarget_b4d8d0(arg0);
}

extern "C" unsigned char LeafData_b4d900_0[];
extern "C" uint64_t RecoveredCall_b4d900_0(uint64_t);
extern "C" uint64_t RecoveredCall_b4d900_1(uint64_t);
extern "C" void LeafTarget_b4d900(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b4d900(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b4d900_0) - 2104) + 2104);
    const uint64_t result0 = RecoveredCall_b4d900_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_b4d900_1(arg0);
    LeafTarget_b4d900(arg0);
}

extern "C" uint64_t RecoveredCall_b51ed0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_b51ed0_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b51ed0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b51ed0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_b51ed0_1((arg0 + 80),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 120),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 124),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 128),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 132),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 136),uint32_t(1));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result6)) << 0));
    return result6;
}

extern "C" uint64_t RecoveredCall_b54590_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_b54590_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b54590(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b54590_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_b54590_1((arg0 + 80),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 88),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 92),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 96),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 100),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 104),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 108),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result7)) << 0));
    return result7;
}

extern "C" unsigned char LeafData_b572f0_0[];
extern "C" uint64_t RecoveredCall_b572f0_0(uint64_t);
extern "C" void LeafTarget_b572f0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b572f0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b572f0_0) - 1728) + 1728);
    const uint64_t result0 = RecoveredCall_b572f0_0((arg0 + 80));
    LeafTarget_b572f0(arg0);
}

extern "C" unsigned char LeafData_b57320_0[];
extern "C" uint64_t RecoveredCall_b57320_0(uint64_t);
extern "C" uint64_t RecoveredCall_b57320_1(uint64_t);
extern "C" void LeafTarget_b57320(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b57320(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b57320_0) - 1728) + 1728);
    const uint64_t result0 = RecoveredCall_b57320_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_b57320_1(arg0);
    LeafTarget_b57320(arg0);
}

extern "C" uint64_t RecoveredCall_b581b0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_b581b0_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_b581b0_2(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_b581b0_3(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_b581b0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b581b0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b581b0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_b581b0_1((arg0 + 104),arg1,arg2);
    const uint64_t result2 = RecoveredCall_b581b0_2((arg0 + 112),arg1,arg2);
    *reinterpret_cast<uint64_t*>((arg0 + 176)) = arg0;
    const uint64_t result3 = RecoveredCall_b581b0_3(arg1,arg2,(arg0 + 168));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 192),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result4)) << 0));
    LeafTarget_b581b0((arg0 + 200),arg1,arg2);
}

extern "C" unsigned char LeafData_b5ee30_0[];
extern "C" uint64_t RecoveredCall_b5ee30_0(uint64_t);
extern "C" void LeafTarget_b5ee30(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b5ee30(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b5ee30_0) - 2784) + 2784);
    const uint64_t result0 = RecoveredCall_b5ee30_0((arg0 + 104));
    LeafTarget_b5ee30(arg0);
}

extern "C" uint64_t RecoveredCall_b5ef50_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_b5ef50_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_b5ef50_2(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_b5ef50_3(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b5ef50(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b5ef50_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_b5ef50_1((arg0 + 104),arg1,arg2);
    const uint64_t result2 = RecoveredCall_b5ef50_2((arg0 + 112),arg1,arg2);
    *reinterpret_cast<uint64_t*>((arg0 + 176)) = arg0;
    const uint64_t result3 = RecoveredCall_b5ef50_3(arg1,arg2,(arg0 + 168));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 192),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result4)) << 0));
    return result4;
}

extern "C" uint64_t RecoveredCall_b5f040_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_b5f040_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_b5f040_2(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_b5f040_3(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_b5f040(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b5f040(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b5f040_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_b5f040_1((arg0 + 104),arg1,arg2);
    const uint64_t result2 = RecoveredCall_b5f040_2((arg0 + 112),arg1,arg2);
    *reinterpret_cast<uint64_t*>((arg0 + 176)) = arg0;
    const uint64_t result3 = RecoveredCall_b5f040_3(arg1,arg2,(arg0 + 168));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 192),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result4)) << 0));
    LeafTarget_b5f040((arg0 + 200),arg1,arg2);
}

extern "C" unsigned char LeafData_b61070_0[];
extern "C" uint64_t RecoveredCall_b61070_0(uint64_t);
extern "C" void LeafTarget_b61070(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b61070(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b61070_0) - 1088) + 1088);
    const uint64_t result0 = RecoveredCall_b61070_0((arg0 + 88));
    LeafTarget_b61070(arg0);
}

extern "C" unsigned char LeafData_b610a0_0[];
extern "C" uint64_t RecoveredCall_b610a0_0(uint64_t);
extern "C" uint64_t RecoveredCall_b610a0_1(uint64_t);
extern "C" void LeafTarget_b610a0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b610a0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b610a0_0) - 1088) + 1088);
    const uint64_t result0 = RecoveredCall_b610a0_0((arg0 + 88));
    const uint64_t result1 = RecoveredCall_b610a0_1(arg0);
    LeafTarget_b610a0(arg0);
}

extern "C" unsigned char LeafData_b61de0_0[];
extern "C" uint64_t RecoveredCall_b61de0_0(uint64_t);
extern "C" void LeafTarget_b61de0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b61de0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b61de0_0) - 1928) + 1928);
    const uint64_t result0 = RecoveredCall_b61de0_0((arg0 + 80));
    LeafTarget_b61de0(arg0);
}

extern "C" unsigned char LeafData_b61e10_0[];
extern "C" uint64_t RecoveredCall_b61e10_0(uint64_t);
extern "C" uint64_t RecoveredCall_b61e10_1(uint64_t);
extern "C" void LeafTarget_b61e10(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b61e10(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b61e10_0) - 1928) + 1928);
    const uint64_t result0 = RecoveredCall_b61e10_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_b61e10_1(arg0);
    LeafTarget_b61e10(arg0);
}

extern "C" unsigned char LeafData_b65330_0[];
extern "C" uint64_t RecoveredCall_b65330_0(uint64_t);
extern "C" void LeafTarget_b65330(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b65330(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b65330_0) - 3472) + 3472);
    const uint64_t result0 = RecoveredCall_b65330_0((arg0 + 80));
    LeafTarget_b65330(arg0);
}

extern "C" unsigned char LeafData_b65360_0[];
extern "C" uint64_t RecoveredCall_b65360_0(uint64_t);
extern "C" uint64_t RecoveredCall_b65360_1(uint64_t);
extern "C" void LeafTarget_b65360(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b65360(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b65360_0) - 3472) + 3472);
    const uint64_t result0 = RecoveredCall_b65360_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_b65360_1(arg0);
    LeafTarget_b65360(arg0);
}

extern "C" unsigned char LeafData_b6fc90_0[];
extern "C" uint64_t RecoveredCall_b6fc90_0(uint64_t);
extern "C" void LeafTarget_b6fc90(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b6fc90(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b6fc90_0) - 3240) + 3240);
    const uint64_t result0 = RecoveredCall_b6fc90_0((arg0 + 80));
    LeafTarget_b6fc90(arg0);
}

extern "C" unsigned char LeafData_b6fcc0_0[];
extern "C" uint64_t RecoveredCall_b6fcc0_0(uint64_t);
extern "C" uint64_t RecoveredCall_b6fcc0_1(uint64_t);
extern "C" void LeafTarget_b6fcc0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b6fcc0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b6fcc0_0) - 3240) + 3240);
    const uint64_t result0 = RecoveredCall_b6fcc0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_b6fcc0_1(arg0);
    LeafTarget_b6fcc0(arg0);
}

extern "C" unsigned char LeafData_b891c0_0[];
extern "C" uint64_t RecoveredCall_b891c0_0(uint64_t);
extern "C" void LeafTarget_b891c0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b891c0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b891c0_0) - 24) + 24);
    const uint64_t result0 = RecoveredCall_b891c0_0((arg0 + 80));
    LeafTarget_b891c0(arg0);
}

extern "C" unsigned char LeafData_b891f0_0[];
extern "C" uint64_t RecoveredCall_b891f0_0(uint64_t);
extern "C" uint64_t RecoveredCall_b891f0_1(uint64_t);
extern "C" void LeafTarget_b891f0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b891f0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b891f0_0) - 24) + 24);
    const uint64_t result0 = RecoveredCall_b891f0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_b891f0_1(arg0);
    LeafTarget_b891f0(arg0);
}

extern "C" unsigned char LeafData_b8c080_0[];
extern "C" uint64_t RecoveredCall_b8c080_0(uint64_t);
extern "C" void LeafTarget_b8c080(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b8c080(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b8c080_0) - 384) + 384);
    const uint64_t result0 = RecoveredCall_b8c080_0((arg0 + 80));
    LeafTarget_b8c080(arg0);
}

extern "C" unsigned char LeafData_b8c0b0_0[];
extern "C" uint64_t RecoveredCall_b8c0b0_0(uint64_t);
extern "C" uint64_t RecoveredCall_b8c0b0_1(uint64_t);
extern "C" void LeafTarget_b8c0b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b8c0b0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_b8c0b0_0) - 384) + 384);
    const uint64_t result0 = RecoveredCall_b8c0b0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_b8c0b0_1(arg0);
    LeafTarget_b8c0b0(arg0);
}

extern "C" uint64_t RecoveredCall_b90940_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_b90940_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b90940(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b90940_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_b90940_1((arg0 + 80),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 88),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 92),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 216),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 220),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 224),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 228),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result7)) << 0));
    return result7;
}

extern "C" uint64_t RecoveredCall_b94820_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b94820(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b94820_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 156),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    return result1;
}

extern "C" uint64_t RecoveredCall_b948b0_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b948b0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b948b0_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 156),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 160),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 164),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    return result3;
}

extern "C" uint64_t RecoveredCall_b94980_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b94980(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b94980_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 156),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 160),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 164),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 168),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result4)) << 0));
    return result4;
}

extern "C" uint64_t RecoveredCall_b94ab0_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b94ab0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b94ab0_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 156),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 160),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 164),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 168),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 172),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 176),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result6)) << 0));
    return result6;
}

extern "C" uint64_t RecoveredCall_b9b300_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_b9b300_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b9b300(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b9b300_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_b9b300_1((arg0 + 168),arg1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 248),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 252),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    return result3;
}

extern "C" uint64_t RecoveredCall_b9b460_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b9b460(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b9b460_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 172),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 176),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    return result3;
}

extern "C" uint64_t RecoveredCall_b9b640_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b9b640(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b9b640_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 120),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    return result1;
}

extern "C" uint64_t RecoveredCall_b9cd30_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b9cd30(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_b9cd30_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 76),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    return result1;
}

extern "C" unsigned char LeafData_ba8210_0[];
extern "C" uint64_t RecoveredCall_ba8210_0(uint64_t);
extern "C" void LeafTarget_ba8210(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ba8210(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_ba8210_0) - 1480) + 1480);
    const uint64_t result0 = RecoveredCall_ba8210_0((arg0 + 80));
    LeafTarget_ba8210(arg0);
}

extern "C" unsigned char LeafData_ba8240_0[];
extern "C" uint64_t RecoveredCall_ba8240_0(uint64_t);
extern "C" uint64_t RecoveredCall_ba8240_1(uint64_t);
extern "C" void LeafTarget_ba8240(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ba8240(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_ba8240_0) - 1480) + 1480);
    const uint64_t result0 = RecoveredCall_ba8240_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_ba8240_1(arg0);
    LeafTarget_ba8240(arg0);
}

extern "C" uint64_t RecoveredCall_ba91d0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_ba91d0_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ba91d0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_ba91d0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_ba91d0_1((arg0 + 80),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 88),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 92),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    return result3;
}

extern "C" uint64_t RecoveredCall_bb6200_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bb6200(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_bb6200_0((arg0 + 8),arg1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 16),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 20),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    return result2;
}

extern "C" uint64_t RecoveredCall_bb88b0_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bb88b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_bb88b0_0(arg0,arg1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 56),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 60),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 64),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    return result3;
}

extern "C" uint64_t RecoveredCall_bb8f50_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bb8f50(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_bb8f50_0(arg0,arg1);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 56),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 60),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 64),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    return result3;
}

extern "C" uint64_t RecoveredCall_bbf890_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bbf890(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_bbf890_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 152),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 156),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    return result2;
}

extern "C" uint64_t RecoveredCall_bc1830_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_bc1830_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bc1830(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_bc1830_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_bc1830_1((arg0 + 136),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 176),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    return result2;
}

extern "C" uint64_t RecoveredCall_bc3450_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_bc3450_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bc3450(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_bc3450_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_bc3450_1((arg0 + 80),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 112),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 116),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    return result3;
}

extern "C" unsigned char LeafData_bc5a70_0[];
extern "C" uint64_t RecoveredCall_bc5a70_0(uint64_t);
extern "C" void LeafTarget_bc5a70(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_bc5a70(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_bc5a70_0) - 2024) + 2024);
    const uint64_t result0 = RecoveredCall_bc5a70_0((arg0 + 80));
    LeafTarget_bc5a70(arg0);
}

extern "C" unsigned char LeafData_bc5aa0_0[];
extern "C" uint64_t RecoveredCall_bc5aa0_0(uint64_t);
extern "C" uint64_t RecoveredCall_bc5aa0_1(uint64_t);
extern "C" void LeafTarget_bc5aa0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_bc5aa0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_bc5aa0_0) - 2024) + 2024);
    const uint64_t result0 = RecoveredCall_bc5aa0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_bc5aa0_1(arg0);
    LeafTarget_bc5aa0(arg0);
}

extern "C" uint64_t RecoveredCall_bc7730_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bc7730(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_bc7730_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 152),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    return result1;
}

extern "C" uint64_t RecoveredCall_bc8d20_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_bc8d20_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_bc8d20_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bc8d20(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_bc8d20_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_bc8d20_1((arg0 + 80),arg1,arg2);
    *reinterpret_cast<uint64_t*>((arg0 + 96)) = arg0;
    const uint64_t result2 = RecoveredCall_bc8d20_2(arg1,arg2,(arg0 + 88));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 112),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 116),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 120),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result5)) << 0));
    return result5;
}

extern "C" uint64_t RecoveredCall_bcc860_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_bcc860_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_bcc860_2(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_bcc860_3(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bcc860(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_bcc860_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_bcc860_1((arg0 + 80),arg1,arg2);
    *reinterpret_cast<uint64_t*>((arg0 + 96)) = arg0;
    const uint64_t result2 = RecoveredCall_bcc860_2(arg1,arg2,(arg0 + 88));
    *reinterpret_cast<uint64_t*>((arg0 + 120)) = arg0;
    const uint64_t result3 = RecoveredCall_bcc860_3(arg1,arg2,(arg0 + 112));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 136),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result4)) << 0));
    return result4;
}

extern "C" unsigned char LeafData_be72a0_0[];
extern "C" uint64_t RecoveredCall_be72a0_0(uint64_t);
extern "C" void LeafTarget_be72a0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_be72a0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_be72a0_0) - 2232) + 2232);
    const uint64_t result0 = RecoveredCall_be72a0_0((arg0 + 80));
    LeafTarget_be72a0(arg0);
}

extern "C" unsigned char LeafData_be72d0_0[];
extern "C" uint64_t RecoveredCall_be72d0_0(uint64_t);
extern "C" uint64_t RecoveredCall_be72d0_1(uint64_t);
extern "C" void LeafTarget_be72d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_be72d0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_be72d0_0) - 2232) + 2232);
    const uint64_t result0 = RecoveredCall_be72d0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_be72d0_1(arg0);
    LeafTarget_be72d0(arg0);
}

extern "C" uint64_t RecoveredCall_be7d20_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_be7d20_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_be7d20_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_be7d20(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_be7d20_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_be7d20_1((arg0 + 80),arg2);
    const uint64_t result2 = RecoveredCall_be7d20_2((arg0 + 88),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 112),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    return result3;
}

extern "C" uint64_t RecoveredCall_bf0d30_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bf0d30(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_bf0d30_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg2 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 224));
    *reinterpret_cast<uint64_t*>((arg0 + 80)) = field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field4)(field2,(arg0 + 216),uint32_t(4));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field5 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field8)(field6,(arg0 + 220),uint32_t(1));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field9 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((field11 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field12)(field10,(arg0 + 221),uint32_t(1));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field13 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((field14 + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((field15 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field16)(field14,(arg0 + 222),uint32_t(1));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field17 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((field18 + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>((field19 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field20)(field18,(arg0 + 223),uint32_t(1));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field21 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((field22 + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>((field23 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field24)(field22,(arg0 + 224),uint32_t(4));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field25 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>((field26 + 0));
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>((field27 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field28)(field26,(arg0 + 228),uint32_t(4));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field29 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>((field30 + 0));
    const uint64_t field32 = *reinterpret_cast<const uint64_t*>((field31 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field32)(field30,(arg0 + 232),uint32_t(1));
    const uint64_t field33 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field34 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field33 + (uint32_t(uint32_t(result8)) << 0));
    const uint64_t field35 = *reinterpret_cast<const uint64_t*>((field34 + 0));
    const uint64_t field36 = *reinterpret_cast<const uint64_t*>((field35 + 48));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field36)(field34,(arg0 + 233),uint32_t(1));
    const uint64_t field37 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field37 + (uint32_t(uint32_t(result9)) << 0));
    return result9;
}

extern "C" uint64_t RecoveredCall_bf1680_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_bf1680_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_bf1680_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_bf1680(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_bf1680_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_bf1680_1((arg0 + 80),arg1,arg2);
    const uint64_t result2 = RecoveredCall_bf1680_2(arg1,(arg0 + 88));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 96),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 100),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 104),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 108),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 112),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 116),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result8)) << 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 0));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field25 + 48));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field26)(field24,(arg0 + 120),uint32_t(4));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field27 + (uint32_t(uint32_t(result9)) << 0));
    return result9;
}

extern "C" unsigned char LeafData_c01200_0[];
extern "C" void LeafTarget_c01200(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c01200(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c01200_0) - 568) + 568);
    LeafTarget_c01200((arg0 + 16));
}

extern "C" unsigned char LeafData_c01210_0[];
extern "C" uint64_t RecoveredCall_c01210_0(uint64_t);
extern "C" void LeafTarget_c01210(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c01210(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c01210_0) - 568) + 568);
    const uint64_t result0 = RecoveredCall_c01210_0((arg0 + 16));
    LeafTarget_c01210(arg0);
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_c01250(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 16));
    return uint32_t((uint32_t(uint32_t((~uint32_t(result0)))) & 1));
}

extern "C" unsigned char LeafData_c01df0_0[];
extern "C" void LeafTarget_c01df0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c01df0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c01df0_0) - 680) + 680);
    LeafTarget_c01df0((arg0 + 8));
}

extern "C" unsigned char LeafData_c01e00_0[];
extern "C" uint64_t RecoveredCall_c01e00_0(uint64_t);
extern "C" void LeafTarget_c01e00(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c01e00(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c01e00_0) - 680) + 680);
    const uint64_t result0 = RecoveredCall_c01e00_0((arg0 + 8));
    LeafTarget_c01e00(arg0);
}

extern "C" unsigned char LeafData_c01ff0_0[];
extern "C" void LeafTarget_c01ff0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c01ff0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c01ff0_0) - 776) + 776);
    LeafTarget_c01ff0((arg0 + 8));
}

extern "C" unsigned char LeafData_c02000_0[];
extern "C" uint64_t RecoveredCall_c02000_0(uint64_t);
extern "C" void LeafTarget_c02000(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c02000(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c02000_0) - 776) + 776);
    const uint64_t result0 = RecoveredCall_c02000_0((arg0 + 8));
    LeafTarget_c02000(arg0);
}

extern "C" unsigned char LeafData_c1cac0_0[];
extern "C" void LeafTarget_c1cac0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c1cac0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c1cac0_0) - 2192) + 2192);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    *reinterpret_cast<uint64_t*>((field1 + 8)) = field0;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    *reinterpret_cast<uint64_t*>((field2 + 0)) = field1;
    *reinterpret_cast<uint64_t*>(((arg0 + 72) + 0)) = (arg0 + 72);
    *reinterpret_cast<uint64_t*>((arg0 + 80)) = (arg0 + 72);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 8));
    *reinterpret_cast<uint64_t*>((field3 + 8)) = field4;
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    *reinterpret_cast<uint64_t*>((field5 + 0)) = field3;
    LeafTarget_c1cac0(arg0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c1e810(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,arg1,uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg0 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg0 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field3 + (uint32_t(uint32_t(result0)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg1 + 12),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg0 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg0 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field7 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg1 + 24),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg0 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg0 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field11 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg1 + 36),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg0 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg0 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field15 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg1 + 4),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg0 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg0 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field19 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg1 + 16),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((arg0 + 0) + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg0 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field23 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 0));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field25 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field26)(field24,(arg1 + 28),uint32_t(4));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>(((arg0 + 0) + 0));
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>(((arg0 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field27 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 0));
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>((field29 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field30)(field28,(arg1 + 40),uint32_t(4));
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>(((arg0 + 0) + 0));
    const uint64_t field32 = *reinterpret_cast<const uint64_t*>(((arg0 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field31 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field33 = *reinterpret_cast<const uint64_t*>((field32 + 0));
    const uint64_t field34 = *reinterpret_cast<const uint64_t*>((field33 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field34)(field32,(arg1 + 8),uint32_t(4));
    const uint64_t field35 = *reinterpret_cast<const uint64_t*>(((arg0 + 0) + 0));
    const uint64_t field36 = *reinterpret_cast<const uint64_t*>(((arg0 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field35 + (uint32_t(uint32_t(result8)) << 0));
    const uint64_t field37 = *reinterpret_cast<const uint64_t*>((field36 + 0));
    const uint64_t field38 = *reinterpret_cast<const uint64_t*>((field37 + 48));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field38)(field36,(arg1 + 20),uint32_t(4));
    const uint64_t field39 = *reinterpret_cast<const uint64_t*>(((arg0 + 0) + 0));
    const uint64_t field40 = *reinterpret_cast<const uint64_t*>(((arg0 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field39 + (uint32_t(uint32_t(result9)) << 0));
    const uint64_t field41 = *reinterpret_cast<const uint64_t*>((field40 + 0));
    const uint64_t field42 = *reinterpret_cast<const uint64_t*>((field41 + 48));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field42)(field40,(arg1 + 32),uint32_t(4));
    const uint64_t field43 = *reinterpret_cast<const uint64_t*>(((arg0 + 0) + 0));
    const uint64_t field44 = *reinterpret_cast<const uint64_t*>(((arg0 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field43 + (uint32_t(uint32_t(result10)) << 0));
    const uint64_t field45 = *reinterpret_cast<const uint64_t*>((field44 + 0));
    const uint64_t field46 = *reinterpret_cast<const uint64_t*>((field45 + 48));
    const uint64_t result11 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field46)(field44,(arg1 + 44),uint32_t(4));
    const uint64_t field47 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = (field47 + (uint32_t(uint32_t(result11)) << 0));
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c21d10(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)((arg0 + 88),arg1);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 136));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)((arg0 + 136),arg1);
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 176));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 16));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field7)((arg0 + 176),arg1);
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 216));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 16));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field9)((arg0 + 216),arg1);
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>(((arg0 + 216) + 40));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 16));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field11)(((arg0 + 216) + 40),arg1);
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg0 + 216) + 88));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 16));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field13)(((arg0 + 216) + 88),arg1);
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>(((arg0 + 216) + 128));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((field14 + 16));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field15)(((arg0 + 216) + 128),arg1,field15);
    return result7;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c2bbc0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field1)((arg0 + 40),arg1,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c34aa0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)((arg0 + 80),arg1);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 136));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)((arg0 + 136),arg1);
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 176));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 16));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field7)((arg0 + 176),arg1);
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 216));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 16));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field9)((arg0 + 216),arg1);
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>(((arg0 + 216) + 40));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 16));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field11)(((arg0 + 216) + 40),arg1);
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg0 + 216) + 80));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 16));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field13)(((arg0 + 216) + 80),arg1);
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>(((arg0 + 216) + 192));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((field14 + 16));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field15)(((arg0 + 216) + 192),arg1);
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg0 + 216) + 232));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 16));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field17)(((arg0 + 216) + 232),arg1);
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>(((arg0 + 216) + 344));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((field18 + 16));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field19)(((arg0 + 216) + 344),arg1);
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg0 + 216) + 456));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 16));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field21)(((arg0 + 216) + 456),arg1);
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>(((arg0 + 216) + 568));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((field22 + 16));
    const uint64_t result11 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field23)(((arg0 + 216) + 568),arg1);
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg0 + 216) + 680));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 16));
    const uint64_t result12 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field25)(((arg0 + 216) + 680),arg1);
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>(((arg0 + 216) + 720));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>((field26 + 16));
    const uint64_t result13 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field27)(((arg0 + 216) + 720),arg1);
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>(((arg0 + 216) + 832));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 16));
    const uint64_t result14 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field29)(((arg0 + 216) + 832),arg1);
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>(((arg0 + 216) + 872));
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>((field30 + 16));
    const uint64_t result15 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field31)(((arg0 + 216) + 872),arg1,field31);
    return result15;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c35cf0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)((arg0 + 80),arg1);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 120));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)((arg0 + 120),arg1);
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 160));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 16));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field7)((arg0 + 160),arg1);
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 200));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 16));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field9)((arg0 + 200),arg1);
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((arg0 + 240));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 16));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field11)((arg0 + 240),arg1);
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg0 + 240) + 40));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 16));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field13)(((arg0 + 240) + 40),arg1);
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>(((arg0 + 240) + 80));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((field14 + 16));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field15)(((arg0 + 240) + 80),arg1);
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg0 + 240) + 120));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 16));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field17)(((arg0 + 240) + 120),arg1);
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>(((arg0 + 240) + 160));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((field18 + 16));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field19)(((arg0 + 240) + 160),arg1);
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg0 + 240) + 200));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 16));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field21)(((arg0 + 240) + 200),arg1);
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>(((arg0 + 240) + 240));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((field22 + 16));
    const uint64_t result11 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field23)(((arg0 + 240) + 240),arg1);
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg0 + 240) + 280));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 16));
    const uint64_t result12 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field25)(((arg0 + 240) + 280),arg1);
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>(((arg0 + 240) + 320));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>((field26 + 16));
    const uint64_t result13 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field27)(((arg0 + 240) + 320),arg1);
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>(((arg0 + 240) + 360));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 16));
    const uint64_t result14 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field29)(((arg0 + 240) + 360),arg1);
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>(((arg0 + 240) + 400));
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>((field30 + 16));
    const uint64_t result15 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field31)(((arg0 + 240) + 400),arg1);
    const uint64_t field32 = *reinterpret_cast<const uint64_t*>(((arg0 + 240) + 440));
    const uint64_t field33 = *reinterpret_cast<const uint64_t*>((field32 + 16));
    const uint64_t result16 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field33)(((arg0 + 240) + 440),arg1,field33);
    return result16;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c37270(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)((arg0 + 80),arg1);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 136));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)((arg0 + 136),arg1);
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 192));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 16));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field7)((arg0 + 192),arg1);
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 248));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 16));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field9)((arg0 + 248),arg1);
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>(((arg0 + 248) + 56));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 16));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field11)(((arg0 + 248) + 56),arg1);
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg0 + 248) + 112));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 16));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field13)(((arg0 + 248) + 112),arg1);
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>(((arg0 + 248) + 168));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((field14 + 16));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field15)(((arg0 + 248) + 168),arg1);
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg0 + 248) + 224));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 16));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field17)(((arg0 + 248) + 224),arg1);
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>(((arg0 + 248) + 280));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((field18 + 16));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field19)(((arg0 + 248) + 280),arg1);
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg0 + 248) + 336));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 16));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field21)(((arg0 + 248) + 336),arg1);
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>(((arg0 + 248) + 392));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((field22 + 16));
    const uint64_t result11 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field23)(((arg0 + 248) + 392),arg1);
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg0 + 248) + 448));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 16));
    const uint64_t result12 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field25)(((arg0 + 248) + 448),arg1);
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>(((arg0 + 248) + 504));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>((field26 + 16));
    const uint64_t result13 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field27)(((arg0 + 248) + 504),arg1);
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>(((arg0 + 248) + 560));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 16));
    const uint64_t result14 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field29)(((arg0 + 248) + 560),arg1);
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>(((arg0 + 248) + 616));
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>((field30 + 16));
    const uint64_t result15 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field31)(((arg0 + 248) + 616),arg1);
    const uint64_t field32 = *reinterpret_cast<const uint64_t*>(((arg0 + 248) + 656));
    const uint64_t field33 = *reinterpret_cast<const uint64_t*>((field32 + 16));
    const uint64_t result16 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field33)(((arg0 + 248) + 656),arg1);
    const uint64_t field34 = *reinterpret_cast<const uint64_t*>(((arg0 + 248) + 696));
    const uint64_t field35 = *reinterpret_cast<const uint64_t*>((field34 + 16));
    const uint64_t result17 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field35)(((arg0 + 248) + 696),arg1);
    const uint64_t field36 = *reinterpret_cast<const uint64_t*>(((arg0 + 248) + 752));
    const uint64_t field37 = *reinterpret_cast<const uint64_t*>((field36 + 16));
    const uint64_t result18 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field37)(((arg0 + 248) + 752),arg1);
    const uint64_t field38 = *reinterpret_cast<const uint64_t*>(((arg0 + 248) + 808));
    const uint64_t field39 = *reinterpret_cast<const uint64_t*>((field38 + 16));
    const uint64_t result19 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field39)(((arg0 + 248) + 808),arg1);
    const uint64_t field40 = *reinterpret_cast<const uint64_t*>(((arg0 + 248) + 864));
    const uint64_t field41 = *reinterpret_cast<const uint64_t*>((field40 + 16));
    const uint64_t result20 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field41)(((arg0 + 248) + 864),arg1);
    const uint64_t field42 = *reinterpret_cast<const uint64_t*>(((arg0 + 248) + 920));
    const uint64_t field43 = *reinterpret_cast<const uint64_t*>((field42 + 16));
    const uint64_t result21 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field43)(((arg0 + 248) + 920),arg1);
    const uint64_t field44 = *reinterpret_cast<const uint64_t*>(((arg0 + 248) + 960));
    const uint64_t field45 = *reinterpret_cast<const uint64_t*>((field44 + 16));
    const uint64_t result22 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field45)(((arg0 + 248) + 960),arg1);
    const uint64_t field46 = *reinterpret_cast<const uint64_t*>(((arg0 + 248) + 1000));
    const uint64_t field47 = *reinterpret_cast<const uint64_t*>((field46 + 16));
    const uint64_t result23 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field47)(((arg0 + 248) + 1000),arg1);
    const uint64_t field48 = *reinterpret_cast<const uint64_t*>(((arg0 + 248) + 1040));
    const uint64_t field49 = *reinterpret_cast<const uint64_t*>((field48 + 16));
    const uint64_t result24 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field49)(((arg0 + 248) + 1040),arg1);
    const uint64_t field50 = *reinterpret_cast<const uint64_t*>(((arg0 + 248) + 1080));
    const uint64_t field51 = *reinterpret_cast<const uint64_t*>((field50 + 16));
    const uint64_t result25 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field51)(((arg0 + 248) + 1080),arg1);
    const uint64_t field52 = *reinterpret_cast<const uint64_t*>(((arg0 + 248) + 1120));
    const uint64_t field53 = *reinterpret_cast<const uint64_t*>((field52 + 16));
    const uint64_t result26 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field53)(((arg0 + 248) + 1120),arg1);
    const uint64_t field54 = *reinterpret_cast<const uint64_t*>(((arg0 + 248) + 1160));
    const uint64_t field55 = *reinterpret_cast<const uint64_t*>((field54 + 16));
    const uint64_t result27 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field55)(((arg0 + 248) + 1160),arg1,field55);
    return result27;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c39450(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)((arg0 + 80),arg1);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 120));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)((arg0 + 120),arg1);
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 160));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 16));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field7)((arg0 + 160),arg1);
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 200));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 16));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field9)((arg0 + 200),arg1);
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>(((arg0 + 200) + 64));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 16));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field11)(((arg0 + 200) + 64),arg1);
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg0 + 200) + 128));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 16));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field13)(((arg0 + 200) + 128),arg1);
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>(((arg0 + 200) + 168));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((field14 + 16));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field15)(((arg0 + 200) + 168),arg1,field15);
    return result7;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c39d50(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field1)((arg0 + 40),arg1,field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c43750(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)((arg0 + 32),field1);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c48910(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)((arg0 + 32),field1);
    return result0;
}

extern "C" unsigned char LeafData_c6b620_0[];
extern "C" uint64_t RecoveredCall_c6b620_0(uint64_t);
extern "C" void LeafTarget_c6b620(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c6b620(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c6b620_0) - 944) + 944);
    const uint64_t result0 = RecoveredCall_c6b620_0((arg0 + 80));
    LeafTarget_c6b620(arg0);
}

extern "C" unsigned char LeafData_c6b650_0[];
extern "C" uint64_t RecoveredCall_c6b650_0(uint64_t);
extern "C" uint64_t RecoveredCall_c6b650_1(uint64_t);
extern "C" void LeafTarget_c6b650(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c6b650(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c6b650_0) - 944) + 944);
    const uint64_t result0 = RecoveredCall_c6b650_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_c6b650_1(arg0);
    LeafTarget_c6b650(arg0);
}

extern "C" unsigned char LeafData_c6eb10_0[];
extern "C" uint64_t RecoveredCall_c6eb10_0(uint64_t);
extern "C" void LeafTarget_c6eb10(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c6eb10(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c6eb10_0) - 1360) + 1360);
    const uint64_t result0 = RecoveredCall_c6eb10_0((arg0 + 80));
    LeafTarget_c6eb10(arg0);
}

extern "C" unsigned char LeafData_c6ed30_0[];
extern "C" uint64_t RecoveredCall_c6ed30_0(uint64_t);
extern "C" uint64_t RecoveredCall_c6ed30_1(uint64_t);
extern "C" void LeafTarget_c6ed30(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c6ed30(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c6ed30_0) - 1360) + 1360);
    const uint64_t result0 = RecoveredCall_c6ed30_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_c6ed30_1(arg0);
    LeafTarget_c6ed30(arg0);
}

extern "C" uint64_t RecoveredCall_c6faa0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_c6faa0_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_c6faa0_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c6faa0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_c6faa0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_c6faa0_1((arg0 + 80),arg1,arg2);
    const uint64_t result2 = RecoveredCall_c6faa0_2(arg1,(arg0 + 88));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 112),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 116),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 120),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 124),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 128),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 132),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result8)) << 0));
    return result8;
}

extern "C" unsigned char LeafData_c7e670_0[];
extern "C" uint64_t RecoveredCall_c7e670_0(uint64_t);
extern "C" void LeafTarget_c7e670(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c7e670(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c7e670_0) - 1288) + 1288);
    const uint64_t result0 = RecoveredCall_c7e670_0((arg0 + 80));
    LeafTarget_c7e670(arg0);
}

extern "C" unsigned char LeafData_c7e6a0_0[];
extern "C" uint64_t RecoveredCall_c7e6a0_0(uint64_t);
extern "C" uint64_t RecoveredCall_c7e6a0_1(uint64_t);
extern "C" void LeafTarget_c7e6a0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c7e6a0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c7e6a0_0) - 1288) + 1288);
    const uint64_t result0 = RecoveredCall_c7e6a0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_c7e6a0_1(arg0);
    LeafTarget_c7e6a0(arg0);
}

extern "C" unsigned char LeafData_c7ffd0_0[];
extern "C" uint64_t RecoveredCall_c7ffd0_0(uint64_t);
extern "C" void LeafTarget_c7ffd0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c7ffd0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c7ffd0_0) - 2008) + 2008);
    const uint64_t result0 = RecoveredCall_c7ffd0_0((arg0 + 80));
    LeafTarget_c7ffd0(arg0);
}

extern "C" unsigned char LeafData_c80000_0[];
extern "C" uint64_t RecoveredCall_c80000_0(uint64_t);
extern "C" uint64_t RecoveredCall_c80000_1(uint64_t);
extern "C" void LeafTarget_c80000(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c80000(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c80000_0) - 2008) + 2008);
    const uint64_t result0 = RecoveredCall_c80000_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_c80000_1(arg0);
    LeafTarget_c80000(arg0);
}

extern "C" unsigned char LeafData_c81040_0[];
extern "C" uint64_t RecoveredCall_c81040_0(uint64_t);
extern "C" void LeafTarget_c81040(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c81040(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c81040_0) - 2584) + 2584);
    const uint64_t result0 = RecoveredCall_c81040_0((arg0 + 80));
    LeafTarget_c81040(arg0);
}

extern "C" unsigned char LeafData_c81070_0[];
extern "C" uint64_t RecoveredCall_c81070_0(uint64_t);
extern "C" uint64_t RecoveredCall_c81070_1(uint64_t);
extern "C" void LeafTarget_c81070(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c81070(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c81070_0) - 2584) + 2584);
    const uint64_t result0 = RecoveredCall_c81070_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_c81070_1(arg0);
    LeafTarget_c81070(arg0);
}

extern "C" uint64_t RecoveredCall_c82530_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_c82530_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c82530(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_c82530_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_c82530_1((arg0 + 80),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 88),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    return result2;
}

extern "C" unsigned char LeafData_c831b0_0[];
extern "C" uint64_t RecoveredCall_c831b0_0(uint64_t);
extern "C" void LeafTarget_c831b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c831b0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c831b0_0) - 3704) + 3704);
    const uint64_t result0 = RecoveredCall_c831b0_0((arg0 + 80));
    LeafTarget_c831b0(arg0);
}

extern "C" unsigned char LeafData_c833d0_0[];
extern "C" uint64_t RecoveredCall_c833d0_0(uint64_t);
extern "C" uint64_t RecoveredCall_c833d0_1(uint64_t);
extern "C" void LeafTarget_c833d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c833d0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c833d0_0) - 3704) + 3704);
    const uint64_t result0 = RecoveredCall_c833d0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_c833d0_1(arg0);
    LeafTarget_c833d0(arg0);
}

extern "C" uint64_t RecoveredCall_c89cb0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_c89cb0_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c89cb0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_c89cb0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_c89cb0_1((arg0 + 80),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 104),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 108),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 112),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 116),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 120),uint32_t(1));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 124),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result7)) << 0));
    return result7;
}

extern "C" unsigned char LeafData_c8ad00_0[];
extern "C" uint64_t RecoveredCall_c8ad00_0(uint64_t);
extern "C" void LeafTarget_c8ad00(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c8ad00(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c8ad00_0) - 3032) + 3032);
    const uint64_t result0 = RecoveredCall_c8ad00_0((arg0 + 80));
    LeafTarget_c8ad00(arg0);
}

extern "C" unsigned char LeafData_c8ad30_0[];
extern "C" uint64_t RecoveredCall_c8ad30_0(uint64_t);
extern "C" uint64_t RecoveredCall_c8ad30_1(uint64_t);
extern "C" void LeafTarget_c8ad30(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c8ad30(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c8ad30_0) - 3032) + 3032);
    const uint64_t result0 = RecoveredCall_c8ad30_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_c8ad30_1(arg0);
    LeafTarget_c8ad30(arg0);
}

extern "C" unsigned char LeafData_c8be30_0[];
extern "C" uint64_t RecoveredCall_c8be30_0(uint64_t);
extern "C" void LeafTarget_c8be30(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c8be30(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c8be30_0) - 3360) + 3360);
    const uint64_t result0 = RecoveredCall_c8be30_0((arg0 + 80));
    LeafTarget_c8be30(arg0);
}

extern "C" unsigned char LeafData_c8be60_0[];
extern "C" uint64_t RecoveredCall_c8be60_0(uint64_t);
extern "C" uint64_t RecoveredCall_c8be60_1(uint64_t);
extern "C" void LeafTarget_c8be60(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c8be60(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c8be60_0) - 3360) + 3360);
    const uint64_t result0 = RecoveredCall_c8be60_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_c8be60_1(arg0);
    LeafTarget_c8be60(arg0);
}

extern "C" uint64_t RecoveredCall_c8be90_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_c8be90_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_c8be90_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c8be90(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_c8be90_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_c8be90_1((arg0 + 80),arg1,arg2);
    const uint64_t result2 = RecoveredCall_c8be90_2((arg0 + 88),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 96),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 97),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 98),uint32_t(1));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 100),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 104),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 108),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result8)) << 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 0));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field25 + 48));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field26)(field24,(arg0 + 112),uint32_t(4));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field27 + (uint32_t(uint32_t(result9)) << 0));
    return result9;
}

extern "C" unsigned char LeafData_c8c3f0_0[];
extern "C" uint64_t RecoveredCall_c8c3f0_0(uint64_t);
extern "C" uint64_t RecoveredCall_c8c3f0_1(uint64_t);
extern "C" void LeafTarget_c8c3f0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c8c3f0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c8c3f0_0) - 3360) + 3360);
    const uint64_t result0 = RecoveredCall_c8c3f0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_c8c3f0_1(arg0);
    LeafTarget_c8c3f0(arg0);
}

extern "C" unsigned char LeafData_c8de50_0[];
extern "C" uint64_t RecoveredCall_c8de50_0(uint64_t);
extern "C" void LeafTarget_c8de50(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c8de50(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c8de50_0) - 48) + 48);
    const uint64_t result0 = RecoveredCall_c8de50_0((arg0 + 80));
    LeafTarget_c8de50(arg0);
}

extern "C" unsigned char LeafData_c8de80_0[];
extern "C" uint64_t RecoveredCall_c8de80_0(uint64_t);
extern "C" uint64_t RecoveredCall_c8de80_1(uint64_t);
extern "C" void LeafTarget_c8de80(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c8de80(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c8de80_0) - 48) + 48);
    const uint64_t result0 = RecoveredCall_c8de80_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_c8de80_1(arg0);
    LeafTarget_c8de80(arg0);
}

extern "C" unsigned char LeafData_c8e710_0[];
extern "C" uint64_t RecoveredCall_c8e710_0(uint64_t);
extern "C" void LeafTarget_c8e710(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c8e710(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c8e710_0) - 464) + 464);
    const uint64_t result0 = RecoveredCall_c8e710_0((arg0 + 80));
    LeafTarget_c8e710(arg0);
}

extern "C" unsigned char LeafData_c8e740_0[];
extern "C" uint64_t RecoveredCall_c8e740_0(uint64_t);
extern "C" uint64_t RecoveredCall_c8e740_1(uint64_t);
extern "C" void LeafTarget_c8e740(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c8e740(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c8e740_0) - 464) + 464);
    const uint64_t result0 = RecoveredCall_c8e740_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_c8e740_1(arg0);
    LeafTarget_c8e740(arg0);
}

extern "C" uint64_t RecoveredCall_c8e770_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_c8e770_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_c8e770_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c8e770(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_c8e770_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_c8e770_1((arg0 + 80),arg1,arg2);
    const uint64_t result2 = RecoveredCall_c8e770_2((arg0 + 88),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 96),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 97),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 98),uint32_t(1));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result5)) << 0));
    return result5;
}

extern "C" unsigned char LeafData_c8eee0_0[];
extern "C" uint64_t RecoveredCall_c8eee0_0(uint64_t);
extern "C" uint64_t RecoveredCall_c8eee0_1(uint64_t);
extern "C" void LeafTarget_c8eee0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c8eee0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c8eee0_0) - 464) + 464);
    const uint64_t result0 = RecoveredCall_c8eee0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_c8eee0_1(arg0);
    LeafTarget_c8eee0(arg0);
}

extern "C" unsigned char LeafData_c8f7a0_0[];
extern "C" uint64_t RecoveredCall_c8f7a0_0(uint64_t);
extern "C" unsigned char LeafData_c8f7a0_5[];
extern "C" uint64_t RecoveredCall_c8f7a0_1(uint64_t);
extern "C" void LeafTarget_c8f7a0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c8f7a0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c8f7a0_0) - 1032) + 1032);
    const uint64_t result0 = RecoveredCall_c8f7a0_0((arg0 + 144));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c8f7a0_5) - 4080) + 4080);
    const uint64_t result1 = RecoveredCall_c8f7a0_1((arg0 + 80));
    LeafTarget_c8f7a0(arg0);
}

extern "C" unsigned char LeafData_c8f7e0_0[];
extern "C" uint64_t RecoveredCall_c8f7e0_0(uint64_t);
extern "C" unsigned char LeafData_c8f7e0_5[];
extern "C" uint64_t RecoveredCall_c8f7e0_1(uint64_t);
extern "C" uint64_t RecoveredCall_c8f7e0_2(uint64_t);
extern "C" void LeafTarget_c8f7e0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c8f7e0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c8f7e0_0) - 1032) + 1032);
    const uint64_t result0 = RecoveredCall_c8f7e0_0((arg0 + 144));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c8f7e0_5) - 4080) + 4080);
    const uint64_t result1 = RecoveredCall_c8f7e0_1((arg0 + 80));
    const uint64_t result2 = RecoveredCall_c8f7e0_2(arg0);
    LeafTarget_c8f7e0(arg0);
}

extern "C" unsigned char LeafData_c8fb80_0[];
extern "C" uint64_t RecoveredCall_c8fb80_0(uint64_t);
extern "C" unsigned char LeafData_c8fb80_5[];
extern "C" uint64_t RecoveredCall_c8fb80_1(uint64_t);
extern "C" void LeafTarget_c8fb80(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c8fb80(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c8fb80_0) - 1032) + 1032);
    const uint64_t result0 = RecoveredCall_c8fb80_0((arg0 + 144));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c8fb80_5) - 4080) + 4080);
    const uint64_t result1 = RecoveredCall_c8fb80_1((arg0 + 80));
    LeafTarget_c8fb80(arg0);
}

extern "C" unsigned char LeafData_c8fbc0_0[];
extern "C" uint64_t RecoveredCall_c8fbc0_0(uint64_t);
extern "C" unsigned char LeafData_c8fbc0_5[];
extern "C" uint64_t RecoveredCall_c8fbc0_1(uint64_t);
extern "C" uint64_t RecoveredCall_c8fbc0_2(uint64_t);
extern "C" void LeafTarget_c8fbc0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c8fbc0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c8fbc0_0) - 1032) + 1032);
    const uint64_t result0 = RecoveredCall_c8fbc0_0((arg0 + 144));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c8fbc0_5) - 4080) + 4080);
    const uint64_t result1 = RecoveredCall_c8fbc0_1((arg0 + 80));
    const uint64_t result2 = RecoveredCall_c8fbc0_2(arg0);
    LeafTarget_c8fbc0(arg0);
}

extern "C" unsigned char LeafData_c99a50_0[];
extern "C" uint64_t RecoveredCall_c99a50_0(uint64_t);
extern "C" void LeafTarget_c99a50(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c99a50(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c99a50_0) - 584) + 584);
    const uint64_t result0 = RecoveredCall_c99a50_0((arg0 + 80));
    LeafTarget_c99a50(arg0);
}

extern "C" unsigned char LeafData_c99a80_0[];
extern "C" uint64_t RecoveredCall_c99a80_0(uint64_t);
extern "C" uint64_t RecoveredCall_c99a80_1(uint64_t);
extern "C" void LeafTarget_c99a80(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c99a80(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c99a80_0) - 584) + 584);
    const uint64_t result0 = RecoveredCall_c99a80_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_c99a80_1(arg0);
    LeafTarget_c99a80(arg0);
}

extern "C" unsigned char LeafData_c9af00_0[];
extern "C" uint64_t RecoveredCall_c9af00_0(uint64_t);
extern "C" void LeafTarget_c9af00(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c9af00(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c9af00_0) - 1720) + 1720);
    const uint64_t result0 = RecoveredCall_c9af00_0((arg0 + 80));
    LeafTarget_c9af00(arg0);
}

extern "C" unsigned char LeafData_c9af30_0[];
extern "C" uint64_t RecoveredCall_c9af30_0(uint64_t);
extern "C" uint64_t RecoveredCall_c9af30_1(uint64_t);
extern "C" void LeafTarget_c9af30(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c9af30(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_c9af30_0) - 1720) + 1720);
    const uint64_t result0 = RecoveredCall_c9af30_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_c9af30_1(arg0);
    LeafTarget_c9af30(arg0);
}

extern "C" uint64_t RecoveredCall_c9ee10_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_c9ee10_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_c9ee10_2(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_c9ee10_3(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_c9ee10_4(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c9ee10(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_c9ee10_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_c9ee10_1((arg0 + 144),arg1,arg2);
    const uint64_t result2 = RecoveredCall_c9ee10_2((arg0 + 184),arg1,arg2);
    const uint64_t result3 = RecoveredCall_c9ee10_3((arg0 + 224),arg1,arg2);
    const uint64_t result4 = RecoveredCall_c9ee10_4((arg0 + 272),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 296),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result5)) << 0));
    return result5;
}

extern "C" uint64_t RecoveredCall_c9fa80_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_c9fa80(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_c9fa80_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 140),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 144),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 148),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    return result3;
}

extern "C" uint64_t RecoveredCall_ca7c80_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_ca7c80_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ca7c80(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_ca7c80_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_ca7c80_1((arg0 + 80),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 88),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    return result2;
}

extern "C" uint64_t RecoveredCall_cbf880_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cbf880(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_cbf880_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 76),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 80),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 84),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 88),uint32_t(1));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result4)) << 0));
    return result4;
}

extern "C" uint64_t RecoveredCall_cc8ab0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cc8ab0_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cc8ab0_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cc8ab0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_cc8ab0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_cc8ab0_1((arg0 + 80),arg1,arg2);
    *reinterpret_cast<uint64_t*>((arg0 + 128)) = arg0;
    const uint64_t result2 = RecoveredCall_cc8ab0_2(arg1,arg2,(arg0 + 120));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 144),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    return result3;
}

extern "C" uint64_t RecoveredCall_cc97a0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cc97a0_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cc97a0_2(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cc97a0_3(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_cc97a0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cc97a0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_cc97a0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_cc97a0_1((arg0 + 80),arg1,arg2);
    const uint64_t result2 = RecoveredCall_cc97a0_2((arg0 + 88),arg1,arg2);
    const uint64_t result3 = RecoveredCall_cc97a0_3((arg0 + 96),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 104),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result4)) << 0));
    LeafTarget_cc97a0(arg1,(arg0 + 112));
}

extern "C" unsigned char LeafData_cca790_0[];
extern "C" uint64_t RecoveredCall_cca790_0(uint64_t);
extern "C" void LeafTarget_cca790(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cca790(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_cca790_0) - 1416) + 1416);
    const uint64_t result0 = RecoveredCall_cca790_0((arg0 + 80));
    LeafTarget_cca790(arg0);
}

extern "C" unsigned char LeafData_cca7c0_0[];
extern "C" uint64_t RecoveredCall_cca7c0_0(uint64_t);
extern "C" uint64_t RecoveredCall_cca7c0_1(uint64_t);
extern "C" void LeafTarget_cca7c0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cca7c0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_cca7c0_0) - 1416) + 1416);
    const uint64_t result0 = RecoveredCall_cca7c0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_cca7c0_1(arg0);
    LeafTarget_cca7c0(arg0);
}

extern "C" unsigned char LeafData_ccac80_0[];
extern "C" uint64_t RecoveredCall_ccac80_0(uint64_t);
extern "C" void LeafTarget_ccac80(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ccac80(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_ccac80_0) - 2016) + 2016);
    const uint64_t result0 = RecoveredCall_ccac80_0((arg0 + 80));
    LeafTarget_ccac80(arg0);
}

extern "C" unsigned char LeafData_ccacb0_0[];
extern "C" uint64_t RecoveredCall_ccacb0_0(uint64_t);
extern "C" uint64_t RecoveredCall_ccacb0_1(uint64_t);
extern "C" void LeafTarget_ccacb0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ccacb0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_ccacb0_0) - 2016) + 2016);
    const uint64_t result0 = RecoveredCall_ccacb0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_ccacb0_1(arg0);
    LeafTarget_ccacb0(arg0);
}

extern "C" unsigned char LeafData_ccbda0_0[];
extern "C" uint64_t RecoveredCall_ccbda0_0(uint64_t);
extern "C" void LeafTarget_ccbda0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ccbda0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_ccbda0_0) - 2384) + 2384);
    const uint64_t result0 = RecoveredCall_ccbda0_0((arg0 + 80));
    LeafTarget_ccbda0(arg0);
}

extern "C" unsigned char LeafData_ccbdd0_0[];
extern "C" uint64_t RecoveredCall_ccbdd0_0(uint64_t);
extern "C" uint64_t RecoveredCall_ccbdd0_1(uint64_t);
extern "C" void LeafTarget_ccbdd0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_ccbdd0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_ccbdd0_0) - 2384) + 2384);
    const uint64_t result0 = RecoveredCall_ccbdd0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_ccbdd0_1(arg0);
    LeafTarget_ccbdd0(arg0);
}

extern "C" uint64_t RecoveredCall_cccc10_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cccc10_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cccc10_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cccc10(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_cccc10_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_cccc10_1((arg0 + 80),arg1,arg2);
    const uint64_t result2 = RecoveredCall_cccc10_2((arg0 + 104),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 112),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 116),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 120),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 124),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 128),uint32_t(1));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result7)) << 0));
    return result7;
}

extern "C" uint64_t RecoveredCall_ccd570_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_ccd570_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_ccd570_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ccd570(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_ccd570_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_ccd570_1((arg0 + 80),arg1,arg2);
    const uint64_t result2 = RecoveredCall_ccd570_2((arg0 + 104),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 124),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 128),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 132),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 136),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result6)) << 0));
    return result6;
}

extern "C" uint64_t RecoveredCall_ccddb0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_ccddb0_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_ccddb0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_ccddb0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_ccddb0_1((arg0 + 80),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 108),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 112),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 116),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result4)) << 0));
    return result4;
}

extern "C" uint64_t RecoveredCall_cceca0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cceca0_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cceca0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_cceca0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_cceca0_1((arg0 + 80),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 88),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    return result2;
}

extern "C" uint64_t RecoveredCall_cd0190_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cd0190_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cd0190_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cd0190(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_cd0190_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_cd0190_1((arg0 + 80),arg1,arg2);
    *reinterpret_cast<uint64_t*>((arg0 + 96)) = arg0;
    const uint64_t result2 = RecoveredCall_cd0190_2(arg1,arg2,(arg0 + 88));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 112),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 116),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result4)) << 0));
    return result4;
}

extern "C" unsigned char LeafData_cd0ac0_0[];
extern "C" uint64_t RecoveredCall_cd0ac0_0(uint64_t);
extern "C" void LeafTarget_cd0ac0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cd0ac0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_cd0ac0_0) - 416) + 416);
    const uint64_t result0 = RecoveredCall_cd0ac0_0((arg0 + 80));
    LeafTarget_cd0ac0(arg0);
}

extern "C" unsigned char LeafData_cd0af0_0[];
extern "C" uint64_t RecoveredCall_cd0af0_0(uint64_t);
extern "C" uint64_t RecoveredCall_cd0af0_1(uint64_t);
extern "C" void LeafTarget_cd0af0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cd0af0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_cd0af0_0) - 416) + 416);
    const uint64_t result0 = RecoveredCall_cd0af0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_cd0af0_1(arg0);
    LeafTarget_cd0af0(arg0);
}

extern "C" unsigned char LeafData_cd0ea0_0[];
extern "C" uint64_t RecoveredCall_cd0ea0_0(uint64_t);
extern "C" uint64_t RecoveredCall_cd0ea0_1(uint64_t);
extern "C" void LeafTarget_cd0ea0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cd0ea0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_cd0ea0_0) - 416) + 416);
    const uint64_t result0 = RecoveredCall_cd0ea0_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_cd0ea0_1(arg0);
    LeafTarget_cd0ea0(arg0);
}

extern "C" unsigned char LeafData_cd0f10_0[];
extern "C" uint64_t RecoveredCall_cd0f10_0(uint64_t);
extern "C" uint64_t RecoveredCall_cd0f10_1(uint64_t);
extern "C" void LeafTarget_cd0f10(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cd0f10(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_cd0f10_0) - 416) + 416);
    const uint64_t result0 = RecoveredCall_cd0f10_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_cd0f10_1(arg0);
    LeafTarget_cd0f10(arg0);
}

extern "C" uint64_t RecoveredCall_cd0f40_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cd0f40_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cd0f40_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cd0f40(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_cd0f40_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_cd0f40_1((arg0 + 80),arg1,arg2);
    const uint64_t result2 = RecoveredCall_cd0f40_2((arg0 + 88),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 96),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    return result3;
}

extern "C" uint64_t RecoveredCall_cd1e50_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cd1e50(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_cd1e50_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 140),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 144),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 148),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 152),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 156),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result5)) << 0));
    return result5;
}

extern "C" uint64_t RecoveredCall_cd3830_0(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_cd3830(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cd3830(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_cd3830_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 88),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    LeafTarget_cd3830((arg0 + 96),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_cd3c30_0(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_cd3c30(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cd3c30(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_cd3c30_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 88),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    LeafTarget_cd3c30((arg0 + 96),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_cd3e60_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cd3e60_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cd3e60(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_cd3e60_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 88),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t result2 = RecoveredCall_cd3e60_2((arg0 + 96),arg1,arg2);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 104),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    return result3;
}

extern "C" uint64_t RecoveredCall_cd4020_0(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_cd4020(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cd4020(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_cd4020_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 88),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    LeafTarget_cd4020((arg0 + 96),arg1,arg2);
}

extern "C" unsigned char LeafData_cd41d0_0[];
extern "C" uint64_t RecoveredCall_cd41d0_0(uint64_t);
extern "C" void LeafTarget_cd41d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cd41d0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_cd41d0_0) - 3376) + 3376);
    const uint64_t result0 = RecoveredCall_cd41d0_0((arg0 + 112));
    LeafTarget_cd41d0(arg0);
}

extern "C" unsigned char LeafData_cd4200_0[];
extern "C" uint64_t RecoveredCall_cd4200_0(uint64_t);
extern "C" uint64_t RecoveredCall_cd4200_1(uint64_t);
extern "C" void LeafTarget_cd4200(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cd4200(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_cd4200_0) - 3376) + 3376);
    const uint64_t result0 = RecoveredCall_cd4200_0((arg0 + 112));
    const uint64_t result1 = RecoveredCall_cd4200_1(arg0);
    LeafTarget_cd4200(arg0);
}

extern "C" uint64_t RecoveredCall_cd4ba0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cd4ba0_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cd4ba0_2(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cd4ba0_3(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cd4ba0_5(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_cd4ba0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cd4ba0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_cd4ba0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_cd4ba0_1((arg0 + 80),arg1,arg2);
    const uint64_t result2 = RecoveredCall_cd4ba0_2((arg0 + 88),arg1,arg2);
    const uint64_t result3 = RecoveredCall_cd4ba0_3((arg0 + 96),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 104),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t result5 = RecoveredCall_cd4ba0_5((arg0 + 112),arg1,arg2);
    LeafTarget_cd4ba0((arg0 + 120),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_cd4de0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cd4de0_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cd4de0_2(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cd4de0_3(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cd4de0_5(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cd4de0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_cd4de0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_cd4de0_1((arg0 + 80),arg1,arg2);
    const uint64_t result2 = RecoveredCall_cd4de0_2((arg0 + 88),arg1,arg2);
    const uint64_t result3 = RecoveredCall_cd4de0_3((arg0 + 96),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 104),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t result5 = RecoveredCall_cd4de0_5((arg0 + 112),arg1,arg2);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 120),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 124),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 128),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result8)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 132),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result9)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 136),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result10)) << 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 0));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field25 + 48));
    const uint64_t result11 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field26)(field24,(arg0 + 140),uint32_t(4));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field27 + (uint32_t(uint32_t(result11)) << 0));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 0));
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>((field29 + 48));
    const uint64_t result12 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field30)(field28,(arg0 + 144),uint32_t(4));
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field31 + (uint32_t(uint32_t(result12)) << 0));
    return result12;
}

extern "C" uint64_t RecoveredCall_cd5740_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cd5740_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cd5740_2(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cd5740_3(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_cd5740(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cd5740(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_cd5740_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_cd5740_1((arg0 + 80),arg1,arg2);
    const uint64_t result2 = RecoveredCall_cd5740_2((arg0 + 88),arg1,arg2);
    const uint64_t result3 = RecoveredCall_cd5740_3((arg0 + 96),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 104),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result4)) << 0));
    LeafTarget_cd5740((arg0 + 112),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_cd57f0_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cd57f0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_cd57f0_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 136),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    return result1;
}

extern "C" uint64_t RecoveredCall_cd6140_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cd6140_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cd6140_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cd6140(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_cd6140_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_cd6140_1((arg0 + 80),arg1,arg2);
    const uint64_t result2 = RecoveredCall_cd6140_2((arg0 + 88),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 96),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 100),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 104),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 108),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 112),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result7)) << 0));
    return result7;
}

extern "C" uint64_t RecoveredCall_cd6c50_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cd6c50_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cd6c50_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cd6c50(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_cd6c50_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_cd6c50_1((arg0 + 80),arg1,arg2);
    const uint64_t result2 = RecoveredCall_cd6c50_2((arg0 + 88),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 96),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 100),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 104),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 108),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result6)) << 0));
    return result6;
}

extern "C" uint64_t RecoveredCall_cd7240_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cd7240_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cd7240_2(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_cd7240(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cd7240(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_cd7240_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_cd7240_1((arg0 + 80),arg1,arg2);
    const uint64_t result2 = RecoveredCall_cd7240_2((arg0 + 88),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 96),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 100),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 104),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 108),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result6)) << 0));
    LeafTarget_cd7240((arg0 + 112),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_cd80e0_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cd80e0_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cd80e0_2(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cd80e0_3(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cd80e0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_cd80e0_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_cd80e0_1((arg0 + 80),arg1,arg2);
    const uint64_t result2 = RecoveredCall_cd80e0_2((arg0 + 88),arg1,arg2);
    const uint64_t result3 = RecoveredCall_cd80e0_3((arg0 + 96),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 104),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 108),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 112),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 116),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result7)) << 0));
    return result7;
}

extern "C" unsigned char LeafData_cda530_0[];
extern "C" uint64_t RecoveredCall_cda530_0(uint64_t);
extern "C" void LeafTarget_cda530(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cda530(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_cda530_0) - 2496) + 2496);
    const uint64_t result0 = RecoveredCall_cda530_0((arg0 + 80));
    LeafTarget_cda530(arg0);
}

extern "C" unsigned char LeafData_cda560_0[];
extern "C" uint64_t RecoveredCall_cda560_0(uint64_t);
extern "C" uint64_t RecoveredCall_cda560_1(uint64_t);
extern "C" void LeafTarget_cda560(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cda560(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_cda560_0) - 2496) + 2496);
    const uint64_t result0 = RecoveredCall_cda560_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_cda560_1(arg0);
    LeafTarget_cda560(arg0);
}

extern "C" uint64_t RecoveredCall_cda590_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cda590_2(uint64_t,uint64_t,uint64_t);
extern "C" void LeafTarget_cda590(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cda590(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_cda590_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 74),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    const uint64_t result2 = RecoveredCall_cda590_2((arg0 + 80),arg1,arg2);
    LeafTarget_cda590((arg0 + 88),arg1,arg2);
}

extern "C" uint64_t RecoveredCall_cdc870_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cdc870_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cdc870(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_cdc870_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_cdc870_1((arg0 + 168),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 196),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 200),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 204),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 208),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 212),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 216),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result7)) << 0));
    return result7;
}

extern "C" unsigned char LeafData_cdedc0_0[];
extern "C" uint64_t RecoveredCall_cdedc0_0(uint64_t);
extern "C" void LeafTarget_cdedc0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cdedc0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_cdedc0_0) - 296) + 296);
    const uint64_t result0 = RecoveredCall_cdedc0_0((arg0 + 136));
    LeafTarget_cdedc0(arg0);
}

extern "C" unsigned char LeafData_cdedf0_0[];
extern "C" uint64_t RecoveredCall_cdedf0_0(uint64_t);
extern "C" uint64_t RecoveredCall_cdedf0_1(uint64_t);
extern "C" void LeafTarget_cdedf0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cdedf0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_cdedf0_0) - 296) + 296);
    const uint64_t result0 = RecoveredCall_cdedf0_0((arg0 + 136));
    const uint64_t result1 = RecoveredCall_cdedf0_1(arg0);
    LeafTarget_cdedf0(arg0);
}

extern "C" uint64_t RecoveredCall_cdee20_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cdee20_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cdee20_2(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cdee20(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_cdee20_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_cdee20_1((arg0 + 136),arg1,arg2);
    const uint64_t result2 = RecoveredCall_cdee20_2((arg0 + 144),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 152),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 156),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 160),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result5)) << 0));
    return result5;
}

extern "C" unsigned char LeafData_cdfc10_0[];
extern "C" uint64_t RecoveredCall_cdfc10_0(uint64_t);
extern "C" void LeafTarget_cdfc10(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cdfc10(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_cdfc10_0) - 664) + 664);
    const uint64_t result0 = RecoveredCall_cdfc10_0((arg0 + 80));
    LeafTarget_cdfc10(arg0);
}

extern "C" unsigned char LeafData_cdfc40_0[];
extern "C" uint64_t RecoveredCall_cdfc40_0(uint64_t);
extern "C" uint64_t RecoveredCall_cdfc40_1(uint64_t);
extern "C" void LeafTarget_cdfc40(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cdfc40(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_cdfc40_0) - 664) + 664);
    const uint64_t result0 = RecoveredCall_cdfc40_0((arg0 + 80));
    const uint64_t result1 = RecoveredCall_cdfc40_1(arg0);
    LeafTarget_cdfc40(arg0);
}

extern "C" uint64_t RecoveredCall_cef820_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cef820_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cef820(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_cef820_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_cef820_1((arg0 + 160),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 216),uint32_t(1));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 217),uint32_t(1));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 218),uint32_t(1));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 220),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 224),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 228),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 0));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field25 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field26)(field24,(arg0 + 232),uint32_t(4));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field27 + (uint32_t(uint32_t(result8)) << 0));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 0));
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>((field29 + 48));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field30)(field28,(arg0 + 236),uint32_t(4));
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field32 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field31 + (uint32_t(uint32_t(result9)) << 0));
    const uint64_t field33 = *reinterpret_cast<const uint64_t*>((field32 + 0));
    const uint64_t field34 = *reinterpret_cast<const uint64_t*>((field33 + 48));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field34)(field32,(arg0 + 240),uint32_t(4));
    const uint64_t field35 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field36 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field35 + (uint32_t(uint32_t(result10)) << 0));
    const uint64_t field37 = *reinterpret_cast<const uint64_t*>((field36 + 0));
    const uint64_t field38 = *reinterpret_cast<const uint64_t*>((field37 + 48));
    const uint64_t result11 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field38)(field36,(arg0 + 244),uint32_t(4));
    const uint64_t field39 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field39 + (uint32_t(uint32_t(result11)) << 0));
    return result11;
}

extern "C" uint64_t RecoveredCall_cf0610_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cf0610_1(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cf0610(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_cf0610_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_cf0610_1((arg0 + 160),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 200),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 204),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 208),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 212),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 216),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 220),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 0));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field25 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field26)(field24,(arg0 + 224),uint32_t(4));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field27 + (uint32_t(uint32_t(result8)) << 0));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 0));
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>((field29 + 48));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field30)(field28,(arg0 + 232),uint32_t(1));
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field31 + (uint32_t(uint32_t(result9)) << 0));
    return result9;
}

extern "C" unsigned char LeafData_cf0ce0_0[];
extern "C" uint64_t RecoveredCall_cf0ce0_0(uint64_t);
extern "C" void LeafTarget_cf0ce0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cf0ce0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_cf0ce0_0) - 1952) + 1952);
    const uint64_t result0 = RecoveredCall_cf0ce0_0((arg0 + 160));
    LeafTarget_cf0ce0(arg0);
}

extern "C" unsigned char LeafData_cf0d10_0[];
extern "C" uint64_t RecoveredCall_cf0d10_0(uint64_t);
extern "C" uint64_t RecoveredCall_cf0d10_1(uint64_t);
extern "C" void LeafTarget_cf0d10(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cf0d10(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_cf0d10_0) - 1952) + 1952);
    const uint64_t result0 = RecoveredCall_cf0d10_0((arg0 + 160));
    const uint64_t result1 = RecoveredCall_cf0d10_1(arg0);
    LeafTarget_cf0d10(arg0);
}

extern "C" unsigned char LeafData_cf1220_0[];
extern "C" uint64_t RecoveredCall_cf1220_0(uint64_t);
extern "C" uint64_t RecoveredCall_cf1220_1(uint64_t);
extern "C" void LeafTarget_cf1220(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cf1220(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_cf1220_0) - 1952) + 1952);
    const uint64_t result0 = RecoveredCall_cf1220_0((arg0 + 160));
    const uint64_t result1 = RecoveredCall_cf1220_1(arg0);
    LeafTarget_cf1220(arg0);
}

extern "C" uint64_t RecoveredCall_cf1890_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cf1890_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_cf1890_12(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cf1890(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_cf1890_0(arg0,arg1,arg2);
    const uint64_t result1 = RecoveredCall_cf1890_1((arg0 + 160),arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 168),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result2)) << 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,(arg0 + 172),uint32_t(4));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field7 + (uint32_t(uint32_t(result3)) << 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 48));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,(arg0 + 176),uint32_t(4));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field11 + (uint32_t(uint32_t(result4)) << 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 48));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field14)(field12,(arg0 + 180),uint32_t(4));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field15 + (uint32_t(uint32_t(result5)) << 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 48));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field18)(field16,(arg0 + 184),uint32_t(4));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field19 + (uint32_t(uint32_t(result6)) << 0));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 48));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field22)(field20,(arg0 + 188),uint32_t(4));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field23 + (uint32_t(uint32_t(result7)) << 0));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 0));
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((field25 + 48));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field26)(field24,(arg0 + 192),uint32_t(4));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field27 + (uint32_t(uint32_t(result8)) << 0));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 0));
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>((field29 + 48));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field30)(field28,(arg0 + 196),uint32_t(4));
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field32 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field31 + (uint32_t(uint32_t(result9)) << 0));
    const uint64_t field33 = *reinterpret_cast<const uint64_t*>((field32 + 0));
    const uint64_t field34 = *reinterpret_cast<const uint64_t*>((field33 + 48));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field34)(field32,(arg0 + 200),uint32_t(4));
    const uint64_t field35 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field36 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field35 + (uint32_t(uint32_t(result10)) << 0));
    const uint64_t field37 = *reinterpret_cast<const uint64_t*>((field36 + 0));
    const uint64_t field38 = *reinterpret_cast<const uint64_t*>((field37 + 48));
    const uint64_t result11 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field38)(field36,(arg0 + 216),uint32_t(4));
    const uint64_t field39 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field39 + (uint32_t(uint32_t(result11)) << 0));
    const uint64_t result12 = RecoveredCall_cf1890_12(arg1,(arg0 + 224));
    const uint64_t field40 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field41 = *reinterpret_cast<const uint64_t*>((field40 + 0));
    const uint64_t field42 = *reinterpret_cast<const uint64_t*>((field41 + 48));
    const uint64_t result13 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field42)(field40,(arg0 + 232),uint32_t(1));
    const uint64_t field43 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field44 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field43 + (uint32_t(uint32_t(result13)) << 0));
    const uint64_t field45 = *reinterpret_cast<const uint64_t*>((field44 + 0));
    const uint64_t field46 = *reinterpret_cast<const uint64_t*>((field45 + 48));
    const uint64_t result14 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field46)(field44,(arg0 + 233),uint32_t(1));
    const uint64_t field47 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field48 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field47 + (uint32_t(uint32_t(result14)) << 0));
    const uint64_t field49 = *reinterpret_cast<const uint64_t*>((field48 + 0));
    const uint64_t field50 = *reinterpret_cast<const uint64_t*>((field49 + 48));
    const uint64_t result15 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field50)(field48,(arg0 + 234),uint32_t(1));
    const uint64_t field51 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field51 + (uint32_t(uint32_t(result15)) << 0));
    return result15;
}

extern "C" uint64_t RecoveredCall_cf2120_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cf2120(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_cf2120_0(arg0,arg1,arg2);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field2)(field0,(arg0 + 156),uint32_t(4));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = (field3 + (uint32_t(uint32_t(result1)) << 0));
    return result1;
}

extern "C" unsigned char LeafData_cfc780_0[];
extern "C" void LeafTarget_cfc780(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cfc780(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_cfc780_0) - 1032) + 1032);
    LeafTarget_cfc780((arg0 + 40));
}

extern "C" unsigned char LeafData_cfc790_0[];
extern "C" uint64_t RecoveredCall_cfc790_0(uint64_t);
extern "C" void LeafTarget_cfc790(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cfc790(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_cfc790_0) - 1032) + 1032);
    const uint64_t result0 = RecoveredCall_cfc790_0((arg0 + 40));
    LeafTarget_cfc790(arg0);
}

extern "C" unsigned char LeafData_cfec00_0[];
extern "C" void LeafTarget_cfec00(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cfec00(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_cfec00_0) - 1032) + 1032);
    LeafTarget_cfec00((arg0 + 40));
}

extern "C" unsigned char LeafData_cfec20_0[];
extern "C" void LeafTarget_cfec20(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cfec20(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_cfec20_0) - 1032) + 1032);
    LeafTarget_cfec20((arg0 + 40));
}

extern "C" unsigned char LeafData_cfec30_0[];
extern "C" uint64_t RecoveredCall_cfec30_0(uint64_t);
extern "C" void LeafTarget_cfec30(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_cfec30(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_cfec30_0) - 1032) + 1032);
    const uint64_t result0 = RecoveredCall_cfec30_0((arg0 + 40));
    LeafTarget_cfec30(arg0);
}

extern "C" unsigned char LeafData_d03150_0[];
extern "C" void LeafTarget_d03150(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d03150(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d03150_0) - 1032) + 1032);
    LeafTarget_d03150((arg0 + 40));
}

extern "C" unsigned char LeafData_d03160_0[];
extern "C" uint64_t RecoveredCall_d03160_0(uint64_t);
extern "C" void LeafTarget_d03160(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d03160(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d03160_0) - 1032) + 1032);
    const uint64_t result0 = RecoveredCall_d03160_0((arg0 + 40));
    LeafTarget_d03160(arg0);
}

extern "C" unsigned char LeafData_d03300_0[];
extern "C" void LeafTarget_d03300(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d03300(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d03300_0) - 1032) + 1032);
    LeafTarget_d03300((arg0 + 40));
}

extern "C" unsigned char LeafData_d03310_0[];
extern "C" uint64_t RecoveredCall_d03310_0(uint64_t);
extern "C" void LeafTarget_d03310(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d03310(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d03310_0) - 1032) + 1032);
    const uint64_t result0 = RecoveredCall_d03310_0((arg0 + 40));
    LeafTarget_d03310(arg0);
}

extern "C" unsigned char LeafData_d04670_0[];
extern "C" void LeafTarget_d04670(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d04670(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d04670_0) - 1032) + 1032);
    LeafTarget_d04670((arg0 + 40));
}

extern "C" unsigned char LeafData_d04680_0[];
extern "C" uint64_t RecoveredCall_d04680_0(uint64_t);
extern "C" void LeafTarget_d04680(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d04680(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d04680_0) - 1032) + 1032);
    const uint64_t result0 = RecoveredCall_d04680_0((arg0 + 40));
    LeafTarget_d04680(arg0);
}

extern "C" unsigned char LeafData_d046b0_0[];
extern "C" void LeafTarget_d046b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d046b0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d046b0_0) - 1032) + 1032);
    LeafTarget_d046b0((arg0 + 40));
}

extern "C" unsigned char LeafData_d046c0_0[];
extern "C" uint64_t RecoveredCall_d046c0_0(uint64_t);
extern "C" void LeafTarget_d046c0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d046c0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d046c0_0) - 1032) + 1032);
    const uint64_t result0 = RecoveredCall_d046c0_0((arg0 + 40));
    LeafTarget_d046c0(arg0);
}

extern "C" unsigned char LeafData_d082e0_0[];
extern "C" void LeafTarget_d082e0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d082e0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d082e0_0) - 1032) + 1032);
    LeafTarget_d082e0((arg0 + 40));
}

extern "C" unsigned char LeafData_d082f0_0[];
extern "C" uint64_t RecoveredCall_d082f0_0(uint64_t);
extern "C" void LeafTarget_d082f0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d082f0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d082f0_0) - 1032) + 1032);
    const uint64_t result0 = RecoveredCall_d082f0_0((arg0 + 40));
    LeafTarget_d082f0(arg0);
}

extern "C" unsigned char LeafData_d08d10_0[];
extern "C" void LeafTarget_d08d10(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d08d10(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d08d10_0) - 1032) + 1032);
    LeafTarget_d08d10((arg0 + 40));
}

extern "C" unsigned char LeafData_d08d20_0[];
extern "C" uint64_t RecoveredCall_d08d20_0(uint64_t);
extern "C" void LeafTarget_d08d20(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d08d20(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d08d20_0) - 1032) + 1032);
    const uint64_t result0 = RecoveredCall_d08d20_0((arg0 + 40));
    LeafTarget_d08d20(arg0);
}

extern "C" unsigned char LeafData_d0a490_0[];
extern "C" void LeafTarget_d0a490(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d0a490(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d0a490_0) - 1032) + 1032);
    LeafTarget_d0a490((arg0 + 40));
}

extern "C" unsigned char LeafData_d0a4a0_0[];
extern "C" uint64_t RecoveredCall_d0a4a0_0(uint64_t);
extern "C" void LeafTarget_d0a4a0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d0a4a0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d0a4a0_0) - 1032) + 1032);
    const uint64_t result0 = RecoveredCall_d0a4a0_0((arg0 + 40));
    LeafTarget_d0a4a0(arg0);
}

extern "C" unsigned char LeafData_d0a710_0[];
extern "C" void LeafTarget_d0a710(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d0a710(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d0a710_0) - 1032) + 1032);
    LeafTarget_d0a710((arg0 + 40));
}

extern "C" unsigned char LeafData_d0a720_0[];
extern "C" uint64_t RecoveredCall_d0a720_0(uint64_t);
extern "C" void LeafTarget_d0a720(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d0a720(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d0a720_0) - 1032) + 1032);
    const uint64_t result0 = RecoveredCall_d0a720_0((arg0 + 40));
    LeafTarget_d0a720(arg0);
}

extern "C" unsigned char LeafData_d0c3b0_0[];
extern "C" void LeafTarget_d0c3b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d0c3b0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d0c3b0_0) - 1032) + 1032);
    LeafTarget_d0c3b0((arg0 + 40));
}

extern "C" unsigned char LeafData_d0c3c0_0[];
extern "C" uint64_t RecoveredCall_d0c3c0_0(uint64_t);
extern "C" void LeafTarget_d0c3c0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d0c3c0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d0c3c0_0) - 1032) + 1032);
    const uint64_t result0 = RecoveredCall_d0c3c0_0((arg0 + 40));
    LeafTarget_d0c3c0(arg0);
}

extern "C" unsigned char LeafData_d0c3f0_0[];
extern "C" void LeafTarget_d0c3f0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d0c3f0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d0c3f0_0) - 1032) + 1032);
    LeafTarget_d0c3f0((arg0 + 40));
}

extern "C" unsigned char LeafData_d0c400_0[];
extern "C" uint64_t RecoveredCall_d0c400_0(uint64_t);
extern "C" void LeafTarget_d0c400(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d0c400(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d0c400_0) - 1032) + 1032);
    const uint64_t result0 = RecoveredCall_d0c400_0((arg0 + 40));
    LeafTarget_d0c400(arg0);
}

extern "C" unsigned char LeafData_d0da20_0[];
extern "C" void LeafTarget_d0da20(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d0da20(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d0da20_0) - 1032) + 1032);
    LeafTarget_d0da20((arg0 + 40));
}

extern "C" unsigned char LeafData_d0da30_0[];
extern "C" uint64_t RecoveredCall_d0da30_0(uint64_t);
extern "C" void LeafTarget_d0da30(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d0da30(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d0da30_0) - 1032) + 1032);
    const uint64_t result0 = RecoveredCall_d0da30_0((arg0 + 40));
    LeafTarget_d0da30(arg0);
}

extern "C" unsigned char LeafData_d0e180_0[];
extern "C" void LeafTarget_d0e180(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d0e180(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d0e180_0) - 1032) + 1032);
    LeafTarget_d0e180((arg0 + 40));
}

extern "C" unsigned char LeafData_d0e190_0[];
extern "C" uint64_t RecoveredCall_d0e190_0(uint64_t);
extern "C" void LeafTarget_d0e190(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d0e190(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d0e190_0) - 1032) + 1032);
    const uint64_t result0 = RecoveredCall_d0e190_0((arg0 + 40));
    LeafTarget_d0e190(arg0);
}

extern "C" unsigned char LeafData_d0f770_0[];
extern "C" void LeafTarget_d0f770(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d0f770(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d0f770_0) - 1032) + 1032);
    LeafTarget_d0f770((arg0 + 40));
}

extern "C" unsigned char LeafData_d0f780_0[];
extern "C" uint64_t RecoveredCall_d0f780_0(uint64_t);
extern "C" void LeafTarget_d0f780(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d0f780(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d0f780_0) - 1032) + 1032);
    const uint64_t result0 = RecoveredCall_d0f780_0((arg0 + 40));
    LeafTarget_d0f780(arg0);
}

extern "C" unsigned char LeafData_d0f7b0_0[];
extern "C" void LeafTarget_d0f7b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d0f7b0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d0f7b0_0) - 1032) + 1032);
    LeafTarget_d0f7b0((arg0 + 40));
}

extern "C" unsigned char LeafData_d0f7c0_0[];
extern "C" uint64_t RecoveredCall_d0f7c0_0(uint64_t);
extern "C" void LeafTarget_d0f7c0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d0f7c0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d0f7c0_0) - 1032) + 1032);
    const uint64_t result0 = RecoveredCall_d0f7c0_0((arg0 + 40));
    LeafTarget_d0f7c0(arg0);
}

extern "C" unsigned char LeafData_d0fe40_0[];
extern "C" void LeafTarget_d0fe40(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d0fe40(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d0fe40_0) - 1032) + 1032);
    LeafTarget_d0fe40((arg0 + 40));
}

extern "C" unsigned char LeafData_d0fe50_0[];
extern "C" uint64_t RecoveredCall_d0fe50_0(uint64_t);
extern "C" void LeafTarget_d0fe50(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d0fe50(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d0fe50_0) - 1032) + 1032);
    const uint64_t result0 = RecoveredCall_d0fe50_0((arg0 + 40));
    LeafTarget_d0fe50(arg0);
}

extern "C" unsigned char LeafData_d11400_0[];
extern "C" void LeafTarget_d11400(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d11400(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d11400_0) - 1032) + 1032);
    LeafTarget_d11400((arg0 + 40));
}

extern "C" unsigned char LeafData_d11410_0[];
extern "C" uint64_t RecoveredCall_d11410_0(uint64_t);
extern "C" void LeafTarget_d11410(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d11410(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d11410_0) - 1032) + 1032);
    const uint64_t result0 = RecoveredCall_d11410_0((arg0 + 40));
    LeafTarget_d11410(arg0);
}

extern "C" unsigned char LeafData_d11440_0[];
extern "C" void LeafTarget_d11440(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d11440(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d11440_0) - 1032) + 1032);
    LeafTarget_d11440((arg0 + 40));
}

extern "C" unsigned char LeafData_d11450_0[];
extern "C" uint64_t RecoveredCall_d11450_0(uint64_t);
extern "C" void LeafTarget_d11450(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d11450(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d11450_0) - 1032) + 1032);
    const uint64_t result0 = RecoveredCall_d11450_0((arg0 + 40));
    LeafTarget_d11450(arg0);
}

extern "C" unsigned char LeafData_d46860_0[];
extern "C" uint64_t RecoveredCall_d46860_0(uint64_t);
extern "C" void LeafTarget_d46860(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d46860(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d46860_0) - 880) + 880);
    const uint64_t result0 = RecoveredCall_d46860_0((arg0 + 96));
    LeafTarget_d46860(arg0);
}

extern "C" unsigned char LeafData_d46890_0[];
extern "C" uint64_t RecoveredCall_d46890_0(uint64_t);
extern "C" uint64_t RecoveredCall_d46890_1(uint64_t);
extern "C" void LeafTarget_d46890(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d46890(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d46890_0) - 880) + 880);
    const uint64_t result0 = RecoveredCall_d46890_0((arg0 + 96));
    const uint64_t result1 = RecoveredCall_d46890_1(arg0);
    LeafTarget_d46890(arg0);
}

extern "C" unsigned char LeafData_d6a890_0[];
extern "C" void LeafTarget_d6a890(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d6a890(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d6a890_0) - 3248) + 3248);
    LeafTarget_d6a890((arg0 + 40));
}

extern "C" unsigned char LeafData_d6a8a0_0[];
extern "C" uint64_t RecoveredCall_d6a8a0_0(uint64_t);
extern "C" void LeafTarget_d6a8a0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d6a8a0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d6a8a0_0) - 3248) + 3248);
    const uint64_t result0 = RecoveredCall_d6a8a0_0((arg0 + 40));
    LeafTarget_d6a8a0(arg0);
}

extern "C" unsigned char LeafData_d6a910_0[];
extern "C" void LeafTarget_d6a910(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d6a910(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d6a910_0) - 2640) + 2640);
    LeafTarget_d6a910((arg0 + 8));
}

extern "C" unsigned char LeafData_d6d790_0[];
extern "C" uint64_t RecoveredCall_d6d790_0(uint64_t);
extern "C" void LeafTarget_d6d790(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d6d790(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d6d790_0) - 3248) + 3248);
    const uint64_t result0 = RecoveredCall_d6d790_0((arg0 + 40));
    LeafTarget_d6d790(arg0);
}

extern "C" uint64_t RecoveredCall_d70810_0(uint64_t);
extern "C" unsigned char LeafData_d70810_3[];
extern "C" void LeafTarget_d70810(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d70810(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_d70810_0((arg0 + 56));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d70810_3) - 3248) + 3248);
    LeafTarget_d70810((arg0 + 40));
}

extern "C" uint64_t RecoveredCall_d70840_0(uint64_t);
extern "C" unsigned char LeafData_d70840_3[];
extern "C" uint64_t RecoveredCall_d70840_1(uint64_t);
extern "C" void LeafTarget_d70840(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d70840(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_d70840_0((arg0 + 56));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d70840_3) - 3248) + 3248);
    const uint64_t result1 = RecoveredCall_d70840_1((arg0 + 40));
    LeafTarget_d70840(arg0);
}

extern "C" uint64_t RecoveredCall_d708a0_0(uint64_t);
extern "C" unsigned char LeafData_d708a0_2[];
extern "C" uint64_t RecoveredCall_d708a0_1(uint64_t);
extern "C" void LeafTarget_d708a0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d708a0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_d708a0_0(arg0);
    *reinterpret_cast<uint64_t*>((arg0 + -56)) = ((reinterpret_cast<uintptr_t>(LeafData_d708a0_2) - 3248) + 3248);
    const uint64_t result1 = RecoveredCall_d708a0_1(((arg0 + -56) + 40));
    LeafTarget_d708a0((arg0 + -56));
}

extern "C" unsigned char LeafData_d729b0_0[];
extern "C" void LeafTarget_d729b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d729b0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d729b0_0) - 3248) + 3248);
    LeafTarget_d729b0((arg0 + 40));
}

extern "C" unsigned char LeafData_d73a90_0[];
extern "C" void LeafTarget_d73a90(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d73a90(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d73a90_0) - 3248) + 3248);
    LeafTarget_d73a90((arg0 + 40));
}

extern "C" unsigned char LeafData_d74f10_0[];
extern "C" uint64_t RecoveredCall_d74f10_0(uint64_t);
extern "C" void LeafTarget_d74f10(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d74f10(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d74f10_0) - 3248) + 3248);
    const uint64_t result0 = RecoveredCall_d74f10_0((arg0 + 40));
    LeafTarget_d74f10(arg0);
}

extern "C" unsigned char LeafData_d76240_0[];
extern "C" void LeafTarget_d76240(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d76240(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d76240_0) - 3248) + 3248);
    LeafTarget_d76240((arg0 + 40));
}

extern "C" unsigned char LeafData_d76250_0[];
extern "C" uint64_t RecoveredCall_d76250_0(uint64_t);
extern "C" void LeafTarget_d76250(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d76250(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d76250_0) - 3248) + 3248);
    const uint64_t result0 = RecoveredCall_d76250_0((arg0 + 40));
    LeafTarget_d76250(arg0);
}

extern "C" unsigned char LeafData_d7af40_0[];
extern "C" void LeafTarget_d7af40(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d7af40(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d7af40_0) - 2512) + 2512);
    LeafTarget_d7af40((arg0 + 16));
}

extern "C" unsigned char LeafData_d7afb0_0[];
extern "C" uint64_t RecoveredCall_d7afb0_0(uint64_t);
extern "C" void LeafTarget_d7afb0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d7afb0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d7afb0_0) - 2512) + 2512);
    const uint64_t result0 = RecoveredCall_d7afb0_0((arg0 + 16));
    LeafTarget_d7afb0(arg0);
}

extern "C" unsigned char LeafData_d874c0_0[];
extern "C" uint64_t RecoveredCall_d874c0_0(uint64_t);
extern "C" void LeafTarget_d874c0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d874c0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d874c0_0) - 3248) + 3248);
    const uint64_t result0 = RecoveredCall_d874c0_0((arg0 + 40));
    LeafTarget_d874c0(arg0);
}

extern "C" unsigned char LeafData_d88e50_0[];
extern "C" void LeafTarget_d88e50(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d88e50(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 376)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d88e50_0) - 3248) + 3248);
    LeafTarget_d88e50((arg0 + 40));
}

extern "C" unsigned char LeafData_d88e70_0[];
extern "C" uint64_t RecoveredCall_d88e70_0(uint64_t);
extern "C" void LeafTarget_d88e70(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d88e70(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 376)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_d88e70_0) - 3248) + 3248);
    const uint64_t result0 = RecoveredCall_d88e70_0((arg0 + 40));
    LeafTarget_d88e70(arg0);
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_db0620(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    *reinterpret_cast<uint64_t*>((arg3 + 8)) = (field0 + (uint32_t(uint32_t(arg2)) << 0));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((arg0 + 24));
    *reinterpret_cast<uint32_t*>((arg3 + 0)) = uint32_t(uint32_t(field1));
    return uint32_t(1);
}

extern "C" unsigned char LeafData_dba740_0[];
extern "C" uint64_t RecoveredCall_dba740_0(uint64_t);
extern "C" unsigned char LeafData_dba740_6[];
extern "C" uint64_t RecoveredCall_dba740_1(uint64_t);
extern "C" void LeafTarget_dba740(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_dba740(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dba740_0) - 840) + 840);
    const uint64_t result0 = RecoveredCall_dba740_0((arg0 + 96));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_dba740_6) - 1472) + 1472);
    const uint64_t result1 = RecoveredCall_dba740_1(field0);
    LeafTarget_dba740(arg0);
}


extern "C" __attribute__((noinline)) void RecoveredLeaf_ddb170(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    *reinterpret_cast<uint8_t*>(((arg0 + (int32_t(uint32_t(arg1)) << 0)) + 56)) = uint32_t(uint32_t((uint32_t(arg2) & 1)));
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_df1ee0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 0));
    if (uint32_t(uint32_t(field0)) != 15) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 632));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    *reinterpret_cast<uint64_t*>((arg0 + 736)) = field2;
    *reinterpret_cast<uint64_t*>((arg0 + 632)) = (field1 + 8);
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((arg0 + 620));
    *reinterpret_cast<uint32_t*>((arg0 + 620)) = uint32_t(uint32_t((uint32_t(uint32_t(field3)) - 8)));
    return arg0;
}

extern "C" unsigned char LeafData_eb6500_0[];
extern "C" uint64_t RecoveredCall_eb6500_0(uint64_t);
extern "C" uint64_t RecoveredCall_eb6500_1(uint64_t);
extern "C" void LeafTarget_eb6500(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_eb6500(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_eb6500_0) - 1840) + 1840);
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 240));
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint64_t result0 = RecoveredCall_eb6500_0((arg0 + 240));
    }
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((arg0 + 72));
    if (!(uint32_t(uint32_t(field1)) == 0)) {
    const uint64_t result1 = RecoveredCall_eb6500_1((arg0 + 32));
    }
    LeafTarget_eb6500(arg0);
}

extern "C" unsigned char LeafData_eb6980_0[];
extern "C" uint64_t RecoveredCall_eb6980_0(uint64_t);
extern "C" unsigned char LeafData_eb6980_6[];
extern "C" void LeafTarget_eb6980(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_eb6980(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_eb6980_0) - 2000) + 2000);
    const uint64_t result0 = RecoveredCall_eb6980_0((arg0 + 248));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 168));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_eb6980_6) - 2440) + 2440);
    LeafTarget_eb6980(field0);
}

extern "C" unsigned char LeafData_eb69b0_0[];
extern "C" uint64_t RecoveredCall_eb69b0_0(uint64_t);
extern "C" unsigned char LeafData_eb69b0_6[];
extern "C" uint64_t RecoveredCall_eb69b0_1(uint64_t);
extern "C" void LeafTarget_eb69b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_eb69b0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_eb69b0_0) - 2000) + 2000);
    const uint64_t result0 = RecoveredCall_eb69b0_0((arg0 + 248));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 168));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_eb69b0_6) - 2440) + 2440);
    const uint64_t result1 = RecoveredCall_eb69b0_1(field0);
    LeafTarget_eb69b0(arg0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_eb8ef0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 288));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t)>(field2)(arg1,field0,(arg0 + 8),uint32_t(-1),field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_eb99a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 72));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t)>(field2)(arg1,uint32_t(field0),uint32_t(1),(arg0 + 8),field2);
    return result0;
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_f358a0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    *reinterpret_cast<uint32_t*>((arg3 + 0)) = uint32_t(uint32_t((uint32_t(arg1) - (uint32_t(uint32_t((uint32_t(arg1) / uint32_t(arg2)))) * uint32_t(arg2)))));
    return uint32_t(1);
}

extern "C" uint64_t RecoveredCall_f36390_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_f36390(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 200));
    uint64_t merged2 = (field0 + 200);
    if (!(field1 == 0)) {
    *reinterpret_cast<uint64_t*>(((field0 + 200) + 0)) = 0;
    const uint64_t result0 = RecoveredCall_f36390_0((field0 + 200));
        merged2 = result0;
    }
    *reinterpret_cast<uint32_t*>((field0 + 236)) = 0;
    return merged2;
}
