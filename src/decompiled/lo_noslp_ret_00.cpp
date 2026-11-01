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
#define __udf(x) __builtin_unreachable()
#define atomic_load(p) __atomic_load_n(p, 2)
struct Big { char data[4096]; };
inline void* operator new(size_t, void* where) noexcept { return where; }
extern "C" {
void* memcpy(void*, const void*, size_t); void* memset(void*, int, size_t); void* memmove(void*, const void*, size_t); int memcmp(const void*, const void*, size_t); size_t strlen(const char*); int strcmp(const char*, const char*); char* strcpy(char*, const char*); char* strncpy(char*, const char*, size_t); int strncmp(const char*, const char*, size_t); void free(void*) noexcept; void* malloc(size_t); float fabsf(float); float sqrtf(float); float floorf(float); float ceilf(float);
extern char goff_18EDD08[];
extern char goff_18EEE10[];
extern char goff_18F5BB0[];
extern char goff_18FA210[];
__attribute__((visibility("hidden"))) __int64 sub_56C9F0(...);
__attribute__((visibility("hidden"))) __int64 sub_56DC80(...);
__attribute__((visibility("hidden"))) __int64 sub_5753C0(...);

// N5storm4echo28CServiceUnicastDataContainerE, virtual slot 5
__int64 __fastcall sub_446670(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // x0
  __int64 *v5; // x9
  __int64 v6; // x20
  _QWORD *v7; // x21
  __int64 v9; // [xsp+8h] [xbp-18h] BYREF

  v4 = (_QWORD *)sub_56C9F0(40, 8, 1092624384, 0LL, a2, a3);
  v5 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v4 = (_QWORD)(((__int64 *)goff_18F5BB0 + 2));
  v6 = (__int64)v4;
  v4[1] = (_QWORD)(v5);
  v7 = v4 + 1;
  v4[2] = sub_56DC80(v4 + 1);
  *(_WORD *)(v6 + 24) = 1;
  *v7 = (_QWORD)(((__int64 *)goff_18EEE10 + 2));
  *(_WORD *)(v6 + 32) = 0;
  new ((void*)(&v9)) Big(((Big(*)(__typeof__(v6), __typeof__(a1), __typeof__(0)))sub_5753C0)(v6, a1, 0));
  return v6;
}
Big sub_5754B0(__int64 a1, __int64 a2)
{
  Big ret_;
  int *a3 = (int *)&ret_;

  _DWORD *v6; // x22
  _DWORD *result; // x0
  int v8; // w8
  _QWORD v9[2]; // [xsp+0h] [xbp-30h] BYREF

  v6 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 72LL))(a1);
  result = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
  if ( *v6 == *result )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 112LL))(a1, a2);
    v9[0] = (_QWORD)(((char *)((__int64*)goff_18FA210) + 16));
    v9[1] = 0;
    result = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 104LL))(a1, v9);
    v8 = 1;
  }
  else
  {
    v8 = -1000000;
  }
  *a3 = v8;
  a3[1] = 0;
  return ret_;
  return ret_;
}
}
