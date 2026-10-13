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
extern "C" u32 FUN_00a9e530(const u8* p) {
    u64 temp1 = *(u64*)(p + 0x138);
    u64 temp2 = *(u64*)(temp1 + 0x128);
    return *(u32*)(temp2 + 0x10);
}
}
