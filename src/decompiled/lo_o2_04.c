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
__int64 Recovered_ResultCopy();
__int64 Recovered_ResultTextConstruct();
__int64 Recovered_ResultTextCopy();
__int64 Recovered_ResultTextDestroy();
extern char goff_18F87A0[];
extern char goff_18F87A8[];
extern char goff_18F87B0[];
extern char goff_18F9828[];
extern char goff_18F9830[];
extern char goff_18F9A00[];
extern char goff_18F9AC0[];
extern char goff_18FA268[];
extern char goff_18FA270[];
extern char goff_18FA278[];
extern char goff_18FA280[];
extern char goff_18FC908[];
extern char goff_18FC998[];
extern char goff_18FC9A0[];
extern char goff_18FC9A8[];
extern char goff_18FC9B0[];
extern char goff_18FC9B8[];
extern char goff_18FC9C0[];
extern char goff_18FC9E8[];
__int64 nn__mem__StandardAllocator__Allocate();
__int64 nn__mem__StandardAllocator__Free();
__int64 nn__socket__InetAton();
extern __attribute__((visibility("hidden"))) __int64 qword_191A580;
__int64 std____tree_balance_after_insert();
__int64 std__mutex__lock();
__int64 std__mutex__unlock();
__int64 std__recursive_mutex___recursive_mutex();
__int64 std__string__basic_string();
__attribute__((visibility("hidden"))) __int64 sub_37030();
__attribute__((visibility("hidden"))) __int64 sub_4D6990();
__attribute__((visibility("hidden"))) __int64 sub_4EB320();
__attribute__((visibility("hidden"))) __int64 sub_4ECC90();
__attribute__((visibility("hidden"))) __int64 sub_4EDA40();
__attribute__((visibility("hidden"))) __int64 sub_4EE1B0();
__attribute__((visibility("hidden"))) __int64 sub_4F48F0();
__attribute__((visibility("hidden"))) __int64 sub_4F4A80();
__attribute__((visibility("hidden"))) __int64 sub_4F5150();
__attribute__((visibility("hidden"))) __int64 sub_4F6A30();
__attribute__((visibility("hidden"))) __int64 sub_504140();
__attribute__((visibility("hidden"))) __int64 sub_51DD50();
__attribute__((visibility("hidden"))) __int64 sub_51E060();
__attribute__((visibility("hidden"))) __int64 sub_52B270();
__attribute__((visibility("hidden"))) __int64 sub_530360();
__attribute__((visibility("hidden"))) __int64 sub_539810();
__attribute__((visibility("hidden"))) __int64 sub_539BD0();
__attribute__((visibility("hidden"))) __int64 sub_539DB0();
__attribute__((visibility("hidden"))) __int64 sub_5484D0();
__attribute__((visibility("hidden"))) __int64 sub_55A080();
__attribute__((visibility("hidden"))) __int64 sub_56C9F0();
__attribute__((visibility("hidden"))) __int64 sub_56CA00();
__attribute__((visibility("hidden"))) __int64 sub_578210();
__attribute__((visibility("hidden"))) __int64 sub_578410();
__attribute__((visibility("hidden"))) __int64 sub_579100();
__attribute__((visibility("hidden"))) __int64 sub_579CC0();
__attribute__((visibility("hidden"))) __int64 sub_57EDC0();
__attribute__((visibility("hidden"))) __int64 sub_57F650();
__attribute__((visibility("hidden"))) __int64 sub_5842F0();
__attribute__((visibility("hidden"))) __int64 sub_5885D0();
__attribute__((visibility("hidden"))) __int64 sub_58A960();
__attribute__((visibility("hidden"))) __int64 sub_595240();
__attribute__((visibility("hidden"))) __int64 sub_5F7870();
__attribute__((visibility("hidden"))) __int64 sub_5F9680();
__attribute__((visibility("hidden"))) __int64 sub_6203B0();
__attribute__((visibility("hidden"))) __int64 sub_620400();
__attribute__((visibility("hidden"))) __int64 sub_628D80();
__attribute__((visibility("hidden"))) __int64 sub_62A200();
__attribute__((visibility("hidden"))) __int64 sub_62CA70();
__attribute__((visibility("hidden"))) __int64 sub_62E090();
__attribute__((visibility("hidden"))) __int64 sub_62F1F0();
__attribute__((visibility("hidden"))) __int64 sub_62F420();
__attribute__((visibility("hidden"))) __int64 sub_68F0E0();
__attribute__((visibility("hidden"))) __int64 sub_696710();
extern __attribute__((visibility("hidden"))) char unk_1326E41;
extern __attribute__((visibility("hidden"))) char unk_191A588;

void __fastcall sub_51CE40(char *a1, unsigned int a2, const RecoveredSdkResult *a3)
{
  void *v3; // x23
  __int64 *v7; // x22
  unsigned __int64 v8; // x8
  _QWORD *v9; // x10
  char *v10; // x8
  char *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x21
  RecoveredSdkResult self; // [xsp+28h] [xbp-58h] BYREF
  RecoveredSdkResult v14; // [xsp+0h] [xbp-80h] BYREF

  v3 = goff_18F87A8;
  v7 = (__int64 *)((char *)goff_18F87A8 + 32);
  if ( *(char*)goff_18F87A0 == 0 )
    goto LABEL_5;
  v8 = *(unsigned int *)sub_4D6990(*((__int64*)goff_18F87B0));
  if ( (_DWORD)v8 == 0 )
    goto LABEL_5;
  v9 = *(_QWORD **)((char *)((char *)0x80) + (_QWORD)v3);
  if ( v8 < (__int64)(v9[1] - *v9) >> 3 )
  {
    v7 = (__int64 *)(*(_QWORD *)(*v9 + 8 * v8) + 24LL);
LABEL_5:
    v10 = *v7;
    goto LABEL_7;
  }
  sub_4EDA40( 0LL, 0, 3758096387LL, 0);
  v10 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_7:
  v11 = *(_QWORD *)(v10 + 16);
  sub_4F4A80(v11);
  v12 = sub_4F6A30(*(_QWORD *)(v11 + 24), *(unsigned int *)(a1 + 132));
  if ( v12 != 0 )
  {
    v13 = v12;
    Recovered_ResultCopy(&v14, a3);
    Recovered_ResultCopy(&self, &v14);
    sub_4ECC90(v13, a2, &self, 1);
    Recovered_ResultTextDestroy(&self.domain);
    Recovered_ResultTextDestroy(&v14.domain);
  }
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

__int64 __fastcall sub_52ECE0(char *a1, unsigned int a2, const RecoveredSdkResult *a3)
{
  void *v3; // x23
  __int64 *v7; // x22
  unsigned __int64 v8; // x8
  _QWORD *v9; // x10
  char *v10; // x8
  char *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x22
  RecoveredSdkResult self; // [xsp+28h] [xbp-58h] BYREF
  RecoveredSdkResult v15; // [xsp+0h] [xbp-80h] BYREF

  v3 = goff_18F87A8;
  v7 = (__int64 *)((char *)goff_18F87A8 + 32);
  if ( *(char*)goff_18F87A0 == 0 )
    goto LABEL_5;
  v8 = *(unsigned int *)sub_4D6990(*((__int64*)goff_18F87B0));
  if ( (_DWORD)v8 == 0 )
    goto LABEL_5;
  v9 = *(_QWORD **)((char *)((char *)0x80) + (_QWORD)v3);
  if ( v8 < (__int64)(v9[1] - *v9) >> 3 )
  {
    v7 = (__int64 *)(*(_QWORD *)(*v9 + 8 * v8) + 24LL);
LABEL_5:
    v10 = *v7;
    goto LABEL_7;
  }
  sub_4EDA40( 0LL, 0, 3758096387LL, 0);
  v10 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_7:
  v11 = *(_QWORD *)(v10 + 16);
  sub_4F4A80(v11);
  v12 = sub_4F6A30(*(_QWORD *)(v11 + 24), *(unsigned int *)(a1 + 132));
  if ( v12 != 0 )
  {
    v13 = v12;
    Recovered_ResultCopy(&v15, a3);
    Recovered_ResultCopy(&self, &v15);
    sub_4ECC90(v13, a2, &self, 1);
    Recovered_ResultTextDestroy(&self.domain);
    Recovered_ResultTextDestroy(&v15.domain);
  }
  return sub_4F48F0(a1);
}

void sub_52F3B0()
{
  __int64 v0; // x19
  RecoveredSdkText self; // [xsp+8h] [xbp-8h] BYREF

  v0 = sub_4EB320(32, &unk_1326E41, 0);
  Recovered_ResultTextConstruct(&self, "UseDistinctPortForStreamManager");
  sub_4F5150(v0, &self, 0);
  *((__int64*)goff_18F9A00) = v0;
  Recovered_ResultTextDestroy(&self);
}

void __fastcall sub_530F10(__int64 a1, const RecoveredSdkText *a2, unsigned int a3)
{
  RecoveredSdkText self; // [xsp+8h] [xbp-18h] BYREF

  Recovered_ResultTextCopy(&self, a2);
  sub_530360(a1, a3, &self);
  Recovered_ResultTextDestroy(&self);
}

__int64 __fastcall sub_53B260(__int64 a1, _QWORD *a2)
{
  __int64 result; // x0
  _QWORD *v5; // x21
  _QWORD *v6; // x20
  _QWORD *v7; // x23
  _QWORD *v8; // x8
  __int64 v9; // x8
  __int64 v10; // x9
  _QWORD *v11; // t1
  _QWORD *v12; // x8
  __int64 v13; // x8
  __int64 v14; // x9
  _QWORD *v15; // t1
  int v17; // [xsp+Ch] [xbp-24h] BYREF
  int v16; // [xsp+8h] [xbp-28h] BYREF

  v16 = a2[2];
  result = sub_504140(a1, &v16, 4, 1);
  v5 = a2 + 1;
  v6 = (_QWORD *)*a2;
  while ( v6 != v5 )
  {
    sub_539810(a1, v6 + 4);
    v17 = v6[7];
    result = sub_504140(a1, &v17, 4, 1);
    v7 = (_QWORD *)v6[5];
    while ( v7 != v6 + 6 )
    {
      sub_539DB0(a1, v7 + 4);
      result = sub_539BD0(a1, v7 + 6);
      v8 = (_QWORD *)v7[1];
      if ( v8 != nullptr )
      {
        do
        {
          v7 = v8;
          v8 = (_QWORD *)*v8;
        }
        while ( v8 != nullptr );
      }
      else
      {
        v9 = (__int64)(v7 + 2);
        if ( *(_QWORD **)v7[2] == v7 )
        {
          v7 = (_QWORD *)v7[2];
        }
        else
        {
          do
          {
            v10 = *(_QWORD *)v9;
            v11 = *(_QWORD **)(*(_QWORD *)v9 + 16LL);
            v9 = *(_QWORD *)v9 + 16LL;
            v7 = v11;
          }
          while ( *v11 != v10 );
        }
      }
    }
    v12 = (_QWORD *)v6[1];
    if ( v12 != nullptr )
    {
      do
      {
        v6 = v12;
        v12 = (_QWORD *)*v12;
      }
      while ( v12 != nullptr );
    }
    else
    {
      v13 = (__int64)(v6 + 2);
      if ( *(_QWORD **)v6[2] == v6 )
      {
        v6 = (_QWORD *)v6[2];
      }
      else
      {
        do
        {
          v14 = *(_QWORD *)v13;
          v15 = *(_QWORD **)(*(_QWORD *)v13 + 16LL);
          v13 = *(_QWORD *)v13 + 16LL;
          v6 = v15;
        }
        while ( *v15 != v14 );
      }
    }
  }
  return result;
}

// N5storm2mm25MatchmakingProtocolClientE, virtual slot 25
_QWORD *sub_540F40()
{
  _QWORD *v0; // x19

  v0 = (_QWORD *)sub_4EB320(96, &unk_1326E41, 0);
  sub_52B270(v0, 1);
  *v0 = ((char *)((__int64*)goff_18F9AC0) + 16);
  return v0;
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

__int64 __fastcall sub_5487D0(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x20
  __int64 result; // x0

  sub_5484D0();
  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = sub_4EB320(416, &unk_1326E41, 0);
  result = sub_51E060();
  *(_QWORD *)(a1 + 72) = v3;
  return result;
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

// N5storm13IRecordLoggerE, virtual slot 0
__int64 __fastcall sub_57D230(_QWORD *a1)
{
  __int64 *v2; // x20
  __int64 v3; // x19

  *a1 = ((__int64 *)goff_18FA268 + 2);
  std__mutex__lock((char *)goff_18FA270);
  if ( (*((__int64*)goff_18FA278))-- == 1 )
  {
    v2 = ((__int64*)goff_18FA280);
    v3 = *((__int64*)goff_18FA280);
    if ( *((__int64*)goff_18FA280) != 0 )
    {
      sub_57F650(*((__int64*)goff_18FA280));
      sub_37030(v3);
      *v2 = 0;
    }
    *v2 = 0;
  }
  return std__mutex__unlock((char *)goff_18FA270);
}

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

_QWORD *__fastcall sub_62A0F0(__int64 **a1, __int64 *a2, int *a3, __int64 a4)
{
  __int64 *v6; // x0
  _QWORD *v7; // x20
  __int64 *v8; // x21
  __int64 *v9; // x8
  __int64 *v10; // x8
  _QWORD *v11; // x1
  __int64 *v14; // [xsp+8h] [xbp-28h] BYREF
  __int64 *v13; // [xsp+0h] [xbp-30h] BYREF

  v6 = sub_62A200(a1, a2, &v14, &v13, a3);
  v7 = (_QWORD *)*v6;
  if ( *v6 == 0 )
  {
    v8 = v6;
    v7 = (_QWORD *)sub_56C9F0(656, 8, 1092669440, goff_18FC908, &unk_1326E41, 0);
    sub_578210(v7 + 4, a4);
    std__string__basic_string((char *)(v7 + 26), (const char *)(a4 + 176));
    std__string__basic_string((char *)(v7 + 29), (const char *)(a4 + 200));
    std__string__basic_string((char *)(v7 + 32), (const char *)(a4 + 224));
    std__string__basic_string((char *)(v7 + 35), (const char *)(a4 + 248));
    sub_578210(v7 + 38, a4 + 272);
    sub_578210(v7 + 60, a4 + 448);
    v9 = v14;
    *v7 = 0;
    v7[1] = 0;
    v7[2] = v9;
    *v8 = (__int64)v7;
    v10 = (__int64 *)**a1;
    if ( v10 != nullptr )
    {
      *a1 = v10;
      v11 = (_QWORD *)*v8;
    }
    else
    {
      v11 = v7;
    }
    std____tree_balance_after_insert(a1[1], v11);
    a1[2] = (__int64 *)((char *)a1[2] + 1);
  }
  return v7;
}

__int64 __fastcall sub_62A7E0(__int64 *a1)
{
  __int64 v1; // x22
  __int64 i; // x23
  __int64 result; // x0

  v1 = a1[1];
  for ( i = a1[2]; i != v1; i = a1[2] )
  {
    a1[2] = i - 696;
    if ( (*(_BYTE *)(i - 32) & 1) != 0 )
      sub_56CA00(*(_QWORD *)(i - 16), &unk_1326E41, 0);
    if ( (*(_BYTE *)(i - 64) & 1) != 0 )
      sub_56CA00(*(_QWORD *)(i - 48), &unk_1326E41, 0);
    sub_578410(i - 248);
    sub_5F7870(i - 696);
  }
  result = *a1;
  if ( *a1 != 0 )
    return sub_56CA00(result, &unk_1326E41, 0);
  return result;
}

int __fastcall sub_62B5C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // x0
  _QWORD *v11; // x24
  int v12; // [xsp+Ch] [xbp-34h] BYREF

  result = 4294967294LL;
  v12 = 0;
  if ( a3 == 0 || a4 == 0 )
    return result;
  if ( *((__int64*)goff_18FC9A0) == nullptr )
  {
    v11 = calloc(4, 16);
    if ( v11 != nullptr )
      goto LABEL_5;
    return 4294967291LL;
  }
  v11 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64, const char *, __int64))((__int64*)goff_18FC9A0))(
                    4,
                    16,
                    "C:/Stefan/Repositories/ubilibraries/Storm/SDKs/Private/External/MiniUPnP/upnpcommands.c",
                    435);
  if ( v11 == nullptr )
    return 4294967291LL;
LABEL_5:
  *v11 = "NewRemoteHost";
  v11[1] = a5;
  v11[2] = "NewExternalPort";
  v11[3] = a3;
  v11[4] = "NewProtocol";
  v11[5] = a4;
  sub_62CA70(0xFFFFFFFFLL, a1, a2, (__int64)"DeletePortMapping", (__int64)v11, (__int64)&v12, 0);
  if ( *((__int64*)goff_18FC998) != nullptr )
    (*(void (__fastcall **)(_QWORD *, const char *, __int64))((__int64*)goff_18FC998))(
      v11,
      "C:/Stefan/Repositories/ubilibraries/Storm/SDKs/Private/External/MiniUPnP/upnpcommands.c",
      445);
  else
    free(v11);
  return 0;
}

void __fastcall sub_62C720(void *result, __int64 a2, __int64 a3, void *a4)
{
  _QWORD *v4; // x9
  _QWORD *v5; // x10

  v4 = ((__int64*)goff_18FC998);
  v5 = ((__int64*)goff_18FC9B0);
  *((__int64*)goff_18FC9A8) = result;
  *v4 = a2;
  *v5 = a3;
  *((__int64*)goff_18FC9A0) = a4;
  return;
}

void sub_62E260(__int64 result, __int64 a2, __int64 a3)
{
  _QWORD *v3; // x9

  v3 = goff_18FC9B8;
  *(_QWORD *)goff_18FC9E8 = result;
  *v3 = a2;
  *(_QWORD *)goff_18FC9C0 = a3;
  return;
}

void sub_62E290()
{
  _QWORD *v0; // x9

  v0 = goff_18FC9B8;
  *(_QWORD *)goff_18FC9E8 = 0;
  *v0 = 0;
  *(_QWORD *)goff_18FC9C0 = 0;
}

__int64 __fastcall sub_62E6D0(char *a1, __int64 a2, in_addr *a3)
{
  char v4[8];

  nn__socket__InetAton(a1, v4, a3);
  return *(unsigned int *)v4;
}

__int64 __fastcall sub_62F620(__int64 a1, _DWORD *a2, _BYTE *a3, unsigned int a4, __int64 a5)
{
  const char *v9; // x23
  unsigned int v10; // w24
  unsigned __int16 v14; // [xsp+5Ch] [xbp-34h] BYREF
  const char *v13; // [xsp+50h] [xbp-40h] BYREF
  char v12[68]; // [xsp+Ch] [xbp-84h] BYREF

  *a2 = 0;
  if ( a3 != nullptr )
    *a3 = 0;
  if ( (unsigned int)sub_62F1F0(a1, v12, &v14, &v13) == 0 )
    return 0;
  v9 = v13;
  v10 = v14;
  sub_62E090("parsed url : hostname='%s' port=%hu path='%s'", v12, v14, v13);
  return sub_62F420(v12, v10, v9, a2, a3, a4, a5);
}

_DWORD *__fastcall sub_6317B0(_DWORD *result, unsigned int a2)
{
  *result = 514;
  result[1] = __builtin_bswap32(a2);
  return result;
}

__int64 __fastcall sub_6317C0(__int64 result, __int64 a2)
{
  *(_WORD *)result = 772;
  *(_BYTE *)(result + 2) = *(_BYTE *)(a2 + 9);
  *(_BYTE *)(result + 3) = *(_BYTE *)(a2 + 8);
  *(_BYTE *)(result + 4) = *(_BYTE *)(a2 + 10);
  *(_BYTE *)(result + 5) = 0;
  *(_WORD *)(result + 6) = 0;
  *(_QWORD *)(result + 8) = __builtin_bswap64(*(_QWORD *)a2);
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

__int64 __fastcall sub_631E20(unsigned __int64 a1, unsigned __int64 a2)
{
  if ( qword_191A580 != 0 )
    return nn__mem__StandardAllocator__Allocate((char *)&unk_191A588, a1, a2);
  else
    return 0;
}

void __fastcall sub_631E50(void *result)
{
  if ( result != nullptr )
    { nn__mem__StandardAllocator__Free((char *)&unk_191A588, result); return; }
  return;
}

void sub_68F000(__int64 result)
{
  __int64 v1; // x8
  __int64 v2; // x1

  v1 = *(_QWORD *)(result + 80);
  if ( v1 != 0 )
  {
    v2 = result;
    result = *(_QWORD *)(v1 + 8);
    if ( result != 0 )
      { sub_68F0E0(result, v2, 0); return; }
  }
  return;
}

// N4Onyx4Flow15LoadingNotifierE, virtual slot 2
__int64 __fastcall sub_69E5E0(__int64 result)
{
  __int64 v1; // x8
  unsigned int *v2; // x8
  unsigned int v3; // w10
  __int64 v4; // x8

  *(_DWORD *)(result + 56) |= 2u;
  v1 = *(_QWORD *)(result + 88);
  if ( *(_WORD *)(v1 + 56) != 0 )
  {
    v2 = (unsigned int *)(v1 + 52);
    { __typeof__(*(v2)) e_ = (3); if ( __atomic_compare_exchange_n(v2, &e_, 4u, 0, 5, 5) ) { v3 = e_; {
        v4 = *(_QWORD *)(result + 80);
        if ( v4 == 0 )
          return sub_696710(v4, *(_QWORD *)(result + 88));
        goto LABEL_6;
      } } v3 = e_; }
    v4 = *(_QWORD *)(result + 80);
    if ( v4 != 0 )
LABEL_6:
      v4 = *(_QWORD *)(v4 + 8);
    return sub_696710(v4, *(_QWORD *)(result + 88));
  }
  return result;
}

// N4Onyx13DebugDirectorE, virtual slot 13
__int64 __fastcall sub_69F990(__int64 a1, unsigned int a2)
{
  return (*(__int64 (__fastcall **)(__int64, __int64, __typeof__(a2)))(*(_QWORD *)a1 + 120LL))(a1, a1 + 104, a2);
}

