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
extern "C" u32 FUN_00dba210(const u8* p) {
    const u8* ptr1 = reinterpret_cast<const u8*>(*(const u64*)(p + 0x40));
    const u8* ptr2 = reinterpret_cast<const u8*>(*(const u64*)(ptr1 + 0x158));
    return *(const u32*)(ptr2 + 0x10);
}
}
