// Isolated machine ABI views; original class identities and complete declarations remain provisional.
// Recovered field operations and forwarding ABI views. Original complete signatures remain unknown.
#include <stdint.h>
typedef unsigned char ByteVector16 __attribute__((vector_size(16),aligned(1)));
typedef unsigned char ByteVector8 __attribute__((vector_size(8),aligned(1)));
static __attribute__((always_inline)) inline ByteVector16 LeafSet64(ByteVector16 input,uint64_t value,unsigned lane) { union {ByteVector16 vector;uint64_t words[2];} bits;bits.vector=input;bits.words[lane]=value;return bits.vector; }
static __attribute__((always_inline)) inline uint64_t LeafDoubleBits(double input) { uint64_t value;__builtin_memcpy(&value,&input,8);return value; }
static __attribute__((always_inline)) inline uint32_t LeafFloatBits(float input) { uint32_t value;__builtin_memcpy(&value,&input,4);return value; }
static __attribute__((always_inline)) inline double LeafBitsDouble(uint64_t input) { double value;__builtin_memcpy(&value,&input,8);return value; }
static __attribute__((always_inline)) inline float LeafBitsFloat(uint32_t input) { float value;__builtin_memcpy(&value,&input,4);return value; }
#ifdef LEAF_NEGATIVE_CONTROL
extern "C" void LeafAddedSideEffect();
#define LEAF_CHECK LeafAddedSideEffect();
#else
#define LEAF_CHECK
#endif

typedef float FloatVector4 __attribute__((vector_size(16),aligned(1)));
typedef float FloatVector2 __attribute__((vector_size(8),aligned(1)));
typedef double DoubleVector2 __attribute__((vector_size(16),aligned(1)));
typedef uint32_t UnsignedVector4 __attribute__((vector_size(16),aligned(1)));
typedef uint32_t UnsignedVector2 __attribute__((vector_size(8),aligned(1)));
typedef uint64_t UnsignedVector64x2 __attribute__((vector_size(16),aligned(1)));
typedef uint16_t UnsignedVector16x8 __attribute__((vector_size(16),aligned(1)));
typedef uint16_t UnsignedVector16x4 __attribute__((vector_size(8),aligned(1)));
template<class Out,class In> __attribute__((always_inline)) inline Out LeafBitView(In value) {
    Out result={};__builtin_memcpy(&result,&value,sizeof(Out)<sizeof(In)?sizeof(Out):sizeof(In));return result;
}

struct RecoveredGpPair { uint64_t first, second; };

extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_64b10() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{0,0};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_64b20() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{0,0};
}
}

extern "C" unsigned char LeafData_67a060_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_67a060() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_67a060_0) - 2848) + 2848),0};
}
}

extern "C" unsigned char LeafData_67a070_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_67a070() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_67a070_0) - 128) + 128),0};
}
}

extern "C" unsigned char LeafData_680680_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_680680() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_680680_0) - 2064) + 2064),0};
}
}

extern "C" unsigned char LeafData_680690_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_680690() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_680690_0) - 432) + 432),0};
}
}

extern "C" unsigned char LeafData_6806a0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_6806a0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_6806a0_0) - 224) + 224),0};
}
}

extern "C" unsigned char LeafData_6806b0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_6806b0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_6806b0_0) - 3888) + 3888),0};
}
}

extern "C" unsigned char LeafData_6806c0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_6806c0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_6806c0_0) - 3456) + 3456),0};
}
}

extern "C" unsigned char LeafData_6806d0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_6806d0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_6806d0_0) - 688) + 688),0};
}
}

extern "C" unsigned char LeafData_6806e0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_6806e0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_6806e0_0) - 144) + 144),0};
}
}

extern "C" unsigned char LeafData_6806f0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_6806f0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_6806f0_0) - 1792) + 1792),0};
}
}

extern "C" unsigned char LeafData_7297b0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_7297b0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_7297b0_0) - 2000) + 2000),0};
}
}

extern "C" unsigned char LeafData_72b320_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_72b320() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_72b320_0) - 944) + 944),0};
}
}

extern "C" unsigned char LeafData_72b330_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_72b330() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_72b330_0) - 896) + 896),0};
}
}

extern "C" unsigned char LeafData_72b340_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_72b340() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_72b340_0) - 848) + 848),0};
}
}

extern "C" unsigned char LeafData_72e3c0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_72e3c0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_72e3c0_0) - 976) + 976),0};
}
}

extern "C" unsigned char LeafData_72ee80_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_72ee80() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_72ee80_0) - 3728) + 3728),0};
}
}

extern "C" unsigned char LeafData_732500_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_732500() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_732500_0) - 1680) + 1680),0};
}
}

extern "C" unsigned char LeafData_732510_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_732510() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_732510_0) - 1632) + 1632),0};
}
}

extern "C" unsigned char LeafData_732520_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_732520() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_732520_0) - 1584) + 1584),0};
}
}

extern "C" unsigned char LeafData_732530_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_732530() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_732530_0) - 1536) + 1536),0};
}
}

extern "C" unsigned char LeafData_732540_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_732540() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_732540_0) - 1488) + 1488),0};
}
}

extern "C" unsigned char LeafData_732550_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_732550() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_732550_0) - 1440) + 1440),0};
}
}

extern "C" unsigned char LeafData_732560_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_732560() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_732560_0) - 1392) + 1392),0};
}
}

extern "C" unsigned char LeafData_77c3f0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_77c3f0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_77c3f0_0) - 2896) + 2896),0};
}
}

extern "C" unsigned char LeafData_77c400_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_77c400() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_77c400_0) - 3648) + 3648),0};
}
}

extern "C" unsigned char LeafData_77c410_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_77c410() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_77c410_0) - 3216) + 3216),0};
}
}

extern "C" unsigned char LeafData_77c420_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_77c420() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_77c420_0) - 672) + 672),0};
}
}

extern "C" unsigned char LeafData_77c430_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_77c430() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_77c430_0) - 400) + 400),0};
}
}

extern "C" unsigned char LeafData_77c440_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_77c440() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_77c440_0) - 4032) + 4032),0};
}
}

extern "C" unsigned char LeafData_77c450_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_77c450() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_77c450_0) - 3184) + 3184),0};
}
}

extern "C" unsigned char LeafData_77c460_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_77c460() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_77c460_0) - 2704) + 2704),0};
}
}

extern "C" unsigned char LeafData_77c470_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_77c470() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_77c470_0) - 1520) + 1520),0};
}
}

extern "C" unsigned char LeafData_77c480_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_77c480() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_77c480_0) - 720) + 720),0};
}
}

extern "C" unsigned char LeafData_77c490_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_77c490() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_77c490_0) - 1184) + 1184),0};
}
}

extern "C" unsigned char LeafData_7a3590_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_7a3590() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_7a3590_0) - 1760) + 1760),0};
}
}

extern "C" unsigned char LeafData_7a35a0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_7a35a0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_7a35a0_0) - 1456) + 1456),0};
}
}

extern "C" unsigned char LeafData_91a580_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_91a580() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_91a580_0) - 3200) + 3200),0};
}
}

extern "C" unsigned char LeafData_91a590_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_91a590() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_91a590_0) - 1776) + 1776),0};
}
}

extern "C" unsigned char LeafData_91a5a0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_91a5a0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_91a5a0_0) - 3936) + 3936),0};
}
}

extern "C" unsigned char LeafData_91a5b0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_91a5b0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_91a5b0_0) - 544) + 544),0};
}
}

extern "C" unsigned char LeafData_91a5c0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_91a5c0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_91a5c0_0) - 1216) + 1216),0};
}
}

extern "C" unsigned char LeafData_91a5d0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_91a5d0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_91a5d0_0) - 1504) + 1504),0};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_943340() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(632),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_943820() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(648),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9439c0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(664),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_943a20() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(680),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_948650() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(648),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_948800() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(664),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9488c0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(680),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_94c5a0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(648),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_94c750() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(664),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_94d3f0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(648),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_94d720() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(664),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_94d8f0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(696),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_94dec0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(648),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_94df80() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(664),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_94e940() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(664),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_94f0b0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(648),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_94f930() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(664),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_94faf0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(696),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9513a0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(648),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_951590() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(664),uint32_t(1)};
}
}

extern "C" unsigned char LeafData_95adf0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_95adf0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_95adf0_0) - 2064) + 2064),0};
}
}

extern "C" unsigned char LeafData_95ae00_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_95ae00() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_95ae00_0) - 304) + 304),0};
}
}

extern "C" unsigned char LeafData_95ae10_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_95ae10() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_95ae10_0) - 3680) + 3680),0};
}
}

extern "C" unsigned char LeafData_95ae20_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_95ae20() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_95ae20_0) - 3632) + 3632),0};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_970ef0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(768),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_971080() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(784),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9713a0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(800),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_971520() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(816),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9719b0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(832),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_971ff0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(848),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9725d0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(864),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_972b60() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(880),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_972dc0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(896),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_972f20() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(912),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_973220() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(928),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9733d0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(944),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_973590() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(960),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_973730() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(976),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9738d0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(992),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_973e20() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1008),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_974580() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1024),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9748c0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1040),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_974df0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1056),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_974f80() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1072),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_975020() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1088),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9750f0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1104),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_975380() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1120),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_975790() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1136),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9758f0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1152),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_980d70() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(768),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_981270() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(784),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9813a0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(800),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_981540() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(816),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9817f0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(832),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_981c00() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(864),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9824e0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(896),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9825c0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(912),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_983160() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(928),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_983300() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(960),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_983470() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(976),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9834e0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1008),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_983e70() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1024),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_984330() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1040),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_984d20() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1056),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_984ff0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1088),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9850e0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1104),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9872b0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1288),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9875a0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1304),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9876a0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1320),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_987870() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1336),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_987bc0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1352),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_987cc0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1368),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_987ea0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1384),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_987fa0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1400),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9880a0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1416),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_988300() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1432),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_988570() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1448),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_988670() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1464),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_988810() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1480),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_988a10() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1496),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_988c70() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1512),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_988ed0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1528),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_989070() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1544),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_989370() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1560),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_989c80() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1576),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_98a4a0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1592),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_98a5b0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1608),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_98a7a0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1624),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_98ab70() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1640),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_98b1e0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1656),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_98b630() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1672),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_98bc50() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1688),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_98c860() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1704),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_98c8e0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1720),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_98d090() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1736),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_98d1f0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1752),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_98d390() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1768),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_98d700() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1784),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_98e410() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1800),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_98e5b0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1816),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_98ece0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1832),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_98f260() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1848),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_98f460() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1864),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_98f6f0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1880),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_98f890() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1896),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_98f9c0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1912),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_98fdf0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1928),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_98fed0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1944),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_990130() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1960),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_990330() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1976),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9903d0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1992),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9906e0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2008),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9907f0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2024),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_998170() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1720),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9981f0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1912),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9997f0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1720),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_999870() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1912),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_999ea0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1720),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_999f10() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1912),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_99afc0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1720),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_99b030() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1912),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_99c370() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1720),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_99c3e0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1912),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_99caa0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1720),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_99cb10() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1912),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_99dae0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2064),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_99edc0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1720),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_99ef40() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1912),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_99f070() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2024),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9a4610() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(624),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9a4930() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(640),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9a4ad0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(656),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9a4c30() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(672),uint32_t(1)};
}
}

extern "C" unsigned char LeafData_9abeb0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9abeb0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_9abeb0_0) - 1920) + 1920),0};
}
}

extern "C" unsigned char LeafData_9abec0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9abec0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_9abec0_0) - 1280) + 1280),0};
}
}

extern "C" unsigned char LeafData_9abed0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9abed0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_9abed0_0) - 1088) + 1088),0};
}
}

extern "C" unsigned char LeafData_9abee0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9abee0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_9abee0_0) - 256) + 256),0};
}
}

extern "C" unsigned char LeafData_9abef0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9abef0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_9abef0_0) - 1696) + 1696),0};
}
}

extern "C" unsigned char LeafData_9abf00_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9abf00() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_9abf00_0) - 1536) + 1536),0};
}
}

extern "C" unsigned char LeafData_9abf10_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9abf10() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_9abf10_0) - 96) + 96),0};
}
}

extern "C" unsigned char LeafData_9abf20_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9abf20() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_9abf20_0) - 4032) + 4032),0};
}
}

extern "C" unsigned char LeafData_9abf30_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9abf30() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_9abf30_0) - 3904) + 3904),0};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9b8680() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(768),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9b8760() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(848),uint32_t(1)};
}
}

extern "C" unsigned char LeafData_9b8770_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9b8770() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_9b8770_0) - 2336) + 2336),0};
}
}

extern "C" unsigned char LeafData_9b8780_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9b8780() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_9b8780_0) - 2144) + 2144),0};
}
}

extern "C" unsigned char LeafData_9b8790_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9b8790() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_9b8790_0) - 1952) + 1952),0};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9b8c60() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(640),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9b8d20() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(656),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9b8e70() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(672),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9c2a70() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(624),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9c2b10() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(640),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9c2ce0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(656),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9c3120() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(672),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9c3480() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(688),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9c3670() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(704),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9c3bd0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(720),uint32_t(1)};
}
}

extern "C" unsigned char LeafData_9c91a0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9c91a0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_9c91a0_0) - 3680) + 3680),0};
}
}

extern "C" unsigned char LeafData_9c91b0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9c91b0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_9c91b0_0) - 448) + 448),0};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9cec30() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(768),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9cef50() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(784),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9ceff0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(800),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9cf0a0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(816),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9cf110() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(864),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9cf4f0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(896),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9cf660() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(928),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9cf6d0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1008),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9cf850() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1088),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9d0480() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1376),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9d06d0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1392),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9d12a0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1408),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9d1c50() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1424),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9d1d90() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1440),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9d2390() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1456),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9d2890() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1472),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9d2a60() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1488),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9d3180() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1504),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9d3770() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1520),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9d3960() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1536),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9d3e00() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1552),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9d40a0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1568),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9d4240() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1584),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9d45e0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1600),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9d4ee0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1616),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9d5440() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1632),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9d58c0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1648),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9d5c60() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1664),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9d6240() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1680),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9d6af0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1696),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9d7740() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1712),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9d7d90() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1728),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9d80c0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1744),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9d8ef0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1760),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9d9130() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1776),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9d98b0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1792),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9d9a70() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1808),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9da270() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1872),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9da3e0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1888),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9da570() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1904),uint32_t(1)};
}
}

extern "C" unsigned char LeafData_9da580_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9da580() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_9da580_0) - 1424) + 1424),0};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9e3140() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(768),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9e3150() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(864),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9e4100() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1872),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9e50b0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(768),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9e5340() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1872),uint32_t(1)};
}
}

extern "C" unsigned char LeafData_9e5350_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9e5350() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_9e5350_0) - 864) + 864),0};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9e6240() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(768),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9e6300() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1408),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9e6e40() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(768),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9e7260() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1872),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9e7650() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1920),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9e86f0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1392),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9e87b0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1616),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9e88c0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1872),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9e89d0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1888),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9e8ae0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1904),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9e8bf0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1920),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9e8d00() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1936),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9e9bc0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1552),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9e9cd0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1872),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9e9de0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1888),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9ea440() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1552),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9eb240() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1552),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9eb2d0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1568),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9eb3f0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1872),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9eb500() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1888),uint32_t(1)};
}
}

extern "C" unsigned char LeafData_9eb510_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9eb510() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_9eb510_0) - 1312) + 1312),0};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9ec230() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1872),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9ec530() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1888),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9ed1f0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1872),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9ed300() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1888),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9ef0b0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(768),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9ef480() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1392),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9ef500() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1552),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9ef590() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1568),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9ef610() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1872),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9ef720() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1888),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9ef830() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1904),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9ef940() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1920),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9efa50() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1936),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9efb60() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1952),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9efc80() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1968),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9efd00() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1984),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9f09c0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1568),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9f0ae0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1872),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9f1c30() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(848),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9f1eb0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1600),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9f2590() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1872),uint32_t(1)};
}
}

extern "C" unsigned char LeafData_9f25a0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9f25a0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_9f25a0_0) - 1456) + 1456),0};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9f3ec0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(768),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9f4130() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(864),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9f4c10() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2000),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9f4d30() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2016),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9f4e00() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2032),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9f71b0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1552),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9f72d0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1872),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9f73e0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1888),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9f74f0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1904),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9f7600() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1920),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9f7720() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1936),uint32_t(1)};
}
}

extern "C" unsigned char LeafData_9f7730_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9f7730() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_9f7730_0) - 3824) + 3824),0};
}
}

extern "C" unsigned char LeafData_9f7740_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9f7740() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_9f7740_0) - 1872) + 1872),0};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9f9300() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(800),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9f9480() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(976),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9f94f0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(992),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9f9930() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1552),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9f9a40() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1872),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9f9b60() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1888),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9f9c70() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1904),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9fb6f0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(768),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9fbae0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1392),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9fbf60() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1552),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9fbff0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1568),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9fc110() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1872),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9fc220() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1888),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9fc330() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1904),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9fc440() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1920),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9fcec0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1936),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9fd000() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1952),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9fd110() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1968),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9fe430() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(768),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9fe7d0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1872),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9fe960() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1920),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9ff540() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1088),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9ff6d0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1872),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9ff910() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1888),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9ffa20() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1904),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9ffb30() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1920),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_9ffd00() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1936),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a00200() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(976),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a005c0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1872),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a00a90() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1904),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a03660() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(768),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a036d0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(864),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a043c0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1872),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a04860() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1888),uint32_t(1)};
}
}

extern "C" unsigned char LeafData_a04870_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a04870() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_a04870_0) - 2800) + 2800),0};
}
}

extern "C" unsigned char LeafData_a04880_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a04880() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_a04880_0) - 2192) + 2192),0};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a11df0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(624),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a12070() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(640),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a12140() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(656),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a121c0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(672),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a13220() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(624),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a13400() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(640),uint32_t(1)};
}
}

extern "C" unsigned char LeafData_a13410_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a13410() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_a13410_0) - 1056) + 1056),0};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a13bf0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(624),uint32_t(1)};
}
}

extern "C" unsigned char LeafData_a13c00_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a13c00() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_a13c00_0) - 560) + 560),0};
}
}

extern "C" unsigned char LeafData_a13c10_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a13c10() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_a13c10_0) - 368) + 368),0};
}
}

extern "C" unsigned char LeafData_a13c20_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a13c20() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_a13c20_0) - 3120) + 3120),0};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a14b90() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(168),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a14dc0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(184),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a14f40() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(200),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a15ed0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(168),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a16030() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(184),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a19220() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(768),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a195a0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(784),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a19c10() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(848),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a19ca0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(864),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a19ff0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(896),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a1a160() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(928),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a1a370() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(976),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a1b270() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1584),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a1b370() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1600),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a1c980() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1952),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a1d0a0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1968),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a1d490() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1984),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a1da30() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2000),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a1dbe0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2016),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a1e380() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2032),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a1e460() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2048),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a21510() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(784),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a21590() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(848),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a21740() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(976),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a21d30() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1376),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a21ed0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1488),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a22150() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1600),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a22650() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1952),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a226c0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1984),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a227f0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2048),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a22c40() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2064),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a23390() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2080),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a23520() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2096),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a24410() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2112),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a248a0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2128),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a24f50() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2144),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a251d0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2160),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a25e90() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1952),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a26410() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2096),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a26770() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2112),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a26940() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2128),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a297c0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(768),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a299d0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(848),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a29bd0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(864),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a29ca0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1376),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a2ac80() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1952),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a2ae00() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1968),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a2b420() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1984),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a2b920() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2064),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a2ba90() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2080),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a2c910() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2096),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a2cbd0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2112),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a2d1d0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2128),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a2d760() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2144),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a2d960() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2160),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a2ed30() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2176),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a31f90() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(768),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a31fb0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2064),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a32270() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2080),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a323b0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2096),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a326a0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2112),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a32c50() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2128),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a33050() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2144),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a33640() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2160),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a33c20() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2176),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a350c0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2192),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a35ae0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2208),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a36330() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2224),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a36ef0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2240),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a37870() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2256),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a3ac00() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(768),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a3b710() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2064),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a3cca0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(976),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a3d300() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2064),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a3dd20() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2080),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a3e080() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2096),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a3e2d0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2112),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a3e520() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2128),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a3e770() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2144),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a3f100() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2160),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a402d0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1952),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a403f0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1968),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a40550() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2048),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a40b20() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2064),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a41490() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2080),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a417a0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2096),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a41a30() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2112),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a41c80() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2128),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a42e90() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(768),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a43040() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(848),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a431b0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(864),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a43370() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2064),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a43450() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2080),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a43600() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2096),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a43b20() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2112),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a43f50() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2128),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a44030() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2144),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a440a0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2160),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a457c0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1952),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a45820() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2032),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a45eb0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2064),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a465b0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2080),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a46a90() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2096),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a46d20() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2112),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a48030() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(864),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a48740() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1952),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a48b10() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1968),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a48f30() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2032),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a497f0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2048),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a49970() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2064),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a49e20() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2080),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a4a020() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2096),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a4a800() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2112),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a4aa20() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2128),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a4c920() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(912),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a4cae0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(976),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a4cbd0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1376),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a4cd70() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1488),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a4d1e0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1568),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a4d4a0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1584),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a4daf0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1952),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a4dcc0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1968),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a4de90() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1984),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a4e740() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2064),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a4ea50() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2080),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a4eff0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2096),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a4f4c0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2112),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a4f990() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2128),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a50020() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2144),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a501c0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2160),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a51420() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(168),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a514d0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(184),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a51690() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(200),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a53330() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(976),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a53400() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1376),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a53580() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1488),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a53930() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1568),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a53b90() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1952),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a54200() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2048),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a547d0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2064),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a54f00() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2080),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a556a0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2096),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a55900() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2112),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a56a80() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(168),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a56c60() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(184),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a59270() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(768),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a598d0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(848),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a59a10() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(928),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a59cd0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1376),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a5aea0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1952),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a5b490() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2032),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a5b670() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2064),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a5bd00() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2080),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a5bf10() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2096),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a5c090() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2112),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a5c3e0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2128),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a5ca80() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2144),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a5ce30() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2160),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a5d0e0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2176),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a5d580() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2192),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a5dfc0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2208),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a5e230() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2224),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a5e610() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2240),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a5ec70() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2256),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a60640() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(784),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a60bf0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1568),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a614a0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2032),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a61650() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2064),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a63230() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1952),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a634b0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2032),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a637d0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2096),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a63970() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2112),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a63b10() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2144),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a63dc0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2160),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a64380() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2176),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a64550() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2192),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a64890() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2208),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a64ab0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2224),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a64d00() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2240),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a64ef0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2256),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a66060() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(168),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a665a0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(184),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a66640() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(200),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a66660() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(216),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a674a0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(976),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a67660() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1488),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a676d0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1584),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a67b70() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1952),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a68350() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2032),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a68970() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2096),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a68bb0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2144),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a68d50() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2160),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a68f00() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2176),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a6ac10() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(928),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a6ace0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1376),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a6b230() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(1568),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a6b6b0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2064),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a6bd50() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2080),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a6ca40() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2096),uint32_t(1)};
}
}


extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_a6d1f0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{uint32_t(2112),uint32_t(1)};
}
}

extern "C" unsigned char LeafData_c6ccc0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_c6ccc0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_c6ccc0_0) - 3200) + 3200),0};
}
}

extern "C" unsigned char LeafData_c6ccd0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_c6ccd0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_c6ccd0_0) - 1808) + 1808),0};
}
}

extern "C" unsigned char LeafData_c6cce0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_c6cce0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_c6cce0_0) - 336) + 336),0};
}
}

extern "C" unsigned char LeafData_c6ccf0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_c6ccf0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_c6ccf0_0) - 3328) + 3328),0};
}
}

extern "C" unsigned char LeafData_c8cf70_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_c8cf70() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_c8cf70_0) - 912) + 912),0};
}
}

extern "C" unsigned char LeafData_c8cf80_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_c8cf80() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_c8cf80_0) - 3984) + 3984),0};
}
}

extern "C" unsigned char LeafData_c9d730_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_c9d730() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_c9d730_0) - 1760) + 1760),0};
}
}

extern "C" unsigned char LeafData_c9d740_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_c9d740() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_c9d740_0) - 1408) + 1408),0};
}
}

extern "C" unsigned char LeafData_c9d750_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_c9d750() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_c9d750_0) - 1888) + 1888),0};
}
}

extern "C" unsigned char LeafData_ce46b0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_ce46b0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_ce46b0_0) - 80) + 80),0};
}
}

extern "C" unsigned char LeafData_ce46c0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_ce46c0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_ce46c0_0) - 2928) + 2928),0};
}
}

extern "C" unsigned char LeafData_ce46d0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_ce46d0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_ce46d0_0) - 1792) + 1792),0};
}
}

extern "C" unsigned char LeafData_ce46e0_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_ce46e0() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_ce46e0_0) - 1776) + 1776),0};
}
}

extern "C" unsigned char LeafData_ced650_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_ced650() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_ced650_0) - 2192) + 2192),0};
}
}

extern "C" unsigned char LeafData_ced660_0[];
extern "C" __attribute__((noinline)) RecoveredGpPair RecoveredLeaf_ced660() {
    LEAF_CHECK
block_0: {

    return RecoveredGpPair{((reinterpret_cast<uintptr_t>(LeafData_ced660_0) - 1648) + 1648),0};
}
}
