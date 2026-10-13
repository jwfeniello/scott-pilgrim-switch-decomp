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
void FUN_005925d0(u8* p, u32 v) { *(u32*)(p+0x20) = v; *(u8*)(p+0x4a) = v; }
}
