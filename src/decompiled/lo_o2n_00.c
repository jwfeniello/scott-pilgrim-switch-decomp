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
typedef unsigned long size_t; typedef long ssize_t; typedef struct { char data[48]; } pthread_mutex_t; typedef struct { char data[48]; } pthread_cond_t; typedef void FILE;
typedef union { unsigned long long n128_u64[2]; float n128_f32[4]; double n128_f64[2]; } __n128;
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
#define __udf(x) __builtin_trap()
#define atomic_load(p) __atomic_load_n(p, 2)
void* memcpy(void*, const void*, size_t); void* memset(void*, int, size_t); void* memmove(void*, const void*, size_t); int memcmp(const void*, const void*, size_t); size_t strlen(const char*); int strcmp(const char*, const char*); void free(void*); void* malloc(size_t); float fabsf(float); float sqrtf(float); float floorf(float); float ceilf(float);
__int64 _ZdlPv();
extern char goff_1841BD0[];
extern __attribute__((visibility("hidden"))) char hoff_1841BD0[];
extern __attribute__((visibility("hidden"))) __int64 qword_1935138;
__attribute__((visibility("hidden"))) __int64 sub_1E7720();
__attribute__((visibility("hidden"))) __int64 sub_20CBE0();
__attribute__((visibility("hidden"))) __int64 sub_250550();
__attribute__((visibility("hidden"))) __int64 sub_69BDF0();
__attribute__((visibility("hidden"))) __int64 sub_C04BE0();

__int64 __fastcall sub_20CCF0(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x22
  __int64 v7; // x0

  v3 = *a1;
  v7 = sub_1E7720();
  return sub_20CBE0(v3, v7, a2, a3, a1[1], 1);
}

__int64 __fastcall sub_2508E0(__int64 a1, __int64 a2)
{
  __int64 v2; // x20

  v2 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(v2 + 768) = 0;
  sub_250550(a2, v2);
  sub_250550(a2 + 8, v2 + 256);
  sub_250550(a2 + 16, v2 + 512);
  return 1;
}

void __fastcall sub_675FD0(_QWORD *a1)
{
  _QWORD *v2; // x0
  _QWORD *v3; // x20
  void *v4; // x0

  *a1 = ((void*)hoff_1841BD0);
  v2 = (_QWORD *)a1[3];
  if ( v2 != nullptr )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      _ZdlPv(v2);
      v2 = v3;
    }
    while ( v3 != nullptr );
  }
  v4 = (void *)a1[1];
  a1[1] = 0;
  if ( v4 != nullptr )
    _ZdlPv(v4);
}

void __fastcall sub_676040(_QWORD *a1)
{
  _QWORD *v2; // x0
  _QWORD *v3; // x20
  void *v4; // x0

  *a1 = ((void*)hoff_1841BD0);
  v2 = (_QWORD *)a1[3];
  if ( v2 != nullptr )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      _ZdlPv(v2);
      v2 = v3;
    }
    while ( v3 != nullptr );
  }
  v4 = (void *)a1[1];
  a1[1] = 0;
  if ( v4 != nullptr )
    _ZdlPv(v4);
  _ZdlPv(a1);
}

__int64 __fastcall sub_69B580(__int64 a1)
{
  __int64 result; // x0

  *(_BYTE *)(a1 + 305) = 0;
  result = sub_69BDF0(a1);
  if ( *(_QWORD *)(a1 + 288) != 0 )
    result = sub_C04BE0(qword_1935138, *(unsigned int *)(a1 + 272));
  *(_DWORD *)(a1 + 56) &= ~2u;
  return result;
}

