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
extern "C" int FUN_00d6a710(const u8* p) {
    u32 value = *(const u32*)(p + 8);
    return (value == 2) ? 1 : 0;
}
}
