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
struct Big { char data[4096]; };
inline void* operator new(size_t, void* where) noexcept { return where; }
extern "C" {
void* memcpy(void*, const void*, size_t); void* memset(void*, int, size_t); void* memmove(void*, const void*, size_t); int memcmp(const void*, const void*, size_t); size_t strlen(const char*); int strcmp(const char*, const char*); char* strcpy(char*, const char*); char* strncpy(char*, const char*, size_t); int strncmp(const char*, const char*, size_t); void free(void*) noexcept; void* malloc(size_t); float fabsf(float); float sqrtf(float); float floorf(float); float ceilf(float);
__int64 sub_631EC0(...) noexcept;
__int64 sub_E06300(...);
__int64 sub_E06520(...);

// N2EE11VfsFileZstdE, virtual slot 12
Big sub_E08000(__int64 a1)
{
  Big ret_;
  __int64 *a2 = (__int64 *)&ret_;
/*nothrow:((__int64)sub_631EC0)*/
  __int64 v4; // x19
  __int64 result; // x0
  unsigned int *v6; // x8
  unsigned int v7; // w9

  v4 = (long long)(malloc(0x78u));
  { struct G0_ { __typeof__(v4)& v4; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_631EC0((__int64)v4)); } } } g0_ = { v4, 0 };
  result = sub_E06520(v4, *(_QWORD *)(a1 + 64), *(unsigned int *)(a1 + 44), *(_QWORD *)(a1 + 48));
  g0_.ok = 1; }
  *a2 = v4;
  if ( v4 != 0 )
  {
    v6 = (unsigned int *)(v4 + 8);
    v7 = __atomic_fetch_add(v6, 1, 0);
  }
  return ret_;
  return ret_;
}
// N2EE11VfsFileZlibE, virtual slot 12
Big sub_E08530(__int64 a1)
{
  Big ret_;
  __int64 *a2 = (__int64 *)&ret_;
/*nothrow:((__int64)sub_631EC0)*/
  __int64 v4; // x19
  __int64 result; // x0
  unsigned int *v6; // x8
  unsigned int v7; // w9

  v4 = (long long)(malloc(0x68u));
  { struct G0_ { __typeof__(v4)& v4; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_631EC0((__int64)v4)); } } } g0_ = { v4, 0 };
  result = sub_E06300(v4, *(_QWORD *)(a1 + 64), *(unsigned int *)(a1 + 44), *(unsigned int *)(a1 + 48));
  g0_.ok = 1; }
  *a2 = v4;
  if ( v4 != 0 )
  {
    v6 = (unsigned int *)(v4 + 8);
    v7 = __atomic_fetch_add(v6, 1, 0);
  }
  return ret_;
  return ret_;
}
}
