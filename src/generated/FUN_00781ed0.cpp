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
typedef unsigned char u8;

extern "C" {
    u32 FUN_00781ed0(const u8* p) {
        u32 result = 0;
        result = (u32)p[0x10];
        return result;
    }
}
}
