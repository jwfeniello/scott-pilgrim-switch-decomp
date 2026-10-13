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


extern "C" uint64_t RecoveredCall_53c70_0(uint64_t);
extern "C" uint64_t RecoveredCall_53c70_1(uint64_t);
extern "C" uint64_t RecoveredCall_53c70_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_53c70(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>((arg2 + 0)), __ATOMIC_ACQUIRE);
    const uint64_t result0 = RecoveredCall_53c70_0((field0 + 24));
    const uint64_t field1 = __atomic_load_n(reinterpret_cast<const uint64_t*>((arg2 + 0)), __ATOMIC_ACQUIRE);
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((field1 + 316));
    const uint64_t result1 = RecoveredCall_53c70_1((field0 + 24));
    if (!(uint32_t(uint32_t(field2)) == 8)) {
    const uint64_t field3 = __atomic_load_n(reinterpret_cast<const uint64_t*>((arg2 + 0)), __ATOMIC_ACQUIRE);
    const uint64_t result2 = RecoveredCall_53c70_2((field3 + 360),arg2);
    }
    return uint32_t(1);
}



extern "C" uint64_t RecoveredCall_77d70_1(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_77d70(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 136));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    uint64_t merged3 = result0;
    if (!((uint32_t(result0) & 0x1ull) == 0)) {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((arg0 + 20));
    const uint64_t result1 = RecoveredCall_77d70_1(uint32_t(field2));
    *reinterpret_cast<uint8_t*>((arg0 + 12)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = -1;
        merged3 = result1;
    }
    *reinterpret_cast<uint32_t*>((arg0 + 8)) = 0;
    return merged3;
}



extern "C" uint64_t RecoveredCall_b1690_0(uint64_t);
extern "C" uint64_t LeafTarget_b1690(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_b1690(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>(((arg0 + 152) + 0)), __ATOMIC_ACQUIRE);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 32));
    const uint64_t result0 = RecoveredCall_b1690_0(field1);
    const uint64_t field2 = __atomic_load_n(reinterpret_cast<const uint64_t*>(((field1 + 1440) + 0)), __ATOMIC_ACQUIRE);
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((field2 + 24));
    if (uint32_t(uint32_t(field3)) != 1) return result0;
    return LeafTarget_b1690((field1 + 1432));
}



extern "C" uint64_t LeafTarget_cb0f0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_cb0f0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = 0;
    if (field0 == 0) return arg0;
    const uint64_t field1 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((field0 + 32) + 0)), 0, __ATOMIC_ACQ_REL);
    if (!(field1 == 0)) {
    const uint32_t field2 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field1 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (!(uint32_t((field2 - 1)) != 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field4)(field1);
    }
    }
    const uint64_t field5 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((field0 + 24) + 0)), 0, __ATOMIC_ACQ_REL);
    if (!(field5 == 0)) {
    const uint32_t field6 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field5 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (!(uint32_t((field6 - 1)) != 0)) {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field8)(field5);
    }
    }
    const uint64_t field9 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((field0 + 16) + 0)), 0, __ATOMIC_ACQ_REL);
    if (!(field9 == 0)) {
    const uint32_t field10 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field9 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (!(uint32_t((field10 - 1)) != 0)) {
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field9 + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((field11 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field12)(field9);
    }
    }
    const uint64_t field13 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((field0 + 8) + 0)), 0, __ATOMIC_ACQ_REL);
    if (!(field13 == 0)) {
    const uint32_t field14 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field13 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (!(uint32_t((field14 - 1)) != 0)) {
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((field13 + 0));
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((field15 + 16));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t)>(field16)(field13);
    }
    }
    return LeafTarget_cb0f0(field0);
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_142b00(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint8_t*>((arg0 + 32)) = 0;
    const uint64_t field0 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((arg0 + 80) + 0)), 0, __ATOMIC_ACQ_REL);
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    const uint64_t field4 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((arg0 + 72) + 0)), 0, __ATOMIC_ACQ_REL);
    if (!(field4 == 0)) {
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field4 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (!(uint32_t((field5 - 1)) != 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field4);
    }
    }
    const uint64_t field8 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((arg0 + 64) + 0)), 0, __ATOMIC_ACQ_REL);
    if (!(field8 == 0)) {
    const uint32_t field9 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field8 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (!(uint32_t((field9 - 1)) != 0)) {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field11)(field8);
    }
    }
    const uint64_t field12 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((arg0 + 48) + 0)), 0, __ATOMIC_ACQ_REL);
    if (!(field12 == 0)) {
    const uint32_t field13 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field12 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (!(uint32_t((field13 - 1)) != 0)) {
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((field14 + 16));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t)>(field15)(field12);
    }
    }
    const uint64_t field16 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((arg0 + 16) + 0)), 0, __ATOMIC_ACQ_REL);
    if (field16 == 0) return field16;
    const uint32_t field17 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field16 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (uint32_t((field17 - 1)) != 0) return field16;
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((field18 + 16));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field19)(field16,field19);
    return result4;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1688f0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint8_t*>((arg0 + 40)) = 0;
    const uint64_t field0 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((arg0 + 88) + 0)), 0, __ATOMIC_ACQ_REL);
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    const uint64_t field4 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((arg0 + 80) + 0)), 0, __ATOMIC_ACQ_REL);
    if (!(field4 == 0)) {
    const uint32_t field5 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field4 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (!(uint32_t((field5 - 1)) != 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field4);
    }
    }
    const uint64_t field8 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((arg0 + 72) + 0)), 0, __ATOMIC_ACQ_REL);
    if (!(field8 == 0)) {
    const uint32_t field9 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field8 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (!(uint32_t((field9 - 1)) != 0)) {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field11)(field8);
    }
    }
    const uint64_t field12 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((arg0 + 56) + 0)), 0, __ATOMIC_ACQ_REL);
    if (!(field12 == 0)) {
    const uint32_t field13 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field12 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (!(uint32_t((field13 - 1)) != 0)) {
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((field14 + 16));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t)>(field15)(field12);
    }
    }
    const uint64_t field16 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((arg0 + 24) + 0)), 0, __ATOMIC_ACQ_REL);
    if (!(field16 == 0)) {
    const uint32_t field17 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field16 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (!(uint32_t((field17 - 1)) != 0)) {
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((field18 + 16));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t)>(field19)(field16);
    }
    }
    const uint64_t field20 = __atomic_exchange_n(reinterpret_cast<uint64_t*>((arg0 + 0)), 0, __ATOMIC_ACQ_REL);
    if (field20 == 0) return field20;
    const uint32_t field21 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field20 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (uint32_t((field21 - 1)) != 0) return field20;
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field20 + 0));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((field22 + 16));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field23)(field20,field23);
    return result5;
}



extern "C" void LeafTarget_175740(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_175740(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = __atomic_exchange_n(reinterpret_cast<uint64_t*>(((arg0 + 16) + 0)), 0, __ATOMIC_ACQ_REL);
    if (!(field0 == 0)) {
    const uint32_t field1 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>(((field0 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    if (!(uint32_t((field1 - 1)) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field0);
    }
    }
    LeafTarget_175740(arg0);
}



extern "C" void LeafTarget_258df0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_258df0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    LeafTarget_258df0(((arg0 + 40) + 48),arg1);
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2592a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 120));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)((arg0 + 120),arg1);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 184));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field5)((arg0 + 184),arg1,field5);
    return result2;
}



extern "C" uint64_t RecoveredCall_25dc90_0(uint64_t);
struct RecoveredOutput_25dc90 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_25dc90 RecoveredLeaf_25dc90(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_25dc90 output;
    const uint64_t result0 = RecoveredCall_25dc90_0(arg0);
    *reinterpret_cast<uint8_t*>((arg0 + 0)) = uint32_t(uint32_t((result0 != 0)));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



extern "C" void LeafTarget_25e8b0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_25e8b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 104));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)((arg0 + 104),arg1);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 144));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)((arg0 + 144),arg1);
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 184));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 16));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field7)((arg0 + 184),arg1);
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 224));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 16));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field9)((arg0 + 224),arg1);
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>(((arg0 + 224) + 40));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 16));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field11)(((arg0 + 224) + 40),arg1);
    LeafTarget_25e8b0(((arg0 + 224) + 88),arg1);
}



extern "C" uint64_t RecoveredCall_268660_3(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_268660(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)((arg0 + 80),arg1);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 128));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)((arg0 + 128),arg1);
    const uint64_t result3 = RecoveredCall_268660_3(((arg0 + 128) + 40),arg1);
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>(((arg0 + 128) + 232));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 16));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field7)(((arg0 + 128) + 232),arg1);
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg0 + 128) + 272));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 16));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field9)(((arg0 + 128) + 272),arg1);
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>(((arg0 + 128) + 352));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 16));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field11)(((arg0 + 128) + 352),arg1,field11);
    return result6;
}



extern "C" void LeafTarget_26d500(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_26d500(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    LeafTarget_26d500(((arg0 + 40) + 56),arg1);
}



extern "C" void LeafTarget_2c2670(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_2c2670(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 104));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)((arg0 + 104),arg1);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 160));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)((arg0 + 160),arg1);
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 200));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 16));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field7)((arg0 + 200),arg1);
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 240));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 16));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field9)((arg0 + 240),arg1);
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>(((arg0 + 240) + 40));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 16));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field11)(((arg0 + 240) + 40),arg1);
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg0 + 240) + 80));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 16));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field13)(((arg0 + 240) + 80),arg1);
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>(((arg0 + 240) + 120));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((field14 + 16));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field15)(((arg0 + 240) + 120),arg1);
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg0 + 240) + 160));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 16));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field17)(((arg0 + 240) + 160),arg1);
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>(((arg0 + 240) + 216));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((field18 + 16));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field19)(((arg0 + 240) + 216),arg1);
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg0 + 240) + 256));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 16));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field21)(((arg0 + 240) + 256),arg1);
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>(((arg0 + 240) + 296));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((field22 + 16));
    const uint64_t result11 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field23)(((arg0 + 240) + 296),arg1);
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg0 + 240) + 336));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 16));
    const uint64_t result12 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field25)(((arg0 + 240) + 336),arg1);
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>(((arg0 + 240) + 376));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>((field26 + 16));
    const uint64_t result13 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field27)(((arg0 + 240) + 376),arg1);
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>(((arg0 + 240) + 416));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 16));
    const uint64_t result14 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field29)(((arg0 + 240) + 416),arg1);
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>(((arg0 + 240) + 456));
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>((field30 + 16));
    const uint64_t result15 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field31)(((arg0 + 240) + 456),arg1);
    const uint64_t field32 = *reinterpret_cast<const uint64_t*>(((arg0 + 240) + 496));
    const uint64_t field33 = *reinterpret_cast<const uint64_t*>((field32 + 16));
    const uint64_t result16 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field33)(((arg0 + 240) + 496),arg1);
    const uint64_t field34 = *reinterpret_cast<const uint64_t*>(((arg0 + 240) + 536));
    const uint64_t field35 = *reinterpret_cast<const uint64_t*>((field34 + 16));
    const uint64_t result17 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field35)(((arg0 + 240) + 536),arg1);
    LeafTarget_2c2670(((arg0 + 240) + 576),arg1);
}



struct RecoveredOutput_2d0610 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2d0610 RecoveredLeaf_2d0610(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2d0610 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 32));
    *reinterpret_cast<uint64_t*>((arg0 + 56)) = field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    *reinterpret_cast<uint64_t*>((arg0 + 64)) = result0;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



struct RecoveredOutput_2d0660 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2d0660 RecoveredLeaf_2d0660(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2d0660 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 32));
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = result0;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



extern "C" uint64_t RecoveredCall_2d5e20_0(uint64_t);
extern "C" uint64_t RecoveredCall_2d5e20_1(uint64_t,uint64_t);
struct RecoveredOutput_2d5e20 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2d5e20 RecoveredLeaf_2d5e20(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2d5e20 output;
    const uint64_t result0 = RecoveredCall_2d5e20_0((arg0 + 32));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 120));
    const uint64_t result1 = RecoveredCall_2d5e20_1(((arg0 + 120) - 8),field0);
    *reinterpret_cast<uint64_t*>((((arg0 + 120) + 0) + 0)) = 0;
    *reinterpret_cast<uint64_t*>((((arg0 + 120) + 0) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 120) + -8)) = (arg0 + 120);
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



extern "C" uint64_t RecoveredCall_2e3a00_0(uint64_t,uint64_t);
struct RecoveredOutput_2e3a00 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e3a00 RecoveredLeaf_2e3a00(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_2e3a00 output;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 52));
    const uint64_t result0 = RecoveredCall_2e3a00_0(arg0,uint32_t(field0));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((arg1 + 56));
    *reinterpret_cast<uint32_t*>((result0 + 4)) = uint32_t(uint32_t(field1));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



extern "C" uint64_t RecoveredCall_2e3e10_0(uint64_t,uint64_t);
struct RecoveredOutput_2e3e10 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e3e10 RecoveredLeaf_2e3e10(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_2e3e10 output;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 32));
    const uint64_t result0 = RecoveredCall_2e3e10_0(arg0,uint32_t(field0));
    if (!(result0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 36));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg1 + 44));
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((arg1 + 51));
    *reinterpret_cast<uint32_t*>((result0 + 47)) = uint32_t(uint32_t(field3));
    *reinterpret_cast<uint64_t*>(((result0 + 32) + 0)) = field1;
    *reinterpret_cast<uint64_t*>(((result0 + 32) + 8)) = field2;
    }
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



extern "C" uint64_t RecoveredCall_2e3e60_0(uint64_t,uint64_t);
struct RecoveredOutput_2e3e60 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e3e60 RecoveredLeaf_2e3e60(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_2e3e60 output;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 52));
    const uint64_t result0 = RecoveredCall_2e3e60_0(arg0,uint32_t(field0));
    if (!(result0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 64));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 130));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field1 + 138));
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((field1 + 145));
    *reinterpret_cast<uint32_t*>((result0 + 47)) = uint32_t(uint32_t(field4));
    *reinterpret_cast<uint64_t*>(((result0 + 32) + 0)) = field2;
    *reinterpret_cast<uint64_t*>(((result0 + 32) + 8)) = field3;
    }
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((arg1 + 56));
    *reinterpret_cast<uint32_t*>((result0 + 4)) = uint32_t(uint32_t(field5));
    }
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



extern "C" uint64_t RecoveredCall_2e45b0_0(uint64_t,uint64_t);
struct RecoveredOutput_2e45b0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e45b0 RecoveredLeaf_2e45b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_2e45b0 output;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 52));
    const uint64_t result0 = RecoveredCall_2e45b0_0(arg0,uint32_t(field0));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



extern "C" uint64_t RecoveredCall_310180_0(uint64_t);
struct RecoveredOutput_310180 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_310180 RecoveredLeaf_310180(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_310180 output;
    const uint64_t result0 = RecoveredCall_310180_0(arg0);
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_3905e0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field3)((arg0 + 80),arg1,field3);
    return result1;
}



struct RecoveredOutput_3bec90 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3bec90 RecoveredLeaf_3bec90(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3bec90 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    *reinterpret_cast<uint8_t*>((arg0 + 68)) = uint32_t(uint32_t(1));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 32));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 40));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



struct RecoveredOutput_3c2240 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3c2240 RecoveredLeaf_3c2240(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_3c2240 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 32));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field2 + 112));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field4)(field1,arg1,field3);
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



struct RecoveredOutput_3c2280 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3c2280 RecoveredLeaf_3c2280(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_3c2280 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 32));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field2 + 112));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field4)(field1,arg1,field3);
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



struct RecoveredOutput_3c22c0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3c22c0 RecoveredLeaf_3c22c0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_3c22c0 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 32));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field2 + 120));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field4)(field1,arg1,field3);
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



struct RecoveredOutput_3c2300 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3c2300 RecoveredLeaf_3c2300(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_3c2300 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 32));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field2 + 120));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field4)(field1,arg1,field3);
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_3de3d0(uint64_t arg0,uint64_t arg1) {
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
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>(((arg0 + 120) + 200));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 16));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field7)(((arg0 + 120) + 200),arg1);
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg0 + 120) + 280));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 16));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field9)(((arg0 + 120) + 280),arg1,field9);
    return result4;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_3df5c0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)((arg0 + 80),arg1);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 144));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field5)((arg0 + 144),arg1,field5);
    return result2;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_3e0360(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field3)((arg0 + 80),arg1,field3);
    return result1;
}



struct RecoveredOutput_3fa8a0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3fa8a0 RecoveredLeaf_3fa8a0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3fa8a0 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 32));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 96));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



struct RecoveredOutput_3fa8e0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3fa8e0 RecoveredLeaf_3fa8e0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3fa8e0 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 32));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 96));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



struct RecoveredOutput_3fa920 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3fa920 RecoveredLeaf_3fa920(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3fa920 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 32));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 104));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



struct RecoveredOutput_3fa960 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3fa960 RecoveredLeaf_3fa960(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3fa960 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 32));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 104));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



struct RecoveredOutput_3fc3f0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3fc3f0 RecoveredLeaf_3fc3f0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_3fc3f0 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 32));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field2 + 112));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field4)(field1,arg1,field3);
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



struct RecoveredOutput_3fc430 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3fc430 RecoveredLeaf_3fc430(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_3fc430 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 32));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field2 + 112));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field4)(field1,arg1,field3);
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



struct RecoveredOutput_3fc470 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3fc470 RecoveredLeaf_3fc470(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_3fc470 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 32));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field2 + 120));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field4)(field1,arg1,field3);
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



struct RecoveredOutput_3fc4b0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3fc4b0 RecoveredLeaf_3fc4b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_3fc4b0 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 32));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field2 + 120));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field4)(field1,arg1,field3);
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



extern "C" uint64_t RecoveredCall_409be0_0(uint64_t);
extern "C" uint64_t RecoveredCall_409be0_1(uint64_t);
extern "C" uint64_t RecoveredCall_409be0_2(uint64_t);
extern "C" uint64_t RecoveredCall_409be0_3(uint64_t);
extern "C" void LeafTarget_409be0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_409be0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    uint64_t merged2 = field0;
    if (!(field0 == 0)) {
    const uint64_t result0 = RecoveredCall_409be0_0(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
        merged2 = field1;
    }
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 144));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 168));
    *reinterpret_cast<uint64_t*>((arg0 + 152)) = field3;
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((arg0 + 264));
    *reinterpret_cast<uint64_t*>((arg0 + 176)) = field4;
    *reinterpret_cast<uint64_t*>((arg0 + 272)) = field5;
    if (!(merged2 == 0)) {
    const uint64_t result1 = RecoveredCall_409be0_1(merged2);
    }
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    uint64_t merged8 = field6;
    if (!(field6 == 0)) {
    const uint64_t result2 = RecoveredCall_409be0_2(field6);
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
        merged8 = field7;
    }
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((arg0 + 216));
    *reinterpret_cast<uint64_t*>((arg0 + 224)) = field9;
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((arg0 + 240));
    *reinterpret_cast<uint64_t*>((arg0 + 248)) = field10;
    if (!(merged8 == 0)) {
    const uint64_t result3 = RecoveredCall_409be0_3(merged8);
    }
    LeafTarget_409be0((arg0 + 400));
}



struct RecoveredOutput_412070 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_412070 RecoveredLeaf_412070(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_412070 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg1 + 32));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field0,field2);
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



struct RecoveredOutput_4120b0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4120b0 RecoveredLeaf_4120b0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4120b0 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



struct RecoveredOutput_412100 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_412100 RecoveredLeaf_412100(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_412100 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg1 + 32));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field1 + 32));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field0,field2);
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_431790(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field3)((arg0 + 80),arg1,field3);
    return result1;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_431f60(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field3)((arg0 + 80),arg1,field3);
    return result1;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_432780(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)((arg0 + 80),arg1);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 120));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field5)((arg0 + 120),arg1,field5);
    return result2;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_433790(uint64_t arg0,uint64_t arg1) {
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
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field9)((arg0 + 200),arg1,field9);
    return result4;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_434380(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field3)((arg0 + 80),arg1,field3);
    return result1;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_434cc0(uint64_t arg0,uint64_t arg1) {
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
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((arg0 + 248));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 16));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field11)((arg0 + 248),arg1,field11);
    return result5;
}



extern "C" void LeafTarget_4359b0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4359b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    LeafTarget_4359b0(((arg0 + 40) + 40),arg1);
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_436320(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field3)((arg0 + 80),arg1,field3);
    return result1;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_437e90(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field3)((arg0 + 80),arg1,field3);
    return result1;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_446b60(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field3)((arg0 + 80),arg1,field3);
    return result1;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4472d0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)((arg0 + 80),arg1);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 160));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)((arg0 + 160),arg1);
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 208));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 16));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field7)((arg0 + 208),arg1);
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg0 + 208) + 56));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 16));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field9)(((arg0 + 208) + 56),arg1);
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>(((arg0 + 208) + 104));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 16));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field11)(((arg0 + 208) + 104),arg1);
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg0 + 208) + 144));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 16));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field13)(((arg0 + 208) + 144),arg1);
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>(((arg0 + 208) + 184));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((field14 + 16));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field15)(((arg0 + 208) + 184),arg1);
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg0 + 208) + 224));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 16));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field17)(((arg0 + 208) + 224),arg1);
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>(((arg0 + 208) + 264));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((field18 + 16));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field19)(((arg0 + 208) + 264),arg1);
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg0 + 208) + 304));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 16));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field21)(((arg0 + 208) + 304),arg1);
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>(((arg0 + 208) + 504));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((field22 + 16));
    const uint64_t result11 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field23)(((arg0 + 208) + 504),arg1,field23);
    return result11;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_449880(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)((arg0 + 80),arg1);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 120));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field5)((arg0 + 120),arg1,field5);
    return result2;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_44a050(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field3)((arg0 + 80),arg1,field3);
    return result1;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_44a740(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field3)((arg0 + 80),arg1,field3);
    return result1;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_44b300(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)((arg0 + 88),arg1);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 128));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)((arg0 + 128),arg1);
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 168));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 16));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field7)((arg0 + 168),arg1,field7);
    return result3;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_44bca0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field3)((arg0 + 80),arg1,field3);
    return result1;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_44c370(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)((arg0 + 80),arg1);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 128));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)((arg0 + 128),arg1);
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 168));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 16));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field7)((arg0 + 168),arg1);
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 208));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 16));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field9)((arg0 + 208),arg1,field9);
    return result4;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_44ce40(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)((arg0 + 80),arg1);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 128));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)((arg0 + 128),arg1);
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 168));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 16));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field7)((arg0 + 168),arg1,field7);
    return result3;
}



extern "C" void LeafTarget_44d820(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_44d820(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    LeafTarget_44d820(((arg0 + 40) + 40),arg1);
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_44eaf0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field3)((arg0 + 80),arg1,field3);
    return result1;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_44f200(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)((arg0 + 88),arg1);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 128));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field5)((arg0 + 128),arg1,field5);
    return result2;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_44fa70(uint64_t arg0,uint64_t arg1) {
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
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>(((arg0 + 120) + 200));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 16));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field7)(((arg0 + 120) + 200),arg1);
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg0 + 120) + 240));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 16));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field9)(((arg0 + 120) + 240),arg1,field9);
    return result4;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_450690(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)((arg0 + 88),arg1);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 128));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field5)((arg0 + 128),arg1,field5);
    return result2;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_450f70(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)((arg0 + 80),arg1);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg0 + 80) + 200));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)(((arg0 + 80) + 200),arg1);
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>(((arg0 + 80) + 248));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 16));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field7)(((arg0 + 80) + 248),arg1);
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg0 + 80) + 304));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 16));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field9)(((arg0 + 80) + 304),arg1);
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>(((arg0 + 80) + 352));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 16));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field11)(((arg0 + 80) + 352),arg1);
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg0 + 80) + 392));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 16));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field13)(((arg0 + 80) + 392),arg1,field13);
    return result6;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_452530(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)((arg0 + 80),arg1);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 128));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field5)((arg0 + 128),arg1,field5);
    return result2;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_452dd0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field3)((arg0 + 80),arg1,field3);
    return result1;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_453580(uint64_t arg0,uint64_t arg1) {
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
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 208));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 16));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field9)((arg0 + 208),arg1,field9);
    return result4;
}



struct RecoveredOutput_4540f0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4540f0 RecoveredLeaf_4540f0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    RecoveredOutput_4540f0 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg2 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 32));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg2);
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_485c90(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 120));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)((arg0 + 120),arg1);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 232));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field5)((arg0 + 232),arg1,field5);
    return result2;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4f4830(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    *reinterpret_cast<uint64_t*>((arg0 + 72)) = field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 32));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(arg0);
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    uint64_t merged6 = result0;
    if (!(uint32_t(uint32_t(field3)) != 4)) {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 72));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(arg0);
        merged6 = result1;
    }
    const uint32_t field7 = *reinterpret_cast<const uint32_t*>((arg0 + 64));
    *reinterpret_cast<uint32_t*>((arg0 + 64)) = uint32_t(uint32_t((uint32_t(uint32_t(field7)) + 1)));
    return merged6;
}



extern "C" uint64_t RecoveredCall_4fadb0_0(uint64_t);
struct RecoveredOutput_4fadb0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4fadb0 RecoveredLeaf_4fadb0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4fadb0 output;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 4));
    const uint64_t result0 = RecoveredCall_4fadb0_0(uint32_t(field0));
    *reinterpret_cast<uint32_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(result0);
    return output;
}



extern "C" unsigned char LeafData_4fdac0_0[];
extern "C" uint64_t RecoveredCall_4fdac0_0(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_1(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_2(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_3(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_4(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_5(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_6(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_7(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_8(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_9(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_10(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_11(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_12(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_13(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_14(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_15(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_16(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_17(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_18(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_19(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_20(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_21(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_22(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_23(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_24(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_25(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_26(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_27(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_28(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_29(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_30(uint64_t);
extern "C" uint64_t RecoveredCall_4fdac0_31(uint64_t);
extern "C" uint64_t LeafTarget_4fdac0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4fdac0(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((((reinterpret_cast<uintptr_t>(LeafData_4fdac0_0) - 1000) + 1000) + 0)), 1, __ATOMIC_ACQ_REL);
    if (uint32_t((field0 - 1)) != 0) return arg0;
    const uint64_t result0 = RecoveredCall_4fdac0_0(arg0);
    const uint64_t result1 = RecoveredCall_4fdac0_1(result0);
    const uint64_t result2 = RecoveredCall_4fdac0_2(result1);
    const uint64_t result3 = RecoveredCall_4fdac0_3(result2);
    const uint64_t result4 = RecoveredCall_4fdac0_4(result3);
    const uint64_t result5 = RecoveredCall_4fdac0_5(result4);
    const uint64_t result6 = RecoveredCall_4fdac0_6(result5);
    const uint64_t result7 = RecoveredCall_4fdac0_7(result6);
    const uint64_t result8 = RecoveredCall_4fdac0_8(result7);
    const uint64_t result9 = RecoveredCall_4fdac0_9(result8);
    const uint64_t result10 = RecoveredCall_4fdac0_10(result9);
    const uint64_t result11 = RecoveredCall_4fdac0_11(result10);
    const uint64_t result12 = RecoveredCall_4fdac0_12(result11);
    const uint64_t result13 = RecoveredCall_4fdac0_13(result12);
    const uint64_t result14 = RecoveredCall_4fdac0_14(result13);
    const uint64_t result15 = RecoveredCall_4fdac0_15(result14);
    const uint64_t result16 = RecoveredCall_4fdac0_16(result15);
    const uint64_t result17 = RecoveredCall_4fdac0_17(result16);
    const uint64_t result18 = RecoveredCall_4fdac0_18(result17);
    const uint64_t result19 = RecoveredCall_4fdac0_19(result18);
    const uint64_t result20 = RecoveredCall_4fdac0_20(result19);
    const uint64_t result21 = RecoveredCall_4fdac0_21(result20);
    const uint64_t result22 = RecoveredCall_4fdac0_22(result21);
    const uint64_t result23 = RecoveredCall_4fdac0_23(uint32_t(1));
    const uint64_t result24 = RecoveredCall_4fdac0_24(result23);
    const uint64_t result25 = RecoveredCall_4fdac0_25(result24);
    const uint64_t result26 = RecoveredCall_4fdac0_26(result25);
    const uint64_t result27 = RecoveredCall_4fdac0_27(result26);
    const uint64_t result28 = RecoveredCall_4fdac0_28(result27);
    const uint64_t result29 = RecoveredCall_4fdac0_29(result28);
    const uint64_t result30 = RecoveredCall_4fdac0_30(result29);
    const uint64_t result31 = RecoveredCall_4fdac0_31(result30);
    return LeafTarget_4fdac0(result31);
}



extern "C" uint64_t RecoveredCall_5089f0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_5089f0_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5089f0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = 0;
    const uint64_t result0 = RecoveredCall_5089f0_0((arg0 + 8),0);
    const uint64_t result1 = RecoveredCall_5089f0_1((arg0 + 16),0);
    *reinterpret_cast<uint32_t*>((arg0 + 0)) = 0;
    return result1;
}



extern "C" uint64_t RecoveredCall_519280_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_519280(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_519280_0((arg0 + 8),arg1);
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 24) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 24) + -8)) = (arg0 + 24);
    return result0;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_51efd0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 208));
    uint64_t merged3 = field0;
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
        merged3 = result0;
    }
    *reinterpret_cast<uint64_t*>((arg0 + 208)) = 0;
    return merged3;
}



extern "C" uint64_t RecoveredCall_5261c0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_5261c0_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5261c0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 0));
    *reinterpret_cast<uint32_t*>((arg0 + 1064)) = uint32_t(uint32_t(field0));
    const uint64_t result0 = RecoveredCall_5261c0_0((arg0 + 1072),(arg1 + 8));
    const uint64_t result1 = RecoveredCall_5261c0_1((arg0 + 1080),(arg1 + 16));
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((arg1 + 24));
    *reinterpret_cast<uint8_t*>((arg0 + 1088)) = uint32_t(uint32_t(field1));
    return result1;
}



extern "C" unsigned char LeafData_52ee40_0[];
extern "C" uint64_t RecoveredCall_52ee40_0(uint64_t);
extern "C" uint64_t RecoveredCall_52ee40_1(uint64_t);
extern "C" uint64_t RecoveredCall_52ee40_2(uint64_t);
extern "C" uint64_t LeafTarget_52ee40(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_52ee40(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = __atomic_fetch_sub(reinterpret_cast<uint32_t*>((((reinterpret_cast<uintptr_t>(LeafData_52ee40_0) - 1456) + 1456) + 0)), 1, __ATOMIC_ACQ_REL);
    if (uint32_t((field0 - 1)) != 0) return arg0;
    const uint64_t result0 = RecoveredCall_52ee40_0(arg0);
    const uint64_t result1 = RecoveredCall_52ee40_1(result0);
    const uint64_t result2 = RecoveredCall_52ee40_2(result1);
    return LeafTarget_52ee40(result2);
}



struct RecoveredOutput_552d50 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_552d50 RecoveredLeaf_552d50(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_552d50 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    uint64_t merged2 = arg0;
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field0)(field1);
        merged2 = result0;
    }
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



struct RecoveredOutput_553ac0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_553ac0 RecoveredLeaf_553ac0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_553ac0 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 264));
    uint64_t merged2 = arg0;
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 272));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field0)(field1);
        merged2 = result0;
    }
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



extern "C" uint64_t RecoveredCall_554b90_0(uint64_t);
struct RecoveredOutput_554b90 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_554b90 RecoveredLeaf_554b90(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_554b90 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    uint64_t merged1 = field0;
    if (!(field0 == 0)) {
    const uint64_t result0 = RecoveredCall_554b90_0(field0);
    *reinterpret_cast<uint64_t*>((arg0 + 40)) = 0;
        merged1 = result0;
    }
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



extern "C" uint64_t RecoveredCall_554bd0_0(uint64_t);
struct RecoveredOutput_554bd0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_554bd0 RecoveredLeaf_554bd0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_554bd0 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    uint64_t merged1 = field0;
    if (!(field0 == 0)) {
    const uint64_t result0 = RecoveredCall_554bd0_0(field0);
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
        merged1 = result0;
    }
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



struct RecoveredOutput_554cb0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_554cb0 RecoveredLeaf_554cb0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_554cb0 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 32));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field1)(arg0,(arg0 + 48));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



extern "C" uint64_t RecoveredCall_554cf0_0(uint64_t,uint64_t,uint64_t);
struct RecoveredOutput_554cf0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_554cf0 RecoveredLeaf_554cf0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_554cf0 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t result0 = RecoveredCall_554cf0_0(field0,(arg0 + 24),(arg0 + 48));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



struct RecoveredOutput_563440 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_563440 RecoveredLeaf_563440(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_563440 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 80));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg1);
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



extern "C" uint64_t RecoveredCall_57d0d0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_57d0d0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = __atomic_load_n(reinterpret_cast<const uint64_t*>(((arg0 + 8) + 0)), __ATOMIC_ACQUIRE);
    if (field0 == 0) return arg0;
    const uint64_t field1 = __atomic_load_n(reinterpret_cast<const uint64_t*>(((arg0 + 8) + 0)), __ATOMIC_ACQUIRE);
    const uint64_t result0 = RecoveredCall_57d0d0_0(field1);
    __atomic_store_n(reinterpret_cast<uint64_t*>(((arg0 + 8) + 0)), 0, __ATOMIC_RELEASE);
    return result0;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_5847b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field3)((arg0 + 80),arg1,field3);
    return result1;
}




extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_588520(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    uint64_t merged3 = field0;
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 8));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
        merged3 = result0;
    }
    *reinterpret_cast<uint8_t*>((arg0 + 56)) = uint32_t(uint32_t(1));
    return merged3;
}



extern "C" void LeafTarget_593de0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_593de0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 40));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)((arg0 + 96),arg1);
    LeafTarget_593de0(((arg0 + 96) + 72),arg1);
}



extern "C" void LeafTarget_5ab340(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5ab340(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)((arg0 + 88));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 144));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)((arg0 + 144),arg1);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 184));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 16));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)((arg0 + 184),arg1);
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 232));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 16));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field7)((arg0 + 232),arg1);
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg0 + 232) + 40));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 16));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field9)(((arg0 + 232) + 40),arg1);
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>(((arg0 + 232) + 80));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 16));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field11)(((arg0 + 232) + 80),arg1);
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg0 + 232) + 120));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 16));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field13)(((arg0 + 232) + 120),arg1);
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>(((arg0 + 232) + 232));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((field14 + 16));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field15)(((arg0 + 232) + 232),arg1);
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>(((arg0 + 232) + 296));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 16));
    const uint64_t result8 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field17)(((arg0 + 232) + 296),arg1);
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>(((arg0 + 232) + 360));
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((field18 + 16));
    const uint64_t result9 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field19)(((arg0 + 232) + 360),arg1);
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>(((arg0 + 232) + 400));
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((field20 + 16));
    const uint64_t result10 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field21)(((arg0 + 232) + 400),arg1);
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>(((arg0 + 232) + 440));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((field22 + 16));
    const uint64_t result11 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field23)(((arg0 + 232) + 440),arg1);
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>(((arg0 + 232) + 664));
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((field24 + 16));
    const uint64_t result12 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field25)(((arg0 + 232) + 664),arg1);
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>(((arg0 + 232) + 704));
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>((field26 + 16));
    const uint64_t result13 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field27)(((arg0 + 232) + 704),arg1);
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>(((arg0 + 232) + 744));
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((field28 + 16));
    const uint64_t result14 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field29)(((arg0 + 232) + 744),arg1);
    LeafTarget_5ab340(((arg0 + 232) + 816),arg1);
}



struct RecoveredOutput_5b2f90 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5b2f90 RecoveredLeaf_5b2f90(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5b2f90 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 32));
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = result0;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



extern "C" uint64_t RecoveredCall_5b4020_0(uint64_t);
extern "C" uint64_t RecoveredCall_5b4020_2(uint64_t);
struct RecoveredOutput_5b4020 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5b4020 RecoveredLeaf_5b4020(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5b4020 output;
    const uint64_t result0 = RecoveredCall_5b4020_0(arg0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((result0 + 0) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((result0 + 0) + 8));
    if (!(field1 == 0)) {
    const uint64_t field2 = __atomic_fetch_add(reinterpret_cast<uint64_t*>(((field1 + 8) + 0)), 1, __ATOMIC_RELAXED);
    }
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 160));
    *reinterpret_cast<uint64_t*>(((arg0 + 152) + 0)) = field0;
    *reinterpret_cast<uint64_t*>(((arg0 + 152) + 8)) = field1;
    uint64_t merged8 = result0;
    if (!(field3 == 0)) {
    const uint64_t field4 = __atomic_fetch_sub(reinterpret_cast<uint64_t*>(((field3 + 8) + 0)), 1, __ATOMIC_ACQ_REL);
    uint64_t merged7 = result0;
    if (!(field4 != 0)) {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 16));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field6)(field3);
    const uint64_t result2 = RecoveredCall_5b4020_2(field3);
        merged7 = result2;
    }
        merged8 = merged7;
    }
    *reinterpret_cast<uint32_t*>((arg0 + 128)) = uint32_t(uint32_t(-1));
    *reinterpret_cast<uint8_t*>((arg0 + 132)) = 0;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



struct RecoveredOutput_5d1ea0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5d1ea0 RecoveredLeaf_5d1ea0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    RecoveredOutput_5d1ea0 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg2 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 232));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 64));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t,uint64_t)>(field5)(field1,arg1,field2,field3);
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



extern "C" uint64_t RecoveredCall_5d6090_0(uint64_t,uint64_t,uint64_t,uint64_t);
struct RecoveredOutput_5d6090 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5d6090 RecoveredLeaf_5d6090(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5d6090 output;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 912));
    uint64_t merged3 = arg0;
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((arg0 + 916));
    *reinterpret_cast<uint8_t*>((arg0 + 617)) = uint32_t(uint32_t(field1));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 120));
    const uint64_t result0 = RecoveredCall_5d6090_0(field2,(arg0 + 96),(arg0 + 872),uint32_t(field0));
    *reinterpret_cast<uint32_t*>((arg0 + 912)) = 0;
    *reinterpret_cast<uint8_t*>((arg0 + 916)) = 0;
        merged3 = result0;
    }
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



struct RecoveredOutput_5ec930 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5ec930 RecoveredLeaf_5ec930(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5ec930 output;
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 168));
    uint64_t merged7 = arg0;
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((arg0 + 172));
    uint64_t merged6 = arg0;
    if (!(uint32_t(uint32_t(field1)) > 5)) {
    *reinterpret_cast<uint32_t*>((arg0 + 172)) = uint32_t(uint32_t((uint32_t(uint32_t(field1)) + 1)));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 128));
    uint64_t merged5 = arg0;
    if (!(field2 == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field4)(field2,(arg0 + 136));
        merged5 = result0;
    }
        merged6 = merged5;
    }
        merged7 = merged6;
    }
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}



extern "C" uint64_t RecoveredCall_5ec990_0(uint64_t,uint64_t,uint64_t);
struct RecoveredOutput_5ec990 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5ec990 RecoveredLeaf_5ec990(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5ec990 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 120));
    uint64_t merged1 = field0;
    if (!(field0 == 0)) {
    const uint64_t result0 = RecoveredCall_5ec990_0(field0,(arg0 + 96),(arg0 + 476));
        merged1 = result0;
    }
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}
