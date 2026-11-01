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
extern "C" {
void* memcpy(void*, const void*, size_t); void* memset(void*, int, size_t); void* memmove(void*, const void*, size_t); int memcmp(const void*, const void*, size_t); size_t strlen(const char*); int strcmp(const char*, const char*); char* strcpy(char*, const char*); char* strncpy(char*, const char*, size_t); int strncmp(const char*, const char*, size_t); void free(void*) noexcept; void* malloc(size_t); float fabsf(float); float sqrtf(float); float floorf(float); float ceilf(float);
extern __attribute__((visibility("hidden"))) __int64 qword_1926BD8;
__attribute__((visibility("hidden"))) __int64 sub_690EE0(...);
__attribute__((visibility("hidden"))) unsigned char sub_A82B30(...);

void sub_68D690(__int64 result) noexcept
{
  unsigned int *v1; // x8
  __int64 v2; // x19
  unsigned int v3; // w9
  unsigned int v4; // w9
  __int64 v5; // x20
  __int64 v6; // x21
  __int64 v7; // x0

  v1 = *(unsigned int **)(result + 8);
  if ( v1 != nullptr )
  {
    v2 = result;
    v4 = __atomic_sub_fetch(v1, 1, 0);
    if ( v4 == 0 )
    {
      v5 = *(_QWORD *)(result + 8);
      if ( v5 != 0 )
      {
        v6 = qword_1926BD8;
        v7 = *(_QWORD *)(v6 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, *(_QWORD *)(result + 8)) + 880);
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, v5);
      }
    }
    *(_QWORD *)(v2 + 8) = 0;
  }
  return;
}

// N4Onyx7PackageE, virtual slot 3
__int64 __fastcall sub_69EA50(__int64 a1) noexcept
{
  __int64 result; // x0
  __int64 v3; // x8
  __int64 v4; // x2
  unsigned int v5; // w8

  v3 = *(_QWORD *)(a1 + 160);
  result = *(_QWORD *)(a1 + 168);
  v4 = *(unsigned int *)(a1 + 176);
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 176) = 1;
  if ( v3 != 0 )
    result = sub_690EE0(result, *(unsigned int *)(v3 + 48), v4);
  *(_BYTE *)(a1 + 188) = 0;
  v5 = *(_DWORD *)(a1 + 56) & 0xFFFFFFFD;
  *(_DWORD *)(a1 + 56) = v5;
  return result;
}

}
