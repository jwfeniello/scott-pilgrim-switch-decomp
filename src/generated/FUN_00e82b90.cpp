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
extern "C" void FUN_00e82b90(void* p, void* dst1, void* dst2) {
    if (dst1 != nullptr) {
        *(u64*)dst1 = *(u64*)((u8*)p + 0x3a28);
    }
    if (dst2 != nullptr) {
        *(u64*)dst2 = *(u64*)((u8*)p + 0x1f0);
    }
}
}
