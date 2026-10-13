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
extern "C" u32 FUN_00e39150(u32 x) {
    u32 w8 = x ^ (x << 13);
    w8 = w8 ^ (w8 >> 17);
    w8 = w8 ^ (w8 << 5);
    return w8;
}
}
