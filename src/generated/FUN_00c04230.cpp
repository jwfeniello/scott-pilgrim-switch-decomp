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
  extern "C" u32 FUN_00c04230(const u8* p) {
    u64 value1 = *(u64*)(p + 0x20);
    if (value1 == 0) {
      return 0;
    }
    u64 value2 = *(u64*)(p + 0x30);
    return (value2 != 0);
  }
}
}
