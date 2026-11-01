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
__int64 Recovered_ResultTextCopy();
__int64 _ZdlPv();
extern __attribute__((visibility("hidden"))) int dword_1372C60[];
extern __attribute__((visibility("hidden"))) int dword_1385494[];
extern __attribute__((visibility("hidden"))) int dword_1915530;
extern __attribute__((visibility("hidden"))) int dword_1915534;
extern char goff_17C1000[];
extern char goff_18EDCC8[];
extern char goff_18EDDC0[];
extern char goff_18EDE08[];
extern char goff_18EDE48[];
extern char goff_18EDE50[];
extern char goff_18EDE58[];
extern char goff_18EDE60[];
extern char goff_18EE7F0[];
extern char goff_18EFA10[];
extern char goff_18F13E8[];
extern char goff_18F14C0[];
extern char goff_18F1DB0[];
extern char goff_18F3038[];
extern char goff_18F3040[];
extern char goff_18F4340[];
extern char goff_18F44E8[];
extern char goff_18F4590[];
extern char goff_18F45A0[];
extern char goff_18F45C8[];
extern char goff_18F4930[];
extern char goff_18F4AE8[];
extern char goff_18F57E0[];
extern char goff_18F5838[];
extern char goff_18F5840[];
extern char goff_18F5860[];
extern char goff_18F58C8[];
extern char goff_18F58F0[];
extern char goff_18F5920[];
extern char goff_18F5A00[];
extern char goff_18F5A08[];
extern char goff_18F5A10[];
extern char goff_18F5A38[];
extern char goff_18F5A58[];
extern char goff_18F5A80[];
extern char goff_18F5A88[];
extern char goff_18F5A98[];
extern char goff_18F5B50[];
extern char goff_18F5B60[];
extern char goff_18F5B78[];
extern char goff_18F5B80[];
extern char goff_18F5BA8[];
extern char goff_18F5EB0[];
extern char goff_18F5EB8[];
extern char goff_18F6310[];
extern char goff_18F67F0[];
extern char goff_18F6830[];
extern char goff_18F6C58[];
extern char goff_18F6C68[];
extern char goff_18F6C80[];
extern char goff_18F6C88[];
extern char goff_18F6C90[];
extern char goff_18F6CA0[];
extern char goff_18F6CA8[];
extern char goff_18F6DF8[];
extern char goff_18F6E20[];
extern char goff_18F6F00[];
extern char goff_18F7000[];
extern char goff_18F7008[];
extern char goff_18F7038[];
extern char goff_18F7048[];
extern char goff_18F7058[];
extern char goff_18F7080[];
extern char goff_18F7088[];
extern char goff_18F7090[];
extern char goff_18F7098[];
extern char goff_18F70A0[];
extern char goff_18F70B0[];
extern char goff_18F70E8[];
extern char goff_18F79D8[];
extern char goff_18F7A68[];
extern char goff_18F86F0[];
extern char goff_18F87A8[];
extern char goff_18F87B0[];
extern char goff_18F88D8[];
extern char goff_18F8B68[];
extern char goff_18F8CC8[];
extern char goff_18F8D00[];
extern char goff_18F8F30[];
extern char goff_18F8F68[];
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
extern char goff_18F9360[];
extern char goff_18F93F0[];
extern char goff_18F9458[];
extern char goff_18F9470[];
extern char goff_18F9478[];
extern char goff_18F9480[];
extern char goff_18F9488[];
extern char goff_18F94A0[];
extern char goff_18F94B0[];
extern char goff_18F94B8[];
extern char goff_18F94C0[];
extern char goff_18F94C8[];
extern char goff_18F94D0[];
extern char goff_18F94E0[];
extern char goff_18F9508[];
extern char goff_18F9510[];
extern char goff_18F9538[];
extern char goff_18F9540[];
extern char goff_18F9548[];
extern char goff_18F9550[];
extern char goff_18F95B0[];
extern char goff_18F95B8[];
extern char goff_18F95C0[];
extern char goff_18F95E0[];
extern char goff_18F9608[];
extern char goff_18F9658[];
extern char goff_18F9678[];
extern char goff_18F9680[];
extern char goff_18F96A0[];
extern char goff_18F96A8[];
extern char goff_18F96B0[];
extern char goff_18F96C0[];
extern char goff_18F96C8[];
extern char goff_18F9708[];
extern char goff_18F9800[];
extern char goff_18F9808[];
extern char goff_18F9850[];
extern char goff_18F9860[];
extern char goff_18F98F0[];
extern char goff_18F9948[];
extern char goff_18F99A8[];
extern char goff_18F9A00[];
extern char goff_18F9A50[];
extern char goff_18F9A98[];
extern char goff_18F9AB0[];
extern char goff_18F9AB8[];
extern char goff_18F9AC0[];
extern char goff_18F9AD8[];
extern char goff_18F9AE0[];
extern char goff_18F9AE8[];
extern char goff_18F9AF0[];
extern char goff_18F9BF8[];
extern char goff_18F9C08[];
extern char goff_18F9C18[];
extern char goff_18F9CE0[];
extern char goff_18F9D48[];
extern char goff_18F9D50[];
extern char goff_18F9DD0[];
extern char goff_18F9DE0[];
extern char goff_18F9FE0[];
extern __attribute__((visibility("hidden"))) char hoff_17C1000[];
__int64 nn__os__GetSystemTick();
__attribute__((visibility("hidden"))) __int64 nullsub_1096();
__attribute__((visibility("hidden"))) __int64 nullsub_1576();
__attribute__((visibility("hidden"))) __int64 nullsub_1627();
__attribute__((visibility("hidden"))) __int64 nullsub_1682();
__int64 pthread_mutex_destroy();
extern __attribute__((visibility("hidden"))) __int64 qword_1909240;
extern __attribute__((visibility("hidden"))) __int64 qword_1912460;
extern __attribute__((visibility("hidden"))) __int64 qword_19148A0;
extern __attribute__((visibility("hidden"))) __int64 qword_1915428;
extern __attribute__((visibility("hidden"))) __int64 qword_19154A8;
extern __attribute__((visibility("hidden"))) __int64 qword_1915508;
extern __attribute__((visibility("hidden"))) __int64 qword_1915908;
extern __attribute__((visibility("hidden"))) __int64 qword_1915B90;
__int64 std____shared_weak_count____release_weak();
__int64 std__condition_variable___condition_variable();
__int64 std__mutex___mutex();
__int64 std__recursive_mutex__lock();
__int64 std__recursive_mutex__unlock();
__int64 std__shared_timed_mutex__lock_shared();
__int64 std__shared_timed_mutex__unlock_shared();
__attribute__((visibility("hidden"))) __int64 sub_1E5980();
__attribute__((visibility("hidden"))) __int64 sub_250();
__attribute__((visibility("hidden"))) __int64 sub_25ECB0();
__attribute__((visibility("hidden"))) __int64 sub_268070();
__attribute__((visibility("hidden"))) __int64 sub_26E9F0();
__attribute__((visibility("hidden"))) __int64 sub_290830();
__attribute__((visibility("hidden"))) __int64 sub_298DF0();
__attribute__((visibility("hidden"))) __int64 sub_2B89E0();
__attribute__((visibility("hidden"))) __int64 sub_2BA6D0();
__attribute__((visibility("hidden"))) __int64 sub_2C3070();
__attribute__((visibility("hidden"))) __int64 sub_306570();
__attribute__((visibility("hidden"))) __int64 sub_36EA0();
__attribute__((visibility("hidden"))) __int64 sub_37030();
__attribute__((visibility("hidden"))) __int64 sub_370A0();
__attribute__((visibility("hidden"))) __int64 sub_388D00();
__attribute__((visibility("hidden"))) __int64 sub_3AC700();
__attribute__((visibility("hidden"))) __int64 sub_3BEA50();
__attribute__((visibility("hidden"))) __int64 sub_3BEB30();
__attribute__((visibility("hidden"))) __int64 sub_3DEA60();
__attribute__((visibility("hidden"))) __int64 sub_3F6230();
__attribute__((visibility("hidden"))) __int64 sub_3FA7E0();
__attribute__((visibility("hidden"))) __int64 sub_418470();
__attribute__((visibility("hidden"))) __int64 sub_419E30();
__attribute__((visibility("hidden"))) __int64 sub_435300();
__attribute__((visibility("hidden"))) __int64 sub_448860();
__attribute__((visibility("hidden"))) __int64 sub_44C780();
__attribute__((visibility("hidden"))) __int64 sub_44FF50();
__attribute__((visibility("hidden"))) __int64 sub_451610();
__attribute__((visibility("hidden"))) __int64 sub_453A80();
__attribute__((visibility("hidden"))) __int64 sub_455B70();
__attribute__((visibility("hidden"))) __int64 sub_4655D0();
__attribute__((visibility("hidden"))) __int64 sub_467120();
__attribute__((visibility("hidden"))) __int64 sub_483450();
__attribute__((visibility("hidden"))) __int64 sub_483BF0();
__attribute__((visibility("hidden"))) __int64 sub_48A400();
__attribute__((visibility("hidden"))) __int64 sub_48B5F0();
__attribute__((visibility("hidden"))) __int64 sub_496940();
__attribute__((visibility("hidden"))) __int64 sub_4A7340();
__attribute__((visibility("hidden"))) __int64 sub_4C9920();
__attribute__((visibility("hidden"))) __int64 sub_4CA100();
__attribute__((visibility("hidden"))) __int64 sub_4D44F0();
__attribute__((visibility("hidden"))) __int64 sub_4DDCC0();
__attribute__((visibility("hidden"))) __int64 sub_4DFE80();
__attribute__((visibility("hidden"))) __int64 sub_4EB320();
__attribute__((visibility("hidden"))) __int64 sub_4EB340();
__attribute__((visibility("hidden"))) __int64 sub_4EB350();
__attribute__((visibility("hidden"))) __int64 sub_4EB3D0();
__attribute__((visibility("hidden"))) __int64 sub_4EC170();
__attribute__((visibility("hidden"))) __int64 sub_4ED030();
__attribute__((visibility("hidden"))) _Bool sub_4ED190();
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
__attribute__((visibility("hidden"))) __int64 sub_4EF540();
__attribute__((visibility("hidden"))) __int64 sub_4EF9A0();
__attribute__((visibility("hidden"))) __int64 sub_4EFA90();
__attribute__((visibility("hidden"))) __int64 sub_4F0040();
__attribute__((visibility("hidden"))) __int64 sub_4F02D0();
__attribute__((visibility("hidden"))) __int64 sub_4F03B0();
__attribute__((visibility("hidden"))) __int64 sub_4F2190();
__attribute__((visibility("hidden"))) __int64 sub_4F2360();
__attribute__((visibility("hidden"))) __int64 sub_4F2FA0();
__attribute__((visibility("hidden"))) __int64 sub_4F30C0();
__attribute__((visibility("hidden"))) __int64 sub_4F4330();
__attribute__((visibility("hidden"))) __int64 sub_4F47B0();
__attribute__((visibility("hidden"))) __int64 sub_4F48B0();
__attribute__((visibility("hidden"))) __int64 sub_4F49F0();
__attribute__((visibility("hidden"))) __int64 sub_4F4F60();
__attribute__((visibility("hidden"))) __int64 sub_4F5220();
__attribute__((visibility("hidden"))) __int64 sub_4F5410();
__attribute__((visibility("hidden"))) __int64 sub_4F5C90();
__attribute__((visibility("hidden"))) __int64 sub_4F61C0();
__attribute__((visibility("hidden"))) __int64 sub_4F8040();
__attribute__((visibility("hidden"))) __int64 sub_4FAFD0();
__attribute__((visibility("hidden"))) __int64 sub_4FB800();
__attribute__((visibility("hidden"))) __int64 sub_4FB9D0();
__attribute__((visibility("hidden"))) __int64 sub_4FC1E0();
__attribute__((visibility("hidden"))) unsigned int sub_4FC1F0();
__attribute__((visibility("hidden"))) unsigned int sub_4FC220();
__attribute__((visibility("hidden"))) __int64 sub_4FC710();
__attribute__((visibility("hidden"))) __int64 sub_4FD720();
__attribute__((visibility("hidden"))) __int64 sub_502D30();
__attribute__((visibility("hidden"))) __int64 sub_503FF0();
__attribute__((visibility("hidden"))) __int64 sub_504140();
__attribute__((visibility("hidden"))) __int64 sub_504170();
__attribute__((visibility("hidden"))) __int64 sub_505D60();
__attribute__((visibility("hidden"))) unsigned int sub_505FB0();
__attribute__((visibility("hidden"))) __int64 sub_505FC0();
__attribute__((visibility("hidden"))) __int64 sub_507E40();
__attribute__((visibility("hidden"))) __int64 sub_508970();
__attribute__((visibility("hidden"))) __int64 sub_5089B0();
__attribute__((visibility("hidden"))) __int64 sub_5089F0();
__attribute__((visibility("hidden"))) __int64 sub_5098B0();
__attribute__((visibility("hidden"))) _Bool sub_50B8E0();
__attribute__((visibility("hidden"))) __int64 sub_50EA00();
__attribute__((visibility("hidden"))) __int64 sub_50EB70();
__attribute__((visibility("hidden"))) __int64 sub_50EF00();
__attribute__((visibility("hidden"))) __int64 sub_50F850();
__attribute__((visibility("hidden"))) __int64 sub_510D80();
__attribute__((visibility("hidden"))) __int64 sub_510F10();
__attribute__((visibility("hidden"))) __int64 sub_511790();
__attribute__((visibility("hidden"))) __int64 sub_511800();
__attribute__((visibility("hidden"))) __int64 sub_511C20();
__attribute__((visibility("hidden"))) __int64 sub_5150D0();
__attribute__((visibility("hidden"))) __int64 sub_515C10();
__attribute__((visibility("hidden"))) __int64 sub_5174F0();
__attribute__((visibility("hidden"))) __int64 sub_518FE0();
__attribute__((visibility("hidden"))) __int64 sub_51A630();
__attribute__((visibility("hidden"))) __int64 sub_51A700();
__attribute__((visibility("hidden"))) __int64 sub_51B010();
__attribute__((visibility("hidden"))) __int64 sub_51D650();
__attribute__((visibility("hidden"))) __int64 sub_51D670();
__attribute__((visibility("hidden"))) __int64 sub_51D8C0();
__attribute__((visibility("hidden"))) __int64 sub_51E060();
__attribute__((visibility("hidden"))) __int64 sub_51F450();
__attribute__((visibility("hidden"))) __int64 sub_51F7E0();
__attribute__((visibility("hidden"))) __int64 sub_520530();
__attribute__((visibility("hidden"))) __int64 sub_520750();
__attribute__((visibility("hidden"))) __int64 sub_520840();
__attribute__((visibility("hidden"))) __int64 sub_5208B0();
__attribute__((visibility("hidden"))) __int64 sub_520FB0();
__attribute__((visibility("hidden"))) __int64 sub_521AD0();
__attribute__((visibility("hidden"))) __int64 sub_52B270();
__attribute__((visibility("hidden"))) __int64 sub_530A10();
__attribute__((visibility("hidden"))) __int64 sub_530AD0();
__attribute__((visibility("hidden"))) __int64 sub_539810();
__attribute__((visibility("hidden"))) __int64 sub_53CE50();
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
__attribute__((visibility("hidden"))) __int64 sub_554110();
__attribute__((visibility("hidden"))) __int64 sub_561EB0();
__attribute__((visibility("hidden"))) __int64 sub_56C9F0();
__attribute__((visibility("hidden"))) __int64 sub_56CA00();
__attribute__((visibility("hidden"))) __int64 sub_56CA10();
__attribute__((visibility("hidden"))) __int64 sub_56DC30();
__attribute__((visibility("hidden"))) __int64 sub_56F3C0();
__attribute__((visibility("hidden"))) __int64 sub_56F400();
__attribute__((visibility("hidden"))) __int64 sub_56F490();
__attribute__((visibility("hidden"))) __int64 sub_56F9A0();
__attribute__((visibility("hidden"))) _Bool sub_576540();
__attribute__((visibility("hidden"))) __int64 sub_5771E0();
__attribute__((visibility("hidden"))) __int64 sub_577290();
__attribute__((visibility("hidden"))) __int64 sub_578210();
__attribute__((visibility("hidden"))) __int64 sub_57D200();
__attribute__((visibility("hidden"))) __int64 sub_57EDC0();
__attribute__((visibility("hidden"))) __int64 sub_57EF40();
__attribute__((visibility("hidden"))) __int64 sub_57EFA0();
__attribute__((visibility("hidden"))) __int64 sub_57F030();
__attribute__((visibility("hidden"))) __int64 sub_57F040();
__attribute__((visibility("hidden"))) __int64 sub_57F050();
__attribute__((visibility("hidden"))) __int64 sub_57F070();
__attribute__((visibility("hidden"))) _Bool sub_57F110();
__attribute__((visibility("hidden"))) __int64 sub_57F1B0();
__attribute__((visibility("hidden"))) __int64 sub_583240();
__attribute__((visibility("hidden"))) __int64 sub_583700();
__attribute__((visibility("hidden"))) __int64 sub_58A960();
__attribute__((visibility("hidden"))) __int64 sub_58AEC0();
__attribute__((visibility("hidden"))) __int64 sub_58B010();
__attribute__((visibility("hidden"))) __int64 sub_58C2A0();
__attribute__((visibility("hidden"))) __int64 sub_58C7A0();
__attribute__((visibility("hidden"))) __int64 sub_593BB0();
__attribute__((visibility("hidden"))) __int64 sub_596B20();
__attribute__((visibility("hidden"))) __int64 sub_5B87B0();
extern __attribute__((visibility("hidden"))) char unk_1326E41;
extern __attribute__((visibility("hidden"))) char unk_13610A8;

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

void sub_2FAC80(__int64 result, _QWORD *a2)
{
  __int64 v3; // x20
  __int64 v4; // x20

  if ( a2 != nullptr )
  {
    v3 = result;
    sub_2FAC80(result, *a2);
    sub_2FAC80(v3, a2[1]);
    v4 = a2[5];
    a2[5] = 0;
    if ( v4 != 0 )
    {
      sub_306570(v4);
      sub_57EDC0(v4, 0LL, &unk_1326E41, 0);
    }
    { sub_56CA00(a2, &unk_1326E41, 0); return; }
  }
  return;
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
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18F3040) + 2);
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

_QWORD *__fastcall sub_329CD0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6, __int64 a7)
{
  __int64 *v12; // x8
  __int64 v14; // [xsp+8h] [xbp-28h] BYREF

  v14 = qword_1909240;
  sub_2BA6D0(a1, a2, a3, 0xFFFFFFFFLL, &v14);
  v12 = ((__int64*)goff_18F3038);
  *(_QWORD *)a1 = v12 + 2;
  *(_DWORD *)(a1 + 56) = a4;
  *(_DWORD *)(a1 + 60) = a5;
  sub_2B89E0(a1 + 64, a6);
  return sub_578210((_QWORD *)(a1 + 144), a7);
}

// N5storm4echo5group16ConnectionEvents7ReachedE, virtual slot 5
__int64 __fastcall sub_3D7C70(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x9
  __int64 v4; // x8
  __int64 *v5; // x9
  __int64 v6; // x8
  __int64 v7; // x9

  result = sub_56C9F0(64, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  v3 = ((__int64*)goff_18F4590);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v3 + 2;
  *(_QWORD *)(result + 24) = v4;
  *(_DWORD *)(result + 32) = *(_DWORD *)(a1 + 32);
  v5 = ((__int64*)goff_18F45C8);
  *(_WORD *)(result + 36) = *(_WORD *)(a1 + 36);
  LOBYTE(v4) = *(_BYTE *)(a1 + 38);
  *(_QWORD *)result = v5 + 2;
  *(_BYTE *)(result + 38) = v4;
  v6 = *(_QWORD *)(a1 + 39);
  v7 = *(_QWORD *)(a1 + 47);
  *(_DWORD *)(result + 54) = *(_DWORD *)(a1 + 54);
  *(_QWORD *)(result + 47) = v7;
  *(_QWORD *)(result + 39) = v6;
  return result;
}

// N5storm4echo5group16ConnectionEvents10RequestingE, virtual slot 5
__int64 __fastcall sub_3D9720(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x22
  __int64 v4; // x0
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x19
  __int64 v8; // x20

  v2 = sub_56C9F0(72, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18F4590) + 2);
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(a1 + 32);
  *(_WORD *)(v2 + 36) = *(_WORD *)(a1 + 36);
  *(_BYTE *)(v2 + 38) = *(_BYTE *)(a1 + 38);
  *(_QWORD *)v2 = ((char *)goff_18F44E8 + 16);
  v3 = v2;
  v4 = sub_596B20(*(_QWORD *)(a1 + 64));
  v5 = *(_QWORD *)v4;
  v6 = *(_QWORD *)(v4 + 8);
  *(_DWORD *)(v3 + 54) = *(_DWORD *)(v4 + 15);
  *(_QWORD *)(v3 + 47) = v6;
  *(_QWORD *)(v3 + 39) = v5;
  v7 = *(_QWORD *)(a1 + 64);
  v8 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  sub_5B87B0(v8, v7);
  *(_QWORD *)(v3 + 64) = v8;
  return v3;
}

// N5storm4echo9multicast18AddRelationMessageE, virtual slot 19
_Bool __fastcall sub_3DE5D0(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0
    && (sub_57F110(a1 + 40, a2 + 40)) != 0
    && (sub_57F110(a1 + 80, a2 + 80)) != 0
    && (sub_57F110(a1 + 120, a2 + 120)) != 0
    && (sub_57F110(a1 + 320, a2 + 320)) != 0 )
  {
    return sub_57F110(a1 + 400, a2 + 400);
  }
  else
  {
    return 0;
  }
}

// N5storm18DynamicTypeFactoryINS_4echo9multicast18AddRelationMessageEEE, virtual slot 2
__int64 __fastcall sub_3DE9C0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0

  v3 = sub_56C9F0(472, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_3DEA60(v3, (__int64)v4);
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo9multicast18AddRelationMessageEEE, virtual slot 3
__int64 __fastcall sub_3DEA10(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20

  v5 = sub_56C9F0(472, 8, 1092624384, 0LL, a3, a4);
  sub_3DEA60(v5, a2);
  return v5;
}

// N5storm4echo9multicast21RemoveRelationMessageE, virtual slot 19
_Bool __fastcall sub_3DF780(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0 && (sub_57F110(a1 + 40, a2 + 40)) != 0 && (sub_57F110(a1 + 80, a2 + 80)) != 0 )
    return sub_57F110(a1 + 144, a2 + 144);
  else
    return 0;
}

// N5storm9transport10Connection5StateE, virtual slot 3
__int64 __fastcall sub_3E0A50(__int64 a1)
{
  return sub_58C7A0(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 17824LL), *(_QWORD *)(a1 + 32), (int *)goff_18F4930);
}

// N5storm18DynamicTypeFactoryINS_4echo8internal25GroupBridgeJoinAttachmentEEE, virtual slot 2
__int64 __fastcall sub_3E3940(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0
  __int64 *v5; // x9
  __int64 *v6; // x8
  __int64 *v7; // x8
  __int64 *v8; // x9

  v3 = sub_56C9F0(152, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_57F050(v3, v4);
  v5 = ((__int64*)goff_18EDE48);
  v6 = ((__int64 *)((__int64*)goff_18F4340) + 24);
  *(_QWORD *)v3 = ((__int64 *)((__int64*)goff_18F4340) + 2);
  *(_QWORD *)(v3 + 8) = v6;
  *(_QWORD *)(v3 + 32) = v5 + 2;
  sub_57F050(v3 + 40, v3 + 8);
  v7 = ((__int64*)goff_18EDE50);
  v8 = ((__int64*)goff_18EDCC8);
  *(_DWORD *)(v3 + 68) = -1;
  *(_QWORD *)(v3 + 40) = v7 + 2;
  *(_QWORD *)(v3 + 48) = v7 + 24;
  *(_QWORD *)(v3 + 72) = v8 + 2;
  sub_290830(v3 + 80, v3 + 8);
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo8internal25GroupBridgeJoinAttachmentEEE, virtual slot 3
__int64 __fastcall sub_3E3A00(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20
  __int64 *v6; // x9
  __int64 *v7; // x8
  __int64 *v8; // x8
  __int64 *v9; // x9

  v5 = sub_56C9F0(152, 8, 1092624384, 0LL, a3, a4);
  sub_57F050(v5, a2);
  v6 = ((__int64*)goff_18EDE48);
  v7 = ((__int64 *)((__int64*)goff_18F4340) + 24);
  *(_QWORD *)v5 = ((__int64 *)((__int64*)goff_18F4340) + 2);
  *(_QWORD *)(v5 + 8) = v7;
  *(_QWORD *)(v5 + 32) = v6 + 2;
  sub_57F050(v5 + 40, v5 + 8);
  v8 = ((__int64*)goff_18EDE50);
  v9 = ((__int64*)goff_18EDCC8);
  *(_DWORD *)(v5 + 68) = -1;
  *(_QWORD *)(v5 + 40) = v8 + 2;
  *(_QWORD *)(v5 + 48) = v8 + 24;
  *(_QWORD *)(v5 + 72) = v9 + 2;
  sub_290830(v5 + 80, v5 + 8);
  return v5;
}

// N5storm4echo5group16ConnectionEvents8ReachingE, virtual slot 5
__int64 __fastcall sub_3E4910(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x9
  __int64 v4; // x8
  __int64 *v5; // x9
  __int64 v6; // x8
  __int64 v7; // x9

  result = sub_56C9F0(64, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  v3 = ((__int64*)goff_18F4590);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v3 + 2;
  *(_QWORD *)(result + 24) = v4;
  *(_DWORD *)(result + 32) = *(_DWORD *)(a1 + 32);
  v5 = ((__int64*)goff_18F45A0);
  *(_WORD *)(result + 36) = *(_WORD *)(a1 + 36);
  LOBYTE(v4) = *(_BYTE *)(a1 + 38);
  *(_QWORD *)result = v5 + 2;
  *(_BYTE *)(result + 38) = v4;
  v6 = *(_QWORD *)(a1 + 39);
  v7 = *(_QWORD *)(a1 + 47);
  *(_DWORD *)(result + 54) = *(_DWORD *)(a1 + 54);
  *(_QWORD *)(result + 47) = v7;
  *(_QWORD *)(result + 39) = v6;
  return result;
}

// NSt3__110__function6__funcIZN5storm9transport10Connection6engineEvE5$_113NS_9allocatorIS5_EEFvRS4_RKNS4_5EventEEEE, virtual slot 6
__int64 __fastcall sub_3E7140(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  int v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = 1;
  result = sub_3AC700(a2, &v4, a2 + 752, a2 + 754, 0, 0);
  if ( result != 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, void *, __int64))(**(_QWORD **)(a2 + 17800) + 288LL))(
               *(_QWORD *)(a2 + 17800),
               a2,
               &unk_13610A8,
               result);
    if ( (int)result >= 1 )
      *(_DWORD *)(a2 + 744) |= 4u;
  }
  return result;
}

// NSt3__110__function6__funcIZN5storm9transport10Connection6engineEvE5$_120NS_9allocatorIS5_EEFvRS4_RKNS4_5EventEEEE, virtual slot 6
__int64 __fastcall sub_3E7680(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  int v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = 1;
  result = sub_3AC700(a2, &v4, a2 + 752, a2 + 754, 0, 0);
  if ( result != 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, void *, __int64))(**(_QWORD **)(a2 + 17800) + 288LL))(
               *(_QWORD *)(a2 + 17800),
               a2,
               &unk_13610A8,
               result);
    if ( (int)result >= 1 )
      *(_DWORD *)(a2 + 744) |= 4u;
  }
  return result;
}

// NSt3__110__function6__funcIZN5storm9transport10Connection6engineEvE5$_131NS_9allocatorIS5_EEFvRS4_RKNS4_5EventEEEE, virtual slot 6
__int64 __fastcall sub_3E8040(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  int v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = 3;
  result = sub_3AC700(a2, &v4, a2 + 752, a2 + 754, 0, 0);
  if ( result != 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, void *, __int64))(**(_QWORD **)(a2 + 17800) + 288LL))(
               *(_QWORD *)(a2 + 17800),
               a2,
               &unk_13610A8,
               result);
    if ( (int)result >= 1 )
      *(_DWORD *)(a2 + 744) |= 0x10u;
  }
  return result;
}

// NSt3__110__function6__funcIZN5storm9transport10Connection6engineEvE5$_135NS_9allocatorIS5_EEFvRS4_RKNS4_5EventEEEE, virtual slot 6
__int64 __fastcall sub_3E8370(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  int v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = 3;
  result = sub_3AC700(a2, &v4, a2 + 752, a2 + 754, 0, 0);
  if ( result != 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, void *, __int64))(**(_QWORD **)(a2 + 17800) + 288LL))(
               *(_QWORD *)(a2 + 17800),
               a2,
               &unk_13610A8,
               result);
    if ( (int)result >= 1 )
      *(_DWORD *)(a2 + 744) |= 0x10u;
  }
  return result;
}

// NSt3__110__function6__funcIZN5storm9transport10Connection6engineEvE5$_140NS_9allocatorIS5_EEFvRS4_RKNS4_5EventEEEE, virtual slot 6
__int64 __fastcall sub_3E88B0(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  int v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = 3;
  result = sub_3AC700(a2, &v4, a2 + 752, a2 + 754, 0, 0);
  if ( result != 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, void *, __int64))(**(_QWORD **)(a2 + 17800) + 288LL))(
               *(_QWORD *)(a2 + 17800),
               a2,
               &unk_13610A8,
               result);
    if ( (int)result >= 1 )
      *(_DWORD *)(a2 + 744) |= 0x10u;
  }
  return result;
}

// N5storm4echo6object7outFunc18WriteMementoReturnE, virtual slot 5
__int64 __fastcall sub_3F3860(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x8
  __int64 v4; // x9

  result = sub_56C9F0(32, 8, 1092624384, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((__int64 *)((__int64*)goff_18F4AE8) + 2);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(result + 24) = *(_BYTE *)(a1 + 24);
  *(_QWORD *)(result + 8) = v3;
  *(_QWORD *)(result + 16) = v4;
  return result;
}

// N5storm4echo24AgentMementoHierarchicalE, virtual slot 26
__int64 __fastcall sub_3F44A0(__int64 a1, unsigned int a2)
{
  __int64 v3; // x0
  _DWORD *v4; // x8
  int v5; // w9
  int v6; // w10

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * a2);
  if ( v3 == 0 )
    return -1;
  v4 = *(_DWORD **)(*(_QWORD *)(a1 + 48) + 32LL);
  v5 = v4[20];
  v6 = v4[21];
  if ( v5 != v6 )
  {
    if ( v6 == a2 || v5 != a2 && v4[22] != a2 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 72LL))(v3);
    return -1;
  }
  if ( v5 == a2 )
    return -1;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 72LL))(v3);
}

// N5storm4echo12AgentMessageE, virtual slot 5
__int64 __fastcall sub_3F6FA0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // x0
  __int64 v6; // x8

  sub_3BEA50();
  result = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * a3);
  if ( result != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 24LL) + 48LL);
    return sub_388D00(result, *(unsigned int *)(v6 + 704), *(unsigned __int8 *)(v6 + 708));
  }
  return result;
}

// N5storm4echo12AgentMessageE, virtual slot 6
void sub_3FA490(__int64 result, __int64 a2, unsigned int a3)
{
  __int64 v4; // x20
  _DWORD *v5; // x8
  int v6; // w9

  if ( *(_QWORD *)(*(_QWORD *)(result + 16) + 8LL * a3) != 0 )
  {
    v4 = result;
    sub_3BEB30();
    v5 = *(_DWORD **)(*(_QWORD *)(v4 + 48) + 32LL);
    v6 = v5[21];
    if ( v5[20] == v6 || v5[22] == v6 )
      { sub_3F6230(v4, a3); return; }
  }
  return;
}

// N5storm4echo16AgentNetPropertyE, virtual slot 10
int __fastcall sub_3FC6E0(__int64 a1, unsigned int a2)
{
  _DWORD *v2; // x8
  int v3; // w9
  int v4; // w9
  int v5; // w10
  __int64 v6; // x0

  v2 = *(_DWORD **)(*(_QWORD *)(a1 + 48) + 32LL);
  v3 = v2[26];
  if ( v3 == 1 || v3 == 0 && (*(_BYTE *)(a1 + 260) & 1) == 0 )
    return 0;
  v4 = v2[20];
  v5 = v2[21];
  if ( v4 == v5 )
  {
    if ( v4 == a2 )
      return 0;
  }
  else if ( v5 != a2 && (v4 == a2 || v2[22] == a2) )
  {
    return 0;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * a2);
  if ( v6 != 0 )
    return (*(int (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL))(v6);
  return 0;
}

// N5storm4echo16AgentNetPropertyE, virtual slot 26
__int64 __fastcall sub_3FC820(__int64 a1, unsigned int a2)
{
  __int64 v3; // x0
  _DWORD *v4; // x8
  int v5; // w9
  int v6; // w10

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * a2);
  if ( v3 == 0 )
    return -1;
  v4 = *(_DWORD **)(*(_QWORD *)(a1 + 48) + 32LL);
  v5 = v4[20];
  v6 = v4[21];
  if ( v5 != v6 )
  {
    if ( v6 == a2 || v5 != a2 && v4[22] != a2 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 72LL))(v3);
    return -1;
  }
  if ( v5 == a2 )
    return -1;
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 72LL))(v3);
}

// N5storm4echo27AgentObserverImplementationE, virtual slot 0
__int64 __fastcall sub_401300(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x0

  *(_QWORD *)a1 = ((char *)((__int64*)goff_18F58F0) + 16);
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8) + 24LL))(*(_QWORD *)(a1 + 8), a1 - 704);
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 != 0 )
  {
    *(_QWORD *)(a1 + 40) = v2;
    sub_56CA00(v2, &unk_1326E41, 0);
  }
  v3 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  return sub_554110(v3, &unk_1326E41, 0);
}

// N5storm4echo27AgentObserverImplementationE, virtual slot 1
void __fastcall sub_401370(_QWORD **a1)
{
  _QWORD *v2; // x0
  _QWORD *v3; // x0

  *a1 = (_QWORD *)(((char *)((__int64*)goff_18F58F0) + 16));
  (*(void (__fastcall **)(_QWORD *, _QWORD **))(*a1[1] + 24LL))(a1[1], a1 - 88);
  v2 = a1[4];
  if ( v2 != nullptr )
  {
    a1[5] = v2;
    sub_56CA00(v2, &unk_1326E41, 0);
  }
  v3 = a1[3];
  a1[2] = nullptr;
  a1[3] = nullptr;
  sub_554110(v3, &unk_1326E41, 0);
  _ZdlPv(a1);
}

// N5storm4echo23ObjectManagerDemux_MainE, virtual slot 0
_QWORD *__fastcall sub_4140D0(_QWORD *result)
{
  _QWORD *v1; // x19
  __int64 v2; // x22
  __int64 v3; // x21

  v1 = result;
  v2 = 32;
  *result = ((char *)((__int64*)goff_18F5B50) + 16);
  do
  {
    v3 = v1[v2];
    v1[v2] = 0;
    if ( v3 != 0 )
    {
      sub_418470(v3);
      result = (_QWORD *)sub_57EDC0(v3, 0LL, &unk_1326E41, 0);
    }
    --v2;
  }
  while ( v2 != 0 );
  return result;
}

// N5storm4echo23ObjectManagerDemux_MainE, virtual slot 1
void __fastcall sub_414140(char *a1)
{
  __int64 v2; // x22
  __int64 v3; // x21

  v2 = 256;
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18F5B50) + 16);
  do
  {
    v3 = *(_QWORD *)&a1[v2];
    *(_QWORD *)&a1[v2] = 0;
    if ( v3 != 0 )
    {
      sub_418470(v3);
      sub_57EDC0(v3, 0LL, &unk_1326E41, 0);
    }
    v2 -= 8;
  }
  while ( v2 != 0 );
  _ZdlPv(a1);
}

// N5storm4echo26ObjectManagerDemux_NetworkE, virtual slot 0
_QWORD *__fastcall sub_414A50(_QWORD *result)
{
  _QWORD *v1; // x19
  __int64 v2; // x22
  __int64 v3; // x21

  v1 = result;
  v2 = 32;
  *result = ((char *)((__int64*)goff_18F5B60) + 16);
  do
  {
    v3 = v1[v2];
    v1[v2] = 0;
    if ( v3 != 0 )
    {
      sub_419E30(v3);
      result = (_QWORD *)sub_57EDC0(v3, 0LL, &unk_1326E41, 0);
    }
    --v2;
  }
  while ( v2 != 0 );
  return result;
}

// N5storm4echo26ObjectManagerDemux_NetworkE, virtual slot 1
void __fastcall sub_414AC0(char *a1)
{
  __int64 v2; // x22
  __int64 v3; // x21

  v2 = 256;
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18F5B60) + 16);
  do
  {
    v3 = *(_QWORD *)&a1[v2];
    *(_QWORD *)&a1[v2] = 0;
    if ( v3 != 0 )
    {
      sub_419E30(v3);
      sub_57EDC0(v3, 0LL, &unk_1326E41, 0);
    }
    v2 -= 8;
  }
  while ( v2 != 0 );
  _ZdlPv(a1);
}

// N5storm4echo16AgentNetPropertyE, virtual slot 31
__int64 __fastcall sub_42FDC0(__int64 a1, unsigned int a2)
{
  return *(unsigned __int8 *)(*(_QWORD *)(a1 + 96) + a2);
}

// N5storm4echo6object8internal7inEvent6CreateE, virtual slot 5
__int64 __fastcall sub_430970(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x23
  __int64 v4; // x22
  __int64 v5; // x20

  v2 = sub_56C9F0(80, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18F5BA8) + 2);
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(v2 + 36) = *(_DWORD *)(a1 + 36);
  v3 = *(_QWORD *)(a1 + 40);
  v4 = v2;
  v5 = sub_56C9F0(512, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_268070(v5, v3);
  *(_QWORD *)(v4 + 40) = v5;
  *(_DWORD *)(v4 + 48) = *(_DWORD *)(a1 + 48);
  *(_QWORD *)(v4 + 56) = *(_QWORD *)(a1 + 56);
  *(_BYTE *)(v4 + 64) = *(_BYTE *)(a1 + 64);
  sub_26E9F0(v4 + 72, a1 + 72);
  return v4;
}

// N5storm4echo6object8internal7inEvent23ObjectEventsBundleEventE, virtual slot 0
void sub_430BA0(char *result)
{
  _QWORD *v1; // x20
  _QWORD *v2; // x21
  char *v3; // x19
  char *v4; // x0
  __int64 v5; // t1
  __int64 v6; // x0

  v1 = *(_QWORD **)(result + 32);
  if ( v1 != nullptr )
  {
    v2 = *(_QWORD **)(result + 40);
    v3 = result;
    if ( v2 == v1 )
    {
      v6 = *(_QWORD *)(result + 32);
    }
    else
    {
      do
      {
        v5 = *--v2;
        v4 = v5;
        *v2 = 0;
        if ( v5 != 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      }
      while ( v1 != v2 );
      v6 = *(_QWORD *)(v3 + 32);
    }
    *(_QWORD *)(v3 + 40) = v1;
    { sub_56CA00(v6, &unk_1326E41, 0); return; }
  }
  return;
}

// N5storm4echo6object8internal7inEvent23ObjectEventsBundleEventE, virtual slot 1
__int64 __fastcall sub_430C30(char *a1)
{
  _QWORD *v1; // x20
  _QWORD *v3; // x21
  char *v4; // x0
  __int64 v5; // t1
  __int64 v6; // x0

  v1 = *(_QWORD **)(a1 + 32);
  if ( v1 != nullptr )
  {
    v3 = *(_QWORD **)(a1 + 40);
    if ( v3 == v1 )
    {
      v6 = *(_QWORD *)(a1 + 32);
    }
    else
    {
      do
      {
        v5 = *--v3;
        v4 = v5;
        *v3 = 0;
        if ( v5 != 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      }
      while ( v1 != v3 );
      v6 = *(_QWORD *)(a1 + 32);
    }
    *(_QWORD *)(a1 + 40) = v1;
    sub_56CA00(v6, &unk_1326E41, 0);
  }
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm4echo6object8internal7inEvent23ObjectEventsBundleEventE, virtual slot 5
__int64 sub_430D90()
{
  __int64 result; // x0
  __int64 v1; // x8

  result = sub_56C9F0(56, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v1 = qword_1912460;
  *(_DWORD *)(result + 8) = -1;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 16) = v1;
  *(_QWORD *)result = ((char *)goff_18F5A10 + 16);
  return result;
}

// N5storm4echo6object7inEvent21ForwardReplicaMessageE, virtual slot 5
__int64 __fastcall sub_431030(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(64, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_298DF0(v2, a1);
  *(_QWORD *)v2 = ((char *)((__int64*)goff_18F57E0) + 16);
  *(_DWORD *)(v2 + 56) = *(_DWORD *)(a1 + 56);
  return v2;
}

// N5storm4echo33MulticastedSetRefreshRatioMessageE, virtual slot 19
_Bool __fastcall sub_432AC0(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0 && (sub_57F110(a1 + 40, a2 + 40)) != 0 && (sub_57F110(a1 + 80, a2 + 80)) != 0 )
    return sub_57F110(a1 + 120, a2 + 120);
  else
    return 0;
}

// N5storm18NetPropertyDecimalIfNS_14NumericalTraitIfNS_15MaxValueFunctorIfLm1EEELh2ELb0ELb0ENS_19DefaultValueFunctorIfLm0EEEEEEE, virtual slot 5
__int64 __fastcall sub_432C50(__int64 a1)
{
  __int64 v2; // x20
  __int64 *v3; // x8

  v2 = sub_56C9F0(48, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)((__int64*)goff_18F5860) + 24);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18F5860) + 2);
  *(_QWORD *)(v2 + 8) = v3;
  *(_DWORD *)(v2 + 28) = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)(v2 + 40) = *(_QWORD *)(a1 + 40);
  return v2;
}

// N5storm4echo32MulticastedSetRefreshRateMessageE, virtual slot 19
_Bool __fastcall sub_433B10(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0
    && (sub_57F110(a1 + 40, a2 + 40)) != 0
    && (sub_57F110(a1 + 80, a2 + 80)) != 0
    && (sub_57F110(a1 + 120, a2 + 120)) != 0
    && (sub_57F110(a1 + 160, a2 + 160)) != 0 )
  {
    return sub_57F110(a1 + 200, a2 + 200);
  }
  else
  {
    return 0;
  }
}

// N5storm4echo38MulticastedGiveMasterRoleMasterMessageE, virtual slot 19
_Bool __fastcall sub_435050(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0
    && (sub_57F110(a1 + 40, a2 + 40)) != 0
    && (sub_57F110(a1 + 80, a2 + 80)) != 0
    && (sub_57F110(a1 + 120, a2 + 120)) != 0
    && (sub_57F110(a1 + 160, a2 + 160)) != 0
    && (sub_57F110(a1 + 200, a2 + 200)) != 0 )
  {
    return sub_57F110(a1 + 248, a2 + 248);
  }
  else
  {
    return 0;
  }
}

// N5storm18DynamicTypeFactoryINS_4echo38MulticastedGiveMasterRoleMasterMessageEEE, virtual slot 2
__int64 __fastcall sub_435260(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0

  v3 = sub_56C9F0(440, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_435300(v3, (__int64)v4);
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo38MulticastedGiveMasterRoleMasterMessageEEE, virtual slot 3
__int64 __fastcall sub_4352B0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20

  v5 = sub_56C9F0(440, 8, 1092624384, 0LL, a3, a4);
  sub_435300(v5, a2);
  return v5;
}

// N5storm4echo9multicast6events8DisabledE, virtual slot 5
__int64 __fastcall sub_438BE0(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x9
  __int64 v4; // x8
  __int64 v5; // x9

  result = sub_56C9F0(40, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = goff_18F6310;
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v3 + 2;
  v5 = ((__int64*)goff_18F5920);
  *(_QWORD *)(result + 24) = v4;
  *(_QWORD *)(result + 32) = *(_QWORD *)(a1 + 32);
  *(_QWORD *)result = v5 + 16;
  return result;
}

// N5storm4echo9multicast6events8ActivateE, virtual slot 5
__int64 __fastcall sub_439F00(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x9
  __int64 v4; // x8
  __int64 v5; // x9

  result = sub_56C9F0(40, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = goff_18F6310;
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v3 + 2;
  v5 = goff_18F5A58;
  *(_QWORD *)(result + 24) = v4;
  *(_QWORD *)(result + 32) = *(_QWORD *)(a1 + 32);
  *(_QWORD *)result = v5 + 16;
  return result;
}

// N5storm4echo9multicast6events11WaitForHostE, virtual slot 5
__int64 __fastcall sub_43A3B0(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x9
  __int64 v4; // x8
  __int64 v5; // x9

  result = sub_56C9F0(40, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = goff_18F6310;
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v3 + 2;
  v5 = ((__int64*)goff_18F5EB8);
  *(_QWORD *)(result + 24) = v4;
  *(_QWORD *)(result + 32) = *(_QWORD *)(a1 + 32);
  *(_QWORD *)result = v5 + 16;
  return result;
}

// N5storm4echo9multicast6events12CreateBrokerE, virtual slot 5
__int64 __fastcall sub_43A860(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x9
  __int64 v4; // x8
  __int64 v5; // x9

  result = sub_56C9F0(40, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = goff_18F6310;
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v3 + 2;
  v5 = ((__int64*)goff_18F5EB0);
  *(_QWORD *)(result + 24) = v4;
  *(_QWORD *)(result + 32) = *(_QWORD *)(a1 + 32);
  *(_QWORD *)result = v5 + 16;
  return result;
}

// N5storm4echo9multicast6events13BrokerCreatedE, virtual slot 5
__int64 __fastcall sub_43C080(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x9
  __int64 v4; // x8
  __int64 v5; // x9

  result = sub_56C9F0(40, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = goff_18F6310;
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v3 + 2;
  v5 = ((__int64*)goff_18F58C8);
  *(_QWORD *)(result + 24) = v4;
  *(_QWORD *)(result + 32) = *(_QWORD *)(a1 + 32);
  *(_QWORD *)result = v5 + 16;
  return result;
}

// N5storm4echo9multicast6events13HostConnectedE, virtual slot 5
__int64 __fastcall sub_43C530(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x9
  __int64 v4; // x8
  __int64 v5; // x9

  result = sub_56C9F0(40, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = goff_18F6310;
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v3 + 2;
  v5 = ((__int64*)goff_18F5A00);
  *(_QWORD *)(result + 24) = v4;
  *(_QWORD *)(result + 32) = *(_QWORD *)(a1 + 32);
  *(_QWORD *)result = v5 + 16;
  return result;
}

// N5storm4echo11ObjectBatch10DelayEventE, virtual slot 5
__int64 __fastcall sub_43D020(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x8
  __int64 v4; // x9

  result = sub_56C9F0(64, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = qword_1912460;
  *(_DWORD *)(result + 8) = -1;
  v4 = ((__int64*)goff_18F5A08);
  *(_QWORD *)(result + 16) = v3;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)result = v4 + 16;
  *(_QWORD *)(result + 32) = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(result + 40) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(result + 48) = 0;
  return result;
}

// N5storm4echo14LoopbackEvents11BecomeReadyE, virtual slot 5
__int64 __fastcall sub_43E070(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x9

  result = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(result + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = ((__int64 *)((__int64*)goff_18F5A38) + 2);
  v3 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(result + 32) = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(result + 40) = v3;
  return result;
}

// N5storm4echo14objectObserver7outFunc22AssignBatchObjectIndexE, virtual slot 5
__int64 __fastcall sub_43E3A0(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x9

  result = sub_56C9F0(48, 8, 1092624384, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((__int64 *)goff_18EFA10 + 2);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)result = ((__int64 *)((__int64*)goff_18F5B78) + 2);
  v3 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(result + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(result + 32) = v3;
  *(_DWORD *)(result + 40) = *(_DWORD *)(a1 + 40);
  return result;
}

// N5storm18DynamicTypeFactoryINS_4echo14objectObserver7outFunc28AssignBatchObjectIndexReturnEEE, virtual slot 2
__int64 __fastcall sub_43E870(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // x0

  result = sub_56C9F0(16, 8, 1092624384, 0LL, a2, a3);
  *(_QWORD *)result = ((__int64 *)goff_18F5B80 + 2);
  *(_DWORD *)(result + 8) = -1;
  return result;
}

// N5storm10DataNumberIjLNS_19DataNumberQualifier11EQualifiersE4ELj0EEE, virtual slot 4
void sub_444B90(__int64 result, __int64 a2)
{
  int v2; // w20
  _BYTE *v3; // x9
  __int64 v4; // x19

  v2 = *(_DWORD *)(a2 + 20);
  if ( *(_DWORD *)(result + 20) != v2 )
  {
    *(_BYTE *)(result + 16) = 1;
    v3 = *(_BYTE **)(result + 8);
    *v3 = 1;
    v4 = result;
    result = (*(__int64 (**)(void))(*(_QWORD *)result + 56LL))();
    if ( (result & 1) != 0 )
      sub_56DC30((_QWORD *)v4);
    *(_DWORD *)(v4 + 20) = v2;
  }
  return;
}

// N5storm4echo18CreateReplicaEventE, virtual slot 19
_Bool __fastcall sub_447680(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0
    && (sub_57F110(a1 + 40, a2 + 40)) != 0
    && (sub_57F110(a1 + 80, a2 + 80)) != 0
    && (sub_57F110(a1 + 160, a2 + 160)) != 0
    && (sub_57F110(a1 + 208, a2 + 208)) != 0
    && (sub_57F110(a1 + 264, a2 + 264)) != 0
    && (sub_57F110(a1 + 312, a2 + 312)) != 0
    && (sub_57F110(a1 + 352, a2 + 352)) != 0
    && (sub_57F110(a1 + 392, a2 + 392)) != 0
    && (sub_57F110(a1 + 432, a2 + 432)) != 0
    && (sub_57F110(a1 + 472, a2 + 472)) != 0
    && (sub_57F110(a1 + 512, a2 + 512)) != 0 )
  {
    return sub_57F110(a1 + 712, a2 + 712);
  }
  else
  {
    return 0;
  }
}

// N5storm15NetPropertyDataINS_4echo21ObjectReplicationModeENS1_37NetPropertyObjectReplicationModeTraitEEE, virtual slot 5
__int64 __fastcall sub_447A50(__int64 a1)
{
  __int64 v2; // x20
  __int64 *v3; // x8

  v2 = sub_56C9F0(40, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)goff_18F67F0 + 24);
  *(_QWORD *)v2 = ((__int64 *)goff_18F67F0 + 2);
  *(_QWORD *)(v2 + 8) = v3;
  *(_DWORD *)(v2 + 28) = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(a1 + 32);
  return v2;
}

// N5storm18DynamicTypeFactoryINS_15NetPropertyDataINS_4echo21ObjectReplicationModeENS2_37NetPropertyObjectReplicationModeTraitEEEEE, virtual slot 2
__int64 __fastcall sub_447DF0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0
  _DWORD *v5; // x10
  __int64 *v6; // x8

  v3 = sub_56C9F0(40, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_57F050(v3, v4);
  v5 = (_DWORD *)goff_18F14C0;
  v6 = ((__int64 *)goff_18F67F0 + 24);
  *(_QWORD *)v3 = ((__int64 *)goff_18F67F0 + 2);
  *(_QWORD *)(v3 + 8) = v6;
  *(_DWORD *)(v3 + 28) = *v5;
  *(_DWORD *)(v3 + 32) = -1;
  return v3;
}

// N5storm18DynamicTypeFactoryINS_15NetPropertyDataINS_4echo21ObjectReplicationModeENS2_37NetPropertyObjectReplicationModeTraitEEEEE, virtual slot 3
__int64 __fastcall sub_447E70(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20
  _DWORD *v6; // x10
  __int64 *v7; // x8

  v5 = sub_56C9F0(40, 8, 1092624384, 0LL, a3, a4);
  sub_57F050(v5, a2);
  v6 = (_DWORD *)goff_18F14C0;
  v7 = ((__int64 *)goff_18F67F0 + 24);
  *(_QWORD *)v5 = ((__int64 *)goff_18F67F0 + 2);
  *(_QWORD *)(v5 + 8) = v7;
  *(_DWORD *)(v5 + 28) = *v6;
  *(_DWORD *)(v5 + 32) = -1;
  return v5;
}

// N5storm18DynamicTypeFactoryINS_15NetPropertyDataINS_4echo19ObjectMigrationModeENS2_35NetPropertyObjectMigrationModeTraitEEEEE, virtual slot 2
__int64 __fastcall sub_4485A0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0
  _DWORD *v5; // x9
  __int64 *v6; // x8

  v3 = sub_56C9F0(48, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_57F050(v3, v4);
  v5 = (_DWORD *)goff_18EDDC0;
  v6 = ((__int64 *)goff_18F6830 + 24);
  *(_QWORD *)v3 = ((__int64 *)goff_18F6830 + 2);
  *(_QWORD *)(v3 + 8) = v6;
  LODWORD(v6) = *v5;
  *(_DWORD *)(v3 + 28) = *v5;
  *(_DWORD *)(v3 + 32) = (_DWORD)v6;
  *(_DWORD *)(v3 + 36) = (_DWORD)v6;
  *(_DWORD *)(v3 + 40) = (_DWORD)v6;
  *(_WORD *)(v3 + 44) = 1;
  return v3;
}

// N5storm18DynamicTypeFactoryINS_15NetPropertyDataINS_4echo19ObjectMigrationModeENS2_35NetPropertyObjectMigrationModeTraitEEEEE, virtual slot 3
__int64 __fastcall sub_448620(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20
  _DWORD *v6; // x9
  __int64 *v7; // x8

  v5 = sub_56C9F0(48, 8, 1092624384, 0LL, a3, a4);
  sub_57F050(v5, a2);
  v6 = (_DWORD *)goff_18EDDC0;
  v7 = ((__int64 *)goff_18F6830 + 24);
  *(_QWORD *)v5 = ((__int64 *)goff_18F6830 + 2);
  *(_QWORD *)(v5 + 8) = v7;
  LODWORD(v7) = *v6;
  *(_DWORD *)(v5 + 28) = *v6;
  *(_DWORD *)(v5 + 32) = (_DWORD)v7;
  *(_DWORD *)(v5 + 36) = (_DWORD)v7;
  *(_DWORD *)(v5 + 40) = (_DWORD)v7;
  *(_WORD *)(v5 + 44) = 1;
  return v5;
}

// N5storm18DynamicTypeFactoryINS_4echo18CreateReplicaEventEEE, virtual slot 2
__int64 __fastcall sub_4487C0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0

  v3 = sub_56C9F0(744, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_448860(v3, (__int64)v4);
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo18CreateReplicaEventEEE, virtual slot 3
__int64 __fastcall sub_448810(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20

  v5 = sub_56C9F0(744, 8, 1092624384, 0LL, a3, a4);
  sub_448860(v5, a2);
  return v5;
}

// N5storm4echo18MasterDeletedEventE, virtual slot 19
_Bool __fastcall sub_449990(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0 && (sub_57F110(a1 + 40, a2 + 40)) != 0 && (sub_57F110(a1 + 80, a2 + 80)) != 0 )
    return sub_57F110(a1 + 120, a2 + 120);
  else
    return 0;
}

// N5storm4echo24UndeliveredMessagesEventE, virtual slot 5
__int64 __fastcall sub_449F60(__int64 a1)
{
  __int64 v2; // x20
  __int64 *v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8

  v2 = sub_56C9F0(144, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)((__int64*)goff_18F5A88) + 24);
  v4 = ((__int64 *)((__int64*)goff_18F5838) + 2);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18F5A88) + 2);
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 32) = v4;
  sub_57F070(v2 + 40, a1 + 40);
  v5 = ((__int64 *)((__int64*)goff_18F5840) + 24);
  *(_QWORD *)(v2 + 40) = ((__int64 *)((__int64*)goff_18F5840) + 2);
  *(_QWORD *)(v2 + 48) = v5;
  *(_WORD *)(v2 + 66) = *(_WORD *)(a1 + 66);
  sub_57F1B0(v2 + 40, v2 + 8);
  *(_QWORD *)(v2 + 72) = ((__int64 *)((__int64*)goff_18F5A80) + 2);
  sub_583700(v2 + 80, a1 + 80);
  sub_57F1B0(v2 + 80, v2 + 8);
  return v2;
}

// N5storm4echo19ReplicaCreatedEventE, virtual slot 19
_Bool __fastcall sub_44B460(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0
    && (sub_57F110(a1 + 40, a2 + 40)) != 0
    && (sub_57F110(a1 + 88, a2 + 88)) != 0
    && (sub_57F110(a1 + 128, a2 + 128)) != 0 )
  {
    return sub_57F110(a1 + 168, a2 + 168);
  }
  else
  {
    return 0;
  }
}

// N5storm4echo19GiveMasterRoleEventE, virtual slot 19
_Bool __fastcall sub_44C4E0(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0
    && (sub_57F110(a1 + 40, a2 + 40)) != 0
    && (sub_57F110(a1 + 80, a2 + 80)) != 0
    && (sub_57F110(a1 + 128, a2 + 128)) != 0
    && (sub_57F110(a1 + 168, a2 + 168)) != 0 )
  {
    return sub_57F110(a1 + 208, a2 + 208);
  }
  else
  {
    return 0;
  }
}

// N5storm18DynamicTypeFactoryINS_4echo19GiveMasterRoleEventEEE, virtual slot 2
__int64 __fastcall sub_44C6E0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0

  v3 = sub_56C9F0(400, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_44C780(v3, (__int64)v4);
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo19GiveMasterRoleEventEEE, virtual slot 3
__int64 __fastcall sub_44C730(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20

  v5 = sub_56C9F0(400, 8, 1092624384, 0LL, a3, a4);
  sub_44C780(v5, a2);
  return v5;
}

// N5storm4echo22AcquireMasterRoleEventE, virtual slot 19
_Bool __fastcall sub_44CFA0(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0
    && (sub_57F110(a1 + 40, a2 + 40)) != 0
    && (sub_57F110(a1 + 80, a2 + 80)) != 0
    && (sub_57F110(a1 + 128, a2 + 128)) != 0 )
  {
    return sub_57F110(a1 + 168, a2 + 168);
  }
  else
  {
    return 0;
  }
}

// N5storm4echo22FinalMasterUpdateEventE, virtual slot 5
__int64 __fastcall sub_44E9E0(__int64 a1)
{
  __int64 v2; // x20
  __int64 *v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8
  __int64 *v6; // x8

  v2 = sub_56C9F0(112, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)((__int64*)goff_18F5A98) + 24);
  v4 = ((__int64 *)((__int64*)goff_18F5838) + 2);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18F5A98) + 2);
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 32) = v4;
  sub_57F070(v2 + 40, a1 + 40);
  v5 = ((__int64 *)((__int64*)goff_18F5840) + 24);
  *(_QWORD *)(v2 + 40) = ((__int64 *)((__int64*)goff_18F5840) + 2);
  *(_QWORD *)(v2 + 48) = v5;
  *(_WORD *)(v2 + 66) = *(_WORD *)(a1 + 66);
  sub_57F1B0(v2 + 40, v2 + 8);
  *(_QWORD *)(v2 + 72) = ((__int64 *)((__int64*)goff_18EDE58) + 2);
  sub_57F070(v2 + 80, a1 + 80);
  v6 = ((__int64 *)((__int64*)goff_18EDE60) + 24);
  *(_QWORD *)(v2 + 80) = ((__int64 *)((__int64*)goff_18EDE60) + 2);
  *(_QWORD *)(v2 + 88) = v6;
  *(_BYTE *)(v2 + 106) = *(_BYTE *)(a1 + 106);
  sub_57F1B0(v2 + 80, v2 + 8);
  return v2;
}

// N5storm4echo29MulticastedCreateSuccessEventE, virtual slot 19
_Bool __fastcall sub_44F400(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0 && (sub_57F110(a1 + 40, a2 + 40)) != 0 && (sub_57F110(a1 + 88, a2 + 88)) != 0 )
    return sub_57F110(a1 + 128, a2 + 128);
  else
    return 0;
}

// N5storm4echo30MulticastedReplicaMessageEventE, virtual slot 19
_Bool __fastcall sub_44FCB0(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0
    && (sub_57F110(a1 + 40, a2 + 40)) != 0
    && (sub_57F110(a1 + 80, a2 + 80)) != 0
    && (sub_57F110(a1 + 120, a2 + 120)) != 0
    && (sub_57F110(a1 + 320, a2 + 320)) != 0 )
  {
    return sub_57F110(a1 + 360, a2 + 360);
  }
  else
  {
    return 0;
  }
}

// N5storm18DynamicTypeFactoryINS_4echo30MulticastedReplicaMessageEventEEE, virtual slot 2
__int64 __fastcall sub_44FEB0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0

  v3 = sub_56C9F0(400, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_44FF50(v3, (__int64)v4);
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo30MulticastedReplicaMessageEventEEE, virtual slot 3
__int64 __fastcall sub_44FF00(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20

  v5 = sub_56C9F0(400, 8, 1092624384, 0LL, a3, a4);
  sub_44FF50(v5, a2);
  return v5;
}

// N5storm4echo28MulticastedCreateFailedEventE, virtual slot 19
_Bool __fastcall sub_450890(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0 && (sub_57F110(a1 + 40, a2 + 40)) != 0 && (sub_57F110(a1 + 88, a2 + 88)) != 0 )
    return sub_57F110(a1 + 128, a2 + 128);
  else
    return 0;
}

// N5storm4echo34MulticastedClientCreateMasterEventE, virtual slot 19
_Bool __fastcall sub_4512A0(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0
    && (sub_57F110(a1 + 40, a2 + 40)) != 0
    && (sub_57F110(a1 + 80, a2 + 80)) != 0
    && (sub_57F110(a1 + 280, a2 + 280)) != 0
    && (sub_57F110(a1 + 328, a2 + 328)) != 0
    && (sub_57F110(a1 + 384, a2 + 384)) != 0
    && (sub_57F110(a1 + 432, a2 + 432)) != 0 )
  {
    return sub_57F110(a1 + 472, a2 + 472);
  }
  else
  {
    return 0;
  }
}

// N5storm18DynamicTypeFactoryINS_4echo34MulticastedClientCreateMasterEventEEE, virtual slot 2
__int64 __fastcall sub_451570(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0

  v3 = sub_56C9F0(664, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_451610(v3, (__int64)v4);
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo34MulticastedClientCreateMasterEventEEE, virtual slot 3
__int64 __fastcall sub_4515C0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20

  v5 = sub_56C9F0(664, 8, 1092624384, 0LL, a3, a4);
  sub_451610(v5, a2);
  return v5;
}

// N5storm4echo23MulticastedReplicaEventE, virtual slot 19
_Bool __fastcall sub_452730(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0 && (sub_57F110(a1 + 40, a2 + 40)) != 0 && (sub_57F110(a1 + 80, a2 + 80)) != 0 )
    return sub_57F110(a1 + 128, a2 + 128);
  else
    return 0;
}

// N5storm4echo38MulticastedGiveMasterRoleBrokerMessageE, virtual slot 19
_Bool __fastcall sub_4537E0(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0
    && (sub_57F110(a1 + 40, a2 + 40)) != 0
    && (sub_57F110(a1 + 80, a2 + 80)) != 0
    && (sub_57F110(a1 + 120, a2 + 120)) != 0
    && (sub_57F110(a1 + 160, a2 + 160)) != 0 )
  {
    return sub_57F110(a1 + 208, a2 + 208);
  }
  else
  {
    return 0;
  }
}

// N5storm18DynamicTypeFactoryINS_4echo38MulticastedGiveMasterRoleBrokerMessageEEE, virtual slot 2
__int64 __fastcall sub_4539E0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0

  v3 = sub_56C9F0(400, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_453A80(v3, (__int64)v4);
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo38MulticastedGiveMasterRoleBrokerMessageEEE, virtual slot 3
__int64 __fastcall sub_453A30(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20

  v5 = sub_56C9F0(400, 8, 1092624384, 0LL, a3, a4);
  sub_453A80(v5, a2);
  return v5;
}

__int64 __fastcall sub_454500(__int64 a1, __int64 *a2)
{
  __int64 result; // x0
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x20

  sub_3FA7E0(a2 + 3);
  result = sub_3FA7E0(a2 + 2);
  v4 = a2[1];
  a2[1] = 0;
  if ( v4 != 0 )
  {
    v5 = *(_QWORD *)(v4 + 8);
    if ( v5 != 0 )
    {
      *(_QWORD *)(v4 + 16) = v5;
      sub_56CA00(v5, &unk_1326E41, 0);
    }
    result = sub_57EDC0(v4, 0LL, &unk_1326E41, 0);
  }
  v6 = *a2;
  *a2 = 0;
  if ( v6 != 0 )
  {
    sub_455B70(v6, *(_QWORD **)(v6 + 8));
    return sub_57EDC0(v6, 0LL, &unk_1326E41, 0);
  }
  return result;
}

// N5storm4echo12SessionDemuxINS0_18ObjectManager_MainELj32EEE, virtual slot 0
_QWORD *__fastcall sub_45A0F0(_QWORD *result)
{
  _QWORD *v1; // x19
  __int64 v2; // x22
  __int64 v3; // x21

  v1 = result;
  v2 = 32;
  *result = ((char *)((__int64*)goff_18F5B50) + 16);
  do
  {
    v3 = v1[v2];
    v1[v2] = 0;
    if ( v3 != 0 )
    {
      sub_418470(v3);
      result = (_QWORD *)sub_57EDC0(v3, 0LL, &unk_1326E41, 0);
    }
    --v2;
  }
  while ( v2 != 0 );
  return result;
}

// N5storm4echo12SessionDemuxINS0_21ObjectManager_NetworkELj32EEE, virtual slot 0
_QWORD *__fastcall sub_45A170(_QWORD *result)
{
  _QWORD *v1; // x19
  __int64 v2; // x22
  __int64 v3; // x21

  v1 = result;
  v2 = 32;
  *result = ((char *)((__int64*)goff_18F5B60) + 16);
  do
  {
    v3 = v1[v2];
    v1[v2] = 0;
    if ( v3 != 0 )
    {
      sub_419E30(v3);
      result = (_QWORD *)sub_57EDC0(v3, 0LL, &unk_1326E41, 0);
    }
    --v2;
  }
  while ( v2 != 0 );
  return result;
}

// N5storm28SimpleLanMatchmakingStrategyE, virtual slot 20
__int64 __fastcall sub_45EB70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // x21
  __int64 result; // x0

  v5 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  sub_5B87B0(v5, a3);
  result = *(_QWORD *)(a1 + 536);
  *(_QWORD *)(a1 + 536) = v5;
  if ( result != 0 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  return result;
}

// N5storm28SimpleLanMatchmakingStrategyE, virtual slot 22
__int64 sub_45EDC0()
{
  char *result; // x0

  result = sub_57D200(40, 8, 1092677632, 0LL, &unk_1326E41, 0);
  *(_DWORD *)(result + 7) = 0;
  *(_QWORD *)result = 0;
  *(_DWORD *)(result + 12) = -1;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  return result;
}

// N5storm28SimpleLanMatchmakingStrategyE, virtual slot 24
void __fastcall sub_45EEF0(__int64 a1, __int64 a2)
{
  __int64 v2; // x0
  __int64 v4; // x0

  if ( a2 != 0 )
  {
    v2 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 24) = 0;
    if ( v2 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v4 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0;
    if ( v4 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    sub_57EDC0(a2, 0LL, &unk_1326E41, 0);
  }
}

// N5storm27SimpleNoMatchmakingStrategyE, virtual slot 22
__int64 sub_460470()
{
  char *result; // x0

  result = sub_57D200(40, 8, 1092677632, 0LL, &unk_1326E41, 0);
  *(_DWORD *)(result + 7) = 0;
  *(_QWORD *)result = 0;
  *(_DWORD *)(result + 12) = -1;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  return result;
}

// N5storm27SimpleNoMatchmakingStrategyE, virtual slot 24
void __fastcall sub_4605A0(__int64 a1, __int64 a2)
{
  __int64 v2; // x0
  __int64 v4; // x0

  if ( a2 != 0 )
  {
    v2 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 24) = 0;
    if ( v2 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v4 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0;
    if ( v4 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    sub_57EDC0(a2, 0LL, &unk_1326E41, 0);
  }
}

void __fastcall sub_464570(__int64 a1)
{  __int64 *v3; // x8

  sub_5771E0((_QWORD *)a1, 0LL, (__int64)&unk_1326E41, 0, 0, 0LL);
  v3 = ((__int64*)goff_18F6C58);
  *(_QWORD *)a1 = v3 + 2;
  *(_QWORD *)(a1 + 32) = 0;
  *(_WORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  return;
}

void sub_464C50(__int64 result)
{
  __int64 *v1; // x8

  *(_WORD *)(result + 8) = 0;
  v1 = ((__int64*)goff_18F6C80);
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)result = v1 + 2;
  *(_BYTE *)(result + 32) = 0;
  *(_QWORD *)(result + 40) = 0;
  *(_BYTE *)(result + 48) = 0;
  return;
}

__int64 __fastcall sub_474440(__int64 a1)
{
  __int64 v2; // x8

  sub_5771E0((_QWORD *)a1, 0LL, (__int64)&unk_1326E41, 0, 0, 0LL);
  *(_QWORD *)(a1 + 32) = 0;
  *(_WORD *)(a1 + 40) = 0;
  v2 = goff_18F6F00;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 80) = 0;
  *(_QWORD *)a1 = v2 + 16;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  return sub_57EFA0(a1 + 88);
}

__int64 __fastcall sub_475240(__int64 a1, __int64 a2)
{
  __int64 v2; // x19
  __int64 v5; // x0
  __int64 v6; // x0
  __int64 v7; // x20
  __int64 v9; // [xsp+8h] [xbp-18h] BYREF

  v2 = a1 + 88;
  sub_57F030(a1 + 88);
  v5 = *(_QWORD *)(a1 + 64);
  v9 = a2;
  v6 = sub_496940(v5, &v9);
  if ( v6 != 0 )
    v7 = *(_QWORD *)(v6 + 24);
  else
    v7 = 0;
  sub_57F040(v2);
  return v7;
}

// N5storm24SimpleConnectionStateNnxE, virtual slot 7
_Bool __fastcall sub_475430(__int64 a1, _BYTE *a2, char a3)
{
  if ( *a2 == (a3 & 1) )
    return 0;
  *a2 = a3 & 1;
  return 1;
}

// N5storm13SimpleContextE, virtual slot 0
__int64 __fastcall sub_47AAD0(__int64 a1)
{
  __int64 result; // x0

  *(_QWORD *)(a1 + 16) = ((__int64 *)goff_18F7000 + 2);
  result = sub_56CA10(a1);
  *((_QWORD *)goff_18F7008 + (unsigned int)result) = 0;
  return result;
}

__int64 __fastcall sub_47AB00(__int64 a1)
{
  __int64 result; // x0

  *(_QWORD *)(a1 + 8) = ((__int64 *)goff_18F7000 + 2);
  result = sub_56CA10(a1);
  *((_QWORD *)goff_18F7008 + (unsigned int)result) = 0;
  return result;
}

__int64 __fastcall sub_47AB30(_QWORD *a1)
{
  __int64 result; // x0

  *a1 = ((__int64 *)goff_18F7000 + 2);
  result = sub_56CA10(a1);
  *((_QWORD *)goff_18F7008 + (unsigned int)result) = 0;
  return result;
}

// N5storm13SimpleContextE, virtual slot 1
void __fastcall sub_47AB60(_QWORD *a1)
{
  a1[2] = ((__int64 *)goff_18F7000 + 2);
  *((_QWORD *)goff_18F7008 + (unsigned int)sub_56CA10(a1)) = 0;
  _ZdlPv(a1);
}

void __fastcall sub_47ABA0(__int64 a1)
{
  void *v1; // x19

  v1 = (void *)(a1 - 8);
  *(_QWORD *)(a1 + 8) = ((__int64 *)goff_18F7000 + 2);
  *((_QWORD *)goff_18F7008 + (unsigned int)sub_56CA10(a1)) = 0;
  _ZdlPv(v1);
}

__int64 __fastcall sub_47BB20(__int64 a1)
{
  __int64 v1; // x0

  v1 = sub_2C3070(a1, goff_18F7038);
  if ( v1 != 0 )
    return v1 + 32;
  else
    return 0;
}

__int64 __fastcall sub_47BB80(__int64 a1)
{
  __int64 v1; // x0

  v1 = sub_2C3070(a1, goff_18F7048);
  if ( v1 != 0 )
    return v1 + 32;
  else
    return 0;
}

__int64 __fastcall sub_47BEB0(__int64 a1)
{
  __int64 v1; // x0

  v1 = sub_2C3070(a1, goff_18F7058);
  if ( v1 != 0 )
    return v1 + 32;
  else
    return 0;
}

__int64 __fastcall sub_47C020(__int64 a1)
{
  __int64 result; // x0

  result = sub_2C3070(a1, goff_18F7080);
  if ( result != 0 )
    return *(_BYTE *)(result + 26) != 0;
  return result;
}

__int64 __fastcall sub_47C050(__int64 a1)
{
  __int64 v1; // x0

  v1 = sub_2C3070(a1, goff_18F7088);
  if ( v1 != 0 )
    return v1 + 32;
  else
    return 0;
}

__int64 __fastcall sub_47C080(__int64 a1)
{
  __int64 v1; // x0

  v1 = sub_2C3070(a1, goff_18F7090);
  if ( v1 != 0 )
    return v1 + 32;
  else
    return 0;
}

__int64 __fastcall sub_47C140(__int64 a1)
{
  __int64 result; // x0

  result = sub_2C3070(a1, goff_18F7098);
  if ( result != 0 )
    return *(_BYTE *)(result + 26) != 0;
  return result;
}

_QWORD *__fastcall sub_47C170(__int64 a1)
{
  _QWORD *result; // x0

  result = sub_5771E0((_QWORD *)a1, 0LL, (__int64)&unk_1326E41, 0, 0, 0LL);
  *(_QWORD *)(a1 + 32) = 0;
  *(_WORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18F70A0) + 2);
  *(_BYTE *)(a1 + 64) = 0;
  return result;
}

// N5storm35SimpleMatchmakingMatchedAsHostEventE, virtual slot 5
__int64 __fastcall sub_47CA50(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x9

  result = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(result + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = ((__int64 *)goff_18F70B0 + 2);
  v3 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(result + 32) = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(result + 40) = v3;
  return result;
}

// N5storm35SimpleMatchmakingMatchedAsPeerEventE, virtual slot 5
__int64 __fastcall sub_47CDB0(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x9
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x9

  result = sub_56C9F0(56, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  v3 = goff_18F70E8;
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v3 + 2;
  *(_QWORD *)(result + 24) = v4;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(result + 48) = *(_DWORD *)(a1 + 48);
  *(_QWORD *)(result + 32) = v5;
  *(_QWORD *)(result + 40) = v6;
  return result;
}

// N5storm31SimpleUbiServicesControllerBase20ServerConnectedEventE, virtual slot 5
__int64 __fastcall sub_47F6B0(__int64 a1)
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
  v5 = ((__int64*)goff_18F6C88);
  *(_DWORD *)(result + 36) = *(_DWORD *)(a1 + 36);
  *(_QWORD *)(result + 40) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)result = v5 + 2;
  return result;
}

// N5storm31SimpleUbiServicesControllerBase23ServerDisconnectedEventE, virtual slot 5
__int64 __fastcall sub_47FA30(__int64 a1)
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
  v5 = ((__int64*)goff_18F6C90);
  *(_DWORD *)(result + 36) = *(_DWORD *)(a1 + 36);
  *(_QWORD *)(result + 40) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)result = v5 + 2;
  return result;
}

// N5storm23SimpleSandboxController23ServerDisconnectedEventE, virtual slot 5
__int64 __fastcall sub_483950(__int64 a1)
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
  v5 = goff_18F6C68;
  *(_DWORD *)(result + 36) = *(_DWORD *)(a1 + 36);
  *(_QWORD *)(result + 40) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)result = v5 + 2;
  return result;
}

// N5storm9stargroup23StarGroupJoinAttachmentE, virtual slot 19
_Bool __fastcall sub_485E00(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0 && (sub_57F110(a1 + 40, a2 + 40)) != 0 && (sub_57F110(a1 + 120, a2 + 120)) != 0 )
    return sub_57F110(a1 + 232, a2 + 232);
  else
    return 0;
}

// N5storm4echo9voicechat7inEvent13PeerConnectedE, virtual slot 5
__int64 __fastcall sub_487590(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x8

  result = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(result + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = ((char *)((__int64*)goff_18F6DF8) + 16);
  v3 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(result + 40) = *(_DWORD *)(a1 + 40);
  *(_QWORD *)(result + 32) = v3;
  return result;
}

// N5storm4echo9voicechat7inEvent8PeerGoneE, virtual slot 5
__int64 __fastcall sub_487F90(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x8

  result = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(result + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = ((__int64 *)goff_18F6E20 + 2);
  v3 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(result + 40) = *(_DWORD *)(a1 + 40);
  *(_QWORD *)(result + 32) = v3;
  return result;
}

// N5storm16NetPropertyLocalINSt3__13mapINS_32SimpleMatchmakingSessionMetadata30MatchmakingSessionMetadataKeysEiNS1_4lessIS4_EENS_9AllocatorINS1_4pairIKS4_iEELi1092677632ELj0EEEEEEE, virtual slot 5
_QWORD *__fastcall sub_489D40(__int64 a1)
{
  _QWORD *v2; // x20

  v2 = (_QWORD *)sub_56C9F0(56, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_48A400(v2, a1);
  return v2;
}

// N5storm16NetPropertyLocalINSt3__13mapINS_32SimpleMatchmakingSessionMetadata30MatchmakingSessionMetadataKeysEdNS1_4lessIS4_EENS_9AllocatorINS1_4pairIKS4_dEELi1092677632ELj0EEEEEEE, virtual slot 5
_QWORD *__fastcall sub_48AF20(__int64 a1)
{
  _QWORD *v2; // x20

  v2 = (_QWORD *)sub_56C9F0(56, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_48B5F0(v2, a1);
  return v2;
}

// N5storm14SingletonClassINS_9stargroup11GroupBridgeEEE, virtual slot 0
__int64 __fastcall sub_492DD0(_QWORD *a1)
{
  __int64 result; // x0

  *a1 = ((__int64 *)((__int64*)goff_18F6CA8) + 2);
  result = sub_56CA10(a1);
  *((_QWORD *)goff_18F6CA0 + (unsigned int)result) = 0;
  return result;
}

// N5storm14SingletonClassINS_9stargroup11GroupBridgeEEE, virtual slot 1
void __fastcall sub_492E00(_QWORD *a1)
{
  *a1 = ((__int64 *)((__int64*)goff_18F6CA8) + 2);
  *((_QWORD *)goff_18F6CA0 + (unsigned int)sub_56CA10(a1)) = 0;
  _ZdlPv(a1);
}

__int64 __fastcall sub_493C50(__int64 result)
{
  __int64 v1; // x19
  __int64 v2; // x0
  __int64 v3; // x0

  v1 = *(_QWORD *)(result + 24);
  if ( v1 != 0 )
  {
    v2 = *(_QWORD *)(v1 + 24);
    *(_QWORD *)(v1 + 24) = 0;
    if ( v2 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = *(_QWORD *)(v1 + 8);
    *(_QWORD *)(v1 + 8) = 0;
    if ( v3 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    return sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
  }
  return result;
}

// N5storm14SingletonClassINS_13SimpleContextEEE, virtual slot 0
__int64 __fastcall sub_498640(_QWORD *a1)
{
  __int64 result; // x0

  *a1 = ((__int64 *)goff_18F7000 + 2);
  result = sub_56CA10(a1);
  *((_QWORD *)goff_18F7008 + (unsigned int)result) = 0;
  return result;
}

// N5storm14SingletonClassINS_13SimpleContextEEE, virtual slot 1
void __fastcall sub_498670(_QWORD *a1)
{
  *a1 = ((__int64 *)goff_18F7000 + 2);
  *((_QWORD *)goff_18F7008 + (unsigned int)sub_56CA10(a1)) = 0;
  _ZdlPv(a1);
}

_QWORD *__fastcall sub_49BA80(__int64 a1, __int64 a2)
{
  __int64 v4; // x21
  _QWORD *result; // x0
  __int64 v6; // x8
  __int64 v7; // x8

  v4 = a1 + 32;
  result = (_QWORD *)sub_56C9F0(24, 8, 1092677632, goff_18F79D8, &unk_1326E41, 0);
  result[2] = a2;
  result[1] = v4;
  *result = 0;
  v6 = *(_QWORD *)(a1 + 32);
  *result = v6;
  *(_QWORD *)(v6 + 8) = result;
  v7 = *(_QWORD *)(a1 + 48) + 1LL;
  *(_QWORD *)(a1 + 32) = result;
  *(_QWORD *)(a1 + 48) = v7;
  return result;
}

// N5storm22SimpleGlobalController20GlobalControllerTaskE, virtual slot 2
__int64 __fastcall sub_49BFC0(char *a1)
{
  unsigned __int64 v2; // x20
  __int64 result; // x0

  v2 = (unsigned __int64)(1000LL * nn__os__GetSystemTick(a1)) / *(_QWORD *)((__int64*)goff_18F13E8) / 0x3E8;
  (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 24LL))(a1);
  result = sub_58B010((char *)v2);
  *((_DWORD *)a1 + 9) = result;
  return result;
}

__int64 __fastcall sub_49D9E0(__int64 a1)
{
  __int64 v1; // x29
  __int64 v2; // x30
  char *v3; // x8
  unsigned int v4; // w9
  int v5; // t1
  __int64 result; // x0
  int v7 __attribute__((aligned(8)));
  __int64 v8; // [xsp+10h] [xbp-10h]
  __int64 v9; // [xsp+18h] [xbp-8h]

  v3 = "sObjectMulticastingEnabled";
  v4 = 587065670;
  do
  {
    v5 = (unsigned __int8)*v3++;
    v4 = dword_1372C60[(unsigned __int8)v4 ^ v5] ^ (v4 >> 8);
  }
  while ( v3 < "" );
  v8 = v1;
  v9 = v2;
  v7 = ~v4;
  result = sub_25ECB0(a1, &v7);
  if ( result != 0 )
    return *(_BYTE *)(result + 26) != 0;
  return result;
}

__int64 __fastcall sub_4A1E30(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x10
  __int64 v3; // x19

  v1 = ((__int64*)goff_18F7A68);
  v2 = ((char *)((__int64*)goff_18F7A68) + 1072);
  *(_QWORD *)(a1 - 104) = ((char *)((__int64*)goff_18F7A68) + 16);
  v3 = a1 - 104;
  *(_QWORD *)(a1 - 16) = v2;
  *(_QWORD *)(a1 - 8) = v1 + 1200;
  *(_QWORD *)a1 = v1 + 1264;
  sub_577290((unsigned int *)(a1 + 8));
  return sub_483450(v3);
}

void __fastcall sub_4A1F90(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x10
  void *v3; // x19

  v1 = ((__int64*)goff_18F7A68);
  v2 = ((char *)((__int64*)goff_18F7A68) + 1072);
  *(_QWORD *)(a1 - 104) = ((char *)((__int64*)goff_18F7A68) + 16);
  v3 = (void *)(a1 - 104);
  *(_QWORD *)(a1 - 16) = v2;
  *(_QWORD *)(a1 - 8) = v1 + 1200;
  *(_QWORD *)a1 = v1 + 1264;
  sub_577290((unsigned int *)(a1 + 8));
  sub_483450(v3);
  _ZdlPv(v3);
}

// N5storm23SimpleSessionControllerE, virtual slot 113
__int64 __fastcall sub_4A3070(__int64 a1, int a2)
{
  _QWORD *v2; // x9
  _QWORD *v3; // x8
  __int64 result; // x0
  _QWORD *v5; // x10
  __int64 v6; // x10
  __int64 v7; // x11
  _QWORD *v8; // t1

  v2 = *(_QWORD **)(a1 + 1072);
  v3 = (_QWORD *)(a1 + 1080);
  while ( v2 != v3 )
  {
    result = v2[4];
    if ( *(_DWORD *)(*(_QWORD *)(result + 48) + 12LL) == a2 )
      return result;
    v5 = (_QWORD *)v2[1];
    if ( v5 != nullptr )
    {
      do
      {
        v2 = v5;
        v5 = (_QWORD *)*v5;
      }
      while ( v5 != nullptr );
    }
    else
    {
      v6 = (__int64)(v2 + 2);
      if ( *(_QWORD **)v2[2] == v2 )
      {
        v2 = (_QWORD *)v2[2];
      }
      else
      {
        do
        {
          v7 = *(_QWORD *)v6;
          v8 = *(_QWORD **)(*(_QWORD *)v6 + 16LL);
          v6 = *(_QWORD *)v6 + 16LL;
          v2 = v8;
        }
        while ( *v8 != v7 );
      }
    }
  }
  return 0;
}

// N5storm23SimpleSessionControllerE, virtual slot 100
__int64 __fastcall sub_4A5990(__int64 result, __int64 a2)
{
  __int64 v3; // x20
  __int64 v4; // x0
  _QWORD *v5; // x21
  _QWORD *v6; // x20
  _QWORD *v7; // x8
  __int64 v8; // x8
  __int64 v9; // x9
  _QWORD *v10; // t1

  v3 = result;
  if ( *(_BYTE *)(result + 1456) != 0 )
  {
    v4 = sub_4655D0();
    result = sub_467120(v4, a2);
  }
  v5 = *(_QWORD **)(v3 + 1072);
  v6 = (_QWORD *)(v3 + 1080);
  while ( v5 != v6 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v5[4] + 936LL))(v5[4], a2);
    v7 = (_QWORD *)v5[1];
    if ( v7 != nullptr )
    {
      do
      {
        v5 = v7;
        v7 = (_QWORD *)*v7;
      }
      while ( v7 != nullptr );
    }
    else
    {
      v8 = (__int64)(v5 + 2);
      if ( *(_QWORD **)v5[2] == v5 )
      {
        v5 = (_QWORD *)v5[2];
      }
      else
      {
        do
        {
          v9 = *(_QWORD *)v8;
          v10 = *(_QWORD **)(*(_QWORD *)v8 + 16LL);
          v8 = *(_QWORD *)v8 + 16LL;
          v5 = v10;
        }
        while ( *v10 != v9 );
      }
    }
  }
  return result;
}

// N5storm23SimpleSessionControllerE, virtual slot 101
__int64 __fastcall sub_4A60B0(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // x21
  __int64 result; // x0

  v4 = (_QWORD *)sub_56C9F0(352, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_593BB0(v4, a2);
  result = *(_QWORD *)(a1 + 1160);
  *(_QWORD *)(a1 + 1160) = v4;
  if ( result != 0 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  return result;
}

__int64 __fastcall sub_4A6F80(__int64 a1)
{
  __int64 v1; // x29
  __int64 v2; // x30
  char *v3; // x8
  unsigned int v4; // w9
  int v5; // t1
  __int64 result; // x0
  int v7 __attribute__((aligned(8)));
  __int64 v8; // [xsp+10h] [xbp-10h]
  __int64 v9; // [xsp+18h] [xbp-8h]

  v3 = "sObjectMulticastingEnabled";
  v4 = 587065670;
  do
  {
    v5 = (unsigned __int8)*v3++;
    v4 = dword_1372C60[(unsigned __int8)v4 ^ v5] ^ (v4 >> 8);
  }
  while ( v3 < "" );
  v8 = v1;
  v9 = v2;
  v7 = ~v4;
  result = sub_2C3070(a1, &v7);
  if ( result != 0 )
    return *(_BYTE *)(result + 26) != 0;
  return result;
}

__int64 __fastcall sub_4A7A00(__int64 a1)
{
  __int64 v1; // x19

  v1 = a1 - 32;
  sub_4A7340(a1 - 32);
  return sub_56CA00(v1, &unk_1326E41, 0);
}

// N5storm19SimpleObjectHandlerE, virtual slot 93
bool __fastcall sub_4B4120(__int64 a1, unsigned int a2)
{
  __int64 v2; // x0
  __int64 v3; // x9
  __int64 v4; // t1
  __int64 v5; // x8
  unsigned int v6; // w10
  bool v7; // cf
  _BOOL4 v8; // w10

  v4 = *(_QWORD *)(a1 + 136);
  v2 = a1 + 136;
  v3 = v4;
  if ( v4 == 0 )
    goto LABEL_9;
  v5 = v2;
  do
  {
    v6 = *(_DWORD *)(v3 + 28);
    v7 = v6 >= a2;
    v8 = v6 < a2;
    if ( v7 )
      v5 = v3;
    v3 = *(_QWORD *)(v3 + 8LL * v8);
  }
  while ( v3 != 0 );
  if ( v5 == v2 || *(_DWORD *)(v5 + 28) > a2 )
LABEL_9:
    v5 = v2;
  return v5 != v2;
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

// N5storm30SimpleStormMatchmakingStrategyE, virtual slot 0
__int64 __fastcall sub_4C9C60(_QWORD *a1)
{
  __int64 v1; // x20

  v1 = a1[67];
  *a1 = ((__int64 *)goff_18F86F0 + 2);
  if ( v1 != 0 )
  {
    sub_4C9920(v1);
    sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
    a1[67] = 0;
  }
  sub_4D44F0(a1 + 68, a1[69]);
  return sub_483BF0((__int64)a1);
}

// N5storm30SimpleStormMatchmakingStrategyE, virtual slot 1
void __fastcall sub_4C9CD0(_QWORD *a1)
{
  __int64 v1; // x20

  v1 = a1[67];
  *a1 = ((__int64 *)goff_18F86F0 + 2);
  if ( v1 != 0 )
  {
    sub_4C9920(v1);
    sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
    a1[67] = 0;
  }
  sub_4D44F0(a1 + 68, a1[69]);
  sub_483BF0((__int64)a1);
  _ZdlPv(a1);
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
  *a1 = ((char *)goff_18F8B68 + 16);
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

// N5storm2mm7helpers38SimpleRdvStorePlayerProfileCallContextE, virtual slot 0
void __fastcall sub_4DC7D0(_QWORD *result)
{
  __int64 v1; // x20
  _QWORD *v2; // x19
  __int64 v3; // x0
  __int64 v4; // x0

  v1 = result[2];
  *result = ((char *)goff_18F8B68 + 16);
  if ( v1 != 0 )
  {
    v2 = result;
    v3 = *(_QWORD *)(v1 + 24);
    *(_QWORD *)(v1 + 24) = 0;
    if ( v3 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v4 = *(_QWORD *)(v1 + 16);
    *(_QWORD *)(v1 + 16) = 0;
    if ( v4 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
    v2[2] = 0;
  }
  return;
}

// N5storm7helpers39SimpleMatchmakingGenericCallContextBaseE, virtual slot 1
void __fastcall sub_4DC850(_QWORD *a1)
{
  __int64 v1; // x20
  __int64 v3; // x0
  __int64 v4; // x0

  v1 = a1[2];
  *a1 = ((char *)goff_18F8B68 + 16);
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

// N5storm2mm7helpers33SimpleRdvSessionCreateCallContextE, virtual slot 0
__int64 __fastcall sub_4DFC80(_QWORD *a1)
{
  _QWORD *v2; // x0
  __int64 v3; // t1
  __int64 result; // x0

  *a1 = ((char *)((__int64*)goff_18F8CC8) + 16);
  v3 = a1[8];
  v2 = a1 + 8;
  if ( v3 != 0 )
    sub_4DFE80(v2, &unk_1326E41, 0);
  sub_4DDCC0(a1 + 9, a1[10]);
  result = a1[5];
  *a1 = ((char *)goff_18F8D00 + 16);
  if ( result != 0 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
    a1[5] = 0;
  }
  a1[5] = 0;
  return result;
}

// N5storm2mm7helpers30SimpleReportJoinRdvCallContextE, virtual slot 0
__int64 __fastcall sub_4E4F40(_QWORD *a1)
{
  _QWORD *v2; // x0
  __int64 v3; // t1
  __int64 result; // x0

  *a1 = ((char *)((__int64*)goff_18F8F30) + 16);
  v3 = a1[8];
  v2 = a1 + 8;
  if ( v3 != 0 )
    sub_4DFE80(v2, &unk_1326E41, 0);
  result = a1[3];
  *a1 = ((char *)goff_18F8F68 + 16);
  if ( result != 0 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
    a1[3] = 0;
  }
  return result;
}

// N5storm2mm30IP2LocationProtocolAdminClientE, virtual slot 25
_QWORD *sub_4EB1F0()
{
  _QWORD *v0; // x19

  v0 = (_QWORD *)sub_4EB320(96, &unk_1326E41, 0);
  sub_52B270(v0, 1);
  *v0 = ((__int64 *)((__int64*)goff_18F9200) + 2);
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
  *a1 = ((__int64 *)((__int64*)goff_18F9238) + 2);
  return sub_4EE340(qword_19148A0, a1);
}

// N5storm2mm18ThreadVariableRootE, virtual slot 1
__int64 __fastcall sub_4EE670(_QWORD *a1)
{
  *a1 = ((__int64 *)((__int64*)goff_18F9238) + 2);
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

int __fastcall sub_4EF500(unsigned __int64 a1)
{
  unsigned __int64 v2; // x0

  if ( a1 == 0 )
    return 0xFFFFFFFFLL;
  v2 = sub_4EF540(0);
  if ( v2 < a1 )
    return (unsigned int)(a1 - v2);
  else
    return 0;
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

__int64 __fastcall sub_4F3CB0(__int64 a1)
{
  __int64 result; // x0

  *(_QWORD *)a1 = ((char *)((__int64*)goff_18F9360) + 16);
  result = sub_4EE1B0(a1 + 8, 0x40000000);
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 40) = 2;
  return result;
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

__int64 __fastcall sub_4F6E60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // x8
  __int64 v5; // x1

  sub_4F47B0(a1, a2, a3);
  v4 = ((__int64*)goff_18F93F0);
  *(_DWORD *)(a1 + 84) = 0;
  *(_QWORD *)a1 = v4 + 2;
  v5 = *(unsigned int *)(a1 + 60);
  return sub_4F48B0(a1, v5);
}

// N5storm2mm14ThreadVariableINS0_5qListINS0_15SecurityContextEEEEE, virtual slot 2
void __fastcall sub_4F7CB0(_QWORD *result)
{
  _BYTE *v1; // x22
  _QWORD *v2; // x20
  _QWORD *v3; // x19

  v1 = (_BYTE *)goff_18F88D8;
  v2 = result;
  v3 = result + 6;
  if ( *(char*)goff_18F88D8 == 0 )
  {
    sub_4EE210(result + 6);
    if ( v2[12] == 0 )
      goto LABEL_6;
    do
LABEL_5:
      sub_4F8040(v2 + 10, (_QWORD *)v2[10]);
    while ( v2[12] != 0 );
    goto LABEL_6;
  }
  if ( result[12] != 0 )
    goto LABEL_5;
LABEL_6:
  if ( *v1 == 0 )
    { sub_4EE230(v3); return; }
  return;
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

_QWORD *__fastcall sub_4FD940(__int64 a1, __int64 a2)
{
  __int64 v4; // x21
  _QWORD *result; // x0
  __int64 v6; // x8
  __int64 v7; // x8

  v4 = a1 + 8;
  result = (_QWORD *)sub_36EA0(0x18u, 4u, 0, 1095761920);
  result[2] = a2;
  result[1] = v4;
  *result = 0;
  v6 = *(_QWORD *)(a1 + 8);
  *result = v6;
  *(_QWORD *)(v6 + 8) = result;
  v7 = *(_QWORD *)(a1 + 24) + 1LL;
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)(a1 + 24) = v7;
  return result;
}

void sub_4FDFC0()
{
  __int64 *v0; // x20
  __int64 v1; // x19

  v0 = ((__int64*)goff_18F9458);
  v1 = *((__int64*)goff_18F9458);
  if ( *((__int64*)goff_18F9458) != 0 )
  {
    sub_4F5220(*((__int64*)goff_18F9458));
    sub_4EB340(v1);
  }
  *v0 = 0;
  return;
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

void sub_503CC0()
{
  __int64 *v0; // x20
  __int64 v1; // x19
  __int64 *v3; // x20
  __int64 v4; // x19
  __int64 *v5; // x20
  __int64 v6; // x19

  v0 = ((__int64*)goff_18F9470);
  v1 = *((__int64*)goff_18F9470);
  if ( *((__int64*)goff_18F9470) != 0 )
  {
    sub_4F30C0(*((__int64*)goff_18F9470));
    sub_4EB340(v1);
  }
  *v0 = 0;
  v3 = ((__int64*)goff_18F9488);
  v4 = *((__int64*)goff_18F9488);
  if ( *((__int64*)goff_18F9488) != 0 )
  {
    sub_4F30C0(*((__int64*)goff_18F9488));
    sub_4EB340(v4);
  }
  *v3 = 0;
  v5 = ((__int64*)goff_18F9480);
  v6 = *((__int64*)goff_18F9480);
  if ( *((__int64*)goff_18F9480) != 0 )
  {
    sub_4F5220(*((__int64*)goff_18F9480));
    sub_4EB340(v6);
  }
  *v5 = 0;
  return;
}

// N5storm2mm13AESEncryptionE, virtual slot 7
__int64 __fastcall sub_504F70(__int64 a1, __int64 a2)
{
  __int64 v4; // x21
  unsigned int v5; // w0

  v4 = sub_505FC0(a2);
  v5 = sub_505FB0(a2);
  return (*(__int64 (__fastcall **)(__int64, __int64, __typeof__(v5)))(*(_QWORD *)a1 + 64LL))(a1, v4, v5);
}

__int64 __fastcall sub_505AE0(__int64 a1, int a2, int a3)
{
  __int64 result; // x0

  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18F94A0) + 2);
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

void sub_507670()
{
  __int64 *v0; // x20
  __int64 v1; // x19

  v0 = ((__int64*)goff_18F9478);
  v1 = *((__int64*)goff_18F9478);
  if ( *((__int64*)goff_18F9478) != 0 )
  {
    sub_4F5220(*((__int64*)goff_18F9478));
    sub_4EB340(v1);
  }
  *v0 = 0;
  return;
}

__int64 __fastcall sub_507B20(__int64 result)
{
  *(_QWORD *)(result + 88) = 0;
  *(_QWORD *)(result + 80) = 0;
  *(_QWORD *)(result + 64) = 0;
  *(_QWORD *)(result + 72) = result + 80;
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 24) = 0x3E800000014LL;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 32) = 5000;
  *(_QWORD *)(result + 44) = 0x323F800000LL;
  *(_QWORD *)(result + 36) = 0x3FA0000000000008LL;
  *(_QWORD *)(result + 52) = 0x32000000FALL;
  *(_DWORD *)result = 0;
  *(_WORD *)(result + 60) = 1;
  *(_BYTE *)(result + 62) = 1;
  return result;
}

__int64 __fastcall sub_507B80(__int64 a1)
{
  return sub_507E40(a1 + 72, *(_QWORD *)(a1 + 80));
}

void sub_507E00()
{
  __int64 *v0; // x20
  __int64 v1; // x19

  v0 = ((__int64*)goff_18F94B0);
  v1 = *((__int64*)goff_18F94B0);
  if ( *((__int64*)goff_18F94B0) != 0 )
  {
    sub_4F5220(*((__int64*)goff_18F94B0));
    sub_4EB340(v1);
  }
  *v0 = 0;
  return;
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
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18F94B8) + 2);
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

  *a1 = ((__int64 *)((__int64*)goff_18F94C0) + 2);
  sub_4EE1B0(a1 + 2, 0x20000000);
  sub_4F2FA0(a1 + 6, "Compression", 0, "Time to compress a buffer before sending on PRUDP.");
  result = sub_4F2FA0(a1 + 25, "Decompression", 0, "Time to decompress a buffer received from PRUDP.");
  a1[1] = 0;
  return result;
}

void sub_509850()
{
  __int64 *v0; // x20
  __int64 v1; // x19
  __int64 *v3; // x20
  __int64 v4; // x19

  v0 = ((__int64*)goff_18F94C8);
  v1 = *((__int64*)goff_18F94C8);
  if ( *((__int64*)goff_18F94C8) != 0 )
  {
    sub_4F5220(*((__int64*)goff_18F94C8));
    sub_4EB340(v1);
  }
  *v0 = 0;
  v3 = ((__int64*)goff_18F94D0);
  v4 = *((__int64*)goff_18F94D0);
  if ( *((__int64*)goff_18F94D0) != 0 )
  {
    sub_4F5220(*((__int64*)goff_18F94D0));
    sub_4EB340(v4);
  }
  *v3 = 0;
  return;
}

int __fastcall sub_509A00(__int64 a1)
{
  if ( (sub_50B8E0(a1)) != 0 )
    return 45;
  else
    return 29;
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

void sub_50BBB0()
{
  _QWORD *v0; // x20
  __int64 v1; // x19
  _QWORD *v3; // x20
  __int64 v4; // x19
  _QWORD *v5; // x20
  __int64 v6; // x19

  v0 = (_QWORD *)((__int64*)goff_18F9550);
  v1 = *(_QWORD *)((__int64*)goff_18F9550);
  if ( *(_QWORD *)((__int64*)goff_18F9550) != 0 )
  {
    sub_4F5220(*(_QWORD *)((__int64*)goff_18F9550));
    sub_4EB340(v1);
  }
  *v0 = 0;
  v3 = (_QWORD *)((__int64*)goff_18F9548);
  v4 = *(_QWORD *)((__int64*)goff_18F9548);
  if ( *(_QWORD *)((__int64*)goff_18F9548) != 0 )
  {
    sub_4F5220(*(_QWORD *)((__int64*)goff_18F9548));
    sub_4EB340(v4);
  }
  *v3 = 0;
  v5 = (_QWORD *)((__int64*)goff_18F9540);
  v6 = *(_QWORD *)((__int64*)goff_18F9540);
  if ( *(_QWORD *)((__int64*)goff_18F9540) != 0 )
  {
    sub_4F5220(*(_QWORD *)((__int64*)goff_18F9540));
    sub_4EB340(v6);
  }
  *v5 = 0;
  return;
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

void sub_50FDA0(__int64 result, unsigned int a2)
{
  __int64 v2; // x19
  __int64 v4; // x21
  __int64 v5; // x20
  unsigned int v6; // w0

  if ( *(_BYTE *)(result + 185) == 0 )
  {
    v2 = result;
    v4 = sub_4FB800(32);
    sub_4FB9D0(v4, a2);
    *(_BYTE *)(v2 + 185) = 1;
    *(_DWORD *)(*(_QWORD *)(v2 + 160) + 12LL) = 0;
    *(_QWORD *)(*(_QWORD *)(v2 + 160) + 40LL) = v4;
    v5 = sub_4FC1E0(v4);
    v6 = sub_4FC220(v4);
    { sub_511C20(v2, v5, v6, v2 + 188, *(_QWORD *)(v2 + 160)); return; }
  }
  return;
}

// N5storm2mm10TimedQueueINS0_15NetworkEmulator13NetworkPacketEEE, virtual slot 0
void __fastcall sub_510200(_QWORD *result)
{
  _QWORD *v1; // x19
  __int64 v2; // x20

  *result = ((char *)((__int64*)goff_18F95C0) + 16);
  if ( result[3] != 0 )
  {
    v1 = result;
    do
    {
      v2 = v1[2];
      *(_QWORD *)(*(_QWORD *)v2 + 8LL) = *(_QWORD *)(v2 + 8);
      **(_QWORD **)(v2 + 8) = *(_QWORD *)v2;
      --v1[3];
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 16) + 24LL))(*(_QWORD *)(v2 + 16));
      nullsub_1576(v2 + 24);
      sub_37030(v2);
    }
    while ( v1[3] != 0 );
  }
  return;
}

// N5storm2mm10TimedQueueINS0_15NetworkEmulator13NetworkPacketEEE, virtual slot 1
__int64 __fastcall sub_510280(_QWORD *a1)
{
  __int64 v2; // x20

  *a1 = ((char *)((__int64*)goff_18F95C0) + 16);
  while ( a1[3] != 0 )
  {
    v2 = a1[2];
    *(_QWORD *)(*(_QWORD *)v2 + 8LL) = *(_QWORD *)(v2 + 8);
    **(_QWORD **)(v2 + 8) = *(_QWORD *)v2;
    --a1[3];
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 16) + 24LL))(*(_QWORD *)(v2 + 16));
    nullsub_1576(v2 + 24);
    sub_37030(v2);
  }
  return sub_4EB340(a1);
}

// N5storm2mm12VirtualModemINS0_15NetworkEmulator13NetworkPacketEEE, virtual slot 1
__int64 __fastcall sub_510A70(_QWORD *a1)
{
  __int64 v2; // x20

  *a1 = ((char *)((__int64*)goff_18F95C0) + 16);
  while ( a1[3] != 0 )
  {
    v2 = a1[2];
    *(_QWORD *)(*(_QWORD *)v2 + 8LL) = *(_QWORD *)(v2 + 8);
    **(_QWORD **)(v2 + 8) = *(_QWORD *)v2;
    --a1[3];
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 16) + 24LL))(*(_QWORD *)(v2 + 16));
    nullsub_1576(v2 + 24);
    sub_37030(v2);
  }
  return sub_4EB340(a1);
}

// N5storm2mm15VirtualInternetINS0_15NetworkEmulator13NetworkPacketEEE, virtual slot 1
__int64 __fastcall sub_510AF0(_QWORD *a1)
{
  __int64 v2; // x20

  *a1 = ((char *)((__int64*)goff_18F95C0) + 16);
  while ( a1[3] != 0 )
  {
    v2 = a1[2];
    *(_QWORD *)(*(_QWORD *)v2 + 8LL) = *(_QWORD *)(v2 + 8);
    **(_QWORD **)(v2 + 8) = *(_QWORD *)v2;
    --a1[3];
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 16) + 24LL))(*(_QWORD *)(v2 + 16));
    nullsub_1576(v2 + 24);
    sub_37030(v2);
  }
  return sub_4EB340(a1);
}

// N5storm2mm20BerkeleySocketDriverE, virtual slot 2
__int64 sub_512570()
{
  __int64 v0; // x0
  __int64 v1; // x19

  v0 = sub_4EB320(48, &unk_1326E41, 0);
  *(_QWORD *)v0 = ((char *)((__int64*)goff_18F95E0) + 16);
  v1 = v0;
  *(_DWORD *)(v0 + 8) = -1;
  sub_4EE1B0(v0 + 16, 0);
  return v1;
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

// N5storm2mm20PseudoGlobalVariableItEE, virtual slot 0
__int64 __fastcall sub_513D60(__int64 a1)
{
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18F9608) + 16);
  sub_4F03B0(goff_18F92F0, a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  return nullsub_1627(a1);
}

// N5storm2mm20PseudoGlobalVariableItEE, virtual slot 1
__int64 __fastcall sub_513DB0(__int64 a1)
{
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18F9608) + 16);
  sub_4F03B0(goff_18F92F0, a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  nullsub_1627(a1);
  return sub_4EB340(a1);
}

void sub_514F60(char *result)
{
  char *v1; // x8
  __int64 v2; // x9
  __int64 v3; // x20
  char *v4; // x19
  __int64 v5; // x21
  __int64 v6; // x22

  v1 = *(_QWORD *)(result + 8);
  *(_DWORD *)result = 0;
  if ( v1 != 0 )
  {
    v3 = v1 - 8;
    v2 = *(_QWORD *)(v1 - 8);
    v4 = result;
    if ( v2 != 0 )
    {
      v5 = 24 * v2;
      v6 = v1 - 24;
      do
      {
        sub_5150D0(v6 + v5);
        v5 -= 24;
      }
      while ( v5 != 0 );
    }
    sub_4EB350(v3);
    *(_QWORD *)(v4 + 8) = 0;
  }
  return;
}

__int64 __fastcall sub_517350(__int64 a1, int a2, int a3)
{
  __int64 result; // x0

  sub_5174F0();
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18F9658) + 16);
  result = sub_505D60(a1 + 16);
  *(_DWORD *)(a1 + 56) = a2;
  *(_DWORD *)(a1 + 60) = a3;
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

void sub_518FA0()
{
  _QWORD *v0; // x20
  __int64 v1; // x19

  v0 = (_QWORD *)((__int64*)goff_18F9678);
  v1 = *(_QWORD *)((__int64*)goff_18F9678);
  if ( *(_QWORD *)((__int64*)goff_18F9678) != 0 )
  {
    sub_518FE0(v1 + 8, *(_QWORD *)(v1 + 16));
    sub_4EB340(v1);
  }
  *v0 = 0;
  return;
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

void sub_519240()
{
  _QWORD *v0; // x20
  __int64 v1; // x19

  v0 = (_QWORD *)((__int64*)goff_18F9680);
  v1 = *(_QWORD *)((__int64*)goff_18F9680);
  if ( *(_QWORD *)((__int64*)goff_18F9680) != 0 )
  {
    sub_4EE1E0(*(_QWORD *)((__int64*)goff_18F9680));
    sub_4EB340(v1);
  }
  *v0 = 0;
  return;
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

  *a1 = ((__int64 *)((__int64*)goff_18F96C8) + 2);
  v2 = sub_4EB320(8, &unk_1326E41, 0);
  sub_51A630();
  a1[1] = v2;
  v3 = sub_4EB320(48, &unk_1326E41, 0);
  result = sub_51A700(v3);
  a1[2] = v3;
  a1[3] = 0;
  return result;
}

// N5storm2mm17ConnectionManagerE, virtual slot 0
__int64 __fastcall sub_51B2E0(_QWORD *a1)
{
  *a1 = ((char *)((__int64*)goff_18F9708) + 16);
  sub_4FD720(a1 + 11);
  sub_4F5410(a1 + 2);
  return nullsub_1682(a1);
}

// N5storm2mm17ConnectionManagerE, virtual slot 1
__int64 __fastcall sub_51B330(_QWORD *a1)
{
  *a1 = ((char *)((__int64*)goff_18F9708) + 16);
  sub_4FD720(a1 + 11);
  sub_4F5410(a1 + 2);
  nullsub_1682(a1);
  return sub_4EB340(a1);
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

  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18F9808) + 2);
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

  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18F9808) + 2);
  v2 = a1 + 88;
  sub_4F03B0(goff_18F92F0, a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  sub_51D670(v2);
  sub_51D670(a1 + 24);
  nullsub_1627(a1);
  return sub_4EB340(a1);
}

// N5storm2mm22IP2LocationAdminClientE, virtual slot 6
int __fastcall sub_521240(__int64 a1)
{
  __int64 v2; // x0
  __int64 v4; // x0

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 != 0 && *(_BYTE *)(a1 + 16) == 0 && (v4 = sub_520750(v2)) != 0 )
    return (*(int (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
  else
    return 0;
}

// N5storm2mm22IP2LocationAdminClientE, virtual slot 7
int __fastcall sub_521280(__int64 a1)
{
  __int64 v2; // x0
  __int64 v4; // x0

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 != 0 && *(_BYTE *)(a1 + 16) == 0 && (v4 = sub_520750(v2)) != 0 )
    return (*(int (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  else
    return 0;
}

// N5storm2mm12RVClientCoreE, virtual slot 0
__int64 __fastcall sub_5215E0(_QWORD *a1)
{
  __int64 v2; // x0
  __int64 v3; // x0

  *a1 = ((char *)((__int64*)goff_18F9850) + 16);
  v2 = a1[2];
  if ( v2 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = a1[7];
  if ( v3 != 0 )
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  sub_4F4F60(v3);
  sub_521AD0(a1 + 8, a1[9]);
  sub_4F4330((__int64)(a1 + 3));
  return sub_4F49F0((__int64)a1);
}

// N5storm2mm12RVClientCoreE, virtual slot 1
__int64 __fastcall sub_521650(_QWORD *a1)
{
  __int64 v2; // x0
  __int64 v3; // x0

  *a1 = ((char *)((__int64*)goff_18F9850) + 16);
  v2 = a1[2];
  if ( v2 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = a1[7];
  if ( v3 != 0 )
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  sub_4F4F60(v3);
  sub_521AD0(a1 + 8, a1[9]);
  sub_4F4330((__int64)(a1 + 3));
  sub_4F49F0((__int64)a1);
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

// N5storm2mm17WebSocketEndPointE, virtual slot 6
int __fastcall sub_528E40(__int64 a1)
{
  unsigned __int64 v1; // x9
  unsigned __int64 v2; // x0

  v1 = atomic_load((unsigned __int64 *)(a1 + 160));
  if ( v1 == 0 )
    return 0;
  v2 = atomic_load((unsigned __int64 *)(a1 + 160));
  return (*(int (__fastcall **)(unsigned __int64))(*(_QWORD *)v2 + 24LL))(v2);
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

// N5storm2mm19LoginProtocolClientE, virtual slot 25
_QWORD *sub_52CA70()
{
  _QWORD *v0; // x19

  v0 = (_QWORD *)sub_4EB320(96, &unk_1326E41, 0);
  sub_52B270(v0, 1);
  *v0 = ((char *)((__int64*)goff_18F9948) + 16);
  return v0;
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

void sub_52E880(_QWORD *a1, __int64 a2)
{  __int64 v5; // x8

  sub_51D8C0(a1, 0);
  v5 = ((__int64*)goff_18F99A8);
  a1[2] = a2;
  *a1 = v5 + 16;
  return;
}

void sub_52F420()
{
  __int64 *v0; // x20
  __int64 v1; // x19

  v0 = ((__int64*)goff_18F9A00);
  v1 = *((__int64*)goff_18F9A00);
  if ( *((__int64*)goff_18F9A00) != 0 )
  {
    sub_4F5220(*((__int64*)goff_18F9A00));
    sub_4EB340(v1);
  }
  *v0 = 0;
  return;
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

int __fastcall sub_530200(__int64 a1, __int64 a2)
{
  unsigned int v4; // w20
  int v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (sub_4ED190(a2)) != 0 )
  {
    v6 = *(_DWORD *)(a2 + 112);
    v4 = 1;
    sub_504140(a1, &v6, 4, 1);
  }
  else
  {
    return 0;
  }
  return v4;
}

__int64 __fastcall sub_5308A0(__int64 a1)
{
  __int64 *v2; // x8
  __int64 result; // x0

  sub_51D8C0(a1, 0);
  v2 = ((__int64*)goff_18F9A50);
  *(_QWORD *)a1 = v2 + 2;
  *(_DWORD *)(a1 + 24) = 0;
  result = sub_4F5C90(a1 + 40);
  *(_DWORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  return result;
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

__int64 __fastcall sub_53A520(_QWORD *a1)
{
  sub_520FB0();
  *a1 = ((char *)((__int64*)goff_18F9A98) + 16);
  return sub_53CE50((__int64)(a1 + 3), 1);
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

void sub_53AFF0(__int64 a1, __int64 *a2, int a3)
{  __int64 v7; // x8
  __int64 v8; // x9

  *(_QWORD *)a1 = ((char *)((__int64*)goff_18F9AB0) + 16);
  sub_4FC710(a1 + 8);
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18F9AB8) + 16);
  v7 = *a2;
  v8 = a2[1];
  *(_DWORD *)(a1 + 24) = a3;
  *(_QWORD *)(a1 + 8) = v7;
  *(_QWORD *)(a1 + 16) = v8;
  return;
}

void sub_53B050(__int64 a1)
{  __int64 v3; // x8

  *(_QWORD *)a1 = ((char *)((__int64*)goff_18F9AB0) + 16);
  sub_4FC710(a1 + 8);
  v3 = ((__int64*)goff_18F9AB8);
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = v3 + 16;
  return;
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

__int64 __fastcall sub_542FB0(_QWORD *a1)
{
  __int64 result; // x0

  *a1 = ((char *)((__int64*)goff_18F9AE8) + 16);
  sub_51B010(a1 + 1);
  result = sub_4EB3D0(a1 + 2);
  *a1 = ((char *)((__int64*)goff_18F9AF0) + 16);
  return result;
}

__int64 __fastcall sub_543390(__int64 a1)
{
  __int64 result; // x0

  *(_QWORD *)a1 = ((char *)((__int64*)goff_18F9AD8) + 16);
  sub_4EB3D0(a1 + 8);
  *(_DWORD *)(a1 + 16) = 0;
  sub_4FC710(a1 + 20);
  sub_4FC710(a1 + 36);
  sub_4EB3D0(a1 + 56);
  result = sub_51B010(a1 + 64);
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18F9AE0) + 16);
  return result;
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
  v2 = ((char *)goff_18F9BF8 + 16);
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

int __fastcall sub_54CA70(_BYTE *a1)
{
  char v1; // w10
  unsigned __int8 *v2; // x9
  unsigned int v3; // w8
  int v4; // t1

  v1 = *a1;
  if ( *a1 == 0 )
    return 0;
  v2 = a1 + 1;
  v3 = 0xFFFFFFFF;
  do
  {
    v3 = dword_1385494[(unsigned __int8)(v1 ^ v3)] ^ (v3 >> 8);
    v4 = *v2++;
    v1 = v4;
  }
  while ( v4 != 0 );
  return ~v3;
}

// N5storm10CoreBridgeE, virtual slot 0
void __fastcall sub_54CB80(_QWORD *result)
{
  __int64 v1; // x20
  _QWORD *v2; // x19

  v1 = result[1];
  v2 = result;
  *result = ((__int64 *)((__int64*)goff_18F9C08) + 2);
  if ( v1 != 0 )
  {
    sub_54DD50(v1);
    sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
    v2[1] = 0;
  }
  v2[1] = 0;
  return;
}

// N5storm10CoreBridgeE, virtual slot 1
void __fastcall sub_54CBE0(_QWORD *a1)
{
  __int64 v1; // x20

  v1 = a1[1];
  *a1 = ((__int64 *)((__int64*)goff_18F9C08) + 2);
  if ( v1 != 0 )
  {
    sub_54DD50(v1);
    sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
  }
  _ZdlPv(a1);
}

_QWORD *__fastcall sub_54FCB0(__int64 a1, __int64 a2)
{
  __int64 v4; // x21
  _QWORD *result; // x0
  __int64 v6; // x8
  __int64 v7; // x8

  v4 = a1 + 352;
  result = (_QWORD *)sub_56C9F0(24, 8, 1092624393, goff_18F9CE0, &unk_1326E41, 0);
  result[2] = a2;
  result[1] = v4;
  *result = 0;
  v6 = *(_QWORD *)(a1 + 352);
  *result = v6;
  *(_QWORD *)(v6 + 8) = result;
  v7 = *(_QWORD *)(a1 + 368) + 1LL;
  *(_QWORD *)(a1 + 352) = result;
  *(_QWORD *)(a1 + 368) = v7;
  return result;
}

_QWORD *__fastcall sub_552100(__int64 a1, __int64 a2)
{
  __int64 v4; // x21
  _QWORD *result; // x0
  __int64 v6; // x8
  __int64 v7; // x8

  v4 = a1 + 376;
  result = (_QWORD *)sub_56C9F0(24, 8, 1092624393, goff_18F9D50, &unk_1326E41, 0);
  result[2] = a2;
  result[1] = v4;
  *result = 0;
  v6 = *(_QWORD *)(a1 + 376);
  *result = v6;
  *(_QWORD *)(v6 + 8) = result;
  v7 = *(_QWORD *)(a1 + 392) + 1LL;
  *(_QWORD *)(a1 + 376) = result;
  *(_QWORD *)(a1 + 392) = v7;
  return result;
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

// N5storm8security6AESGCME, virtual slot 1
void __fastcall sub_559C20(_QWORD *a1)
{
  _QWORD *v2; // x0

  *a1 = ((char *)((__int64*)goff_18F9DE0) + 16);
  sub_1E5980(a1 + 20);
  sub_57EF40(a1 + 41);
  v2 = (_QWORD *)a1[17];
  if ( v2 != a1 + 1 && v2 != nullptr )
    sub_37030(v2);
  _ZdlPv(a1);
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

// N5storm8CoreImpl10DelayEventE, virtual slot 5
__int64 sub_55BA70()
{
  __int64 result; // x0
  __int64 v1; // x8
  __int64 *v2; // x8

  result = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v1 = qword_1915908;
  *(_DWORD *)(result + 8) = -1;
  *(_QWORD *)(result + 16) = v1;
  *(_QWORD *)(result + 24) = 0;
  v2 = ((__int64*)goff_18F9C18);
  *(_QWORD *)result = v2 + 2;
  *(_QWORD *)(result + 40) = 0;
  return result;
}

// N5storm4core8internal28ProductImplNetworkStepResultE, virtual slot 5
__int64 __fastcall sub_55D420(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x9
  __int64 v4; // x8

  result = sub_56C9F0(64, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  v3 = ((__int64*)goff_18EE7F0);
  *(_QWORD *)(result + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v3 + 2;
  *(_DWORD *)(result + 32) = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(result + 36) = *(_DWORD *)(a1 + 36);
  *(_QWORD *)(result + 40) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)result = ((char *)goff_18F9D48 + 16);
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
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
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

// N5storm15SocketSchedulerE, virtual slot 0
__int64 __fastcall sub_565920(_QWORD *a1)
{
  char *v1; // x20
  unsigned __int64 *v3; // x8
  unsigned __int64 v4; // x9

  v1 = (char *)a1[8];
  *a1 = ((__int64 *)((__int64*)goff_18F9FE0) + 2);
  if ( v1 != nullptr )
  {
    v3 = (unsigned __int64 *)((char *)v1 + 8);
    v4 = __atomic_fetch_sub(v3, 1, 4);
    if ( v4 == 0 )
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 16LL))(v1);
      std____shared_weak_count____release_weak(v1);
    }
  }
  sub_56F9A0(a1 + 4, a1[5]);
  return nullsub_1096(a1);
}

// N5storm15SocketSchedulerE, virtual slot 1
void __fastcall sub_5659A0(_QWORD *a1)
{
  char *v1; // x20
  unsigned __int64 *v3; // x8
  unsigned __int64 v4; // x9

  v1 = (char *)a1[8];
  *a1 = ((__int64 *)((__int64*)goff_18F9FE0) + 2);
  if ( v1 != nullptr )
  {
    v3 = (unsigned __int64 *)((char *)v1 + 8);
    v4 = __atomic_fetch_sub(v3, 1, 4);
    if ( v4 == 0 )
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 16LL))(v1);
      std____shared_weak_count____release_weak(v1);
    }
  }
  sub_56F9A0(a1 + 4, a1[5]);
  nullsub_1096(a1);
  _ZdlPv(a1);
}

