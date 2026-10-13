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
extern "C" u64 FUN_0056cdc0(const u8* p) {
    u64 result;
    result = *(u64*)((const u8*)p + 0x30);
    result = *(u64*)((const u8*)result + 8);
    result = *(u64*)((const u8*)result + 0x58);
    return result;
}
}
