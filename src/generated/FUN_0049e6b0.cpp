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
extern "C" void FUN_0049e6b0(u64* ptr, u64 val1, u64 val2) {
    ptr[0x520 / sizeof(u64)] = val1;
    ptr[0x528 / sizeof(u64)] = val2;
}
}
