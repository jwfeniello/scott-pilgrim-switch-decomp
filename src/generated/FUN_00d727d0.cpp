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
extern "C" void FUN_00d727d0(float* p, float v1, float v2) {
    p[0x6c / sizeof(float)] = v1;
    p[0x70 / sizeof(float)] = v2;
}
}
