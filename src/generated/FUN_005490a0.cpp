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
extern "C" u64 FUN_005490a0(const u8* p) {
  const u64* ptr1 = reinterpret_cast<const u64*>(p + 0x48);
  const u64* ptr2 = reinterpret_cast<const u64*>(*ptr1 + 0xd0);
  return *ptr2;
}
}
