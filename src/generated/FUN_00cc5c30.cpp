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
void FUN_00cc5c30(u8* p, const u32* q) {
    *(u32*)(p + 0x80) = q[0];
    *(u32*)(p + 0x84) = q[1];
    *(u32*)(p + 0x88) = q[2];
}
}
}
