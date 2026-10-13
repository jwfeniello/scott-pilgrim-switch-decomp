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
extern "C" void FUN_00543e80(u8* p, u64 v1, u64 v2) { *(u64*)(p + 0xa0) = v1; *(u64*)(p + 0xa8) = v2; }
}
