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
__attribute__((visibility("hidden"))) __int64 sub_313860(...);
__attribute__((visibility("hidden"))) __int64 sub_313F70(...);
__attribute__((visibility("hidden"))) __int64 sub_3145B0(...);
__attribute__((visibility("hidden"))) __int64 sub_464E10(...);

Big sub_25DF50(int a1, __int64 *a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  __int64 result; // x0
  _QWORD *v7; // x0
  __int64 v8; // [xsp+8h] [xbp-18h] BYREF

  result = sub_313860();
  if ( result != 0 && *(_BYTE *)(*(_QWORD *)(result + 16) + 2168LL) != 0 )
  {
    v7 = (_QWORD *)sub_313860();
    v8 = *a2;
    { new ((void*)((__int64)a3)) Big(((Big(*)(__typeof__(v7), __typeof__(a1), __typeof__(&v8)))sub_313F70)(v7, a1, &v8)); return ret_; }
  }
  else
  {
    *a3 = 4293967345LL;
  }
  return ret_;
  return ret_;
}

Big sub_25DFD0(int a1, __int64 *a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  __int64 result; // x0
  __int64 v7; // x0
  __int64 v8; // [xsp+8h] [xbp-18h] BYREF

  result = sub_313860();
  if ( result != 0 )
  {
    v7 = sub_313860();
    v8 = *a2;
    { new ((void*)((__int64)a3)) Big(((Big(*)(__typeof__(v7), __typeof__(a1), __typeof__(&v8)))sub_3145B0)(v7, a1, &v8)); return ret_; }
  }
  else
  {
    *a3 = 4293967345LL;
  }
  return ret_;
  return ret_;
}

// N5storm37SimpleUbiServicesControllerClientBaseE, virtual slot 2
Big sub_464F60(_QWORD *result)
{
  Big ret_;
  __int64 a2 = (__int64)&ret_;

  int v3; // w21
  _QWORD *v4; // x20
  int v5; // w9
  int v6; // w8
  __int64 v7; // [xsp+8h] [xbp-18h] BYREF

  if ( *((_BYTE *)result + 9) != 0 )
  {
    *(_QWORD *)a2 = 1;
  }
  else
  {
    v3 = 1;
    v4 = result;
    *((_BYTE *)result + 9) = 1;
    new ((void*)(&v7)) Big(((Big(*)())sub_464E10)());
    v5 = v7;
    if ( (v7 & 0x80000000) != 0 )
    {
      *((_BYTE *)v4 + 9) = 0;
      v6 = HIDWORD(v7);
      v3 = v5;
    }
    else
    {
      v6 = 0;
    }
    *(_DWORD *)a2 = v3;
    *(_DWORD *)(a2 + 4) = v6;
  }
  return ret_;
  return ret_;
}

}
