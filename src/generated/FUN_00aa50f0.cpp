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
typedef unsigned char u8;

typedef unsigned short u16;

typedef unsigned int u32;

typedef unsigned long u64;

typedef signed char s8;

typedef short s16;

typedef int s32;

typedef long s64;

extern "C" {
  u32 FUN_00aa50f0(const u8* p) {
    u64 addr = *(u64*)(p + 0x1c8);
    return *(u32*)(addr + 0x60);
  }
}
}
