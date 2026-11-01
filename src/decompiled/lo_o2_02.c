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
extern char goff_18F9828[];
extern char goff_18F9830[];
__attribute__((visibility("hidden"))) __int64 sub_4EB320();
__attribute__((visibility("hidden"))) __int64 sub_4EE1B0();
__attribute__((visibility("hidden"))) __int64 sub_4EF420();
__attribute__((visibility("hidden"))) __int64 sub_4EF480();
__attribute__((visibility("hidden"))) __int64 sub_51DD50();
__attribute__((visibility("hidden"))) __int64 sub_51E060();
__attribute__((visibility("hidden"))) __int64 sub_5484D0();
__attribute__((visibility("hidden"))) __int64 sub_548600();
__attribute__((visibility("hidden"))) __int64 sub_5490D0();
__attribute__((visibility("hidden"))) __int64 sub_55A080();
__attribute__((visibility("hidden"))) __int64 sub_57EDC0();
extern __attribute__((visibility("hidden"))) char unk_1326E41;

__int64 __fastcall sub_508A50(__int64 a1, unsigned int a2)
{
  __int64 result; // x0
  __int64 v5; // [xsp+8h] [xbp-18h] BYREF

  v5 = sub_4EF420(a1);
  result = sub_4EF480(&v5, a2);
  *(_QWORD *)(a1 + 16) = result;
  return result;
}

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

__int64 __fastcall sub_548360(__int64 a1, __int64 a2)
{
  __int64 v2; // x19
  __int64 v3; // x20
  __int64 result; // x0

  *(_QWORD *)(a1 + 16) = 0;
  v2 = a1 + 16;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 8) = a1 + 16;
  *(_BYTE *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  v3 = sub_4EB320(416, &unk_1326E41, 0);
  result = sub_51E060();
  *(_QWORD *)(v2 + 56) = v3;
  return result;
}

__int64 __fastcall sub_5483C0(_QWORD *a1)
{
  _QWORD *v2; // x23
  __int64 v3; // x21
  _QWORD *v4; // x8
  __int64 v5; // x8
  __int64 v6; // x9
  _QWORD *v7; // t1
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x1
  _QWORD *v12; // [xsp+8h] [xbp-28h] BYREF

  sub_5484D0((__int64)a1);
  sub_548600((__int64)a1);
  v12 = a1;
  v2 = (_QWORD *)a1[1];
  while ( v2 != a1 + 2 )
  {
    v3 = v2[5];
    (*(void (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v3 + 32LL))(v3, &v12);
    ((void (__fastcall *)(__int64))v2[6])(v3);
    v4 = (_QWORD *)v2[1];
    if ( v4 != nullptr )
    {
      do
      {
        v2 = v4;
        v4 = (_QWORD *)*v4;
      }
      while ( v4 != nullptr );
    }
    else
    {
      v5 = (__int64)(v2 + 2);
      if ( *(_QWORD **)v2[2] == v2 )
      {
        v2 = (_QWORD *)v2[2];
      }
      else
      {
        do
        {
          v6 = *(_QWORD *)v5;
          v7 = *(_QWORD **)(*(_QWORD *)v5 + 16LL);
          v5 = *(_QWORD *)v5 + 16LL;
          v2 = v7;
        }
        while ( *v7 != v6 );
      }
    }
  }
  v8 = a1[5];
  if ( v8 != 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
    a1[5] = 0;
  }
  v9 = a1[9];
  a1[4] = 0;
  if ( v9 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v10 = a1[2];
  a1[9] = 0;
  a1[6] = 0;
  return sub_5490D0(a1 + 1, v10);
}

__int64 __fastcall sub_570B50(__int64 result)
{
  __int64 v1; // x19

  v1 = *(_QWORD *)(result + 24);
  if ( v1 != 0 )
  {
    sub_55A080(*(_QWORD *)(result + 24));
    return sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
  }
  return result;
}

