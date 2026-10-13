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



extern "C" __attribute__((noinline)) void RecoveredLeaf_57210(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 24));
    value_x1 = field0;
    if (field0 == 0) goto block_8;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x0 + 56));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 168));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field3)(field1,value_x1);
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = 0;
    goto block_8;
}
block_8: {

    return;
}
}



extern "C" uint64_t RecoveredCall_15f860_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_15f860_1(uint64_t,uint64_t);
extern "C" void LeafTarget_15f860_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_15f860(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_15f860_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_15f860_1(value_x0,field1);
    return LeafTarget_15f860_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_160630_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_160630_1(uint64_t,uint64_t);
extern "C" void LeafTarget_160630_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_160630(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_160630_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_160630_1(value_x0,field1);
    return LeafTarget_160630_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_1606e0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1606e0_1(uint64_t,uint64_t);
extern "C" void LeafTarget_1606e0_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1606e0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_1606e0_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_1606e0_1(value_x0,field1);
    return LeafTarget_1606e0_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_160720_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_160720_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_160720_2(uint64_t,uint64_t);
extern "C" void LeafTarget_160720_12(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_160720(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_13;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_160720_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_160720_1(value_x0,field1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x1 + 48));
    const uint64_t result2 = RecoveredCall_160720_2((value_x1 + 40),field2);
    return LeafTarget_160720_12(value_x1);
}
block_13: {

    return;
}
}



extern "C" uint64_t RecoveredCall_160770_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_160770_1(uint64_t,uint64_t);
extern "C" void LeafTarget_160770_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_160770(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_160770_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_160770_1(value_x0,field1);
    return LeafTarget_160770_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_160840_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_160840_1(uint64_t,uint64_t);
extern "C" void LeafTarget_160840_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_160840(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_160840_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_160840_1(value_x0,field1);
    return LeafTarget_160840_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_160bd0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_160bd0_1(uint64_t,uint64_t);
extern "C" void LeafTarget_160bd0_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_160bd0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_160bd0_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_160bd0_1(value_x0,field1);
    return LeafTarget_160bd0_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_160c10_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_160c10_1(uint64_t,uint64_t);
extern "C" void LeafTarget_160c10_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_160c10(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_160c10_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_160c10_1(value_x0,field1);
    return LeafTarget_160c10_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_160c50_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_160c50_1(uint64_t,uint64_t);
extern "C" void LeafTarget_160c50_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_160c50(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_160c50_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_160c50_1(value_x0,field1);
    return LeafTarget_160c50_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_1613c0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1613c0_1(uint64_t,uint64_t);
extern "C" void LeafTarget_1613c0_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1613c0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_1613c0_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_1613c0_1(value_x0,field1);
    return LeafTarget_1613c0_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_161510_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_161510_1(uint64_t,uint64_t);
extern "C" void LeafTarget_161510_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_161510(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_161510_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_161510_1(value_x0,field1);
    return LeafTarget_161510_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_161860_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_161860_1(uint64_t,uint64_t);
extern "C" void LeafTarget_161860_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_161860(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_161860_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_161860_1(value_x0,field1);
    return LeafTarget_161860_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_1619f0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1619f0_1(uint64_t,uint64_t);
extern "C" void LeafTarget_1619f0_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1619f0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_1619f0_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_1619f0_1(value_x0,field1);
    return LeafTarget_1619f0_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_163190_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_163190_1(uint64_t,uint64_t);
extern "C" void LeafTarget_163190_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_163190(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_163190_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_163190_1(value_x0,field1);
    return LeafTarget_163190_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_163800_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_163800_1(uint64_t,uint64_t);
extern "C" void LeafTarget_163800_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_163800(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_163800_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_163800_1(value_x0,field1);
    return LeafTarget_163800_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_165600_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_165600_1(uint64_t,uint64_t);
extern "C" void LeafTarget_165600_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_165600(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_165600_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_165600_1(value_x0,field1);
    return LeafTarget_165600_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_167fa0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_167fa0_1(uint64_t,uint64_t);
extern "C" void LeafTarget_167fa0_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_167fa0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_167fa0_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_167fa0_1(value_x0,field1);
    return LeafTarget_167fa0_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_167fe0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_167fe0_1(uint64_t,uint64_t);
extern "C" void LeafTarget_167fe0_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_167fe0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_167fe0_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_167fe0_1(value_x0,field1);
    return LeafTarget_167fe0_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_1688a0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1688a0_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1688a0_2(uint64_t);
extern "C" void LeafTarget_1688a0_11(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1688a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_12;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_1688a0_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_1688a0_1(value_x0,field1);
    const uint64_t result2 = RecoveredCall_1688a0_2((value_x1 + 32));
    return LeafTarget_1688a0_11(value_x1);
}
block_12: {

    return;
}
}



extern "C" uint64_t RecoveredCall_169ce0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_169ce0_1(uint64_t,uint64_t);
extern "C" void LeafTarget_169ce0_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_169ce0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_169ce0_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_169ce0_1(value_x0,field1);
    return LeafTarget_169ce0_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_169d20_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_169d20_1(uint64_t,uint64_t);
extern "C" void LeafTarget_169d20_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_169d20(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_169d20_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_169d20_1(value_x0,field1);
    return LeafTarget_169d20_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_1750d0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1750d0_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_1750d0_2(uint64_t);
extern "C" void LeafTarget_1750d0_11(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_1750d0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_12;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_1750d0_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_1750d0_1(value_x0,field1);
    const uint64_t result2 = RecoveredCall_1750d0_2((value_x1 + 40));
    return LeafTarget_1750d0_11(value_x1);
}
block_12: {

    return;
}
}



extern "C" uint64_t RecoveredCall_18c7e0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_18c7e0_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_18c7e0_2(uint64_t);
extern "C" void LeafTarget_18c7e0_11(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_18c7e0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_12;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_18c7e0_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_18c7e0_1(value_x0,field1);
    const uint64_t result2 = RecoveredCall_18c7e0_2((value_x1 + 40));
    return LeafTarget_18c7e0_11(value_x1);
}
block_12: {

    return;
}
}



extern "C" uint64_t RecoveredCall_194e30_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_194e30_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_194e30_2(uint64_t);
extern "C" void LeafTarget_194e30_11(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_194e30(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_12;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_194e30_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_194e30_1(value_x0,field1);
    const uint64_t result2 = RecoveredCall_194e30_2((value_x1 + 40));
    return LeafTarget_194e30_11(value_x1);
}
block_12: {

    return;
}
}



extern "C" uint64_t RecoveredCall_2c4e10_0(uint64_t,uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_2c4e10(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 0));
    *reinterpret_cast<uint32_t*>((value_x0 + 0)) = uint32_t(uint32_t(field0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    *reinterpret_cast<uint64_t*>((value_x0 + 8)) = field1;
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x1 + 16));
    *reinterpret_cast<uint8_t*>((value_x0 + 16)) = uint32_t(uint32_t(field2));
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x1 + 20));
    *reinterpret_cast<uint32_t*>((value_x0 + 20)) = uint32_t(uint32_t(field3));
    value_x19 = value_x0;
    value_x20 = value_x1;
    if (value_x0 == value_x1) goto block_15;
    goto block_12;
}
block_12: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((value_x20 + 32) + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>(((value_x20 + 32) + 8));
    const uint64_t result0 = RecoveredCall_2c4e10_0((value_x19 + 32),field4,field5);
    goto block_15;
}
block_15: {
    const uint32_t field6 = *reinterpret_cast<const uint32_t*>((value_x20 + 24));
    *reinterpret_cast<uint32_t*>((value_x19 + 24)) = uint32_t(uint32_t(field6));
    return;
}
}



extern "C" uint64_t RecoveredCall_38d510_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_38d510(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    value_x21 = field0;
    if (field0 == 0) goto block_13;
    goto block_2;
}
block_2: {
    value_x19 = value_x0;
    value_x20 = (value_x0 + 64);
    goto block_4;
}
block_4: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x21 + 120));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x19 + 88));
    if (uint32_t(uint32_t(field1)) != uint32_t(uint32_t(field2))) goto block_11;
    goto block_8;
}
block_8: {
    const uint64_t result0 = RecoveredCall_38d510_0((value_x21 + 96),value_x20);
    goto block_11;
}
block_11: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x21 + 32));
    value_x21 = field3;
    if (field3 != 0) goto block_4;
    goto block_13;
}
block_13: {

    return;
}
}



extern "C" uint64_t RecoveredCall_38d570_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_38d570(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    value_x21 = field0;
    if (field0 == 0) goto block_13;
    goto block_2;
}
block_2: {
    value_x19 = value_x0;
    value_x20 = (value_x0 + 64);
    goto block_4;
}
block_4: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x21 + 152));
    const uint32_t field2 = *reinterpret_cast<const uint32_t*>((value_x19 + 88));
    if (uint32_t(uint32_t(field1)) != uint32_t(uint32_t(field2))) goto block_11;
    goto block_8;
}
block_8: {
    const uint64_t result0 = RecoveredCall_38d570_0((value_x21 + 128),value_x20);
    goto block_11;
}
block_11: {
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((value_x21 + 32));
    value_x21 = field3;
    if (field3 != 0) goto block_4;
    goto block_13;
}
block_13: {

    return;
}
}



extern "C" uint64_t RecoveredCall_45f370_0(uint64_t);
extern "C" uint64_t RecoveredCall_45f370_2(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_45f370(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 192));
    if (field0 == 0) goto block_13;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 48));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result0 = RecoveredCall_45f370_0(field3);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 192));
    value_x0 = field4;
    value_x1 = result0;
    if (field4 == 0) goto block_14;
    goto block_10;
}
block_10: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(value_x0,value_x1,field6);
    return;
    __builtin_unreachable();
}
block_13: {

    return;
}
block_14: {
    const uint64_t result2 = RecoveredCall_45f370_2(value_x0);
    __builtin_unreachable();
}
}



extern "C" uint64_t RecoveredCall_460680_0(uint64_t);
extern "C" uint64_t RecoveredCall_460680_2(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_460680(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 192));
    if (field0 == 0) goto block_13;
    goto block_2;
}
block_2: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 48));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 16));
    const uint64_t result0 = RecoveredCall_460680_0(field3);
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x0 + 192));
    value_x0 = field4;
    value_x1 = result0;
    if (field4 == 0) goto block_14;
    goto block_10;
}
block_10: {
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field6)(value_x0,value_x1,field6);
    return;
    __builtin_unreachable();
}
block_13: {

    return;
}
block_14: {
    const uint64_t result2 = RecoveredCall_460680_2(value_x0);
    __builtin_unreachable();
}
}



extern "C" uint64_t RecoveredCall_4ee0c0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_4ee0c0_1(uint64_t,uint64_t);
extern "C" void LeafTarget_4ee0c0_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4ee0c0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_4ee0c0_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_4ee0c0_1(value_x0,field1);
    return LeafTarget_4ee0c0_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_4ef1a0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_4ef1a0_1(uint64_t,uint64_t);
extern "C" void LeafTarget_4ef1a0_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4ef1a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_4ef1a0_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_4ef1a0_1(value_x0,field1);
    return LeafTarget_4ef1a0_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_4f26e0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_4f26e0_1(uint64_t,uint64_t);
extern "C" void LeafTarget_4f26e0_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4f26e0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_4f26e0_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_4f26e0_1(value_x0,field1);
    return LeafTarget_4f26e0_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_4f6d30_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_4f6d30_1(uint64_t,uint64_t);
extern "C" void LeafTarget_4f6d30_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4f6d30(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_4f6d30_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_4f6d30_1(value_x0,field1);
    return LeafTarget_4f6d30_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_4fa280_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_4fa280_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_4fa280_2(uint64_t);
extern "C" void LeafTarget_4fa280_11(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_4fa280(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_12;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_4fa280_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_4fa280_1(value_x0,field1);
    const uint64_t result2 = RecoveredCall_4fa280_2((value_x1 + 32));
    return LeafTarget_4fa280_11(value_x1);
}
block_12: {

    return;
}
}



extern "C" uint64_t RecoveredCall_501000_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_501000_1(uint64_t,uint64_t);
extern "C" void LeafTarget_501000_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_501000(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_501000_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_501000_1(value_x0,field1);
    return LeafTarget_501000_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_501040_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_501040_1(uint64_t,uint64_t);
extern "C" void LeafTarget_501040_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_501040(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_501040_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_501040_1(value_x0,field1);
    return LeafTarget_501040_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_501080_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_501080_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_501080_2(uint64_t);
extern "C" void LeafTarget_501080_11(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_501080(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_12;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_501080_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_501080_1(value_x0,field1);
    const uint64_t result2 = RecoveredCall_501080_2((value_x1 + 32));
    return LeafTarget_501080_11(value_x1);
}
block_12: {

    return;
}
}



extern "C" uint64_t RecoveredCall_5076b0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_5076b0_1(uint64_t,uint64_t);
extern "C" void LeafTarget_5076b0_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5076b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_5076b0_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_5076b0_1(value_x0,field1);
    return LeafTarget_5076b0_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_5076f0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_5076f0_1(uint64_t,uint64_t);
extern "C" void LeafTarget_5076f0_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5076f0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_5076f0_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_5076f0_1(value_x0,field1);
    return LeafTarget_5076f0_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_507e40_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_507e40_1(uint64_t,uint64_t);
extern "C" void LeafTarget_507e40_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_507e40(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_507e40_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_507e40_1(value_x0,field1);
    return LeafTarget_507e40_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_508970_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_508970_1(uint64_t,uint64_t);
extern "C" void LeafTarget_508970_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_508970(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_508970_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_508970_1(value_x0,field1);
    return LeafTarget_508970_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_5089b0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_5089b0_1(uint64_t,uint64_t);
extern "C" void LeafTarget_5089b0_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5089b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_5089b0_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_5089b0_1(value_x0,field1);
    return LeafTarget_5089b0_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_511da0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_511da0_1(uint64_t,uint64_t);
extern "C" void LeafTarget_511da0_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_511da0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_511da0_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_511da0_1(value_x0,field1);
    return LeafTarget_511da0_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_516040_0(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_516040(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
    uint64_t value_x21;
block_0: {
    *reinterpret_cast<uint64_t*>(((value_x0 + 8) + 0)) = (value_x0 + 8);
    *reinterpret_cast<uint64_t*>(((value_x0 + 8) + 8)) = (value_x0 + 8);
    *reinterpret_cast<uint64_t*>((value_x0 + 24)) = 0;
    *reinterpret_cast<uint32_t*>((value_x0 + 0)) = 0;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    value_x21 = field0;
    if (field0 == value_x1) goto block_15;
    goto block_7;
}
block_7: {
    value_x19 = value_x1;
    value_x20 = value_x0;
    goto block_9;
}
block_9: {
    const uint64_t result0 = RecoveredCall_516040_0(value_x20,(value_x21 + 16));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x21 + 8));
    value_x21 = field1;
    if (field1 != value_x19) goto block_9;
    goto block_15;
}
block_15: {

    return;
}
}



extern "C" uint64_t RecoveredCall_516b20_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_516b20_1(uint64_t,uint64_t);
extern "C" void LeafTarget_516b20_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_516b20(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_516b20_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_516b20_1(value_x0,field1);
    return LeafTarget_516b20_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_518fe0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_518fe0_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_518fe0_2(uint64_t);
extern "C" void LeafTarget_518fe0_11(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_518fe0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_12;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_518fe0_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_518fe0_1(value_x0,field1);
    const uint64_t result2 = RecoveredCall_518fe0_2((value_x1 + 32));
    return LeafTarget_518fe0_11(value_x1);
}
block_12: {

    return;
}
}



extern "C" uint64_t RecoveredCall_519620_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_519620_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_519620_2(uint64_t);
extern "C" void LeafTarget_519620_11(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_519620(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_12;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_519620_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_519620_1(value_x0,field1);
    const uint64_t result2 = RecoveredCall_519620_2((value_x1 + 32));
    return LeafTarget_519620_11(value_x1);
}
block_12: {

    return;
}
}



extern "C" uint64_t RecoveredCall_521ad0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_521ad0_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_521ad0_2(uint64_t);
extern "C" void LeafTarget_521ad0_11(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_521ad0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_12;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_521ad0_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_521ad0_1(value_x0,field1);
    const uint64_t result2 = RecoveredCall_521ad0_2((value_x1 + 32));
    return LeafTarget_521ad0_11(value_x1);
}
block_12: {

    return;
}
}



extern "C" uint64_t RecoveredCall_522170_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_522170_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_522170_2(uint64_t);
extern "C" void LeafTarget_522170_11(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_522170(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_12;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_522170_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_522170_1(value_x0,field1);
    const uint64_t result2 = RecoveredCall_522170_2((value_x1 + 32));
    return LeafTarget_522170_11(value_x1);
}
block_12: {

    return;
}
}



extern "C" uint64_t RecoveredCall_529dd0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_529dd0_1(uint64_t,uint64_t);
extern "C" void LeafTarget_529dd0_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_529dd0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_529dd0_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_529dd0_1(value_x0,field1);
    return LeafTarget_529dd0_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_529ef0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_529ef0_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_529ef0_2(uint64_t);
extern "C" void LeafTarget_529ef0_11(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_529ef0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_12;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_529ef0_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_529ef0_1(value_x0,field1);
    const uint64_t result2 = RecoveredCall_529ef0_2((value_x1 + 32));
    return LeafTarget_529ef0_11(value_x1);
}
block_12: {

    return;
}
}



extern "C" uint64_t RecoveredCall_52b110_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_52b110_1(uint64_t,uint64_t);
extern "C" void LeafTarget_52b110_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_52b110(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_52b110_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_52b110_1(value_x0,field1);
    return LeafTarget_52b110_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_541220_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_541220_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_541220_2(uint64_t);
extern "C" void LeafTarget_541220_11(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_541220(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_12;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_541220_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_541220_1(value_x0,field1);
    const uint64_t result2 = RecoveredCall_541220_2((value_x1 + 40));
    return LeafTarget_541220_11(value_x1);
}
block_12: {

    return;
}
}



extern "C" uint64_t RecoveredCall_548310_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_548310_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_548310_2(uint64_t);
extern "C" void LeafTarget_548310_11(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_548310(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_12;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_548310_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_548310_1(value_x0,field1);
    const uint64_t result2 = RecoveredCall_548310_2((value_x1 + 32));
    return LeafTarget_548310_11(value_x1);
}
block_12: {

    return;
}
}



extern "C" uint64_t RecoveredCall_5490d0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_5490d0_1(uint64_t,uint64_t);
extern "C" void LeafTarget_5490d0_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5490d0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_5490d0_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_5490d0_1(value_x0,field1);
    return LeafTarget_5490d0_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_554a30_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_554a30_1(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_554a30_2(uint64_t,uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_554a30(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 40));
    if (field0 == 0) goto block_22;
    goto block_2;
}
block_2: {
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((value_x0 + 48));
    const uint64_t result0 = RecoveredCall_554a30_0(value_x1,uint32_t(field1));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((field2 + 32));
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((field3 + 168));
    const uint64_t result1 = RecoveredCall_554a30_1(value_x1,uint32_t(field4));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((value_x0 + 32));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((field5 + 32));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((field6 + 176));
    const uint64_t result2 = RecoveredCall_554a30_2(value_x1,field7);
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x0 + 40));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>((field8 + 0));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((field9 + 24));
    const uint64_t result3 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field10)(field8,value_x1,field10);
    return;
    __builtin_unreachable();
}
block_22: {

    return;
}
}



extern "C" uint64_t RecoveredCall_56f3c0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_56f3c0_1(uint64_t,uint64_t);
extern "C" void LeafTarget_56f3c0_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_56f3c0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_56f3c0_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_56f3c0_1(value_x0,field1);
    return LeafTarget_56f3c0_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_56f9a0_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_56f9a0_1(uint64_t,uint64_t);
extern "C" void LeafTarget_56f9a0_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_56f9a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_56f9a0_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_56f9a0_1(value_x0,field1);
    return LeafTarget_56f9a0_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_56fa40_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_56fa40_1(uint64_t,uint64_t);
extern "C" void LeafTarget_56fa40_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_56fa40(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_56fa40_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_56fa40_1(value_x0,field1);
    return LeafTarget_56fa40_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_56fa80_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_56fa80_1(uint64_t,uint64_t);
extern "C" void LeafTarget_56fa80_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_56fa80(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_56fa80_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_56fa80_1(value_x0,field1);
    return LeafTarget_56fa80_9(value_x1);
}
block_10: {

    return;
}
}




extern "C" __attribute__((noinline)) void RecoveredLeaf_5766b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
    uint64_t value_x19;
    uint64_t value_x20;
block_0: {
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((value_x1 + 8));
    if (int32_t(uint32_t(uint32_t(field0))) < int32_t(1)) goto block_27;
    goto block_3;
}
block_3: {
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((field1 + 16));
    const uint64_t result0 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field2)(value_x1,value_x0);
    value_x19 = value_x0;
    value_x20 = value_x1;
    if ((uint32_t(result0) & 0x1ull) == 0) goto block_19;
    goto block_11;
}
block_11: {
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((value_x20 + 8));
    if (int32_t(uint32_t(uint32_t(field3))) < int32_t(1)) goto block_27;
    goto block_14;
}
block_14: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>((field4 + 48));
    const uint64_t result1 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t)>(field5)(value_x19,value_x20);
    goto block_19;
}
block_19: {
    const uint32_t field6 = *reinterpret_cast<const uint32_t*>((value_x20 + 8));
    if (int32_t(uint32_t(uint32_t(field6))) < int32_t(1)) goto block_27;
    goto block_22;
}
block_22: {
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>((value_x20 + 0));
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((field7 + 24));
    const uint64_t result2 = reinterpret_cast<uint64_t (*)(uint64_t,uint64_t,uint64_t)>(field8)(value_x20,value_x19,field8);
    return;
    __builtin_unreachable();
}
block_27: {

    return;
}
}



extern "C" uint64_t RecoveredCall_57ef40_0(uint64_t);
extern "C" uint64_t RecoveredCall_57ef40_1(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_57ef40(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x20;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    value_x20 = field0;
    if (field0 == 0) goto block_8;
    goto block_2;
}
block_2: {
    const uint64_t result0 = RecoveredCall_57ef40_0(value_x20);
    const uint64_t result1 = RecoveredCall_57ef40_1(value_x20);
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = 0;
    goto block_8;
}
block_8: {

    return;
}
}



extern "C" uint64_t RecoveredCall_57eff0_0(uint64_t);
extern "C" uint64_t RecoveredCall_57eff0_1(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_57eff0(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x20;
block_0: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x0 + 0));
    value_x20 = field0;
    if (field0 == 0) goto block_8;
    goto block_2;
}
block_2: {
    const uint64_t result0 = RecoveredCall_57eff0_0(value_x20);
    const uint64_t result1 = RecoveredCall_57eff0_1(value_x20);
    *reinterpret_cast<uint64_t*>((value_x0 + 0)) = 0;
    goto block_8;
}
block_8: {

    return;
}
}



extern "C" uint64_t RecoveredCall_57f610_0(uint64_t,uint64_t);
extern "C" uint64_t RecoveredCall_57f610_1(uint64_t,uint64_t);
extern "C" void LeafTarget_57f610_9(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_57f610(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x1 = arg1;
block_0: {

    if (value_x1 == 0) goto block_10;
    goto block_1;
}
block_1: {
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((value_x1 + 0));
    const uint64_t result0 = RecoveredCall_57f610_0(value_x0,field0);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((value_x1 + 8));
    const uint64_t result1 = RecoveredCall_57f610_1(value_x0,field1);
    return LeafTarget_57f610_9(value_x1);
}
block_10: {

    return;
}
}



extern "C" uint64_t RecoveredCall_5f7870_0(uint64_t);
extern "C" uint64_t RecoveredCall_5f7870_1(uint64_t);
extern "C" uint64_t RecoveredCall_5f7870_2(uint64_t);
extern "C" uint64_t RecoveredCall_5f7870_3(uint64_t);
extern "C" uint64_t RecoveredCall_5f7870_4(uint64_t);
extern "C" void LeafTarget_5f7870_27(uint64_t);
extern "C" __attribute__((noinline)) void RecoveredLeaf_5f7870(uint64_t arg0) {
    LEAF_CHECK
    uint64_t value_x0 = arg0;
    uint64_t value_x19;
block_0: {
    const uint64_t result0 = RecoveredCall_5f7870_0((value_x0 + 272));
    const uint64_t result1 = RecoveredCall_5f7870_1((value_x0 + 96));
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((value_x0 + 72));
    value_x19 = value_x0;
    if ((uint32_t(uint32_t(field0)) & 0x1ull) != 0) goto block_14;
    goto block_7;
}
block_7: {
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((value_x19 + 48));
    if ((uint32_t(uint32_t(field1)) & 0x1ull) != 0) goto block_18;
    goto block_9;
}
block_9: {
    const uint8_t field2 = *reinterpret_cast<const uint8_t*>((value_x19 + 24));
    if ((uint32_t(uint32_t(field2)) & 0x1ull) != 0) goto block_22;
    goto block_11;
}
block_11: {
    const uint8_t field3 = *reinterpret_cast<const uint8_t*>((value_x19 + 0));
    if ((uint32_t(uint32_t(field3)) & 0x1ull) != 0) goto block_26;
    goto block_13;
}
block_13: {

    return;
}
block_14: {
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((value_x19 + 88));
    const uint64_t result2 = RecoveredCall_5f7870_2(field4);
    const uint8_t field5 = *reinterpret_cast<const uint8_t*>((value_x19 + 48));
    if ((uint32_t(uint32_t(field5)) & 0x1ull) == 0) goto block_9;
    goto block_18;
}
block_18: {
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>((value_x19 + 64));
    const uint64_t result3 = RecoveredCall_5f7870_3(field6);
    const uint8_t field7 = *reinterpret_cast<const uint8_t*>((value_x19 + 24));
    if ((uint32_t(uint32_t(field7)) & 0x1ull) == 0) goto block_11;
    goto block_22;
}
block_22: {
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>((value_x19 + 40));
    const uint64_t result4 = RecoveredCall_5f7870_4(field8);
    const uint8_t field9 = *reinterpret_cast<const uint8_t*>((value_x19 + 0));
    if ((uint32_t(uint32_t(field9)) & 0x1ull) == 0) goto block_13;
    goto block_26;
}
block_26: {
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>((value_x19 + 16));
    return LeafTarget_5f7870_27(field10);
}
}
