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
extern __attribute__((visibility("hidden"))) __int64 qword_191B6C0;
extern __attribute__((visibility("hidden"))) __int64 qword_191CD10;
extern __attribute__((visibility("hidden"))) __int64 qword_191DCE8;
extern __attribute__((visibility("hidden"))) __int64 qword_1935138;
__attribute__((visibility("hidden"))) __int64 sub_1E7720();
__attribute__((visibility("hidden"))) __int64 sub_20CBE0();
__attribute__((visibility("hidden"))) __int64 sub_2500E0();
__attribute__((visibility("hidden"))) __int64 sub_250550();
__attribute__((visibility("hidden"))) __int64 sub_67EDD0();
__attribute__((visibility("hidden"))) __int64 sub_690410();
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

__int64 __fastcall sub_250750(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // x20
  void (__fastcall *v5)(__int64, __int64, unsigned __int64, __int64, __int64); // x8
  unsigned __int64 v6; // x19
  __int64 v7; // x22
  __int64 v8; // x21
  unsigned __int64 v10; // x29

  v4 = *(_QWORD *)(a1 + 120);
  v5 = *(void (__fastcall **)(__int64, __int64, unsigned __int64, __int64, __int64))(v4 + 768);
  v6 = a4;
  v7 = a3;
  v8 = a2;
  if ( v5 != nullptr )
  {
    v5(a3, a2, a4, v4, a1 + 40);
  }
  else
  {
    if ( a4 >> 62 != 0 )
    {
      v10 = a4;
      do
      {
        sub_2500E0(v7, v8, 0x4000000000000000LL, v4, v4 + 256, v4 + 512, a1 + 40, *(unsigned int *)(a1 + 16));
        v10 -= 0x4000000000000000LL;
        v7 += 0x4000000000000000LL;
        v8 += 0x4000000000000000LL;
      }
      while ( v10 >> 62 != 0 );
      v6 &= 0x3FFFFFFFFFFFFFFFuLL;
    }
    if ( v6 != 0 )
      sub_2500E0(v7, v8, v6, v4, v4 + 256, v4 + 512, a1 + 40, *(unsigned int *)(a1 + 16));
  }
  return 1;
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

// N5EE_US18UPlayManagerNativeE, virtual slot 0
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

// N5EE_US18UPlayManagerNativeE, virtual slot 1
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

// N4Onyx8Graphics7TextureE, virtual slot 3
__int64 __fastcall sub_6867C0(__int64 result)
{
  __int64 *v1; // x19
  unsigned int *v2; // x8
  unsigned int *v3; // x9
  unsigned int v4; // w10
  unsigned int v5; // w10
  unsigned int *v6; // x8
  unsigned int v7; // w9
  unsigned int v8; // w9

  *(_DWORD *)(result + 56) &= ~2u;
  if ( qword_191DCE8 != 0 )
  {
    v1 = *(__int64 **)(result + 88);
    if ( v1 != nullptr )
    {
      result = *v1;
      if ( *v1 != 0 )
      {
        v2 = (unsigned int *)v1[1];
        if ( v2 == nullptr )
          goto LABEL_10;
        v3 = v2 + 2;
        v5 = __atomic_sub_fetch(v3, 1, 0);
        if ( v5 == 0 )
          (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v2 + 24LL))(v2);
        result = *v1;
        v1[1] = 0;
        if ( result != 0 )
        {
LABEL_10:
          v6 = (unsigned int *)(result + 8);
          v8 = __atomic_sub_fetch(v6, 1, 0);
          if ( v8 == 0 )
            result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 24LL))(result);
          *v1 = 0;
        }
      }
    }
  }
  return result;
}

__int64 __fastcall sub_68FA30(char *a1)
{
  char *v1; // x8
  char *v2; // x20
  __int64 v4; // x0
  int *v5; // x8

  v2 = a1 + 120;
  v1 = *(_QWORD *)(a1 + 120);
  if ( v1 == 0 || (v4 = *(_QWORD *)(v1 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 2025699073, v2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v2 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v2 + 8LL));
    if ( *(_QWORD *)v2 != 0 )
      v4 = *(_QWORD *)(*(_QWORD *)v2 + 8LL);
    else
      v4 = 0;
  }
  v5 = (int *)&qword_191B6C0;
  if ( *(_QWORD *)(a1 + 64) != 0 )
    v5 = *(int **)(a1 + 64);
  return sub_690410(v4, *v5);
}

// N4Onyx7SpawnerE, virtual slot 3
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

