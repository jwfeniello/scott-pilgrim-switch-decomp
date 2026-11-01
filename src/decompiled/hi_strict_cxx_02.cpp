// The decompiler's text of these functions, compiled as C and compared with the original bytes.
// Every function here matches exactly, but this is a low-level view: nothing has been reviewed. Types
// are the decompiler's guesses, sub_ and qword_ names are address labels, and calls have no real
// prototypes. See docs/DECOMPILER_TEXT.md.
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
typedef unsigned long long _QWORD; typedef unsigned int _DWORD; typedef unsigned short _WORD; typedef unsigned char _BYTE; typedef unsigned char _BOOL1; typedef unsigned int _BOOL4; typedef unsigned long long _BOOL8;
typedef __uint128_t _OWORD;
typedef char __guard; typedef long time_t; typedef int wchar_t_; typedef unsigned long pthread_t; typedef unsigned long size_t; typedef long ssize_t; typedef struct { char data[48]; } pthread_mutex_t; typedef struct { char data[48]; } pthread_cond_t; typedef void FILE;
typedef union { unsigned long long n128_u64[2]; float n128_f32[4]; double n128_f64[2]; } __n128;
typedef char type_info; typedef struct { int v; } pthread_mutexattr_t; typedef struct { unsigned s_addr; } in_addr; typedef struct { unsigned short sa_family; char sa_data[14]; } sockaddr;
struct timezone { int tz_minuteswest; int tz_dsttime; };
typedef struct RecoveredSdkText { char *data; } RecoveredSdkText;
typedef struct RecoveredSdkResult { short code; const char *unknown08; unsigned int unknown10; RecoveredSdkText domain; unsigned char error; } RecoveredSdkResult;
#define __PAIR64__(h, l) (((unsigned long long)(unsigned int)(h) << 32) | (unsigned int)(l))
#define __PAIR128__(h, l) (((__uint128_t)(unsigned long long)(h) << 64) | (unsigned long long)(l))
#define __fastcall
#define __cdecl
#define __noreturn
#define LODWORD(x) (*((_DWORD*)&(x)))
#define HIDWORD(x) (*((_DWORD*)&(x)+1))
#define LOBYTE(x) (*((_BYTE*)&(x)))
#define HIBYTE(x) (*((_BYTE*)&(x)+sizeof(x)-1))
#define BYTE1(x) (*((_BYTE*)&(x)+1))
#define BYTE2(x) (*((_BYTE*)&(x)+2))
#define BYTE3(x) (*((_BYTE*)&(x)+3))
#define LOWORD(x) (*((_WORD*)&(x)))
#define HIWORD(x) (*((_WORD*)&(x)+1))
#define SLODWORD(x) (*((int*)&(x)))
#define SHIDWORD(x) (*((int*)&(x)+1))
#define SLOBYTE(x) (*((signed char*)&(x)))
#define SBYTE1(x) (*((signed char*)&(x)+1))
#define BYTE4(x) (*((_BYTE*)&(x)+4))
#define BYTE5(x) (*((_BYTE*)&(x)+5))
#define BYTE6(x) (*((_BYTE*)&(x)+6))
#define BYTE7(x) (*((_BYTE*)&(x)+7))
#define WORD1(x) (*((_WORD*)&(x)+1))
#define WORD2(x) (*((_WORD*)&(x)+2))
#define WORD3(x) (*((_WORD*)&(x)+3))
#define SWORD1(x) (*((short*)&(x)+1))
#define SLOWORD(x) (*((short*)&(x)))
#define SHIWORD(x) (*((short*)&(x)+1))
#define NAN __builtin_nanf("")
#define __udf(x) __builtin_unreachable()
#define atomic_load(p) __atomic_load_n(p, 2)
extern "C" {
void* memcpy(void*, const void*, size_t); void* memset(void*, int, size_t); void* memmove(void*, const void*, size_t); int memcmp(const void*, const void*, size_t); size_t strlen(const char*); int strcmp(const char*, const char*); char* strcpy(char*, const char*); char* strncpy(char*, const char*, size_t); int strncmp(const char*, const char*, size_t); void free(void*) noexcept; void* malloc(size_t); float fabsf(float); float sqrtf(float); float floorf(float); float ceilf(float);
extern void* off_18E9B80[];
extern void* off_18E9FA0[];
extern void* off_18EA740[];
extern void* off_18EA850[];
__int64 sub_EC27B0(...) noexcept;
__int64 sub_EC2800(...);
__int64 sub_EEA160(...);
__int64 sub_EEA5A0(...) noexcept;
__int64 sub_F27F00(...) noexcept;
__int64 sub_F2C1E0(...) noexcept;
__int64 sub_F70680(...) noexcept;
__int64 sub_F814E0(...) noexcept;
__int64 sub_FA0140(...);
extern char unk_18E9B80;

// 18ThreadScriptObject, virtual slot 4
__int64 __fastcall sub_EEAF30(_QWORD *a1) noexcept
{/*nothrow:((__int64)sub_EEA5A0)*/
  *a1 = ((__int64)off_18E9FA0);
  { struct G0_ { __typeof__(a1)& a1; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_EEA5A0((__int64)a1)); } } } g0_ = { a1, 0 };
  sub_EEA160(a1);
  g0_.ok = 1; }
  return sub_EEA5A0(a1);
}

// 18ThreadScriptObject, virtual slot 5
__int64 __fastcall sub_EEAF70(_QWORD *a1) noexcept
{/*nothrow:((__int64)sub_EEA5A0)*/
  *a1 = ((__int64)off_18E9FA0);
  { struct G0_ { __typeof__(a1)& a1; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_EEA5A0((__int64)a1)); } } } g0_ = { a1, 0 };
  sub_EEA160(a1);
  g0_.ok = 1; }
  return sub_EEA5A0(a1);
}

__int64 __fastcall sub_F00DE0(_QWORD *a1) noexcept
{/*nothrow:((__int64)sub_EC27B0)*/
  _QWORD *v1; // x20
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 result; // x0

  v1 = (_QWORD *)a1[14];
  { struct G0_ { __typeof__(a1)& a1; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_, t2_; t1_ = (__int64)((__int64)((__int64)a1) + 184); t2_ = (__int64)((__int64)sub_EC27B0(t1_)); } } } g0_ = { a1, 0 };
  while ( v1 != nullptr )
  {
    v1 = (_QWORD *)*v1;
    sub_FA0140(v3);
    v3 = (__int64)v1;
  }
  v4 = a1[69];
  a1[14] = 0;
  sub_FA0140(v4);
  sub_FA0140(a1[71]);
  g0_.ok = 1; }
  v5 = a1[62];
  a1[71] = 0;
  if ( v5 != 0 )
    [&]() __attribute__((always_inline)) noexcept { sub_FA0140(v5); }();
  { struct G2_ { __typeof__(a1)& a1; int ok; __attribute__((always_inline)) ~G2_() { if ( !ok ) { *(__int64*)(((char*)((__int64)a1) + 392)) = (__int64)(((__int64)&unk_18E9B80)); } } } g2_ = { a1, 0 };
  result = sub_EC2800(a1 + 23);
  g2_.ok = 1; }
  a1[49] = ((__int64)off_18E9B80);
  return result;
}

__int64 __fastcall sub_F2C9C0(char *a1) noexcept
{/*nothrow:((__int64)sub_F2C1E0)*/
  __int64 v2; // x0
  __int64 v3; // x0
  __int64 *v4; // x20
  char *result; // x0

  v2 = *(_QWORD *)(a1 + 56);
  { struct G0_ { __typeof__(a1)& a1; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_F2C1E0((__int64)a1)); } } } g0_ = { a1, 0 };
  if ( v2 != 0 )
  {
    sub_FA0140(v2);
    *(_QWORD *)(a1 + 56) = 0;
    *(_WORD *)(a1 + 50) = 0;
  }
  v4 = (__int64 *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 != 0 )
  {
    sub_FA0140(v3);
    *v4 = 0;
    *(_QWORD *)(a1 + 24) = 0;
    *(_WORD *)(a1 + 32) = -1;
  }
  g0_.ok = 1; }
  result = (char *)(*(_QWORD *)(a1 + 64));
  if ( result != 0 )
  {
    *(_QWORD *)(result + 16) = 0;
    [&]() __attribute__((always_inline)) noexcept { sub_FA0140(result); }();
    result = (char *)(*v4);
    if ( *v4 != 0 )
    {
      [&]() __attribute__((always_inline)) noexcept { result = (char *)(sub_FA0140(result)); }();
      *v4 = 0;
      *(_QWORD *)(a1 + 24) = 0;
      *(_WORD *)(a1 + 32) = -1;
    }
  }
  return (long long)(result);
}
// 6XMLDoc, virtual slot 0
__int64 __fastcall sub_F72760(_QWORD *a1) noexcept
{/*nothrow:((__int64)sub_F27F00)*//*nothrow:((__int64)sub_F70680)*/
  _QWORD *v1; // x20
  _QWORD *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x0

  v1 = (_QWORD *)a1[24];
  *a1 = ((__int64)off_18EA740);
  if ( v1 != nullptr )
  {
    if ( *v1 != 0 && v1[3] != 0 )
      [&]() __attribute__((always_inline)) noexcept { sub_FA0140(*v1); }();
    [&]() __attribute__((always_inline)) noexcept { sub_FA0140(v1); }();
    a1[24] = 0;
  }
  v3 = (_QWORD *)a1[25];
  if ( v3 != nullptr )
  {
    if ( *v3 != 0 && v3[3] != 0 )
      [&]() __attribute__((always_inline)) noexcept { sub_FA0140(*v3); }();
    [&]() __attribute__((always_inline)) noexcept { sub_FA0140(v3); }();
    a1[25] = 0;
  }
  v4 = a1[26];
  if ( v4 != 0 )
  {
  { struct G0_ { __typeof__(a1)& a1; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_, t2_, t3_; t1_ = (__int64)((__int64)((__int64)a1) + 160); t2_ = (__int64)((__int64)sub_F27F00(t1_)); t3_ = (__int64)((__int64)sub_F70680((__int64)a1)); } } } g0_ = { a1, 0 };
    sub_FA0140(v4);
  g0_.ok = 1; }
    a1[26] = 0;
  }
  v5 = a1[20];
  if ( v5 != 0 && a1[23] != 0 )
    [&]() __attribute__((always_inline)) noexcept { sub_FA0140(v5); }();
  return sub_F70680((__int64)a1);
}

// 17PlatformURLStream, virtual slot 0
__int64 __fastcall sub_F8CE50(_QWORD *a1) noexcept
{/*nothrow:((__int64)sub_F814E0)*/
  __int64 v2; // x0

  *a1 = ((__int64)off_18EA850);
  v2 = a1[51];
  if ( v2 != 0 )
  {
  { struct G0_ { __typeof__(a1)& a1; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_F814E0((__int64)a1)); } } } g0_ = { a1, 0 };
    sub_FA0140(v2);
  g0_.ok = 1; }
    a1[51] = 0;
  }
  return sub_F814E0(a1);
}

// 17PlatformURLStream, virtual slot 1
__int64 __fastcall sub_F8CEA0(_QWORD *a1) noexcept
{/*nothrow:((__int64)sub_F814E0)*/
  __int64 v2; // x0

  *a1 = ((__int64)off_18EA850);
  v2 = a1[51];
  if ( v2 != 0 )
  {
  { struct G0_ { __typeof__(a1)& a1; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_F814E0((__int64)a1)); } } } g0_ = { a1, 0 };
    sub_FA0140(v2);
  g0_.ok = 1; }
    a1[51] = 0;
  }
  sub_F814E0(a1);
  { __auto_type r_ = [&]() __attribute__((always_inline)) noexcept { return sub_FA0140(a1); }(); return r_; }
}

}
