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
extern "C" void FUN_00c95b60(u64* p, u32* q) { *reinterpret_cast<u32*>(reinterpret_cast<u8*>(p) + 0xe8) = *q; }
}
