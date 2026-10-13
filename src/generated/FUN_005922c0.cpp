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
extern "C" void FUN_005922c0(u8* p, u8* q) {
    u64 temp1 = *(u64*)(q + 8);
    u64 temp2 = *(u64*)(p + 8);
    temp1 &= temp2;
    *(u64*)(p + 8) = temp1;

    temp1 = *(u64*)(q + 0x10);
    temp2 = *(u64*)(p + 0x10);
    temp1 &= temp2;
    *(u64*)(p + 0x10) = temp1;
}
}
