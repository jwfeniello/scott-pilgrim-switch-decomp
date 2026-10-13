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
extern "C" void FUN_00efa0b0(void* ptr, u64 value) { 
    reinterpret_cast<u64*>(ptr)[0x78 / sizeof(u64)] = value; 
}
}
