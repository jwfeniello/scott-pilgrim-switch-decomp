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
extern "C" void FUN_009d01b0(u8* p) {
    u64 value64 = *(u64*)(p + 0x1a4);
    *(u64*)(p + 0x7d4) = value64;

    u32 value32 = *(u32*)(p + 0x1ac);
    *(u32*)(p + 0x7dc) = value32;

    *(u32*)(p + 0x15c) = 0;
}
}
