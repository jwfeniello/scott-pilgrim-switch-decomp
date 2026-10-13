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
extern "C" void FUN_00767d40(u8* p) {
    *(u32*)(p + 0x2ec) = 0x64;
    *(u32*)(p + 0x318) = 4;
}
}
