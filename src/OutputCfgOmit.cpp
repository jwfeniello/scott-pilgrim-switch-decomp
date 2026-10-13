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
struct RecoveredOutput_269050 {alignas(8) unsigned char storage[24];};
extern "C" __attribute__((noinline)) RecoveredOutput_269050 RecoveredLeaf_269050(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_269050 output;
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&output);
    uint64_t value_x9;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    value_x9 = uint32_t(field0);
    if (uint32_t(uint32_t(field0)) != uint32_t(uint32_t(((uint32_t(uint32_t(841)) & 0xffffull) | (14607ull << 16))))) goto block_9;
    goto block_5;
}
block_5: {
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 0)) = uint32_t(uint32_t(((uint32_t(uint32_t(48576)) & 0xffffull) | (65520ull << 16))));
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 4)) = 0;
    return output;
}
block_9: {
    *reinterpret_cast<uint32_t*>((value_x0 + 12)) = uint32_t(value_x9);
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 0)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 4)) = 0;
    return output;
}
}

struct RecoveredOutput_42f440 {alignas(8) unsigned char storage[24];};
extern "C" __attribute__((noinline)) RecoveredOutput_42f440 RecoveredLeaf_42f440(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_42f440 output;
    uint64_t value_x0 = arg0;
    uint64_t value_x10;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&output);
    uint64_t value_x9;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    value_x9 = field0;
    if (field0 == 0) goto block_23;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x9 + 40));
    value_x10 = field1;
    if (field1 == 0) goto block_8;
    goto block_4;
}
block_4: {
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x10 + 73));
    *reinterpret_cast<uint8_t*>((value_x10 + 73)) = uint32_t(uint32_t((uint32_t(uint32_t(field2)) + 1)));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    value_x9 = field3;
    goto block_8;
}
block_8: {
    *reinterpret_cast<uint8_t*>((value_x9 + 73)) = 0;
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    const uint8_t field5 = *reinterpret_cast<const uint8_t*>((value_x0 + 24));
    *reinterpret_cast<uint8_t*>((field4 + 74)) = uint32_t(uint32_t(field5));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 40));
    value_x10 = field7;
    value_x9 = field6;
    if (field7 == 0) goto block_17;
    goto block_15;
}
block_15: {
    const uint8_t field8 = *reinterpret_cast<const uint8_t*>((value_x10 + 74));
    value_x10 = uint32_t((uint32_t(uint32_t(field8)) + 1));
    goto block_17;
}
block_17: {
    *reinterpret_cast<uint8_t*>((value_x0 + 24)) = uint32_t(value_x10);
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x9 + 40));
    *reinterpret_cast<uint64_t*>((value_x0 + 32)) = field9;
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 0)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 4)) = 0;
    return output;
}
block_23: {
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 0)) = uint32_t(uint32_t(((uint32_t(uint32_t(48576)) & 0xffffull) | (65520ull << 16))));
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 4)) = 0;
    return output;
}
}

struct RecoveredOutput_42f6a0 {alignas(8) unsigned char storage[24];};
extern "C" __attribute__((noinline)) RecoveredOutput_42f6a0 RecoveredLeaf_42f6a0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_42f6a0 output;
    uint64_t value_x0 = arg0;
    uint64_t value_x10;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&output);
    uint64_t value_x9;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    value_x9 = field0;
    if (field0 == 0) goto block_26;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x9 + 40));
    value_x10 = field1;
    if (field1 == 0) goto block_8;
    goto block_4;
}
block_4: {
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x10 + 73));
    *reinterpret_cast<uint8_t*>((value_x10 + 73)) = uint32_t(uint32_t((uint32_t(uint32_t(field2)) + 1)));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    value_x9 = field3;
    goto block_8;
}
block_8: {
    *reinterpret_cast<uint8_t*>((value_x9 + 73)) = 0;
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    const uint8_t field5 = *reinterpret_cast<const uint8_t*>((value_x0 + 24));
    *reinterpret_cast<uint8_t*>((field4 + 74)) = uint32_t(uint32_t(field5));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 40));
    value_x10 = field7;
    value_x9 = field6;
    if (field7 == 0) goto block_17;
    goto block_15;
}
block_15: {
    const uint8_t field8 = *reinterpret_cast<const uint8_t*>((value_x10 + 74));
    value_x10 = uint32_t((uint32_t(uint32_t(field8)) + 1));
    goto block_17;
}
block_17: {
    *reinterpret_cast<uint8_t*>((value_x0 + 24)) = uint32_t(value_x10);
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x9 + 40));
    *reinterpret_cast<uint64_t*>((value_x0 + 32)) = field9;
    if (field9 != 0) goto block_23;
    goto block_21;
}
block_21: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x0 + 40));
    *reinterpret_cast<uint64_t*>((value_x0 + 32)) = field10;
    goto block_23;
}
block_23: {
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 0)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 4)) = 0;
    return output;
}
block_26: {
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 0)) = uint32_t(uint32_t(((uint32_t(uint32_t(48576)) & 0xffffull) | (65520ull << 16))));
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 4)) = 0;
    return output;
}
}

struct RecoveredOutput_42f7c0 {alignas(8) unsigned char storage[24];};
extern "C" __attribute__((noinline)) RecoveredOutput_42f7c0 RecoveredLeaf_42f7c0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_42f7c0 output;
    uint64_t value_x0 = arg0;
    uint64_t value_x10;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&output);
    uint64_t value_x9;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    value_x9 = field0;
    if (field0 == 0) goto block_19;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x9 + 40));
    value_x10 = field1;
    if (field1 == 0) goto block_8;
    goto block_4;
}
block_4: {
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x10 + 73));
    *reinterpret_cast<uint8_t*>((value_x10 + 73)) = uint32_t(uint32_t((uint32_t(uint32_t(field2)) + 1)));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    value_x9 = field3;
    goto block_8;
}
block_8: {
    *reinterpret_cast<uint8_t*>((value_x9 + 73)) = 0;
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    const uint8_t field5 = *reinterpret_cast<const uint8_t*>((value_x0 + 32));
    *reinterpret_cast<uint8_t*>((field4 + 74)) = uint32_t(uint32_t(field5));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 40));
    value_x10 = field7;
    value_x9 = (field6 + 40);
    if (field7 == 0) goto block_17;
    goto block_15;
}
block_15: {
    const uint8_t field8 = *reinterpret_cast<const uint8_t*>((value_x10 + 74));
    value_x10 = uint32_t((uint32_t(uint32_t(field8)) + 1));
    goto block_17;
}
block_17: {
    *reinterpret_cast<uint8_t*>((value_x0 + 32)) = uint32_t(value_x10);
    goto block_20;
}
block_19: {
    value_x9 = (value_x0 + 24);
    goto block_20;
}
block_20: {
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((value_x9 + 0));
    *reinterpret_cast<uint64_t*>((value_x0 + 16)) = field9;
    *reinterpret_cast<uint64_t*>((value_x8 + 0)) = uint32_t(1);
    return output;
}
}

struct RecoveredOutput_5884f0 {alignas(8) unsigned char storage[24];};
extern "C" __attribute__((noinline)) RecoveredOutput_5884f0 RecoveredLeaf_5884f0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5884f0 output;
    uint64_t value_x0 = arg0;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&output);
    uint64_t value_x9;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    value_x9 = field0;
    if (field0 == 0) goto block_5;
    goto block_2;
}
block_2: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>(((value_x9 + 32) + 0));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>(((value_x9 + 32) + 4));
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 0)) = uint32_t(uint32_t(field1));
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 4)) = uint32_t(uint32_t(field2));
    return output;
}
block_5: {
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 0)) = uint32_t(uint32_t(((uint32_t(uint32_t(48583)) & 0xffffull) | (65520ull << 16))));
    *reinterpret_cast<uint32_t*>(((value_x8 + 0) + 4)) = uint32_t(value_x9);
    return output;
}
}

struct RecoveredOutput_dd2c00 {alignas(8) unsigned char storage[24];};
extern "C" __attribute__((noinline)) RecoveredOutput_dd2c00 RecoveredLeaf_dd2c00(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_dd2c00 output;
    uint64_t value_x0 = arg0;
    uint64_t value_x10;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&output);
    uint64_t value_x9;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 16));
    *reinterpret_cast<uint8_t*>((value_x8 + 0)) = 0;
    *reinterpret_cast<uint64_t*>((value_x8 + 8)) = 0;
    *reinterpret_cast<uint32_t*>((value_x8 + 16)) = 0;
    value_x10 = field0;
    if ((field0 + 16) == value_x8) goto block_20;
    goto block_7;
}
block_7: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x10 + 16));
    *reinterpret_cast<uint64_t*>((value_x8 + 0)) = field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x10 + 24));
    *reinterpret_cast<uint64_t*>((value_x8 + 8)) = field2;
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x10 + 32));
    *reinterpret_cast<uint32_t*>((value_x8 + 16)) = uint32_t(uint32_t(field3));
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((value_x10 + 32));
    value_x9 = field1;
    if (uint32_t(uint32_t(field4)) != 2) goto block_20;
    goto block_16;
}
block_16: {
    const uint32_t field5 = __atomic_fetch_add(reinterpret_cast<uint32_t*>((value_x9 + 0)), 1, __ATOMIC_RELAXED);
    goto block_20;
}
block_20: {

    return output;
}
}

struct RecoveredOutput_ec6830 {alignas(8) unsigned char storage[32];};
extern "C" __attribute__((noinline)) RecoveredOutput_ec6830 RecoveredLeaf_ec6830(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_ec6830 output;
    uint64_t value_x0 = arg0;
    uint64_t value_x8 = reinterpret_cast<uintptr_t>(&output);
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 5640));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((field0 + 64));
    *reinterpret_cast<uint64_t*>((value_x8 + 24)) = field1;
    *reinterpret_cast<uint64_t*>(((value_x8 + 0) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((value_x8 + 0) + 8)) = 0;
    if (field1 == 0) goto block_7;
    goto block_5;
}
block_5: {
    *reinterpret_cast<uint32_t*>((value_x8 + 16)) = uint32_t(uint32_t(31));
    goto block_7;
}
block_7: {

    return output;
}
}
