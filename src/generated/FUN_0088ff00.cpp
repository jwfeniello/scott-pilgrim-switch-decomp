// Fixed aliases for the target LP64 ABI. Generated proposal follows.
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long u64;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef long s64;

extern "C" {
extern "C" void FUN_0088ff00(u32* src, u32* dst) {
    dst[0] = src[0x178 / 4];
    dst[1] = src[0x17c / 4];
    dst[2] = src[0x180 / 4];
    dst[3] = src[0x184 / 4];
    dst[4] = src[0x188 / 4];
    dst[5] = src[0x18c / 4];
}
}
