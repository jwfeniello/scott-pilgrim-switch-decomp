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
extern char goff_18EDC88[];
extern char goff_18EDF98[];
extern char goff_18EE498[];
extern char goff_18EE5C0[];
extern char goff_18F5A80[];
extern char goff_18F5A88[];
extern char goff_18F5BC8[];
extern char goff_18F5FD0[];
extern char goff_18F9748[];
extern char goff_18F9998[];
extern char goff_18FA9D0[];
extern char goff_18FB1F0[];
extern char goff_18FB258[];
extern char goff_18FB280[];
extern char goff_18FB290[];
__int64 std__shared_timed_mutex__shared_timed_mutex();
__attribute__((visibility("hidden"))) __int64 sub_38BD20();
__attribute__((visibility("hidden"))) __int64 sub_3C8740();
__attribute__((visibility("hidden"))) __int64 sub_51C2A0();
__attribute__((visibility("hidden"))) __int64 sub_51D3A0();
__attribute__((visibility("hidden"))) __int64 sub_526840();
__attribute__((visibility("hidden"))) __int64 sub_52F2F0();
__attribute__((visibility("hidden"))) __int64 sub_56CA00();
__attribute__((visibility("hidden"))) __int64 sub_576000();
__attribute__((visibility("hidden"))) __int64 sub_583870();
__attribute__((visibility("hidden"))) __int64 sub_592460();
__attribute__((visibility("hidden"))) __int64 sub_781380();
extern __attribute__((visibility("hidden"))) char unk_1326E41;

__int64 __fastcall sub_284AD0(__int64 **a1)
{
  __int64 *v1; // x8
  __int64 *v2; // x9

  v1 = ((__int64*)goff_18EE5C0) + 24;
  v2 = ((__int64*)goff_18EDC88) + 2;
  *(a1 - 1) = ((__int64*)goff_18EE5C0) + 2;
  *a1 = v1;
  a1[10] = v2;
  return sub_781380((__int64)(a1 + 11));
}

__int64 __fastcall sub_419940(_QWORD *a1)
{
  __int64 *v1; // x8
  __int64 *v2; // x9

  v1 = ((__int64*)goff_18F5BC8) + 24;
  v2 = ((__int64*)goff_18F5A80) + 2;
  *a1 = ((__int64*)goff_18F5BC8) + 2;
  a1[1] = v1;
  a1[9] = v2;
  return sub_583870((char *)(a1 + 10));
}

__int64 __fastcall sub_423930(_QWORD *a1)
{
  __int64 *v1; // x8
  __int64 *v2; // x9

  v1 = ((__int64*)goff_18F5A88) + 24;
  v2 = ((__int64*)goff_18F5A80) + 2;
  *a1 = ((__int64*)goff_18F5A88) + 2;
  a1[1] = v1;
  a1[9] = v2;
  return sub_583870((char *)(a1 + 10));
}

__int64 __fastcall sub_42F830(_QWORD *a1)
{
  __int64 *v1; // x8

  v1 = ((__int64*)goff_18F5FD0) + 44;
  *a1 = ((__int64*)goff_18F5FD0) + 2;
  a1[1] = v1;
  sub_592460(a1 + 27);
  return sub_3C8740(a1);
}

void __fastcall sub_42F870(_QWORD *a1)
{
  __int64 *v1; // x8

  v1 = ((__int64*)goff_18F5FD0) + 44;
  *a1 = ((__int64*)goff_18F5FD0) + 2;
  a1[1] = v1;
  sub_592460(a1 + 27);
  sub_3C8740(a1);
  _ZdlPv(a1);
}

__int64 __fastcall sub_42F8B0(__int64 **a1)
{
  __int64 *v1; // x8
  __int64 **v2; // x19

  v1 = ((__int64*)goff_18F5FD0) + 44;
  *(a1 - 1) = ((__int64*)goff_18F5FD0) + 2;
  v2 = a1 - 1;
  *a1 = v1;
  sub_592460(a1 + 26);
  return sub_3C8740(v2);
}

void __fastcall sub_42F8F0(__int64 **a1)
{
  __int64 *v1; // x8
  __int64 **v2; // x19

  v1 = ((__int64*)goff_18F5FD0) + 44;
  *(a1 - 1) = ((__int64*)goff_18F5FD0) + 2;
  v2 = a1 - 1;
  *a1 = v1;
  sub_592460(a1 + 26);
  sub_3C8740(v2);
  _ZdlPv(v2);
}

__int64 __fastcall sub_446940(_QWORD *a1)
{
  __int64 *v1; // x9
  __int64 *v2; // x8

  v1 = ((__int64*)goff_18F5A80);
  v2 = ((__int64*)goff_18F5BC8) + 24;
  *a1 = ((__int64*)goff_18F5BC8) + 2;
  a1[1] = v2;
  a1[9] = v1 + 2;
  sub_583870((char *)(a1 + 10));
  return sub_56CA00(a1, &unk_1326E41, 0);
}

__int64 __fastcall sub_446C40(__int64 **a1)
{
  __int64 *v1; // x8
  __int64 *v2; // x9

  v1 = ((__int64*)goff_18F5BC8) + 24;
  v2 = ((__int64*)goff_18F5A80) + 2;
  *(a1 - 1) = ((__int64*)goff_18F5BC8) + 2;
  *a1 = v1;
  a1[8] = v2;
  return sub_583870((__int64)(a1 + 9));
}

__int64 __fastcall sub_449E30(_QWORD *a1)
{
  __int64 *v1; // x9
  __int64 *v2; // x8

  v1 = ((__int64*)goff_18F5A80);
  v2 = ((__int64*)goff_18F5A88) + 24;
  *a1 = ((__int64*)goff_18F5A88) + 2;
  a1[1] = v2;
  a1[9] = v1 + 2;
  sub_583870((char *)(a1 + 10));
  return sub_56CA00(a1, &unk_1326E41, 0);
}

__int64 __fastcall sub_44A130(__int64 **a1)
{
  __int64 *v1; // x8
  __int64 *v2; // x9

  v1 = ((__int64*)goff_18F5A88) + 24;
  v2 = ((__int64*)goff_18F5A80) + 2;
  *(a1 - 1) = ((__int64*)goff_18F5A88) + 2;
  *a1 = v1;
  a1[8] = v2;
  return sub_583870((__int64)(a1 + 9));
}

_QWORD *__fastcall sub_507E80(_QWORD *result)
{
  result[1] = 0;
  *result = result + 1;
  result[5] = 0;
  result[4] = 0;
  result[2] = 0;
  result[3] = result + 4;
  return result;
}

__int64 __fastcall sub_51C3A0(_QWORD *a1)
{
  __int64 result; // x0
  __int64 v3[3]; // [xsp+8h] [xbp-28h] BYREF

  result = sub_51C2A0();
  if ( (result & 1) != 0 )
  {
    v3[0] = (__int64)((__int64*)goff_18F9748);
    v3[1] = 0;
    v3[2] = (__int64)&unk_1326E41;
    return sub_51D3A0(a1, v3);
  }
  return result;
}

__int64 __fastcall sub_52E5E0(__int64 a1)
{
  __int64 v2; // x0
  _QWORD v4[3]; // [xsp+8h] [xbp-28h] BYREF

  v2 = sub_52F2F0(*(_QWORD *)(a1 + 160));
  sub_526840(v2);
  v4[0] = goff_18F9998;
  v4[1] = 0;
  v4[2] = &unk_1326E41;
  return sub_51D3A0(a1, v4);
}

char *__fastcall sub_562210(_QWORD *a1)
{
  a1[1] = 0;
  *a1 = a1 + 1;
  a1[4] = 0;
  a1[2] = 0;
  a1[3] = a1 + 4;
  a1[7] = 0;
  a1[8] = 0;
  a1[5] = 0;
  a1[6] = a1 + 7;
  return std__shared_timed_mutex__shared_timed_mutex((char *)(a1 + 9));
}

__int64 __fastcall sub_58CF10(__int64 **a1)
{
  __int64 *v1; // x8
  __int64 **v2; // x19

  v1 = ((__int64*)goff_18EE498) + 24;
  *(a1 - 1) = ((__int64*)goff_18EE498) + 2;
  v2 = a1 - 1;
  *a1 = v1;
  sub_576000(a1 + 3);
  return sub_56CA00(v2, &unk_1326E41, 0);
}

__int64 __fastcall sub_592420(char *a1, __int64 a2)
{
  __int64 v2; // x9
  __int64 v3; // x8

  v2 = ((__int64*)goff_18FA9D0);
  *(_DWORD *)(a1 + 32) = 32;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  v3 = ((__int64*)goff_18EDF98);
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)a1 = v2 + 16;
  *(_QWORD *)(a1 + 8) = v3 + 16;
  return sub_38BD20(a1, a2);
}

void __fastcall sub_60FC60(_QWORD *a1)
{
  __int64 *v1; // x9

  v1 = ((__int64*)goff_18FB1F0) + 2;
  *a1 = ((__int64*)goff_18FB258) + 2;
  a1[1] = v1;
  if ( (a1[4] & 1) != 0 )
    sub_56CA00(a1[6], &unk_1326E41, 0);
  _ZdlPv(a1);
}

void __fastcall sub_60FE40(_QWORD *a1)
{
  __int64 *v1; // x9

  v1 = ((__int64*)goff_18FB1F0) + 2;
  *a1 = ((__int64*)goff_18FB280) + 2;
  a1[1] = v1;
  if ( (a1[4] & 1) != 0 )
    sub_56CA00(a1[6], &unk_1326E41, 0);
  _ZdlPv(a1);
}

void __fastcall sub_60FEB0(_QWORD *a1)
{
  __int64 *v1; // x9

  v1 = ((__int64*)goff_18FB1F0) + 2;
  *a1 = ((__int64*)goff_18FB290) + 2;
  a1[1] = v1;
  if ( (a1[4] & 1) != 0 )
    sub_56CA00(a1[6], &unk_1326E41, 0);
  _ZdlPv(a1);
}

