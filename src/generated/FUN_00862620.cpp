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

extern "C" {
    u64 FUN_00862620() {
        u32 lower = 0xd4e8;
        u32 upper = 0x1486;
        return ((u64)upper << 16) | lower;
    }
}
}
