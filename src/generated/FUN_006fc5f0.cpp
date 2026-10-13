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
extern "C" u32 FUN_006fc5f0(const u8* p) {
    const u8* ptr1 = *(const u8**)(p + 0x38);
    const u8* ptr2 = *(const u8**)(ptr1);
    u32 value = *(const u32*)(ptr2 + 0xc);
    return (value == 4) ? 1 : 0;
}
}
