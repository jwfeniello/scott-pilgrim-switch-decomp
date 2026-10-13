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
extern "C" {
void FUN_00c970e0(u8* p, u32* q) {
    *reinterpret_cast<u32*>(p + 0xa0) = *q;
}
}
}
