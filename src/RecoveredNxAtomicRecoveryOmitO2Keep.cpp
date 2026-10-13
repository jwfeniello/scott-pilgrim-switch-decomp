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



extern "C" __attribute__((noinline)) void RecoveredLeaf_14feb0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>(((arg0 + 32) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 32) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 0) + 0)) = ((-246286309654529 & 0xffffffffffffull) | (0ull << 48));
    *reinterpret_cast<uint64_t*>(((arg0 + 0) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 48) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 48) + 8)) = ((13 & 0xffff0000ffffffffull) | (30ull << 32));
    *reinterpret_cast<uint32_t*>((arg0 + 64)) = uint32_t(uint32_t(30));
    *reinterpret_cast<uint64_t*>(((arg0 + 16) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 16) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 104) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 104) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 88) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 88) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 72) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 72) + 8)) = 0;
}



extern "C" unsigned char LeafData_4d7c40_0[];
extern "C" __attribute__((noinline)) void RecoveredLeaf_4d7c40(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_4d7c40_0) - 1920) + 1920);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 8) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 8) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg0 + 24) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg0 + 24) + 8));
    *reinterpret_cast<uint64_t*>(((arg1 + 24) + 0)) = field2;
    *reinterpret_cast<uint64_t*>(((arg1 + 24) + 8)) = field3;
    *reinterpret_cast<uint64_t*>(((arg1 + 8) + 0)) = field0;
    *reinterpret_cast<uint64_t*>(((arg1 + 8) + 8)) = field1;
}



extern "C" unsigned char LeafData_4d8970_0[];
extern "C" __attribute__((noinline)) void RecoveredLeaf_4d8970(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_4d8970_0) - 2456) + 2456);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 8)) = field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 8));
    *reinterpret_cast<uint64_t*>(((arg1 + 32) + 0)) = field3;
    *reinterpret_cast<uint64_t*>(((arg1 + 32) + 8)) = field4;
    *reinterpret_cast<uint64_t*>(((arg1 + 16) + 0)) = field1;
    *reinterpret_cast<uint64_t*>(((arg1 + 16) + 8)) = field2;
}



extern "C" unsigned char LeafData_4da320_0[];
extern "C" __attribute__((noinline)) void RecoveredLeaf_4da320(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_4da320_0) - 3864) + 3864);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg0 + 8) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 8) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg0 + 24) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg0 + 24) + 8));
    *reinterpret_cast<uint64_t*>(((arg1 + 24) + 0)) = field2;
    *reinterpret_cast<uint64_t*>(((arg1 + 24) + 8)) = field3;
    *reinterpret_cast<uint64_t*>(((arg1 + 8) + 0)) = field0;
    *reinterpret_cast<uint64_t*>(((arg1 + 8) + 8)) = field1;
}



extern "C" unsigned char LeafData_4e6180_0[];
extern "C" __attribute__((noinline)) void RecoveredLeaf_4e6180(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>((arg1 + 0)) = ((reinterpret_cast<uintptr_t>(LeafData_4e6180_0) - 1584) + 1584);
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    *reinterpret_cast<uint64_t*>((arg1 + 8)) = field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg0 + 16) + 8));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg0 + 32) + 8));
    *reinterpret_cast<uint64_t*>(((arg1 + 32) + 0)) = field3;
    *reinterpret_cast<uint64_t*>(((arg1 + 32) + 8)) = field4;
    *reinterpret_cast<uint64_t*>(((arg1 + 16) + 0)) = field1;
    *reinterpret_cast<uint64_t*>(((arg1 + 16) + 8)) = field2;
}




extern "C" __attribute__((noinline)) void RecoveredLeaf_4fac10(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg1 + 16) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 16) + 8));
    *reinterpret_cast<uint64_t*>(((arg0 + 16) + 0)) = field2;
    *reinterpret_cast<uint64_t*>(((arg0 + 16) + 8)) = field3;
    *reinterpret_cast<uint64_t*>(((arg0 + 0) + 0)) = field0;
    *reinterpret_cast<uint64_t*>(((arg0 + 0) + 8)) = field1;
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 32) + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>(((arg1 + 32) + 8));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>(((arg1 + 48) + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 48) + 8));
    *reinterpret_cast<uint64_t*>(((arg0 + 48) + 0)) = field6;
    *reinterpret_cast<uint64_t*>(((arg0 + 48) + 8)) = field7;
    *reinterpret_cast<uint64_t*>(((arg0 + 32) + 0)) = field4;
    *reinterpret_cast<uint64_t*>(((arg0 + 32) + 8)) = field5;
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 64) + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>(((arg1 + 64) + 8));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>(((arg1 + 80) + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 80) + 8));
    *reinterpret_cast<uint64_t*>(((arg0 + 80) + 0)) = field10;
    *reinterpret_cast<uint64_t*>(((arg0 + 80) + 8)) = field11;
    *reinterpret_cast<uint64_t*>(((arg0 + 64) + 0)) = field8;
    *reinterpret_cast<uint64_t*>(((arg0 + 64) + 8)) = field9;
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 96) + 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>(((arg1 + 96) + 8));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>(((arg1 + 112) + 0));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 112) + 8));
    *reinterpret_cast<uint64_t*>(((arg0 + 112) + 0)) = field14;
    *reinterpret_cast<uint64_t*>(((arg0 + 112) + 8)) = field15;
    *reinterpret_cast<uint64_t*>(((arg0 + 96) + 0)) = field12;
    *reinterpret_cast<uint64_t*>(((arg0 + 96) + 8)) = field13;
}




extern "C" __attribute__((noinline)) void RecoveredLeaf_4fac60(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg1 + 0) + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg1 + 16) + 0));
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 16) + 8));
    *reinterpret_cast<uint64_t*>(((arg0 + 16) + 0)) = field2;
    *reinterpret_cast<uint64_t*>(((arg0 + 16) + 8)) = field3;
    *reinterpret_cast<uint64_t*>(((arg0 + 0) + 0)) = field0;
    *reinterpret_cast<uint64_t*>(((arg0 + 0) + 8)) = field1;
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 32) + 0));
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>(((arg1 + 32) + 8));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>(((arg1 + 48) + 0));
    const uint64_t field7 = *reinterpret_cast<const uint64_t*>(((arg1 + 48) + 8));
    *reinterpret_cast<uint64_t*>(((arg0 + 48) + 0)) = field6;
    *reinterpret_cast<uint64_t*>(((arg0 + 48) + 8)) = field7;
    *reinterpret_cast<uint64_t*>(((arg0 + 32) + 0)) = field4;
    *reinterpret_cast<uint64_t*>(((arg0 + 32) + 8)) = field5;
    const uint64_t field8 = *reinterpret_cast<const uint64_t*>(((arg1 + 64) + 0));
    const uint64_t field9 = *reinterpret_cast<const uint64_t*>(((arg1 + 64) + 8));
    const uint64_t field10 = *reinterpret_cast<const uint64_t*>(((arg1 + 80) + 0));
    const uint64_t field11 = *reinterpret_cast<const uint64_t*>(((arg1 + 80) + 8));
    *reinterpret_cast<uint64_t*>(((arg0 + 80) + 0)) = field10;
    *reinterpret_cast<uint64_t*>(((arg0 + 80) + 8)) = field11;
    *reinterpret_cast<uint64_t*>(((arg0 + 64) + 0)) = field8;
    *reinterpret_cast<uint64_t*>(((arg0 + 64) + 8)) = field9;
    const uint64_t field12 = *reinterpret_cast<const uint64_t*>(((arg1 + 96) + 0));
    const uint64_t field13 = *reinterpret_cast<const uint64_t*>(((arg1 + 96) + 8));
    const uint64_t field14 = *reinterpret_cast<const uint64_t*>(((arg1 + 112) + 0));
    const uint64_t field15 = *reinterpret_cast<const uint64_t*>(((arg1 + 112) + 8));
    *reinterpret_cast<uint64_t*>(((arg0 + 112) + 0)) = field14;
    *reinterpret_cast<uint64_t*>(((arg0 + 112) + 8)) = field15;
    *reinterpret_cast<uint64_t*>(((arg0 + 96) + 0)) = field12;
    *reinterpret_cast<uint64_t*>(((arg0 + 96) + 8)) = field13;
}




extern "C" __attribute__((noinline)) void RecoveredLeaf_511700(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint16_t*>((arg0 + 32)) = 0;
    *reinterpret_cast<uint64_t*>((arg0 + 24)) = 0;
    *reinterpret_cast<uint32_t*>((arg0 + 16)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 0) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 0) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 40) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 40) + 8)) = 0;
}




extern "C" __attribute__((noinline)) void RecoveredLeaf_543df0(uint64_t arg0) {
    LEAF_CHECK
    *reinterpret_cast<uint64_t*>(((arg0 + 208) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 208) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 192) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 192) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 176) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 176) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 160) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 160) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 144) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 144) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 128) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 128) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 112) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 112) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 96) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 96) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 80) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 80) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 64) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 64) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 48) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 48) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 32) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 32) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 16) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 16) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 240) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((arg0 + 240) + 8)) = 0;
}
