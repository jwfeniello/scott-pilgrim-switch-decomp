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
extern "C" int FUN_00d6d9f0(const u8* p) {
    int value = *(const int*)(p + 8);
    if (value == 2) {
        return -2;
    } else {
        return *(const int*)(p + 0xdc);
    }
}
}
