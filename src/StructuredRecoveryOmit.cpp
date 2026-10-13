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
extern "C" uint64_t RecoveredCall_1bb2c0_0(uint64_t);
extern "C" uint64_t RecoveredCall_1bb2c0_1(uint64_t);
extern "C" uint64_t RecoveredCall_1bb2c0_2(uint64_t);
extern "C" uint64_t RecoveredCall_1bb2c0_3(uint64_t);
extern "C" uint64_t RecoveredCall_1bb2c0_4(uint64_t);
extern "C" uint64_t RecoveredCall_1bb2c0_5(uint64_t);
extern "C" uint64_t RecoveredCall_1bb2c0_6(uint64_t);
extern "C" uint64_t RecoveredCall_1bb2c0_7(uint64_t);
extern "C" uint64_t RecoveredCall_1bb2c0_8(uint64_t);
extern "C" uint64_t RecoveredCall_1bb2c0_9(uint64_t);
extern "C" uint64_t RecoveredCall_1bb2c0_10(uint64_t);
extern "C" uint64_t RecoveredCall_1bb2c0_11(uint64_t);
extern "C" uint64_t RecoveredCall_1bb2c0_12(uint64_t);
extern "C" uint64_t RecoveredCall_1bb2c0_13(uint64_t);
extern "C" uint64_t RecoveredCall_1bb2c0_14(uint64_t);
extern "C" uint64_t RecoveredCall_1bb2c0_15(uint64_t);
extern "C" uint64_t LeafTarget_1bb2c0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1bb2c0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 208));
    if (!(field0 == 0)) {
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((arg0 + 336));
    if (!((uint32_t(uint32_t(field1)) & 0x1ull) == 0)) {
    const uint64_t result0 = RecoveredCall_1bb2c0_0(field0);
    *reinterpret_cast<uint64_t*>((arg0 + 208)) = 0;
    }
    }
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 216));
    *reinterpret_cast<uint32_t*>((arg0 + 336)) = 0;
    if (!(field2 == 0)) {
    const uint8_t field3 = *reinterpret_cast<const uint8_t*>((arg0 + 340));
    if (!((uint32_t(uint32_t(field3)) & 0x1ull) == 0)) {
    const uint64_t result1 = RecoveredCall_1bb2c0_1(field2);
    *reinterpret_cast<uint64_t*>((arg0 + 216)) = 0;
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 224));
    *reinterpret_cast<uint32_t*>((arg0 + 340)) = 0;
    if (!(field4 == 0)) {
    const uint8_t field5 = *reinterpret_cast<const uint8_t*>((arg0 + 344));
    if (!((uint32_t(uint32_t(field5)) & 0x1ull) == 0)) {
    const uint64_t result2 = RecoveredCall_1bb2c0_2(field4);
    *reinterpret_cast<uint64_t*>((arg0 + 224)) = 0;
    }
    }
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 232));
    *reinterpret_cast<uint32_t*>((arg0 + 344)) = 0;
    if (!(field6 == 0)) {
    const uint8_t field7 = *reinterpret_cast<const uint8_t*>((arg0 + 348));
    if (!((uint32_t(uint32_t(field7)) & 0x1ull) == 0)) {
    const uint64_t result3 = RecoveredCall_1bb2c0_3(field6);
    *reinterpret_cast<uint64_t*>((arg0 + 232)) = 0;
    }
    }
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 240));
    *reinterpret_cast<uint32_t*>((arg0 + 348)) = 0;
    if (!(field8 == 0)) {
    const uint8_t field9 = *reinterpret_cast<const uint8_t*>((arg0 + 352));
    if (!((uint32_t(uint32_t(field9)) & 0x1ull) == 0)) {
    const uint64_t result4 = RecoveredCall_1bb2c0_4(field8);
    *reinterpret_cast<uint64_t*>((arg0 + 240)) = 0;
    }
    }
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((arg0 + 248));
    *reinterpret_cast<uint32_t*>((arg0 + 352)) = 0;
    if (!(field10 == 0)) {
    const uint8_t field11 = *reinterpret_cast<const uint8_t*>((arg0 + 356));
    if (!((uint32_t(uint32_t(field11)) & 0x1ull) == 0)) {
    const uint64_t result5 = RecoveredCall_1bb2c0_5(field10);
    *reinterpret_cast<uint64_t*>((arg0 + 248)) = 0;
    }
    }
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((arg0 + 256));
    *reinterpret_cast<uint32_t*>((arg0 + 356)) = 0;
    if (!(field12 == 0)) {
    const uint8_t field13 = *reinterpret_cast<const uint8_t*>((arg0 + 360));
    if (!((uint32_t(uint32_t(field13)) & 0x1ull) == 0)) {
    const uint64_t result6 = RecoveredCall_1bb2c0_6(field12);
    *reinterpret_cast<uint64_t*>((arg0 + 256)) = 0;
    }
    }
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((arg0 + 264));
    *reinterpret_cast<uint32_t*>((arg0 + 360)) = 0;
    if (!(field14 == 0)) {
    const uint8_t field15 = *reinterpret_cast<const uint8_t*>((arg0 + 364));
    if (!((uint32_t(uint32_t(field15)) & 0x1ull) == 0)) {
    const uint64_t result7 = RecoveredCall_1bb2c0_7(field14);
    *reinterpret_cast<uint64_t*>((arg0 + 264)) = 0;
    }
    }
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((arg0 + 272));
    *reinterpret_cast<uint32_t*>((arg0 + 364)) = 0;
    if (!(field16 == 0)) {
    const uint8_t field17 = *reinterpret_cast<const uint8_t*>((arg0 + 368));
    if (!((uint32_t(uint32_t(field17)) & 0x1ull) == 0)) {
    const uint64_t result8 = RecoveredCall_1bb2c0_8(field16);
    *reinterpret_cast<uint64_t*>((arg0 + 272)) = 0;
    }
    }
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((arg0 + 280));
    *reinterpret_cast<uint32_t*>((arg0 + 368)) = 0;
    if (!(field18 == 0)) {
    const uint8_t field19 = *reinterpret_cast<const uint8_t*>((arg0 + 372));
    if (!((uint32_t(uint32_t(field19)) & 0x1ull) == 0)) {
    const uint64_t result9 = RecoveredCall_1bb2c0_9(field18);
    *reinterpret_cast<uint64_t*>((arg0 + 280)) = 0;
    }
    }
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>((arg0 + 288));
    *reinterpret_cast<uint32_t*>((arg0 + 372)) = 0;
    if (!(field20 == 0)) {
    const uint8_t field21 = *reinterpret_cast<const uint8_t*>((arg0 + 376));
    if (!((uint32_t(uint32_t(field21)) & 0x1ull) == 0)) {
    const uint64_t result10 = RecoveredCall_1bb2c0_10(field20);
    *reinterpret_cast<uint64_t*>((arg0 + 288)) = 0;
    }
    }
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((arg0 + 296));
    *reinterpret_cast<uint32_t*>((arg0 + 376)) = 0;
    if (!(field22 == 0)) {
    const uint8_t field23 = *reinterpret_cast<const uint8_t*>((arg0 + 380));
    if (!((uint32_t(uint32_t(field23)) & 0x1ull) == 0)) {
    const uint64_t result11 = RecoveredCall_1bb2c0_11(field22);
    *reinterpret_cast<uint64_t*>((arg0 + 296)) = 0;
    }
    }
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>((arg0 + 304));
    *reinterpret_cast<uint32_t*>((arg0 + 380)) = 0;
    if (!(field24 == 0)) {
    const uint8_t field25 = *reinterpret_cast<const uint8_t*>((arg0 + 384));
    if (!((uint32_t(uint32_t(field25)) & 0x1ull) == 0)) {
    const uint64_t result12 = RecoveredCall_1bb2c0_12(field24);
    *reinterpret_cast<uint64_t*>((arg0 + 304)) = 0;
    }
    }
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((arg0 + 312));
    *reinterpret_cast<uint32_t*>((arg0 + 384)) = 0;
    if (!(field26 == 0)) {
    const uint8_t field27 = *reinterpret_cast<const uint8_t*>((arg0 + 388));
    if (!((uint32_t(uint32_t(field27)) & 0x1ull) == 0)) {
    const uint64_t result13 = RecoveredCall_1bb2c0_13(field26);
    *reinterpret_cast<uint64_t*>((arg0 + 312)) = 0;
    }
    }
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>((arg0 + 320));
    *reinterpret_cast<uint32_t*>((arg0 + 388)) = 0;
    if (!(field28 == 0)) {
    const uint8_t field29 = *reinterpret_cast<const uint8_t*>((arg0 + 392));
    if (!((uint32_t(uint32_t(field29)) & 0x1ull) == 0)) {
    const uint64_t result14 = RecoveredCall_1bb2c0_14(field28);
    *reinterpret_cast<uint64_t*>((arg0 + 320)) = 0;
    }
    }
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>((arg0 + 328));
    *reinterpret_cast<uint32_t*>((arg0 + 392)) = 0;
    if (!(field30 == 0)) {
    const uint8_t field31 = *reinterpret_cast<const uint8_t*>((arg0 + 396));
    if (!((uint32_t(uint32_t(field31)) & 0x1ull) == 0)) {
    const uint64_t result15 = RecoveredCall_1bb2c0_15(field30);
    *reinterpret_cast<uint64_t*>((arg0 + 328)) = 0;
    }
    }
    *reinterpret_cast<uint32_t*>((arg0 + 396)) = 0;
    return LeafTarget_1bb2c0(arg0);
}

extern "C" uint64_t RecoveredCall_1bef70_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1bef70(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 28));
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((arg0 + 24));
    if (!(uint32_t(uint32_t(field1)) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    if (!(field2 == 0)) {
    const uint64_t result0 = RecoveredCall_1bef70_0(field2);
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = 0;
    *reinterpret_cast<uint32_t*>((arg0 + 32)) = 0;
    }
    }
    *reinterpret_cast<uint32_t*>((arg0 + 24)) = 0;
    }
    return uint32_t(1);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1bf7d0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == arg1)) {
    *reinterpret_cast<uint32_t*>((arg0 + 16)) = 0;
    }
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = arg1;
    return field0;
}

extern "C" uint64_t RecoveredCall_1bf990_0(uint64_t);
extern "C" uint64_t LeafTarget_1bf990(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1bf990(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (!(field0 == 0)) {
    const uint64_t result0 = RecoveredCall_1bf990_0(field0);
    }
    return LeafTarget_1bf990(arg0);
}

extern "C" uint64_t RecoveredCall_1c25a0_0(uint64_t);
extern "C" uint64_t LeafTarget_1c25a0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1c25a0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (!(field0 == 0)) {
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((arg0 + 16));
    if (!((uint32_t(uint32_t(field1)) & 0x10ull) != 0)) {
    const uint64_t result0 = RecoveredCall_1c25a0_0(field0);
    }
    }
    return LeafTarget_1c25a0(arg0);
}

extern "C" uint64_t RecoveredCall_1c79c0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1c79c0_1(uint64_t);
extern "C" uint64_t LeafTarget_1c79c0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1c79c0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint64_t result0 = RecoveredCall_1c79c0_0(field0,field1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result1 = RecoveredCall_1c79c0_1(field2);
    }
    return LeafTarget_1c79c0(arg0);
}

extern "C" uint64_t RecoveredCall_1c99a0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1c99a0_2(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1c99a0_3(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1c99a0_4(uint64_t);
extern "C" uint64_t RecoveredCall_1c99a0_5(uint64_t);
extern "C" uint64_t RecoveredCall_1c99a0_6(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_1c99a0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 56));
    if (!(field1 == 0)) {
    const uint64_t result0 = RecoveredCall_1c99a0_0(arg0,uint32_t(2));
    if (!(uint32_t(result0) != 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 56));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(arg0);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (!(field4 == 0)) {
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((field4 + 104));
    if (!(uint32_t(uint32_t(field5)) == 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field6 == 0)) {
    const uint64_t result2 = RecoveredCall_1c99a0_2(arg0,uint32_t(4));
    if (!(uint32_t(result2) != 0)) {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    const int32_t field9 = *reinterpret_cast<const int32_t*>((field7 + 104));
    const uint64_t result3 = RecoveredCall_1c99a0_3(field8,field9);
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    const uint64_t result4 = RecoveredCall_1c99a0_4(field10);
    }
    }
    }
    }
    }
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    if (!(field11 == 0)) {
    const uint64_t result5 = RecoveredCall_1c99a0_5(field11);
    }
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (!(field12 == 0)) {
    const uint64_t result6 = RecoveredCall_1c99a0_6(field12);
    }
    *reinterpret_cast<uint64_t*>(((arg0 + 32) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 32) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 16) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 16) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 0) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 0) + 8)) = 0;
    return uint32_t(1);
}

extern "C" uint64_t RecoveredCall_1cf970_1(uint64_t);
extern "C" uint64_t RecoveredCall_1cf970_2(uint64_t);
extern "C" uint64_t RecoveredCall_1cf970_3(uint64_t);
extern "C" uint64_t LeafTarget_1cf970(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1cf970(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 24));
    if (!(field1 == 0)) {
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    }
    }
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field2 == 0)) {
    const uint64_t result1 = RecoveredCall_1cf970_1(field2);
    }
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field3 == 0)) {
    const uint64_t result2 = RecoveredCall_1cf970_2(field3);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (!(field4 == 0)) {
    const uint64_t result3 = RecoveredCall_1cf970_3(field4);
    }
    return LeafTarget_1cf970(arg0);
}

extern "C" uint64_t RecoveredCall_1d0ab0_0(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_1d0ab0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    if (!(field0 == 0)) {
    const uint64_t result0 = RecoveredCall_1d0ab0_0(field0);
    }
    return uint32_t(1);
}

extern "C" unsigned char LeafData_1d1530_0[];
extern "C" uint64_t RecoveredCall_1d1530_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1d1530_1(uint64_t);
extern "C" uint64_t RecoveredCall_1d1530_2(uint64_t);
extern "C" uint64_t RecoveredCall_1d1530_3(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1d1530(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_1d1530_0(uint32_t(96),reinterpret_cast<uintptr_t>(LeafData_1d1530_0),uint32_t(332));
    if (!(result0 == 0)) {
    *reinterpret_cast<uint32_t*>((result0 + 0)) = 0;
    const uint64_t result1 = RecoveredCall_1d1530_1((result0 + 8));
    const uint64_t result2 = RecoveredCall_1d1530_2((result0 + 32));
    const uint64_t result3 = RecoveredCall_1d1530_3((result0 + 56));
    *reinterpret_cast<uint64_t*>((result0 + 80)) = 0;
    *reinterpret_cast<uint32_t*>((result0 + 88)) = uint32_t(uint32_t(1));
    }
    return result0;
}

extern "C" uint64_t RecoveredCall_1d8920_0(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_1d8920(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    if (!(field0 == 0)) {
    const uint64_t result0 = RecoveredCall_1d8920_0(field0);
    }
    return uint32_t(1);
}

extern "C" uint64_t RecoveredCall_1d9000_0(uint64_t);
extern "C" uint64_t RecoveredCall_1d9000_1(uint64_t);
extern "C" uint64_t LeafTarget_1d9000(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1d9000(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (!(field0 == 0)) {
    const uint64_t result0 = RecoveredCall_1d9000_0(field0);
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (!(field1 == 0)) {
    const uint64_t result1 = RecoveredCall_1d9000_1(field1);
    }
    return LeafTarget_1d9000(arg0);
}

extern "C" uint64_t RecoveredCall_1d95f0_0(uint64_t);
extern "C" uint64_t RecoveredCall_1d95f0_1(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_1d95f0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field0 == 0)) {
    const uint64_t result0 = RecoveredCall_1d95f0_0(field0);
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result1 = RecoveredCall_1d95f0_1(arg1,field1);
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = result1;
    return uint32_t((result1 != 0));
}

extern "C" uint64_t RecoveredCall_1d9640_0(uint64_t);
extern "C" uint64_t RecoveredCall_1d9640_1(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_1d9640(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (!(field0 == 0)) {
    const uint64_t result0 = RecoveredCall_1d9640_0(field0);
    }
    const uint64_t result1 = RecoveredCall_1d9640_1(arg1);
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = result1;
    return uint32_t((result1 != 0));
}

extern "C" uint64_t LeafTarget_1d9a90(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1d9a90(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 80));
    if (!(field1 == 0)) {
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    }
    return LeafTarget_1d9a90(arg0);
}

extern "C" uint64_t RecoveredCall_1dd740_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1dd740_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1dd740_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1dd740(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    if (!(arg1 == 0)) {
    const uint64_t result0 = RecoveredCall_1dd740_0(arg1,(arg0 + 104));
    if (result0 == 0) return result0;
    }
    if (!(arg2 == 0)) {
    const uint64_t result1 = RecoveredCall_1dd740_1(arg2,(arg0 + 152));
    if (result1 == 0) return result1;
    }
    if (!(arg3 == 0)) {
    const uint64_t result2 = RecoveredCall_1dd740_2(arg3,(arg0 + 176));
    if (result2 == 0) return result2;
    }
    return uint32_t(1);
}

extern "C" uint64_t RecoveredCall_1e0820_0(uint64_t);
extern "C" uint64_t RecoveredCall_1e0820_1(uint64_t);
extern "C" void LeafTarget_1e0820(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1e0820(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 208));
    if (!(field0 == 0)) {
    const uint64_t result0 = RecoveredCall_1e0820_0(field0);
    *reinterpret_cast<uint64_t*>((arg0 + 208)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 216));
    if (!(field1 == 0)) {
    const uint64_t result1 = RecoveredCall_1e0820_1(field1);
    *reinterpret_cast<uint64_t*>((arg0 + 216)) = 0;
    }
    LeafTarget_1e0820(arg0);
}

extern "C" unsigned char LeafData_1e4e60_0[];
extern "C" uint64_t RecoveredCall_1e4e60_0(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1e4e60_1(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1e4e60(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_1e4e60_0(uint32_t(304),reinterpret_cast<uintptr_t>(LeafData_1e4e60_0),uint32_t(98));
    if (!(result0 == 0)) {
    const uint64_t result1 = RecoveredCall_1e4e60_1(result0);
    *reinterpret_cast<uint32_t*>((result0 + 296)) = uint32_t(uint32_t(-1));
    }
    return result0;
}

extern "C" uint64_t RecoveredCall_1e7880_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_1e7880(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (!(uint32_t(arg0) != 2)) {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 24));
    if (!(field1 == 0)) {
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((field1 + 0));
    if (!(uint32_t(uint32_t(field2)) != 4)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field1 + 8));
    if (!(field3 == 0)) {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 8));
    const int32_t field5 = *reinterpret_cast<const int32_t*>((field3 + 0));
    const uint64_t result0 = RecoveredCall_1e7880_0(field4,field5);
    }
    }
    }
    }
    return uint32_t(1);
}

extern "C" uint64_t RecoveredCall_1e7f20_0(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_1e7f20(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (!(uint32_t(arg0) != 3)) {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    const uint64_t result0 = RecoveredCall_1e7f20_0(field1);
    }
    return uint32_t(1);
}

extern "C" uint64_t RecoveredCall_1e83b0_0(uint64_t);
extern "C" uint64_t RecoveredCall_1e83b0_1(uint64_t);
extern "C" uint64_t RecoveredCall_1e83b0_2(uint64_t);
extern "C" uint64_t RecoveredCall_1e83b0_3(uint64_t);
extern "C" uint64_t LeafTarget_1e83b0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1e83b0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (!(field0 == 0)) {
    const uint64_t result0 = RecoveredCall_1e83b0_0(field0);
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (!(field1 == 0)) {
    const uint64_t result1 = RecoveredCall_1e83b0_1(field1);
    }
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field2 == 0)) {
    const uint64_t result2 = RecoveredCall_1e83b0_2(field2);
    }
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field3 == 0)) {
    const uint64_t result3 = RecoveredCall_1e83b0_3(field3);
    }
    return LeafTarget_1e83b0(arg0);
}

extern "C" uint64_t RecoveredCall_1e9f50_0(uint64_t);
extern "C" uint64_t RecoveredCall_1e9f50_1(uint64_t);
extern "C" uint64_t RecoveredCall_1e9f50_2(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_1e9f50(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 120));
    if (!(field0 == 0)) {
    const uint64_t result0 = RecoveredCall_1e9f50_0(field0);
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 128));
    if (!(field1 == 0)) {
    const uint64_t result1 = RecoveredCall_1e9f50_1(field1);
    }
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 136));
    if (!(field2 == 0)) {
    const uint64_t result2 = RecoveredCall_1e9f50_2(field2);
    }
    return uint32_t(1);
}

extern "C" uint64_t RecoveredCall_1ec800_0(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_1ec800(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (!(uint32_t(arg0) != 3)) {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 56));
    const uint64_t result0 = RecoveredCall_1ec800_0(field1);
    }
    return uint32_t(1);
}

extern "C" uint64_t RecoveredCall_1ec830_0(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_1ec830(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (!(uint32_t(arg0) != 3)) {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 32));
    const uint64_t result0 = RecoveredCall_1ec830_0(field1);
    }
    return uint32_t(1);
}

extern "C" uint64_t RecoveredCall_1f0800_0(uint64_t);
extern "C" uint64_t RecoveredCall_1f0800_1(uint64_t);
extern "C" uint64_t RecoveredCall_1f0800_2(uint64_t);
extern "C" uint64_t LeafTarget_1f0800(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1f0800(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (!(field0 == 0)) {
    const uint64_t result0 = RecoveredCall_1f0800_0(field0);
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field1 == 0)) {
    const uint64_t result1 = RecoveredCall_1f0800_1(field1);
    }
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (!(field2 == 0)) {
    const uint64_t result2 = RecoveredCall_1f0800_2(field2);
    }
    return LeafTarget_1f0800(arg0);
}

extern "C" uint64_t RecoveredCall_1fbbf0_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_1fbbf0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 28));
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((arg0 + 24));
    if (!(uint32_t(uint32_t(field1)) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    if (!(field2 == 0)) {
    const uint8_t field3 = *reinterpret_cast<const uint8_t*>((arg0 + 33));
    if (!((uint32_t(uint32_t(field3)) & 0x2ull) == 0)) {
    *reinterpret_cast<uint64_t*>((field2 + 8)) = 0;
    }
    const uint64_t result0 = RecoveredCall_1fbbf0_0(field2);
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = 0;
    }
    }
    }
    return uint32_t(1);
}

extern "C" uint64_t RecoveredCall_2044a0_0(uint64_t);
extern "C" uint64_t LeafTarget_2044a0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2044a0(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (!(field0 == 0)) {
    const uint64_t result0 = RecoveredCall_2044a0_0(field0);
    }
    return LeafTarget_2044a0(arg0);
}

extern "C" uint64_t RecoveredCall_214aa0_0(uint64_t);
extern "C" uint64_t RecoveredCall_214aa0_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_214aa0_2(uint64_t,uint64_t);
extern "C" void LeafTarget_214aa0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_214aa0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (!(field0 == 0)) {
    const uint64_t result0 = RecoveredCall_214aa0_0(field0);
    }
    const uint64_t result1 = RecoveredCall_214aa0_1(uint32_t(12),arg0,(arg0 + 32));
    const uint64_t result2 = RecoveredCall_214aa0_2(arg0,uint32_t(48));
    LeafTarget_214aa0(arg0);
}

extern "C" uint64_t RecoveredCall_2163a0_0(uint64_t,uint64_t);
extern "C" uint64_t LeafTarget_2163a0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_2163a0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    if (!(field1 == 0)) {
    const int32_t field2 = *reinterpret_cast<const int32_t*>((field0 + 0));
    const uint64_t result0 = RecoveredCall_2163a0_0(field1,field2);
    }
    return LeafTarget_2163a0(field0);
}

extern "C" uint64_t RecoveredCall_217c10_0(uint64_t);
extern "C" uint64_t RecoveredCall_217c10_1(uint64_t);
extern "C" uint64_t LeafTarget_217c10(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_217c10(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 56));
    if (!(field1 == 0)) {
    const uint64_t result0 = RecoveredCall_217c10_0(field1);
    }
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 40));
    if (!(field2 == 0)) {
    const uint64_t result1 = RecoveredCall_217c10_1(field2);
    }
    return LeafTarget_217c10(field0);
}

extern "C" uint64_t RecoveredCall_21a890_0(uint64_t);
extern "C" uint64_t RecoveredCall_21a890_1(uint64_t);
extern "C" uint64_t RecoveredCall_21a890_2(uint64_t);
extern "C" uint64_t LeafTarget_21a890(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_21a890(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    if (!(field1 == 0)) {
    const uint64_t result0 = RecoveredCall_21a890_0(field1);
    }
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 16));
    if (!(field2 == 0)) {
    const uint64_t result1 = RecoveredCall_21a890_1(field2);
    }
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field0 + 40));
    if (!(field3 == 0)) {
    const uint64_t result2 = RecoveredCall_21a890_2(field3);
    }
    return LeafTarget_21a890(field0);
}

extern "C" uint64_t RecoveredCall_21b610_0(uint64_t);
extern "C" uint64_t RecoveredCall_21b610_1(uint64_t,uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_21b610_2(uint64_t,uint64_t);
extern "C" void LeafTarget_21b610(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_21b610(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (!(field0 == 0)) {
    const uint64_t result0 = RecoveredCall_21b610_0(field0);
    }
    const uint64_t result1 = RecoveredCall_21b610_1(uint32_t(13),arg0,(arg0 + 32));
    const uint64_t result2 = RecoveredCall_21b610_2(arg0,uint32_t(48));
    LeafTarget_21b610(arg0);
}

extern "C" uint64_t RecoveredCall_21c280_0(uint64_t);
extern "C" uint64_t RecoveredCall_21c280_1(uint64_t);
extern "C" uint64_t RecoveredCall_21c280_2(uint64_t);
extern "C" uint64_t LeafTarget_21c280(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_21c280(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    if (field0 == 0) return arg0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    if (!(field1 == 0)) {
    const uint64_t result0 = RecoveredCall_21c280_0(field1);
    }
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 56));
    if (!(field2 == 0)) {
    const uint64_t result1 = RecoveredCall_21c280_1(field2);
    }
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field0 + 64));
    if (!(field3 == 0)) {
    const uint64_t result2 = RecoveredCall_21c280_2(field3);
    }
    return LeafTarget_21c280(field0);
}

extern "C" uint64_t RecoveredCall_220310_0(uint64_t);
extern "C" uint64_t RecoveredCall_220310_1(uint64_t);
extern "C" uint64_t RecoveredCall_220310_2(uint64_t);
extern "C" uint64_t RecoveredCall_220310_3(uint64_t);
extern "C" uint64_t RecoveredCall_220310_4(uint64_t);
extern "C" uint64_t RecoveredCall_220310_5(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_220310(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 208));
    if (!(field0 == 0)) {
    const uint64_t result0 = RecoveredCall_220310_0(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 208));
    const uint64_t result1 = RecoveredCall_220310_1(field1);
    *reinterpret_cast<uint64_t*>((arg0 + 208)) = 0;
    }
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 232));
    if (!(field2 == 0)) {
    const uint64_t result2 = RecoveredCall_220310_2(field2);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 232));
    const uint64_t result3 = RecoveredCall_220310_3(field3);
    *reinterpret_cast<uint64_t*>((arg0 + 232)) = 0;
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 224));
    if (!(field4 == 0)) {
    const uint64_t result4 = RecoveredCall_220310_4(field4);
    *reinterpret_cast<uint64_t*>((arg0 + 224)) = 0;
    }
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((arg0 + 248));
    if (field5 == 0) return field5;
    const uint64_t result5 = RecoveredCall_220310_5(field5);
    *reinterpret_cast<uint64_t*>((arg0 + 248)) = 0;
    return result5;
}

extern "C" uint64_t RecoveredCall_220b60_0(uint64_t);
extern "C" uint64_t RecoveredCall_220b60_1(uint64_t);
extern "C" uint64_t RecoveredCall_220b60_2(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_220b60(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    if (!(field0 != 0)) {
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint64_t*>((arg0 + 68)) = 105553116266496;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 32));
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = field2;
    const uint64_t result0 = RecoveredCall_220b60_0(arg0);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 216));
    if (!(field3 == 0)) {
    const uint64_t result1 = RecoveredCall_220b60_1(field3);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 240));
    *reinterpret_cast<uint64_t*>((arg0 + 216)) = 0;
    if (!(field4 == 0)) {
    const uint64_t result2 = RecoveredCall_220b60_2(field4);
    }
    *reinterpret_cast<uint64_t*>((arg0 + 240)) = 0;
    }
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 32));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field6)(arg0,field6);
    return result3;
}

extern "C" uint64_t RecoveredCall_220bd0_0(uint64_t);
extern "C" uint64_t RecoveredCall_220bd0_1(uint64_t);
extern "C" uint64_t RecoveredCall_220bd0_2(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_220bd0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    if (!(field0 != 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 68)) = 87960930222080;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = 0;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 40));
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = field2;
    const uint64_t result0 = RecoveredCall_220bd0_0(arg0);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 216));
    if (!(field3 == 0)) {
    const uint64_t result1 = RecoveredCall_220bd0_1(field3);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 240));
    *reinterpret_cast<uint64_t*>((arg0 + 216)) = 0;
    if (!(field4 == 0)) {
    const uint64_t result2 = RecoveredCall_220bd0_2(field4);
    }
    *reinterpret_cast<uint64_t*>((arg0 + 240)) = 0;
    }
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 40));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field6)(arg0,field6);
    return result3;
}

extern "C" uint64_t RecoveredCall_223060_0(uint64_t);
extern "C" uint64_t RecoveredCall_223060_1(uint64_t);
extern "C" uint64_t RecoveredCall_223060_2(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_223060(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    if (!(field1 == 0)) {
    const uint64_t result0 = RecoveredCall_223060_0(field1);
    }
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 24));
    if (!(field2 == 0)) {
    const uint64_t result1 = RecoveredCall_223060_1(field2);
    }
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    const uint64_t result2 = RecoveredCall_223060_2(field3);
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = 0;
    *reinterpret_cast<uint32_t*>((arg0 + 24)) = 0;
    *reinterpret_cast<uint32_t*>((arg0 + 32)) = 0;
    return uint32_t(1);
}

extern "C" uint64_t LeafTarget_223140(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_223140(uint64_t arg0) {
    LEAF_CHECK
    if (arg0 == 0) return arg0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 24));
    if (!(field1 == 0)) {
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    }
    return LeafTarget_223140(arg0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_229630(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 72));
    if (!(uint32_t(uint32_t(field0)) != uint32_t(uint32_t(8560)))) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 200));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 120));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field3)(arg0,uint32_t(14),0);
    *reinterpret_cast<uint32_t*>((arg0 + 72)) = uint32_t(uint32_t(8561));
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 200));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 128));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field6)(arg0,field6);
    return result1;
}

extern "C" uint64_t RecoveredCall_234f00_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_234f00(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    const uint64_t result0 = RecoveredCall_234f00_0(field1,((field0 + (field0 << 1)) << 4));
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = result0;
    if (result0 == 0) return result0;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = field2;
    }
    return uint32_t(1);
}

extern "C" uint64_t RecoveredCall_234fa0_0(uint64_t);
extern "C" void LeafTarget_234fa0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_234fa0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 584));
    if (!(field0 == 0)) {
    const uint64_t result0 = RecoveredCall_234fa0_0(field0);
    }
    LeafTarget_234fa0(arg0);
}

extern "C" uint64_t RecoveredCall_245e00_0(uint64_t);
extern "C" uint64_t RecoveredCall_245e00_1(uint64_t);
extern "C" uint64_t RecoveredCall_245e00_2(uint64_t);
extern "C" uint64_t RecoveredCall_245e00_3(uint64_t);
extern "C" void LeafTarget_245e00(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_245e00(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 40));
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    const uint64_t result0 = RecoveredCall_245e00_0(field1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    const uint64_t result1 = RecoveredCall_245e00_1(field2);
    }
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    if (!(field3 == 0)) {
    const uint64_t result2 = RecoveredCall_245e00_2(field3);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    if (!(field4 == 0)) {
    const uint64_t result3 = RecoveredCall_245e00_3(field4);
    }
    LeafTarget_245e00(arg0);
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_35b360(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    *reinterpret_cast<uint64_t*>((field0 + 40)) = field1;
    }
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    if (field2 == 0) return arg0;
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    *reinterpret_cast<uint64_t*>((field2 + 32)) = field3;
    return arg0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_3bfce0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg3 + 0));
    if (!(int32_t(uint32_t(uint32_t(field0))) < int32_t(1))) {
    *reinterpret_cast<uint8_t*>((arg0 + 81)) = uint32_t(uint32_t(1));
    const uint16_t field1 = *reinterpret_cast<const uint16_t*>((arg0 + 208));
    *reinterpret_cast<uint16_t*>((arg0 + 208)) = uint32_t(uint32_t((uint32_t(uint32_t(field1)) & 4294967167)));
    }
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field3)(arg1,arg1,field3);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_3fc120(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg3 + 0));
    if (!(int32_t(uint32_t(uint32_t(field0))) < int32_t(1))) {
    *reinterpret_cast<uint8_t*>((arg0 + 81)) = uint32_t(uint32_t(1));
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((arg0 + 260));
    *reinterpret_cast<uint8_t*>((arg0 + 260)) = uint32_t(uint32_t((uint32_t(uint32_t(field1)) & 4294967287)));
    }
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 56));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field3)(arg1,arg1,field3);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_4ae610(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 48));
    if (!((uint32_t(uint32_t(field0)) + 1) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    *reinterpret_cast<uint8_t*>((field2 + 0)) = 0;
    }
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    *reinterpret_cast<uint64_t*>((field1 + 24)) = arg0;
    *reinterpret_cast<uint64_t*>(((field1 + 48) + 0)) = field3;
    *reinterpret_cast<uint64_t*>(((field1 + 48) + 8)) = (arg0 + 104);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 360));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(field4,arg1,field6);
    return result0;
}

extern "C" uint64_t RecoveredCall_6a9610_0(uint64_t);
extern "C" uint64_t RecoveredCall_6a9610_1(uint64_t);
extern "C" uint64_t RecoveredCall_6a9610_2(uint64_t);
extern "C" uint64_t RecoveredCall_6a9610_3(uint64_t);
extern "C" uint64_t RecoveredCall_6a9610_4(uint64_t);
extern "C" uint64_t RecoveredCall_6a9610_5(uint64_t);
extern "C" uint64_t RecoveredCall_6a9610_6(uint64_t);
extern "C" uint64_t RecoveredCall_6a9610_7(uint64_t);
extern "C" uint64_t RecoveredCall_6a9610_8(uint64_t);
extern "C" uint64_t RecoveredCall_6a9610_9(uint64_t);
extern "C" uint64_t RecoveredCall_6a9610_10(uint64_t);
extern "C" uint64_t RecoveredCall_6a9610_11(uint64_t);
extern "C" uint64_t RecoveredCall_6a9610_12(uint64_t);
extern "C" uint64_t RecoveredCall_6a9610_13(uint64_t);
extern "C" uint64_t RecoveredCall_6a9610_14(uint64_t);
extern "C" uint64_t RecoveredCall_6a9610_15(uint64_t);
extern "C" uint64_t RecoveredCall_6a9610_16(uint64_t);
extern "C" uint64_t RecoveredCall_6a9610_17(uint64_t);
extern "C" uint64_t RecoveredCall_6a9610_18(uint64_t);
extern "C" uint64_t RecoveredCall_6a9610_19(uint64_t);
extern "C" uint64_t RecoveredCall_6a9610_20(uint64_t);
extern "C" uint64_t RecoveredCall_6a9610_21(uint64_t);
extern "C" uint64_t RecoveredCall_6a9610_22(uint64_t);
extern "C" uint64_t RecoveredCall_6a9610_23(uint64_t);
extern "C" uint64_t RecoveredCall_6a9610_24(uint64_t);
extern "C" uint64_t RecoveredCall_6a9610_25(uint64_t);
extern "C" uint64_t RecoveredCall_6a9610_26(uint64_t);
extern "C" uint64_t RecoveredCall_6a9610_27(uint64_t);
extern "C" uint64_t RecoveredCall_6a9610_28(uint64_t);
extern "C" uint64_t RecoveredCall_6a9610_29(uint64_t);
extern "C" uint64_t RecoveredCall_6a9610_30(uint64_t);
extern "C" uint64_t LeafTarget_6a9610(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_6a9610(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    if (!(field0 == 0)) {
    const uint64_t result0 = RecoveredCall_6a9610_0(field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t result1 = RecoveredCall_6a9610_1(field1);
    }
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (!(field2 == 0)) {
    const uint64_t result2 = RecoveredCall_6a9610_2(field2);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result3 = RecoveredCall_6a9610_3(field3);
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field4 == 0)) {
    const uint64_t result4 = RecoveredCall_6a9610_4(field4);
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    const uint64_t result5 = RecoveredCall_6a9610_5(field5);
    }
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field6 == 0)) {
    const uint64_t result6 = RecoveredCall_6a9610_6(field6);
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    const uint64_t result7 = RecoveredCall_6a9610_7(field7);
    }
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    if (!(field8 == 0)) {
    const uint64_t result8 = RecoveredCall_6a9610_8(field8);
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    const uint64_t result9 = RecoveredCall_6a9610_9(field9);
    }
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    if (!(field10 == 0)) {
    const uint64_t result10 = RecoveredCall_6a9610_10(field10);
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    const uint64_t result11 = RecoveredCall_6a9610_11(field11);
    }
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    if (!(field12 == 0)) {
    const uint64_t result12 = RecoveredCall_6a9610_12(field12);
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    const uint64_t result13 = RecoveredCall_6a9610_13(field13);
    }
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    if (!(field14 == 0)) {
    const uint64_t result14 = RecoveredCall_6a9610_14(field14);
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((arg0 + 56));
    const uint64_t result15 = RecoveredCall_6a9610_15(field15);
    }
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    if (!(field16 == 0)) {
    const uint64_t result16 = RecoveredCall_6a9610_16(field16);
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((arg0 + 64));
    const uint64_t result17 = RecoveredCall_6a9610_17(field17);
    }
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    if (!(field18 == 0)) {
    const uint64_t result18 = RecoveredCall_6a9610_18(field18);
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    const uint64_t result19 = RecoveredCall_6a9610_19(field19);
    }
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    if (!(field20 == 0)) {
    const uint64_t result20 = RecoveredCall_6a9610_20(field20);
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    const uint64_t result21 = RecoveredCall_6a9610_21(field21);
    }
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    if (!(field22 == 0)) {
    const uint64_t result22 = RecoveredCall_6a9610_22(field22);
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    const uint64_t result23 = RecoveredCall_6a9610_23(field23);
    }
    const uint64_t field24 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    if (!(field24 == 0)) {
    const uint64_t result24 = RecoveredCall_6a9610_24(field24);
    const uint64_t field25 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    const uint64_t result25 = RecoveredCall_6a9610_25(field25);
    }
    const uint64_t field26 = *reinterpret_cast<const uint64_t*>((arg0 + 104));
    if (!(field26 == 0)) {
    const uint64_t result26 = RecoveredCall_6a9610_26(field26);
    const uint64_t field27 = *reinterpret_cast<const uint64_t*>((arg0 + 104));
    const uint64_t result27 = RecoveredCall_6a9610_27(field27);
    }
    const uint64_t field28 = *reinterpret_cast<const uint64_t*>((arg0 + 112));
    if (!(field28 == 0)) {
    const uint64_t result28 = RecoveredCall_6a9610_28(field28);
    const uint64_t field29 = *reinterpret_cast<const uint64_t*>((arg0 + 112));
    const uint64_t result29 = RecoveredCall_6a9610_29(field29);
    }
    const uint64_t field30 = *reinterpret_cast<const uint64_t*>((arg0 + 120));
    if (field30 == 0) return field30;
    const uint64_t result30 = RecoveredCall_6a9610_30(field30);
    const uint64_t field31 = *reinterpret_cast<const uint64_t*>((arg0 + 120));
    return LeafTarget_6a9610(field31);
}

extern "C" unsigned char LeafData_6d0490_0[];
extern "C" uint64_t RecoveredCall_6d0490_0(uint64_t);
extern "C" void LeafTarget_6d0490(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_6d0490(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_6d0490_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    if (!(field0 == 0)) {
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((arg0 + 40));
    if (!(uint32_t(uint32_t(field1)) == 0)) {
    const uint64_t result0 = RecoveredCall_6d0490_0(field0);
    }
    }
    LeafTarget_6d0490(arg0);
}

extern "C" uint64_t LeafData_709850_2;
extern "C" __attribute__((noinline)) void RecoveredLeaf_709850(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    if (!((uint32_t(uint32_t(field0)) & 0x1ull) == 0)) {
    const uint64_t field1 = LeafData_709850_2;
    *reinterpret_cast<uint64_t*>((field1 + 152)) = 0;
    }
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) & 4294967293)));
}

extern "C" void LeafTarget_75e4a0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_75e4a0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    LeafTarget_75e4a0(field1);
}

extern "C" unsigned char LeafData_7ae8c0_0[];
extern "C" uint64_t RecoveredCall_7ae8c0_0(uint64_t);
extern "C" uint64_t RecoveredCall_7ae8c0_1(uint64_t);
extern "C" unsigned char LeafData_7ae8c0_14[];
extern "C" uint64_t RecoveredCall_7ae8c0_2(uint64_t);
extern "C" void LeafTarget_7ae8c0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7ae8c0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_7ae8c0_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 216));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 216)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 200));
    const uint64_t result0 = RecoveredCall_7ae8c0_0(field1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 184));
    if (!(field2 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 184)) = 0;
    }
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 168));
    const uint64_t result1 = RecoveredCall_7ae8c0_1(field3);
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_7ae8c0_14);
    const uint64_t result2 = RecoveredCall_7ae8c0_2((arg0 + 80));
    LeafTarget_7ae8c0(arg0);
}

extern "C" unsigned char LeafData_7ae920_0[];
extern "C" uint64_t RecoveredCall_7ae920_0(uint64_t);
extern "C" uint64_t RecoveredCall_7ae920_1(uint64_t);
extern "C" unsigned char LeafData_7ae920_14[];
extern "C" uint64_t RecoveredCall_7ae920_2(uint64_t);
extern "C" uint64_t RecoveredCall_7ae920_3(uint64_t);
extern "C" void LeafTarget_7ae920(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7ae920(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_7ae920_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 216));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 216)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 200));
    const uint64_t result0 = RecoveredCall_7ae920_0(field1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 184));
    if (!(field2 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 184)) = 0;
    }
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 168));
    const uint64_t result1 = RecoveredCall_7ae920_1(field3);
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_7ae920_14);
    const uint64_t result2 = RecoveredCall_7ae920_2((arg0 + 80));
    const uint64_t result3 = RecoveredCall_7ae920_3(arg0);
    LeafTarget_7ae920(arg0);
}

extern "C" unsigned char LeafData_7c9350_0[];
extern "C" uint64_t RecoveredCall_7c9350_0(uint64_t);
extern "C" void LeafTarget_7c9350(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7c9350(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_7c9350_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 40));
    if (!(field0 == 0)) {
    const uint64_t result0 = RecoveredCall_7c9350_0(field0);
    }
    LeafTarget_7c9350(arg0);
}

extern "C" void LeafTarget_7c9420(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7c9420(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    LeafTarget_7c9420(field1);
}

extern "C" void LeafTarget_7cbbf0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7cbbf0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    LeafTarget_7cbbf0(field1);
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_7ebf60(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>(((arg0 + 12) + 0));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>(((arg0 + 12) + 4));
    *reinterpret_cast<uint32_t*>((arg0 + 16)) = uint32_t(uint32_t((uint32_t(uint32_t(field1)) + uint32_t(arg1))));
    if (!(uint32_t(uint32_t((uint32_t(uint32_t(field1)) + uint32_t(arg1)))) <= uint32_t(uint32_t(field0)))) {
    *reinterpret_cast<uint32_t*>((arg0 + 8)) = uint32_t(uint32_t(3));
    }
    return uint32_t(1);
}

extern "C" unsigned char LeafData_7fd2b0_0[];
extern "C" void LeafTarget_7fd2b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7fd2b0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_7fd2b0_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    LeafTarget_7fd2b0(field1);
}

extern "C" unsigned char LeafData_7fd2d0_0[];
extern "C" uint64_t RecoveredCall_7fd2d0_0(uint64_t);
extern "C" void LeafTarget_7fd2d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_7fd2d0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_7fd2d0_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_7fd2d0_0(field1);
    LeafTarget_7fd2d0(arg0);
}

extern "C" unsigned char LeafData_806250_0[];
extern "C" uint64_t RecoveredCall_806250_0(uint64_t);
extern "C" void LeafTarget_806250(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_806250(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_806250_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_806250_0(field1);
    LeafTarget_806250(arg0);
}

extern "C" unsigned char LeafData_80a000_0[];
extern "C" uint64_t RecoveredCall_80a000_0(uint64_t);
extern "C" void LeafTarget_80a000(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_80a000(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_80a000_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_80a000_0(field1);
    LeafTarget_80a000(arg0);
}

extern "C" unsigned char LeafData_80ad90_0[];
extern "C" uint64_t RecoveredCall_80ad90_0(uint64_t);
extern "C" void LeafTarget_80ad90(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_80ad90(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_80ad90_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_80ad90_0(field1);
    LeafTarget_80ad90(arg0);
}

extern "C" unsigned char LeafData_80d2f0_0[];
extern "C" uint64_t RecoveredCall_80d2f0_0(uint64_t);
extern "C" void LeafTarget_80d2f0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_80d2f0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_80d2f0_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_80d2f0_0(field1);
    LeafTarget_80d2f0(arg0);
}

extern "C" unsigned char LeafData_815020_0[];
extern "C" uint64_t RecoveredCall_815020_0(uint64_t);
extern "C" void LeafTarget_815020(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_815020(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_815020_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_815020_0(field1);
    LeafTarget_815020(arg0);
}

extern "C" unsigned char LeafData_817b30_0[];
extern "C" uint64_t RecoveredCall_817b30_0(uint64_t);
extern "C" void LeafTarget_817b30(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_817b30(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_817b30_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_817b30_0(field1);
    LeafTarget_817b30(arg0);
}

extern "C" unsigned char LeafData_81aea0_0[];
extern "C" uint64_t RecoveredCall_81aea0_0(uint64_t);
extern "C" void LeafTarget_81aea0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_81aea0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_81aea0_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_81aea0_0(field1);
    LeafTarget_81aea0(arg0);
}

extern "C" unsigned char LeafData_824200_0[];
extern "C" uint64_t RecoveredCall_824200_0(uint64_t);
extern "C" void LeafTarget_824200(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_824200(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_824200_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_824200_0(field1);
    LeafTarget_824200(arg0);
}

extern "C" unsigned char LeafData_825470_0[];
extern "C" uint64_t RecoveredCall_825470_0(uint64_t);
extern "C" void LeafTarget_825470(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_825470(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_825470_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_825470_0(field1);
    LeafTarget_825470(arg0);
}

extern "C" unsigned char LeafData_82a490_0[];
extern "C" uint64_t RecoveredCall_82a490_0(uint64_t);
extern "C" void LeafTarget_82a490(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_82a490(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_82a490_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_82a490_0(field1);
    LeafTarget_82a490(arg0);
}

extern "C" unsigned char LeafData_82e260_0[];
extern "C" uint64_t RecoveredCall_82e260_0(uint64_t);
extern "C" void LeafTarget_82e260(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_82e260(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_82e260_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_82e260_0(field1);
    LeafTarget_82e260(arg0);
}

extern "C" unsigned char LeafData_82f570_0[];
extern "C" uint64_t RecoveredCall_82f570_0(uint64_t);
extern "C" void LeafTarget_82f570(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_82f570(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_82f570_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_82f570_0(field1);
    LeafTarget_82f570(arg0);
}

extern "C" unsigned char LeafData_830620_0[];
extern "C" uint64_t RecoveredCall_830620_0(uint64_t);
extern "C" void LeafTarget_830620(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_830620(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_830620_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_830620_0(field1);
    LeafTarget_830620(arg0);
}

extern "C" unsigned char LeafData_834150_0[];
extern "C" uint64_t RecoveredCall_834150_0(uint64_t);
extern "C" void LeafTarget_834150(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_834150(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_834150_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_834150_0(field1);
    LeafTarget_834150(arg0);
}

extern "C" unsigned char LeafData_836050_0[];
extern "C" uint64_t RecoveredCall_836050_0(uint64_t);
extern "C" void LeafTarget_836050(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_836050(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_836050_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_836050_0(field1);
    LeafTarget_836050(arg0);
}

extern "C" unsigned char LeafData_837970_0[];
extern "C" uint64_t RecoveredCall_837970_0(uint64_t);
extern "C" void LeafTarget_837970(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_837970(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_837970_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_837970_0(field1);
    LeafTarget_837970(arg0);
}

extern "C" unsigned char LeafData_83d5c0_0[];
extern "C" uint64_t RecoveredCall_83d5c0_0(uint64_t);
extern "C" void LeafTarget_83d5c0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_83d5c0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_83d5c0_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_83d5c0_0(field1);
    LeafTarget_83d5c0(arg0);
}

extern "C" unsigned char LeafData_850dc0_0[];
extern "C" uint64_t RecoveredCall_850dc0_0(uint64_t);
extern "C" void LeafTarget_850dc0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_850dc0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_850dc0_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_850dc0_0(field1);
    LeafTarget_850dc0(arg0);
}

extern "C" unsigned char LeafData_852460_0[];
extern "C" uint64_t RecoveredCall_852460_0(uint64_t);
extern "C" void LeafTarget_852460(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_852460(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_852460_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_852460_0(field1);
    LeafTarget_852460(arg0);
}

extern "C" unsigned char LeafData_853550_0[];
extern "C" uint64_t RecoveredCall_853550_0(uint64_t);
extern "C" void LeafTarget_853550(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_853550(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_853550_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_853550_0(field1);
    LeafTarget_853550(arg0);
}

extern "C" unsigned char LeafData_854950_0[];
extern "C" uint64_t RecoveredCall_854950_0(uint64_t);
extern "C" void LeafTarget_854950(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_854950(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_854950_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_854950_0(field1);
    LeafTarget_854950(arg0);
}

extern "C" unsigned char LeafData_857c60_0[];
extern "C" uint64_t RecoveredCall_857c60_0(uint64_t);
extern "C" void LeafTarget_857c60(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_857c60(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_857c60_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_857c60_0(field1);
    LeafTarget_857c60(arg0);
}

extern "C" unsigned char LeafData_858ca0_0[];
extern "C" uint64_t RecoveredCall_858ca0_0(uint64_t);
extern "C" void LeafTarget_858ca0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_858ca0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_858ca0_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_858ca0_0(field1);
    LeafTarget_858ca0(arg0);
}

extern "C" unsigned char LeafData_859c80_0[];
extern "C" uint64_t RecoveredCall_859c80_0(uint64_t);
extern "C" void LeafTarget_859c80(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_859c80(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_859c80_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_859c80_0(field1);
    LeafTarget_859c80(arg0);
}

extern "C" void LeafTarget_85acf0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_85acf0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    LeafTarget_85acf0(field1);
}

extern "C" unsigned char LeafData_85c290_0[];
extern "C" uint64_t RecoveredCall_85c290_0(uint64_t);
extern "C" void LeafTarget_85c290(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_85c290(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_85c290_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_85c290_0(field1);
    LeafTarget_85c290(arg0);
}

extern "C" unsigned char LeafData_85f3c0_0[];
extern "C" uint64_t RecoveredCall_85f3c0_0(uint64_t);
extern "C" void LeafTarget_85f3c0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_85f3c0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_85f3c0_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_85f3c0_0(field1);
    LeafTarget_85f3c0(arg0);
}

extern "C" unsigned char LeafData_868b30_0[];
extern "C" uint64_t RecoveredCall_868b30_0(uint64_t);
extern "C" void LeafTarget_868b30(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_868b30(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_868b30_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_868b30_0(field1);
    LeafTarget_868b30(arg0);
}

extern "C" unsigned char LeafData_869fe0_0[];
extern "C" uint64_t RecoveredCall_869fe0_0(uint64_t);
extern "C" void LeafTarget_869fe0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_869fe0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_869fe0_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_869fe0_0(field1);
    LeafTarget_869fe0(arg0);
}

extern "C" unsigned char LeafData_86bdb0_0[];
extern "C" uint64_t RecoveredCall_86bdb0_0(uint64_t);
extern "C" void LeafTarget_86bdb0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_86bdb0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_86bdb0_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_86bdb0_0(field1);
    LeafTarget_86bdb0(arg0);
}

extern "C" unsigned char LeafData_86d300_0[];
extern "C" uint64_t RecoveredCall_86d300_0(uint64_t);
extern "C" void LeafTarget_86d300(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_86d300(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_86d300_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_86d300_0(field1);
    LeafTarget_86d300(arg0);
}

extern "C" void LeafTarget_86d980(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_86d980(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 208));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    }
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 304));
    if (!(field3 == 0)) {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(field3);
    }
    LeafTarget_86d980(arg0);
}

extern "C" void LeafTarget_86d9e0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_86d9e0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 256));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 48));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    }
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 304));
    if (!(field3 == 0)) {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(field3);
    }
    LeafTarget_86d9e0(arg0);
}

extern "C" unsigned char LeafData_86edc0_0[];
extern "C" uint64_t RecoveredCall_86edc0_0(uint64_t);
extern "C" void LeafTarget_86edc0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_86edc0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_86edc0_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_86edc0_0(field1);
    LeafTarget_86edc0(arg0);
}

extern "C" unsigned char LeafData_870480_0[];
extern "C" uint64_t RecoveredCall_870480_0(uint64_t);
extern "C" void LeafTarget_870480(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_870480(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_870480_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_870480_0(field1);
    LeafTarget_870480(arg0);
}

extern "C" unsigned char LeafData_8715b0_0[];
extern "C" uint64_t RecoveredCall_8715b0_0(uint64_t);
extern "C" void LeafTarget_8715b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8715b0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_8715b0_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_8715b0_0(field1);
    LeafTarget_8715b0(arg0);
}

extern "C" unsigned char LeafData_872260_0[];
extern "C" uint64_t RecoveredCall_872260_0(uint64_t);
extern "C" void LeafTarget_872260(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_872260(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_872260_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_872260_0(field1);
    LeafTarget_872260(arg0);
}

extern "C" unsigned char LeafData_875fa0_0[];
extern "C" uint64_t RecoveredCall_875fa0_0(uint64_t);
extern "C" void LeafTarget_875fa0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_875fa0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_875fa0_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_875fa0_0(field1);
    LeafTarget_875fa0(arg0);
}

extern "C" unsigned char LeafData_877010_0[];
extern "C" uint64_t RecoveredCall_877010_0(uint64_t);
extern "C" void LeafTarget_877010(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_877010(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_877010_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_877010_0(field1);
    LeafTarget_877010(arg0);
}

extern "C" unsigned char LeafData_878e60_0[];
extern "C" uint64_t RecoveredCall_878e60_0(uint64_t);
extern "C" void LeafTarget_878e60(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_878e60(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_878e60_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_878e60_0(field1);
    LeafTarget_878e60(arg0);
}

extern "C" unsigned char LeafData_87a210_0[];
extern "C" uint64_t RecoveredCall_87a210_0(uint64_t);
extern "C" void LeafTarget_87a210(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_87a210(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_87a210_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_87a210_0(field1);
    LeafTarget_87a210(arg0);
}

extern "C" unsigned char LeafData_87aa10_0[];
extern "C" uint64_t RecoveredCall_87aa10_0(uint64_t);
extern "C" void LeafTarget_87aa10(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_87aa10(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_87aa10_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_87aa10_0(field1);
    LeafTarget_87aa10(arg0);
}

extern "C" unsigned char LeafData_87acc0_0[];
extern "C" uint64_t RecoveredCall_87acc0_0(uint64_t);
extern "C" void LeafTarget_87acc0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_87acc0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_87acc0_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_87acc0_0(field1);
    LeafTarget_87acc0(arg0);
}

extern "C" unsigned char LeafData_87c7d0_0[];
extern "C" uint64_t RecoveredCall_87c7d0_0(uint64_t);
extern "C" void LeafTarget_87c7d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_87c7d0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_87c7d0_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint64_t result0 = RecoveredCall_87c7d0_0(field1);
    LeafTarget_87c7d0(arg0);
}

extern "C" void LeafTarget_88fd70(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_88fd70(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 352));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 360));
    if (!(field4 == 0)) {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    if (!(field5 == 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 24));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field5);
    }
    }
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 368));
    if (!(field8 == 0)) {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    if (!(field9 == 0)) {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 24));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field11)(field9);
    }
    }
    LeafTarget_88fd70(arg0);
}

extern "C" void LeafTarget_8bd720(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_8bd720(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 344));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 352));
    if (!(field4 == 0)) {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    if (!(field5 == 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 24));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field5);
    }
    }
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 360));
    if (!(field8 == 0)) {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    if (!(field9 == 0)) {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 24));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field11)(field9);
    }
    }
    LeafTarget_8bd720(arg0);
}

extern "C" uint64_t RecoveredCall_931d80_0(uint64_t);
extern "C" uint64_t RecoveredCall_931d80_1(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_931d80(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t((uint32_t(uint32_t(field0)) | 2)));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    if (!(field1 == 0)) {
    const uint64_t result0 = RecoveredCall_931d80_0(arg0);
    }
    const uint64_t result1 = RecoveredCall_931d80_1((arg0 + 88));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((result1 + 6096));
    *reinterpret_cast<uint64_t*>((arg0 + 100)) = field2;
    *reinterpret_cast<uint8_t*>((arg0 + 96)) = 0;
    return result1;
}

extern "C" uint64_t RecoveredCall_a7f080_0(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_a7f080(uint64_t arg0) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 344));
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint64_t result0 = RecoveredCall_a7f080_0((arg0 + 368));
    }
    return uint32_t(1);
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_a94d60(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    if (!(arg2 == 0)) {
    *reinterpret_cast<uint32_t*>((arg2 + 0)) = 0;
    }
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 24));
    return uint32_t(field0);
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_aaf610(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    if (!(arg2 == 0)) {
    *reinterpret_cast<uint32_t*>((arg2 + 0)) = 0;
    }
    return uint32_t(0);
}

extern "C" unsigned char LeafData_aafbe0_0[];
extern "C" uint64_t RecoveredCall_aafbe0_0(uint64_t);
extern "C" void LeafTarget_aafbe0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_aafbe0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_aafbe0_0);
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 32));
    if (!((uint32_t(uint32_t(field0)) + 1) == 0)) {
    const uint64_t result0 = RecoveredCall_aafbe0_0(uint32_t(field0));
    }
    LeafTarget_aafbe0(arg0);
}

extern "C" void LeafTarget_b00380(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b00380(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 320));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 328));
    if (!(field4 == 0)) {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    if (!(field5 == 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 24));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field5);
    }
    }
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 336));
    if (!(field8 == 0)) {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    if (!(field9 == 0)) {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 24));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field11)(field9);
    }
    }
    LeafTarget_b00380(arg0);
}

extern "C" void LeafTarget_b01cc0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b01cc0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 312));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 320));
    if (!(field4 == 0)) {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    if (!(field5 == 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 24));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field5);
    }
    }
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 328));
    if (!(field8 == 0)) {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    if (!(field9 == 0)) {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 24));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field11)(field9);
    }
    }
    LeafTarget_b01cc0(arg0);
}

extern "C" void LeafTarget_b02d90(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b02d90(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 312));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 320));
    if (!(field4 == 0)) {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    if (!(field5 == 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 24));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field5);
    }
    }
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 328));
    if (!(field8 == 0)) {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    if (!(field9 == 0)) {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 24));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field11)(field9);
    }
    }
    LeafTarget_b02d90(arg0);
}

extern "C" void LeafTarget_b04440(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b04440(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 320));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 328));
    if (!(field4 == 0)) {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    if (!(field5 == 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 24));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field5);
    }
    }
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 336));
    if (!(field8 == 0)) {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    if (!(field9 == 0)) {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 24));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field11)(field9);
    }
    }
    LeafTarget_b04440(arg0);
}

extern "C" void LeafTarget_b04b20(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b04b20(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 328));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 336));
    if (!(field4 == 0)) {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    if (!(field5 == 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 24));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field5);
    }
    }
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 344));
    if (!(field8 == 0)) {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    if (!(field9 == 0)) {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 24));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field11)(field9);
    }
    }
    LeafTarget_b04b20(arg0);
}

extern "C" void LeafTarget_b061b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b061b0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 352));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 360));
    if (!(field4 == 0)) {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    if (!(field5 == 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 24));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field5);
    }
    }
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 368));
    if (!(field8 == 0)) {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    if (!(field9 == 0)) {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 24));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field11)(field9);
    }
    }
    LeafTarget_b061b0(arg0);
}

extern "C" void LeafTarget_b07d70(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b07d70(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 320));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 328));
    if (!(field4 == 0)) {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    if (!(field5 == 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 24));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field5);
    }
    }
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 336));
    if (!(field8 == 0)) {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    if (!(field9 == 0)) {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 24));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field11)(field9);
    }
    }
    LeafTarget_b07d70(arg0);
}

extern "C" void LeafTarget_b090e0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b090e0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 320));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 328));
    if (!(field4 == 0)) {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    if (!(field5 == 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 24));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field5);
    }
    }
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 336));
    if (!(field8 == 0)) {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    if (!(field9 == 0)) {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 24));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field11)(field9);
    }
    }
    LeafTarget_b090e0(arg0);
}

extern "C" void LeafTarget_b0a970(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b0a970(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 328));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 336));
    if (!(field4 == 0)) {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    if (!(field5 == 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 24));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field5);
    }
    }
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 344));
    if (!(field8 == 0)) {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    if (!(field9 == 0)) {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 24));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field11)(field9);
    }
    }
    LeafTarget_b0a970(arg0);
}

extern "C" void LeafTarget_b0eec0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_b0eec0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 320));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 8));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field3)(field1);
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 328));
    if (!(field4 == 0)) {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 8));
    if (!(field5 == 0)) {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 24));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field7)(field5);
    }
    }
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((arg0 + 336));
    if (!(field8 == 0)) {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 8));
    if (!(field9 == 0)) {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 24));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field11)(field9);
    }
    }
    LeafTarget_b0eec0(arg0);
}

extern "C" uint64_t LeafData_b8ef10_4;
extern "C" __attribute__((noinline)) void RecoveredLeaf_b8ef10(uint64_t arg0) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 129));
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((arg0 + 130));
    if (!(uint32_t(uint32_t(field1)) == 0)) {
    const uint64_t field2 = LeafData_b8ef10_4;
    *reinterpret_cast<uint32_t*>((field2 + 9336)) = uint32_t(uint32_t(-16777216));
    }
    }
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((arg0 + 56));
    *reinterpret_cast<uint32_t*>((arg0 + 56)) = uint32_t(uint32_t((uint32_t(uint32_t(field3)) & 4294967293)));
}

extern "C" void LeafTarget_c16200(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c16200(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    LeafTarget_c16200(field1);
}

extern "C" void LeafTarget_c16220(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c16220(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    LeafTarget_c16220(field1);
}

extern "C" void LeafTarget_c47420(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c47420(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    LeafTarget_c47420(field1);
}

extern "C" void LeafTarget_c47540(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c47540(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    LeafTarget_c47540(field1);
}

extern "C" void LeafTarget_c47560(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_c47560(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    LeafTarget_c47560(field1);
}

extern "C" uint64_t RecoveredCall_c56bc0_0(uint64_t);
extern "C" uint64_t RecoveredCall_c56bc0_1(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_c56bc0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 864));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t result0 = RecoveredCall_c56bc0_0(field1);
    if (!(field0 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t result1 = RecoveredCall_c56bc0_1(field2);
    }
    return uint32_t(0);
}

extern "C" uint32_t LeafData_cf93b0_5;
extern "C" uint64_t LeafData_cf93b0_8;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_cf93b0(uint64_t arg0) {
    LEAF_CHECK
    if (!(arg0 == 0)) {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    const uint32_t field2 = LeafData_cf93b0_5;
    if (!(uint32_t(uint32_t(field2)) == 0)) {
    const uint64_t field3 = LeafData_cf93b0_8;
    if (!(field3 == 0)) {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)(field3,arg0);
    }
    }
    }
    return uint32_t(0);
}

extern "C" uint32_t LeafData_cf96e0_5;
extern "C" uint64_t LeafData_cf96e0_8;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_cf96e0(uint64_t arg0) {
    LEAF_CHECK
    if (!(arg0 == 0)) {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    const uint32_t field2 = LeafData_cf96e0_5;
    if (!(uint32_t(uint32_t(field2)) == 0)) {
    const uint64_t field3 = LeafData_cf96e0_8;
    if (!(field3 == 0)) {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)(field3,arg0);
    }
    }
    }
    return uint32_t(0);
}

extern "C" uint32_t LeafData_cf97e0_5;
extern "C" uint64_t LeafData_cf97e0_8;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_cf97e0(uint64_t arg0) {
    LEAF_CHECK
    if (!(arg0 == 0)) {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    const uint32_t field2 = LeafData_cf97e0_5;
    if (!(uint32_t(uint32_t(field2)) == 0)) {
    const uint64_t field3 = LeafData_cf97e0_8;
    if (!(field3 == 0)) {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)(field3,arg0);
    }
    }
    }
    return uint32_t(0);
}

extern "C" uint32_t LeafData_cf98e0_5;
extern "C" uint64_t LeafData_cf98e0_8;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_cf98e0(uint64_t arg0) {
    LEAF_CHECK
    if (!(arg0 == 0)) {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    const uint32_t field2 = LeafData_cf98e0_5;
    if (!(uint32_t(uint32_t(field2)) == 0)) {
    const uint64_t field3 = LeafData_cf98e0_8;
    if (!(field3 == 0)) {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)(field3,arg0);
    }
    }
    }
    return uint32_t(0);
}

extern "C" uint32_t LeafData_cf99e0_5;
extern "C" uint64_t LeafData_cf99e0_8;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_cf99e0(uint64_t arg0) {
    LEAF_CHECK
    if (!(arg0 == 0)) {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    const uint32_t field2 = LeafData_cf99e0_5;
    if (!(uint32_t(uint32_t(field2)) == 0)) {
    const uint64_t field3 = LeafData_cf99e0_8;
    if (!(field3 == 0)) {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)(field3,arg0);
    }
    }
    }
    return uint32_t(0);
}

extern "C" uint32_t LeafData_cf9ba0_5;
extern "C" uint64_t LeafData_cf9ba0_8;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_cf9ba0(uint64_t arg0) {
    LEAF_CHECK
    if (!(arg0 == 0)) {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    const uint32_t field2 = LeafData_cf9ba0_5;
    if (!(uint32_t(uint32_t(field2)) == 0)) {
    const uint64_t field3 = LeafData_cf9ba0_8;
    if (!(field3 == 0)) {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)(field3,arg0);
    }
    }
    }
    return uint32_t(0);
}

extern "C" uint32_t LeafData_cf9ca0_5;
extern "C" uint64_t LeafData_cf9ca0_8;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_cf9ca0(uint64_t arg0) {
    LEAF_CHECK
    if (!(arg0 == 0)) {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    const uint32_t field2 = LeafData_cf9ca0_5;
    if (!(uint32_t(uint32_t(field2)) == 0)) {
    const uint64_t field3 = LeafData_cf9ca0_8;
    if (!(field3 == 0)) {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)(field3,arg0);
    }
    }
    }
    return uint32_t(0);
}

extern "C" uint32_t LeafData_cf9e30_5;
extern "C" uint64_t LeafData_cf9e30_8;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_cf9e30(uint64_t arg0) {
    LEAF_CHECK
    if (!(arg0 == 0)) {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    const uint32_t field2 = LeafData_cf9e30_5;
    if (!(uint32_t(uint32_t(field2)) == 0)) {
    const uint64_t field3 = LeafData_cf9e30_8;
    if (!(field3 == 0)) {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)(field3,arg0);
    }
    }
    }
    return uint32_t(0);
}

extern "C" uint32_t LeafData_cfa010_5;
extern "C" uint64_t LeafData_cfa010_8;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_cfa010(uint64_t arg0) {
    LEAF_CHECK
    if (!(arg0 == 0)) {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    const uint32_t field2 = LeafData_cfa010_5;
    if (!(uint32_t(uint32_t(field2)) == 0)) {
    const uint64_t field3 = LeafData_cfa010_8;
    if (!(field3 == 0)) {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)(field3,arg0);
    }
    }
    }
    return uint32_t(0);
}

extern "C" uint32_t LeafData_cfa1c0_5;
extern "C" uint64_t LeafData_cfa1c0_8;
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_cfa1c0(uint64_t arg0) {
    LEAF_CHECK
    if (!(arg0 == 0)) {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 24));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    const uint32_t field2 = LeafData_cfa1c0_5;
    if (!(uint32_t(uint32_t(field2)) == 0)) {
    const uint64_t field3 = LeafData_cfa1c0_8;
    if (!(field3 == 0)) {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)(field3,arg0);
    }
    }
    }
    return uint32_t(0);
}

extern "C" uint64_t RecoveredCall_d0d9f0_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d0d9f0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 736));
    if (!((uint32_t(uint32_t(field0)) & 0x1ull) == 0)) {
    const uint64_t result0 = RecoveredCall_d0d9f0_0(arg0,arg1);
    }
    return uint32_t(0);
}

extern "C" uint64_t RecoveredCall_d0e740_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_d0e740(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 744));
    if (!((uint32_t(uint32_t(field0)) & 0x1ull) == 0)) {
    const uint64_t result0 = RecoveredCall_d0e740_0((arg0 + 8),arg1);
    }
    return uint32_t(0);
}

extern "C" void LeafTarget_d1e930(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d1e930(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (!((arg0 + 176) == arg1)) {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 8));
    *reinterpret_cast<uint32_t*>((arg0 + 184)) = uint32_t(uint32_t(field0));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((arg1 + 12));
    *reinterpret_cast<uint32_t*>((arg0 + 188)) = uint32_t(uint32_t(field1));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((arg1 + 16));
    *reinterpret_cast<uint32_t*>((arg0 + 192)) = uint32_t(uint32_t(field2));
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((arg1 + 20));
    *reinterpret_cast<uint32_t*>((arg0 + 196)) = uint32_t(uint32_t(field3));
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((arg1 + 24));
    *reinterpret_cast<uint32_t*>((arg0 + 200)) = uint32_t(uint32_t(field4));
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((arg1 + 28));
    *reinterpret_cast<uint32_t*>((arg0 + 204)) = uint32_t(uint32_t(field5));
    const uint32_t field6 = *reinterpret_cast<const uint32_t*>((arg1 + 32));
    *reinterpret_cast<uint32_t*>((arg0 + 208)) = uint32_t(uint32_t(field6));
    }
    LeafTarget_d1e930(arg0,uint32_t(1));
}

extern "C" void LeafTarget_d6e100(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_d6e100(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 208));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 104));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    }
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 216));
    if (!(field3 == 0)) {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 104));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(field3);
    }
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 200));
    if (!(field6 == 0)) {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 104));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field8)(field6);
    }
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((arg0 + 192));
    if (!(field9 == 0)) {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 104));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t)>(field11)(field9);
    }
    LeafTarget_d6e100(arg0);
}

extern "C" uint64_t RecoveredCall_d6e170_0(uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d6e170(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_d6e170_0(arg0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 192));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 112));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    }
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 200));
    if (!(field3 == 0)) {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 112));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(field3);
    }
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 208));
    if (!(field6 == 0)) {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 112));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t)>(field8)(field6);
    }
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((arg0 + 216));
    if (field9 == 0) return field9;
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 112));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field11)(field9,field11);
    return result4;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d78040(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 104));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 104));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 120));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 48));
    if (!(field4 == 0)) {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 104));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field6)(field4);
    }
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field3 + 56));
    if (!(field7 == 0)) {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 104));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field9)(field7);
    }
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field3 + 64));
    if (!(field10 == 0)) {
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 0));
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((field11 + 104));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t)>(field12)(field10);
    }
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field3 + 72));
    if (!(field13 == 0)) {
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 0));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((field14 + 104));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t)>(field15)(field13);
    }
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((field3 + 80));
    if (field16 == 0) return field16;
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 0));
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((field17 + 104));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field18)(field16,field18);
    return result5;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d877d0(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 144));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 104));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    }
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 136));
    if (field3 == 0) return field3;
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 32));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)(field3,field5);
    return result1;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d87810(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 136));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 40));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    }
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 144));
    if (field3 == 0) return field3;
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 112));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)(field3,field5);
    return result1;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d87bc0(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 8));
    if (!(uint32_t(uint32_t(field0)) != 0)) {
    *reinterpret_cast<uint32_t*>((arg0 + 8)) = uint32_t(uint32_t(1));
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 32));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d87be0(uint64_t arg0) {
    LEAF_CHECK
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 8));
    if (!(uint32_t(uint32_t(field0)) != 1)) {
    *reinterpret_cast<uint32_t*>((arg0 + 8)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 40));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,field3);
    return result0;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d88f50(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 112));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 104));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    }
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 120));
    if (!(field3 == 0)) {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 104));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(field3);
    }
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 104));
    if (!(field6 == 0)) {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 104));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field8)(field6);
    }
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((arg0 + 128));
    if (!(field9 == 0)) {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 104));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t)>(field11)(field9);
    }
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    if (!(field12 == 0)) {
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 104));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t)>(field14)(field12);
    }
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    if (!(field15 == 0)) {
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((field15 + 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 104));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t)>(field17)(field15);
    }
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    if (!(field18 == 0)) {
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((field18 + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>((field19 + 104));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t)>(field20)(field18);
    }
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    if (field21 == 0) return field21;
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 0));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((field22 + 104));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field23)(field21,field23);
    return result7;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_d89010(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 112));
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 112));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field2)(field0);
    }
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg0 + 120));
    if (!(field3 == 0)) {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field3 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 112));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t)>(field5)(field3);
    }
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((arg0 + 104));
    if (!(field6 == 0)) {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 112));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t)>(field8)(field6);
    }
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((arg0 + 128));
    if (!(field9 == 0)) {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>((field10 + 112));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t)>(field11)(field9);
    }
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    if (!(field12 == 0)) {
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>((field12 + 0));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>((field13 + 112));
    const uint64_t result4 = reinterpret_cast<uint64_t (*)(uint64_t)>(field14)(field12);
    }
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    if (!(field15 == 0)) {
    const uint64_t field16 = *reinterpret_cast<const uint64_t*>((field15 + 0));
    const uint64_t field17 = *reinterpret_cast<const uint64_t*>((field16 + 112));
    const uint64_t result5 = reinterpret_cast<uint64_t (*)(uint64_t)>(field17)(field15);
    }
    const uint64_t field18 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    if (!(field18 == 0)) {
    const uint64_t field19 = *reinterpret_cast<const uint64_t*>((field18 + 0));
    const uint64_t field20 = *reinterpret_cast<const uint64_t*>((field19 + 112));
    const uint64_t result6 = reinterpret_cast<uint64_t (*)(uint64_t)>(field20)(field18);
    }
    const uint64_t field21 = *reinterpret_cast<const uint64_t*>((arg0 + 96));
    if (field21 == 0) return field21;
    const uint64_t field22 = *reinterpret_cast<const uint64_t*>((field21 + 0));
    const uint64_t field23 = *reinterpret_cast<const uint64_t*>((field22 + 112));
    const uint64_t result7 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field23)(field21,field23);
    return result7;
}


extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_db8180(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (field0 == 0) return field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 0));
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = field1;
    if (!(field1 != 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = 0;
    }
    *reinterpret_cast<uint64_t*>(((field0 + 0) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((field0 + 0) + 8)) = 0;
    return field0;
}

extern "C" unsigned char LeafData_db9300_0[];
extern "C" uint64_t RecoveredCall_db9300_0(uint64_t);
extern "C" void LeafTarget_db9300(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_db9300(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_db9300_0);
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 32));
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 24));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + -12));
    const uint64_t result0 = RecoveredCall_db9300_0(field2);
    }
    }
    LeafTarget_db9300(arg0);
}

extern "C" uint64_t RecoveredCall_dc0fd0_0(uint64_t);
extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_dc0fd0(uint64_t arg0) {
    LEAF_CHECK
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg0 + 352));
    if (!(uint32_t(uint32_t(field0)) == 0)) {
    const uint64_t result0 = RecoveredCall_dc0fd0_0((arg0 + 376));
    }
    return uint32_t(1);
}

extern "C" uint64_t RecoveredCall_dd8f40_0(uint64_t);
extern "C" void LeafTarget_dd8f40(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_dd8f40(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t result0 = RecoveredCall_dd8f40_0((arg0 + 56));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 160));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 160)) = 0;
    }
    LeafTarget_dd8f40((arg0 + 56));
}

extern "C" uint64_t RecoveredCall_e53110_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) uint64_t RecoveredLeaf_e53110(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 88));
    if (!(field1 == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    if (!(field2 == 0)) {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 176));
    if (!(field3 == 0)) {
    *reinterpret_cast<uint64_t*>((field2 + 160)) = field1;
    }
    }
    }
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((field0 + 808));
    const uint64_t result0 = RecoveredCall_e53110_0(field4,arg1);
    if (uint32_t(result0) != 0) return result0;
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field0 + 808));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 160));
    const ByteVector16 field7 = *reinterpret_cast<const ByteVector16*>((field6 + 24));
    const ByteVector16 field8 = *reinterpret_cast<const ByteVector16*>((field6 + 40));
    const ByteVector16 field9 = *reinterpret_cast<const ByteVector16*>((field6 + 56));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field6 + 72));
    *reinterpret_cast<uint64_t*>((arg0 + 72)) = field10;
    *reinterpret_cast<ByteVector16*>((arg0 + 56)) = field9;
    *reinterpret_cast<ByteVector16*>((arg0 + 40)) = field8;
    *reinterpret_cast<ByteVector16*>((arg0 + 24)) = field7;
    return result0;
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e5bd80(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    if (!(arg1 == 0)) {
    *reinterpret_cast<uint8_t*>((arg1 + 0)) = uint32_t(uint32_t(1));
    }
    return uint32_t(0);
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e5bda0(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    if (!(arg2 == 0)) {
    *reinterpret_cast<uint32_t*>((arg2 + 0)) = uint32_t(arg1);
    }
    return uint32_t(0);
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e60620(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 880));
    *reinterpret_cast<uint64_t*>(((arg3 + 0) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg3 + 0) + 8)) = 0;
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 168));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    *reinterpret_cast<uint64_t*>((arg3 + 0)) = int32_t(uint32_t(result0));
    }
    return uint32_t(0);
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e663b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 1104));
    *reinterpret_cast<uint8_t*>((arg1 + 0)) = 0;
    if (!(field0 == 0)) {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((field0 + 1868));
    if (!(uint32_t(uint32_t(field1)) == uint32_t(uint32_t(65535)))) {
    *reinterpret_cast<uint8_t*>((arg1 + 0)) = uint32_t(uint32_t(1));
    }
    }
    return uint32_t(0);
}


extern "C" __attribute__((noinline)) uint32_t RecoveredLeaf_e70f10(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 880));
    *reinterpret_cast<uint64_t*>(((arg3 + 0) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg3 + 0) + 8)) = 0;
    if (!(field0 == 0)) {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 168));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t)>(field1)(arg0);
    *reinterpret_cast<uint64_t*>((arg3 + 0)) = int32_t(uint32_t(result0));
    }
    return uint32_t(0);
}

extern "C" void LeafTarget_e95c30(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_e95c30(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 16)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    LeafTarget_e95c30(field1);
}

extern "C" unsigned char LeafData_eb52b0_0[];
extern "C" void LeafTarget_eb52b0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_eb52b0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_eb52b0_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    LeafTarget_eb52b0(field1);
}

extern "C" unsigned char LeafData_eb52d0_0[];
extern "C" uint64_t RecoveredCall_eb52d0_0(uint64_t);
extern "C" void LeafTarget_eb52d0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_eb52d0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_eb52d0_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    const uint64_t result0 = RecoveredCall_eb52d0_0(field1);
    LeafTarget_eb52d0(arg0);
}

extern "C" unsigned char LeafData_eb5ce0_0[];
extern "C" uint64_t RecoveredCall_eb5ce0_0(uint64_t);
extern "C" void LeafTarget_eb5ce0(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_eb5ce0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg0 + 0)) = reinterpret_cast<uintptr_t>(LeafData_eb5ce0_0);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 48));
    if (!(field0 == 0)) {
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = 0;
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 32));
    const uint64_t result0 = RecoveredCall_eb5ce0_0(field1);
    LeafTarget_eb5ce0(arg0);
}

extern "C" uint64_t RecoveredCall_eb7630_0(uint64_t);
extern "C" uint64_t RecoveredCall_eb7630_1(uint64_t);
extern "C" uint64_t RecoveredCall_eb7630_2(uint64_t);
extern "C" void LeafTarget_eb7630(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_eb7630(uint64_t arg0) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    if (!(field0 == 0)) {
    const uint64_t result0 = RecoveredCall_eb7630_0(field0);
    const uint64_t result1 = RecoveredCall_eb7630_1(field0);
    }
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 72));
    const uint64_t result2 = RecoveredCall_eb7630_2(field1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 80));
    LeafTarget_eb7630(field2);
}
