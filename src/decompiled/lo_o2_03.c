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
__int64 Recovered_ResultCopy();
__int64 Recovered_ResultTextConstruct();
__int64 Recovered_ResultTextCopy();
__int64 Recovered_ResultTextDestroy();
__int64 _ZdlPv();
extern char goff_18EDE08[];
extern char goff_18EE7F0[];
extern char goff_18F2D38[];
extern char goff_18F6C48[];
extern char goff_18F87A0[];
extern char goff_18F87A8[];
extern char goff_18F87B0[];
extern char goff_18F92F0[];
extern char goff_18F94F0[];
extern char goff_18F95F0[];
extern char goff_18F9828[];
extern char goff_18F9830[];
extern char goff_18F9900[];
extern char goff_18F9910[];
extern char goff_18FA268[];
extern char goff_18FA270[];
extern char goff_18FA278[];
extern char goff_18FA280[];
extern char goff_18FAB60[];
extern char goff_18FAB68[];
extern char goff_18FAB70[];
extern char goff_18FADA8[];
extern char goff_18FADC0[];
extern char goff_18FAFC8[];
extern char goff_18FB0E0[];
extern char goff_18FB108[];
extern char goff_18FB110[];
extern char goff_18FB118[];
extern char goff_18FB120[];
extern char goff_18FB1D8[];
extern char goff_18FB1E0[];
extern char goff_18FB1F0[];
extern char goff_18FB228[];
extern char goff_18FB2F0[];
extern char goff_18FB2F8[];
extern char goff_18FB310[];
extern char goff_18FB318[];
extern char goff_18FB340[];
extern char goff_18FB348[];
extern char goff_18FB360[];
extern char goff_18FB550[];
extern char goff_18FB588[];
extern char goff_18FB6E0[];
extern char goff_18FB6E8[];
extern char goff_18FB6F0[];
extern char goff_18FB7E8[];
extern char goff_18FB7F8[];
extern char goff_18FB808[];
extern char goff_18FB850[];
extern char goff_18FB858[];
extern char goff_18FB888[];
extern char goff_18FB8A0[];
extern char goff_18FB8A8[];
extern char goff_18FB8B0[];
extern char goff_18FB8B8[];
extern char goff_18FB900[];
extern char goff_18FB930[];
extern char goff_18FB938[];
extern char goff_18FB960[];
extern char goff_18FB968[];
extern char goff_18FBA20[];
extern char goff_18FBA28[];
extern char goff_18FBA30[];
extern char goff_18FBA38[];
extern char goff_18FBA40[];
extern char goff_18FBA48[];
extern char goff_18FBA50[];
extern char goff_18FBAF8[];
extern char goff_18FBB00[];
extern char goff_18FBB08[];
extern char goff_18FC1D0[];
extern char goff_18FC998[];
extern char goff_18FC9A0[];
extern char goff_18FC9A8[];
extern char goff_18FC9B0[];
extern char goff_18FC9B8[];
extern char goff_18FC9C0[];
extern char goff_18FC9E8[];
extern __attribute__((visibility("hidden"))) char loc_5937E0[];
extern __attribute__((visibility("hidden"))) char loc_5B80B0[];
__int64 nn__mem__StandardAllocator__Allocate();
__int64 nn__mem__StandardAllocator__Free();
__attribute__((visibility("hidden"))) __int64 nullsub_1096();
__attribute__((visibility("hidden"))) __int64 nullsub_1627();
__attribute__((visibility("hidden"))) __int64 nullsub_1638();
__attribute__((visibility("hidden"))) __int64 nullsub_1645();
__attribute__((visibility("hidden"))) __int64 nullsub_79();
extern __attribute__((visibility("hidden"))) __int64 qword_191A580;
__int64 std____shared_weak_count____release_weak();
__int64 std__mutex__lock();
__int64 std__mutex__unlock();
__int64 std__recursive_mutex___recursive_mutex();
__int64 std__recursive_mutex__lock();
__int64 std__recursive_mutex__unlock();
__int64 std__string__basic_string();
__attribute__((visibility("hidden"))) __int64 sub_25D510();
__attribute__((visibility("hidden"))) __int64 sub_37030();
__attribute__((visibility("hidden"))) __int64 sub_4D6990();
__attribute__((visibility("hidden"))) __int64 sub_4DDCC0();
__attribute__((visibility("hidden"))) __int64 sub_4DFF20();
__attribute__((visibility("hidden"))) __int64 sub_4DFFE0();
__attribute__((visibility("hidden"))) __int64 sub_4EB340();
__attribute__((visibility("hidden"))) unsigned int sub_4EB9F0();
__attribute__((visibility("hidden"))) __int64 sub_4ECC90();
__attribute__((visibility("hidden"))) __int64 sub_4EDA40();
__attribute__((visibility("hidden"))) __int64 sub_4EE1B0();
__attribute__((visibility("hidden"))) __int64 sub_4EE1E0();
__attribute__((visibility("hidden"))) __int64 sub_4EF420();
__attribute__((visibility("hidden"))) __int64 sub_4EF480();
__attribute__((visibility("hidden"))) __int64 sub_4EFC30();
__attribute__((visibility("hidden"))) __int64 sub_4F03B0();
__attribute__((visibility("hidden"))) __int64 sub_4F48F0();
__attribute__((visibility("hidden"))) __int64 sub_4F4A80();
__attribute__((visibility("hidden"))) __int64 sub_4F5470();
__attribute__((visibility("hidden"))) __int64 sub_4F5C90();
__attribute__((visibility("hidden"))) __int64 sub_4F5EF0();
__attribute__((visibility("hidden"))) __int64 sub_4F5F60();
__attribute__((visibility("hidden"))) __int64 sub_4F5FA0();
__attribute__((visibility("hidden"))) __int64 sub_4F6A30();
__attribute__((visibility("hidden"))) unsigned int sub_4F9770();
__attribute__((visibility("hidden"))) __int64 sub_4FB520();
__attribute__((visibility("hidden"))) __int64 sub_4FBBE0();
__attribute__((visibility("hidden"))) __int64 sub_4FBBF0();
__attribute__((visibility("hidden"))) __int64 sub_4FC1E0();
__attribute__((visibility("hidden"))) unsigned int sub_4FC1F0();
__attribute__((visibility("hidden"))) __int64 sub_4FC210();
__attribute__((visibility("hidden"))) __int64 sub_503FF0();
__attribute__((visibility("hidden"))) __int64 sub_504140();
__attribute__((visibility("hidden"))) __int64 sub_504170();
__attribute__((visibility("hidden"))) __int64 sub_507B80();
__attribute__((visibility("hidden"))) __int64 sub_512B40();
__attribute__((visibility("hidden"))) __int64 sub_514020();
__attribute__((visibility("hidden"))) __int64 sub_518910();
__attribute__((visibility("hidden"))) __int64 sub_5189A0();
__attribute__((visibility("hidden"))) __int64 sub_518A40();
__attribute__((visibility("hidden"))) __int64 sub_51CE40();
__attribute__((visibility("hidden"))) __int64 sub_51DD10();
__attribute__((visibility("hidden"))) __int64 sub_51FEE0();
__attribute__((visibility("hidden"))) __int64 sub_52ECE0();
__attribute__((visibility("hidden"))) __int64 sub_52F490();
__attribute__((visibility("hidden"))) __int64 sub_530360();
__attribute__((visibility("hidden"))) char sub_548830();
__attribute__((visibility("hidden"))) __int64 sub_554100();
__attribute__((visibility("hidden"))) __int64 sub_554110();
__attribute__((visibility("hidden"))) __int64 sub_55A080();
__attribute__((visibility("hidden"))) __int64 sub_56C9F0();
__attribute__((visibility("hidden"))) __int64 sub_56CA00();
__attribute__((visibility("hidden"))) _Bool sub_576540();
__attribute__((visibility("hidden"))) __int64 sub_577290();
__attribute__((visibility("hidden"))) __int64 sub_578210();
__attribute__((visibility("hidden"))) __int64 sub_578410();
__attribute__((visibility("hidden"))) unsigned short sub_579100();
__attribute__((visibility("hidden"))) __int64 sub_57EDC0();
__attribute__((visibility("hidden"))) __int64 sub_57F650();
__attribute__((visibility("hidden"))) __int64 sub_583240();
__attribute__((visibility("hidden"))) __int64 sub_5842F0();
__attribute__((visibility("hidden"))) __int64 sub_5885D0();
__attribute__((visibility("hidden"))) __int64 sub_588D80();
__attribute__((visibility("hidden"))) __int64 sub_588DA0();
__attribute__((visibility("hidden"))) __int64 sub_588E20();
__attribute__((visibility("hidden"))) __int64 sub_58A960();
__attribute__((visibility("hidden"))) __int64 sub_594400();
__attribute__((visibility("hidden"))) int sub_5944E0();
__attribute__((visibility("hidden"))) __int64 sub_595100();
__attribute__((visibility("hidden"))) __int64 sub_595240();
__attribute__((visibility("hidden"))) __int64 sub_5B87B0();
__attribute__((visibility("hidden"))) __int64 sub_5B8CF0();
__attribute__((visibility("hidden"))) __int64 sub_5C6A60();
__attribute__((visibility("hidden"))) __int64 sub_5C78D0();
__attribute__((visibility("hidden"))) __int64 sub_5F7870();
__attribute__((visibility("hidden"))) __int64 sub_5F9680();
__attribute__((visibility("hidden"))) __int64 sub_6064E0();
__attribute__((visibility("hidden"))) __int64 sub_60A870();
__attribute__((visibility("hidden"))) __int64 sub_6203B0();
__attribute__((visibility("hidden"))) __int64 sub_620400();
__attribute__((visibility("hidden"))) __int64 sub_620660();
__attribute__((visibility("hidden"))) __int64 sub_620B60();
__attribute__((visibility("hidden"))) __int64 sub_620DC0();
__attribute__((visibility("hidden"))) __int64 sub_621EB0();
__attribute__((visibility("hidden"))) __int64 sub_628D80();
__attribute__((visibility("hidden"))) __int64 sub_62C760();
__attribute__((visibility("hidden"))) __int64 sub_62E090();
__attribute__((visibility("hidden"))) __int64 sub_62F1F0();
__attribute__((visibility("hidden"))) __int64 sub_62F420();
__attribute__((visibility("hidden"))) __int64 sub_68F0E0();
__attribute__((visibility("hidden"))) __int64 sub_696710();
extern __attribute__((visibility("hidden"))) char unk_1326E41;
extern __attribute__((visibility("hidden"))) char unk_191A588;

__int64 __fastcall sub_4DFE80(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x22
  __int64 result; // x0

  v3 = *a1;
  sub_4DFF20(*a1 + 136, *(_QWORD *)(*a1 + 144));
  sub_4DFFE0(v3 + 112, *(_QWORD **)(v3 + 120));
  sub_4DDCC0(v3 + 88, *(_QWORD *)(v3 + 96));
  sub_4DDCC0(v3 + 64, *(_QWORD *)(v3 + 72));
  nullsub_79(v3 + 44);
  Recovered_ResultTextDestroy((RecoveredSdkText *)(v3 + 32));
  nullsub_79(v3 + 16);
  Recovered_ResultTextDestroy((RecoveredSdkText *)v3);
  result = sub_57EDC0(v3, 0LL, a2, a3);
  *a1 = 0;
  return result;
}

void __fastcall sub_4F6480(_QWORD *a1)
{
  _QWORD *i; // x22
  __int64 v3; // x22
  RecoveredSdkResult v6; // [xsp+58h] [xbp-58h] BYREF
  RecoveredSdkResult source; // [xsp+30h] [xbp-80h] BYREF
  RecoveredSdkResult self; // [xsp+8h] [xbp-A8h] BYREF

  if ( a1[7] != 0 )
    sub_4EFC30(6);
  sub_4F5C90((__int64)&source);
  for ( i = (_QWORD *)a1[5]; i != a1 + 6; i = (_QWORD *)a1[5] )
  {
    nullsub_1638(i[5], 1);
    v3 = i[5];
    Recovered_ResultCopy(&self, &source);
    Recovered_ResultCopy(&v6, &self);
    sub_4ECC90(v3, 4, &v6, 1);
    Recovered_ResultTextDestroy(&v6.domain);
    Recovered_ResultTextDestroy(&self.domain);
  }
  a1[10] = 0;
  Recovered_ResultTextDestroy(&source.domain);
}

__int64 __fastcall sub_4FB740(__int64 *a1, __int64 a2)
{
  __int64 v4; // x22
  unsigned int v5; // w0
  unsigned int v6; // w21
  unsigned int v7; // w8
  __int64 v8; // x21
  unsigned int v9; // w20
  __int64 v10; // x0
  unsigned int v12; // [xsp+Ch] [xbp-24h] BYREF

  sub_4FBBE0(a2);
  v12 = 0;
  v4 = *a1;
  v5 = sub_4EB9F0(a1);
  v6 = 3 * (v5 >> 2);
  if ( v5 != 0 )
  {
    v7 = v5 - 1;
    do
    {
      if ( *(_BYTE *)(v4 + v7) != 61 )
        break;
      --v7;
      --v6;
    }
    while ( v7 != -1 );
  }
  v12 = v6;
  sub_4FBBF0(a2, v6);
  sub_4FC210(a2, v6);
  v8 = *a1;
  v9 = sub_4EB9F0(a1);
  v10 = sub_4FC1E0(a2);
  return sub_4FB520(v8, v9, v10, &v12);
}

__int64 __fastcall sub_508A50(__int64 a1, unsigned int a2)
{
  __int64 result; // x0
  __int64 v5; // [xsp+8h] [xbp-18h] BYREF

  v5 = sub_4EF420(a1);
  result = sub_4EF480(&v5, a2);
  *(_QWORD *)(a1 + 16) = result;
  return result;
}

// N5storm2mm20PseudoGlobalVariableINS0_14StreamSettingsEEE, virtual slot 0
__int64 __fastcall sub_50A1C0(__int64 a1)
{
  __int64 v2; // x20

  *(_QWORD *)a1 = ((__int64 *)goff_18F94F0 + 2);
  v2 = a1 + 120;
  sub_4F03B0(goff_18F92F0, a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  sub_507B80(v2);
  sub_507B80(a1 + 24);
  return nullsub_1627(a1);
}

// N5storm2mm20PseudoGlobalVariableINS0_14StreamSettingsEEE, virtual slot 1
__int64 __fastcall sub_50A230(__int64 a1)
{
  __int64 v2; // x20

  *(_QWORD *)a1 = ((__int64 *)goff_18F94F0 + 2);
  v2 = a1 + 120;
  sub_4F03B0(goff_18F92F0, a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  sub_507B80(v2);
  sub_507B80(a1 + 24);
  nullsub_1627(a1);
  return sub_4EB340(a1);
}

void __fastcall sub_511800(_QWORD *result)
{
  _DWORD *v1; // x19

  if ( *(_DWORD *)result != 3 )
  {
    v1 = result;
    result = (_QWORD *)result[19];
    if ( result != nullptr )
    {
      result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *))(*result + 8LL))(result);
      *v1 = 3;
    }
  }
  return;
}

// N5storm2mm13RootTransportE, virtual slot 0
__int64 __fastcall sub_513750(_QWORD *a1)
{
  _QWORD *v2; // x0
  __int64 v3; // x8
  _QWORD *v4; // x21

  *a1 = ((char *)((__int64*)goff_18F95F0) + 16);
  if ( a1[315] != 0 )
  {
    v2 = (_QWORD *)a1[314];
    v3 = a1[313];
    *(_QWORD *)(*v2 + 8LL) = *(_QWORD *)(v3 + 8);
    **(_QWORD **)(v3 + 8) = *v2;
    a1[315] = 0;
    if ( v2 != a1 + 313 )
    {
      do
      {
        v4 = (_QWORD *)v2[1];
        sub_37030(v2);
        v2 = v4;
      }
      while ( v4 != a1 + 313 );
    }
  }
  sub_514020(a1 + 306);
  nullsub_1645(a1 + 302);
  nullsub_1645(a1 + 298);
  return sub_512B40(a1 + 3);
}

__int64 __fastcall sub_519AE0(__int64 a1)
{
  unsigned int v2; // w20
  unsigned int v4; // [xsp+Ch] [xbp-14h] BYREF

  v2 = sub_4FC1F0(*(_QWORD *)(a1 + 8));
  sub_503FF0(a1, 0);
  v4 = v2 - 4;
  sub_504140(a1, &v4, 4, 1);
  sub_503FF0(a1, v2);
  return *(_QWORD *)(a1 + 8);
}

__int64 __fastcall sub_51C3F0(__int64 a1)
{
  __int64 v2; // x0
  RecoveredSdkResult v5; // [xsp+8h] [xbp-38h] BYREF
  RecoveredSdkText v4; // [xsp+0h] [xbp-40h] BYREF

  Recovered_ResultTextConstruct(&v4, "Core");
  sub_4F5F60((__int64)&v5, (const char **)&v4.data, 4, 1);
  sub_51CE40(a1, 4u, &v5);
  Recovered_ResultTextDestroy(&v5.domain);
  Recovered_ResultTextDestroy(&v4);
  v2 = *(_QWORD *)(a1 + 160);
  if ( v2 != 0 )
  {
    sub_518A40(v2);
    *(_QWORD *)(a1 + 160) = 0;
  }
  return sub_4F48F0(a1);
}

__int64 __fastcall sub_51C7C0(__int64 a1)
{
  RecoveredSdkResult v4; // [xsp+8h] [xbp-38h] BYREF
  RecoveredSdkText v3; // [xsp+0h] [xbp-40h] BYREF

  Recovered_ResultTextConstruct(&v3, "Transport");
  sub_4F5F60((__int64)&v4, (const char **)&v3.data, 2, 1);
  sub_51CE40(a1, 3u, &v4);
  Recovered_ResultTextDestroy(&v4.domain);
  Recovered_ResultTextDestroy(&v3);
  return sub_4F48F0(a1);
}

__int64 __fastcall sub_51CCF0(__int64 a1)
{
  __int64 v2; // x20
  unsigned int v3; // w0
  RecoveredSdkResult v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (unsigned int)sub_4F9770(*(_QWORD *)(a1 + 480) + 16LL) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 160);
    v3 = sub_4F9770(*(_QWORD *)(a1 + 480) + 16LL);
    sub_5189A0(v2, v3);
  }
  **(_QWORD **)(a1 + 424) = *(_QWORD *)(a1 + 160);
  *(_QWORD *)(a1 + 160) = 0;
  sub_4F5EF0((__int64)&v5, "Core", 0);
  sub_51CE40(a1, 2u, &v5);
  Recovered_ResultTextDestroy(&v5.domain);
  return sub_4F48F0(a1);
}

_QWORD *__fastcall sub_51EEB0(__int64 a1)
{
  __int64 (*v1)(void); // x8
  _QWORD *v3; // x20
__attribute__((visibility("hidden"))) __int64 sub_4EB320(__typeof__(64), __typeof__(&unk_1326E41), __typeof__(0));
__attribute__((visibility("hidden"))) __int64 sub_52CB50(__typeof__(v3), __typeof__(3));
__attribute__((visibility("hidden"))) __int64 sub_52F110(__typeof__((__int64)v3), __typeof__(*(unsigned __int16 *)(a1 + 216)), __typeof__(*(unsigned __int8 *)(a1 + 220)), __typeof__(*(_DWORD *)(a1 + 224)), __typeof__(*(unsigned __int16 *)(a1 + 218)));


  v1 = *(__int64 (**)(void))(a1 + 240);
  if ( v1 != nullptr )
  {
    v3 = (_QWORD *)v1();
  }
  else
  {
    v3 = (_QWORD *)sub_4EB320(64, &unk_1326E41, 0);
    sub_52CB50(v3, 3);
  }
  sub_52F110(
    (__int64)v3,
    *(unsigned __int16 *)(a1 + 216),
    *(unsigned __int8 *)(a1 + 220),
    *(_DWORD *)(a1 + 224),
    *(unsigned __int16 *)(a1 + 218));
  return v3;
}

void sub_5208B0()
{
  __int64 *v0; // x20
  __int64 v1; // x19
  __int64 *v3; // x20
  __int64 v4; // x19

  v0 = ((__int64*)goff_18F9828);
  v1 = *((__int64*)goff_18F9828);
  if ( *((__int64*)goff_18F9828) != 0 )
  {
    sub_51DD10(*((__int64*)goff_18F9828));
    sub_4EB340(v1);
    *v0 = 0;
  }
  v3 = ((__int64*)goff_18F9830);
  v4 = *((__int64*)goff_18F9830);
  if ( *((__int64*)goff_18F9830) != 0 )
  {
    sub_4EE1E0(*((__int64*)goff_18F9830));
    sub_4EB340(v4);
    *v3 = 0;
  }
  return;
}

// N5storm2mm17WebSocketEndPointE, virtual slot 24
__int64 __fastcall sub_528D30(_QWORD *a1)
{
  __int64 v2; // x0
  unsigned __int64 *v3; // x8
  unsigned __int64 v4; // x0
  unsigned int *v5; // x8
  unsigned int v6; // w9
  unsigned int v7; // w9

  *a1 = ((char *)((__int64*)goff_18F9900) + 16);
  v2 = a1[22];
  if ( v2 != 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    a1[22] = 0;
  }
  v3 = a1 + 20;
  v4 = __atomic_exchange_n(v3, 0, 5);
  if ( v4 != 0 )
  {
    v5 = (unsigned int *)(v4 + 8);
    v7 = __atomic_sub_fetch(v5, 1, 5);
    if ( v7 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return sub_518910(a1);
}

// N5storm2mm17WebSocketEndPointE, virtual slot 25
__int64 __fastcall sub_528DB0(_QWORD *a1)
{
  __int64 v2; // x0
  unsigned __int64 *v3; // x8
  unsigned __int64 v4; // x0
  unsigned int *v5; // x8
  unsigned int v6; // w9
  unsigned int v7; // w9

  *a1 = ((char *)((__int64*)goff_18F9900) + 16);
  v2 = a1[22];
  if ( v2 != 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    a1[22] = 0;
  }
  v3 = a1 + 20;
  v4 = __atomic_exchange_n(v3, 0, 5);
  if ( v4 != 0 )
  {
    v5 = (unsigned int *)(v4 + 8);
    v7 = __atomic_sub_fetch(v5, 1, 5);
    if ( v7 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  sub_518910(a1);
  return sub_4EB340(a1);
}

void __fastcall sub_5292E0(_QWORD *a1)
{
  RecoveredSdkText self; // [xsp+8h] [xbp-8h] BYREF

  sub_52F490(a1, 1);
  *a1 = ((char *)((__int64*)goff_18F9910) + 16);
  sub_4EE1B0(a1 + 14, 0x40000000);
  sub_4EE1B0(a1 + 18, 0);
  a1[23] = 0;
  a1[22] = a1 + 23;
  a1[24] = 0;
  a1[25] = a1 + 25;
  a1[26] = a1 + 25;
  a1[27] = 0;
  Recovered_ResultTextConstruct(&self, "NotificationEventManager");
  sub_4F5470(a1, &self);
  Recovered_ResultTextDestroy(&self);
}

void __fastcall sub_52EC60(__int64 a1)
{
  const RecoveredSdkResult *v1; // x20
  unsigned int v3; // w22
  RecoveredSdkResult self; // [xsp+8h] [xbp-48h] BYREF

  v1 = (const RecoveredSdkResult *)(a1 + 216);
  Recovered_ResultCopy(&self, (const RecoveredSdkResult *)(a1 + 216));
  sub_4F5FA0(&self);
  Recovered_ResultTextDestroy(&self.domain);
  v3 = *(_DWORD *)(a1 + 160);
  Recovered_ResultCopy(&self, v1);
  sub_52ECE0(a1, v3, &self);
  Recovered_ResultTextDestroy(&self.domain);
}

__int64 __fastcall sub_530480(__int64 a1)
{
  unsigned int v1; // w19
  void *v2; // x21
  __int64 *v3; // x20
  unsigned __int64 v4; // x8
  _QWORD *v5; // x10
  char *v6; // x8
  char *v7; // x20
  unsigned int v9; // [xsp+Ch] [xbp-14h] BYREF

  sub_504170(a1, &v9, 4, 1);
  v1 = v9;
  v2 = goff_18F87A8;
  v3 = (__int64 *)((char *)goff_18F87A8 + 32);
  if ( *(char*)goff_18F87A0 != 0 )
  {
    v4 = *(unsigned int *)sub_4D6990(*((__int64*)goff_18F87B0));
    if ( (_DWORD)v4 != 0 )
    {
      v5 = *(_QWORD **)((char *)((char *)0x80) + (_QWORD)v2);
      if ( v4 >= (__int64)(v5[1] - *v5) >> 3 )
      {
        sub_4EDA40( 0LL, 0, 3758096387LL, 0);
        v6 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_7;
      }
      v3 = (__int64 *)(*(_QWORD *)(*v5 + 8 * v4) + 24LL);
    }
  }
  v6 = *v3;
LABEL_7:
  v7 = *(_QWORD *)(v6 + 16);
  sub_4F4A80(v7);
  return sub_4F6A30(*(_QWORD *)(v7 + 24), v1);
}

void __fastcall sub_530F10(__int64 a1, const RecoveredSdkText *a2, unsigned int a3)
{
  RecoveredSdkText self; // [xsp+8h] [xbp-18h] BYREF

  Recovered_ResultTextCopy(&self, a2);
  sub_530360(a1, a3, &self);
  Recovered_ResultTextDestroy(&self);
}

int __fastcall sub_548D30(__int64 a1, __int64 a2, __int64 a3, const RecoveredSdkText *a4, char a5, __int64 a6)
{
  char v12; // w19
  RecoveredSdkText self; // [xsp+8h] [xbp-38h] BYREF
  RecoveredSdkText v14; // [xsp+0h] [xbp-40h] BYREF

  if ( (unsigned int)sub_4EB9F0(a6) != 0 )
    sub_51FEE0(*(_QWORD *)(a1 + 72), a6);
  Recovered_ResultTextConstruct(&self, (const char *)&unk_1326E41);
  Recovered_ResultTextCopy(&v14, a4);
  v12 = sub_548830(a1, a2, a3, &self, 0, &v14, a5 & 1);
  Recovered_ResultTextDestroy(&v14);
  Recovered_ResultTextDestroy(&self);
  return v12 & 1;
}

// N5storm2mm14JobFacadeLoginE, virtual slot 12
void sub_549930(__int64 result, __int64 a2)
{
  __int64 v2; // x29
  __int64 v3; // x30
  __int64 v4; // x19
  RecoveredSdkResult self; // [xsp+8h] [xbp-48h] BYREF
  __int64 v6; // [xsp+40h] [xbp-10h]
  __int64 v7; // [xsp+48h] [xbp-8h]

  if ( *(_DWORD *)(result + 56) != 5 )
  {
    v6 = v2;
    v7 = v3;
    v4 = result;
    Recovered_ResultCopy(&self, (const RecoveredSdkResult *)(a2 + 72));
    sub_4F5FA0(&self);
    Recovered_ResultTextDestroy(&self.domain);
    { (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 88LL))(v4); return; }
  }
  return;
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

// N5storm9NatPacketE, virtual slot 17
__int64 __fastcall sub_5B5D80(__int64 a1)
{
  __int64 v2; // x0
  __int64 result; // x0
  _BYTE src[4]; // [xsp+Ch] [xbp-4h] BYREF

  sub_595100();
  v2 = *(_QWORD *)(a1 + 16);
  src[0] = 16 * *(_BYTE *)(a1 + 273);
  result = sub_588E20(v2, src, 4, 0);
  *(_DWORD *)(a1 + 24) += 4;
  return result;
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

// N5storm10PeerPacketE, virtual slot 21
bool __fastcall sub_5B68F0(__int64 a1)
{
  _BOOL8 result; // x0
  int v2; // w8

  result = true;
  if ( *(_BYTE *)(a1 + 316) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 48);
    if ( v2 != 11 && v2 != 5 )
      return false;
  }
  return result;
}

// N5storm10PeerPacketE, virtual slot 11
__int64 __fastcall sub_5B6920(__int64 *a1, int a2, __int64 a3, _BYTE *a4, _Bool a5)
{
  int v6; // w21
  __int64 v10; // x1
  __int64 v11; // x8
  __int64 v12; // x1

  a1[45] = 0;
  *a4 = 0;
  sub_588DA0(a1[2], (unsigned int)(8 * a2));
  v6 = 8 * a2;
  v10 = a1[2];
  v11 = *a1;
  if ( a5 )
    (*(void (__fastcall **)(__int64 *, __int64, __int64, _BYTE *))(v11 + 152))(a1, v10, a3, a4);
  else
    (*(void (__fastcall **)(__int64 *, __int64, __int64, _BYTE *))(v11 + 144))(a1, v10, a3, a4);
  v12 = (unsigned int)(v6 - *((_DWORD *)a1 + 90));
  *((_DWORD *)a1 + 91) = v12;
  return sub_588DA0(a1[2], v12);
}

bool __fastcall sub_5B76F0(__int64 a1)
{
  __int64 v1; // x8
  void *v2; // x0
  const void *v3; // x1

  if ( (*(_DWORD *)(a1 + 52) & 0xFFFFFFFE) != 2 )
    return false;
  v2 = *(void **)(*(_QWORD *)(a1 + 16) + 16LL);
  v1 = *(_QWORD *)(a1 + 328);
  v3 = *(const void **)(v1 + 16);
  if ( v2 == v3 )
    return v2 == nullptr;
  memcpy(v2, v3, (unsigned __int64)*(unsigned int *)(v1 + 24) >> 3);
  return true;
}

__int64 __fastcall sub_5B8FD0(__int64 a1)
{
  __int64 v1; // x19

  v1 = a1 - 8;
  sub_5B8CF0(a1 - 8);
  return sub_56CA00(v1, &unk_1326E41, 0);
}

__int64 __fastcall sub_5BED50(unsigned int *a1)
{
  unsigned int *v1; // x19

  v1 = a1 - 6;
  sub_577290(a1);
  return nullsub_1096(v1);
}

void __fastcall sub_5BED80(unsigned int *a1)
{
  unsigned int *v1; // x19

  v1 = a1 - 6;
  sub_577290(a1);
  nullsub_1096(v1);
  _ZdlPv(v1);
}

// N5storm14LinkBasePacketE, virtual slot 5
__int64 __fastcall sub_5C05E0(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(504, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_5C78D0(v2, a1);
  return v2;
}

// N5storm19UDPEmulator_NetworkE, virtual slot 113
__int64 __fastcall sub_5C0F70(__int64 a1)
{
  __int64 v2; // x0

  v2 = *(_QWORD *)(a1 + 392);
  if ( v2 != 0 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 232LL))(v2);
  else
    return a1 + 19088;
}

__int64 __fastcall sub_5C0FE0(__int64 a1)
{
  __int64 v2; // x0

  v2 = *(_QWORD *)(a1 + 360);
  if ( v2 != 0 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 232LL))(v2);
  else
    return a1 + 19056;
}

// N5storm9transport6packet7inEvent14PacketReceivedE, virtual slot 0
void __fastcall sub_5C1010(_QWORD *result)
{
  _QWORD *v1; // x19
  __int64 v2; // x22
  _QWORD *v3; // x20
  __int64 v4; // x0
  unsigned int v5; // w21

  *result = ((__int64 *)((__int64*)goff_18FADA8) + 2);
  v1 = result + 7;
  v2 = result[7];
  if ( v2 != 0 )
  {
    v3 = result;
    v4 = *(_QWORD *)(v2 + 16);
    if ( v4 != 0 )
    {
      v5 = *((_DWORD *)v3 + 17);
      sub_588D80(v4, *((unsigned int *)v3 + 16));
      sub_588DA0(*(_QWORD *)(v2 + 16), v5);
      v2 = v3[7];
    }
    result = *(_QWORD **)(v2 + 40);
    if ( result != nullptr )
      { (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*result + 64LL))(result, v1); return; }
  }
  return;
}

// N5storm9transport6packet7inEvent14PacketReceivedE, virtual slot 1
__int64 __fastcall sub_5C10A0(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x22
  __int64 v4; // x0
  unsigned int v5; // w21
  __int64 v6; // x0

  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18FADA8) + 2);
  v2 = a1 + 56;
  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 != 0 )
  {
    v4 = *(_QWORD *)(v3 + 16);
    if ( v4 != 0 )
    {
      v5 = *(_DWORD *)(a1 + 68);
      sub_588D80(v4, *(unsigned int *)(a1 + 64));
      sub_588DA0(*(_QWORD *)(v3 + 16), v5);
      v3 = *(_QWORD *)(a1 + 56);
    }
    v6 = *(_QWORD *)(v3 + 40);
    if ( v6 != 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 64LL))(v6, v2);
  }
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm9transport6packet7inEvent17NatPacketReceivedE, virtual slot 0
__int64 __fastcall sub_5C13E0(_QWORD *a1)
{
  _QWORD *v2; // x1
  __int64 v3; // x8
  __int64 v4; // x0

  *a1 = ((__int64 *)((__int64*)goff_18FADC0) + 2);
  v2 = a1 + 26;
  v3 = a1[26];
  if ( v3 != 0 )
  {
    v4 = *(_QWORD *)(v3 + 40);
    if ( v4 != 0 )
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 64LL))(v4, v2);
  }
  return sub_578410(a1 + 4);
}

// N5storm9transport6packet7inEvent17NatPacketReceivedE, virtual slot 1
__int64 __fastcall sub_5C1430(_QWORD *a1)
{
  _QWORD *v2; // x1
  __int64 v3; // x8
  __int64 v4; // x0

  *a1 = ((__int64 *)((__int64*)goff_18FADC0) + 2);
  v2 = a1 + 26;
  v3 = a1[26];
  if ( v3 != 0 )
  {
    v4 = *(_QWORD *)(v3 + 40);
    if ( v4 != 0 )
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 64LL))(v4, v2);
  }
  sub_578410(a1 + 4);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm9transport6packet7inEvent17NatPacketReceivedE, virtual slot 5
__int64 __fastcall sub_5C1570(__int64 a1)
{
  __int64 v2; // x0
  __int64 *v3; // x9
  __int64 v4; // x20
  __int64 v5; // x8

  v2 = sub_56C9F0(216, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = ((__int64*)goff_18FADC0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v4 = v2;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 2;
  sub_578210(v2 + 32, a1 + 32);
  v5 = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(v4 + 208) = v5;
  ++*(_WORD *)(v5 + 248);
  return v4;
}

// N5storm9transport6packet7inEvent18LinkPacketReceivedE, virtual slot 0
__int64 __fastcall sub_5C1720(_QWORD *a1)
{
  _QWORD *v2; // x1
  __int64 v3; // x8
  __int64 v4; // x0

  *a1 = ((__int64 *)((__int64*)goff_18FAB60) + 2);
  v2 = a1 + 26;
  v3 = a1[26];
  if ( v3 != 0 )
  {
    v4 = *(_QWORD *)(v3 + 40);
    if ( v4 != 0 )
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 64LL))(v4, v2);
  }
  return sub_578410(a1 + 4);
}

// N5storm9transport6packet7inEvent18LinkPacketReceivedE, virtual slot 1
__int64 __fastcall sub_5C1770(_QWORD *a1)
{
  _QWORD *v2; // x1
  __int64 v3; // x8
  __int64 v4; // x0

  *a1 = ((__int64 *)((__int64*)goff_18FAB60) + 2);
  v2 = a1 + 26;
  v3 = a1[26];
  if ( v3 != 0 )
  {
    v4 = *(_QWORD *)(v3 + 40);
    if ( v4 != 0 )
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 64LL))(v4, v2);
  }
  sub_578410(a1 + 4);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm9transport6packet7inEvent18LinkPacketReceivedE, virtual slot 5
__int64 __fastcall sub_5C18B0(__int64 a1)
{
  __int64 v2; // x0
  __int64 *v3; // x9
  __int64 v4; // x20
  __int64 v5; // x8

  v2 = sub_56C9F0(216, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = ((__int64*)goff_18FAB60);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v4 = v2;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 2;
  sub_578210(v2 + 32, a1 + 32);
  v5 = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(v4 + 208) = v5;
  ++*(_WORD *)(v5 + 248);
  return v4;
}

// N5storm9transport6packet7inEvent24ConnectionPacketReceivedE, virtual slot 0
__int64 __fastcall sub_5C1B50(_QWORD *a1)
{
  _QWORD *v2; // x1
  __int64 v3; // x8
  __int64 v4; // x0

  *a1 = ((__int64 *)goff_18FAB70 + 2);
  v2 = a1 + 26;
  v3 = a1[26];
  if ( v3 != 0 )
  {
    v4 = *(_QWORD *)(v3 + 40);
    if ( v4 != 0 )
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 64LL))(v4, v2);
  }
  return sub_578410(a1 + 4);
}

// N5storm9transport6packet7inEvent24ConnectionPacketReceivedE, virtual slot 1
__int64 __fastcall sub_5C1BA0(_QWORD *a1)
{
  _QWORD *v2; // x1
  __int64 v3; // x8
  __int64 v4; // x0

  *a1 = ((__int64 *)goff_18FAB70 + 2);
  v2 = a1 + 26;
  v3 = a1[26];
  if ( v3 != 0 )
  {
    v4 = *(_QWORD *)(v3 + 40);
    if ( v4 != 0 )
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 64LL))(v4, v2);
  }
  sub_578410(a1 + 4);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm9transport6packet7inEvent24ConnectionPacketReceivedE, virtual slot 5
__int64 __fastcall sub_5C1CE0(__int64 a1)
{
  __int64 v2; // x0
  __int64 *v3; // x9
  __int64 v4; // x20
  __int64 v5; // x8

  v2 = sub_56C9F0(224, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = goff_18FAB70;
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v4 = v2;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 2;
  sub_578210(v2 + 32, a1 + 32);
  v5 = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(v4 + 208) = v5;
  *(_QWORD *)(v4 + 216) = *(_QWORD *)(a1 + 216);
  ++*(_WORD *)(v5 + 248);
  return v4;
}

// N5storm14PeerDescriptorE, virtual slot 5
__int64 __fastcall sub_5C2180(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  sub_5B87B0(v2, a1);
  return v2;
}

// N5storm9transport13internalEvent20UpdateLinkRecvPacketE, virtual slot 5
__int64 __fastcall sub_5C2F80(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x20
  __int64 v4; // x9

  v2 = sub_56C9F0(232, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18FAB68) + 2);
  v3 = v2;
  *(_WORD *)(v2 + 32) = *(_WORD *)(a1 + 32);
  sub_578210(v2 + 40, a1 + 40);
  v4 = *(_QWORD *)(a1 + 224);
  *(_QWORD *)(v3 + 216) = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(v3 + 224) = v4;
  return v3;
}

// N5storm17NetPropertyVectorINS_15NetPropertyDataINS_9IPAddressENS_20NetPropertyDataTraitIS2_EEEELm0EE10VectorSizeE, virtual slot 11
void __fastcall sub_5C6720(_QWORD *result, __int64 a2)
{
  __int64 v2; // x1

  v2 = 0x4EC4EC4EC4EC4EC5LL * ((__int64)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL) - **(_QWORD **)(a2 + 32)) >> 4);
  if ( 0x4EC4EC4EC4EC4EC5LL * ((__int64)(*(_QWORD *)(result[4] + 8LL) - *(_QWORD *)result[4]) >> 4) != v2 )
    { sub_5C6A60(result, v2, 1); return; }
  return;
}

// N5storm17NetPropertyVectorINS_15NetPropertyDataINS_9IPAddressENS_20NetPropertyDataTraitIS2_EEEELm0EE10VectorSizeE, virtual slot 12
__int64 __fastcall sub_5C6770(_QWORD *a1)
{
  __int64 *v1; // x21
  __int64 v2; // x20
  __int64 v3; // x22
  void (__fastcall **v5)(__int64); // t1

  v1 = (__int64 *)a1[4];
  v3 = *v1;
  v2 = v1[1];
  if ( v2 != *v1 )
  {
    do
    {
      v5 = *(void (__fastcall ***)(__int64))(v2 - 208);
      v2 -= 208;
      (*v5)(v2);
    }
    while ( v3 != v2 );
  }
  v1[1] = v3;
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 128LL))(a1);
}

// N5storm18DynamicTypeFactoryINS_21ApplicationDescriptorEEE, virtual slot 2
__int64 __fastcall sub_5C7100(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 v4; // x0

  v3 = sub_56C9F0(352, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240(v3);
  ((void (__fastcall *)(__int64, __int64))loc_5937E0)(v3, v4);
  return v3;
}

// N5storm18DynamicTypeFactoryINS_21ApplicationDescriptorEEE, virtual slot 3
__int64 __fastcall sub_5C7150(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20

  v5 = sub_56C9F0(352, 8, 1092624384, 0LL, a3, a4);
  ((void (__fastcall *)(__int64, __int64))loc_5937E0)(v5, a2);
  return v5;
}

// N5storm18DynamicTypeFactoryINS_14PeerDescriptorEEE, virtual slot 2
__int64 __fastcall sub_5C83D0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 v4; // x0

  v3 = sub_56C9F0(1232, 16, 1092624384, 0LL, a2, a3);
  v4 = sub_583240(v3);
  ((void (__fastcall *)(__int64, __int64))loc_5B80B0)(v3, v4);
  return v3;
}

// N5storm18DynamicTypeFactoryINS_14PeerDescriptorEEE, virtual slot 3
__int64 __fastcall sub_5C8420(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20

  v5 = sub_56C9F0(1232, 16, 1092624384, 0LL, a3, a4);
  ((void (__fastcall *)(__int64, __int64))loc_5B80B0)(v5, a2);
  return v5;
}

// N5storm15NetPropertyDataINS_13ApplicationIdENS_20NetPropertyDataTraitIS1_EEEE, virtual slot 19
int __fastcall sub_5C8900(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0 )
    return sub_5944E0(a1 + 26, a2 + 26);
  else
    return 0;
}

__int64 __fastcall sub_5D1580(__int64 result)
{
  __int64 v1; // x19
  char *v2; // x20
  unsigned __int64 *v3; // x8
  unsigned __int64 v4; // x9

  v1 = *(_QWORD *)(result + 24);
  if ( v1 != 0 )
  {
    v2 = *(char **)(v1 + 8);
    if ( v2 != nullptr )
    {
      v3 = (unsigned __int64 *)((char *)v2 + 8);
      v4 = __atomic_fetch_sub(v3, 1, 5);
      if ( v4 == 0 )
      {
        (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 16LL))(v2);
        std____shared_weak_count____release_weak(v2);
      }
    }
    return sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
  }
  return result;
}

void sub_5DC9F0(char *result)
{
  __int64 *v1; // x8

  *(_WORD *)(result + 8) = 0;
  *(_QWORD *)(result + 12) = 0x1F4000007530LL;
  v1 = ((__int64*)goff_18FB1F0);
  *(_QWORD *)result = v1 + 2;
  *(_DWORD *)(result + 20) = 8000;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 40) = 0;
  return;
}

int __fastcall sub_5E1020(char *a1, _DWORD *a2)
{
  char *v4; // x23
  unsigned __int64 v5; // x22
  int v6; // w25
  __int64 result; // x0

  if ( *a2 == 0 || (unsigned __int16)sub_579100(a2) == 0 )
    return 0;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 32);
  if ( v4 == v5 )
  {
LABEL_10:
    sub_25D510((char *)(a1 + 24), v5, (unsigned __int64)a2);
    return 1;
  }
  else
  {
    while ( 1 )
    {
      v6 = (unsigned __int16)sub_579100(v4);
      if ( v6 == (unsigned __int16)sub_579100(a2) && *(_DWORD *)v4 == *a2 )
      {
        if ( *(_DWORD *)v4 == 0 )
          return 0;
        result = memcmp((const void *)(v4 + 16), a2 + 4, *(_QWORD *)(v4 + 8));
        if ( (_DWORD)result == 0 )
          break;
      }
      v4 += 176;
      if ( v5 == v4 )
      {
        v5 = *(_QWORD *)(a1 + 32);
        goto LABEL_10;
      }
    }
  }
  return result;
}

__int64 __fastcall sub_5F6500(__int64 result)
{
  if ( result != 0 )
    return sub_554110(result - 8, &unk_1326E41, 0);
  return result;
}

size_t *__fastcall sub_5F65A0(_QWORD *a1, size_t a2, __int64 a3, unsigned int a4)
{
  size_t *v6; // x0
  size_t *v7; // x20
  size_t v8; // x22

  if ( a2 != 0 )
  {
    v6 = (size_t *)sub_554100(a2 + 8, 16, 1092669441, a3, a4);
    v7 = v6;
    if ( v6 != nullptr )
    {
      *v6 = a2;
      v7 = v6 + 1;
      memset(v6 + 1, 0, a2);
    }
    if ( a1 != nullptr )
    {
      if ( v7 != nullptr )
      {
        v8 = *(a1 - 1);
        if ( v8 >= a2 )
        {
          memcpy(v7, a1, a2);
        }
        else
        {
          memcpy(v7, a1, *(a1 - 1));
          memset((char *)v7 + v8, 0, a2 - v8);
        }
      }
      sub_554110(a1 - 1, &unk_1326E41, 0);
    }
  }
  else
  {
    if ( a1 != nullptr )
      sub_554110(a1 - 1, &unk_1326E41, 0);
    return nullptr;
  }
  return v7;
}

int sub_5F6680()
{
  char *v0; // x19
  unsigned int v1; // w20

  v0 = (char *)goff_18FB850;
  std__recursive_mutex__lock((char *)goff_18FB850);
  v1 = (unsigned __int8)*(char*)goff_18FB858;
  std__recursive_mutex__unlock(v0);
  return v1;
}

__int64 __fastcall sub_5F66C0(char a1)
{
  char *v1; // x20

  v1 = (char *)goff_18FB850;
  std__recursive_mutex__lock((char *)goff_18FB850);
  *(char*)goff_18FB858 = a1;
  return std__recursive_mutex__unlock(v1);
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

// N5storm5punch8internal7inEvent17DeletePortMappingE, virtual slot 0
__int64 __fastcall sub_601BF0(_QWORD *a1)
{
  __int64 result; // x0

  *a1 = ((__int64 *)((__int64*)goff_18FBA40) + 2);
  sub_5F7870(a1 + 5);
  result = a1[4];
  a1[4] = 0;
  if ( result != 0 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  return result;
}

// N5storm5punch8internal7inEvent14AddPortMappingE, virtual slot 0
__int64 __fastcall sub_601D50(_QWORD *a1)
{
  __int64 result; // x0

  *a1 = ((__int64 *)((__int64*)goff_18FBA38) + 2);
  sub_5F7870(a1 + 5);
  result = a1[4];
  a1[4] = 0;
  if ( result != 0 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  return result;
}

// N5storm5punch4Upnp16PortMappingEntryE, virtual slot 0
__int64 __fastcall sub_601DA0(__int64 a1)
{
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18FB348) + 2);
  if ( (*(_BYTE *)(a1 + 368) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 384), &unk_1326E41, 0);
  sub_578410(a1 + 184);
  return sub_578410(a1 + 8);
}

// N5storm5punch8internal7inEvent18GetSpecificMappingE, virtual slot 0
__int64 __fastcall sub_601E00(_QWORD *a1)
{
  __int64 result; // x0

  *a1 = ((__int64 *)((__int64*)goff_18FBA48) + 2);
  sub_5F7870(a1 + 5);
  result = a1[4];
  a1[4] = 0;
  if ( result != 0 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  return result;
}

// N5storm5punch8internal7inEvent13GetAllMappingE, virtual slot 0
__int64 __fastcall sub_601E50(_QWORD *a1)
{
  __int64 result; // x0

  *a1 = ((__int64 *)goff_18FBA50 + 2);
  sub_5F7870(a1 + 5);
  result = a1[4];
  a1[4] = 0;
  if ( result != 0 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  return result;
}

// N5storm5punch9Traversal30MpeExternalAddressChangedEventE, virtual slot 1
__int64 __fastcall sub_6034F0(_QWORD *a1)
{
  *a1 = ((char *)((__int64*)goff_18FB7E8) + 16);
  sub_578410(a1 + 4);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch9Traversal30MpeExternalAddressChangedEventE, virtual slot 5
__int64 __fastcall sub_603600(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x9
  __int64 v4; // x20

  v2 = sub_56C9F0(208, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = ((__int64*)goff_18FB7E8);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v4 = v2;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 16;
  sub_578210(v2 + 32, a1 + 32);
  return v4;
}

// N5storm5punch4Upnp20AddPortMappingResultE, virtual slot 1
__int64 __fastcall sub_6043D0(_QWORD *a1)
{
  *a1 = ((__int64 *)((__int64*)goff_18FBB00) + 2);
  sub_578410(a1 + 6);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch4Upnp23DeletePortMappingResultE, virtual slot 5
__int64 __fastcall sub_604870(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x9
  __int64 v4; // x8
  __int64 *v5; // x9

  result = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  v3 = ((__int64*)goff_18EE7F0);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v3 + 2;
  *(_QWORD *)(result + 24) = v4;
  *(_DWORD *)(result + 32) = *(_DWORD *)(a1 + 32);
  v5 = ((__int64*)goff_18FBA20);
  *(_DWORD *)(result + 36) = *(_DWORD *)(a1 + 36);
  *(_QWORD *)(result + 40) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)result = v5 + 2;
  return result;
}

// N5storm5punch4Upnp24GetSpecificMappingResultE, virtual slot 0
__int64 __fastcall sub_604B10(__int64 a1)
{
  __int64 *v1; // x9

  v1 = ((__int64*)goff_18FB348);
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18FB340) + 2);
  *(_QWORD *)(a1 + 48) = v1 + 2;
  if ( (*(_BYTE *)(a1 + 416) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 432), &unk_1326E41, 0);
  sub_578410(a1 + 232);
  return sub_578410(a1 + 56);
}

// N5storm5punch4Upnp24GetSpecificMappingResultE, virtual slot 1
__int64 __fastcall sub_604B80(__int64 a1)
{
  __int64 *v1; // x9

  v1 = ((__int64*)goff_18FB348);
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18FB340) + 2);
  *(_QWORD *)(a1 + 48) = v1 + 2;
  if ( (*(_BYTE *)(a1 + 416) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 432), &unk_1326E41, 0);
  sub_578410(a1 + 232);
  sub_578410(a1 + 56);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch4Upnp24GetSpecificMappingResultE, virtual slot 5
__int64 __fastcall sub_604CD0(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(448, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_621EB0(v2, a1);
  return v2;
}

// N5storm5punch4Upnp20CancelCommandsResultE, virtual slot 5
__int64 __fastcall sub_605320(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x9
  __int64 v4; // x8
  __int64 *v5; // x9

  result = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  v3 = ((__int64*)goff_18EE7F0);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v3 + 2;
  *(_QWORD *)(result + 24) = v4;
  *(_DWORD *)(result + 32) = *(_DWORD *)(a1 + 32);
  v5 = ((__int64*)goff_18FBA28);
  *(_DWORD *)(result + 36) = *(_DWORD *)(a1 + 36);
  *(_QWORD *)(result + 40) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)result = v5 + 2;
  return result;
}

// N5storm5punch8internal7inEvent20AddPortMappingResultE, virtual slot 1
__int64 __fastcall sub_605740(__int64 a1)
{
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18FB8A0) + 2);
  sub_5F7870(a1 + 312);
  if ( (*(_BYTE *)(a1 + 264) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 280), &unk_1326E41, 0);
  if ( (*(_BYTE *)(a1 + 232) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 248), &unk_1326E41, 0);
  sub_578410(a1 + 48);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch8internal7inEvent20AddPortMappingResultE, virtual slot 5
__int64 __fastcall sub_6058A0(__int64 a1)
{
  __int64 v2; // x0
  __int64 *v3; // x8
  __int64 v4; // x9
  __int64 *v5; // x10
  __int64 v6; // x20

  v2 = sub_56C9F0(760, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  v3 = ((__int64*)goff_18EE7F0);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  v5 = ((__int64*)goff_18FB8A0);
  *(_QWORD *)v2 = v3 + 2;
  *(_QWORD *)(v2 + 24) = v4;
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(v2 + 36) = *(_DWORD *)(a1 + 36);
  v6 = v2;
  *(_QWORD *)(v2 + 40) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)v2 = v5 + 2;
  sub_620DC0(v2 + 48, a1 + 48);
  *(_DWORD *)(v6 + 296) = *(_DWORD *)(a1 + 296);
  *(_QWORD *)(v6 + 304) = *(_QWORD *)(a1 + 304);
  std__string__basic_string((char *)(v6 + 312), (const char *)(a1 + 312));
  std__string__basic_string((char *)(v6 + 336), (const char *)(a1 + 336));
  std__string__basic_string((char *)(v6 + 360), (const char *)(a1 + 360));
  std__string__basic_string((char *)(v6 + 384), (const char *)(a1 + 384));
  sub_578210(v6 + 408, a1 + 408);
  sub_578210(v6 + 584, a1 + 584);
  return v6;
}

// N5storm5punch8internal7inEvent23DeletePortMappingResultE, virtual slot 1
__int64 __fastcall sub_605BD0(_QWORD *a1)
{
  *a1 = ((__int64 *)((__int64*)goff_18FB8A8) + 2);
  sub_5F7870(a1 + 8);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch8internal7inEvent23DeletePortMappingResultE, virtual slot 5
__int64 __fastcall sub_605CE0(__int64 a1)
{
  __int64 v2; // x0
  __int64 *v3; // x9
  __int64 v4; // x20

  v2 = sub_56C9F0(512, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18EE7F0) + 2);
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(v2 + 36) = *(_DWORD *)(a1 + 36);
  v3 = ((__int64*)goff_18FB8A8);
  *(_QWORD *)(v2 + 40) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)v2 = v3 + 2;
  *(_DWORD *)(v2 + 48) = *(_DWORD *)(a1 + 48);
  v4 = v2;
  *(_QWORD *)(v2 + 56) = *(_QWORD *)(a1 + 56);
  std__string__basic_string((char *)(v2 + 64), (const char *)(a1 + 64));
  std__string__basic_string((char *)(v4 + 88), (const char *)(a1 + 88));
  std__string__basic_string((char *)(v4 + 112), (const char *)(a1 + 112));
  std__string__basic_string((char *)(v4 + 136), (const char *)(a1 + 136));
  sub_578210(v4 + 160, a1 + 160);
  sub_578210(v4 + 336, a1 + 336);
  return v4;
}

// N5storm5punch8internal7inEvent24GetSpecificMappingResultE, virtual slot 1
__int64 __fastcall sub_606070(__int64 a1)
{
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18FB8B0) + 2);
  sub_5F7870(a1 + 312);
  if ( (*(_BYTE *)(a1 + 264) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 280), &unk_1326E41, 0);
  if ( (*(_BYTE *)(a1 + 232) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 248), &unk_1326E41, 0);
  sub_578410(a1 + 48);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch8internal7inEvent24GetSpecificMappingResultE, virtual slot 5
__int64 __fastcall sub_6061D0(__int64 a1)
{
  __int64 v2; // x0
  __int64 *v3; // x8
  __int64 v4; // x9
  __int64 *v5; // x10
  __int64 v6; // x20

  v2 = sub_56C9F0(760, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  v3 = ((__int64*)goff_18EE7F0);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  v5 = ((__int64*)goff_18FB8B0);
  *(_QWORD *)v2 = v3 + 2;
  *(_QWORD *)(v2 + 24) = v4;
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(v2 + 36) = *(_DWORD *)(a1 + 36);
  v6 = v2;
  *(_QWORD *)(v2 + 40) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)v2 = v5 + 2;
  sub_620DC0(v2 + 48, a1 + 48);
  *(_DWORD *)(v6 + 296) = *(_DWORD *)(a1 + 296);
  *(_QWORD *)(v6 + 304) = *(_QWORD *)(a1 + 304);
  std__string__basic_string((char *)(v6 + 312), (const char *)(a1 + 312));
  std__string__basic_string((char *)(v6 + 336), (const char *)(a1 + 336));
  std__string__basic_string((char *)(v6 + 360), (const char *)(a1 + 360));
  std__string__basic_string((char *)(v6 + 384), (const char *)(a1 + 384));
  sub_578210(v6 + 408, a1 + 408);
  sub_578210(v6 + 584, a1 + 584);
  return v6;
}

// N5storm5punch8internal7inEvent19GetAllMappingResultE, virtual slot 1
__int64 __fastcall sub_606620(__int64 a1)
{
  sub_6064E0();
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch8internal7inEvent15DiscoveryResultE, virtual slot 1
__int64 __fastcall sub_606990(_QWORD *a1)
{
  *a1 = ((__int64 *)goff_18FB888 + 2);
  sub_620400(a1 + 6, a1[7]);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch8internal7inEvent18RefreshEntryResultE, virtual slot 1
__int64 __fastcall sub_6071B0(_QWORD *a1)
{
  *a1 = ((__int64 *)((__int64*)goff_18FB8B8) + 2);
  sub_5F7870(a1 + 7);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch8internal7inEvent18RefreshEntryResultE, virtual slot 5
__int64 __fastcall sub_6072C0(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x20

  v2 = sub_56C9F0(504, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = goff_18EDE08 + 16;
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18EE7F0) + 2);
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(v2 + 36) = *(_DWORD *)(a1 + 36);
  *(_QWORD *)(v2 + 40) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18FB8B8) + 2);
  v3 = v2;
  *(_WORD *)(v2 + 48) = *(_WORD *)(a1 + 48);
  std__string__basic_string((char *)(v2 + 56), (const char *)(a1 + 56));
  std__string__basic_string((char *)(v3 + 80), (const char *)(a1 + 80));
  std__string__basic_string((char *)(v3 + 104), (const char *)(a1 + 104));
  std__string__basic_string((char *)(v3 + 128), (const char *)(a1 + 128));
  sub_578210(v3 + 152, a1 + 152);
  sub_578210(v3 + 328, a1 + 328);
  return v3;
}

// N5storm5punch8internal7inEvent9DiscoveryE, virtual slot 1
__int64 __fastcall sub_6075C0(__int64 a1)
{
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18FB930) + 2);
  sub_620B60(a1 + 32, *(_QWORD **)(a1 + 40));
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch8internal7inEvent9DiscoveryE, virtual slot 5
__int64 __fastcall sub_6076E0(__int64 a1)
{
  __int64 v2; // x0
  __int64 *v3; // x9
  __int64 v4; // x20

  v2 = sub_56C9F0(56, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = ((__int64*)goff_18FB930);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v4 = v2;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 2;
  sub_620660(v2 + 32, a1 + 32);
  return v4;
}

// N5storm5punch8internal7inEvent14CancelCommandsE, virtual slot 5
__int64 __fastcall sub_607AA0(__int64 a1)
{
  __int64 v2; // x0
  __int64 *v3; // x9
  __int64 v4; // x21

  v2 = sub_56C9F0(40, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v3 = ((__int64*)goff_18FBA30);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 2;
  v4 = v2;
  *(_QWORD *)(v2 + 32) = (*(__int64 (__fastcall **)(_QWORD, void *, int))(**(_QWORD **)(a1 + 32) + 40LL))(
                           *(_QWORD *)(a1 + 32),
                           &unk_1326E41,
                           0);
  return v4;
}

// N5storm5punch8internal7inEvent14AddPortMappingE, virtual slot 1
__int64 __fastcall sub_607D50(_QWORD *a1)
{
  __int64 v2; // x0

  *a1 = ((__int64 *)((__int64*)goff_18FBA38) + 2);
  sub_5F7870(a1 + 5);
  v2 = a1[4];
  a1[4] = 0;
  if ( v2 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch8internal7inEvent17DeletePortMappingE, virtual slot 1
__int64 __fastcall sub_608170(_QWORD *a1)
{
  __int64 v2; // x0

  *a1 = ((__int64 *)((__int64*)goff_18FBA40) + 2);
  sub_5F7870(a1 + 5);
  v2 = a1[4];
  a1[4] = 0;
  if ( v2 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch8internal7inEvent18GetSpecificMappingE, virtual slot 1
__int64 __fastcall sub_608590(_QWORD *a1)
{
  __int64 v2; // x0

  *a1 = ((__int64 *)((__int64*)goff_18FBA48) + 2);
  sub_5F7870(a1 + 5);
  v2 = a1[4];
  a1[4] = 0;
  if ( v2 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch8internal7inEvent13GetAllMappingE, virtual slot 1
__int64 __fastcall sub_6089B0(_QWORD *a1)
{
  __int64 v2; // x0

  *a1 = ((__int64 *)goff_18FBA50 + 2);
  sub_5F7870(a1 + 5);
  v2 = a1[4];
  a1[4] = 0;
  if ( v2 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch8internal7inEvent12RefreshEntryE, virtual slot 1
__int64 __fastcall sub_608DD0(__int64 a1)
{
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18FBB08) + 2);
  sub_5F7870(a1 + 280);
  if ( (*(_BYTE *)(a1 + 248) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 264), &unk_1326E41, 0);
  if ( (*(_BYTE *)(a1 + 216) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 232), &unk_1326E41, 0);
  sub_578410(a1 + 32);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch8internal7inEvent12RefreshEntryE, virtual slot 5
__int64 __fastcall sub_608F30(__int64 a1)
{
  __int64 v2; // x0
  __int64 *v3; // x9
  __int64 v4; // x20

  v2 = sub_56C9F0(728, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = ((__int64*)goff_18FBB08);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v4 = v2;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 2;
  sub_620DC0(v2 + 32, a1 + 32);
  std__string__basic_string((char *)(v4 + 280), (const char *)(a1 + 280));
  std__string__basic_string((char *)(v4 + 304), (const char *)(a1 + 304));
  std__string__basic_string((char *)(v4 + 328), (const char *)(a1 + 328));
  std__string__basic_string((char *)(v4 + 352), (const char *)(a1 + 352));
  sub_578210(v4 + 376, a1 + 376);
  sub_578210(v4 + 552, a1 + 552);
  return v4;
}

// N5storm5punch26UpnpThreadCommandDiscoveryE, virtual slot 0
__int64 __fastcall sub_609200(__int64 a1)
{
  *(_QWORD *)a1 = ((__int64 *)goff_18FB938 + 2);
  sub_620B60(a1 + 56, *(_QWORD **)(a1 + 64));
  return sub_620400(a1 + 32, *(_QWORD **)(a1 + 40));
}

// N5storm5punch26UpnpThreadCommandDiscoveryE, virtual slot 1
void __fastcall sub_609240(_QWORD **a1)
{
  *a1 = ((__int64 *)goff_18FB938 + 2);
  sub_620B60((__int64)(a1 + 7), a1[8]);
  sub_620400((__int64)(a1 + 4), a1[5]);
  _ZdlPv(a1);
}

// N5storm5punch20UpnpThreadCommandAddE, virtual slot 0
__int64 __fastcall sub_6093D0(__int64 a1)
{
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18FB960) + 2);
  if ( (*(_BYTE *)(a1 + 920) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 936), &unk_1326E41, 0);
  if ( (*(_BYTE *)(a1 + 888) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 904), &unk_1326E41, 0);
  sub_578410(a1 + 704);
  sub_5F7870(a1 + 240);
  if ( (*(_BYTE *)(a1 + 216) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 232), &unk_1326E41, 0);
  return sub_578410(a1 + 32);
}

// N5storm5punch28UpnpThreadCommandGetSpecificE, virtual slot 1
void __fastcall sub_6099B0(_QWORD *a1)
{
  *a1 = ((__int64 *)goff_18FB900 + 2);
  sub_5F7870(a1 + 35);
  if ( (a1[31] & 1) != 0 )
    sub_56CA00(a1[33], &unk_1326E41, 0);
  if ( (a1[27] & 1) != 0 )
    sub_56CA00(a1[29], &unk_1326E41, 0);
  sub_578410(a1 + 4);
  _ZdlPv(a1);
}

// N5storm5punch29UpnpThreadCommandRefreshEntryE, virtual slot 0
__int64 __fastcall sub_609ED0(__int64 a1)
{
  *(_QWORD *)a1 = ((__int64 *)goff_18FB968 + 2);
  if ( (*(_BYTE *)(a1 + 712) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 728), &unk_1326E41, 0);
  if ( (*(_BYTE *)(a1 + 680) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 696), &unk_1326E41, 0);
  sub_578410(a1 + 496);
  return sub_5F7870(a1 + 32);
}

// N5storm5punch29UpnpThreadCommandRefreshEntryE, virtual slot 1
void __fastcall sub_609F40(_QWORD *a1)
{
  *a1 = ((__int64 *)goff_18FB968 + 2);
  if ( (a1[89] & 1) != 0 )
    sub_56CA00(a1[91], &unk_1326E41, 0);
  if ( (a1[85] & 1) != 0 )
    sub_56CA00(a1[87], &unk_1326E41, 0);
  sub_578410(a1 + 62);
  sub_5F7870(a1 + 4);
  _ZdlPv(a1);
}

// N5storm5punch6Client18SendRawPacketEventE, virtual slot 0
__int64 __fastcall sub_60A3B0(_QWORD *a1)
{
  __int64 v2; // x0

  *a1 = ((char *)((__int64*)goff_18FAFC8) + 16);
  v2 = a1[27];
  if ( v2 != 0 )
  {
    a1[28] = v2;
    sub_56CA00(v2, &unk_1326E41, 0);
  }
  return sub_578410(a1 + 4);
}

// N5storm5punch6Client18SendRawPacketEventE, virtual slot 1
__int64 __fastcall sub_60A400(_QWORD *a1)
{
  __int64 v2; // x0

  *a1 = ((char *)((__int64*)goff_18FAFC8) + 16);
  v2 = a1[27];
  if ( v2 != 0 )
  {
    a1[28] = v2;
    sub_56CA00(v2, &unk_1326E41, 0);
  }
  sub_578410(a1 + 4);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch9Traversal22EndpointConnectedEventE, virtual slot 1
__int64 __fastcall sub_60A940(__int64 a1)
{
  sub_60A870();
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch13detectNatType15EventInitializeE, virtual slot 1
__int64 __fastcall sub_60C9F0(_QWORD *a1)
{
  char *v2; // x20
  unsigned __int64 *v3; // x8
  unsigned __int64 v4; // x9

  *a1 = ((__int64 *)((__int64*)goff_18FB0E0) + 2);
  sub_578410(a1 + 31);
  sub_578410(a1 + 9);
  v2 = (char *)a1[5];
  if ( v2 != nullptr )
  {
    v3 = (unsigned __int64 *)((char *)v2 + 8);
    v4 = __atomic_fetch_sub(v3, 1, 5);
    if ( v4 == 0 )
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 16LL))(v2);
      std____shared_weak_count____release_weak(v2);
    }
  }
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch13detectNatType24EventReceiveCommandReplyE, virtual slot 1
__int64 __fastcall sub_60E1B0(_QWORD *a1)
{
  *a1 = ((__int64 *)((__int64*)goff_18FB108) + 2);
  sub_578410(a1 + 4);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch13detectNatType24EventReceiveCommandReplyE, virtual slot 5
_QWORD *__fastcall sub_60E2C0(__int64 a1)
{
  __int64 v2; // x0
  __int64 *v3; // x9
  _QWORD *v4; // x20

  v2 = sub_56C9F0(208, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = ((__int64*)goff_18FB108);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v4 = (_QWORD *)v2;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 2;
  sub_578210(v2 + 32, a1 + 32);
  *v4 = ((__int64 *)((__int64*)goff_18FB120) + 2);
  return v4;
}

// N5storm5punch13detectNatType23EventBaseReceiveCommandE, virtual slot 1
__int64 __fastcall sub_60E4F0(_QWORD *a1)
{
  *a1 = ((__int64 *)((__int64*)goff_18FB108) + 2);
  sub_578410(a1 + 4);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch13detectNatType23EventBaseReceiveCommandE, virtual slot 5
__int64 __fastcall sub_60E600(__int64 a1)
{
  __int64 v2; // x0
  __int64 *v3; // x9
  __int64 v4; // x20

  v2 = sub_56C9F0(208, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = ((__int64*)goff_18FB108);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v4 = v2;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 2;
  sub_578210(v2 + 32, a1 + 32);
  return v4;
}

// N5storm5punch13detectNatType32EventReceiveCommandReplyNextPortE, virtual slot 1
__int64 __fastcall sub_60E860(_QWORD *a1)
{
  *a1 = ((__int64 *)((__int64*)goff_18FB108) + 2);
  sub_578410(a1 + 4);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch13detectNatType32EventReceiveCommandReplyNextPortE, virtual slot 5
_QWORD *__fastcall sub_60E970(__int64 a1)
{
  __int64 v2; // x0
  __int64 *v3; // x9
  _QWORD *v4; // x20

  v2 = sub_56C9F0(208, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = ((__int64*)goff_18FB108);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v4 = (_QWORD *)v2;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 2;
  sub_578210(v2 + 32, a1 + 32);
  *v4 = ((__int64 *)((__int64*)goff_18FB118) + 2);
  return v4;
}

// N5storm5punch13detectNatType34EventReceiveCommandReplyNextServerE, virtual slot 1
__int64 __fastcall sub_60EBB0(_QWORD *a1)
{
  *a1 = ((__int64 *)((__int64*)goff_18FB108) + 2);
  sub_578410(a1 + 4);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch13detectNatType34EventReceiveCommandReplyNextServerE, virtual slot 5
_QWORD *__fastcall sub_60ECC0(__int64 a1)
{
  __int64 v2; // x0
  __int64 *v3; // x9
  _QWORD *v4; // x20

  v2 = sub_56C9F0(208, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = ((__int64*)goff_18FB108);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v4 = (_QWORD *)v2;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 2;
  sub_578210(v2 + 32, a1 + 32);
  *v4 = ((__int64 *)((__int64*)goff_18FB110) + 2);
  return v4;
}

// N5storm5punch35ProductPunchClientImplMainInitEventE, virtual slot 5
__int64 __fastcall sub_60F0E0(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x9
  __int64 *v4; // x10
  __int64 v5; // x8
  __int64 v6; // x20
  __int64 v7; // x8
  __int64 v8; // x9
  __int64 *v9; // x10

  v2 = sub_56C9F0(72, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = goff_18F2D38;
  v4 = ((__int64*)goff_18FB1D8);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 16;
  *(_QWORD *)(v2 + 24) = v5;
  v6 = v2;
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)v2 = v4 + 2;
  v9 = ((__int64 *)((__int64*)goff_18F6C48) + 2);
  *(_QWORD *)(v2 + 32) = v7;
  *(_QWORD *)(v2 + 40) = v8;
  *(_QWORD *)(v2 + 48) = v9;
  sub_594400(v2 + 56, a1 + 56);
  *(_QWORD *)(v6 + 48) = ((__int64 *)((__int64*)goff_18FB1E0) + 2);
  return v6;
}

// N5storm5punch42ProductPunchClientImplNetworkStartupParamsE, virtual slot 0
__int64 __fastcall sub_60FBB0(__int64 result)
{
  __int64 *v1; // x9

  v1 = ((__int64 *)((__int64*)goff_18FB1F0) + 2);
  *(_QWORD *)result = ((__int64 *)goff_18FB228 + 2);
  *(_QWORD *)(result + 8) = v1;
  if ( (*(_BYTE *)(result + 32) & 1) != 0 )
    return sub_56CA00(*(_QWORD *)(result + 48), &unk_1326E41, 0);
  return result;
}

// N5storm5punch7inEvent24RegisterMpePacketHandlerE, virtual slot 0
void __fastcall sub_610F10(_QWORD *result)
{
  __int64 v1; // x8

  *result = ((__int64 *)((__int64*)goff_18FB2F0) + 2);
  v1 = result[5];
  if ( v1 != 0 )
  {
    result[6] = v1;
    { sub_56CA00(v1, &unk_1326E41, 0); return; }
  }
  return;
}

// N5storm5punch7inEvent24RegisterMpePacketHandlerE, virtual slot 1
__int64 __fastcall sub_610F50(_QWORD *a1)
{
  __int64 v2; // x0

  *a1 = ((__int64 *)((__int64*)goff_18FB2F0) + 2);
  v2 = a1[5];
  if ( v2 != 0 )
  {
    a1[6] = v2;
    sub_56CA00(v2, &unk_1326E41, 0);
  }
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch7inEvent13ReceivePacketE, virtual slot 0
__int64 __fastcall sub_611AB0(_QWORD *a1)
{
  __int64 v2; // x0

  *a1 = ((__int64 *)((__int64*)goff_18FB2F8) + 2);
  v2 = a1[27];
  if ( v2 != 0 )
  {
    a1[28] = v2;
    sub_56CA00(v2, &unk_1326E41, 0);
  }
  return sub_578410(a1 + 5);
}

// N5storm5punch7inEvent13ReceivePacketE, virtual slot 1
__int64 __fastcall sub_611B00(_QWORD *a1)
{
  __int64 v2; // x0

  *a1 = ((__int64 *)((__int64*)goff_18FB2F8) + 2);
  v2 = a1[27];
  if ( v2 != 0 )
  {
    a1[28] = v2;
    sub_56CA00(v2, &unk_1326E41, 0);
  }
  sub_578410(a1 + 5);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch7inEvent23EnableDetectModuleEventE, virtual slot 0
__int64 __fastcall sub_612A70(__int64 result)
{
  __int64 v1; // x19

  *(_QWORD *)result = ((__int64 *)((__int64*)goff_18FC1D0) + 2);
  v1 = result;
  if ( (*(_BYTE *)(result + 64) & 1) != 0 )
    result = sub_56CA00(*(_QWORD *)(result + 80), &unk_1326E41, 0);
  if ( (*(_BYTE *)(v1 + 40) & 1) != 0 )
    return sub_56CA00(*(_QWORD *)(v1 + 56), &unk_1326E41, 0);
  return result;
}

// N5storm5punch7inEvent23EnableDetectModuleEventE, virtual slot 1
__int64 __fastcall sub_612AE0(__int64 a1)
{
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18FC1D0) + 2);
  if ( (*(_BYTE *)(a1 + 64) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 80), &unk_1326E41, 0);
  if ( (*(_BYTE *)(a1 + 40) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 56), &unk_1326E41, 0);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch7inEvent18RegisterMpeAddressE, virtual slot 1
__int64 __fastcall sub_613A80(_QWORD *a1)
{
  *a1 = ((__int64 *)((__int64*)goff_18FB310) + 2);
  sub_578410(a1 + 4);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch7inEvent18RegisterMpeAddressE, virtual slot 5
__int64 __fastcall sub_613B90(__int64 a1)
{
  __int64 v2; // x0
  __int64 *v3; // x9
  __int64 v4; // x20

  v2 = sub_56C9F0(216, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = ((__int64*)goff_18FB310);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v4 = v2;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 2;
  sub_578210(v2 + 32, a1 + 32);
  *(_DWORD *)(v4 + 208) = *(_DWORD *)(a1 + 208);
  return v4;
}

// N5storm5punch7inEvent20UnregisterMpeAddressE, virtual slot 1
__int64 __fastcall sub_614020(_QWORD *a1)
{
  *a1 = ((__int64 *)((__int64*)goff_18FB318) + 2);
  sub_578410(a1 + 4);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch7inEvent20UnregisterMpeAddressE, virtual slot 5
__int64 __fastcall sub_614130(__int64 a1)
{
  __int64 v2; // x0
  __int64 *v3; // x9
  __int64 v4; // x20

  v2 = sub_56C9F0(216, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = ((__int64*)goff_18FB318);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v4 = v2;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 2;
  sub_578210(v2 + 32, a1 + 32);
  *(_DWORD *)(v4 + 208) = *(_DWORD *)(a1 + 208);
  return v4;
}

// N5storm5punch4Upnp16PortMappingEntryE, virtual slot 1
void __fastcall sub_616760(_QWORD *a1)
{
  *a1 = ((__int64 *)((__int64*)goff_18FB348) + 2);
  if ( (a1[46] & 1) != 0 )
    sub_56CA00(a1[48], &unk_1326E41, 0);
  sub_578410(a1 + 23);
  sub_578410(a1 + 1);
  _ZdlPv(a1);
}

// N5storm5punch7inEvent18UpnpAddPortMappingE, virtual slot 5
__int64 __fastcall sub_616FD0(__int64 a1)
{
  __int64 result; // x0
  int v3; // w8

  result = sub_56C9F0(40, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(result + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = ((__int64 *)((__int64*)goff_18FB360) + 2);
  v3 = *(_DWORD *)(a1 + 32);
  *(_BYTE *)(result + 36) = *(_BYTE *)(a1 + 36);
  *(_DWORD *)(result + 32) = v3;
  return result;
}

// N5storm5punch14traversalLogin15EventInitializeE, virtual slot 1
__int64 __fastcall sub_6194D0(_QWORD *a1)
{
  *a1 = ((char *)((__int64*)goff_18FB550) + 16);
  sub_578410(a1 + 7);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch14traversalLogin15EventInitializeE, virtual slot 5
__int64 __fastcall sub_6195E0(__int64 a1)
{
  __int64 v2; // x0
  int v3; // w8
  __int64 v4; // x20
  __int64 v5; // x9

  v2 = sub_56C9F0(248, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = ((char *)((__int64*)goff_18FB550) + 16);
  v3 = *(_DWORD *)(a1 + 32);
  *(_WORD *)(v2 + 36) = *(_WORD *)(a1 + 36);
  *(_DWORD *)(v2 + 32) = v3;
  *(_QWORD *)(v2 + 40) = *(_QWORD *)(a1 + 40);
  *(_BYTE *)(v2 + 48) = *(_BYTE *)(a1 + 48);
  *(_BYTE *)(v2 + 50) = *(_BYTE *)(a1 + 50);
  v4 = v2;
  *(_BYTE *)(v2 + 49) = *(_BYTE *)(a1 + 49);
  sub_578210(v2 + 56, a1 + 56);
  v5 = *(_QWORD *)(a1 + 240);
  *(_QWORD *)(v4 + 232) = *(_QWORD *)(a1 + 232);
  *(_QWORD *)(v4 + 240) = v5;
  return v4;
}

// N5storm5punch14traversalLogin28EventReceiveChallengeRequestE, virtual slot 1
__int64 __fastcall sub_61AEF0(_QWORD *a1)
{
  *a1 = ((char *)((__int64*)goff_18FB588) + 16);
  sub_578410(a1 + 7);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch14traversalLogin28EventReceiveChallengeRequestE, virtual slot 5
__int64 __fastcall sub_61B000(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x9
  __int64 v4; // x20

  v2 = sub_56C9F0(232, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v3 = ((__int64*)goff_18FB588);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 16;
  *(_QWORD *)(v2 + 32) = *(_QWORD *)(a1 + 32);
  *(_BYTE *)(v2 + 40) = *(_BYTE *)(a1 + 40);
  *(_BYTE *)(v2 + 42) = *(_BYTE *)(a1 + 42);
  *(_BYTE *)(v2 + 41) = *(_BYTE *)(a1 + 41);
  v4 = v2;
  *(_DWORD *)(v2 + 48) = *(_DWORD *)(a1 + 48);
  sub_578210(v2 + 56, a1 + 56);
  return v4;
}

// N5storm5punch14traversalProbe15EventInitializeE, virtual slot 5
__int64 __fastcall sub_61D1B0(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x8
  __int64 v4; // x9
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v7; // x9

  result = sub_56C9F0(96, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  v3 = goff_18FB808;
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v3 + 2;
  *(_QWORD *)(result + 24) = v4;
  *(_QWORD *)(result + 32) = *(_QWORD *)(a1 + 32);
  *(_BYTE *)(result + 40) = *(_BYTE *)(a1 + 40);
  *(_BYTE *)(result + 42) = *(_BYTE *)(a1 + 42);
  *(_BYTE *)(result + 41) = *(_BYTE *)(a1 + 41);
  v5 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(result + 56) = *(_DWORD *)(a1 + 56);
  *(_QWORD *)(result + 48) = v5;
  *(_QWORD *)(result + 64) = *(_QWORD *)(a1 + 64);
  v6 = *(_QWORD *)(a1 + 72);
  v7 = *(_QWORD *)(a1 + 80);
  *(_BYTE *)(result + 88) = *(_BYTE *)(a1 + 88);
  *(_QWORD *)(result + 72) = v6;
  *(_QWORD *)(result + 80) = v7;
  return result;
}

// N5storm5punch14traversalProbe19EventExtendLifetimeE, virtual slot 5
__int64 __fastcall sub_61DAD0(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x8

  result = sub_56C9F0(64, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(result + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = ((char *)goff_18FB7F8 + 16);
  v3 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(result + 40) = *(_DWORD *)(a1 + 40);
  *(_QWORD *)(result + 32) = v3;
  *(_QWORD *)(result + 48) = *(_QWORD *)(a1 + 48);
  LODWORD(v3) = *(_DWORD *)(a1 + 56);
  *(_BYTE *)(result + 60) = *(_BYTE *)(a1 + 60);
  *(_DWORD *)(result + 56) = v3;
  return result;
}

// N5storm5punch14traversalProbe24EventCommandProbeRequestE, virtual slot 1
__int64 __fastcall sub_61E4B0(_QWORD *a1)
{
  *a1 = ((char *)((__int64*)goff_18FB6E0) + 16);
  sub_578410(a1 + 4);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch14traversalProbe24EventCommandProbeRequestE, virtual slot 5
__int64 __fastcall sub_61E5C0(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x9
  __int64 v4; // x20

  v2 = sub_56C9F0(208, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = ((__int64*)goff_18FB6E0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v4 = v2;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 16;
  sub_578210(v2 + 32, a1 + 32);
  return v4;
}

// N5storm5punch14traversalProbe22EventCommandProbeReplyE, virtual slot 1
__int64 __fastcall sub_61E7F0(_QWORD *a1)
{
  *a1 = ((char *)((__int64*)goff_18FB6E0) + 16);
  sub_578410(a1 + 4);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch14traversalProbe22EventCommandProbeReplyE, virtual slot 5
_QWORD *__fastcall sub_61E900(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x9
  _QWORD *v4; // x20

  v2 = sub_56C9F0(216, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = ((__int64*)goff_18FB6E0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v4 = (_QWORD *)v2;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 16;
  sub_578210(v2 + 32, a1 + 32);
  *v4 = ((char *)goff_18FB6F0 + 16);
  v4[26] = *(_QWORD *)(a1 + 208);
  return v4;
}

// N5storm5punch14traversalProbe35EventCommandProbeReplyDifferentPortE, virtual slot 1
__int64 __fastcall sub_61EBA0(_QWORD *a1)
{
  *a1 = ((char *)((__int64*)goff_18FB6E0) + 16);
  sub_578410(a1 + 4);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch14traversalProbe35EventCommandProbeReplyDifferentPortE, virtual slot 5
_QWORD *__fastcall sub_61ECB0(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x9
  _QWORD *v4; // x20
  __int64 v5; // x9

  v2 = sub_56C9F0(216, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = ((__int64*)goff_18FB6E0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v4 = (_QWORD *)v2;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 16;
  sub_578210(v2 + 32, a1 + 32);
  v5 = ((__int64*)goff_18FB6E8);
  *v4 = ((char *)goff_18FB6F0 + 16);
  v4[26] = *(_QWORD *)(a1 + 208);
  *v4 = v5 + 16;
  return v4;
}

// N5storm5punch22UpnpThreadStartupParamE, virtual slot 1
void __fastcall sub_620F70(_QWORD *a1)
{
  *a1 = ((__int64 *)((__int64*)goff_18FBAF8) + 2);
  if ( (a1[1] & 1) != 0 )
    sub_56CA00(a1[3], &unk_1326E41, 0);
  _ZdlPv(a1);
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

__int64 __fastcall sub_62CA70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, unsigned int a7)
{
  return sub_62C760(a1, a2, a3, a4, a5, a6, "1.1", a7);
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

