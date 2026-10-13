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
extern "C" {
void FUN_00543e50(void* ptr, u64 val1, u64 val2) {
    u64* p = static_cast<u64*>(ptr);
    p[6] = val1;
    p[7] = val2;
}
}
}
