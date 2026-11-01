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
#define bool _Bool
#define true 1
#define false 0
#define __fastcall
#define __cdecl
#define __noreturn
#define nullptr ((void*)0)
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
void* memcpy(void*, const void*, size_t); void* memset(void*, int, size_t); void* memmove(void*, const void*, size_t); int memcmp(const void*, const void*, size_t); size_t strlen(const char*); int strcmp(const char*, const char*); char* strcpy(char*, const char*); char* strncpy(char*, const char*, size_t); int strncmp(const char*, const char*, size_t); void free(void*); void* malloc(size_t); float fabsf(float); float sqrtf(float); float floorf(float); float ceilf(float);
extern char goff_18F9828[];
extern char goff_18F9830[];
__attribute__((visibility("hidden"))) __int64 sub_4EB320();
__attribute__((visibility("hidden"))) __int64 sub_4EE1B0();
__attribute__((visibility("hidden"))) __int64 sub_51DD50();
__attribute__((visibility("hidden"))) __int64 sub_579100();
__attribute__((visibility("hidden"))) __int64 sub_579CC0();
extern __attribute__((visibility("hidden"))) char unk_1326E41;

__int64 sub_520840()
{
  __int64 v0; // x20
  __int64 v1; // x19
  __int64 result; // x0

  v0 = sub_4EB320(16, &unk_1326E41, 0);
  sub_51DD50(v0, 0);
  *((__int64*)goff_18F9828) = v0;
  v1 = sub_4EB320(32, &unk_1326E41, 0);
  result = sub_4EE1B0(v1, 0x40000000);
  *((__int64*)goff_18F9830) = v1;
  return result;
}

__int64 __fastcall sub_631890(__int64 a1, __int64 a2)
{
  _BYTE *v4; // x21
  __int64 result; // x0

  *(_WORD *)a1 = 1026;
  v4 = (_BYTE *)sub_579CC0(a2);
  result = sub_579100(a2);
  *(_WORD *)(a1 + 2) = __builtin_bswap32(result) >> 16;
  *(_BYTE *)(a1 + 4) = v4[8];
  *(_BYTE *)(a1 + 5) = v4[9];
  *(_BYTE *)(a1 + 6) = v4[10];
  *(_BYTE *)(a1 + 7) = v4[11];
  return result;
}

__int64 __fastcall sub_6319D0(__int64 a1, __int64 a2)
{
  _BYTE *v4; // x21
  __int64 result; // x0

  *(_WORD *)a1 = 1285;
  v4 = (_BYTE *)sub_579CC0(a2);
  result = sub_579100(a2);
  *(_WORD *)(a1 + 2) = __builtin_bswap32(result) >> 16;
  *(_BYTE *)(a1 + 4) = v4[8];
  *(_BYTE *)(a1 + 5) = v4[9];
  *(_BYTE *)(a1 + 6) = v4[10];
  *(_BYTE *)(a1 + 7) = v4[11];
  *(_BYTE *)(a1 + 8) = v4[12];
  *(_BYTE *)(a1 + 9) = v4[13];
  *(_BYTE *)(a1 + 10) = v4[14];
  *(_BYTE *)(a1 + 11) = v4[15];
  *(_BYTE *)(a1 + 12) = v4[16];
  *(_BYTE *)(a1 + 13) = v4[17];
  *(_BYTE *)(a1 + 14) = v4[18];
  *(_BYTE *)(a1 + 15) = v4[19];
  *(_BYTE *)(a1 + 16) = v4[20];
  *(_BYTE *)(a1 + 17) = v4[21];
  *(_BYTE *)(a1 + 18) = v4[22];
  *(_BYTE *)(a1 + 19) = v4[23];
  return result;
}

