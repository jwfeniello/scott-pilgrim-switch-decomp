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


extern "C" uint64_t RecoveredCall_223230_0(uint64_t);
extern "C" uint64_t RecoveredCall_223230_1(uint64_t);
extern "C" uint64_t RecoveredCall_223230_2(uint64_t);
extern "C" uint64_t RecoveredCall_223230_3(uint64_t);
extern "C" uint64_t RecoveredCall_223230_4(uint64_t);
extern "C" uint64_t RecoveredCall_223230_5(uint64_t);
extern "C" uint64_t RecoveredCall_223230_6(uint64_t);
extern "C" uint64_t RecoveredCall_223230_7(uint64_t);
extern "C" uint64_t RecoveredCall_223230_8(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_223230(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 600));
    const uint64_t result0 = RecoveredCall_223230_0(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 608));
    const uint64_t result1 = RecoveredCall_223230_1(field1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 616));
    const uint64_t result2 = RecoveredCall_223230_2(field2);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 624));
    const uint64_t result3 = RecoveredCall_223230_3(field3);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 632));
    const uint64_t result4 = RecoveredCall_223230_4(field4);
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((arg0 + 640));
    const uint64_t result5 = RecoveredCall_223230_5(field5);
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 648));
    const uint64_t result6 = RecoveredCall_223230_6(field6);
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg0 + 656));
    const uint64_t result7 = RecoveredCall_223230_7(field7);
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 664));
    const uint64_t result8 = RecoveredCall_223230_8(field8);
    *reinterpret_cast<uint64_t*>((arg0 + 672)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 664)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 656)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 648)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 640)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 632)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 624)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 616)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 608)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 600)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 592)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 584)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 576)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 568)) = 0;
    *reinterpret_cast<uint32_t*>((arg0 + 680)) = uint32_t(uint32_t(1024));
    *reinterpret_cast<uint64_t*>((arg0 + 688)) = 0;
    return uint32_t(1);
}



extern "C" uint64_t RecoveredCall_2232e0_0(uint64_t);
extern "C" uint64_t RecoveredCall_2232e0_1(uint64_t);
extern "C" uint64_t RecoveredCall_2232e0_2(uint64_t);
extern "C" uint64_t RecoveredCall_2232e0_3(uint64_t);
extern "C" uint64_t RecoveredCall_2232e0_4(uint64_t);
extern "C" uint64_t RecoveredCall_2232e0_5(uint64_t);
extern "C" uint64_t RecoveredCall_2232e0_6(uint64_t);
extern "C" uint64_t RecoveredCall_2232e0_7(uint64_t);
extern "C" uint64_t RecoveredCall_2232e0_8(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2232e0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 712));
    const uint64_t result0 = RecoveredCall_2232e0_0(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 720));
    const uint64_t result1 = RecoveredCall_2232e0_1(field1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 728));
    const uint64_t result2 = RecoveredCall_2232e0_2(field2);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 736));
    const uint64_t result3 = RecoveredCall_2232e0_3(field3);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 744));
    const uint64_t result4 = RecoveredCall_2232e0_4(field4);
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((arg0 + 752));
    const uint64_t result5 = RecoveredCall_2232e0_5(field5);
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 760));
    const uint64_t result6 = RecoveredCall_2232e0_6(field6);
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg0 + 768));
    const uint64_t result7 = RecoveredCall_2232e0_7(field7);
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 776));
    const uint64_t result8 = RecoveredCall_2232e0_8(field8);
    *reinterpret_cast<uint64_t*>((arg0 + 784)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 776)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 768)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 760)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 752)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 744)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 736)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 728)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 720)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 712)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 704)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 696)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 688)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 680)) = 0;
    *reinterpret_cast<uint32_t*>((arg0 + 792)) = uint32_t(uint32_t(1024));
    *reinterpret_cast<uint64_t*>((arg0 + 800)) = 0;
    return uint32_t(1);
}



extern "C" uint64_t RecoveredCall_df5d30_0(uint64_t);
extern "C" unsigned char LeafData_df5d30_3[];
extern "C" unsigned char LeafData_df5d30_16[];
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_df5d30(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_df5d30_0(uint32_t(72));
    *reinterpret_cast<uint32_t*>((result0 + 8)) = 0;
    *reinterpret_cast<uint64_t*>((result0 + 16)) = 0;
    *reinterpret_cast<uint64_t*>((result0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df5d30_3) - 1360) + 1360);
    *reinterpret_cast<uint32_t*>((result0 + 24)) = 0;
    *reinterpret_cast<uint64_t*>((result0 + 32)) = arg1;
    if (!(arg1 == 0)) {
    const uint32_t field0 = __atomic_fetch_add(reinterpret_cast<uint32_t*>(((arg1 + 8) + 0)), 1, __ATOMIC_RELAXED);
    }
    *reinterpret_cast<uint64_t*>((result0 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_df5d30_16) - 2320) + 2320);
    *reinterpret_cast<uint64_t*>(((result0 + 40) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 40) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 56) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((result0 + 56) + 8)) = 0;
    return result0;
}
