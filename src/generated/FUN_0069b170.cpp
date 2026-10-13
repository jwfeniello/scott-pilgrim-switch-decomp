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
extern "C" int FUN_0069b170(const u8* p1, const u8* p2) {
    u64 val1 = *(const u64*)(p1 + 0x10);
    u64 val2 = *(const u64*)(p2 + 0x10);
    return (val1 == val2) ? 1 : 0;
}
}
