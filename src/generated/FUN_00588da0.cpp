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
extern "C" int FUN_00588da0(u8* buffer, u32 value) {
    u32* ptr = reinterpret_cast<u32*>(buffer + 0x18);
    if (*ptr >= value) {
        *reinterpret_cast<u32*>(buffer + 0x20) = value;
        return 1;
    } else {
        return 0;
    }
}
}
