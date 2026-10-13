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
extern "C" float FUN_00d1b4c0(float* p, float* q) {
    float a = *q;
    float b = p[2];
    a += b;
    p[2] = a;
    return a;
}
}
