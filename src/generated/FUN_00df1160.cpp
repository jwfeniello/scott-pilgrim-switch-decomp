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
extern "C" u64 FUN_00df1160(const u8* p) {
    u64 value = *(u64*)(p + 0x40);
    return value == 0 ? 0 : value + 0x10;
}
}
