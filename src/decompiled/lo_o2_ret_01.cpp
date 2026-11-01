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
__int64 Recovered_ResultTextConstruct(...);
__int64 Recovered_ResultTextDestroy(...);
__attribute__((visibility("hidden"))) __int64 sub_346540(...);
__attribute__((visibility("hidden"))) __int64 sub_40A0E0(...);
__attribute__((visibility("hidden"))) __int64 sub_40A270(...);
__attribute__((visibility("hidden"))) __int64 sub_40A320(...);
__attribute__((visibility("hidden"))) __int64 sub_40A3F0(...);
__attribute__((visibility("hidden"))) __int64 sub_4EBEF0(...);
__attribute__((visibility("hidden"))) __int64 sub_4EBF00(...);
__attribute__((visibility("hidden"))) __int64 sub_4EBF30(...);
__attribute__((visibility("hidden"))) __int64 sub_4EC060(...);
__attribute__((visibility("hidden"))) __int64 sub_4EC170(...);
__attribute__((visibility("hidden"))) __int64 sub_4F4890(...);

Big sub_414F80(__int64 result, unsigned int *a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  __int64 v5; // x22
  char *v6; // x24
  char *v7; // x21
  __int64 v8; // x26
  __int64 v9; // x0
  __int64 v10; // x8
  int v11; // w9
  __int64 v12; // x21

  v5 = 0;
  *a3 = 1;
  v6 = (char *)(result + 8);
  do
  {
    v7 = (char *)(*(_QWORD *)(v6 + v5));
    if ( v7 != 0 )
    {
      v8 = *a2;
      v9 = sub_346540(*(_QWORD *)(v7 + 88), v7 + 376, 0);
      v10 = *(_QWORD *)(*(_QWORD *)(v7 + 64) + 376LL);
      v11 = *(unsigned __int8 *)(v7 + 436);
      v12 = v10 + 872 * v8;
      if ( v11 == 0 )
        sub_40A0E0(v10 + 872 * v8, v9);
      sub_40A270(v12);
      sub_40A320(v12);
      result = sub_40A3F0(v12);
      *a3 = 1;
    }
    v5 += 8;
  }
  while ( v5 != 256 );
  return ret_;
  return ret_;
}
// N5storm2mm13MethodCallJobINS0_19CallContextRegisterEiNS0_11PeriodicJobEEE, virtual slot 8
Big sub_4F6DD0(__int64 a1)
{
  Big ret_;
  RecoveredSdkText *a2 = (RecoveredSdkText *)&ret_;

  __int64 v4; // x0
  char *s[36]; // [xsp+0h] [xbp-140h] BYREF
  RecoveredSdkText self; // [xsp+128h] [xbp-18h] BYREF

  sub_4EBF00(s);
  new ((void*)(&self)) Big(((Big(*)(__typeof__(a1)))sub_4F4890)(a1));
  sub_4EBEF0(s, &self);
  Recovered_ResultTextDestroy(&self);
  v4 = sub_4EC170(s, "\tArgument: ");
  sub_4EC060(v4, *(unsigned int *)(a1 + 112));
  Recovered_ResultTextConstruct(a2, s[0]);
  { sub_4EBF30(s); return ret_; }
  return ret_;
}

}
