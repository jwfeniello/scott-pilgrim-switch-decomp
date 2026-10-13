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
extern "C" void FUN_00b01db0(u32* src, u32* dest) {
    dest[0] = src[0x150 / 4];
    dest[1] = src[0x154 / 4];
    dest[2] = src[0x158 / 4];
    dest[3] = src[0x15c / 4];
    dest[4] = src[0x160 / 4];
    dest[5] = src[0x164 / 4];
}
}
