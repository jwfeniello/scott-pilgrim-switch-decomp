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
struct RecoveredOutput_25eb50 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_25eb50 RecoveredLeaf_25eb50(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_25eb50 output;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 132));
    *reinterpret_cast<uint32_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(uint32_t(field0));
    return output;
}

struct RecoveredOutput_2688c0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2688c0 RecoveredLeaf_2688c0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2688c0 output;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 68));
    *reinterpret_cast<uint32_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(uint32_t(field0));
    return output;
}

struct RecoveredOutput_2688d0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2688d0 RecoveredLeaf_2688d0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2688d0 output;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 156));
    *reinterpret_cast<uint32_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(uint32_t(field0));
    return output;
}

struct RecoveredOutput_269010 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_269010 RecoveredLeaf_269010(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_269010 output;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 0));
    *reinterpret_cast<uint32_t*>((arg0 + 4)) = uint32_t(uint32_t(field0));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_26e300 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_26e300 RecoveredLeaf_26e300(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_26e300 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48579)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_27d5c0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_27d5c0 RecoveredLeaf_27d5c0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_27d5c0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_27d630 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_27d630 RecoveredLeaf_27d630(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_27d630 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_27d640 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_27d640 RecoveredLeaf_27d640(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_27d640 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_27d650 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_27d650 RecoveredLeaf_27d650(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_27d650 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_280a20 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_280a20 RecoveredLeaf_280a20(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_280a20 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48576)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_280a30 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_280a30 RecoveredLeaf_280a30(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_280a30 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48576)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_280a50 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_280a50 RecoveredLeaf_280a50(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_280a50 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_280a60 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_280a60 RecoveredLeaf_280a60(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_280a60 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_280a90 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_280a90 RecoveredLeaf_280a90(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_280a90 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_280aa0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_280aa0 RecoveredLeaf_280aa0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_280aa0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_287120 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_287120 RecoveredLeaf_287120(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_287120 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_287130 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_287130 RecoveredLeaf_287130(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_287130 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_287140 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_287140 RecoveredLeaf_287140(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_287140 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_287150 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_287150 RecoveredLeaf_287150(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_287150 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_287160 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_287160 RecoveredLeaf_287160(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_287160 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_287170 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_287170 RecoveredLeaf_287170(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_287170 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_287180 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_287180 RecoveredLeaf_287180(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_287180 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_287190 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_287190 RecoveredLeaf_287190(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_287190 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2871a0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2871a0 RecoveredLeaf_2871a0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2871a0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2871f0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2871f0 RecoveredLeaf_2871f0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2871f0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_287200 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_287200 RecoveredLeaf_287200(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_287200 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2c1370 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2c1370 RecoveredLeaf_2c1370(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2c1370 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48579)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_2c2e30 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2c2e30 RecoveredLeaf_2c2e30(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2c2e30 output;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 188));
    *reinterpret_cast<uint32_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(uint32_t(field0));
    return output;
}

struct RecoveredOutput_2ca5b0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2ca5b0 RecoveredLeaf_2ca5b0(uint64_t arg0,float float_arg0) {
    LEAF_CHECK
    RecoveredOutput_2ca5b0 output;
    *reinterpret_cast<float*>((arg0 + 272)) = float_arg0;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2cd2e0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2cd2e0 RecoveredLeaf_2cd2e0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_2cd2e0 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    *reinterpret_cast<uint64_t*>((arg0 + 80)) = field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 16));
    *reinterpret_cast<uint64_t*>((arg0 + 88)) = field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg1 + 24));
    *reinterpret_cast<uint64_t*>((arg0 + 96)) = field2;
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 32));
    *reinterpret_cast<uint64_t*>((arg0 + 104)) = field3;
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg1 + 40));
    *reinterpret_cast<uint64_t*>((arg0 + 112)) = field4;
    const uint8_t field5 = *reinterpret_cast<const uint8_t*>((arg1 + 48));
    *reinterpret_cast<uint8_t*>((arg0 + 224)) = uint32_t(uint32_t(field5));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2cd320 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2cd320 RecoveredLeaf_2cd320(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_2cd320 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 16));
    *reinterpret_cast<uint64_t*>((arg0 + 56)) = field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg1 + 24));
    *reinterpret_cast<uint64_t*>((arg0 + 64)) = field2;
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 32));
    *reinterpret_cast<uint64_t*>((arg0 + 72)) = field3;
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg1 + 40));
    *reinterpret_cast<uint64_t*>((arg0 + 80)) = field4;
    const uint8_t field5 = *reinterpret_cast<const uint8_t*>((arg1 + 48));
    *reinterpret_cast<uint8_t*>((arg0 + 192)) = uint32_t(uint32_t(field5));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2cd6f0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2cd6f0 RecoveredLeaf_2cd6f0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2cd6f0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_2d06b0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2d06b0 RecoveredLeaf_2d06b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_2d06b0 output;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 8));
    *reinterpret_cast<uint32_t*>((arg0 + 72)) = uint32_t(uint32_t(field0));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2d06d0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2d06d0 RecoveredLeaf_2d06d0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_2d06d0 output;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 8));
    *reinterpret_cast<uint32_t*>((arg0 + 40)) = uint32_t(uint32_t(field0));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2d06f0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2d06f0 RecoveredLeaf_2d06f0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2d06f0 output;
    *reinterpret_cast<uint32_t*>((arg0 + 72)) = uint32_t(uint32_t(-1));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2d0710 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2d0710 RecoveredLeaf_2d0710(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2d0710 output;
    *reinterpret_cast<uint32_t*>((arg0 + 40)) = uint32_t(uint32_t(-1));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2d0730 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2d0730 RecoveredLeaf_2d0730(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2d0730 output;
    *reinterpret_cast<uint64_t*>((arg0 + 64)) = 0;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2d0740 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2d0740 RecoveredLeaf_2d0740(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2d0740 output;
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = 0;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2dd560 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2dd560 RecoveredLeaf_2dd560(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2dd560 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_2df6c0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2df6c0 RecoveredLeaf_2df6c0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_2df6c0 output;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 8));
    *reinterpret_cast<uint32_t*>((arg0 + 72)) = uint32_t(uint32_t(field0));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2df6e0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2df6e0 RecoveredLeaf_2df6e0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_2df6e0 output;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 8));
    *reinterpret_cast<uint32_t*>((arg0 + 40)) = uint32_t(uint32_t(field0));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2df700 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2df700 RecoveredLeaf_2df700(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2df700 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2df710 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2df710 RecoveredLeaf_2df710(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2df710 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2dfac0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2dfac0 RecoveredLeaf_2dfac0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2dfac0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_2e0aa0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e0aa0 RecoveredLeaf_2e0aa0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_2e0aa0 output;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 32));
    *reinterpret_cast<uint32_t*>((arg0 + 176)) = uint32_t(uint32_t(field0));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e0ac0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e0ac0 RecoveredLeaf_2e0ac0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_2e0ac0 output;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 32));
    *reinterpret_cast<uint32_t*>((arg0 + 152)) = uint32_t(uint32_t(field0));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e12b0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e12b0 RecoveredLeaf_2e12b0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_2e12b0 output;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 32));
    *reinterpret_cast<uint32_t*>((arg0 + 180)) = uint32_t(uint32_t(field0));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e12d0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e12d0 RecoveredLeaf_2e12d0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_2e12d0 output;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 32));
    *reinterpret_cast<uint32_t*>((arg0 + 156)) = uint32_t(uint32_t(field0));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e12f0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e12f0 RecoveredLeaf_2e12f0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e12f0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_2e1300 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e1300 RecoveredLeaf_2e1300(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e1300 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_2e1da0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e1da0 RecoveredLeaf_2e1da0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e1da0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e1db0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e1db0 RecoveredLeaf_2e1db0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e1db0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e1dc0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e1dc0 RecoveredLeaf_2e1dc0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e1dc0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e1dd0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e1dd0 RecoveredLeaf_2e1dd0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e1dd0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e1de0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e1de0 RecoveredLeaf_2e1de0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e1de0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e1df0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e1df0 RecoveredLeaf_2e1df0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e1df0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e2140 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e2140 RecoveredLeaf_2e2140(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e2140 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e2150 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e2150 RecoveredLeaf_2e2150(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e2150 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e2160 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e2160 RecoveredLeaf_2e2160(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e2160 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e2170 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e2170 RecoveredLeaf_2e2170(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e2170 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e2180 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e2180 RecoveredLeaf_2e2180(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e2180 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e2190 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e2190 RecoveredLeaf_2e2190(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e2190 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e21a0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e21a0 RecoveredLeaf_2e21a0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e21a0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e21b0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e21b0 RecoveredLeaf_2e21b0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e21b0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e21c0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e21c0 RecoveredLeaf_2e21c0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e21c0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e21d0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e21d0 RecoveredLeaf_2e21d0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e21d0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e21e0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e21e0 RecoveredLeaf_2e21e0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e21e0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e21f0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e21f0 RecoveredLeaf_2e21f0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e21f0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e2200 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e2200 RecoveredLeaf_2e2200(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e2200 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e2210 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e2210 RecoveredLeaf_2e2210(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e2210 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e2450 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e2450 RecoveredLeaf_2e2450(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e2450 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e2460 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e2460 RecoveredLeaf_2e2460(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e2460 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e2470 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e2470 RecoveredLeaf_2e2470(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e2470 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e2480 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e2480 RecoveredLeaf_2e2480(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e2480 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e2490 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e2490 RecoveredLeaf_2e2490(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e2490 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e24a0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e24a0 RecoveredLeaf_2e24a0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e24a0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e24b0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e24b0 RecoveredLeaf_2e24b0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e24b0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e24c0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e24c0 RecoveredLeaf_2e24c0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e24c0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e24d0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e24d0 RecoveredLeaf_2e24d0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e24d0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e24e0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e24e0 RecoveredLeaf_2e24e0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e24e0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e45a0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e45a0 RecoveredLeaf_2e45a0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e45a0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e5e40 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e5e40 RecoveredLeaf_2e5e40(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_2e5e40 output;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 8));
    *reinterpret_cast<uint32_t*>((arg0 + 72)) = uint32_t(uint32_t(field0));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e5e60 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e5e60 RecoveredLeaf_2e5e60(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_2e5e60 output;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 8));
    *reinterpret_cast<uint32_t*>((arg0 + 40)) = uint32_t(uint32_t(field0));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e5e80 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e5e80 RecoveredLeaf_2e5e80(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e5e80 output;
    *reinterpret_cast<uint32_t*>((arg0 + 72)) = uint32_t(uint32_t(-1));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e5ea0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e5ea0 RecoveredLeaf_2e5ea0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e5ea0 output;
    *reinterpret_cast<uint32_t*>((arg0 + 40)) = uint32_t(uint32_t(-1));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2e63c0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2e63c0 RecoveredLeaf_2e63c0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2e63c0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_2edae0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2edae0 RecoveredLeaf_2edae0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2edae0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2edaf0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2edaf0 RecoveredLeaf_2edaf0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2edaf0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2edb00 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2edb00 RecoveredLeaf_2edb00(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2edb00 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2edb10 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2edb10 RecoveredLeaf_2edb10(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2edb10 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2edc30 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2edc30 RecoveredLeaf_2edc30(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2edc30 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2edc40 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2edc40 RecoveredLeaf_2edc40(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2edc40 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2edc50 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2edc50 RecoveredLeaf_2edc50(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2edc50 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2edc60 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2edc60 RecoveredLeaf_2edc60(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2edc60 output;
    *reinterpret_cast<uint8_t*>((arg0 + 72)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2edc70 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2edc70 RecoveredLeaf_2edc70(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2edc70 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2edc80 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2edc80 RecoveredLeaf_2edc80(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2edc80 output;
    *reinterpret_cast<uint8_t*>((arg0 + 40)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2edc90 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2edc90 RecoveredLeaf_2edc90(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2edc90 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2fa980 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2fa980 RecoveredLeaf_2fa980(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2fa980 output;
    *reinterpret_cast<uint8_t*>((arg0 + 16)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2fa990 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2fa990 RecoveredLeaf_2fa990(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2fa990 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2fa9d0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2fa9d0 RecoveredLeaf_2fa9d0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2fa9d0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_2fa9e0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_2fa9e0 RecoveredLeaf_2fa9e0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_2fa9e0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_310ac0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_310ac0 RecoveredLeaf_310ac0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_310ac0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_310ad0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_310ad0 RecoveredLeaf_310ad0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_310ad0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_3155a0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3155a0 RecoveredLeaf_3155a0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3155a0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48596)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_32a550 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_32a550 RecoveredLeaf_32a550(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_32a550 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_32a560 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_32a560 RecoveredLeaf_32a560(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_32a560 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_32a570 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_32a570 RecoveredLeaf_32a570(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_32a570 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_32ca80 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_32ca80 RecoveredLeaf_32ca80(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_32ca80 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_330840 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_330840 RecoveredLeaf_330840(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_330840 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_330850 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_330850 RecoveredLeaf_330850(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_330850 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_336930 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_336930 RecoveredLeaf_336930(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_336930 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_336940 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_336940 RecoveredLeaf_336940(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_336940 output;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 8));
    *reinterpret_cast<uint32_t*>((arg0 + 24)) = uint32_t(uint32_t(field0));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_336960 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_336960 RecoveredLeaf_336960(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_336960 output;
    *reinterpret_cast<uint32_t*>((arg0 + 24)) = uint32_t(uint32_t(-1));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_336980 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_336980 RecoveredLeaf_336980(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_336980 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_336ff0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_336ff0 RecoveredLeaf_336ff0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_336ff0 output;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 8));
    *reinterpret_cast<uint32_t*>((arg0 + 128)) = uint32_t(uint32_t(field0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 16));
    *reinterpret_cast<uint64_t*>((arg0 + 136)) = field1;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_337010 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_337010 RecoveredLeaf_337010(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_337010 output;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 8));
    *reinterpret_cast<uint32_t*>((arg0 + 96)) = uint32_t(uint32_t(field0));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 16));
    *reinterpret_cast<uint64_t*>((arg0 + 104)) = field1;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_337310 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_337310 RecoveredLeaf_337310(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_337310 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_337320 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_337320 RecoveredLeaf_337320(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_337320 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_33a460 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_33a460 RecoveredLeaf_33a460(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_33a460 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_33a470 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_33a470 RecoveredLeaf_33a470(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_33a470 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_33a480 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_33a480 RecoveredLeaf_33a480(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_33a480 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_33a490 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_33a490 RecoveredLeaf_33a490(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_33a490 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_33a4a0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_33a4a0 RecoveredLeaf_33a4a0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_33a4a0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_33a4b0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_33a4b0 RecoveredLeaf_33a4b0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_33a4b0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_33a4c0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_33a4c0 RecoveredLeaf_33a4c0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_33a4c0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_33a4d0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_33a4d0 RecoveredLeaf_33a4d0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_33a4d0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_33ad80 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_33ad80 RecoveredLeaf_33ad80(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_33ad80 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_33ad90 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_33ad90 RecoveredLeaf_33ad90(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_33ad90 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_33ada0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_33ada0 RecoveredLeaf_33ada0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_33ada0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_33adb0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_33adb0 RecoveredLeaf_33adb0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_33adb0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_33adc0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_33adc0 RecoveredLeaf_33adc0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_33adc0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_33add0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_33add0 RecoveredLeaf_33add0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_33add0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3510e0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3510e0 RecoveredLeaf_3510e0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3510e0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3510f0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3510f0 RecoveredLeaf_3510f0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3510f0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_351100 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_351100 RecoveredLeaf_351100(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_351100 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_351110 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_351110 RecoveredLeaf_351110(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_351110 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_351120 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_351120 RecoveredLeaf_351120(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_351120 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_351130 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_351130 RecoveredLeaf_351130(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_351130 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_351140 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_351140 RecoveredLeaf_351140(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_351140 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_351150 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_351150 RecoveredLeaf_351150(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_351150 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_351160 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_351160 RecoveredLeaf_351160(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_351160 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_351170 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_351170 RecoveredLeaf_351170(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_351170 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_351180 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_351180 RecoveredLeaf_351180(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_351180 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_351190 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_351190 RecoveredLeaf_351190(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_351190 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3511a0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3511a0 RecoveredLeaf_3511a0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3511a0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3511b0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3511b0 RecoveredLeaf_3511b0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3511b0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3511c0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3511c0 RecoveredLeaf_3511c0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3511c0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3511d0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3511d0 RecoveredLeaf_3511d0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3511d0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3511e0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3511e0 RecoveredLeaf_3511e0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3511e0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3511f0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3511f0 RecoveredLeaf_3511f0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3511f0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_351200 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_351200 RecoveredLeaf_351200(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_351200 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_351210 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_351210 RecoveredLeaf_351210(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_351210 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_351810 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_351810 RecoveredLeaf_351810(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_351810 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_351820 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_351820 RecoveredLeaf_351820(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_351820 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_351830 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_351830 RecoveredLeaf_351830(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_351830 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_351840 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_351840 RecoveredLeaf_351840(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_351840 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_352c00 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_352c00 RecoveredLeaf_352c00(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_352c00 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    *reinterpret_cast<uint64_t*>((arg0 + 824)) = field0;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_352c20 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_352c20 RecoveredLeaf_352c20(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_352c20 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    *reinterpret_cast<uint64_t*>((arg0 + 792)) = field0;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_356560 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_356560 RecoveredLeaf_356560(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_356560 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    *reinterpret_cast<uint64_t*>((arg0 + 64)) = field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 16));
    *reinterpret_cast<uint64_t*>((arg0 + 72)) = field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg1 + 24));
    *reinterpret_cast<uint64_t*>((arg0 + 80)) = field2;
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 32));
    *reinterpret_cast<uint64_t*>((arg0 + 88)) = field3;
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((arg1 + 40));
    *reinterpret_cast<uint32_t*>((arg0 + 408)) = uint32_t(uint32_t(field4));
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((field1 + 40));
    *reinterpret_cast<uint32_t*>((arg0 + 412)) = uint32_t(uint32_t(field5));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3565a0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3565a0 RecoveredLeaf_3565a0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_3565a0 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    *reinterpret_cast<uint64_t*>((arg0 + 32)) = field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 16));
    *reinterpret_cast<uint64_t*>((arg0 + 40)) = field1;
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg1 + 24));
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = field2;
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 32));
    *reinterpret_cast<uint64_t*>((arg0 + 56)) = field3;
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((arg1 + 40));
    *reinterpret_cast<uint32_t*>((arg0 + 376)) = uint32_t(uint32_t(field4));
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((field1 + 40));
    *reinterpret_cast<uint32_t*>((arg0 + 380)) = uint32_t(uint32_t(field5));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_35b3f0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_35b3f0 RecoveredLeaf_35b3f0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_35b3f0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_35b400 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_35b400 RecoveredLeaf_35b400(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_35b400 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_36b540 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_36b540 RecoveredLeaf_36b540(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_36b540 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_36b550 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_36b550 RecoveredLeaf_36b550(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_36b550 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_36b560 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_36b560 RecoveredLeaf_36b560(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_36b560 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_36b570 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_36b570 RecoveredLeaf_36b570(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_36b570 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_36b580 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_36b580 RecoveredLeaf_36b580(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_36b580 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_373fd0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_373fd0 RecoveredLeaf_373fd0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_373fd0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_388d90 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_388d90 RecoveredLeaf_388d90(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_388d90 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_39af10 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_39af10 RecoveredLeaf_39af10(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_39af10 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_39af20 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_39af20 RecoveredLeaf_39af20(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_39af20 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_39c4f0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_39c4f0 RecoveredLeaf_39c4f0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_39c4f0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_39c500 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_39c500 RecoveredLeaf_39c500(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_39c500 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_39c510 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_39c510 RecoveredLeaf_39c510(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_39c510 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_39c520 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_39c520 RecoveredLeaf_39c520(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_39c520 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_39c530 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_39c530 RecoveredLeaf_39c530(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_39c530 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_39c540 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_39c540 RecoveredLeaf_39c540(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_39c540 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_39c550 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_39c550 RecoveredLeaf_39c550(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_39c550 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_39c560 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_39c560 RecoveredLeaf_39c560(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_39c560 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_39d070 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_39d070 RecoveredLeaf_39d070(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_39d070 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_39d080 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_39d080 RecoveredLeaf_39d080(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_39d080 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_39d090 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_39d090 RecoveredLeaf_39d090(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_39d090 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_39d0a0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_39d0a0 RecoveredLeaf_39d0a0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_39d0a0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_39d0b0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_39d0b0 RecoveredLeaf_39d0b0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_39d0b0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_39d0c0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_39d0c0 RecoveredLeaf_39d0c0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_39d0c0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_39d0d0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_39d0d0 RecoveredLeaf_39d0d0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_39d0d0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_39d0e0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_39d0e0 RecoveredLeaf_39d0e0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_39d0e0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_39d0f0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_39d0f0 RecoveredLeaf_39d0f0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_39d0f0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_39d100 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_39d100 RecoveredLeaf_39d100(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_39d100 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3a0a30 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3a0a30 RecoveredLeaf_3a0a30(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3a0a30 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3a2c70 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3a2c70 RecoveredLeaf_3a2c70(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3a2c70 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3a6b10 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3a6b10 RecoveredLeaf_3a6b10(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3a6b10 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3a8760 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3a8760 RecoveredLeaf_3a8760(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3a8760 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3a8870 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3a8870 RecoveredLeaf_3a8870(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3a8870 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3b7270 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3b7270 RecoveredLeaf_3b7270(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3b7270 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_3b7280 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3b7280 RecoveredLeaf_3b7280(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3b7280 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_3b89b0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3b89b0 RecoveredLeaf_3b89b0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3b89b0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3b89c0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3b89c0 RecoveredLeaf_3b89c0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3b89c0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3b89d0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3b89d0 RecoveredLeaf_3b89d0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3b89d0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3b89e0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3b89e0 RecoveredLeaf_3b89e0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3b89e0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3b8d10 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3b8d10 RecoveredLeaf_3b8d10(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3b8d10 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3b8d20 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3b8d20 RecoveredLeaf_3b8d20(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3b8d20 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3b9900 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3b9900 RecoveredLeaf_3b9900(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_3b9900 output;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 8));
    *reinterpret_cast<uint32_t*>((arg0 + 24)) = uint32_t(uint32_t(field0));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(2);
    return output;
}

struct RecoveredOutput_3b9920 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3b9920 RecoveredLeaf_3b9920(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3b9920 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3b9930 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3b9930 RecoveredLeaf_3b9930(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3b9930 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3becd0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3becd0 RecoveredLeaf_3becd0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3becd0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3bece0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3bece0 RecoveredLeaf_3bece0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3bece0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3becf0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3becf0 RecoveredLeaf_3becf0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3becf0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3bed00 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3bed00 RecoveredLeaf_3bed00(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3bed00 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3c2690 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3c2690 RecoveredLeaf_3c2690(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3c2690 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3c26a0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3c26a0 RecoveredLeaf_3c26a0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3c26a0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3c26e0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3c26e0 RecoveredLeaf_3c26e0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3c26e0 output;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 8) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 8) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = 0;
    return output;
}

struct RecoveredOutput_3c8720 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3c8720 RecoveredLeaf_3c8720(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3c8720 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3e1bc0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3e1bc0 RecoveredLeaf_3e1bc0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3e1bc0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3e1bd0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3e1bd0 RecoveredLeaf_3e1bd0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3e1bd0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3e1c00 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3e1c00 RecoveredLeaf_3e1c00(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3e1c00 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_3e1c10 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_3e1c10 RecoveredLeaf_3e1c10(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_3e1c10 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4120f0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4120f0 RecoveredLeaf_4120f0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4120f0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4190f0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4190f0 RecoveredLeaf_4190f0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4190f0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4191c0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4191c0 RecoveredLeaf_4191c0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4191c0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_41a240 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_41a240 RecoveredLeaf_41a240(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_41a240 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4223f0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4223f0 RecoveredLeaf_4223f0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4223f0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4224e0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4224e0 RecoveredLeaf_4224e0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4224e0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_42e5b0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_42e5b0 RecoveredLeaf_42e5b0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_42e5b0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_42e5c0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_42e5c0 RecoveredLeaf_42e5c0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_42e5c0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_42e5d0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_42e5d0 RecoveredLeaf_42e5d0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_42e5d0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_42e680 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_42e680 RecoveredLeaf_42e680(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_42e680 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_42e690 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_42e690 RecoveredLeaf_42e690(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_42e690 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_45fe00 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_45fe00 RecoveredLeaf_45fe00(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_45fe00 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_45ffa0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_45ffa0 RecoveredLeaf_45ffa0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_45ffa0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48576)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_460460 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_460460 RecoveredLeaf_460460(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_460460 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48576)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_4625a0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4625a0 RecoveredLeaf_4625a0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4625a0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_474a20 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_474a20 RecoveredLeaf_474a20(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_474a20 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_474a30 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_474a30 RecoveredLeaf_474a30(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_474a30 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4752a0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4752a0 RecoveredLeaf_4752a0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4752a0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_4752b0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4752b0 RecoveredLeaf_4752b0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4752b0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_47ea80 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_47ea80 RecoveredLeaf_47ea80(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_47ea80 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_47ea90 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_47ea90 RecoveredLeaf_47ea90(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_47ea90 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_47eaa0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_47eaa0 RecoveredLeaf_47eaa0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_47eaa0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_47eab0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_47eab0 RecoveredLeaf_47eab0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_47eab0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_47eac0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_47eac0 RecoveredLeaf_47eac0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_47eac0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_47eb10 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_47eb10 RecoveredLeaf_47eb10(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_47eb10 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_47eb20 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_47eb20 RecoveredLeaf_47eb20(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_47eb20 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_47eba0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_47eba0 RecoveredLeaf_47eba0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_47eba0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_47ebe0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_47ebe0 RecoveredLeaf_47ebe0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_47ebe0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_47ebf0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_47ebf0 RecoveredLeaf_47ebf0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_47ebf0 output;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 8) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 8) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = 0;
    return output;
}

struct RecoveredOutput_47ee20 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_47ee20 RecoveredLeaf_47ee20(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_47ee20 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

extern "C" unsigned char LeafData_47ee30_0[];
struct RecoveredOutput_47ee30 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_47ee30 RecoveredLeaf_47ee30(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_47ee30 output;
    *reinterpret_cast<uint8_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(uint32_t(28));
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((reinterpret_cast<uintptr_t>(LeafData_47ee30_0) + 6));
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((reinterpret_cast<uintptr_t>(LeafData_47ee30_0) + 0));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 16)) = 0;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 7)) = field0;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 1)) = field1;
    *reinterpret_cast<uint8_t*>((reinterpret_cast<uintptr_t>(&output) + 15)) = 0;
    return output;
}

struct RecoveredOutput_47eea0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_47eea0 RecoveredLeaf_47eea0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_47eea0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_47eeb0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_47eeb0 RecoveredLeaf_47eeb0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_47eeb0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_47eec0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_47eec0 RecoveredLeaf_47eec0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_47eec0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_47eed0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_47eed0 RecoveredLeaf_47eed0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_47eed0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_47eee0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_47eee0 RecoveredLeaf_47eee0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_47eee0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_47ef30 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_47ef30 RecoveredLeaf_47ef30(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_47ef30 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_47ef40 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_47ef40 RecoveredLeaf_47ef40(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_47ef40 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_47f190 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_47f190 RecoveredLeaf_47f190(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_47f190 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_47f1e0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_47f1e0 RecoveredLeaf_47f1e0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_47f1e0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_47f1f0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_47f1f0 RecoveredLeaf_47f1f0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_47f1f0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_47f230 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_47f230 RecoveredLeaf_47f230(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_47f230 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_47f240 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_47f240 RecoveredLeaf_47f240(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_47f240 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_47ffa0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_47ffa0 RecoveredLeaf_47ffa0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_47ffa0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_47ffb0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_47ffb0 RecoveredLeaf_47ffb0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_47ffb0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_47ffc0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_47ffc0 RecoveredLeaf_47ffc0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_47ffc0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_47ffd0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_47ffd0 RecoveredLeaf_47ffd0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_47ffd0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_480050 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_480050 RecoveredLeaf_480050(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_480050 output;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 8) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 8) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = 0;
    return output;
}

struct RecoveredOutput_4800e0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4800e0 RecoveredLeaf_4800e0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4800e0 output;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 8) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 8) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = 0;
    return output;
}

struct RecoveredOutput_4800f0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4800f0 RecoveredLeaf_4800f0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4800f0 output;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 8) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 8) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = 0;
    return output;
}

struct RecoveredOutput_480100 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_480100 RecoveredLeaf_480100(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_480100 output;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 8) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 8) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = 0;
    return output;
}

struct RecoveredOutput_480120 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_480120 RecoveredLeaf_480120(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_480120 output;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 8) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 8) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = 0;
    return output;
}

struct RecoveredOutput_480130 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_480130 RecoveredLeaf_480130(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_480130 output;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 8) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 8) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = 0;
    return output;
}

struct RecoveredOutput_480240 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_480240 RecoveredLeaf_480240(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_480240 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_4833a0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4833a0 RecoveredLeaf_4833a0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4833a0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4833b0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4833b0 RecoveredLeaf_4833b0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4833b0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4833c0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4833c0 RecoveredLeaf_4833c0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4833c0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4833d0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4833d0 RecoveredLeaf_4833d0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4833d0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_483e30 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_483e30 RecoveredLeaf_483e30(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_483e30 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_483e40 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_483e40 RecoveredLeaf_483e40(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_483e40 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_486d20 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_486d20 RecoveredLeaf_486d20(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_486d20 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_486d30 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_486d30 RecoveredLeaf_486d30(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_486d30 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_489fe0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_489fe0 RecoveredLeaf_489fe0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_489fe0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_489ff0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_489ff0 RecoveredLeaf_489ff0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_489ff0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_48b1c0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_48b1c0 RecoveredLeaf_48b1c0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_48b1c0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_48b1d0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_48b1d0 RecoveredLeaf_48b1d0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_48b1d0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_48c4d0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_48c4d0 RecoveredLeaf_48c4d0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_48c4d0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_48c4e0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_48c4e0 RecoveredLeaf_48c4e0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_48c4e0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_49be70 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_49be70 RecoveredLeaf_49be70(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_49be70 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_49e430 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_49e430 RecoveredLeaf_49e430(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_49e430 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_49e440 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_49e440 RecoveredLeaf_49e440(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_49e440 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_49e450 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_49e450 RecoveredLeaf_49e450(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_49e450 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_49e460 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_49e460 RecoveredLeaf_49e460(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_49e460 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_49f1f0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_49f1f0 RecoveredLeaf_49f1f0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_49f1f0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_49fd80 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_49fd80 RecoveredLeaf_49fd80(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_49fd80 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_4a0bf0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4a0bf0 RecoveredLeaf_4a0bf0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4a0bf0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4a0c00 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4a0c00 RecoveredLeaf_4a0c00(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4a0c00 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4a0c10 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4a0c10 RecoveredLeaf_4a0c10(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4a0c10 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4a1fe0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4a1fe0 RecoveredLeaf_4a1fe0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4a1fe0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4a1ff0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4a1ff0 RecoveredLeaf_4a1ff0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4a1ff0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4a2300 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4a2300 RecoveredLeaf_4a2300(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4a2300 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_4a2810 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4a2810 RecoveredLeaf_4a2810(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4a2810 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4a2820 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4a2820 RecoveredLeaf_4a2820(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4a2820 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4a2830 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4a2830 RecoveredLeaf_4a2830(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4a2830 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4a2840 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4a2840 RecoveredLeaf_4a2840(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4a2840 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4a2850 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4a2850 RecoveredLeaf_4a2850(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4a2850 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4a2860 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4a2860 RecoveredLeaf_4a2860(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4a2860 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4a2870 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4a2870 RecoveredLeaf_4a2870(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4a2870 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4a2880 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4a2880 RecoveredLeaf_4a2880(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4a2880 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4a2890 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4a2890 RecoveredLeaf_4a2890(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4a2890 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4a28a0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4a28a0 RecoveredLeaf_4a28a0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4a28a0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4a28b0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4a28b0 RecoveredLeaf_4a28b0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4a28b0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4a28c0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4a28c0 RecoveredLeaf_4a28c0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4a28c0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4a2a50 { alignas(8) unsigned char storage[32]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4a2a50 RecoveredLeaf_4a2a50(uint64_t arg0,uint64_t arg1,uint64_t arg2) {
    LEAF_CHECK
    RecoveredOutput_4a2a50 output;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg1 + 0));
    *reinterpret_cast<uint32_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(arg0);
    *reinterpret_cast<uint8_t*>((reinterpret_cast<uintptr_t>(&output) + 4)) = uint32_t(uint32_t((uint32_t(arg2) & 1)));
    *reinterpret_cast<uint8_t*>((reinterpret_cast<uintptr_t>(&output) + 5)) = 0;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 20)) = 0;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 12)) = 0;
    *reinterpret_cast<uint32_t*>((reinterpret_cast<uintptr_t>(&output) + 8)) = uint32_t(uint32_t(field0));
    return output;
}

struct RecoveredOutput_4a2c10 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4a2c10 RecoveredLeaf_4a2c10(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4a2c10 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4a2d00 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4a2d00 RecoveredLeaf_4a2d00(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4a2d00 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4a2ed0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4a2ed0 RecoveredLeaf_4a2ed0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4a2ed0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4a5070 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4a5070 RecoveredLeaf_4a5070(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4a5070 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4a9780 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4a9780 RecoveredLeaf_4a9780(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4a9780 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4b0120 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4b0120 RecoveredLeaf_4b0120(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4b0120 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4b0130 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4b0130 RecoveredLeaf_4b0130(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4b0130 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

extern "C" uint64_t LeafData_4b0140_0;
struct RecoveredOutput_4b0140 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4b0140 RecoveredLeaf_4b0140(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4b0140 output;
    const uint64_t field0 = LeafData_4b0140_0;
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((field0 + 0));
    *reinterpret_cast<uint32_t*>(((reinterpret_cast<uintptr_t>(&output) + 0) + 0)) = uint32_t(uint32_t(field1));
    *reinterpret_cast<uint32_t*>(((reinterpret_cast<uintptr_t>(&output) + 0) + 4)) = uint32_t(uint32_t(-1));
    return output;
}

struct RecoveredOutput_4b0b80 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4b0b80 RecoveredLeaf_4b0b80(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_4b0b80 output;
    *reinterpret_cast<uint8_t*>((arg0 + 159)) = uint32_t(uint32_t(1));
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 56));
    *reinterpret_cast<uint8_t*>((arg0 + 158)) = uint32_t(uint32_t(field0));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4b0de0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4b0de0 RecoveredLeaf_4b0de0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4b0de0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_4b1140 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4b1140 RecoveredLeaf_4b1140(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4b1140 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4b2d90 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4b2d90 RecoveredLeaf_4b2d90(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4b2d90 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4b4e30 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4b4e30 RecoveredLeaf_4b4e30(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4b4e30 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4b4e40 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4b4e40 RecoveredLeaf_4b4e40(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4b4e40 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4b4e50 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4b4e50 RecoveredLeaf_4b4e50(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4b4e50 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4b4f40 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4b4f40 RecoveredLeaf_4b4f40(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4b4f40 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4b4f50 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4b4f50 RecoveredLeaf_4b4f50(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4b4f50 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4b4f60 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4b4f60 RecoveredLeaf_4b4f60(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4b4f60 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4b5040 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4b5040 RecoveredLeaf_4b5040(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4b5040 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4b5050 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4b5050 RecoveredLeaf_4b5050(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4b5050 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4b5060 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4b5060 RecoveredLeaf_4b5060(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4b5060 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4b5070 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4b5070 RecoveredLeaf_4b5070(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4b5070 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4b5080 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4b5080 RecoveredLeaf_4b5080(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4b5080 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4b5180 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4b5180 RecoveredLeaf_4b5180(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4b5180 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4b55f0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4b55f0 RecoveredLeaf_4b55f0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4b55f0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_4b5880 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4b5880 RecoveredLeaf_4b5880(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4b5880 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_4b5e00 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4b5e00 RecoveredLeaf_4b5e00(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4b5e00 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_4b9df0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4b9df0 RecoveredLeaf_4b9df0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4b9df0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4b9e00 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4b9e00 RecoveredLeaf_4b9e00(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4b9e00 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4b9e10 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4b9e10 RecoveredLeaf_4b9e10(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4b9e10 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4b9e20 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4b9e20 RecoveredLeaf_4b9e20(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4b9e20 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4b9e30 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4b9e30 RecoveredLeaf_4b9e30(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4b9e30 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4b9e50 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4b9e50 RecoveredLeaf_4b9e50(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4b9e50 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4b9e60 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4b9e60 RecoveredLeaf_4b9e60(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4b9e60 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4b9e70 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4b9e70 RecoveredLeaf_4b9e70(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4b9e70 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4d4460 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4d4460 RecoveredLeaf_4d4460(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4d4460 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4d4470 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4d4470 RecoveredLeaf_4d4470(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4d4470 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4d4480 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4d4480 RecoveredLeaf_4d4480(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4d4480 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4d4490 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4d4490 RecoveredLeaf_4d4490(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4d4490 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_4d44a0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_4d44a0 RecoveredLeaf_4d44a0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_4d44a0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_518d50 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_518d50 RecoveredLeaf_518d50(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_518d50 output;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 8) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 8) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = 0;
    return output;
}

struct RecoveredOutput_54d170 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_54d170 RecoveredLeaf_54d170(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_54d170 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    const uint32_t field1 = *reinterpret_cast<const uint32_t*>((field0 + 8));
    *reinterpret_cast<uint8_t*>((arg1 + 0)) = uint32_t(uint32_t((uint32_t(uint32_t(field1)) == 3)));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_54d5a0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_54d5a0 RecoveredLeaf_54d5a0(uint64_t arg0,uint64_t arg1,uint64_t arg2,uint64_t arg3) {
    LEAF_CHECK
    RecoveredOutput_54d5a0 output;
    *reinterpret_cast<uint32_t*>((arg1 + 0)) = uint32_t(uint32_t(2));
    *reinterpret_cast<uint32_t*>((arg2 + 0)) = uint32_t(uint32_t(5));
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 184));
    *reinterpret_cast<uint32_t*>((arg3 + 0)) = uint32_t(uint32_t(field0));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_54d5d0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_54d5d0 RecoveredLeaf_54d5d0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_54d5d0 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 144));
    uint64_t merged8 = uint32_t(((uint32_t(uint32_t(48576)) & 0xffffull) | (65520ull << 16)));
    if (!(field0 == 0)) {
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((field0 + 13));
    uint64_t merged7 = uint32_t(((uint32_t(uint32_t(48576)) & 0xffffull) | (65520ull << 16)));
    if (!(uint32_t(uint32_t(field1)) == 0)) {
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 152));
    uint64_t merged6 = uint32_t(((uint32_t(uint32_t(48576)) & 0xffffull) | (65520ull << 16)));
    if (!(field2 == 0)) {
    const uint8_t field3 = *reinterpret_cast<const uint8_t*>((field2 + 13));
    uint64_t merged5 = uint32_t(((uint32_t(uint32_t(48576)) & 0xffffull) | (65520ull << 16)));
    if (!(uint32_t(uint32_t(field3)) == 0)) {
    if (!(uint32_t(uint32_t((uint32_t(arg1) | 2))) != 3)) {
    const uint32_t field4 = *reinterpret_cast<const uint32_t*>((arg0 + 168));
    *reinterpret_cast<uint32_t*>((arg0 + 168)) = uint32_t(uint32_t((uint32_t(uint32_t(field4)) + 1)));
    }
        merged5 = uint32_t(1);
    }
        merged6 = merged5;
    }
        merged7 = merged6;
    }
        merged8 = merged7;
    }
    *reinterpret_cast<uint32_t*>(((reinterpret_cast<uintptr_t>(&output) + 0) + 0)) = uint32_t(merged8);
    *reinterpret_cast<uint32_t*>(((reinterpret_cast<uintptr_t>(&output) + 0) + 4)) = 0;
    return output;
}

struct RecoveredOutput_5522d0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5522d0 RecoveredLeaf_5522d0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_5522d0 output;
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = arg1;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5522e0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5522e0 RecoveredLeaf_5522e0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5522e0 output;
    *reinterpret_cast<uint64_t*>((arg0 + 8)) = 0;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_552a00 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_552a00 RecoveredLeaf_552a00(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_552a00 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_55a0c0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_55a0c0 RecoveredLeaf_55a0c0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_55a0c0 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 0));
    *reinterpret_cast<uint8_t*>((field0 + 0)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_55ab90 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_55ab90 RecoveredLeaf_55ab90(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_55ab90 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_55aba0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_55aba0 RecoveredLeaf_55aba0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_55aba0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_55ae40 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_55ae40 RecoveredLeaf_55ae40(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_55ae40 output;
    *reinterpret_cast<uint8_t*>((arg0 + 545)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_55ae50 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_55ae50 RecoveredLeaf_55ae50(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_55ae50 output;
    *reinterpret_cast<uint8_t*>((arg0 + 545)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_55b5f0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_55b5f0 RecoveredLeaf_55b5f0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_55b5f0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_55b600 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_55b600 RecoveredLeaf_55b600(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_55b600 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_55b610 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_55b610 RecoveredLeaf_55b610(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_55b610 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_55b620 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_55b620 RecoveredLeaf_55b620(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_55b620 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_55b630 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_55b630 RecoveredLeaf_55b630(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_55b630 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_565db0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_565db0 RecoveredLeaf_565db0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_565db0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_565dc0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_565dc0 RecoveredLeaf_565dc0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_565dc0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_56b6f0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_56b6f0 RecoveredLeaf_56b6f0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_56b6f0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_56b740 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_56b740 RecoveredLeaf_56b740(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_56b740 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_56e700 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_56e700 RecoveredLeaf_56e700(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_56e700 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_56e710 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_56e710 RecoveredLeaf_56e710(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_56e710 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_56e770 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_56e770 RecoveredLeaf_56e770(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_56e770 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_576840 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_576840 RecoveredLeaf_576840(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_576840 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48576)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_576850 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_576850 RecoveredLeaf_576850(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_576850 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48576)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_57f5f0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_57f5f0 RecoveredLeaf_57f5f0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_57f5f0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_57f600 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_57f600 RecoveredLeaf_57f600(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_57f600 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_584610 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_584610 RecoveredLeaf_584610(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_584610 output;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 68));
    *reinterpret_cast<uint32_t*>(((reinterpret_cast<uintptr_t>(&output) + 0) + 0)) = uint32_t(uint32_t(field0));
    *reinterpret_cast<uint32_t*>(((reinterpret_cast<uintptr_t>(&output) + 0) + 4)) = 0;
    return output;
}

struct RecoveredOutput_58ba20 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_58ba20 RecoveredLeaf_58ba20(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_58ba20 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_58c450 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_58c450 RecoveredLeaf_58c450(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_58c450 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_58c460 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_58c460 RecoveredLeaf_58c460(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_58c460 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_58c500 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_58c500 RecoveredLeaf_58c500(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_58c500 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_58e5b0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_58e5b0 RecoveredLeaf_58e5b0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_58e5b0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

extern "C" uint64_t LeafData_5922e0_0;
struct RecoveredOutput_5922e0 { alignas(8) unsigned char storage[32]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5922e0 RecoveredLeaf_5922e0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_5922e0 output;
    const uint64_t field0 = LeafData_5922e0_0;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 8)) = (field2 | field1);
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>((arg1 + 16));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 16)) = (field4 | field3);
    const uint32_t field5 = *reinterpret_cast<const uint32_t*>((arg0 + 24));
    *reinterpret_cast<uint32_t*>((reinterpret_cast<uintptr_t>(&output) + 24)) = uint32_t(uint32_t(field5));
    return output;
}

extern "C" uint64_t LeafData_592360_0;
struct RecoveredOutput_592360 { alignas(8) unsigned char storage[32]; };
extern "C" __attribute__((noinline)) RecoveredOutput_592360 RecoveredLeaf_592360(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_592360 output;
    const uint64_t field0 = LeafData_592360_0;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = (field0 + 16);
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>((arg0 + 8));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 8)) = (~field1);
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>((arg0 + 16));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 16)) = (~field2);
    const uint32_t field3 = *reinterpret_cast<const uint32_t*>((arg0 + 24));
    *reinterpret_cast<uint32_t*>((reinterpret_cast<uintptr_t>(&output) + 24)) = uint32_t(uint32_t(field3));
    return output;
}

struct RecoveredOutput_593620 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_593620 RecoveredLeaf_593620(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_593620 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5936d0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5936d0 RecoveredLeaf_5936d0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5936d0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5936e0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5936e0 RecoveredLeaf_5936e0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5936e0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_597cb0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_597cb0 RecoveredLeaf_597cb0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_597cb0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_59b960 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_59b960 RecoveredLeaf_59b960(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_59b960 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5a5d20 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5a5d20 RecoveredLeaf_5a5d20(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5a5d20 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5a5d30 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5a5d30 RecoveredLeaf_5a5d30(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5a5d30 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5ac8c0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5ac8c0 RecoveredLeaf_5ac8c0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5ac8c0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5aef50 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5aef50 RecoveredLeaf_5aef50(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5aef50 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5b14f0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5b14f0 RecoveredLeaf_5b14f0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5b14f0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5b1500 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5b1500 RecoveredLeaf_5b1500(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5b1500 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5b2fe0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5b2fe0 RecoveredLeaf_5b2fe0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_5b2fe0 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg1 + 8));
    *reinterpret_cast<uint64_t*>((arg0 + 48)) = field0;
    const uint64_t field1 = *reinterpret_cast<const uint64_t*>(((arg1 + 16) + 0));
    const uint64_t field2 = *reinterpret_cast<const uint64_t*>(((arg1 + 16) + 8));
    *reinterpret_cast<uint64_t*>(((arg0 + 56) + 0)) = field1;
    *reinterpret_cast<uint64_t*>(((arg0 + 56) + 8)) = field2;
    const uint64_t field3 = *reinterpret_cast<const uint64_t*>(((arg1 + 32) + 0));
    const uint64_t field4 = *reinterpret_cast<const uint64_t*>(((arg1 + 32) + 8));
    *reinterpret_cast<uint64_t*>(((arg0 + 72) + 0)) = field3;
    *reinterpret_cast<uint64_t*>(((arg0 + 72) + 8)) = field4;
    const uint64_t field5 = *reinterpret_cast<const uint64_t*>(((arg1 + 48) + 0));
    const uint64_t field6 = *reinterpret_cast<const uint64_t*>(((arg1 + 48) + 8));
    *reinterpret_cast<uint64_t*>(((arg0 + 88) + 0)) = field5;
    *reinterpret_cast<uint64_t*>(((arg0 + 88) + 8)) = field6;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5b3010 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5b3010 RecoveredLeaf_5b3010(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5b3010 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5b30c0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5b30c0 RecoveredLeaf_5b30c0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5b30c0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5b3ff0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5b3ff0 RecoveredLeaf_5b3ff0(uint64_t arg0,uint64_t arg1) {
    LEAF_CHECK
    RecoveredOutput_5b3ff0 output;
    const uint8_t field0 = *reinterpret_cast<const uint8_t*>((arg1 + 8));
    *reinterpret_cast<uint8_t*>((arg0 + uint32_t(4928))) = uint32_t(uint32_t(field0));
    const uint8_t field1 = *reinterpret_cast<const uint8_t*>((arg1 + 9));
    *reinterpret_cast<uint8_t*>((arg0 + uint32_t(4929))) = uint32_t(uint32_t(field1));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5beb90 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5beb90 RecoveredLeaf_5beb90(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5beb90 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5beba0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5beba0 RecoveredLeaf_5beba0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5beba0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5becd0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5becd0 RecoveredLeaf_5becd0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5becd0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5bece0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5bece0 RecoveredLeaf_5bece0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5bece0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5c1ff0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5c1ff0 RecoveredLeaf_5c1ff0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5c1ff0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5c2050 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5c2050 RecoveredLeaf_5c2050(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5c2050 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5c2070 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5c2070 RecoveredLeaf_5c2070(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5c2070 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5c2090 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5c2090 RecoveredLeaf_5c2090(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5c2090 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_5c20a0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5c20a0 RecoveredLeaf_5c20a0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5c20a0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(((uint32_t(uint32_t(48577)) & 0xffffull) | (65520ull << 16)));
    return output;
}

struct RecoveredOutput_5c6490 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5c6490 RecoveredLeaf_5c6490(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5c6490 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5d1ce0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5d1ce0 RecoveredLeaf_5d1ce0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5d1ce0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5d1cf0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5d1cf0 RecoveredLeaf_5d1cf0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5d1cf0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5d1e80 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5d1e80 RecoveredLeaf_5d1e80(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5d1e80 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5d1e90 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5d1e90 RecoveredLeaf_5d1e90(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5d1e90 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5d2610 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5d2610 RecoveredLeaf_5d2610(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5d2610 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5d2620 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5d2620 RecoveredLeaf_5d2620(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5d2620 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5d6080 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5d6080 RecoveredLeaf_5d6080(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5d6080 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5ea130 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5ea130 RecoveredLeaf_5ea130(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5ea130 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5ea140 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5ea140 RecoveredLeaf_5ea140(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5ea140 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5ea2d0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5ea2d0 RecoveredLeaf_5ea2d0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5ea2d0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5ea2e0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5ea2e0 RecoveredLeaf_5ea2e0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5ea2e0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_5ec9d0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_5ec9d0 RecoveredLeaf_5ec9d0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_5ec9d0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(1);
    return output;
}

struct RecoveredOutput_6055c0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_6055c0 RecoveredLeaf_6055c0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_6055c0 output;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 0) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 0) + 8)) = 0;
    *reinterpret_cast<uint8_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(uint32_t(14));
    *reinterpret_cast<uint32_t*>((reinterpret_cast<uintptr_t>(&output) + 4)) = uint32_t(uint32_t(((uint32_t(uint32_t(29285)) & 0xffffull) | (25449ull << 16))));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 16)) = 0;
    *reinterpret_cast<uint32_t*>((reinterpret_cast<uintptr_t>(&output) + 1)) = uint32_t(uint32_t(((uint32_t(uint32_t(25927)) & 0xffffull) | (25966ull << 16))));
    *reinterpret_cast<uint8_t*>((reinterpret_cast<uintptr_t>(&output) + 8)) = 0;
    return output;
}

struct RecoveredOutput_6055f0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_6055f0 RecoveredLeaf_6055f0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_6055f0 output;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 0) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 0) + 8)) = 0;
    *reinterpret_cast<uint8_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(uint32_t(14));
    *reinterpret_cast<uint32_t*>((reinterpret_cast<uintptr_t>(&output) + 4)) = uint32_t(uint32_t(((uint32_t(uint32_t(27745)) & 0xffffull) | (25705ull << 16))));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 16)) = 0;
    *reinterpret_cast<uint32_t*>((reinterpret_cast<uintptr_t>(&output) + 1)) = uint32_t(uint32_t(((uint32_t(uint32_t(28233)) & 0xffffull) | (24950ull << 16))));
    *reinterpret_cast<uint8_t*>((reinterpret_cast<uintptr_t>(&output) + 8)) = 0;
    return output;
}

struct RecoveredOutput_605620 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_605620 RecoveredLeaf_605620(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_605620 output;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 0) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 0) + 8)) = 0;
    *reinterpret_cast<uint8_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(uint32_t(14));
    *reinterpret_cast<uint32_t*>((reinterpret_cast<uintptr_t>(&output) + 4)) = uint32_t(uint32_t(((uint32_t(uint32_t(27745)) & 0xffffull) | (25705ull << 16))));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 16)) = 0;
    *reinterpret_cast<uint32_t*>((reinterpret_cast<uintptr_t>(&output) + 1)) = uint32_t(uint32_t(((uint32_t(uint32_t(28233)) & 0xffffull) | (24950ull << 16))));
    *reinterpret_cast<uint8_t*>((reinterpret_cast<uintptr_t>(&output) + 8)) = 0;
    return output;
}

struct RecoveredOutput_605650 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_605650 RecoveredLeaf_605650(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_605650 output;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 0) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 0) + 8)) = 0;
    *reinterpret_cast<uint8_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(uint32_t(16));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 16)) = 0;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 1)) = ((((((24903 & 0xffffffff0000ffffull) | (25965ull << 16)) & 0xffff0000ffffffffull) | (28528ull << 32)) & 0xffffffffffffull) | (29810ull << 48));
    *reinterpret_cast<uint8_t*>((reinterpret_cast<uintptr_t>(&output) + 9)) = 0;
    return output;
}

struct RecoveredOutput_6760d0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_6760d0 RecoveredLeaf_6760d0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_6760d0 output;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 0) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 0) + 8)) = 0;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 16)) = 0;
    return output;
}

struct RecoveredOutput_6760f0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_6760f0 RecoveredLeaf_6760f0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_6760f0 output;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 0) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 0) + 8)) = 0;
    *reinterpret_cast<uint8_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(uint32_t(10));
    *reinterpret_cast<uint32_t*>((reinterpret_cast<uintptr_t>(&output) + 1)) = uint32_t(uint32_t(((uint32_t(uint32_t(28261)) & 0xffffull) | (21805ull << 16))));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 16)) = 0;
    *reinterpret_cast<uint16_t*>((reinterpret_cast<uintptr_t>(&output) + 5)) = uint32_t(uint32_t(83));
    return output;
}

struct RecoveredOutput_676140 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_676140 RecoveredLeaf_676140(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_676140 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = 0;
    return output;
}

struct RecoveredOutput_676150 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_676150 RecoveredLeaf_676150(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_676150 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = 0;
    return output;
}

extern "C" uint64_t LeafData_7dc7d0_0;
struct RecoveredOutput_7dc7d0 { alignas(8) unsigned char storage[32]; };
extern "C" __attribute__((noinline)) RecoveredOutput_7dc7d0 RecoveredLeaf_7dc7d0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_7dc7d0 output;
    const uint64_t field0 = LeafData_7dc7d0_0;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 16) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 16) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 0) + 0)) = (field0 + 80);
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 0) + 8)) = 0;
    return output;
}

struct RecoveredOutput_975da0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_975da0 RecoveredLeaf_975da0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_975da0 output;
    const uint64_t field0 = *reinterpret_cast<const uint64_t*>((arg0 + 800));
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = field0;
    return output;
}

extern "C" uint64_t LeafData_aa3870_0;
struct RecoveredOutput_aa3870 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_aa3870 RecoveredLeaf_aa3870(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_aa3870 output;
    const uint64_t field0 = LeafData_aa3870_0;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 0) + 0)) = field0;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 0) + 8)) = 0;
    return output;
}

extern "C" uint32_t LeafData_c41220_0;
struct RecoveredOutput_c41220 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_c41220 RecoveredLeaf_c41220(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_c41220 output;
    const uint32_t field0 = LeafData_c41220_0;
    *reinterpret_cast<uint32_t*>(((reinterpret_cast<uintptr_t>(&output) + 0) + 0)) = uint32_t(uint32_t(field0));
    *reinterpret_cast<uint32_t*>(((reinterpret_cast<uintptr_t>(&output) + 0) + 4)) = uint32_t(uint32_t(-1));
    return output;
}

struct RecoveredOutput_c41310 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_c41310 RecoveredLeaf_c41310(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_c41310 output;
    const uint32_t field0 = *reinterpret_cast<const uint32_t*>((arg0 + 160));
    *reinterpret_cast<uint32_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = uint32_t(uint32_t(field0));
    return output;
}

extern "C" uint32_t LeafData_c463b0_0;
struct RecoveredOutput_c463b0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_c463b0 RecoveredLeaf_c463b0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_c463b0 output;
    const uint32_t field0 = LeafData_c463b0_0;
    *reinterpret_cast<uint32_t*>(((reinterpret_cast<uintptr_t>(&output) + 0) + 0)) = uint32_t(uint32_t(field0));
    *reinterpret_cast<uint32_t*>(((reinterpret_cast<uintptr_t>(&output) + 0) + 4)) = uint32_t(uint32_t(-1));
    return output;
}

extern "C" unsigned char LeafData_d1b3f0_2[];
struct RecoveredOutput_d1b3f0 { alignas(8) unsigned char storage[56]; };
extern "C" __attribute__((noinline)) RecoveredOutput_d1b3f0 RecoveredLeaf_d1b3f0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_d1b3f0 output;
    *reinterpret_cast<uint32_t*>((reinterpret_cast<uintptr_t>(&output) + 48)) = uint32_t(uint32_t(1));
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 0) + 0)) = reinterpret_cast<uintptr_t>(LeafData_d1b3f0_2);
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 0) + 8)) = 0;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 16) + 0)) = 0;
    *reinterpret_cast<uint64_t*>(((reinterpret_cast<uintptr_t>(&output) + 16) + 8)) = 0;
    *reinterpret_cast<uint32_t*>((reinterpret_cast<uintptr_t>(&output) + 32)) = 0;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 40)) = uint32_t(7);
    return output;
}

struct RecoveredOutput_e0d460 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_e0d460 RecoveredLeaf_e0d460(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_e0d460 output;
    *reinterpret_cast<uint8_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = 0;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 8)) = 0;
    *reinterpret_cast<uint32_t*>((reinterpret_cast<uintptr_t>(&output) + 16)) = 0;
    return output;
}

struct RecoveredOutput_eb09a0 { alignas(8) unsigned char storage[24]; };
extern "C" __attribute__((noinline)) RecoveredOutput_eb09a0 RecoveredLeaf_eb09a0(uint64_t arg0) {
    LEAF_CHECK
    RecoveredOutput_eb09a0 output;
    *reinterpret_cast<uint64_t*>((reinterpret_cast<uintptr_t>(&output) + 0)) = 0;
    return output;
}
