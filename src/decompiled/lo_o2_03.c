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
__int64 std__recursive_mutex___recursive_mutex();
__attribute__((visibility("hidden"))) __int64 sub_56CA00();
__attribute__((visibility("hidden"))) __int64 sub_5842F0();
__attribute__((visibility("hidden"))) __int64 sub_5885D0();
__attribute__((visibility("hidden"))) __int64 sub_58A960();
__attribute__((visibility("hidden"))) __int64 sub_595240();
__attribute__((visibility("hidden"))) __int64 sub_5F9680();
__attribute__((visibility("hidden"))) __int64 sub_6203B0();
__attribute__((visibility("hidden"))) __int64 sub_620400();
__attribute__((visibility("hidden"))) __int64 sub_628D80();
extern __attribute__((visibility("hidden"))) char unk_1326E41;

// N5storm9NatPacketE, virtual slot 18
__int64 __fastcall sub_5B5DD0(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 result; // x0
  _BYTE v8[4]; // [xsp+Ch] [xbp-14h] BYREF

  result = sub_595240();
  if ( *a4 != 0 )
  {
    *a4 = 0;
    *(_BYTE *)(a1 + 273) = 0;
    v8[0] = 0;
    result = sub_5842F0(a2, v8, 4, 8, 0);
    *(_BYTE *)(a1 + 273) = v8[0] >> 4;
    if ( (result & 1) != 0 )
    {
      *(_DWORD *)(a1 + 24) += 4;
      *a4 = 1;
    }
  }
  return result;
}

__int64 __fastcall sub_5F9600(__int64 a1)
{
  sub_6203B0(a1 + 392, *(_QWORD *)(a1 + 400));
  std__recursive_mutex___recursive_mutex((char *)(a1 + 360));
  sub_628D80((__int64 *)(a1 + 336));
  sub_620400(a1 + 296, *(_QWORD **)(a1 + 304));
  sub_5F9680(a1 + 240);
  std__recursive_mutex___recursive_mutex((char *)(a1 + 208));
  if ( (*(_BYTE *)(a1 + 184) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 200), &unk_1326E41, 0);
  sub_58A960(a1 + 32);
  return sub_5885D0(a1);
}

