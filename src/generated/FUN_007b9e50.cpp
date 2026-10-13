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
extern "C" u32 FUN_007b9e50(const u8* p) {
    u32 value1 = *(const u32*)(p + 0x25c);
    u32 value2 = *(const u32*)(p + 0x154);
    return value1 - value2;
}
}
