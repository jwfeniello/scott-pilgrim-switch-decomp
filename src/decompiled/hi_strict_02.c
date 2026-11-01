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
void* memcpy(void*, const void*, size_t); void* memset(void*, int, size_t); void* memmove(void*, const void*, size_t); int memcmp(const void*, const void*, size_t); size_t strlen(const char*); int strcmp(const char*, const char*); char* strcpy(char*, const char*); char* strncpy(char*, const char*, size_t); int strncmp(const char*, const char*, size_t); void free(void*); void* malloc(size_t); float fabsf(float); float sqrtf(float); float floorf(float); float ceilf(float);
extern void* off_18D7E00[];
extern __int64 qword_1926BD8;
unsigned char sub_A82B30();
__int64 sub_DB7270();
__int64 sub_DFB850();
__int64 sub_F9F3E0();

// N7SndGear12ClassFactoryE, virtual slot 0
__int64 __fastcall sub_DB7510(__int64 a1)
{
  __int64 v2; // x20
  __int64 result; // x0

  *(_QWORD *)a1 = off_18D7E00;
  v2 = a1 + 8;
  result = sub_DB7270(*(_QWORD *)(a1 + 24));
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = v2;
  *(_QWORD *)(a1 + 8) = v2;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}

// N2EE11CachingFileE, virtual slot 3
int __fastcall sub_DFE090(__int64 a1)
{
  if ( sub_DFB850(*(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 96)) != 0 )
    return 0;
  else
    return (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 104) + 24LL))(*(_QWORD *)(a1 + 104));
}

// N4fire18DefaultBasicStringIwEE, virtual slot 2
__int64 __fastcall sub_F9F370(__int64 a1, char *a2)
{
  char *v4; // x8
  int v5; // t1
  unsigned __int64 v6; // x21
  __int64 v7; // x8

  v4 = a2;
  do
  {
    v5 = *(_DWORD *)v4;
    v4 += 4;
  }
  while ( v5 != 0 );
  v6 = (unsigned int)((unsigned __int64)(v4 - a2) >> 2) - 1;
  sub_F9F3E0((_QWORD *)(a1 + 8), v6);
  v7 = *(_QWORD *)(a1 + 16);
  if ( v7 != 0 )
    memcpy(*(void **)(v7 + 24), a2, 4 * v6);
  return a1;
}

void sub_FA1410(__int64 result)
{
  _QWORD *v1; // x19
  _QWORD *v3; // x22
  _QWORD *v4; // x19
  __int64 v5; // x0

  if ( result != 0 )
  {
    v1 = (_QWORD *)result;
    do
    {
      sub_FA1410(*v1);
      v3 = (_QWORD *)v1[1];
      v4 = v1 - 8;
      v5 = *(_QWORD *)((qword_1926BD8) + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v4) + 880);
      result = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v5 + 48LL))(v5, v4);
      v1 = v3;
    }
    while ( v3 != nullptr );
  }
  return;
}

double __fastcall sub_FA1D80(double a1, double a2, double a3, double a4)
{
  return a1 / a4 * (a1 / a4 * a3) * (a1 / a4 * 2.70158 + -1.70158) + a2;
}

double __fastcall sub_FA1DB0(double a1, double a2, double a3, double a4)
{
  return ((a1 / a4 + -1.0) * (a1 / a4 + -1.0) * ((a1 / a4 + -1.0) * 2.70158 + 1.70158) + 1.0) * a3 + a2;
}

