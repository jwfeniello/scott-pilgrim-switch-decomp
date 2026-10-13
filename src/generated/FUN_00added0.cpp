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
extern "C" void FUN_00added0(const u8* src, u8* dst) {
    *(u32*)(dst + 0) = *(const u32*)(src + 0x170);
    *(u32*)(dst + 4) = *(const u32*)(src + 0x174);
    *(u32*)(dst + 8) = *(const u32*)(src + 0x178);
    *(u32*)(dst + 12) = *(const u32*)(src + 0x17c);
    *(u32*)(dst + 16) = *(const u32*)(src + 0x180);
    *(u32*)(dst + 20) = *(const u32*)(src + 0x184);
}
}
