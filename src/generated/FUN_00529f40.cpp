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
extern "C" void FUN_00529f40(u32* ptr, u32 value1, u32 value2) {
    ptr[0x14 / sizeof(u32)] = value1;
    ptr[0x14 / sizeof(u32) + 1] = value2;
}
}
