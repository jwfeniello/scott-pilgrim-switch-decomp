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
__int64 Recovered_ResultTextCopy();
__int64 _ZdlPv();
extern __attribute__((visibility("hidden"))) int dword_1915530;
extern __attribute__((visibility("hidden"))) int dword_1915534;
extern char goff_17C1000[];
extern char goff_18EDE08[];
extern char goff_18EE7F0[];
extern char goff_18F13E8[];
extern char goff_18F1DB0[];
extern char goff_18F2D38[];
extern char goff_18F3040[];
extern char goff_18F6C48[];
extern char goff_18F7A70[];
extern char goff_18F87A8[];
extern char goff_18F87B0[];
extern char goff_18F88D8[];
extern char goff_18F8B68[];
extern char goff_18F9200[];
extern char goff_18F9238[];
extern char goff_18F9250[];
extern char goff_18F9258[];
extern char goff_18F92A0[];
extern char goff_18F92A8[];
extern char goff_18F92B0[];
extern char goff_18F92B8[];
extern char goff_18F92C0[];
extern char goff_18F92C8[];
extern char goff_18F92E0[];
extern char goff_18F92F0[];
extern char goff_18F92F8[];
extern char goff_18F9348[];
extern char goff_18F9358[];
extern char goff_18F94A0[];
extern char goff_18F94B0[];
extern char goff_18F94B8[];
extern char goff_18F94C0[];
extern char goff_18F94E0[];
extern char goff_18F9508[];
extern char goff_18F9510[];
extern char goff_18F9538[];
extern char goff_18F95B0[];
extern char goff_18F95B8[];
extern char goff_18F9680[];
extern char goff_18F96A0[];
extern char goff_18F96A8[];
extern char goff_18F96B0[];
extern char goff_18F96C0[];
extern char goff_18F96C8[];
extern char goff_18F9800[];
extern char goff_18F9808[];
extern char goff_18F9860[];
extern char goff_18F98F0[];
extern char goff_18F9BF8[];
extern char goff_18F9C08[];
extern char goff_18F9D48[];
extern char goff_18F9DD0[];
extern char goff_18F9FE8[];
extern char goff_18FA008[];
extern char goff_18FA068[];
extern char goff_18FA080[];
extern char goff_18FA088[];
extern char goff_18FA5F8[];
extern char goff_18FA678[];
extern char goff_18FAB60[];
extern char goff_18FAB68[];
extern char goff_18FAB70[];
extern char goff_18FADA8[];
extern char goff_18FADC0[];
extern char goff_18FB108[];
extern char goff_18FB110[];
extern char goff_18FB118[];
extern char goff_18FB120[];
extern char goff_18FB1D8[];
extern char goff_18FB1E0[];
extern char goff_18FB2F0[];
extern char goff_18FB2F8[];
extern char goff_18FB310[];
extern char goff_18FB318[];
extern char goff_18FB340[];
extern char goff_18FB348[];
extern char goff_18FB360[];
extern char goff_18FB588[];
extern char goff_18FB6E0[];
extern char goff_18FB6E8[];
extern char goff_18FB6F0[];
extern char goff_18FB7E8[];
extern char goff_18FB7F8[];
extern char goff_18FB808[];
extern char goff_18FB850[];
extern char goff_18FB858[];
extern char goff_18FB8A0[];
extern char goff_18FB8A8[];
extern char goff_18FB8B0[];
extern char goff_18FB8B8[];
extern char goff_18FB930[];
extern char goff_18FB960[];
extern char goff_18FBA20[];
extern char goff_18FBA28[];
extern char goff_18FBA38[];
extern char goff_18FBA40[];
extern char goff_18FBA48[];
extern char goff_18FBAF8[];
extern char goff_18FBB00[];
extern char goff_18FBB08[];
extern char goff_18FC1D0[];
extern char goff_18FC9B8[];
extern char goff_18FC9C0[];
extern char goff_18FC9E8[];
extern __attribute__((visibility("hidden"))) char hoff_17C1000[];
__int64 nn__mem__StandardAllocator__Allocate();
__int64 nn__os__GetSystemTick();
__attribute__((visibility("hidden"))) __int64 nullsub_1096();
__attribute__((visibility("hidden"))) __int64 nullsub_1576();
__attribute__((visibility("hidden"))) __int64 nullsub_1627();
__attribute__((visibility("hidden"))) __int64 nullsub_2();
__int64 pthread_mutex_destroy();
extern __attribute__((visibility("hidden"))) __int64 qword_1909240;
extern __attribute__((visibility("hidden"))) __int64 qword_19148A0;
extern __attribute__((visibility("hidden"))) __int64 qword_1915428;
extern __attribute__((visibility("hidden"))) __int64 qword_19154A8;
extern __attribute__((visibility("hidden"))) __int64 qword_1915508;
extern __attribute__((visibility("hidden"))) __int64 qword_1915B80;
extern __attribute__((visibility("hidden"))) __int64 qword_1915B90;
extern __attribute__((visibility("hidden"))) __int64 qword_1916FA8;
extern __attribute__((visibility("hidden"))) __int64 qword_191A580;
__int64 std__condition_variable___condition_variable();
__int64 std__mutex___mutex();
__int64 std__recursive_mutex___recursive_mutex();
__int64 std__recursive_mutex__lock();
__int64 std__recursive_mutex__unlock();
__int64 std__shared_timed_mutex__lock_shared();
__int64 std__shared_timed_mutex__unlock_shared();
__int64 std__string__basic_string();
__attribute__((visibility("hidden"))) __int64 sub_250();
__attribute__((visibility("hidden"))) __int64 sub_2B89E0();
__attribute__((visibility("hidden"))) __int64 sub_36CB0();
__attribute__((visibility("hidden"))) __int64 sub_36EA0();
__attribute__((visibility("hidden"))) __int64 sub_37030();
__attribute__((visibility("hidden"))) __int64 sub_370A0();
__attribute__((visibility("hidden"))) __int64 sub_377F0();
__attribute__((visibility("hidden"))) __int64 sub_37B00();
__attribute__((visibility("hidden"))) __int64 sub_47C170();
__attribute__((visibility("hidden"))) __int64 sub_4CA100();
__attribute__((visibility("hidden"))) __int64 sub_4EB320();
__attribute__((visibility("hidden"))) __int64 sub_4EB340();
__attribute__((visibility("hidden"))) __int64 sub_4EB3D0();
__attribute__((visibility("hidden"))) __int64 sub_4EC170();
__attribute__((visibility("hidden"))) __int64 sub_4ED030();
__attribute__((visibility("hidden"))) __int64 sub_4ED6D0();
__attribute__((visibility("hidden"))) __int64 sub_4EDA00();
__attribute__((visibility("hidden"))) __int64 sub_4EDC80();
__attribute__((visibility("hidden"))) __int64 sub_4EE1B0();
__attribute__((visibility("hidden"))) __int64 sub_4EE1E0();
__attribute__((visibility("hidden"))) __int64 sub_4EE210();
__attribute__((visibility("hidden"))) __int64 sub_4EE230();
__attribute__((visibility("hidden"))) __int64 sub_4EE290();
__attribute__((visibility("hidden"))) __int64 sub_4EE2A0();
__attribute__((visibility("hidden"))) __int64 sub_4EE340();
__attribute__((visibility("hidden"))) __int64 sub_4EEC30();
__attribute__((visibility("hidden"))) __int64 sub_4EF420();
__attribute__((visibility("hidden"))) __int64 sub_4EF440();
__attribute__((visibility("hidden"))) __int64 sub_4EF450();
__attribute__((visibility("hidden"))) __int64 sub_4EF460();
__attribute__((visibility("hidden"))) __int64 sub_4EF9A0();
__attribute__((visibility("hidden"))) __int64 sub_4EFA90();
__attribute__((visibility("hidden"))) __int64 sub_4F0040();
__attribute__((visibility("hidden"))) __int64 sub_4F02D0();
__attribute__((visibility("hidden"))) __int64 sub_4F03B0();
__attribute__((visibility("hidden"))) __int64 sub_4F2190();
__attribute__((visibility("hidden"))) __int64 sub_4F2360();
__attribute__((visibility("hidden"))) __int64 sub_4F2FA0();
__attribute__((visibility("hidden"))) __int64 sub_4F61C0();
__attribute__((visibility("hidden"))) __int64 sub_4FAFD0();
__attribute__((visibility("hidden"))) __int64 sub_4FC1E0();
__attribute__((visibility("hidden"))) __int64 sub_4FC1F0();
__attribute__((visibility("hidden"))) __int64 sub_502D30();
__attribute__((visibility("hidden"))) __int64 sub_504040();
__attribute__((visibility("hidden"))) __int64 sub_504140();
__attribute__((visibility("hidden"))) __int64 sub_504170();
__attribute__((visibility("hidden"))) __int64 sub_505D60();
__attribute__((visibility("hidden"))) __int64 sub_507E40();
__attribute__((visibility("hidden"))) __int64 sub_508970();
__attribute__((visibility("hidden"))) __int64 sub_5089B0();
__attribute__((visibility("hidden"))) __int64 sub_5089F0();
__attribute__((visibility("hidden"))) __int64 sub_5098B0();
__attribute__((visibility("hidden"))) __int64 sub_50EA00();
__attribute__((visibility("hidden"))) __int64 sub_50EB70();
__attribute__((visibility("hidden"))) __int64 sub_50EF00();
__attribute__((visibility("hidden"))) __int64 sub_50F850();
__attribute__((visibility("hidden"))) __int64 sub_510D80();
__attribute__((visibility("hidden"))) __int64 sub_510F10();
__attribute__((visibility("hidden"))) __int64 sub_511790();
__attribute__((visibility("hidden"))) __int64 sub_511800();
__attribute__((visibility("hidden"))) __int64 sub_515C10();
__attribute__((visibility("hidden"))) __int64 sub_51A630();
__attribute__((visibility("hidden"))) __int64 sub_51A700();
__attribute__((visibility("hidden"))) __int64 sub_51D650();
__attribute__((visibility("hidden"))) __int64 sub_51D670();
__attribute__((visibility("hidden"))) __int64 sub_51E060();
__attribute__((visibility("hidden"))) __int64 sub_51F450();
__attribute__((visibility("hidden"))) __int64 sub_51F7E0();
__attribute__((visibility("hidden"))) __int64 sub_520530();
__attribute__((visibility("hidden"))) __int64 sub_520840();
__attribute__((visibility("hidden"))) __int64 sub_5208B0();
__attribute__((visibility("hidden"))) __int64 sub_52B270();
__attribute__((visibility("hidden"))) __int64 sub_530A10();
__attribute__((visibility("hidden"))) __int64 sub_530AD0();
__attribute__((visibility("hidden"))) __int64 sub_539810();
__attribute__((visibility("hidden"))) __int64 sub_53CF40();
__attribute__((visibility("hidden"))) __int64 sub_5436F0();
__attribute__((visibility("hidden"))) __int64 sub_543EC0();
__attribute__((visibility("hidden"))) __int64 sub_548360();
__attribute__((visibility("hidden"))) __int64 sub_5483C0();
__attribute__((visibility("hidden"))) __int64 sub_5484D0();
__attribute__((visibility("hidden"))) __int64 sub_5490B0();
__attribute__((visibility("hidden"))) __int64 sub_54C810();
__attribute__((visibility("hidden"))) __int64 sub_54C820();
__attribute__((visibility("hidden"))) __int64 sub_54DD50();
__attribute__((visibility("hidden"))) __int64 sub_554100();
__attribute__((visibility("hidden"))) __int64 sub_554110();
__attribute__((visibility("hidden"))) __int64 sub_561EB0();
__attribute__((visibility("hidden"))) __int64 sub_56C9F0();
__attribute__((visibility("hidden"))) __int64 sub_56CA00();
__attribute__((visibility("hidden"))) __int64 sub_56F3C0();
__attribute__((visibility("hidden"))) __int64 sub_56F400();
__attribute__((visibility("hidden"))) __int64 sub_56F490();
__attribute__((visibility("hidden"))) __int64 sub_5771D0();
__attribute__((visibility("hidden"))) __int64 sub_5771E0();
__attribute__((visibility("hidden"))) __int64 sub_577290();
__attribute__((visibility("hidden"))) __int64 sub_578210();
__attribute__((visibility("hidden"))) __int64 sub_578410();
__attribute__((visibility("hidden"))) __int64 sub_579100();
__attribute__((visibility("hidden"))) __int64 sub_579CC0();
__attribute__((visibility("hidden"))) __int64 sub_57D200();
__attribute__((visibility("hidden"))) __int64 sub_57EDC0();
__attribute__((visibility("hidden"))) __int64 sub_583700();
__attribute__((visibility("hidden"))) __int64 sub_5842F0();
__attribute__((visibility("hidden"))) __int64 sub_5885D0();
__attribute__((visibility("hidden"))) __int64 sub_588D80();
__attribute__((visibility("hidden"))) __int64 sub_588DA0();
__attribute__((visibility("hidden"))) __int64 sub_58A960();
__attribute__((visibility("hidden"))) __int64 sub_58AEC0();
__attribute__((visibility("hidden"))) __int64 sub_58C2A0();
__attribute__((visibility("hidden"))) __int64 sub_58EB60();
__attribute__((visibility("hidden"))) __int64 sub_58EBE0();
__attribute__((visibility("hidden"))) __int64 sub_593B50();
__attribute__((visibility("hidden"))) __int64 sub_594400();
__attribute__((visibility("hidden"))) __int64 sub_595240();
__attribute__((visibility("hidden"))) __int64 sub_5B87B0();
__attribute__((visibility("hidden"))) __int64 sub_5B8CF0();
__attribute__((visibility("hidden"))) __int64 sub_5C78D0();
__attribute__((visibility("hidden"))) __int64 sub_5CE340();
__attribute__((visibility("hidden"))) __int64 sub_5D0AC0();
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
extern __attribute__((visibility("hidden"))) char unk_1326E41;
extern __attribute__((visibility("hidden"))) char unk_191A588;

__int64 __fastcall sub_2B7A60(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // x0
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x0

  v4 = a1[11];
  if ( v4 != 0 )
  {
    a1[12] = v4;
    sub_56CA00(v4, &unk_1326E41, 0);
  }
  v7 = a1[8];
  if ( v7 != 0 )
  {
    a1[9] = v7;
    sub_56CA00(v7, &unk_1326E41, 0);
  }
  v8 = a1[5];
  if ( v8 != 0 )
  {
    a1[6] = v8;
    sub_56CA00(v8, &unk_1326E41, 0);
  }
  v9 = a1[2];
  if ( v9 != 0 )
  {
    a1[3] = v9;
    sub_56CA00(v9, &unk_1326E41, 0);
  }
  return sub_57EDC0(a1, 0LL, a2, a3);
}

__int64 __fastcall sub_328CA0(
        __int64 a1,
        __int64 *a2,
        int a3,
        int a4,
        _DWORD *a5,
        __int64 *a6,
        _DWORD *a7,
        __int64 a8,
        int a9)
{
  __int64 v9; // x8
  __int64 *v10; // x9
  __int64 v11; // x8
  __int64 v12; // x9
  __int64 result; // x0
  __int64 v17; // x8
  __int64 v18; // x9

  v9 = qword_1909240;
  *(_DWORD *)(a1 + 8) = -1;
  v10 = goff_18F1DB0;
  *(_QWORD *)(a1 + 16) = v9;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = v10 + 2;
  v11 = *a2;
  v12 = a2[1];
  *(_DWORD *)(a1 + 47) = *(_DWORD *)((char *)a2 + 15);
  *(_DWORD *)(a1 + 52) = a3;
  *(_QWORD *)(a1 + 32) = v11;
  *(_QWORD *)(a1 + 40) = v12;
  *(_QWORD *)a1 = ((__int64*)goff_18F3040) + 2;
  *(_DWORD *)(a1 + 56) = *a7;
  *(_DWORD *)(a1 + 60) = a4;
  result = sub_2B89E0(a1 + 64, a8);
  *(_DWORD *)(a1 + 144) = *a5;
  v17 = *a6;
  v18 = a6[1];
  *(_DWORD *)(a1 + 163) = *(_DWORD *)((char *)a6 + 15);
  *(_QWORD *)(a1 + 156) = v18;
  *(_QWORD *)(a1 + 148) = v17;
  *(_DWORD *)(a1 + 168) = a9;
  return result;
}

__int64 __fastcall sub_4A2A80(_QWORD *a1)
{
  __int64 result; // x0

  result = sub_47C170();
  *a1 = goff_18F7A70 + 16;
  a1[12] = 0;
  a1[13] = 0;
  a1[14] = 0;
  a1[11] = a1 + 12;
  a1[15] = 0;
  a1[16] = 0;
  return result;
}

__int64 __fastcall sub_4B6D30(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 24);
  if ( result != 0 )
    return sub_57EDC0(result, 0LL, &unk_1326E41, 0);
  return result;
}

__int64 __fastcall sub_4B7880(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 24);
  if ( result != 0 )
    return sub_57EDC0(result, 0LL, &unk_1326E41, 0);
  return result;
}

__int64 __fastcall sub_4B83E0(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 24);
  if ( result != 0 )
    return sub_57EDC0(result, 0LL, &unk_1326E41, 0);
  return result;
}

__int64 __fastcall sub_4BA700(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 24);
  if ( result != 0 )
    return sub_57EDC0(result, 0LL, &unk_1326E41, 0);
  return result;
}

// N5storm27SimpleIP2LocationControllerE, virtual slot 106
__int64 __fastcall sub_4C9490(__int64 a1)
{
  __int64 result; // x0
  int v3; // w9

  result = *(_QWORD *)(a1 + 144);
  v3 = *(_DWORD *)(result + 16);
  if ( (unsigned int)(v3 - 2) <= 2 )
  {
    *(_BYTE *)(a1 + 296) = v3 == 2;
    return sub_4ED030(result);
  }
  return result;
}

// N5storm30SimpleStormMatchmakingStrategyE, virtual slot 22
__int64 sub_4C9FC0()
{
  __int64 result; // x0

  result = sub_57D200(40, 8, 1092677632, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = 0;
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 12) = -1;
  return result;
}

// N5storm30SimpleStormMatchmakingStrategyE, virtual slot 24
__int64 __fastcall sub_4CA1E0(__int64 result, __int64 a2)
{
  __int64 v3; // x0
  __int64 v4; // x0

  if ( a2 != 0 )
  {
    sub_4CA100(result, a2, 0LL);
    v3 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 24) = 0;
    if ( v3 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v4 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0;
    if ( v4 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    return sub_57EDC0(a2, 0LL, &unk_1326E41, 0);
  }
  return result;
}

// N5storm30SimpleStormMatchmakingStrategyE, virtual slot 27
void __fastcall sub_4CA2C0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // x21

  v3 = *(_QWORD *)(a2 + 32);
  if ( v3 == 0 )
  {
    v3 = sub_57D200(160, 8, 1092677632, 0LL, &unk_1326E41, 0);
    sub_5436F0((_QWORD *)v3);
    *(_QWORD *)(a2 + 32) = v3;
  }
  *(_DWORD *)(v3 + 12) = a3;
}

// N5storm30SimpleStormMatchmakingStrategyE, virtual slot 28
bool __fastcall sub_4CA330(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(a2 + 32) != 0 && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 208LL))(a1) != 0;
}

// N5storm30SimpleStormMatchmakingStrategyE, virtual slot 39
__int64 __fastcall sub_4CAB80(__int64 result, int a2)
{
  __int64 v2; // x8

  *(_BYTE *)(*(_QWORD *)(result + 536) + 80LL) = 1;
  v2 = *(_QWORD *)(result + 536);
  if ( a2 == 0 )
    a2 = *(_DWORD *)(v2 + 84);
  *(_DWORD *)(v2 + 84) = a2;
  return result;
}

__int64 __fastcall sub_4CEEE0(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  int v4; // [xsp+Ch] [xbp-4h] BYREF

  result = *(_QWORD *)(a2 + 288);
  if ( result != 0 )
  {
    v4 = *(_DWORD *)(a1 + 24);
    return (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)result + 48LL))(result, &v4);
  }
  return result;
}

// N5storm27SimpleSandboxController_SMME, virtual slot 115
__int64 __fastcall sub_4D3D00(__int64 a1, __int64 a2)
{
  __int64 v4; // x0
  _QWORD *v5; // x21
  __int64 v6; // x21
  _BYTE v8[176]; // [xsp+0h] [xbp-D0h] BYREF

  sub_530A10(v8, 0LL);
  v4 = sub_5490B0(*(_QWORD *)(a1 + 136));
  sub_51F450(v4, (__int64)v8);
  sub_4ED6D0((__int64)v8, 0xFFFFFFFF);
  v5 = *(_QWORD **)(a1 + 136);
  *(_QWORD *)(a1 + 136) = 0;
  if ( v5 != nullptr )
  {
    sub_5483C0(v5);
    sub_37030(v5);
  }
  v6 = sub_36EA0(0x58u, 4u, 0, 1086324736);
  sub_548360(v6, a2);
  *(_QWORD *)(a1 + 136) = v6;
  return sub_530AD0((__int64)v8);
}

// N5storm2mm7helpers38SimpleRdvStorePlayerProfileCallContextE, virtual slot 1
void __fastcall sub_4DC750(_QWORD *a1)
{
  __int64 v1; // x20
  __int64 v3; // x0
  __int64 v4; // x0

  v1 = a1[2];
  *a1 = goff_18F8B68 + 16;
  if ( v1 != 0 )
  {
    v3 = *(_QWORD *)(v1 + 24);
    *(_QWORD *)(v1 + 24) = 0;
    if ( v3 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v4 = *(_QWORD *)(v1 + 16);
    *(_QWORD *)(v1 + 16) = 0;
    if ( v4 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
  }
  _ZdlPv(a1);
}

// N5storm7helpers39SimpleMatchmakingGenericCallContextBaseE, virtual slot 1
void __fastcall sub_4DC850(_QWORD *a1)
{
  __int64 v1; // x20
  __int64 v3; // x0
  __int64 v4; // x0

  v1 = a1[2];
  *a1 = goff_18F8B68 + 16;
  if ( v1 != 0 )
  {
    v3 = *(_QWORD *)(v1 + 24);
    *(_QWORD *)(v1 + 24) = 0;
    if ( v3 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v4 = *(_QWORD *)(v1 + 16);
    *(_QWORD *)(v1 + 16) = 0;
    if ( v4 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
  }
  _ZdlPv(a1);
}

// N5storm2mm30IP2LocationProtocolAdminClientE, virtual slot 25
_QWORD *sub_4EB1F0()
{
  _QWORD *v0; // x19

  v0 = (_QWORD *)sub_4EB320(96, &unk_1326E41, 0);
  sub_52B270(v0, 1);
  *v0 = ((__int64*)goff_18F9200) + 2;
  return v0;
}

char **__fastcall sub_4EB4F0(char **a1, const char **a2)
{
  const char *v2; // x8
  const char *v3; // x20
  int v6; // w0
  int v7; // w21
  char *v8; // x0

  v2 = *a1;
  v3 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v2 != nullptr )
    {
      sub_37030(v2 - 4);
      v3 = *a2;
    }
    if ( v3 != nullptr )
    {
      v6 = strlen(v3);
      v7 = v6 + 1;
      v8 = (char *)sub_36EA0(v6 + 5, 4u, 0, 1095761920);
      *(_DWORD *)v8 = v7;
      v8 += 4;
      *a1 = v8;
      strcpy(v8, v3);
    }
    else
    {
      *a1 = nullptr;
    }
  }
  return a1;
}

char **__fastcall sub_4EB600(char **a1, char *s)
{
  char *v2; // x8
  int v5; // w0
  int v6; // w21
  char *v7; // x0

  v2 = *a1;
  if ( *a1 != s )
  {
    if ( v2 != nullptr )
      sub_37030(v2 - 4);
    if ( s != nullptr )
    {
      v5 = strlen(s);
      v6 = v5 + 1;
      v7 = (char *)sub_36EA0(v5 + 5, 4u, 0, 1095761920);
      *(_DWORD *)v7 = v6;
      v7 += 4;
      *a1 = v7;
      strcpy(v7, s);
    }
    else
    {
      *a1 = nullptr;
    }
  }
  return a1;
}

const char *__fastcall sub_4EB9F0(const char **a1)
{
  const char *result; // x0

  result = *a1;
  if ( result != nullptr )
    return (const char *)strlen(result);
  return result;
}

__int64 __fastcall sub_4EE150(pthread_mutex_t **a1)
{
  __int64 result; // x0

  pthread_mutex_destroy(*a1);
  result = sub_370A0(*a1, 5, &unk_1326E41, 0);
  *a1 = nullptr;
  return result;
}

// N5storm2mm18ThreadVariableRootE, virtual slot 0
__int64 __fastcall sub_4EE650(_QWORD *a1)
{
  *a1 = ((__int64*)goff_18F9238) + 2;
  return sub_4EE340(qword_19148A0, a1);
}

// N5storm2mm18ThreadVariableRootE, virtual slot 1
__int64 __fastcall sub_4EE670(_QWORD *a1)
{
  *a1 = ((__int64*)goff_18F9238) + 2;
  sub_4EE340(qword_19148A0, a1);
  return sub_4EB340(a1);
}

__int64 __fastcall sub_4EE900(__int64 result, __int64 a2)
{
  _DWORD *v2; // x20
  _BYTE *v3; // x21
  __int64 v4; // x19

  *(_QWORD *)(result + 32) = a2;
  v2 = *(_DWORD **)goff_18F9258;
  v3 = (_BYTE *)goff_18F88D8;
  v4 = *(_QWORD *)goff_18F9258 + 8LL;
  if ( *(char*)goff_18F88D8 == 0 )
    result = sub_4EE210(*(_QWORD *)goff_18F9258 + 8LL);
  ++*v2;
  if ( *v3 == 0 )
    return sub_4EE230(v4);
  return result;
}

__int64 sub_4EE980()
{
  _DWORD *v0; // x20
  _BYTE *v1; // x21
  __int64 v2; // x19
  __int64 v3; // x0

  v0 = *(_DWORD **)goff_18F9258;
  v1 = (_BYTE *)goff_18F88D8;
  v2 = *(_QWORD *)goff_18F9258 + 8LL;
  if ( *(char*)goff_18F88D8 == 0 )
    sub_4EE210(*(_QWORD *)goff_18F9258 + 8LL);
  --*v0;
  if ( *v1 == 0 )
    sub_4EE230(v2);
  v3 = sub_4EE290();
  return sub_4EE2A0(v3);
}

__int64 sub_4EEBB0()
{
  _QWORD *v0; // x20
  _DWORD *v1; // x19
  __int64 result; // x0
  __int64 v3; // [xsp+8h] [xbp-18h] BYREF

  v0 = (_QWORD *)sub_4EB320(88, &unk_1326E41, 0);
  v3 = 0;
  sub_4EEC30(v0, &v3);
  *(_QWORD *)((__int64*)goff_18F9250) = v0;
  v1 = (_DWORD *)sub_4EB320(40, &unk_1326E41, 0);
  *v1 = 0;
  result = sub_4EE1B0(v1 + 2, 0x40000000);
  *(_QWORD *)goff_18F9258 = v1;
  return result;
}

__int64 sub_4EED70()
{
  _QWORD *v0; // x19
  __int64 result; // x0
  _QWORD *v2; // x20
  __int64 v3; // x19

  v0 = (_QWORD *)((__int64*)goff_18F9250);
  result = *(_QWORD *)((__int64*)goff_18F9250);
  if ( *(_QWORD *)((__int64*)goff_18F9250) != 0 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  *v0 = 0;
  v2 = (_QWORD *)goff_18F9258;
  v3 = *(_QWORD *)goff_18F9258;
  if ( *(_QWORD *)goff_18F9258 != 0 )
  {
    sub_4EE1E0(v3 + 8);
    result = sub_4EB340(v3);
  }
  *v2 = 0;
  return result;
}

__int64 __fastcall sub_4EF480(_QWORD *a1, int a2)
{
  if ( a2 < 0 )
    return *a1 - -a2;
  else
    return *a1 + a2;
}

__int64 __fastcall sub_4EF8F0(unsigned int a1)
{
  return sub_4EFA90(goff_18F92A0, a1);
}

__int64 sub_4EF930()
{
  __int64 v0; // x19
  void *v1; // x19

  v0 = goff_18F92A0;
  sub_4EF9A0(goff_18F92A0);
  sub_250((__int64)goff_18F92A8, v0, (__int64)((void*)hoff_17C1000));
  v1 = goff_18F92B0;
  sub_4EDA00(goff_18F92B0, goff_18F92B8, 0);
  return sub_250((__int64)goff_18F92C0, (__int64)v1, (__int64)((void*)hoff_17C1000));
}

float __fastcall sub_4EFBF0(__int64 a1, float a2)
{
  return (float)((float)(unsigned int)sub_4EFA90(a1, 0x10000) * 0.000015258789f) * a2;
}

unsigned int __fastcall sub_4EFC30(unsigned int result)
{
  if ( *((__int64*)goff_18F92C8) != 0 )
    ++*(_DWORD *)(*((__int64*)goff_18F92C8) + 4LL * result);
  return result;
}

__int64 sub_4F0000()
{
  void *v0; // x19

  v0 = goff_18F87A8;
  sub_4F0040(goff_18F87A8);
  return sub_250((__int64)goff_18F92E0, (__int64)v0, (__int64)((void*)hoff_17C1000));
}

__int64 sub_4F0290()
{
  void *v0; // x19

  v0 = goff_18F92F0;
  sub_4F02D0(goff_18F92F0);
  return sub_250((__int64)goff_18F92F8, (__int64)v0, (__int64)((void*)hoff_17C1000));
}

__int64 __fastcall sub_4F0900(__int64 *a1)
{
  _BYTE *v1; // x22
  __int64 *v3; // x19
  __int64 *v4; // x21
  __int64 result; // x0

  v1 = (_BYTE *)goff_18F88D8;
  v3 = a1 + 15;
  if ( *(char*)goff_18F88D8 != 0 )
  {
    v4 = a1 + 19;
  }
  else
  {
    sub_4EE210(a1 + 15);
    v4 = a1 + 19;
    if ( *v1 == 0 )
      sub_4EE210(a1 + 19);
  }
  sub_4F2190((__int64)a1, a1 + 23);
  sub_4F2190((__int64)a1, a1 + 27);
  sub_4F2360((__int64)a1, a1 + 39);
  result = sub_4F2190((__int64)a1, a1 + 35);
  if ( *v1 == 0 )
  {
    result = sub_4EE230(v4);
    if ( *v1 == 0 )
      return sub_4EE230(v3);
  }
  return result;
}

__int64 __fastcall sub_4F3920(__int64 result, unsigned __int64 a2)
{
  __int64 v2; // x19
  _BYTE *v3; // x22
  __int64 v5; // x20

  v2 = *(_QWORD *)((__int64*)goff_18F9358);
  v3 = (_BYTE *)goff_18F88D8;
  v5 = result;
  if ( *(char*)goff_18F88D8 == 0 )
    result = sub_4EE210(*(_QWORD *)((__int64*)goff_18F9358));
  ++*(_QWORD *)(v5 + 56);
  if ( *(_QWORD *)(v5 + 40) > a2 )
    *(_QWORD *)(v5 + 40) = a2;
  if ( *(_QWORD *)(v5 + 48) < a2 )
    *(_QWORD *)(v5 + 48) = a2;
  *(_QWORD *)(v5 + 32) += a2;
  *(_BYTE *)(v5 + 24) = 1;
  if ( *v3 == 0 )
    return sub_4EE230(v2);
  return result;
}

__int64 sub_4F3A90()
{
  _QWORD *v0; // x0
  __int64 v1; // x19
  __int64 result; // x0

  v0 = (_QWORD *)sub_4EB320(24, &unk_1326E41, 0);
  v0[1] = 0;
  v0[2] = 0;
  *v0 = 0;
  *(_QWORD *)((__int64*)goff_18F9348) = v0;
  v1 = sub_4EB320(32, &unk_1326E41, 0);
  result = sub_4EE1B0(v1, 0x40000000);
  *(_QWORD *)((__int64*)goff_18F9358) = v1;
  return result;
}

void sub_4F3B00()
{
  _QWORD *v0; // x20
  __int64 *v1; // x19
  __int64 v2; // x0
  _QWORD *v3; // x21
  __int64 v4; // x19

  v0 = (_QWORD *)((__int64*)goff_18F9348);
  v1 = *(__int64 **)((__int64*)goff_18F9348);
  if ( *(_QWORD *)((__int64*)goff_18F9348) != 0 )
  {
    v2 = *v1;
    if ( *v1 != 0 )
    {
      v1[1] = v2;
      sub_37030(v2);
    }
    sub_4EB340(v1);
  }
  v3 = (_QWORD *)((__int64*)goff_18F9358);
  v4 = *(_QWORD *)((__int64*)goff_18F9358);
  if ( *(_QWORD *)((__int64*)goff_18F9358) != 0 )
  {
    sub_4EE1E0(*(_QWORD *)((__int64*)goff_18F9358));
    sub_4EB340(v4);
  }
  *v0 = 0;
  *v3 = 0;
}

__int64 sub_4F4540()
{
  __int64 v0; // x19
  __int64 result; // x0
  int v2; // [xsp+Ch] [xbp-4h] BYREF

  v0 = sub_4EB320(88, &unk_1326E41, 0);
  v2 = 0;
  result = sub_4EDC80(v0, &v2);
  *((__int64*)goff_18F87B0) = v0;
  return result;
}

char *__fastcall sub_4F5F60(__int64 a1, const char **a2, __int16 a3, char a4)
{
  char v5; // w20
  char *result; // x0

  *(_WORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = &unk_1326E41;
  *(_DWORD *)(a1 + 16) = 0;
  v5 = a4 & 1;
  result = Recovered_ResultTextCopy((char *)(a1 + 24), a2);
  *(_BYTE *)(a1 + 32) = v5;
  return result;
}

__int64 __fastcall sub_4F6190(__int64 a1, const char *a2, char a3)
{
  char s[4]; // [xsp+Ch] [xbp-4h] BYREF

  *(_DWORD *)(a1 + 256) = 0;
  s[0] = a3;
  s[1] = 0;
  return sub_4F61C0(a1, a2, s);
}

__int64 __fastcall sub_4F63B0(__int64 a1, unsigned int *a2)
{
  return a1 + 8LL * *a2;
}

char *__fastcall sub_4F8350(char *result, char *s)
{
  __int64 v2; // x8
  char *v4; // x19
  int v5; // w0
  int v6; // w21
  char *v7; // x0

  v2 = *((_QWORD *)result + 11);
  v4 = result;
  if ( v2 != 0 )
  {
    result = (char *)sub_37030(v2 - 4);
    *((_QWORD *)v4 + 11) = 0;
    v4[97] = 0;
  }
  if ( s != nullptr )
  {
    v5 = strlen(s);
    v6 = v5 + 1;
    v7 = (char *)sub_36EA0(v5 + 5, 4u, 0, 1095761920);
    *(_DWORD *)v7 = v6;
    v7 += 4;
    *((_QWORD *)v4 + 11) = v7;
    result = strcpy(v7, s);
    *((_WORD *)v4 + 48) = 256;
    v4[98] = 0;
  }
  return result;
}

__int64 __fastcall sub_4F8690(__int64 a1, char *s)
{
  __int64 v2; // x8
  int v5; // w0
  int v6; // w21
  char *v7; // x0

  v2 = *(_QWORD *)(a1 + 88);
  if ( v2 != 0 )
  {
    sub_37030(v2 - 4);
    *(_QWORD *)(a1 + 88) = 0;
    *(_BYTE *)(a1 + 97) = 0;
  }
  if ( s != nullptr )
  {
    v5 = strlen(s);
    v6 = v5 + 1;
    v7 = (char *)sub_36EA0(v5 + 5, 4u, 0, 1095761920);
    *(_DWORD *)v7 = v6;
    v7 += 4;
    *(_QWORD *)(a1 + 88) = v7;
    strcpy(v7, s);
    *(_WORD *)(a1 + 96) = 256;
    *(_BYTE *)(a1 + 98) = 0;
  }
  return a1;
}

__int64 __fastcall sub_4F99C0(__int64 a1, const char **a2)
{
  const char *v2; // x20
  __int64 v3; // x8
  int v5; // w0
  int v6; // w21
  char *v7; // x0

  v2 = *a2;
  v3 = *(_QWORD *)(a1 + 88);
  if ( v3 != 0 )
  {
    sub_37030(v3 - 4);
    *(_QWORD *)(a1 + 88) = 0;
    *(_BYTE *)(a1 + 97) = 0;
  }
  if ( v2 != nullptr )
  {
    v5 = strlen(v2);
    v6 = v5 + 1;
    v7 = (char *)sub_36EA0(v5 + 5, 4u, 0, 1095761920);
    *(_DWORD *)v7 = v6;
    v7 += 4;
    *(_QWORD *)(a1 + 88) = v7;
    strcpy(v7, v2);
    *(_WORD *)(a1 + 96) = 256;
    *(_BYTE *)(a1 + 98) = 0;
  }
  return a1;
}

__int64 __fastcall sub_4FB070(__int64 a1, __int64 a2)
{
  _BYTE v4[200]; // [xsp+8h] [xbp-D8h] BYREF

  sub_4FAFD0(a2, v4);
  sub_4EC170(a1, v4);
  return a1;
}

// N5storm2mm11PRUDPStreamE, virtual slot 33
_Bool __fastcall sub_500DB0(__int64 a1)
{
  _QWORD *v1; // x9
  _QWORD *v2; // x10
  __int64 v3; // x10
  __int64 v4; // x11
  _QWORD *v5; // t1

  v1 = *(_QWORD **)(a1 + 88);
  while ( 1 )
  {
    if ( v1 == (_QWORD *)(a1 + 96) )
      return 1;
    if ( *(_DWORD *)(v1[21] + 152LL) != 0 )
      break;
    v2 = (_QWORD *)v1[1];
    if ( v2 != nullptr )
    {
      do
      {
        v1 = v2;
        v2 = (_QWORD *)*v2;
      }
      while ( v2 != nullptr );
    }
    else
    {
      v3 = (__int64)(v1 + 2);
      if ( *(_QWORD **)v1[2] == v1 )
      {
        v1 = (_QWORD *)v1[2];
      }
      else
      {
        do
        {
          v4 = *(_QWORD *)v3;
          v5 = *(_QWORD **)(*(_QWORD *)v3 + 16LL);
          v3 = *(_QWORD *)v3 + 16LL;
          v1 = v5;
        }
        while ( *v5 != v4 );
      }
    }
  }
  return 0;
}

// N5storm2mm13PRUDPEndPointE, virtual slot 26
__int64 __fastcall sub_502D10(__int64 a1, unsigned int a2, _Bool a3, int a4)
{
  *(_DWORD *)(a1 + 140) = a4;
  if ( a3 )
    return sub_502D30(a1, a2);
  *(_DWORD *)(a1 + 212) = a2;
  return a1;
}

__int64 __fastcall sub_505AE0(__int64 a1, int a2, int a3)
{
  __int64 result; // x0

  *(_QWORD *)a1 = ((__int64*)goff_18F94A0) + 2;
  result = sub_505D60((_QWORD *)(a1 + 8));
  *(_DWORD *)(a1 + 48) = a2;
  *(_DWORD *)(a1 + 52) = a3;
  return result;
}

__int64 __fastcall sub_5072D0(__int64 a1, char *a2)
{
  if ( a1 + 16 == a2 )
    return 0;
  else
    return *(_QWORD *)(a2 + 40);
}

__int64 __fastcall sub_507B80(__int64 a1)
{
  return sub_507E40(a1 + 72, *(_QWORD *)(a1 + 80));
}

__int64 __fastcall sub_507C90(__int64 a1)
{
  if ( *((__int64*)goff_18F94B0) != 0 && *(_DWORD *)(*((__int64*)goff_18F94B0) + 24) == 1 )
    return 0x7FFFFFFF;
  else
    return *(unsigned int *)(a1 + 28);
}

bool sub_507CC0()
{
  return *((__int64*)goff_18F94B0) != 0 && *(_DWORD *)(*((__int64*)goff_18F94B0) + 24) == 1;
}

__int64 __fastcall sub_507D10(__int64 a1)
{
  if ( *((__int64*)goff_18F94B0) != 0 && *(_DWORD *)(*((__int64*)goff_18F94B0) + 24) == 1 )
    return 0x7FFFFFFF;
  else
    return *(unsigned int *)(a1 + 32);
}

__int64 __fastcall sub_507EA0(__int64 a1)
{
  sub_508970(a1 + 24, *(_QWORD *)(a1 + 32));
  return sub_5089B0(a1, *(_QWORD *)(a1 + 8));
}

bool __fastcall sub_508A90(__int64 a1)
{
  __int64 v1; // x0
  __int64 v2; // t1
  __int64 v3; // x19
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v1 = a1 + 16;
  if ( v2 == 0 )
    return false;
  v3 = sub_4EF460(v1);
  v5 = sub_4EF420(v3);
  return v3 < sub_4EF450(&v5);
}

__int64 __fastcall sub_508CC0(__int64 a1, __int64 a2, char a3, char a4, __int64 a5)
{
  __int64 v9; // x1
  __int64 result; // x0

  if ( a5 != 0 )
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a5 + 16LL))(a5);
  else
    v9 = 0;
  sub_5098B0(a1, v9);
  *(_QWORD *)a1 = ((__int64*)goff_18F94B8) + 2;
  sub_5089F0(a1 + 240);
  *(_QWORD *)(a1 + 280) = 0;
  *(_WORD *)(a1 + 272) = 0;
  *(_BYTE *)(a1 + 34) = a4 & 0xF8 | a3 & 7;
  result = sub_4EF440(a1 + 280, 0LL);
  *(_QWORD *)(a1 + 264) = a2;
  *(_QWORD *)(a1 + 288) = 0;
  return result;
}

__int64 sub_5093F0()
{
  _QWORD *v0; // x19
  __int64 result; // x0

  v0 = (_QWORD *)sub_36EA0(0x28u, 4u, 0, 1095761920);
  *v0 = 0;
  result = sub_4EE1B0(v0 + 1, 0x40000000);
  qword_1915428 = (__int64)v0;
  return result;
}

__int64 __fastcall sub_509550(_QWORD *a1)
{
  __int64 result; // x0

  *a1 = ((__int64*)goff_18F94C0) + 2;
  sub_4EE1B0(a1 + 2, 0x20000000);
  sub_4F2FA0(a1 + 6, "Compression", 0, "Time to compress a buffer before sending on PRUDP.");
  result = sub_4F2FA0(a1 + 25, "Decompression", 0, "Time to decompress a buffer received from PRUDP.");
  a1[1] = 0;
  return result;
}

__int64 sub_509EC0()
{
  __int64 *v0; // x20
  char *v1; // x21
  _DWORD *v2; // x19
  unsigned __int64 v3; // x22
  void (__fastcall ***v4)(_QWORD); // x0
  void (__fastcall ***v5)(_QWORD); // x23
  void (__fastcall **v6)(_QWORD); // t1
  __int64 result; // x0

  v0 = ((__int64*)goff_18F94E0);
  v1 = *((__int64*)goff_18F94E0);
  v2 = (_DWORD *)(*((__int64*)goff_18F94E0) - 4);
  if ( *v2 != 0 )
  {
    v3 = 0;
    v4 = (void (__fastcall ***)(_QWORD))*((__int64*)goff_18F94E0);
    v5 = (void (__fastcall ***)(_QWORD))*((__int64*)goff_18F94E0);
    do
    {
      v6 = *v5;
      v5 += 27;
      (*v6)(v4);
      ++v3;
      v4 = v5;
    }
    while ( v3 < *(unsigned int *)(v1 - 4) );
  }
  result = sub_37030(v2);
  *v0 = 0;
  return result;
}

__int64 __fastcall sub_50B700(__int64 a1, __int64 a2)
{
  _BYTE *v2; // x22
  __int64 v4; // x21
  __int64 v5; // x19
  __int64 result; // x0

  v2 = (_BYTE *)goff_18F88D8;
  v4 = a1 + 80;
  v5 = a1 + 88;
  if ( *(char*)goff_18F88D8 == 0 )
    sub_4EE210(a1 + 88);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)((__int64*)goff_18F9508) + 40LL))(
             *((__int64*)goff_18F9508),
             v4,
             a2);
  if ( *v2 == 0 )
    return sub_4EE230(v5);
  return result;
}

__int64 sub_50BA60()
{
  __int64 *v0; // x19

  v0 = goff_18F9510;
  sub_515C10(goff_18F9510);
  return sub_250((__int64)goff_18F9538, (__int64)v0, (__int64)((void*)hoff_17C1000));
}

unsigned __int64 __fastcall sub_50EEF0(__int64 a1, int a2, __int64 a3)
{
  return sub_50EF00(a1, a3, a2);
}

// N5storm2mm7CounterE, virtual slot 2
__int64 __fastcall sub_50F5C0(__int64 result, _DWORD *a2)
{
  __int64 v2; // x19
  _BYTE *v3; // x22
  __int64 v5; // x20

  v2 = *(_QWORD *)((__int64*)goff_18F95B8);
  v3 = (_BYTE *)goff_18F88D8;
  v5 = result;
  if ( *(char*)goff_18F88D8 == 0 )
    result = sub_4EE210(*(_QWORD *)((__int64*)goff_18F95B8));
  *a2 = *(_DWORD *)(v5 + 28);
  *(_DWORD *)(v5 + 28) = 0;
  if ( *v3 == 0 )
    return sub_4EE230(v2);
  return result;
}

__int64 sub_50F640()
{
  _QWORD *v0; // x0
  __int64 v1; // x19
  __int64 result; // x0

  v0 = (_QWORD *)sub_4EB320(24, &unk_1326E41, 0);
  v0[1] = 0;
  v0[2] = 0;
  *v0 = 0;
  *(_QWORD *)((__int64*)goff_18F95B0) = v0;
  v1 = sub_4EB320(32, &unk_1326E41, 0);
  result = sub_4EE1B0(v1, 0x40000000);
  *(_QWORD *)((__int64*)goff_18F95B8) = v1;
  return result;
}

void sub_50F6B0()
{
  _QWORD *v0; // x20
  __int64 *v1; // x19
  __int64 v2; // x0
  _QWORD *v3; // x21
  __int64 v4; // x19

  v0 = (_QWORD *)((__int64*)goff_18F95B0);
  v1 = *(__int64 **)((__int64*)goff_18F95B0);
  if ( *(_QWORD *)((__int64*)goff_18F95B0) != 0 )
  {
    v2 = *v1;
    if ( *v1 != 0 )
    {
      v1[1] = v2;
      sub_37030(v2);
    }
    sub_4EB340(v1);
  }
  v3 = (_QWORD *)((__int64*)goff_18F95B8);
  v4 = *(_QWORD *)((__int64*)goff_18F95B8);
  if ( *(_QWORD *)((__int64*)goff_18F95B8) != 0 )
  {
    sub_4EE1E0(*(_QWORD *)((__int64*)goff_18F95B8));
    sub_4EB340(v4);
  }
  *v0 = 0;
  *v3 = 0;
}

__int64 __fastcall sub_50F7A0(_QWORD *a1)
{
  __int64 v2; // x20
  __int64 v3; // x0
  __int64 v4; // x20
  __int64 v5; // x0

  sub_511800(a1);
  v2 = a1[21];
  if ( v2 != 0 )
  {
    sub_510F10(a1[22], a1[21], 1000);
    v3 = *(_QWORD *)(v2 + 40);
    if ( v3 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
    sub_510D80(a1[22], v2);
  }
  v4 = a1[20];
  if ( v4 != 0 )
  {
    sub_510F10(a1[22], a1[20], 1000);
    v5 = *(_QWORD *)(v4 + 40);
    if ( v5 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
    sub_510D80(a1[22], v4);
  }
  sub_50F850((__int64)(a1 + 52));
  sub_50F850((__int64)(a1 + 40));
  nullsub_1576((char *)a1 + 188);
  return sub_511790(a1);
}

__int64 __fastcall sub_512B40(__int64 a1)
{
  __int64 v2; // x19

  v2 = a1 + 8;
  sub_50EA00(a1 + 2192);
  sub_50EA00(a1 + 2024);
  sub_50EA00(a1 + 1856);
  sub_50EA00(a1 + 1688);
  sub_50EA00(a1 + 1520);
  sub_50EA00(a1 + 1352);
  sub_50EA00(a1 + 1184);
  sub_50EA00(a1 + 1016);
  sub_50EA00(a1 + 848);
  sub_50EA00(a1 + 680);
  sub_50EA00(a1 + 512);
  sub_50EA00(a1 + 344);
  sub_50EA00(a1 + 176);
  return sub_50EA00(v2);
}

__int64 __fastcall sub_512C40(__int64 result, int a2, unsigned int a3)
{
  __int64 v4; // x20
  __int64 v5; // x0

  if ( a2 <= 13 )
  {
    v4 = result + 168LL * (unsigned int)a2 + 8;
    v5 = sub_4EF420(result);
    return sub_50EB70(v4, a3, v5);
  }
  return result;
}

__int64 sub_513600()
{
  _QWORD *v0; // x19
  __int64 result; // x0

  v0 = (_QWORD *)sub_36EA0(0x28u, 4u, 0, 1095761920);
  *v0 = 0;
  result = sub_4EE1B0(v0 + 1, 0x40000000);
  qword_19154A8 = (__int64)v0;
  return result;
}

__int64 __fastcall sub_5189A0(__int64 a1, unsigned int a2)
{
  __int64 result; // x0
  __int64 v5; // x1

  result = *(_QWORD *)(a1 + 8);
  if ( result != 0 )
  {
    v5 = *(unsigned int *)(a1 + 144);
    if ( (_DWORD)v5 != 0 )
      result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)result + 120LL))(result, v5, a1);
    if ( a2 != 0 )
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 8) + 112LL))(
                 *(_QWORD *)(a1 + 8),
                 a2,
                 a1);
  }
  *(_DWORD *)(a1 + 144) = a2;
  return result;
}

// N5storm2mm17WebSocketEndPointE, virtual slot 20
__int64 __fastcall sub_518AE0(__int64 a1, unsigned int a2)
{
  __int64 result; // x0
  __int64 v5; // x1

  result = *(_QWORD *)(a1 + 8);
  if ( result != 0 )
  {
    v5 = *(unsigned int *)(a1 + 148);
    if ( (_DWORD)v5 != 0 )
      result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)result + 96LL))(result, v5, a1);
    if ( a2 != 0 )
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 8) + 88LL))(
                 *(_QWORD *)(a1 + 8),
                 a2,
                 a1);
  }
  *(_DWORD *)(a1 + 148) = a2;
  return result;
}

__int64 sub_5191F0()
{
  __int64 v0; // x19
  __int64 result; // x0

  v0 = sub_4EB320(32, &unk_1326E41, 0);
  result = sub_4EE1B0(v0, 0x40000000);
  *(_QWORD *)((__int64*)goff_18F9680) = v0;
  return result;
}

__int64 __fastcall sub_519B50(__int64 a1, __int64 a2)
{
  __int64 v4; // x21
  __int64 v5; // x2

  v4 = sub_4FC1E0(*(_QWORD *)(a2 + 8)) + 4;
  v5 = (unsigned int)sub_4FC1F0(*(_QWORD *)(a2 + 8)) - 4;
  return sub_504040(a1, v4, v5);
}

__int64 sub_519BA0()
{
  _QWORD *v0; // x19
  __int64 result; // x0

  v0 = (_QWORD *)sub_36EA0(0x28u, 4u, 0, 1095761920);
  *v0 = 0;
  result = sub_4EE1B0(v0 + 1, 0x40000000);
  qword_1915508 = (__int64)v0;
  return result;
}

__int64 __fastcall sub_519E40(__int64 result)
{
  unsigned int v1; // w9
  unsigned int v2; // w9
  __int64 *v3; // x20
  __int64 v4; // x19
  __int64 *v5; // x20
  __int64 v6; // x19
  __int64 *v7; // x20
  __int64 v8; // x19
  unsigned int v9; // w9
  unsigned int v10; // w9
  __int64 *v11; // x19

  if ( (result & 1) != 0 )
  {
    v2 = __atomic_sub_fetch((unsigned int *)&dword_1915530, 1, 4);
    if ( v2 == 0 )
    {
      v3 = ((__int64*)goff_18F96A0);
      v4 = *((__int64*)goff_18F96A0);
      if ( *((__int64*)goff_18F96A0) != 0 )
      {
        sub_50EA00(*((__int64*)goff_18F96A0));
        result = sub_4EB340(v4);
      }
      *v3 = 0;
      v5 = ((__int64*)goff_18F96A8);
      v6 = *((__int64*)goff_18F96A8);
      if ( *((__int64*)goff_18F96A8) != 0 )
      {
        sub_50EA00(*((__int64*)goff_18F96A8));
        result = sub_4EB340(v6);
      }
      *v5 = 0;
      v7 = ((__int64*)goff_18F96B0);
      v8 = *((__int64*)goff_18F96B0);
      if ( *((__int64*)goff_18F96B0) != 0 )
      {
        sub_50EA00(*((__int64*)goff_18F96B0));
        result = sub_4EB340(v8);
      }
      *v7 = 0;
    }
  }
  v10 = __atomic_sub_fetch((unsigned int *)&dword_1915534, 1, 4);
  if ( v10 == 0 )
  {
    v11 = ((__int64*)goff_18F96C0);
    result = *((__int64*)goff_18F96C0);
    if ( *((__int64*)goff_18F96C0) != 0 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
    *v11 = 0;
  }
  return result;
}

__int64 __fastcall sub_519FF0(_QWORD *a1)
{
  __int64 v2; // x21
  __int64 v3; // x20
  __int64 result; // x0

  *a1 = ((__int64*)goff_18F96C8) + 2;
  v2 = sub_4EB320(8, &unk_1326E41, 0);
  sub_51A630();
  a1[1] = v2;
  v3 = sub_4EB320(48, &unk_1326E41, 0);
  result = sub_51A700(v3);
  a1[2] = v3;
  a1[3] = 0;
  return result;
}

__int64 __fastcall sub_51D810(__int64 result, __int64 a2)
{
  __int64 v2; // x22
  __int64 v3; // x21
  __int64 i; // x19
  int v6; // w8
  _QWORD *v7; // x0

  v2 = *(_QWORD *)(result + 16);
  v3 = result + 8;
  for ( i = result; v2 != v3; v2 = *(_QWORD *)(v2 + 8) )
  {
    result = *(_QWORD *)(v2 + 16);
    v6 = *(_DWORD *)(result + 8);
    if ( v6 >= 1 )
    {
      if ( v6 > 1024 )
        break;
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)result + 16LL))(result, a2);
    }
  }
  if ( *(_BYTE *)(i + 56) != 0 )
  {
    v7 = *(_QWORD **)(i + 32);
    *(_QWORD *)(*v7 + 8LL) = v7[1];
    *(_QWORD *)v7[1] = *v7;
    --*(_QWORD *)(i + 48);
    return sub_37030(v7);
  }
  return result;
}

__int64 __fastcall sub_51EF60(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // x0
  __int64 v7; // x22

  v4 = *(_QWORD *)(a1 + 208);
  if ( v4 != 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
    *(_QWORD *)(a1 + 208) = 0;
  }
  v7 = sub_4EB320(80, &unk_1326E41, 0);
  sub_520530(v7, a2, a3);
  *(_QWORD *)(a1 + 208) = v7;
  return v7;
}

__int64 sub_51F770()
{
  __int64 v0; // x19
  _BYTE v2[64]; // [xsp+0h] [xbp-50h] BYREF

  v0 = sub_4EB320(152, &unk_1326E41, 0);
  sub_51D650(v2, 0);
  sub_51F7E0(v0, (__int64)v2);
  *((__int64*)goff_18F9800) = v0;
  sub_51D670(v2);
  return sub_520840();
}

__int64 sub_51F8F0()
{
  __int64 *v0; // x19
  __int64 result; // x0

  sub_5208B0();
  v0 = ((__int64*)goff_18F9800);
  result = *((__int64*)goff_18F9800);
  if ( *((__int64*)goff_18F9800) != 0 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  *v0 = 0;
  return result;
}

// N5storm2mm20PseudoGlobalVariableINS0_16OperationManagerEEE, virtual slot 0
__int64 __fastcall sub_51FF00(__int64 a1)
{
  __int64 v2; // x20

  *(_QWORD *)a1 = ((__int64*)goff_18F9808) + 2;
  v2 = a1 + 88;
  sub_4F03B0(goff_18F92F0, a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  sub_51D670(v2);
  sub_51D670(a1 + 24);
  return nullsub_1627(a1);
}

// N5storm2mm20PseudoGlobalVariableINS0_16OperationManagerEEE, virtual slot 1
__int64 __fastcall sub_51FF70(__int64 a1)
{
  __int64 v2; // x20

  *(_QWORD *)a1 = ((__int64*)goff_18F9808) + 2;
  v2 = a1 + 88;
  sub_4F03B0(goff_18F92F0, a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  sub_51D670(v2);
  sub_51D670(a1 + 24);
  nullsub_1627(a1);
  return sub_4EB340(a1);
}

__int64 sub_5222E0()
{
  __int64 v0; // x19
  __int64 result; // x0

  v0 = sub_4EB320(8, &unk_1326E41, 0);
  result = sub_4EB3D0(v0);
  *(_QWORD *)((__int64*)goff_18F9860) = v0;
  return result;
}

bool sub_526810()
{
  return *(_QWORD *)((__int64*)goff_18F98F0) == 0 || *(_QWORD *)(*(_QWORD *)((__int64*)goff_18F98F0) + 56LL) == 0;
}

// N5storm2mm30IP2LocationProtocolAdminClientE, virtual slot 26
__int64 __fastcall sub_52B880(__int64 a1, __int64 a2)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 88);
  if ( result != 0 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 24LL))(result);
    *(_QWORD *)(a1 + 88) = 0;
  }
  if ( a2 != 0 )
  {
    *(_QWORD *)(a1 + 88) = a2;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  }
  return result;
}

// N5storm2mm19ClientStreamManagerE, virtual slot 7
__int64 __fastcall sub_52CE20(__int64 a1, __int64 a2)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 56);
  if ( result != 0 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 24LL))(result);
    *(_QWORD *)(a1 + 56) = 0;
  }
  if ( a2 != 0 )
  {
    *(_QWORD *)(a1 + 56) = a2;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  }
  return result;
}

bool __fastcall sub_52FFE0(__int64 a1, int a2)
{
  return (a2 & ~*(_DWORD *)(a1 + 56)) == 0;
}

__int64 __fastcall sub_5301D0(__int64 a1)
{
  unsigned int v2; // [xsp+Ch] [xbp-4h] BYREF

  sub_504170(a1, &v2, 4, 1);
  return v2;
}

__int64 __fastcall sub_530A70(__int64 a1, __int64 a2)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 168);
  if ( result != 0 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 24LL))(result);
    *(_QWORD *)(a1 + 168) = 0;
  }
  if ( a2 != 0 )
  {
    *(_QWORD *)(a1 + 168) = a2;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
  }
  return result;
}

__int64 __fastcall sub_539400(_QWORD *a1, __int64 a2)
{
  __int64 result; // x0
  char **v5; // x21
  char **v6; // x20
  char *v7; // x8
  __int64 v8; // x8
  char *v9; // x9
  char **v10; // t1
  int v11; // [xsp+Ch] [xbp-14h] BYREF

  v11 = a1[2];
  result = sub_504140(a2, &v11, 4, 1);
  v5 = (char **)(a1 + 1);
  v6 = (char **)*a1;
  while ( v6 != v5 )
  {
    sub_539810(a2, v6 + 4);
    result = sub_504140(a2, v6 + 5, 2, 1);
    v7 = v6[1];
    if ( v7 != nullptr )
    {
      do
      {
        v6 = (char **)v7;
        v7 = *(char **)v7;
      }
      while ( v7 != nullptr );
    }
    else
    {
      v8 = (__int64)(v6 + 2);
      if ( *(char ***)v6[2] == v6 )
      {
        v6 = (char **)v6[2];
      }
      else
      {
        do
        {
          v9 = *(char **)v8;
          v10 = *(char ***)(*(_QWORD *)v8 + 16LL);
          v8 = *(_QWORD *)v8 + 16LL;
          v6 = v10;
        }
        while ( *v10 != v9 );
      }
    }
  }
  return result;
}

__int64 __fastcall sub_53A610(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  return sub_53CF40((_BYTE *)(a1 + 24), a2, a3, a4, a5, a6, a7, a8, a9, a10);
}

// N5storm2mm30MatchmakingNotificationHandlerE, virtual slot 2
__int64 __fastcall sub_543E90(__int64 a1, __int64 a2)
{
  _BYTE v3[4]; // [xsp+Ch] [xbp-4h] BYREF

  v3[0] = 0;
  return sub_543EC0(a1, a2, v3);
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

// N6snappy15ByteArraySourceE, virtual slot 4
__int64 __fastcall sub_54BB60(__int64 result, __int64 a2)
{
  __int64 v2; // x9

  v2 = *(_QWORD *)(result + 16) - a2;
  *(_QWORD *)(result + 8) += a2;
  *(_QWORD *)(result + 16) = v2;
  return result;
}

__int64 __fastcall sub_54C020(__int64 result, __int64 a2)
{
  __int64 v2; // x8

  *(_DWORD *)(result + 8) = 0;
  *(_WORD *)(result + 12) = 0;
  v2 = goff_18F9BF8 + 16;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = a2;
  *(_QWORD *)result = v2;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 40) = result + 40;
  *(_QWORD *)(result + 48) = result + 40;
  *(_QWORD *)(result + 56) = 0;
  return result;
}

__int64 __fastcall sub_54CA50(__int64 a1)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 128);
  if ( result != a1 && result != 0 )
    return sub_37030(result);
  return result;
}

// N5storm10CoreBridgeE, virtual slot 1
void __fastcall sub_54CBE0(_QWORD *a1)
{
  __int64 v1; // x20

  v1 = a1[1];
  *a1 = ((__int64*)goff_18F9C08) + 2;
  if ( v1 != 0 )
  {
    sub_54DD50(v1);
    sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
  }
  _ZdlPv(a1);
}

// N5storm19DynamicTypeRegistryE, virtual slot 3
__int64 __fastcall sub_5526F0(char *a1, unsigned int *a2)
{
  char *v2; // x19
  unsigned int v5; // w8
  char *v6; // x10
  __int64 v7; // x20
  __int64 v8; // t1
  char *v9; // x9
  unsigned int v10; // w11
  bool v11; // cf
  _BOOL4 v12; // w11
  __int64 v13; // x20

  v2 = (char *)(a1 + 64);
  std__recursive_mutex__lock((char *)(a1 + 64));
  v5 = *a2;
  v8 = *(_QWORD *)(a1 + 24);
  v7 = a1 + 24;
  v6 = v8;
  if ( v8 == 0 )
    goto LABEL_9;
  v9 = v7;
  do
  {
    v10 = *(_DWORD *)(v6 + 32);
    v11 = v10 >= v5;
    v12 = v10 < v5;
    if ( v11 )
      v9 = v6;
    v6 = *(_QWORD *)(v6 + 8LL * v12);
  }
  while ( v6 != 0 );
  if ( v9 != v7 && *(_DWORD *)(v9 + 32) <= v5 )
    v13 = *(_QWORD *)(v9 + 40);
  else
LABEL_9:
    v13 = 0;
  std__recursive_mutex__unlock(v2);
  return v13;
}

// N5storm19DynamicTypeRegistryE, virtual slot 2
bool __fastcall sub_552780(__int64 a1, unsigned int *a2)
{
  char *v2; // x19
  unsigned int v5; // w8
  __int64 v6; // x10
  __int64 v7; // x20
  __int64 v8; // t1
  __int64 v9; // x9
  unsigned int v10; // w11
  bool v11; // cf
  _BOOL4 v12; // w11
  _BOOL4 v13; // w20

  v2 = (char *)(a1 + 64);
  std__recursive_mutex__lock((char *)(a1 + 64));
  v5 = *a2;
  v8 = *(_QWORD *)(a1 + 24);
  v7 = a1 + 24;
  v6 = v8;
  if ( v8 == 0 )
    goto LABEL_9;
  v9 = v7;
  do
  {
    v10 = *(_DWORD *)(v6 + 32);
    v11 = v10 >= v5;
    v12 = v10 < v5;
    if ( v11 )
      v9 = v6;
    v6 = *(_QWORD *)(v6 + 8LL * v12);
  }
  while ( v6 != 0 );
  if ( v9 == v7 || *(_DWORD *)(v9 + 32) > v5 )
LABEL_9:
    v9 = v7;
  v13 = v9 != v7;
  std__recursive_mutex__unlock(v2);
  return v13;
}

void __fastcall sub_554C80(_QWORD *a1)
{
  _QWORD *v1; // x19

  v1 = a1 - 3;
  sub_58C2A0(a1);
  _ZdlPv(v1);
}

_BYTE *__fastcall sub_55A030(_QWORD *a1)
{
  _BYTE *result; // x0

  result = (_BYTE *)sub_57D200(1, 1, 1092620291, 0LL, &unk_1326E41, 0);
  *result = 0;
  *a1 = result;
  return result;
}

__int64 __fastcall sub_55A080(__int64 *a1)
{
  __int64 result; // x0

  result = *a1;
  if ( result != 0 )
  {
    result = sub_57EDC0(result, 0LL, &unk_1326E41, 0);
    *a1 = 0;
  }
  return result;
}

_QWORD *__fastcall sub_55A0F0(__int64 a1, __int64 a2)
{
  _QWORD *result; // x0
  _QWORD *v3; // x19

  result = (_QWORD *)sub_561EB0(a1, a2);
  if ( result != nullptr )
  {
    v3 = result;
    result = (_QWORD *)sub_57D200(8, 8, 1092620291, 0LL, &unk_1326E41, 0);
    *result = v3;
  }
  return result;
}

// N5storm4core8internal28ProductImplNetworkStepResultE, virtual slot 5
__int64 __fastcall sub_55D420(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x9
  __int64 v4; // x8

  result = sub_56C9F0(64, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = goff_18EDE08 + 16;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  v3 = ((__int64*)goff_18EE7F0);
  *(_QWORD *)(result + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v3 + 2;
  *(_DWORD *)(result + 32) = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(result + 36) = *(_DWORD *)(a1 + 36);
  *(_QWORD *)(result + 40) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)result = goff_18F9D48 + 16;
  v4 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(result + 56) = *(_DWORD *)(a1 + 56);
  *(_QWORD *)(result + 48) = v4;
  return result;
}

// N5storm6common13NetworkHelper31NetworkInterfacesRecreatedEventE, virtual slot 5
__int64 __fastcall sub_55E1C0(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x9
  __int64 v4; // x8
  __int64 v5; // x9

  result = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = goff_18EDE08 + 16;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  v3 = ((__int64*)goff_18EE7F0);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v3 + 2;
  *(_QWORD *)(result + 24) = v4;
  *(_DWORD *)(result + 32) = *(_DWORD *)(a1 + 32);
  v5 = goff_18F9DD0;
  *(_DWORD *)(result + 36) = *(_DWORD *)(a1 + 36);
  *(_QWORD *)(result + 40) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)result = v5 + 16;
  return result;
}

__int64 __fastcall sub_560980(__int64 *a1)
{
  __int64 i; // x8
  __int64 v2; // x22
  __int64 v4; // x21
  __int64 result; // x0

  v2 = a1[1];
  for ( i = a1[2]; i != v2; i = a1[2] )
  {
    a1[2] = i - 32;
    v4 = *(_QWORD *)(i - 24);
    *(_QWORD *)(i - 24) = 0;
    if ( v4 != 0 )
    {
      sub_58AEC0(v4);
      if ( (*(_BYTE *)(v4 + 144) & 1) != 0 )
        sub_56CA00(*(_QWORD *)(v4 + 160), &unk_1326E41, 0);
      sub_58A960(v4);
      sub_57EDC0(v4, 0LL, &unk_1326E41, 0);
    }
  }
  result = *a1;
  if ( *a1 != 0 )
    return sub_56CA00(result, &unk_1326E41, 0);
  return result;
}

__int64 *__fastcall sub_560A40(__int64 *a1, __int64 *a2)
{
  __int64 v2; // x8
  __int64 v3; // x22
  __int64 v4; // x8
  __int64 v5; // x21
  __int64 v8; // x21
  int v9; // w8
  __int64 v10; // x8

  v2 = *a1;
  *a1 = *a2;
  *a2 = v2;
  v3 = a1[1];
  a1[1] = 0;
  v4 = a2[1];
  a2[1] = 0;
  v5 = a1[1];
  a1[1] = v4;
  if ( v5 != 0 )
  {
    sub_58AEC0(v5);
    if ( (*(_BYTE *)(v5 + 144) & 1) != 0 )
      sub_56CA00(*(_QWORD *)(v5 + 160), &unk_1326E41, 0);
    sub_58A960(v5);
    sub_57EDC0(v5, 0LL, &unk_1326E41, 0);
  }
  v8 = a2[1];
  a2[1] = v3;
  if ( v8 != 0 )
  {
    sub_58AEC0(v8);
    if ( (*(_BYTE *)(v8 + 144) & 1) != 0 )
      sub_56CA00(*(_QWORD *)(v8 + 160), &unk_1326E41, 0);
    sub_58A960(v8);
    sub_57EDC0(v8, 0LL, &unk_1326E41, 0);
  }
  v9 = *((_DWORD *)a1 + 4);
  *((_DWORD *)a1 + 4) = *((_DWORD *)a2 + 4);
  *((_DWORD *)a2 + 4) = v9;
  v10 = a1[3];
  a1[3] = a2[3];
  a2[3] = v10;
  return a1;
}

__int64 __fastcall sub_5612E0(__int64 a1, __int64 a2, char a3)
{
  char v5; // w21
  __int64 result; // x0

  v5 = a3 & 1;
  sub_54C820(a1, 96);
  result = sub_54C810(a1 + 152);
  *(_WORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 320) = a2;
  *(_BYTE *)(a1 + 328) = v5;
  *(_QWORD *)(a1 + 352) = 0;
  *(_QWORD *)(a1 + 360) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 344) = 0;
  return result;
}

__int64 __fastcall sub_562250(__int64 a1)
{
  char *v2; // x20

  v2 = (char *)(a1 + 72);
  std__condition_variable___condition_variable((char *)(a1 + 112));
  std__condition_variable___condition_variable((char *)(a1 + 104));
  std__mutex___mutex(v2);
  sub_56F3C0(a1 + 48, *(_QWORD *)(a1 + 56));
  sub_56F400(a1 + 24, *(_QWORD **)(a1 + 32));
  return sub_56F490(a1, *(_QWORD **)(a1 + 8));
}

__int64 *__fastcall sub_5625F0(char *a1, unsigned __int16 a2)
{
  char *v2; // x19
  char *v5; // x9
  __int64 v6; // x21
  __int64 v7; // t1
  char *v8; // x8
  unsigned int v9; // w10
  bool v10; // cf
  _BOOL4 v11; // w10
  __int64 *v12; // x20

  v2 = (char *)(a1 + 72);
  std__shared_timed_mutex__lock_shared((char *)(a1 + 72));
  v7 = *(_QWORD *)(a1 + 32);
  v6 = a1 + 32;
  v5 = v7;
  if ( v7 == 0 )
    goto LABEL_9;
  v8 = v6;
  do
  {
    v9 = *(unsigned __int16 *)(v5 + 32);
    v10 = v9 >= a2;
    v11 = v9 < a2;
    if ( v10 )
      v8 = v5;
    v5 = *(_QWORD *)(v5 + 8LL * v11);
  }
  while ( v5 != 0 );
  if ( v8 != v6 && *(unsigned __int16 *)(v8 + 32) <= (unsigned int)a2 )
    v12 = (__int64 *)(v8 + 40);
  else
LABEL_9:
    v12 = &qword_1915B90;
  std__shared_timed_mutex__unlock_shared(v2);
  return v12;
}

__int64 __fastcall sub_5664B0(_QWORD *a1)
{
  __int64 result; // x0

  *a1 = ((__int64*)goff_18F9FE8) + 2;
  result = sub_554100(384, 16, 1092657164, &unk_1326E41, 0);
  a1[1] = result;
  return result;
}

// N5storm12SocketSelectE, virtual slot 0
__int64 __fastcall sub_566500(_QWORD *a1)
{
  __int64 v1; // x8

  v1 = a1[1];
  *a1 = ((__int64*)goff_18F9FE8) + 2;
  return sub_554110(v1, &unk_1326E41, 0);
}

// N5storm12SocketSelectE, virtual slot 1
void __fastcall sub_566530(_QWORD *a1)
{
  *a1 = ((__int64*)goff_18F9FE8) + 2;
  sub_554110(a1[1], &unk_1326E41, 0);
  _ZdlPv(a1);
}

__int64 __fastcall sub_56ABE0(__int64 result, unsigned int *a2)
{
  unsigned int v2; // w8
  __int64 v3; // x11
  __int64 v4; // x9
  unsigned int v5; // w12
  bool v6; // cf
  _BOOL4 v7; // w12

  if ( *(_QWORD *)(result + 80) == 0 )
  {
    v2 = *a2;
    if ( *a2 == -1 )
    {
      *(_QWORD *)(result + 80) = 0;
    }
    else
    {
      v3 = *(_QWORD *)(result + 64);
      if ( v3 != 0 )
      {
        v4 = result + 64;
        do
        {
          v5 = *(_DWORD *)(v3 + 32);
          v6 = v5 >= v2;
          v7 = v5 < v2;
          if ( v6 )
            v4 = v3;
          v3 = *(_QWORD *)(v3 + 8LL * v7);
        }
        while ( v3 != 0 );
        if ( v4 != result + 64 && *(_DWORD *)(v4 + 32) <= v2 )
          *(_QWORD *)(result + 80) = *(_QWORD *)(v4 + 40);
      }
    }
  }
  return result;
}

// N5storm5stats20StatsManager_NetworkE, virtual slot 0
__int64 __fastcall sub_56B3F0(__int64 a1)
{
  __int64 *v1; // x8

  v1 = ((__int64*)goff_18FA008) + 18;
  *(_QWORD *)a1 = ((__int64*)goff_18FA008) + 2;
  *(_QWORD *)(a1 + 24) = v1;
  *(_QWORD *)(a1 + 2680) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  sub_577290((unsigned int *)(a1 + 24));
  return nullsub_1096(a1);
}

__int64 __fastcall sub_56B440(__int64 a1)
{
  __int64 *v1; // x8
  __int64 v2; // x19

  v1 = ((__int64*)goff_18FA008) + 18;
  *(_QWORD *)(a1 - 24) = ((__int64*)goff_18FA008) + 2;
  v2 = a1 - 24;
  *(_QWORD *)a1 = v1;
  *(_QWORD *)(a1 + 2656) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  sub_577290((unsigned int *)a1);
  return nullsub_1096(v2);
}

// N5storm5stats20StatsManager_NetworkE, virtual slot 1
void __fastcall sub_56B490(void *a1)
{
  __int64 *v1; // x8

  v1 = ((__int64*)goff_18FA008) + 18;
  *(_QWORD *)a1 = ((__int64*)goff_18FA008) + 2;
  *((_QWORD *)a1 + 3) = v1;
  *((_QWORD *)a1 + 335) = 0;
  *((_QWORD *)a1 + 13) = 0;
  sub_577290((unsigned int *)a1 + 6);
  nullsub_1096(a1);
  _ZdlPv(a1);
}

void __fastcall sub_56B4E0(__int64 a1)
{
  __int64 *v1; // x8
  void *v2; // x19

  v1 = ((__int64*)goff_18FA008) + 18;
  *(_QWORD *)(a1 - 24) = ((__int64*)goff_18FA008) + 2;
  v2 = (void *)(a1 - 24);
  *(_QWORD *)a1 = v1;
  *(_QWORD *)(a1 + 2656) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  sub_577290((unsigned int *)a1);
  nullsub_1096(v2);
  _ZdlPv(v2);
}

// N5storm4CoreE, virtual slot 2
__int64 __fastcall sub_56CBF0(_QWORD *a1)
{
  __int64 v2; // x0
  char *v3; // x20

  v2 = sub_5771D0( 0LL);
  if ( a1 != nullptr )
  {
    v3 = (char *)a1 + *(_QWORD *)(*a1 - 16LL);
    (*(void (__fastcall **)(_QWORD *))*a1)(a1);
    v2 = sub_57EDC0(v3, 0LL, &unk_1326E41, 0);
  }
  nullsub_2(v2);
  sub_36CB0();
  sub_37B00();
  return sub_377F0();
}

// N5storm17CounterDescriptorE, virtual slot 0
__int64 __fastcall sub_56EFD0(__int64 result)
{
  __int64 v1; // x19

  *(_QWORD *)result = ((__int64*)goff_18FA068) + 2;
  v1 = result;
  if ( (*(_BYTE *)(result + 40) & 1) != 0 )
  {
    result = *(_QWORD *)(result + 56);
    if ( result != 0 )
      result = sub_37030(result);
  }
  if ( (*(_BYTE *)(v1 + 16) & 1) != 0 )
  {
    result = *(_QWORD *)(v1 + 32);
    if ( result != 0 )
      return sub_37030(result);
  }
  return result;
}

// N5storm18DynamicTypeFactoryINS_16CounterListEventEEE, virtual slot 2
_QWORD *sub_5703A0()
{
  _QWORD *v0; // x19
  __int64 *v1; // x0
  __int64 v2; // x8

  v0 = (_QWORD *)sub_36EA0(0x48u, 8u, 0, 1092624387);
  v1 = sub_593B50();
  *v0 = 0;
  v0[1] = 0;
  v2 = qword_1915B80;
  *((_DWORD *)v0 + 2) = -1;
  v0[2] = v2;
  v0[3] = 0;
  *v0 = ((__int64*)goff_18FA080) + 2;
  sub_594400(v0 + 4, v1);
  v0[7] = 0;
  v0[8] = 0;
  v0[6] = 0;
  return v0;
}

// N5storm18DynamicTypeFactoryINS_16CounterDataEventEEE, virtual slot 2
_QWORD *sub_570710()
{
  _QWORD *v0; // x19
  __int64 *v1; // x0
  __int64 v2; // x8
  _BYTE v4[16]; // [xsp+0h] [xbp-20h] BYREF

  v0 = (_QWORD *)sub_36EA0(0x48u, 8u, 0, 1092624387);
  v1 = sub_593B50();
  sub_594400(v4, v1);
  *v0 = 0;
  v0[1] = 0;
  v2 = qword_1915B80;
  *((_DWORD *)v0 + 2) = -1;
  v0[2] = v2;
  v0[3] = 0;
  *v0 = ((__int64*)goff_18FA088) + 2;
  sub_594400(v0 + 4, v4);
  v0[7] = 0;
  v0[8] = 0;
  v0[6] = 0;
  return v0;
}

__int64 __fastcall sub_577460(__int64 result, unsigned int a2)
{
  int v2; // w8

  if ( *(unsigned __int16 *)(result + 32) != (unsigned __int16)a2 )
  {
    v2 = *(unsigned __int8 *)(result + 41);
    *(_WORD *)(result + 32) = a2;
    if ( v2 == 28 || v2 == 2 )
      *(_WORD *)(result + 42) = __builtin_bswap32(a2) >> 16;
  }
  return result;
}

// N5storm33NetPropertyTouchedBitsRetrievalOpE, virtual slot 3
__int64 __fastcall sub_584A90(__int64 a1, _BYTE *a2)
{
  __int64 v2; // x21
  _QWORD *v4; // x0
  __int64 v5; // x10
  unsigned __int64 v6; // x9
  unsigned __int64 v8; // x10
  __int64 result; // x0
  char v10; // w8
  __int64 v11; // x9

  v2 = *(_QWORD *)(a1 + 40);
  v4 = *(_QWORD **)(v2 - 16);
  v5 = v4[1] - *v4;
  v6 = *(unsigned int *)(v2 - 8);
  if ( (unsigned int)v6 < (unsigned int)((unsigned __int64)v5 >> 5) )
  {
    v8 = v5 >> 5;
    if ( v8 >= v6 )
    {
      if ( v8 > v6 )
        sub_58EB60((__int64)v4, *v4 + 32 * v6);
    }
    else
    {
      sub_58EBE0(v4, v6 - v8);
    }
  }
  result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 136LL))(a2);
  v10 = a2[25];
  v11 = *(_QWORD *)(v2 - 16);
  *(_BYTE *)(v11 + 24) = result & 1;
  *(_BYTE *)(v11 + 25) = v10;
  if ( *(_BYTE *)(a1 + 24) != 0 )
    result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a2 + 128LL))(a2);
  *(_QWORD *)(a1 + 40) -= 16LL;
  return result;
}

__int64 __fastcall sub_584D60(__int64 result)
{
  __int64 v1; // x19
  __int64 v2; // x20
  bool v3; // zf

  v1 = *(_QWORD *)result;
  v2 = *(_QWORD *)(result + 8);
  v3 = *(_QWORD *)result == v2;
  *(_WORD *)(result + 24) = 0;
  if ( !v3 )
  {
    do
    {
      result = sub_584D60(v1);
      v1 += 32;
    }
    while ( v2 != v1 );
  }
  return result;
}

__int64 __fastcall sub_585990(__int64 a1, _DWORD *a2, __int64 *a3, __int64 a4)
{
  __int64 v4; // x8
  __int64 *v5; // x10
  __int64 v6; // x11
  __int64 *v7; // x9
  __int64 *v8; // x8

  v4 = qword_1916FA8;
  v5 = ((__int64*)goff_18EE7F0);
  v6 = *a3;
  *(_DWORD *)(a1 + 8) = -1;
  v7 = goff_18FA5F8;
  *(_QWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = v5 + 2;
  v8 = v7 + 2;
  *(_DWORD *)(a1 + 32) = *a2;
  LODWORD(v7) = a2[1];
  *(_QWORD *)(a1 + 40) = v6;
  *(_QWORD *)a1 = v8;
  *(_DWORD *)(a1 + 36) = (_DWORD)v7;
  return sub_578210(a1 + 48, a4);
}

__int64 __fastcall sub_5882D0(__int64 a1, __int64 a2, unsigned int a3, char a4, __int64 a5)
{
  __int64 result; // x0
  __int64 v7; // x8

  result = sub_5771E0(a1, 0LL, a2, a3, a4 & 1, a5);
  *(_QWORD *)(a1 + 48) = 0;
  v7 = ((__int64*)goff_18FA678);
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)a1 = v7 + 16;
  *(_BYTE *)(a1 + 56) = 1;
  return result;
}

_Bool __fastcall sub_589B10(__int64 a1)
{
  unsigned int v1; // w8
  unsigned int v2; // w9
  unsigned int v3; // w10

  v1 = *(_DWORD *)(a1 + 28);
  if ( (v1 & 7) != 0 )
  {
    v2 = 8 - (*(_DWORD *)(a1 + 28) & 7);
    v3 = *(_DWORD *)(a1 + 32);
    if ( v3 <= v1 )
      v3 = *(_DWORD *)(a1 + 28);
    if ( v3 - v1 < v2 )
      return 0;
    *(_DWORD *)(a1 + 28) = v2 + v1;
  }
  return 1;
}

_Bool __fastcall sub_589B60(__int64 a1)
{
  unsigned int v1; // w8
  unsigned int v2; // w9
  unsigned int v3; // w10

  v1 = *(_DWORD *)(a1 + 32);
  if ( (v1 & 7) != 0 )
  {
    v2 = 8 - (*(_DWORD *)(a1 + 32) & 7);
    v3 = *(_DWORD *)(a1 + 24);
    if ( v3 <= v1 )
      v3 = *(_DWORD *)(a1 + 32);
    if ( v3 - v1 < v2 )
      return 0;
    *(_DWORD *)(a1 + 32) = v2 + v1;
  }
  return 1;
}

// N5storm17NetPropertyBufferE, virtual slot 5
__int64 __fastcall sub_58C990(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(64, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_583700(v2, a1);
  return v2;
}

// N5storm10SystemTimeE, virtual slot 2
unsigned __int64 __fastcall sub_58F430(char *a1)
{
  return (unsigned __int64)(1000LL * nn__os__GetSystemTick(a1)) / *(_QWORD *)((__int64*)goff_18F13E8) / 0x3E8;
}

__int64 *__fastcall sub_5A2FE0(__int64 a1, _BYTE *a2)
{
  char *v2; // x19
  __int64 **v5; // x0
  __int64 *v6; // x20

  v2 = (char *)(a1 + 3880);
  std__shared_timed_mutex__lock_shared((char *)(a1 + 3880));
  v5 = sub_5CE340((_QWORD *)(a1 + 112), a2);
  if ( v5 != nullptr )
    v6 = v5[5];
  else
    v6 = nullptr;
  std__shared_timed_mutex__unlock_shared(v2);
  return v6;
}

__int64 __fastcall sub_5A3980(__int64 a1, unsigned int *a2)
{
  char *v2; // x19
  unsigned __int64 v5; // x8
  __int64 v6; // x20

  v2 = (char *)(a1 + 3880);
  std__shared_timed_mutex__lock_shared((char *)(a1 + 3880));
  v5 = *a2;
  if ( (unsigned int)v5 <= 0x7F && (*(_QWORD *)(a1 + ((v5 >> 3) & 0x1FFFFFF8) + 152) & (1LL << v5)) != 0 )
    v6 = *(_QWORD *)(a1 + 16 * v5 + 704);
  else
    v6 = 0;
  std__shared_timed_mutex__unlock_shared(v2);
  return v6;
}

bool __fastcall sub_5B55A0(__int64 a1, _DWORD *a2)
{
  char *v2; // x19
  unsigned __int64 v5; // x8
  __int64 v6; // x8
  _BOOL4 v7; // w20

  if ( *a2 == -1 )
  {
    return false;
  }
  else
  {
    v2 = (char *)(a1 + 4936);
    std__shared_timed_mutex__lock_shared((char *)(a1 + 4936));
    v5 = (unsigned int)*a2;
    v7 = (unsigned int)v5 <= 0x7F
      && (*(_QWORD *)(a1 + ((v5 >> 3) & 0x1FFFFFF8) + 216) & (1LL << v5)) != 0
      && (v6 = *(_QWORD *)(a1 + 24 * v5 + 776)) != 0
      && *(_QWORD *)(v6 + 8) != -1;
    std__shared_timed_mutex__unlock_shared(v2);
  }
  return v7;
}

bool __fastcall sub_5B5650(__int64 a1, _BYTE *a2)
{
  char *v2; // x19
  __int64 **v5; // x0
  __int64 *v6; // x8
  _BOOL4 v7; // w20

  if ( *a2 != 0 )
  {
    v2 = (char *)(a1 + 4936);
    std__shared_timed_mutex__lock_shared((char *)(a1 + 4936));
    v5 = sub_5D0AC0((_QWORD *)(a1 + 4872), a2);
    v7 = v5 != nullptr && (v6 = v5[6]) != nullptr && v6[1] != -1;
    std__shared_timed_mutex__unlock_shared(v2);
  }
  else
  {
    return false;
  }
  return v7;
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

// N5storm9transport6packet7inEvent14PacketReceivedE, virtual slot 1
__int64 __fastcall sub_5C10A0(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x22
  __int64 v4; // x0
  unsigned int v5; // w21
  __int64 v6; // x0

  *(_QWORD *)a1 = ((__int64*)goff_18FADA8) + 2;
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

  *a1 = ((__int64*)goff_18FADC0) + 2;
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

  *a1 = ((__int64*)goff_18FADC0) + 2;
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
  *(_QWORD *)v2 = goff_18EDE08 + 16;
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

  *a1 = ((__int64*)goff_18FAB60) + 2;
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

  *a1 = ((__int64*)goff_18FAB60) + 2;
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
  *(_QWORD *)v2 = goff_18EDE08 + 16;
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

// N5storm9transport6packet7inEvent24ConnectionPacketReceivedE, virtual slot 5
__int64 __fastcall sub_5C1CE0(__int64 a1)
{
  __int64 v2; // x0
  __int64 *v3; // x9
  __int64 v4; // x20
  __int64 v5; // x8

  v2 = sub_56C9F0(224, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = goff_18FAB70;
  *(_QWORD *)v2 = goff_18EDE08 + 16;
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
  *(_QWORD *)v2 = goff_18EDE08 + 16;
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = ((__int64*)goff_18FAB68) + 2;
  v3 = v2;
  *(_WORD *)(v2 + 32) = *(_WORD *)(a1 + 32);
  sub_578210(v2 + 40, a1 + 40);
  v4 = *(_QWORD *)(a1 + 224);
  *(_QWORD *)(v3 + 216) = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(v3 + 224) = v4;
  return v3;
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

  *a1 = ((__int64*)goff_18FBA40) + 2;
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

  *a1 = ((__int64*)goff_18FBA38) + 2;
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
  *(_QWORD *)a1 = ((__int64*)goff_18FB348) + 2;
  if ( (*(_BYTE *)(a1 + 368) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 384), &unk_1326E41, 0);
  sub_578410(a1 + 184);
  return sub_578410(a1 + 8);
}

// N5storm5punch8internal7inEvent18GetSpecificMappingE, virtual slot 0
__int64 __fastcall sub_601E00(_QWORD *a1)
{
  __int64 result; // x0

  *a1 = ((__int64*)goff_18FBA48) + 2;
  sub_5F7870(a1 + 5);
  result = a1[4];
  a1[4] = 0;
  if ( result != 0 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  return result;
}

// N5storm5punch9Traversal30MpeExternalAddressChangedEventE, virtual slot 5
__int64 __fastcall sub_603600(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x9
  __int64 v4; // x20

  v2 = sub_56C9F0(208, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = ((__int64*)goff_18FB7E8);
  *(_QWORD *)v2 = goff_18EDE08 + 16;
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
  *a1 = ((__int64*)goff_18FBB00) + 2;
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
  *(_QWORD *)result = goff_18EDE08 + 16;
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
  *(_QWORD *)a1 = ((__int64*)goff_18FB340) + 2;
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
  *(_QWORD *)a1 = ((__int64*)goff_18FB340) + 2;
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
  *(_QWORD *)result = goff_18EDE08 + 16;
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
  *(_QWORD *)a1 = ((__int64*)goff_18FB8A0) + 2;
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
  *(_QWORD *)v2 = goff_18EDE08 + 16;
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
  *a1 = ((__int64*)goff_18FB8A8) + 2;
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
  *(_QWORD *)v2 = goff_18EDE08 + 16;
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = ((__int64*)goff_18EE7F0) + 2;
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
  *(_QWORD *)a1 = ((__int64*)goff_18FB8B0) + 2;
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
  *(_QWORD *)v2 = goff_18EDE08 + 16;
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

// N5storm5punch8internal7inEvent18RefreshEntryResultE, virtual slot 1
__int64 __fastcall sub_6071B0(_QWORD *a1)
{
  *a1 = ((__int64*)goff_18FB8B8) + 2;
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
  *(_QWORD *)v2 = ((__int64*)goff_18EE7F0) + 2;
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(v2 + 36) = *(_DWORD *)(a1 + 36);
  *(_QWORD *)(v2 + 40) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)v2 = ((__int64*)goff_18FB8B8) + 2;
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
  *(_QWORD *)a1 = ((__int64*)goff_18FB930) + 2;
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
  *(_QWORD *)v2 = goff_18EDE08 + 16;
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v4 = v2;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 2;
  sub_620660(v2 + 32, a1 + 32);
  return v4;
}

// N5storm5punch8internal7inEvent14AddPortMappingE, virtual slot 1
__int64 __fastcall sub_607D50(_QWORD *a1)
{
  __int64 v2; // x0

  *a1 = ((__int64*)goff_18FBA38) + 2;
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

  *a1 = ((__int64*)goff_18FBA40) + 2;
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

  *a1 = ((__int64*)goff_18FBA48) + 2;
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
  *(_QWORD *)a1 = ((__int64*)goff_18FBB08) + 2;
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
  *(_QWORD *)v2 = goff_18EDE08 + 16;
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

// N5storm5punch20UpnpThreadCommandAddE, virtual slot 0
__int64 __fastcall sub_6093D0(__int64 a1)
{
  *(_QWORD *)a1 = ((__int64*)goff_18FB960) + 2;
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

// N5storm5punch9Traversal22EndpointConnectedEventE, virtual slot 1
__int64 __fastcall sub_60A940(__int64 a1)
{
  sub_60A870();
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch13detectNatType24EventReceiveCommandReplyE, virtual slot 1
__int64 __fastcall sub_60E1B0(_QWORD *a1)
{
  *a1 = ((__int64*)goff_18FB108) + 2;
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
  *(_QWORD *)v2 = goff_18EDE08 + 16;
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v4 = (_QWORD *)v2;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 2;
  sub_578210(v2 + 32, a1 + 32);
  *v4 = ((__int64*)goff_18FB120) + 2;
  return v4;
}

// N5storm5punch13detectNatType23EventBaseReceiveCommandE, virtual slot 1
__int64 __fastcall sub_60E4F0(_QWORD *a1)
{
  *a1 = ((__int64*)goff_18FB108) + 2;
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
  *(_QWORD *)v2 = goff_18EDE08 + 16;
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
  *a1 = ((__int64*)goff_18FB108) + 2;
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
  *(_QWORD *)v2 = goff_18EDE08 + 16;
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v4 = (_QWORD *)v2;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 2;
  sub_578210(v2 + 32, a1 + 32);
  *v4 = ((__int64*)goff_18FB118) + 2;
  return v4;
}

// N5storm5punch13detectNatType34EventReceiveCommandReplyNextServerE, virtual slot 1
__int64 __fastcall sub_60EBB0(_QWORD *a1)
{
  *a1 = ((__int64*)goff_18FB108) + 2;
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
  *(_QWORD *)v2 = goff_18EDE08 + 16;
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v4 = (_QWORD *)v2;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 2;
  sub_578210(v2 + 32, a1 + 32);
  *v4 = ((__int64*)goff_18FB110) + 2;
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
  *(_QWORD *)v2 = goff_18EDE08 + 16;
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 16;
  *(_QWORD *)(v2 + 24) = v5;
  v6 = v2;
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)v2 = v4 + 2;
  v9 = ((__int64*)goff_18F6C48) + 2;
  *(_QWORD *)(v2 + 32) = v7;
  *(_QWORD *)(v2 + 40) = v8;
  *(_QWORD *)(v2 + 48) = v9;
  sub_594400(v2 + 56, a1 + 56);
  *(_QWORD *)(v6 + 48) = ((__int64*)goff_18FB1E0) + 2;
  return v6;
}

// N5storm5punch7inEvent24RegisterMpePacketHandlerE, virtual slot 1
__int64 __fastcall sub_610F50(_QWORD *a1)
{
  __int64 v2; // x0

  *a1 = ((__int64*)goff_18FB2F0) + 2;
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

  *a1 = ((__int64*)goff_18FB2F8) + 2;
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

  *a1 = ((__int64*)goff_18FB2F8) + 2;
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

  *(_QWORD *)result = ((__int64*)goff_18FC1D0) + 2;
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
  *(_QWORD *)a1 = ((__int64*)goff_18FC1D0) + 2;
  if ( (*(_BYTE *)(a1 + 64) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 80), &unk_1326E41, 0);
  if ( (*(_BYTE *)(a1 + 40) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 56), &unk_1326E41, 0);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm5punch7inEvent18RegisterMpeAddressE, virtual slot 1
__int64 __fastcall sub_613A80(_QWORD *a1)
{
  *a1 = ((__int64*)goff_18FB310) + 2;
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
  *(_QWORD *)v2 = goff_18EDE08 + 16;
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
  *a1 = ((__int64*)goff_18FB318) + 2;
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
  *(_QWORD *)v2 = goff_18EDE08 + 16;
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
  *a1 = ((__int64*)goff_18FB348) + 2;
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
  *(_QWORD *)result = goff_18EDE08 + 16;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(result + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = ((__int64*)goff_18FB360) + 2;
  v3 = *(_DWORD *)(a1 + 32);
  *(_BYTE *)(result + 36) = *(_BYTE *)(a1 + 36);
  *(_DWORD *)(result + 32) = v3;
  return result;
}

// N5storm5punch14traversalLogin28EventReceiveChallengeRequestE, virtual slot 5
__int64 __fastcall sub_61B000(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x9
  __int64 v4; // x20

  v2 = sub_56C9F0(232, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = goff_18EDE08 + 16;
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
  *(_QWORD *)result = goff_18EDE08 + 16;
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
  *(_QWORD *)result = goff_18EDE08 + 16;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(result + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = goff_18FB7F8 + 16;
  v3 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(result + 40) = *(_DWORD *)(a1 + 40);
  *(_QWORD *)(result + 32) = v3;
  *(_QWORD *)(result + 48) = *(_QWORD *)(a1 + 48);
  LODWORD(v3) = *(_DWORD *)(a1 + 56);
  *(_BYTE *)(result + 60) = *(_BYTE *)(a1 + 60);
  *(_DWORD *)(result + 56) = v3;
  return result;
}

// N5storm5punch14traversalProbe24EventCommandProbeRequestE, virtual slot 5
__int64 __fastcall sub_61E5C0(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x9
  __int64 v4; // x20

  v2 = sub_56C9F0(208, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = ((__int64*)goff_18FB6E0);
  *(_QWORD *)v2 = goff_18EDE08 + 16;
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v4 = v2;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 16;
  sub_578210(v2 + 32, a1 + 32);
  return v4;
}

// N5storm5punch14traversalProbe22EventCommandProbeReplyE, virtual slot 5
_QWORD *__fastcall sub_61E900(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x9
  _QWORD *v4; // x20

  v2 = sub_56C9F0(216, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = ((__int64*)goff_18FB6E0);
  *(_QWORD *)v2 = goff_18EDE08 + 16;
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v4 = (_QWORD *)v2;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 16;
  sub_578210(v2 + 32, a1 + 32);
  *v4 = goff_18FB6F0 + 16;
  v4[26] = *(_QWORD *)(a1 + 208);
  return v4;
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
  *(_QWORD *)v2 = goff_18EDE08 + 16;
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v4 = (_QWORD *)v2;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 16;
  sub_578210(v2 + 32, a1 + 32);
  v5 = ((__int64*)goff_18FB6E8);
  *v4 = goff_18FB6F0 + 16;
  v4[26] = *(_QWORD *)(a1 + 208);
  *v4 = v5 + 16;
  return v4;
}

// N5storm5punch22UpnpThreadStartupParamE, virtual slot 1
void __fastcall sub_620F70(_QWORD *a1)
{
  *a1 = ((__int64*)goff_18FBAF8) + 2;
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

__int64 __fastcall sub_62CA70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, unsigned int a7)
{
  return sub_62C760(a1, a2, a3, a4, a5, a6, "1.1", a7);
}

void sub_62E290()
{
  _QWORD *v0; // x9

  v0 = goff_18FC9B8;
  *(_QWORD *)goff_18FC9E8 = 0;
  *v0 = 0;
  *(_QWORD *)goff_18FC9C0 = 0;
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

