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
extern "C" void FUN_004facb0(u64* dest, const u64* src) {
  u64 x8, x9;
  x8 = src[0];
  x9 = src[1];
  dest[0] = x8;
  dest[1] = x9;
}
}
