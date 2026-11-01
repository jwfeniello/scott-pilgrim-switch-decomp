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
__int64 _ZdlPv();
__attribute__((malloc)) void* _Znwm(size_t);
extern __attribute__((visibility("hidden"))) int dword_18043E8;
extern char goff_18EDC78[];
extern char goff_18EDC80[];
extern char goff_18EDCC8[];
extern char goff_18EDCD0[];
extern char goff_18EDCD8[];
extern char goff_18EDDC0[];
extern char goff_18EDE08[];
extern char goff_18EDE48[];
extern char goff_18EDE50[];
extern char goff_18EDE58[];
extern char goff_18EDE60[];
extern char goff_18EDE68[];
extern char goff_18EDE70[];
extern char goff_18EE438[];
extern char goff_18EE440[];
extern char goff_18EE7F0[];
extern char goff_18EFA10[];
extern char goff_18EFCE8[];
extern char goff_18F0540[];
extern char goff_18F13E8[];
extern char goff_18F14C0[];
extern char goff_18F16A8[];
extern char goff_18F1DB0[];
extern char goff_18F2CC8[];
extern char goff_18F2CF0[];
extern char goff_18F2CF8[];
extern char goff_18F2D08[];
extern char goff_18F2D10[];
extern char goff_18F2D30[];
extern char goff_18F2D38[];
extern char goff_18F2D48[];
extern char goff_18F2D60[];
extern char goff_18F2D68[];
extern char goff_18F2D90[];
extern char goff_18F2EB8[];
extern char goff_18F2F88[];
extern char goff_18F2FB0[];
extern char goff_18F2FF0[];
extern char goff_18F2FF8[];
extern char goff_18F3028[];
extern char goff_18F3038[];
extern char goff_18F3040[];
extern char goff_18F3060[];
extern char goff_18F3090[];
extern char goff_18F31C0[];
extern char goff_18F31D0[];
extern char goff_18F3448[];
extern char goff_18F3458[];
extern char goff_18F3550[];
extern char goff_18F35B8[];
extern char goff_18F35D0[];
extern char goff_18F35D8[];
extern char goff_18F3618[];
extern char goff_18F3630[];
extern char goff_18F4240[];
extern char goff_18F4248[];
extern char goff_18F4290[];
extern char goff_18F42B0[];
extern char goff_18F42C8[];
extern char goff_18F42D8[];
extern char goff_18F42E0[];
extern char goff_18F42F0[];
extern char goff_18F42F8[];
extern char goff_18F4308[];
extern char goff_18F4320[];
extern char goff_18F4338[];
extern char goff_18F4340[];
extern char goff_18F4350[];
extern char goff_18F4360[];
extern char goff_18F43C8[];
extern char goff_18F43D0[];
extern char goff_18F43F0[];
extern char goff_18F44E8[];
extern char goff_18F4518[];
extern char goff_18F4520[];
extern char goff_18F4590[];
extern char goff_18F45A0[];
extern char goff_18F45C8[];
extern char goff_18F45D0[];
extern char goff_18F4658[];
extern char goff_18F4668[];
extern char goff_18F4708[];
extern char goff_18F4818[];
extern char goff_18F4890[];
extern char goff_18F48A0[];
extern char goff_18F48A8[];
extern char goff_18F4930[];
extern char goff_18F49F8[];
extern char goff_18F4A50[];
extern char goff_18F4AE8[];
extern char goff_18F4F38[];
extern char goff_18F50A8[];
extern char goff_18F5778[];
extern char goff_18F57E0[];
extern char goff_18F5830[];
extern char goff_18F5838[];
extern char goff_18F5840[];
extern char goff_18F5848[];
extern char goff_18F5850[];
extern char goff_18F5858[];
extern char goff_18F5860[];
extern char goff_18F5870[];
extern char goff_18F58A0[];
extern char goff_18F58A8[];
extern char goff_18F58B8[];
extern char goff_18F58C0[];
extern char goff_18F58C8[];
extern char goff_18F58D0[];
extern char goff_18F58D8[];
extern char goff_18F58E0[];
extern char goff_18F58E8[];
extern char goff_18F58F0[];
extern char goff_18F58F8[];
extern char goff_18F5920[];
extern char goff_18F5968[];
extern char goff_18F59D8[];
extern char goff_18F59E0[];
extern char goff_18F59E8[];
extern char goff_18F5A00[];
extern char goff_18F5A08[];
extern char goff_18F5A10[];
extern char goff_18F5A38[];
extern char goff_18F5A58[];
extern char goff_18F5A80[];
extern char goff_18F5A88[];
extern char goff_18F5A90[];
extern char goff_18F5A98[];
extern char goff_18F5AA0[];
extern char goff_18F5B50[];
extern char goff_18F5B60[];
extern char goff_18F5B78[];
extern char goff_18F5B80[];
extern char goff_18F5BA8[];
extern char goff_18F5BC8[];
extern char goff_18F5C00[];
extern char goff_18F5C38[];
extern char goff_18F5C50[];
extern char goff_18F5C78[];
extern char goff_18F5CA8[];
extern char goff_18F5CE0[];
extern char goff_18F5CF8[];
extern char goff_18F5D38[];
extern char goff_18F5D68[];
extern char goff_18F5DB8[];
extern char goff_18F5DD0[];
extern char goff_18F5E48[];
extern char goff_18F5EB0[];
extern char goff_18F5EB8[];
extern char goff_18F5EC8[];
extern char goff_18F6310[];
extern char goff_18F67F0[];
extern char goff_18F6830[];
extern __attribute__((visibility("hidden"))) char loc_34DC50[];
__int64 nn__os__GetSystemTick();
__attribute__((visibility("hidden"))) __int64 nullsub_1096();
__attribute__((visibility("hidden"))) __int64 nullsub_5();
extern __attribute__((visibility("hidden"))) __int64 qword_1909240;
extern __attribute__((visibility("hidden"))) __int64 qword_190CB40;
extern __attribute__((visibility("hidden"))) __int64 qword_1912460;
__int64 std____shared_weak_count____release_weak();
__int64 std__condition_variable___condition_variable();
__int64 std__mutex___mutex();
__int64 std__shared_timed_mutex__lock();
__int64 std__shared_timed_mutex__lock_shared();
__int64 std__shared_timed_mutex__unlock();
__int64 std__shared_timed_mutex__unlock_shared();
__int64 strtoul();
__attribute__((visibility("hidden"))) __int64 sub_163DB0();
__attribute__((visibility("hidden"))) __int64 sub_257400();
__attribute__((visibility("hidden"))) __int64 sub_2590F0();
__attribute__((visibility("hidden"))) __int64 sub_25E630();
__attribute__((visibility("hidden"))) __int64 sub_261DF0();
__attribute__((visibility("hidden"))) __int64 sub_268070();
__attribute__((visibility("hidden"))) __int64 sub_26D390();
__attribute__((visibility("hidden"))) __int64 sub_26D610();
__attribute__((visibility("hidden"))) __int64 sub_26D620();
__attribute__((visibility("hidden"))) __int64 sub_26E9F0();
__attribute__((visibility("hidden"))) __int64 sub_290830();
__attribute__((visibility("hidden"))) __int64 sub_298DF0();
__attribute__((visibility("hidden"))) __int64 sub_2A07D0();
__attribute__((visibility("hidden"))) __int64 sub_2B89E0();
__attribute__((visibility("hidden"))) __int64 sub_2BA6D0();
__attribute__((visibility("hidden"))) __int64 sub_2D8FF0();
__attribute__((visibility("hidden"))) __int64 sub_306570();
__attribute__((visibility("hidden"))) __int64 sub_315E00();
__attribute__((visibility("hidden"))) __int64 sub_33B6E0();
__attribute__((visibility("hidden"))) __int64 sub_33C4C0();
__attribute__((visibility("hidden"))) __int64 sub_33D920();
__attribute__((visibility("hidden"))) __int64 sub_33E470();
__attribute__((visibility("hidden"))) __int64 sub_33EB70();
__attribute__((visibility("hidden"))) __int64 sub_340FB0();
__attribute__((visibility("hidden"))) __int64 sub_34E770();
__attribute__((visibility("hidden"))) __int64 sub_352000();
__attribute__((visibility("hidden"))) __int64 sub_352880();
__attribute__((visibility("hidden"))) __int64 sub_35B1C0();
__attribute__((visibility("hidden"))) __int64 sub_36AA20();
__attribute__((visibility("hidden"))) __int64 sub_36AA70();
__attribute__((visibility("hidden"))) __int64 sub_36B160();
__attribute__((visibility("hidden"))) __int64 sub_37030();
__attribute__((visibility("hidden"))) __int64 sub_3745A0();
__attribute__((visibility("hidden"))) __int64 sub_3759B0();
__attribute__((visibility("hidden"))) __int64 sub_37A0C0();
__attribute__((visibility("hidden"))) __int64 sub_37A320();
__attribute__((visibility("hidden"))) __int64 sub_37BB50();
__attribute__((visibility("hidden"))) __int64 sub_388D00();
__attribute__((visibility("hidden"))) __int64 sub_38E700();
__attribute__((visibility("hidden"))) __int64 sub_3A1460();
__attribute__((visibility("hidden"))) __int64 sub_3AB000();
__attribute__((visibility("hidden"))) __int64 sub_3AC700();
__attribute__((visibility("hidden"))) __int64 sub_3B3430();
__attribute__((visibility("hidden"))) __int64 sub_3B62B0();
__attribute__((visibility("hidden"))) __int64 sub_3BE8B0();
__attribute__((visibility("hidden"))) __int64 sub_3BE990();
__attribute__((visibility("hidden"))) __int64 sub_3BEA50();
__attribute__((visibility("hidden"))) __int64 sub_3BEB30();
__attribute__((visibility("hidden"))) __int64 sub_3CC950();
__attribute__((visibility("hidden"))) __int64 sub_3DEA60();
__attribute__((visibility("hidden"))) __int64 sub_3E1F70();
__attribute__((visibility("hidden"))) __int64 sub_3E28D0();
__attribute__((visibility("hidden"))) __int64 sub_3EE870();
__attribute__((visibility("hidden"))) __int64 sub_3F4E80();
__attribute__((visibility("hidden"))) __int64 sub_3F6230();
__attribute__((visibility("hidden"))) __int64 sub_3FA2B0();
__attribute__((visibility("hidden"))) __int64 sub_3FA7E0();
__attribute__((visibility("hidden"))) __int64 sub_4140D0();
__attribute__((visibility("hidden"))) __int64 sub_418470();
__attribute__((visibility("hidden"))) __int64 sub_419E30();
__attribute__((visibility("hidden"))) __int64 sub_435300();
__attribute__((visibility("hidden"))) __int64 sub_448860();
__attribute__((visibility("hidden"))) __int64 sub_44C780();
__attribute__((visibility("hidden"))) __int64 sub_44FF50();
__attribute__((visibility("hidden"))) __int64 sub_451610();
__attribute__((visibility("hidden"))) __int64 sub_453A80();
__attribute__((visibility("hidden"))) __int64 sub_4543A0();
__attribute__((visibility("hidden"))) __int64 sub_455B70();
__attribute__((visibility("hidden"))) __int64 sub_54C050();
__attribute__((visibility("hidden"))) __int64 sub_554110();
__attribute__((visibility("hidden"))) __int64 sub_554120();
__attribute__((visibility("hidden"))) __int64 sub_5541F0();
__attribute__((visibility("hidden"))) __int64 sub_5543A0();
__attribute__((visibility("hidden"))) __int64 sub_55A610();
__attribute__((visibility("hidden"))) __int64 sub_56A940();
__attribute__((visibility("hidden"))) __int64 sub_56C9A0();
__attribute__((visibility("hidden"))) __int64 sub_56C9F0();
__attribute__((visibility("hidden"))) __int64 sub_56CA00();
__attribute__((visibility("hidden"))) __int64 sub_56CA10();
__attribute__((visibility("hidden"))) __int64 sub_56DC30();
__attribute__((visibility("hidden"))) _Bool sub_576540();
__attribute__((visibility("hidden"))) __int64 sub_577290();
__attribute__((visibility("hidden"))) __int64 sub_578210();
__attribute__((visibility("hidden"))) __int64 sub_578410();
__attribute__((visibility("hidden"))) __int64 sub_57D200();
__attribute__((visibility("hidden"))) __int64 sub_57EDC0();
__attribute__((visibility("hidden"))) __int64 sub_57EEF0();
__attribute__((visibility("hidden"))) __int64 sub_57EF40();
__attribute__((visibility("hidden"))) __int64 sub_57F050();
__attribute__((visibility("hidden"))) __int64 sub_57F070();
__attribute__((visibility("hidden"))) _Bool sub_57F110();
__attribute__((visibility("hidden"))) __int64 sub_57F1B0();
__attribute__((visibility("hidden"))) __int64 sub_583240();
__attribute__((visibility("hidden"))) __int64 sub_583700();
__attribute__((visibility("hidden"))) __int64 sub_584570();
__attribute__((visibility("hidden"))) __int64 sub_588E20();
__attribute__((visibility("hidden"))) __int64 sub_5894B0();
__attribute__((visibility("hidden"))) __int64 sub_58C7A0();
__attribute__((visibility("hidden"))) __int64 sub_592460();
__attribute__((visibility("hidden"))) __int64 sub_593BB0();
__attribute__((visibility("hidden"))) __int64 sub_594400();
__attribute__((visibility("hidden"))) __int64 sub_594410();
__attribute__((visibility("hidden"))) __int64 sub_5944A0();
__attribute__((visibility("hidden"))) __int64 sub_596B20();
__attribute__((visibility("hidden"))) __int64 sub_5A96F0();
__attribute__((visibility("hidden"))) __int64 sub_5B87B0();
__attribute__((visibility("hidden"))) __int64 sub_5BC360();
__attribute__((visibility("hidden"))) __int64 sub_5BCCC0();
__attribute__((visibility("hidden"))) __int64 sub_C16D0();
__attribute__((visibility("hidden"))) __int64 sub_C289D0();
__attribute__((visibility("hidden"))) __int64 sub_C3200();
extern __attribute__((visibility("hidden"))) char unk_1326E41;
extern __attribute__((visibility("hidden"))) char unk_13610A8;

__int64 __fastcall sub_C33C0(unsigned __int64 *a1)
{
  unsigned __int64 *v1; // x21
  unsigned __int64 *v3; // x20
  unsigned __int64 v4; // x0
  unsigned __int64 *v5; // x21
  unsigned __int64 *v6; // x20
  unsigned __int64 v7; // x0
  unsigned __int64 *v8; // x8
  unsigned __int64 v9; // x0
  unsigned int *v10; // x8
  unsigned int v11; // w9
  unsigned int v12; // w9
  unsigned __int64 *v13; // x8
  unsigned __int64 v14; // x0
  unsigned int *v15; // x8
  unsigned int v16; // w9
  unsigned int v17; // w9
  unsigned __int64 *v18; // x8
  __int64 result; // x0
  unsigned int *v20; // x8
  unsigned int v21; // w9
  unsigned int v22; // w9

  v1 = (unsigned __int64 *)a1[18];
  if ( v1 != nullptr )
  {
    v3 = (unsigned __int64 *)a1[19];
    v4 = a1[18];
    if ( v3 != v1 )
    {
      do
      {
        v3 -= 21;
        sub_C16D0(v3);
      }
      while ( v1 != v3 );
      v4 = a1[18];
    }
    a1[19] = (unsigned __int64)v1;
    sub_37030(v4);
  }
  v5 = (unsigned __int64 *)a1[15];
  if ( v5 != nullptr )
  {
    v6 = (unsigned __int64 *)a1[16];
    v7 = a1[15];
    if ( v6 != v5 )
    {
      do
      {
        v6 -= 23;
        sub_C3200(v6);
      }
      while ( v5 != v6 );
      v7 = a1[15];
    }
    a1[16] = (unsigned __int64)v5;
    sub_37030(v7);
  }
  sub_163DB0(a1 + 11, a1[12]);
  v8 = a1 + 10;
  v9 = __atomic_exchange_n(v8, 0, 5);
  if ( v9 != 0 )
  {
    v10 = (unsigned int *)(v9 + 8);
    v12 = __atomic_sub_fetch(v10, 1, 5);
    if ( v12 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v13 = a1 + 5;
  v14 = __atomic_exchange_n(v13, 0, 5);
  if ( v14 != 0 )
  {
    v15 = (unsigned int *)(v14 + 8);
    v17 = __atomic_sub_fetch(v15, 1, 5);
    if ( v17 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v18 = a1 + 2;
  result = __atomic_exchange_n(v18, 0, 5);
  if ( result != 0 )
  {
    v20 = (unsigned int *)(result + 8);
    v22 = __atomic_sub_fetch(v20, 1, 5);
    if ( v22 == 0 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
  }
  return result;
}

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

__int64 __fastcall sub_308640(__int64 *a1)
{
  __int64 i; // x8
  __int64 v2; // x22
  _QWORD *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x0
  __int64 v7; // x0
  __int64 result; // x0

  v2 = a1[1];
  for ( i = a1[2]; i != v2; i = a1[2] )
  {
    a1[2] = i - 8;
    v4 = *(_QWORD **)(i - 8);
    *(_QWORD *)(i - 8) = 0;
    if ( v4 != nullptr )
    {
      v5 = v4[7];
      if ( v5 != 0 )
      {
        v4[8] = v5;
        sub_56CA00(v5, &unk_1326E41, 0);
      }
      v6 = v4[4];
      if ( v6 != 0 )
      {
        v4[5] = v6;
        sub_56CA00(v6, &unk_1326E41, 0);
      }
      v7 = v4[1];
      if ( v7 != 0 )
      {
        v4[2] = v7;
        sub_56CA00(v7, &unk_1326E41, 0);
      }
      sub_57EDC0(v4, 0LL, &unk_1326E41, 0);
    }
  }
  result = *a1;
  if ( *a1 != 0 )
    return sub_56CA00(result, &unk_1326E41, 0);
  return result;
}

// N5storm4echo12SessionDemuxINS0_26PeerChannelManager_NetworkELj32EEE, virtual slot 0
_QWORD *__fastcall sub_30C5C0(_QWORD *result)
{
  _QWORD *v1; // x19
  __int64 v2; // x22
  __int64 v3; // x21

  v1 = result;
  v2 = 32;
  *result = ((char *)((__int64*)goff_18F16A8) + 16);
  do
  {
    v3 = v1[v2];
    v1[v2] = 0;
    if ( v3 != 0 )
    {
      sub_2D8FF0(v3);
      result = (_QWORD *)sub_57EDC0(v3, 0LL, &unk_1326E41, 0);
    }
    --v2;
  }
  while ( v2 != 0 );
  return result;
}

_Bool __fastcall sub_310AE0(char *a1, unsigned __int8 *a2, _QWORD *a3)
{
  char *v3; // x23
  const void *v7; // x22
  unsigned __int8 *v8; // x0
  size_t v9; // x2

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 == a1 )
    return 0;
  v7 = a2 + 1;
  while ( 1 )
  {
    v8 = (unsigned __int8 *)sub_26D610(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 24LL));
    v9 = *v8;
    if ( (_DWORD)v9 == *a2 && memcmp(v8 + 1, v7, v9) == 0 )
      break;
    v3 = *(_QWORD *)(v3 + 8);
    if ( v3 == a1 )
      return 0;
  }
  *a3 = *(_QWORD *)(v3 + 16);
  return 1;
}

__int64 __fastcall sub_310B70(__int64 *a1, __int64 a2)
{
  _QWORD *v4; // x0
  _QWORD *v5; // x23
  __int64 *v6; // x0
  __int64 v7; // x8
  __int64 v8; // x8

  v4 = (_QWORD *)sub_57D200(32, 8, 1092640768, 0LL, &unk_1326E41, 0);
  *v4 = v4;
  v4[1] = v4;
  v5 = v4;
  v4[2] = 0;
  v4[3] = (*(__int64 (__fastcall **)(__int64, void *, int))(*(_QWORD *)a2 + 40LL))(a2, &unk_1326E41, 0);
  v6 = (__int64 *)sub_56C9F0(24, 8, 1092640770, ((__int64*)goff_18F2CC8), &unk_1326E41, 0);
  v6[2] = (__int64)v5;
  v6[1] = (__int64)a1;
  *v6 = 0;
  v7 = *a1;
  *v6 = *a1;
  *(_QWORD *)(v7 + 8) = v6;
  v8 = a1[2] + 1;
  *a1 = (__int64)v6;
  a1[2] = v8;
  return 1;
}

__int64 __fastcall sub_310C40(__int64 a1, _QWORD *a2)
{
  __int64 v2; // x19
  _QWORD *v3; // x21
  __int64 v5; // x0
  _QWORD *v6; // x0
  __int64 v7; // x8
  _QWORD *v8; // x23

  v2 = a2[1];
  *(_QWORD *)(*a2 + 8LL) = v2;
  *(_QWORD *)a2[1] = *a2;
  --*(_QWORD *)(a1 + 16);
  v3 = (_QWORD *)a2[2];
  a2[2] = 0;
  if ( v3 != nullptr )
  {
    v5 = v3[3];
    v3[3] = 0;
    if ( v5 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    if ( v3[2] != 0 )
    {
      v7 = *v3;
      v6 = (_QWORD *)v3[1];
      *(_QWORD *)(*v6 + 8LL) = *(_QWORD *)(*v3 + 8LL);
      **(_QWORD **)(v7 + 8) = *v6;
      v3[2] = 0;
      if ( v6 != v3 )
      {
        do
        {
          v8 = (_QWORD *)v6[1];
          sub_56CA00(v6, &unk_1326E41, 0);
          v6 = v8;
        }
        while ( v8 != v3 );
      }
    }
    sub_57EDC0(v3, 0LL, &unk_1326E41, 0);
  }
  sub_56CA00(a2, &unk_1326E41, 0);
  return v2;
}

__int64 __fastcall sub_311900(char *a1, unsigned int a2)
{
  __int64 v2; // x0
  char *v3; // x9
  __int64 v4; // t1
  char *v5; // x8
  unsigned int v6; // w10
  bool v7; // cf
  _BOOL4 v8; // w10

  v4 = *(_QWORD *)(a1 + 96);
  v2 = a1 + 96;
  v3 = v4;
  if ( v4 == 0 )
    return 0;
  v5 = v2;
  do
  {
    v6 = *(_DWORD *)(v3 + 32);
    v7 = v6 >= a2;
    v8 = v6 < a2;
    if ( v7 )
      v5 = v3;
    v3 = *(_QWORD *)(v3 + 8LL * v8);
  }
  while ( v3 != 0 );
  if ( v5 == v2 )
    return 0;
  if ( *(_DWORD *)(v5 + 32) <= a2 )
    return *(_QWORD *)(v5 + 40);
  return 0;
}

bool __fastcall sub_3121A0(char *a1, int a2)
{
  __int64 v2; // x8

  if ( a2 == -1 )
    return false;
  v2 = 2968;
  if ( (*(_BYTE *)(a1 + 24) & 2) == 0 )
    v2 = 100;
  return *(_DWORD *)(a1 + v2) == a2;
}

__int64 __fastcall sub_3121F0(char *a1)
{
  __int64 v1; // x8

  v1 = 2968;
  if ( (*(_BYTE *)(a1 + 24) & 2) == 0 )
    v1 = 100;
  return *(unsigned int *)(a1 + v1);
}

// N5storm4echo17ProductEchoBridgeE, virtual slot 0
__int64 __fastcall sub_313B40(_QWORD *a1)
{
  __int64 v1; // x20
  _QWORD *v3; // x0
  _QWORD *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x0
  __int64 result; // x0

  v1 = a1[2];
  *a1 = ((char *)((__int64*)goff_18F2D10) + 16);
  if ( v1 != 0 )
  {
    sub_315E00(v1);
    sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
    a1[2] = 0;
  }
  a1[2] = 0;
  std__mutex___mutex((char *)(a1 + 25));
  sub_36AA20(a1 + 22, a1[23]);
  std__mutex___mutex((char *)(a1 + 18));
  v3 = (_QWORD *)a1[15];
  if ( v3 != nullptr )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      sub_56CA00(v3, &unk_1326E41, 0);
      v3 = v4;
    }
    while ( v4 != nullptr );
  }
  v5 = a1[13];
  a1[13] = 0;
  if ( v5 != 0 )
    sub_56CA00(v5, &unk_1326E41, 0);
  sub_36AA70(a1 + 10, a1[11]);
  std__mutex___mutex((char *)(a1 + 6));
  v6 = sub_36AA20(a1 + 3, a1[4]);
  *a1 = ((char *)((__int64*)goff_18F2D08) + 16);
  result = sub_56CA10(v6);
  *((_QWORD *)goff_18F2CF8 + (unsigned int)result) = 0;
  return result;
}

// N5storm4echo23ProductEchoImpl_NetworkE, virtual slot 0
__int64 __fastcall sub_31C9A0(_QWORD *a1)
{
  __int64 *v1; // x8
  _QWORD *v2; // x20
  _QWORD *v4; // x0
  __int64 v5; // x8
  _QWORD *v6; // x23
  __int64 v7; // x0
  __int64 v8; // x0

  v1 = ((__int64*)goff_18F2D90) + 16;
  *a1 = ((__int64 *)((__int64*)goff_18F2D90) + 2);
  a1[11] = v1;
  v2 = a1 + 11;
  if ( a1[194] != 0 )
  {
    v4 = (_QWORD *)a1[193];
    v5 = a1[192];
    *(_QWORD *)(*v4 + 8LL) = *(_QWORD *)(v5 + 8);
    **(_QWORD **)(v5 + 8) = *v4;
    a1[194] = 0;
    if ( v4 != a1 + 192 )
    {
      do
      {
        v6 = (_QWORD *)v4[1];
        sub_56CA00(v4, &unk_1326E41, 0);
        v4 = v6;
      }
      while ( v6 != a1 + 192 );
    }
  }
  std__mutex___mutex((char *)(a1 + 178));
  v7 = a1[174];
  if ( v7 != 0 )
  {
    a1[175] = v7;
    sub_56CA00(v7, &unk_1326E41, 0);
  }
  sub_257400(a1 + 168);
  sub_C289D0((__int64)(a1 + 24));
  v8 = a1[20];
  if ( v8 != 0 )
  {
    a1[21] = v8;
    sub_56CA00(v8, &unk_1326E41, 0);
  }
  sub_577290(v2);
  return sub_54C050(a1);
}

// N5storm9transport32TransportManagerNetStartupParamsE, virtual slot 0
void sub_31F390(__int64 result)
{
  __int64 v1; // x19
  char *v2; // x19
  unsigned __int64 *v3; // x8
  unsigned __int64 v4; // x9

  *(_QWORD *)result = ((__int64 *)goff_18F2F88 + 2);
  v1 = result;
  if ( (*(_BYTE *)(result + 192) & 1) != 0 )
  {
    sub_56CA00(*(_QWORD *)(result + 208), &unk_1326E41, 0);
    if ( (*(_BYTE *)(v1 + 168) & 1) == 0 )
    {
LABEL_3:
      if ( (*(_BYTE *)(v1 + 144) & 1) == 0 )
        goto LABEL_4;
LABEL_8:
      sub_56CA00(*(_QWORD *)(v1 + 160), &unk_1326E41, 0);
      v2 = *(char **)(v1 + 48);
      if ( v2 == nullptr )
        return;
      goto LABEL_9;
    }
  }
  else if ( (*(_BYTE *)(result + 168) & 1) == 0 )
  {
    goto LABEL_3;
  }
  sub_56CA00(*(_QWORD *)(v1 + 184), &unk_1326E41, 0);
  if ( (*(_BYTE *)(v1 + 144) & 1) != 0 )
    goto LABEL_8;
LABEL_4:
  v2 = *(char **)(v1 + 48);
  if ( v2 == nullptr )
    return;
LABEL_9:
  v3 = (unsigned __int64 *)((char *)v2 + 8);
  v4 = __atomic_fetch_sub(v3, 1, 5);
  if ( v4 == 0 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 16LL))(v2);
    { std____shared_weak_count____release_weak(v2); return; }
  }
  return;
}

// N5storm4echo7session7SessionE, virtual slot 0
__int64 __fastcall sub_322250(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x0

  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18F2FB0) + 2);
  v2 = *(_QWORD *)(a1 + 2896);
  if ( v2 != 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *(_QWORD *)(a1 + 2896) = 0;
  }
  v3 = *(_QWORD *)(a1 + 2944);
  if ( v3 != 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    *(_QWORD *)(a1 + 2944) = 0;
  }
  *(_QWORD *)(a1 + 3040) = 0;
  ((void (__fastcall *)(__int64))loc_34DC50)(a1 + 280);
  if ( (*(_BYTE *)(a1 + 248) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 264), &unk_1326E41, 0);
  return nullsub_5(a1 + 96);
}

// N5storm4echo7session7SessionE, virtual slot 1
void __fastcall sub_3222E0(_QWORD *a1)
{
  __int64 v2; // x0
  __int64 v3; // x0

  *a1 = ((__int64 *)((__int64*)goff_18F2FB0) + 2);
  v2 = a1[362];
  if ( v2 != 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    a1[362] = 0;
  }
  v3 = a1[368];
  if ( v3 != 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    a1[368] = 0;
  }
  a1[380] = 0;
  ((void (__fastcall *)(_QWORD *))loc_34DC50)(a1 + 35);
  if ( (a1[31] & 1) != 0 )
    sub_56CA00(a1[33], &unk_1326E41, 0);
  nullsub_5(a1 + 12);
  _ZdlPv(a1);
}

void sub_328AE0(__int64 result, __int64 *a2, int a3)
{
  __int64 v3; // x8
  __int64 *v4; // x9
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 *v7; // x9

  v3 = qword_1909240;
  *(_DWORD *)(result + 8) = -1;
  v4 = goff_18F1DB0;
  *(_QWORD *)(result + 16) = v3;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)result = v4 + 2;
  v5 = *a2;
  v6 = a2[1];
  *(_DWORD *)(result + 47) = *(_DWORD *)((char *)a2 + 15);
  *(_QWORD *)(result + 40) = v6;
  v7 = ((__int64*)goff_18F2FF0);
  *(_QWORD *)(result + 32) = v5;
  *(_DWORD *)(result + 52) = a3;
  *(_QWORD *)result = v7 + 2;
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

__int64 __fastcall sub_329F40(__int64 a1)
{
  __int64 v1; // x19

  v1 = a1 - 24;
  sub_577290((unsigned int *)(a1 + 8));
  return nullsub_1096(v1);
}

__int64 __fastcall sub_329F70(unsigned int *a1)
{
  unsigned int *v1; // x19

  v1 = a1 - 8;
  sub_577290(a1);
  return nullsub_1096(v1);
}

void __fastcall sub_329FD0(__int64 a1)
{
  void *v1; // x19

  v1 = (void *)(a1 - 24);
  sub_577290((unsigned int *)(a1 + 8));
  nullsub_1096(v1);
  _ZdlPv(v1);
}

void __fastcall sub_32A000(unsigned int *a1)
{
  unsigned int *v1; // x19

  v1 = a1 - 8;
  sub_577290(a1);
  nullsub_1096(v1);
  _ZdlPv(v1);
}

// N5storm13LockContainerINSt3__113unordered_mapIjPNS_4echo7session11SessionInfoENS_4hash4HashIjEENS1_8equal_toIjEENS_9AllocatorINS1_4pairIKjS6_EELi1092632579ELj0EEEEEEE, virtual slot 2
void sub_32CA90(unsigned __int64 result)
{
  unsigned __int8 *v1; // x19
  unsigned __int8 v2; // w9
  unsigned __int8 v3; // w9
  unsigned int v4; // w21
  unsigned __int64 v5; // x0
  unsigned __int8 v6; // w8

  v1 = (unsigned __int8 *)(result + 49);
  v2 = __atomic_exchange_n(v1, 1u, 2);
  if ( (v2 & 1) != 0 )
  {
    v3 = __atomic_exchange_n(v1, 1u, 2);
    if ( (v3 & 1) != 0 )
    {
      v4 = 0;
      do
      {
        v5 = v4++;
        sub_56C9A0(v5);
        v6 = __atomic_exchange_n(v1, 1u, 2);
      }
      while ( (v6 & 1) != 0 );
    }
  }
  return;
}

// N5storm4echo7session19SessionManager_MainE, virtual slot 0
__int64 __fastcall sub_336990(_QWORD *a1)
{
  __int64 *v1; // x8
  _QWORD *v2; // x20
  _QWORD *v4; // x0
  _QWORD *v5; // x22
  __int64 v6; // x0

  v1 = ((__int64 *)((__int64*)goff_18F2D60) + 107);
  *a1 = ((__int64 *)((__int64*)goff_18F2D60) + 2);
  a1[4] = v1;
  v2 = a1 + 4;
  a1[9] = ((__int64 *)((__int64*)goff_18F2D68) + 2);
  v4 = (_QWORD *)a1[12];
  if ( v4 != nullptr )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      sub_56CA00(v4, &unk_1326E41, 0);
      v4 = v5;
    }
    while ( v5 != nullptr );
  }
  v6 = a1[10];
  a1[10] = 0;
  if ( v6 != 0 )
    sub_56CA00(v6, &unk_1326E41, 0);
  nullsub_1096(v2);
  return sub_577290(a1);
}

// N5storm13LockContainerINSt3__113unordered_mapIjPNS_4echo7session11SessionInfoENS_4hash4HashIjEENS1_8equal_toIjEENS_9AllocatorINS1_4pairIKjS6_EELi1092632579ELj0EEEEEEE, virtual slot 0
__int64 __fastcall sub_336A30(_QWORD *a1)
{
  _QWORD *v2; // x0
  _QWORD *v3; // x21
  __int64 result; // x0

  *a1 = ((__int64 *)((__int64*)goff_18F2D68) + 2);
  v2 = (_QWORD *)a1[3];
  if ( v2 != nullptr )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      sub_56CA00(v2, &unk_1326E41, 0);
      v2 = v3;
    }
    while ( v3 != nullptr );
  }
  result = a1[1];
  a1[1] = 0;
  if ( result != 0 )
    return sub_56CA00(result, &unk_1326E41, 0);
  return result;
}

// N5storm4echo7session19SessionManager_MainE, virtual slot 1
void __fastcall sub_336B60(_QWORD *a1)
{
  __int64 *v1; // x8
  _QWORD *v2; // x20
  _QWORD *v4; // x0
  _QWORD *v5; // x22
  __int64 v6; // x0

  v1 = ((__int64 *)((__int64*)goff_18F2D60) + 107);
  *a1 = ((__int64 *)((__int64*)goff_18F2D60) + 2);
  a1[4] = v1;
  v2 = a1 + 4;
  a1[9] = ((__int64 *)((__int64*)goff_18F2D68) + 2);
  v4 = (_QWORD *)a1[12];
  if ( v4 != nullptr )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      sub_56CA00(v4, &unk_1326E41, 0);
      v4 = v5;
    }
    while ( v5 != nullptr );
  }
  v6 = a1[10];
  a1[10] = 0;
  if ( v6 != 0 )
    sub_56CA00(v6, &unk_1326E41, 0);
  nullsub_1096(v2);
  sub_577290(a1);
  _ZdlPv(a1);
}

// N5storm10DataNumberImLNS_19DataNumberQualifier11EQualifiersE8ELj0EEE, virtual slot 4
void sub_33BE70(__int64 result, __int64 a2)
{
  __int64 v2; // x20
  _BYTE *v3; // x9
  _QWORD *v4; // x19

  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_QWORD *)(result + 24) != v2 )
  {
    *(_BYTE *)(result + 16) = 1;
    v3 = *(_BYTE **)(result + 8);
    *v3 = 1;
    v4 = (_QWORD *)result;
    result = (*(__int64 (**)(void))(*(_QWORD *)result + 56LL))();
    if ( (result & 1) != 0 )
      sub_56DC30(v4);
    v4[3] = v2;
  }
  return;
}

// N5storm10DataNumberItLNS_19DataNumberQualifier11EQualifiersE8ELj0EEE, virtual slot 4
void sub_33DEC0(__int64 result, __int64 a2)
{
  int v2; // w20
  _BYTE *v3; // x9
  __int64 v4; // x19

  v2 = *(unsigned __int16 *)(a2 + 18);
  if ( *(unsigned __int16 *)(result + 18) != v2 )
  {
    *(_BYTE *)(result + 16) = 1;
    v3 = *(_BYTE **)(result + 8);
    *v3 = 1;
    v4 = result;
    result = (*(__int64 (**)(void))(*(_QWORD *)result + 56LL))();
    if ( (result & 1) != 0 )
      sub_56DC30((_QWORD *)v4);
    *(_WORD *)(v4 + 18) = v2;
  }
  return;
}

// N5storm4echo10DataVectorINS_10DataNumberItLNS_19DataNumberQualifier11EQualifiersE8ELj0EEELj0ELj127EEE, virtual slot 0
void __fastcall sub_340AF0(_QWORD *result)
{
  _QWORD *v1; // x21
  _QWORD *v2; // x22
  _QWORD *v3; // x19
  __int64 v4; // x8
  __int64 v5; // t1
  unsigned int *v6; // x8
  unsigned int v7; // w9
  unsigned int v8; // w9
  _QWORD *v9; // x0

  v1 = (_QWORD *)result[3];
  *result = ((char *)((__int64*)goff_18F3448) + 16);
  if ( v1 != nullptr )
  {
    v2 = (_QWORD *)result[4];
    v3 = result;
    if ( v2 == v1 )
    {
      v9 = v1;
    }
    else
    {
      do
      {
        v5 = *--v2;
        v4 = v5;
        if ( v5 != 0 )
        {
          v6 = (unsigned int *)(v4 + 24);
          v8 = __atomic_sub_fetch(v6, 1, 5);
          if ( v8 == 0 )
          {
            if ( *v2 != 0 )
            {
              sub_57EDC0(*v2, 0LL, &unk_1326E41, 0);
              *v2 = 0;
            }
            *v2 = 0;
          }
        }
      }
      while ( v2 != v1 );
      v9 = (_QWORD *)v3[3];
    }
    v3[4] = v1;
    { sub_56CA00(v9, &unk_1326E41, 0); return; }
  }
  return;
}

// N5storm4echo7session23SessionTimeManager_MainE, virtual slot 0
__int64 __fastcall sub_352830(_QWORD *a1)
{
  __int64 *v3; // x8

  v3 = ((__int64 *)goff_18F3550 + 107);
  *a1 = ((__int64 *)goff_18F3550 + 2);
  a1[4] = v3;
  sub_352880(a1 + 7);
  nullsub_1096(a1 + 4);
  return sub_577290(a1);
}

unsigned int *__fastcall sub_352A20(__int64 **a1)
{
  __int64 *v1; // x8
  unsigned int *v3; // x20

  v1 = ((__int64 *)goff_18F3550 + 107);
  *(a1 - 4) = ((__int64 *)goff_18F3550 + 2);
  v3 = (unsigned int *)(a1 - 4);
  *a1 = v1;
  sub_352880(a1 + 3);
  nullsub_1096(a1);
  return sub_577290(v3);
}

// N5storm4echo7session23SessionTimeManager_MainE, virtual slot 1
void __fastcall sub_352A70(_QWORD *a1)
{
  __int64 *v3; // x8

  v3 = ((__int64 *)goff_18F3550 + 107);
  *a1 = ((__int64 *)goff_18F3550 + 2);
  a1[4] = v3;
  sub_352880(a1 + 7);
  nullsub_1096(a1 + 4);
  sub_577290(a1);
  _ZdlPv(a1);
}

void __fastcall sub_352AC0(__int64 **a1)
{
  __int64 *v1; // x8
  unsigned int *v3; // x20

  v1 = ((__int64 *)goff_18F3550 + 107);
  *(a1 - 4) = ((__int64 *)goff_18F3550 + 2);
  v3 = (unsigned int *)(a1 - 4);
  *a1 = v1;
  sub_352880(a1 + 3);
  nullsub_1096(a1);
  sub_577290(v3);
  _ZdlPv(v3);
}

// N5storm4echo7session26SessionTimeManager_NetworkE, virtual slot 0
__int64 __fastcall sub_353F10(_QWORD *a1)
{
  __int64 *v4; // x8

  v4 = ((__int64 *)goff_18F35B8 + 13);
  *a1 = ((__int64 *)goff_18F35B8 + 2);
  a1[3] = v4;
  sub_57EF40(a1 + 108);
  sub_352880(a1 + 10);
  sub_577290(a1 + 3);
  return nullsub_1096(a1);
}

__int64 __fastcall sub_353F70(unsigned int *a1)
{
  __int64 *v4; // x8

  v4 = ((__int64 *)goff_18F35B8 + 13);
  *((_QWORD *)a1 - 3) = ((__int64 *)goff_18F35B8 + 2);
  *(_QWORD *)a1 = v4;
  sub_57EF40(a1 + 210);
  sub_352880(a1 + 14);
  sub_577290(a1);
  return nullsub_1096(a1 - 6);
}

// N5storm4echo7session26SessionTimeManager_NetworkE, virtual slot 1
void __fastcall sub_353FD0(_QWORD *a1)
{
  __int64 *v4; // x8

  v4 = ((__int64 *)goff_18F35B8 + 13);
  *a1 = ((__int64 *)goff_18F35B8 + 2);
  a1[3] = v4;
  sub_57EF40(a1 + 108);
  sub_352880(a1 + 10);
  sub_577290(a1 + 3);
  nullsub_1096(a1);
  _ZdlPv(a1);
}

void __fastcall sub_354040(unsigned int *a1)
{
  __int64 *v3; // x8
  unsigned int *v4; // x20

  v3 = ((__int64 *)goff_18F35B8 + 13);
  *((_QWORD *)a1 - 3) = ((__int64 *)goff_18F35B8 + 2);
  v4 = a1 - 6;
  *(_QWORD *)a1 = v3;
  sub_57EF40(a1 + 210);
  sub_352880(a1 + 14);
  sub_577290(a1);
  nullsub_1096(v4);
  _ZdlPv(v4);
}

__int64 __fastcall sub_3559D0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v8; // x0
  __int64 v9; // x1

  v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 848) + 56LL))(*(_QWORD *)(a1 + 848));
  return sub_352000(v8, v9, a1 + 80, a2, a3, a4);
}

// N5storm4echo17StreamPacker_MainE, virtual slot 0
__int64 __fastcall sub_356200(_QWORD *a1)
{
  __int64 *v1; // x8
  _QWORD *v2; // x20
  __int64 v4; // x0

  v1 = ((__int64 *)((__int64*)goff_18F2D48) + 107);
  *a1 = ((__int64 *)((__int64*)goff_18F2D48) + 2);
  a1[4] = v1;
  v2 = a1 + 4;
  v4 = a1[48];
  if ( v4 != 0 )
  {
    a1[49] = v4;
    sub_56CA00(v4, &unk_1326E41, 0);
  }
  sub_4140D0(a1 + 15);
  nullsub_1096(v2);
  return sub_577290(a1);
}

// N5storm4echo17StreamPacker_MainE, virtual slot 1
void __fastcall sub_3562E0(_QWORD *a1)
{
  __int64 *v1; // x8
  _QWORD *v2; // x20
  __int64 v4; // x0

  v1 = ((__int64 *)((__int64*)goff_18F2D48) + 107);
  *a1 = ((__int64 *)((__int64*)goff_18F2D48) + 2);
  a1[4] = v1;
  v2 = a1 + 4;
  v4 = a1[48];
  if ( v4 != 0 )
  {
    a1[49] = v4;
    sub_56CA00(v4, &unk_1326E41, 0);
  }
  sub_4140D0(a1 + 15);
  nullsub_1096(v2);
  sub_577290(a1);
  _ZdlPv(a1);
}

__int64 __fastcall sub_35AFC0(char *a1, char *a2)
{
  char *v2; // x19
  _QWORD *v5; // x0
  int v7; // [xsp+Ch] [xbp-14h] BYREF

  v2 = (char *)(a1 + 80);
  std__shared_timed_mutex__lock((char *)(a1 + 80));
  if ( *(_QWORD *)(a1 + 56) != 0 )
  {
    v5 = sub_554120(*(_QWORD **)(a1 + 64), (_QWORD *)(a2 + 8), 0);
  }
  else
  {
    v5 = sub_5541F0(nullptr, (_QWORD *)(a2 + 8), 0);
    *(_QWORD *)(a1 + 56) = v5;
  }
  *(_QWORD *)(a1 + 64) = v5;
  v7 = *(_DWORD *)(a2 + 80);
  *(_QWORD *)sub_37A0C0(a1 + 176, &v7) = a2;
  *(_QWORD *)sub_37A320(a1 + 136, (unsigned __int8 *)(a2 + 3232)) = a2;
  ++*(_DWORD *)(a1 + 72);
  return std__shared_timed_mutex__unlock(v2);
}

__int64 *__fastcall sub_35B170(__int64 a1)
{
  __int64 v1; // x8
  __int64 *result; // x0
  unsigned int *v3; // x8
  unsigned int v4; // w9

  *(_DWORD *)(a1 + 16) = -1;
  *(_BYTE *)(a1 + 20) = -1;
  *(_QWORD *)(a1 + 40) = 0;
  v1 = goff_18F3618;
  *(_QWORD *)a1 = v1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  result = sub_5543A0();
  v3 = (unsigned int *)(result + 6);
  v4 = __atomic_fetch_add(v3, 1, 5);
  return result;
}

_QWORD *__fastcall sub_35B470(_QWORD *a1)
{
  _QWORD *result; // x0

  *a1 = ((__int64 *)((__int64*)goff_18F3630) + 2);
  sub_594410(a1 + 1);
  result = sub_594410(a1 + 3);
  a1[7] = 0;
  *(_QWORD *)((char *)a1 + 45) = 0;
  a1[5] = 0;
  return result;
}

unsigned __int64 __fastcall sub_35B4C0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 result; // x0
  const char *v8; // x0

  *(_QWORD *)a1 = ((__int64*)goff_18F3630) + 2;
  sub_594400(a1 + 8, a3);
  sub_594400(a1 + 24, a4);
  *(_QWORD *)(a1 + 40) = 0x500000002LL;
  *(_DWORD *)(a1 + 60) = a2;
  result = (unsigned int)dword_18043E8;
  if ( dword_18043E8 == -1 )
  {
    v8 = "$Change: 297154 $";
    do
    {
      if ( (unsigned int)*(unsigned __int8 *)v8 - 48 < 0xA )
        break;
      ++v8;
    }
    while ( v8 < "" );
    result = strtoul(v8, nullptr, 10);
    dword_18043E8 = result;
  }
  *(_BYTE *)(a1 + 52) = 11;
  *(_DWORD *)(a1 + 48) = result;
  *(_DWORD *)(a1 + 56) = 3;
  return result;
}

// N5storm4echo22LanManagerPacketHeaderE, virtual slot 2
__int64 __fastcall sub_35B580(__int64 a1, int a2, __int64 a3)
{
  unsigned int src; // [xsp+Ch] [xbp-14h] BYREF

  sub_5944A0((void *)(a1 + 8), a3);
  sub_5944A0((void *)(a1 + 24), a3);
  src = __builtin_bswap32(*(_DWORD *)(a1 + 40));
  sub_588E20(a3, (char *)&src, 0x20u, 1);
  src = __builtin_bswap32(*(_DWORD *)(a1 + 44));
  sub_588E20(a3, (char *)&src, 0x20u, 1);
  src = __builtin_bswap32(*(_DWORD *)(a1 + 48));
  sub_588E20(a3, (char *)&src, 0x20u, 1);
  LOBYTE(src) = *(_BYTE *)(a1 + 52);
  sub_588E20(a3, (char *)&src, 8u, 1);
  src = __builtin_bswap32(*(_DWORD *)(a1 + 56));
  sub_588E20(a3, (char *)&src, 0x20u, 1);
  sub_5894B0(a3, 0);
  sub_5894B0(a3, 0);
  sub_5894B0(a3, 0);
  src = __builtin_bswap32(*(_DWORD *)(a1 + 60) << 16);
  return sub_588E20(a3, (char *)&src, 0x10u, 0);
}

// N5storm4echo7session8internal7inEvent18HostMigrationStartE, virtual slot 5
char *__fastcall sub_35E240(__int64 a1)
{
  char *v2; // x20

  v2 = (char *)sub_56C9F0(96, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_37BB50(v2, a1);
  return v2;
}

// N5storm4echo7session8internal7inEvent14PeerDiscoveredE, virtual slot 1
__int64 __fastcall sub_35EBB0(_QWORD *a1)
{
  *a1 = ((__int64 *)((__int64*)goff_18F3040) + 2);
  nullsub_5(a1 + 8);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm4echo7session8internal8outEvent8PeerGoneE, virtual slot 0
__int64 __fastcall sub_3600D0(__int64 a1)
{
  __int64 result; // x0
  char *v3; // x19
  unsigned __int64 *v4; // x8
  unsigned __int64 v5; // x9

  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18F3090) + 2);
  result = nullsub_5(a1 + 120);
  if ( (*(_BYTE *)(a1 + 88) & 1) != 0 )
    result = sub_56CA00(*(_QWORD *)(a1 + 104), &unk_1326E41, 0);
  v3 = *(char **)(a1 + 72);
  if ( v3 != nullptr )
  {
    v4 = (unsigned __int64 *)((char *)v3 + 8);
    v5 = __atomic_fetch_sub(v4, 1, 5);
    if ( v5 == 0 )
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 16LL))(v3);
      return std____shared_weak_count____release_weak(v3);
    }
  }
  return result;
}

// N5storm4echo7session8internal8outEvent8PeerGoneE, virtual slot 1
__int64 __fastcall sub_360160(__int64 a1)
{
  char *v2; // x20
  unsigned __int64 *v3; // x8
  unsigned __int64 v4; // x9

  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18F3090) + 2);
  nullsub_5(a1 + 120);
  if ( (*(_BYTE *)(a1 + 88) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 104), &unk_1326E41, 0);
  v2 = *(char **)(a1 + 72);
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

// N5storm4echo31ProductEchoImplMainStartupEventE, virtual slot 5
__int64 __fastcall sub_361260(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x9
  __int64 v4; // x10
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x22
  _QWORD *v8; // x19
  _QWORD *v9; // x20

  v2 = sub_56C9F0(1024, 16, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = goff_18F2D38;
  v4 = ((__int64*)goff_18F2D30);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 16;
  *(_QWORD *)(v2 + 24) = v5;
  v6 = *(_QWORD *)(a1 + 40);
  v7 = v2;
  *(_QWORD *)(v2 + 32) = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(v2 + 40) = v6;
  *(_QWORD *)v2 = v4 + 16;
  sub_36B160(v2 + 48, a1 + 48);
  v8 = *(_QWORD **)(a1 + 1008);
  v9 = (_QWORD *)sub_56C9F0(352, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_593BB0(v9, v8);
  *(_QWORD *)(v7 + 1008) = v9;
  return v7;
}

// N5storm4echo7session8internal7inEvent14SessionCreatedE, virtual slot 0
__int64 __fastcall sub_361840(_QWORD *a1)
{
  __int64 result; // x0

  *a1 = ((__int64 *)((__int64*)goff_18F3028) + 2);
  nullsub_5(a1 + 10);
  result = a1[7];
  a1[7] = 0;
  if ( result != 0 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  return result;
}

// N5storm4echo7session8internal7inEvent14SessionCreatedE, virtual slot 1
__int64 __fastcall sub_361890(_QWORD *a1)
{
  __int64 v2; // x0

  *a1 = ((__int64 *)((__int64*)goff_18F3028) + 2);
  nullsub_5(a1 + 10);
  v2 = a1[7];
  a1[7] = 0;
  if ( v2 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm4echo7session8internal8outEvent13PeerConnectedE, virtual slot 0
__int64 __fastcall sub_3623F0(_QWORD *a1)
{
  *a1 = ((__int64 *)((__int64*)goff_18F3038) + 2);
  sub_578410(a1 + 18);
  return nullsub_5(a1 + 8);
}

// N5storm4echo7session8internal8outEvent13PeerConnectedE, virtual slot 1
__int64 __fastcall sub_362430(_QWORD *a1)
{
  *a1 = ((__int64 *)((__int64*)goff_18F3038) + 2);
  sub_578410(a1 + 18);
  nullsub_5(a1 + 8);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

void __fastcall sub_36A4C0(_QWORD *result)
{
  __int64 v1; // x8
  _QWORD *v2; // x20
  _QWORD *v3; // x19
  _QWORD *v4; // x22
  _QWORD *v5; // x23
  __int64 v6; // x0
  _QWORD *v7; // x0
  __int64 v8; // x8
  _QWORD *v9; // x24

  if ( result[2] != 0 )
  {
    v1 = *result;
    v2 = (_QWORD *)result[1];
    *(_QWORD *)(*v2 + 8LL) = *(_QWORD *)(*result + 8LL);
    v3 = result;
    **(_QWORD **)(v1 + 8) = *v2;
    result[2] = 0;
    if ( v2 != result )
    {
      do
      {
        v5 = (_QWORD *)v2[1];
        v4 = (_QWORD *)v2[2];
        v2[2] = 0;
        if ( v4 != nullptr )
        {
          v6 = v4[3];
          v4[3] = 0;
          if ( v6 != 0 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
          if ( v4[2] != 0 )
          {
            v8 = *v4;
            v7 = (_QWORD *)v4[1];
            *(_QWORD *)(*v7 + 8LL) = *(_QWORD *)(*v4 + 8LL);
            **(_QWORD **)(v8 + 8) = *v7;
            v4[2] = 0;
            if ( v7 != v4 )
            {
              do
              {
                v9 = (_QWORD *)v7[1];
                sub_56CA00(v7, &unk_1326E41, 0);
                v7 = v9;
              }
              while ( v9 != v4 );
            }
          }
          sub_57EDC0(v4, 0LL, &unk_1326E41, 0);
        }
        sub_56CA00(v2, &unk_1326E41, 0);
        v2 = v5;
      }
      while ( v5 != v3 );
    }
  }
  return;
}

// N5storm4core8internal19ProductImplMainStepE, virtual slot 5
__int64 __fastcall sub_36ABA0(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x9

  result = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(result + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = ((char *)goff_18F2D38 + 16);
  v3 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(result + 32) = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(result + 40) = v3;
  return result;
}

// N5storm4echo11peerChannel7inEvent19MessageEventsBundleE, virtual slot 0
void sub_36BB90(char *result)
{
  _QWORD *v1; // x20
  _QWORD *v2; // x21
  char *v3; // x19
  char *v4; // x0
  __int64 v5; // t1
  __int64 v6; // x0

  v1 = *(_QWORD **)(result + 40);
  if ( v1 != nullptr )
  {
    v2 = *(_QWORD **)(result + 48);
    v3 = result;
    if ( v2 == v1 )
    {
      v6 = *(_QWORD *)(result + 40);
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
      v6 = *(_QWORD *)(v3 + 40);
    }
    *(_QWORD *)(v3 + 48) = v1;
    { sub_56CA00(v6, &unk_1326E41, 0); return; }
  }
  return;
}

// N5storm4echo11peerChannel7inEvent19MessageEventsBundleE, virtual slot 1
__int64 __fastcall sub_36BC20(char *a1)
{
  _QWORD *v1; // x20
  _QWORD *v3; // x21
  char *v4; // x0
  __int64 v5; // t1
  __int64 v6; // x0

  v1 = *(_QWORD **)(a1 + 40);
  if ( v1 != nullptr )
  {
    v3 = *(_QWORD **)(a1 + 48);
    if ( v3 == v1 )
    {
      v6 = *(_QWORD *)(a1 + 40);
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
      v6 = *(_QWORD *)(a1 + 40);
    }
    *(_QWORD *)(a1 + 48) = v1;
    sub_56CA00(v6, &unk_1326E41, 0);
  }
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm4echo11peerChannel7inEvent19MessageEventsBundleE, virtual slot 5
__int64 __fastcall sub_36BD80(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x9
  __int64 v4; // x8
  __int64 v5; // x9

  result = sub_56C9F0(64, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = goff_18F0540;
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v3 + 2;
  *(_QWORD *)(result + 24) = v4;
  LODWORD(v4) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)(result + 56) = 0;
  v5 = goff_18F2EB8;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 32) = v4;
  *(_QWORD *)result = v5 + 16;
  return result;
}

// N5storm8security29SimpleSecurityStrategyFactoryINS0_31EcdhEcdsaAesGcmSecurityStrategyEEE, virtual slot 2
__int64 __fastcall sub_36BFC0(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v5; // x21

  v5 = sub_57D200(552, 8, 1092620291, 0LL, &unk_1326E41, 0);
  sub_55A610(v5, a2, a3);
  return v5;
}

// N5storm4echo7session8internal7inEvent14SetSessionInfoE, virtual slot 1
__int64 __fastcall sub_36C1D0(_QWORD *a1)
{
  *a1 = ((__int64 *)((__int64*)goff_18F2FF8) + 2);
  nullsub_5(a1 + 7);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm17NetPropertyVectorINS_15TNetPropertyRefINS_15NetPropertyNullEEELm0EE10VectorSizeE, virtual slot 11
void __fastcall sub_374260(_QWORD *result, __int64 a2)
{
  __int64 v2; // x1

  v2 = 0x8E38E38E38E38E39LL * ((__int64)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL) - **(_QWORD **)(a2 + 32)) >> 3);
  if ( 0x8E38E38E38E38E39LL * ((__int64)(*(_QWORD *)(result[4] + 8LL) - *(_QWORD *)result[4]) >> 3) != v2 )
    { sub_3745A0(result, v2, 1); return; }
  return;
}

// N5storm17NetPropertyVectorINS_15TNetPropertyRefINS_15NetPropertyNullEEELm0EE10VectorSizeE, virtual slot 12
__int64 __fastcall sub_3742B0(_QWORD *a1)
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
      v5 = *(void (__fastcall ***)(__int64))(v2 - 72);
      v2 -= 72;
      (*v5)(v2);
    }
    while ( v3 != v2 );
  }
  v1[1] = v3;
  return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 128LL))(a1);
}

// N5storm4echo7session7inEvent13PeerGoneReplyE, virtual slot 0
__int64 __fastcall sub_375300(__int64 result)
{
  __int64 v1; // x19
  char *v2; // x19
  unsigned __int64 *v3; // x8
  unsigned __int64 v4; // x9

  *(_QWORD *)result = ((char *)((__int64*)goff_18F3458) + 16);
  v1 = result;
  if ( (*(_BYTE *)(result + 88) & 1) != 0 )
    result = sub_56CA00(*(_QWORD *)(result + 104), &unk_1326E41, 0);
  v2 = *(char **)(v1 + 72);
  if ( v2 != nullptr )
  {
    v3 = (unsigned __int64 *)((char *)v2 + 8);
    v4 = __atomic_fetch_sub(v3, 1, 5);
    if ( v4 == 0 )
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 16LL))(v2);
      return std____shared_weak_count____release_weak(v2);
    }
  }
  return result;
}

// N5storm4echo7session7inEvent13PeerGoneReplyE, virtual slot 5
char *__fastcall sub_3754F0(__int64 a1)
{
  char *v2; // x20

  v2 = (char *)sub_56C9F0(120, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_3759B0(v2, a1);
  return v2;
}

// N5storm4echo12session_time8internal7inEvent18SetSessionTimeInMsE, virtual slot 5
__int64 __fastcall sub_375D70(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x9
  __int64 v4; // x8
  __int64 *v5; // x9
  __int64 v6; // x8
  __int64 v7; // x9

  result = sub_56C9F0(64, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = ((__int64*)goff_18F31C0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v3 + 2;
  v5 = goff_18F31D0;
  *(_QWORD *)(result + 24) = v4;
  LODWORD(v4) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)result = v5 + 2;
  *(_DWORD *)(result + 32) = v4;
  v6 = *(_QWORD *)(a1 + 40);
  v7 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(result + 56) = *(_DWORD *)(a1 + 56);
  *(_QWORD *)(result + 40) = v6;
  *(_QWORD *)(result + 48) = v7;
  return result;
}

// N5storm4echo12session_time8internal7inEvent17AddRemotePeerTimeE, virtual slot 5
__int64 __fastcall sub_376C00(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x8

  result = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(result + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = ((__int64 *)((__int64*)goff_18F31C0) + 2);
  *(_DWORD *)(result + 32) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)result = ((char *)((__int64*)goff_18F35D0) + 16);
  v3 = *(_QWORD *)(a1 + 36);
  *(_DWORD *)(result + 44) = *(_DWORD *)(a1 + 44);
  *(_QWORD *)(result + 36) = v3;
  return result;
}

// N5storm4echo12session_time8internal7inEvent15AddEnslavedTimeE, virtual slot 5
__int64 __fastcall sub_3770C0(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x8

  result = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(result + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = ((__int64 *)((__int64*)goff_18F31C0) + 2);
  *(_DWORD *)(result + 32) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)result = ((char *)((__int64*)goff_18F35D8) + 16);
  v3 = *(_QWORD *)(a1 + 36);
  *(_DWORD *)(result + 44) = *(_DWORD *)(a1 + 44);
  *(_QWORD *)(result + 36) = v3;
  return result;
}

// N5storm18DynamicTypeFactoryINS_4echo6player13PlayerMessageEEE, virtual slot 2
_QWORD *__fastcall sub_37AEB0(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *result; // x0

  result = (_QWORD *)sub_56C9F0(8, 8, 1092624384, 0LL, a2, a3);
  *result = ((__int64 *)goff_18F2CF0 + 2);
  return result;
}

// N5storm18DynamicTypeFactoryINS_4echo7session24SessionJoinAcceptMessageEEE, virtual slot 2
__int64 __fastcall sub_37D4E0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19

  v3 = sub_56C9F0(400, 8, 1092624384, 0LL, a2, a3);
  sub_33B6E0();
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo7session25SessionJoinRequestMessageEEE, virtual slot 2
__int64 __fastcall sub_37D8D0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19

  v3 = sub_56C9F0(376, 8, 1092624384, 0LL, a2, a3);
  sub_33C4C0();
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo7session25SessionPeerJoiningMessageEEE, virtual slot 2
__int64 __fastcall sub_37E3D0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19

  v3 = sub_56C9F0(288, 8, 1092624384, 0LL, a2, a3);
  sub_33D920();
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo7session22SessionPeerGoneMessageEEE, virtual slot 2
__int64 __fastcall sub_37E7A0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19

  v3 = sub_56C9F0(240, 8, 1092624384, 0LL, a2, a3);
  sub_33E470();
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo7session18SessionKickMessageEEE, virtual slot 2
__int64 __fastcall sub_37E920(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19

  v3 = sub_56C9F0(240, 8, 1092624384, 0LL, a2, a3);
  sub_33EB70();
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo7session23SessionReachPeerMessageEEE, virtual slot 2
__int64 __fastcall sub_380030(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19

  v3 = sub_56C9F0(216, 8, 1092624384, 0LL, a2, a3);
  sub_340FB0();
  return v3;
}

// NSt3__110__function6__funcIZN5storm8internal3tls11ThreadLocalIPNS2_4echo17ProductEchoBridgeEEC1ERKS8_EUlvE_NS_9allocatorISC_EEFPS8_vEEE, virtual slot 6
_QWORD *__fastcall sub_380890(__int64 a1)
{
  _QWORD *result; // x0

  result = (_QWORD *)_Znwm(8u);
  *result = *(_QWORD *)(a1 + 8);
  return result;
}

// N5storm14SingletonClassINS_4echo17ProductEchoBridgeEEE, virtual slot 0
__int64 __fastcall sub_380A30(_QWORD *a1)
{
  __int64 result; // x0

  *a1 = ((char *)((__int64*)goff_18F2D08) + 16);
  result = sub_56CA10(a1);
  *((_QWORD *)goff_18F2CF8 + (unsigned int)result) = 0;
  return result;
}

// N5storm14SingletonClassINS_4echo17ProductEchoBridgeEEE, virtual slot 1
void __fastcall sub_380A60(_QWORD *a1)
{
  *a1 = ((char *)((__int64*)goff_18F2D08) + 16);
  *((_QWORD *)goff_18F2CF8 + (unsigned int)sub_56CA10(a1)) = 0;
  _ZdlPv(a1);
}

// NSt3__110__function6__funcIMN5storm4echo7session7SessionEFbRNS4_11SessionPeerES7_ENS_9allocatorIS9_EEFbPS5_S7_S7_EEE, virtual slot 2
_QWORD *__fastcall sub_383A20(__int64 a1)
{
  _QWORD *result; // x0
  __int64 v3; // x9

  result = (_QWORD *)_Znwm(0x18u);
  *result = ((char *)goff_18F3060 + 16);
  v3 = *(_QWORD *)(a1 + 16);
  result[1] = *(_QWORD *)(a1 + 8);
  result[2] = v3;
  return result;
}

// N5storm13LockContainerINSt3__113unordered_mapIjPNS_4echo7session11SessionInfoENS_4hash4HashIjEENS1_8equal_toIjEENS_9AllocatorINS1_4pairIKjS6_EELi1092632579ELj0EEEEEEE, virtual slot 1
void __fastcall sub_384860(_QWORD *a1)
{
  _QWORD *v2; // x0
  _QWORD *v3; // x21
  __int64 v4; // x0

  *a1 = ((__int64 *)((__int64*)goff_18F2D68) + 2);
  v2 = (_QWORD *)a1[3];
  if ( v2 != nullptr )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      sub_56CA00(v2, &unk_1326E41, 0);
      v2 = v3;
    }
    while ( v3 != nullptr );
  }
  v4 = a1[1];
  a1[1] = 0;
  if ( v4 != 0 )
    sub_56CA00(v4, &unk_1326E41, 0);
  _ZdlPv(a1);
}

// N5storm13LockContainerINSt3__113unordered_mapIjPNS_4echo7session11SessionInfoENS_4hash4HashIjEENS1_8equal_toIjEENS_9AllocatorINS1_4pairIKjS6_EELi1092632579ELj0EEEEEEE, virtual slot 4
bool __fastcall sub_3848E0(__int64 a1)
{
  unsigned __int8 *v1; // x8
  unsigned __int8 v2; // w10

  v1 = (unsigned __int8 *)(a1 + 49);
  v2 = __atomic_exchange_n(v1, 1u, 2);
  return (v2 & 1) == 0;
}

// N5storm4echo10DataVectorINS_10DataNumberItLNS_19DataNumberQualifier11EQualifiersE8ELj0EEELj0ELj127EEE, virtual slot 1
void __fastcall sub_384ED0(_QWORD *a1)
{
  _QWORD *v1; // x21
  _QWORD *v3; // x22
  __int64 v4; // x8
  __int64 v5; // t1
  unsigned int *v6; // x8
  unsigned int v7; // w9
  unsigned int v8; // w9
  _QWORD *v9; // x0

  v1 = (_QWORD *)a1[3];
  *a1 = ((char *)((__int64*)goff_18F3448) + 16);
  if ( v1 != nullptr )
  {
    v3 = (_QWORD *)a1[4];
    if ( v3 == v1 )
    {
      v9 = v1;
    }
    else
    {
      do
      {
        v5 = *--v3;
        v4 = v5;
        if ( v5 != 0 )
        {
          v6 = (unsigned int *)(v4 + 24);
          v8 = __atomic_sub_fetch(v6, 1, 5);
          if ( v8 == 0 )
          {
            if ( *v3 != 0 )
            {
              sub_57EDC0(*v3, 0LL, &unk_1326E41, 0);
              *v3 = 0;
            }
            *v3 = 0;
          }
        }
      }
      while ( v3 != v1 );
      v9 = (_QWORD *)a1[3];
    }
    a1[4] = v1;
    sub_56CA00(v9, &unk_1326E41, 0);
  }
  _ZdlPv(a1);
}

// N5storm4echo10DataVectorINS_10DataNumberItLNS_19DataNumberQualifier11EQualifiersE8ELj0EEELj0ELj127EEE, virtual slot 10
void sub_384F90(__int64 result)
{
  __int64 *v1; // x21
  __int64 *v2; // x22
  __int64 v3; // x19
  __int64 v4; // x8
  __int64 v5; // t1
  unsigned int *v6; // x8
  unsigned int v7; // w9
  unsigned int v8; // w9

  v1 = *(__int64 **)(result + 24);
  v2 = *(__int64 **)(result + 32);
  v3 = result;
  while ( v2 != v1 )
  {
    v5 = *--v2;
    v4 = v5;
    if ( v5 != 0 )
    {
      v6 = (unsigned int *)(v4 + 24);
      v8 = __atomic_sub_fetch(v6, 1, 5);
      if ( v8 == 0 )
      {
        result = *v2;
        if ( *v2 != 0 )
        {
          sub_57EDC0(result, 0LL, &unk_1326E41, 0);
          *v2 = 0;
        }
        *v2 = 0;
      }
    }
  }
  *(_QWORD *)(v3 + 32) = v1;
  return;
}

__int64 __fastcall sub_387520(__int64 result)
{
  __int64 v1; // x19

  v1 = *(_QWORD *)(result + 24);
  if ( v1 != 0 )
  {
    sub_34E770(*(_QWORD *)(result + 24));
    return sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
  }
  return result;
}

void sub_388940(__int64 result, __int64 *a2)
{
  __int64 v2; // x8
  __int64 v3; // x9
  __int64 v4; // x19
  unsigned __int64 *v5; // x10
  unsigned __int64 v6; // x11
  char *v7; // x20
  unsigned __int64 *v8; // x8
  unsigned __int64 v9; // x9
  __int64 (__fastcall *v10)(); // x9

  v2 = *a2;
  if ( *a2 != 0 )
  {
    v3 = a2[1];
    v4 = result;
    if ( v3 != 0 )
    {
      v5 = (unsigned __int64 *)(v3 + 8);
      v6 = __atomic_fetch_add(v5, 1, 0);
    }
    v7 = *(char **)(result + 40);
    *(_QWORD *)(result + 32) = v2;
    *(_QWORD *)(result + 40) = v3;
    if ( v7 != nullptr )
    {
      v8 = (unsigned __int64 *)((char *)v7 + 8);
      v9 = __atomic_fetch_sub(v8, 1, 5);
      if ( v9 == 0 )
      {
        (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 16LL))(v7);
        std____shared_weak_count____release_weak(v7);
      }
    }
    v10 = goff_18F4248;
    *(__int64 (__fastcall **)())v4 = ((__int64*)goff_18F4240);
    *(_QWORD *)(v4 + 8) = 0;
    *(_QWORD *)(v4 + 16) = v10;
    *(_QWORD *)(v4 + 24) = 0;
  }
  return;
}

// N5storm4echo33CTransmissionHistoryNetPropertiesE, virtual slot 9
unsigned __int64 __fastcall sub_38A950(__int64 a1)
{
  __int64 v1; // x8

  if ( *(_BYTE *)(a1 + 112) == 0 )
    return -1;
  v1 = *(_QWORD *)(a1 + 56);
  if ( v1 != 0 )
    return v1 + *(unsigned int *)(a1 + 64);
  else
    return (unsigned __int64)(1000LL * nn__os__GetSystemTick((char *)a1)) / *(_QWORD *)((__int64*)goff_18F13E8) / 0x3E8;
}

// N5storm4echo31CTransmissionHistoryTouchedBitsE, virtual slot 9
unsigned __int64 __fastcall sub_38B1C0(__int64 a1)
{
  __int64 v1; // x8

  if ( *(_BYTE *)(a1 + 76) == 0 )
    return -1;
  v1 = *(_QWORD *)(a1 + 64);
  if ( v1 != 0 )
    return v1 + *(unsigned int *)(a1 + 72);
  else
    return (unsigned __int64)(1000LL * nn__os__GetSystemTick((char *)a1)) / *(_QWORD *)((__int64*)goff_18F13E8) / 0x3E8;
}

// N5storm4echo20CTransmissionMessageE, virtual slot 4
__int64 __fastcall sub_38CCA0(__int64 result, _DWORD *a2)
{
  __int64 *v2; // x8
  __int64 *i; // x9
  __int64 v4; // t1

  v2 = *(__int64 **)(result + 64);
  for ( i = *(__int64 **)(result + 72); v2 != i; *(_DWORD *)(v4 + 124) = a2[1] )
  {
    v4 = *v2;
    v2 += 3;
    *(_DWORD *)(v4 + 120) = *a2;
  }
  return result;
}

// N5storm4echo26CTransmissionNetPropertiesE, virtual slot 2
__int64 __fastcall sub_38CF80(_QWORD *a1)
{
  __int64 v1; // x20

  *a1 = ((char *)((__int64*)goff_18F4290) + 16);
  v1 = a1[8];
  a1[8] = 0;
  if ( v1 != 0 )
  {
    sub_261DF0(v1);
    sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
  }
  return sub_35B1C0(a1);
}

// N5storm4echo26CTransmissionNetPropertiesE, virtual slot 3
void __fastcall sub_38CFE0(_QWORD *a1)
{
  __int64 v1; // x20

  *a1 = ((char *)((__int64*)goff_18F4290) + 16);
  v1 = a1[8];
  a1[8] = 0;
  if ( v1 != 0 )
  {
    sub_261DF0(v1);
    sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
  }
  sub_35B1C0(a1);
  _ZdlPv(a1);
}

// N5storm4echo36CTransmissionTouchedBitsHierarchicalE, virtual slot 2
__int64 __fastcall sub_38D710(_QWORD *a1)
{
  *a1 = ((char *)goff_18F42B0 + 16);
  sub_592460(a1 + 34);
  sub_592460(a1 + 21);
  sub_592460(a1 + 8);
  return sub_35B1C0(a1);
}

// N5storm4echo36CTransmissionTouchedBitsHierarchicalE, virtual slot 3
void __fastcall sub_38D760(_QWORD *a1)
{
  *a1 = ((char *)goff_18F42B0 + 16);
  sub_592460(a1 + 34);
  sub_592460(a1 + 21);
  sub_592460(a1 + 8);
  sub_35B1C0(a1);
  _ZdlPv(a1);
}

__int64 __fastcall sub_38E920(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v4; // x8
  __int64 *v5; // x8
  __int64 v8; // x21
  __int64 result; // x0

  v4 = qword_190CB40;
  *(_DWORD *)(a1 + 8) = -1;
  *(_QWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 24) = 0;
  v5 = ((__int64*)goff_18F42D8);
  *(_DWORD *)(a1 + 32) = a2;
  *(_DWORD *)(a1 + 36) = a3;
  *(_QWORD *)a1 = v5 + 2;
  v8 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  result = sub_5B87B0(v8, a4);
  *(_QWORD *)(a1 + 40) = v8;
  return result;
}

__int64 __fastcall sub_38EA70(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v4; // x8
  __int64 *v5; // x8
  __int64 v8; // x21
  __int64 result; // x0

  v4 = qword_190CB40;
  *(_DWORD *)(a1 + 8) = -1;
  *(_QWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 24) = 0;
  v5 = ((__int64*)goff_18F42E0);
  *(_DWORD *)(a1 + 32) = a2;
  *(_DWORD *)(a1 + 36) = a3;
  *(_QWORD *)a1 = v5 + 2;
  v8 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  result = sub_5B87B0(v8, a4);
  *(_QWORD *)(a1 + 40) = v8;
  return result;
}

__int64 __fastcall sub_38F360(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v4; // x8
  __int64 *v5; // x8
  __int64 v8; // x21
  __int64 result; // x0

  v4 = qword_190CB40;
  *(_DWORD *)(a1 + 8) = -1;
  *(_QWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 24) = 0;
  v5 = ((__int64*)goff_18F42F8);
  *(_DWORD *)(a1 + 32) = a2;
  *(_DWORD *)(a1 + 36) = a3;
  *(_QWORD *)a1 = v5 + 2;
  v8 = sub_56C9F0(280, 8, 1092624384, 0LL, &unk_1326E41, 0);
  result = sub_26D390(v8, a4);
  *(_QWORD *)(a1 + 40) = v8;
  return result;
}

__int64 __fastcall sub_38F740(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // x8
  __int64 *v4; // x8
  __int64 v7; // x21
  __int64 result; // x0

  v3 = qword_190CB40;
  *(_DWORD *)(a1 + 8) = -1;
  *(_QWORD *)(a1 + 16) = v3;
  *(_QWORD *)(a1 + 24) = 0;
  v4 = ((__int64*)goff_18F4308);
  *(_DWORD *)(a1 + 32) = a2;
  *(_QWORD *)a1 = v4 + 2;
  v7 = sub_56C9F0(280, 8, 1092624384, 0LL, &unk_1326E41, 0);
  result = sub_26D390(v7, a3);
  *(_QWORD *)(a1 + 40) = v7;
  return result;
}

__int64 __fastcall sub_390360(__int64 a1, __int64 a2)
{
  __int64 v3; // x19
  __int64 *v4; // x8
  __int64 *v5; // x9
  __int64 v6; // x20
  __int64 *v7; // x8
  __int64 v8; // x22
  __int64 *v9; // x8
  __int64 *v10; // x8

  v3 = a1;
  sub_57F070(a1, a2);
  v4 = ((__int64*)goff_18F4340) + 24;
  v5 = ((__int64 *)((__int64*)goff_18EDE48) + 2);
  *(_QWORD *)v3 = ((__int64 *)((__int64*)goff_18F4340) + 2);
  *(_QWORD *)(v3 + 8) = v4;
  v6 = v3 + 8;
  *(_QWORD *)(v3 + 32) = v5;
  sub_57F070(v3 + 40, a2 + 40);
  v7 = ((__int64*)goff_18EDE50) + 24;
  *(_QWORD *)(v3 + 40) = ((__int64 *)((__int64*)goff_18EDE50) + 2);
  *(_QWORD *)(v3 + 48) = v7;
  *(_DWORD *)(v3 + 68) = *(_DWORD *)(a2 + 68);
  sub_57F1B0(v3 + 40, v3 + 8);
  *(_QWORD *)(v3 + 72) = ((__int64 *)((__int64*)goff_18EDCC8) + 2);
  v8 = v3 + 80;
  sub_57F070(v3 + 80, a2 + 80);
  v9 = ((__int64*)goff_18EDCD0) + 24;
  *(_QWORD *)(v3 + 80) = ((__int64 *)((__int64*)goff_18EDCD0) + 2);
  *(_QWORD *)(v3 + 88) = v9;
  v3 += 88;
  sub_57F070(v3 + 24, a2 + 112);
  v10 = ((__int64*)goff_18EDCD8) + 24;
  *(_QWORD *)(v3 + 24) = ((__int64 *)((__int64*)goff_18EDCD8) + 2);
  *(_QWORD *)(v3 + 32) = v10;
  *(_DWORD *)(v3 + 52) = *(_DWORD *)(a2 + 140);
  *(_QWORD *)(v3 + 56) = (*(__int64 (__fastcall **)(_QWORD, void *, int))(**(_QWORD **)(a2 + 144) + 40LL))(
                           *(_QWORD *)(a2 + 144),
                           &unk_1326E41,
                           0);
  sub_57F1B0(v3 + 24, v3);
  sub_57F1B0(*(_QWORD *)(v3 + 56), v3);
  return sub_57F1B0(v8, v6);
}

__int64 __fastcall sub_394C30(char *a1, unsigned int a2)
{
  __int64 v2; // x0
  char *v3; // x9
  __int64 v4; // t1
  char *v5; // x8
  unsigned int v6; // w10
  bool v7; // cf
  _BOOL4 v8; // w10

  v4 = *(_QWORD *)(a1 + 40);
  v2 = a1 + 40;
  v3 = v4;
  if ( v4 == 0 )
    return 0;
  v5 = v2;
  do
  {
    v6 = *(_DWORD *)(v3 + 32);
    v7 = v6 >= a2;
    v8 = v6 < a2;
    if ( v7 )
      v5 = v3;
    v3 = *(_QWORD *)(v3 + 8LL * v8);
  }
  while ( v3 != 0 );
  if ( v5 == v2 )
    return 0;
  if ( *(_DWORD *)(v5 + 32) <= a2 )
    return *(_QWORD *)(v5 + 40);
  return 0;
}

__int64 __fastcall sub_39C390(char *a1, unsigned int a2)
{
  __int64 v2; // x0
  char *v3; // x9
  __int64 v4; // t1
  char *v5; // x8
  unsigned int v6; // w10
  bool v7; // cf
  _BOOL4 v8; // w10

  v4 = *(_QWORD *)(a1 + 176);
  v2 = a1 + 176;
  v3 = v4;
  if ( v4 == 0 )
    return 0;
  v5 = v2;
  do
  {
    v6 = *(_DWORD *)(v3 + 32);
    v7 = v6 >= a2;
    v8 = v6 < a2;
    if ( v7 )
      v5 = v3;
    v3 = *(_QWORD *)(v3 + 8LL * v8);
  }
  while ( v3 != 0 );
  if ( v5 == v2 )
    return 0;
  if ( *(_DWORD *)(v5 + 32) <= a2 )
    return *(_QWORD *)(v5 + 40);
  return 0;
}

bool __fastcall sub_39F390(__int64 a1, unsigned int a2)
{
  __int64 v2; // x0
  __int64 v3; // x9
  __int64 v4; // t1
  __int64 v5; // x8
  unsigned int v6; // w10
  bool v7; // cf
  _BOOL4 v8; // w10

  v4 = *(_QWORD *)(a1 + 176);
  v2 = a1 + 176;
  v3 = v4;
  if ( v4 == 0 )
    goto LABEL_9;
  v5 = v2;
  do
  {
    v6 = *(_DWORD *)(v3 + 32);
    v7 = v6 >= a2;
    v8 = v6 < a2;
    if ( v7 )
      v5 = v3;
    v3 = *(_QWORD *)(v3 + 8LL * v8);
  }
  while ( v3 != 0 );
  if ( v5 == v2 || *(_DWORD *)(v5 + 32) > a2 )
LABEL_9:
    v5 = v2;
  return v5 != v2;
}

// N5storm4echo5group15GroupConnectionE, virtual slot 0
__int64 __fastcall sub_3A38A0(__int64 a1)
{
  __int64 v2; // x0
  _QWORD *v3; // x20
  _QWORD *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x0

  *(_QWORD *)a1 = ((char *)goff_18F4708 + 16);
  v2 = *(_QWORD *)(a1 + 144);
  if ( v2 != 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *(_QWORD *)(a1 + 144) = 0;
  }
  v3 = *(_QWORD **)(a1 + 192);
  v4 = *(_QWORD **)(a1 + 200);
  if ( v3 != v4 )
  {
    do
    {
      if ( *v3 != 0 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 8LL))(*v3);
      ++v3;
    }
    while ( v4 != v3 );
    v3 = *(_QWORD **)(a1 + 192);
  }
  v5 = *(_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 200) = v3;
  sub_3A1460(v5, a1);
  v6 = *(_QWORD *)(a1 + 192);
  if ( v6 != 0 )
  {
    *(_QWORD *)(a1 + 200) = v6;
    sub_56CA00(v6, &unk_1326E41, 0);
  }
  if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 168), &unk_1326E41, 0);
  return sub_56A940(a1);
}

__int64 __fastcall sub_3A7BC0(__int64 a1, unsigned int a2)
{
  __int64 v2; // x9

  if ( *(_BYTE *)(a1 + 160) == 0 )
    return a2;
  v2 = *(__int64 *)(a1 + 88);
  if ( a2 < (unsigned __int64)((*(__int64 *)(a1 + 96) - v2) >> 2) )
    return *(unsigned int *)(v2 + 4LL * a2);
  return 0xFFFFFFFFLL;
}

int __fastcall sub_3AB670(__int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // x19
  _WORD *v3; // x23
  __int64 v6; // x0
  unsigned int v7; // w22
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0
  int v12; // [xsp+Ch] [xbp-34h] BYREF

  v2 = (unsigned __int16 *)(a1 + 752);
  v3 = (_WORD *)(a1 + 754);
  v12 = 5;
  v6 = sub_3AC700(a1, &v12, (_WORD *)(a1 + 752), (_WORD *)(a1 + 754), 0, 0);
  v7 = v6 != 0
    && (*(int (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 17800) + 288LL))(
         *(_QWORD *)(a1 + 17800),
         a1,
         a2,
         v6) > 0;
  v12 = 5;
  v8 = sub_3AC700(a1, &v12, v2, v3, 0, 0);
  if ( v8 != 0
    && (*(int (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 17800) + 288LL))(
         *(_QWORD *)(a1 + 17800),
         a1,
         a2,
         v8) > 0 )
  {
    ++v7;
  }
  v12 = 5;
  v9 = sub_3AC700(a1, &v12, v2, v3, 0, 0);
  if ( v9 != 0
    && (*(int (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 17800) + 288LL))(
         *(_QWORD *)(a1 + 17800),
         a1,
         a2,
         v9) > 0 )
  {
    ++v7;
  }
  v12 = 5;
  v10 = sub_3AC700(a1, &v12, v2, v3, 0, 0);
  if ( v10 != 0
    && (*(int (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 17800) + 288LL))(
         *(_QWORD *)(a1 + 17800),
         a1,
         a2,
         v10) > 0 )
  {
    ++v7;
  }
  sub_5A96F0(*(_QWORD **)(a1 + 17816), v2, (unsigned __int8 *)(a1 + 932));
  return v7;
}

__int64 __fastcall sub_3B2E10(_QWORD *a1)
{
  char *v2; // x20
  _QWORD *v3; // x0
  _QWORD *v4; // x21
  __int64 v5; // x0
  _QWORD *v6; // x21
  __int64 v7; // x22
  _QWORD *v8; // x23
  __int64 result; // x0

  *a1 = 0;
  v2 = (char *)(a1 + 465);
  std__condition_variable___condition_variable((char *)(a1 + 470));
  std__condition_variable___condition_variable((char *)(a1 + 469));
  std__mutex___mutex(v2);
  v3 = (_QWORD *)a1[8];
  a1[335] = 0;
  a1[13] = 0;
  if ( v3 != nullptr )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      sub_56CA00(v3, &unk_1326E41, 0);
      v3 = v4;
    }
    while ( v4 != nullptr );
  }
  v5 = a1[6];
  a1[6] = 0;
  if ( v5 != 0 )
    sub_56CA00(v5, &unk_1326E41, 0);
  v6 = (_QWORD *)a1[3];
  if ( v6 != nullptr )
  {
    do
    {
      v7 = v6[3];
      v8 = (_QWORD *)*v6;
      v6[3] = 0;
      if ( v7 != 0 )
      {
        sub_3AB000(v7);
        sub_57EDC0(v7, 0LL, &unk_1326E41, 0);
      }
      sub_56CA00(v6, &unk_1326E41, 0);
      v6 = v8;
    }
    while ( v8 != nullptr );
  }
  result = a1[1];
  a1[1] = 0;
  if ( result != 0 )
    return sub_56CA00(result, &unk_1326E41, 0);
  return result;
}

__int64 __fastcall sub_3B3FC0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // x8
  __int64 result; // x0

  v3 = goff_18F49F8;
  *(_QWORD *)a1 = v3 + 16;
  *(_DWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 8) = a2;
  result = sub_57EEF0(a1 + 24);
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 64) = 1065353216;
  return result;
}

// N5storm9transport24PunchToEchoPacketAdapterE, virtual slot 0
__int64 __fastcall sub_3B9BB0(__int64 result)
{
  __int64 *v1; // x8
  __int64 v2; // x8

  v1 = goff_18F4A50;
  *(_QWORD *)result = v1 + 2;
  *(_QWORD *)(result + 8) = v1 + 10;
  *(_QWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 64) = 0;
  v2 = *(_QWORD *)(result + 40);
  if ( v2 != 0 )
  {
    *(_QWORD *)(result + 48) = v2;
    return sub_56CA00(v2, &unk_1326E41, 0);
  }
  return result;
}

__int64 __fastcall sub_3B9BF0(__int64 result)
{
  __int64 *v1; // x8
  __int64 v2; // x8

  v1 = goff_18F4A50;
  *(_QWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 56) = 0;
  *(_QWORD *)(result - 8) = v1 + 2;
  *(_QWORD *)result = v1 + 10;
  v2 = *(_QWORD *)(result + 32);
  if ( v2 != 0 )
  {
    *(_QWORD *)(result + 40) = v2;
    return sub_56CA00(v2, &unk_1326E41, 0);
  }
  return result;
}

void __fastcall sub_3B9C90(__int64 a1)
{
  __int64 *v1; // x8
  _QWORD *v2; // x19
  __int64 v3; // x0

  v1 = ((__int64 *)goff_18F4A50 + 10);
  *(_QWORD *)(a1 - 8) = ((__int64 *)goff_18F4A50 + 2);
  v2 = (_QWORD *)(a1 - 8);
  *(_QWORD *)a1 = v1;
  *(_QWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 != 0 )
  {
    v2[6] = v3;
    sub_56CA00(v3, &unk_1326E41, 0);
  }
  _ZdlPv(v2);
}

// N5storm9transport24TransportManager_NetworkE, virtual slot 30
__int64 *__fastcall sub_3BCD90(__int64 a1, __int64 a2)
{
  char *v2; // x19
  unsigned __int64 v5; // x8
  __int64 *v6; // x22
  _BYTE *v7; // x21
  __int64 **v8; // x0

  v2 = (char *)(a1 + 3880);
  std__shared_timed_mutex__lock_shared((char *)(a1 + 3880));
  v5 = *(unsigned int *)(a2 + 28);
  if ( (unsigned int)v5 <= 0x7F && (*(_QWORD *)(a1 + ((v5 >> 3) & 0x1FFFFFF8) + 248) & (1LL << v5)) != 0 )
  {
    v6 = *(__int64 **)(a1 + 16 * v5 + 800);
    std__shared_timed_mutex__unlock_shared(v2);
    if ( v6 != nullptr )
      return v6;
  }
  else
  {
    std__shared_timed_mutex__unlock_shared(v2);
  }
  v7 = (_BYTE *)sub_596B20(a2);
  std__shared_timed_mutex__lock_shared(v2);
  v8 = sub_3EE870((_QWORD *)(a1 + 208), v7);
  if ( v8 != nullptr )
    v6 = v8[5];
  else
    v6 = nullptr;
  std__shared_timed_mutex__unlock_shared(v2);
  return v6;
}

// N5storm9transport24TransportManager_NetworkE, virtual slot 31
__int64 __fastcall sub_3BCE50(__int64 a1, unsigned int *a2)
{
  char *v2; // x19
  unsigned __int64 v5; // x8
  __int64 v6; // x20

  v2 = (char *)(a1 + 3880);
  std__shared_timed_mutex__lock_shared((char *)(a1 + 3880));
  v5 = *a2;
  if ( (unsigned int)v5 <= 0x7F && (*(_QWORD *)(a1 + ((v5 >> 3) & 0x1FFFFFF8) + 248) & (1LL << v5)) != 0 )
    v6 = *(_QWORD *)(a1 + 16 * v5 + 800);
  else
    v6 = 0;
  std__shared_timed_mutex__unlock_shared(v2);
  return v6;
}

// N5storm9transport24TransportManager_NetworkE, virtual slot 32
__int64 *__fastcall sub_3BCED0(__int64 a1, _BYTE *a2)
{
  char *v2; // x19
  __int64 **v5; // x0
  __int64 *v6; // x20

  v2 = (char *)(a1 + 3880);
  std__shared_timed_mutex__lock_shared((char *)(a1 + 3880));
  v5 = sub_3EE870((_QWORD *)(a1 + 208), a2);
  if ( v5 != nullptr )
    v6 = v5[5];
  else
    v6 = nullptr;
  std__shared_timed_mutex__unlock_shared(v2);
  return v6;
}

// N5storm9transport24TransportManager_NetworkE, virtual slot 33
__int64 __fastcall sub_3BD260(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // x0

  v7 = sub_3B3430(a1 + 160);
  if ( v7 != 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 288LL))(a1, v7, a3, a4);
  else
    return 0xFFFFFFFFLL;
}

// N5storm9transport24TransportManager_NetworkE, virtual slot 35
__int64 __fastcall sub_3BD3D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // x0

  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 256LL))(a1);
  if ( v7 != 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 288LL))(a1, v7, a3, a4);
  else
    return 0xFFFFFFFFLL;
}

// N5storm9transport24TransportManager_NetworkE, virtual slot 57
void sub_3BDE80(__int64 result)
{
  __int64 v1; // x20
  __int64 v2; // x19

  v1 = *(_QWORD *)(result + 4392);
  if ( v1 != 0 )
  {
    v2 = result;
    result = *(_QWORD *)(v1 + 152);
    if ( *(_DWORD *)(result + 28) != -1 )
    {
      sub_5BC360(result);
      sub_5BCCC0(*(_QWORD *)(v1 + 152));
      { sub_3B62B0(v2); return; }
    }
  }
  return;
}

__int64 __fastcall sub_3BDED0(__int64 result)
{
  __int64 v1; // x20
  __int64 v2; // x19

  v1 = *(_QWORD *)(result + 4280);
  if ( v1 != 0 && *(_DWORD *)(*(_QWORD *)(v1 + 152) + 28LL) != -1 )
  {
    v2 = result - 112;
    sub_5BC360(*(_QWORD *)(v1 + 152));
    sub_5BCCC0(*(_QWORD *)(v1 + 152));
    return sub_3B62B0(v2);
  }
  return result;
}

int __fastcall sub_3BE310(char *SystemTick)
{
  _QWORD *v1; // x20
  unsigned __int64 v2; // x21
  unsigned int v3; // w19
  __int64 v4; // x26
  unsigned __int64 v5; // x27
  unsigned int v6; // w8

  v1 = *((_QWORD **)SystemTick + 23);
  if ( v1 != nullptr )
  {
    v2 = *(_QWORD *)((__int64*)goff_18F13E8);
    v3 = 0xFFFFFFFF;
    do
    {
      v4 = v1[3];
      v5 = *(_QWORD *)(v4 + 18104) + 1500LL;
      SystemTick = (char *)nn__os__GetSystemTick(SystemTick);
      v6 = 0xFFFFFFFF;
      if ( v5 > 1000 * (__int64)SystemTick / v2 / 0x3E8 )
        v6 = *(_DWORD *)(v4 + 18140);
      v1 = (_QWORD *)*v1;
      if ( v6 < v3 )
        v3 = v6;
    }
    while ( v1 != nullptr );
  }
  else
  {
    return (unsigned int)-1;
  }
  return v3;
}

int __fastcall sub_3BE3D0(char *SystemTick)
{
  _QWORD *v1; // x20
  unsigned __int64 v2; // x22
  unsigned int v3; // w19
  __int64 v4; // x27
  unsigned __int64 v5; // x28
  unsigned int v6; // w8

  v1 = *((_QWORD **)SystemTick + 23);
  if ( v1 != nullptr )
  {
    v2 = *(_QWORD *)((__int64*)goff_18F13E8);
    v3 = 0xFFFFFFFF;
    do
    {
      v4 = v1[3];
      v5 = *(_QWORD *)(v4 + 18104) + 1500LL;
      SystemTick = (char *)nn__os__GetSystemTick(SystemTick);
      v6 = 0xFFFFFFFF;
      if ( v5 > 1000 * (__int64)SystemTick / v2 / 0x3E8 )
        v6 = *(_DWORD *)(v4 + 18136) + *(_DWORD *)(v4 + 18140);
      v1 = (_QWORD *)*v1;
      if ( v6 < v3 )
        v3 = v6;
    }
    while ( v1 != nullptr );
  }
  else
  {
    return (unsigned int)-1;
  }
  return v3;
}

__int64 __fastcall sub_3BF750(__int64 a1, unsigned int a2)
{
  return *(_QWORD *)(a1 + 88) + 12LL * a2;
}

// N5storm4echo12AgentMementoE, virtual slot 26
__int64 __fastcall sub_3BF810(__int64 a1, int a2)
{
  unsigned int v3; // w20
  __int64 v4; // x0

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * (unsigned int)a2) != 0
    && (v3 = a2, (sub_3F4E80(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 80LL, a2) & 1) != 0)
    && (v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * v3)) != 0 )
  {
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 72LL))(v4);
  }
  else
  {
    return -1;
  }
}

// N5storm4echo12AgentMementoE, virtual slot 31
__int64 __fastcall sub_3C2550(__int64 a1, unsigned int a2)
{
  return *(unsigned __int8 *)(*(_QWORD *)(a1 + 112) + a2);
}

// N5storm4echo5group11resultEvent6CreateE, virtual slot 5
__int64 __fastcall sub_3C2DB0(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(112, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_3E1F70(v2, a1);
  return v2;
}

// N5storm4echo5group8outEvent10PlayerLeftE, virtual slot 5
char *__fastcall sub_3C41D0(__int64 a1)
{
  char *v2; // x20

  v2 = (char *)sub_56C9F0(96, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_3E28D0(v2, a1);
  return v2;
}

// N5storm4echo5group11resultEvent20CancelRequestAddPeerE, virtual slot 5
__int64 __fastcall sub_3C4980(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x19
  __int64 v4; // x22
  __int64 v5; // x20

  v2 = sub_56C9F0(64, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18EE7F0) + 2);
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(v2 + 36) = *(_DWORD *)(a1 + 36);
  *(_QWORD *)(v2 + 40) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18F42C8) + 2);
  *(_DWORD *)(v2 + 48) = *(_DWORD *)(a1 + 48);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18F4518) + 2);
  v3 = *(_QWORD *)(a1 + 56);
  v4 = v2;
  v5 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  sub_5B87B0(v5, v3);
  *(_QWORD *)(v4 + 56) = v5;
  return v4;
}

// N5storm4echo5group11resultEvent20AcceptAddPeerRequestE, virtual slot 5
__int64 __fastcall sub_3C4D60(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x9
  __int64 v4; // x8
  __int64 *v5; // x8
  __int64 *v6; // x10
  __int64 v7; // x9
  __int64 v8; // x8
  __int64 v9; // x9

  result = sub_56C9F0(80, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  v3 = ((__int64*)goff_18EE7F0);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v3 + 2;
  *(_QWORD *)(result + 24) = v4;
  *(_DWORD *)(result + 32) = *(_DWORD *)(a1 + 32);
  v5 = ((__int64*)goff_18F42C8);
  v6 = ((__int64*)goff_18F4520);
  *(_DWORD *)(result + 36) = *(_DWORD *)(a1 + 36);
  v7 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)result = v5 + 2;
  *(_QWORD *)(result + 40) = v7;
  LODWORD(v5) = *(_DWORD *)(a1 + 48);
  *(_QWORD *)result = v6 + 2;
  *(_DWORD *)(result + 48) = (_DWORD)v5;
  *(_WORD *)(result + 52) = *(_WORD *)(a1 + 52);
  v8 = *(_QWORD *)(a1 + 54);
  v9 = *(_QWORD *)(a1 + 62);
  *(_DWORD *)(result + 69) = *(_DWORD *)(a1 + 69);
  *(_QWORD *)(result + 62) = v9;
  *(_QWORD *)(result + 54) = v8;
  return result;
}

// N5storm4echo5group11resultEvent9AddPlayerE, virtual slot 5
__int64 __fastcall sub_3C5670(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(96, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_38E700(v2, a1);
  return v2;
}

// N5storm4echo5group8outEvent14PeerDiscoveredE, virtual slot 5
__int64 __fastcall sub_3C5A20(__int64 a1)
{
  __int64 v2; // x0
  __int64 *v3; // x9
  __int64 *v4; // x9
  __int64 v5; // x19
  __int64 v6; // x22
  __int64 v7; // x20

  v2 = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v3 = ((__int64*)goff_18F42F0);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 2;
  v4 = ((__int64*)goff_18F42D8);
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)v2 = v4 + 2;
  *(_DWORD *)(v2 + 36) = *(_DWORD *)(a1 + 36);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = v2;
  v7 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  sub_5B87B0(v7, v5);
  *(_QWORD *)(v6 + 40) = v7;
  return v6;
}

// N5storm4echo5group8outEvent13PeerConnectedE, virtual slot 5
__int64 __fastcall sub_3C5E60(__int64 a1)
{
  __int64 v2; // x0
  __int64 *v3; // x9
  __int64 *v4; // x9
  __int64 v5; // x19
  __int64 v6; // x22
  __int64 v7; // x20

  v2 = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v3 = ((__int64*)goff_18F42F0);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 2;
  v4 = ((__int64*)goff_18F42E0);
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)v2 = v4 + 2;
  *(_DWORD *)(v2 + 36) = *(_DWORD *)(a1 + 36);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = v2;
  v7 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  sub_5B87B0(v7, v5);
  *(_QWORD *)(v6 + 40) = v7;
  return v6;
}

// N5storm4echo5group8outEvent12PlayerJoinedE, virtual slot 5
__int64 __fastcall sub_3C66A0(__int64 a1)
{
  __int64 v2; // x0
  __int64 *v3; // x9
  __int64 *v4; // x9
  __int64 v5; // x19
  __int64 v6; // x22
  __int64 v7; // x20

  v2 = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v3 = ((__int64*)goff_18F42F0);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 2;
  v4 = ((__int64*)goff_18F42F8);
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)v2 = v4 + 2;
  *(_DWORD *)(v2 + 36) = *(_DWORD *)(a1 + 36);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = v2;
  v7 = sub_56C9F0(280, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_26D390(v7, v5);
  *(_QWORD *)(v6 + 40) = v7;
  return v6;
}

// N5storm4echo5group8outEvent12PlayerUpdateE, virtual slot 5
__int64 __fastcall sub_3C6AE0(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x19
  __int64 v4; // x22
  __int64 v5; // x20

  v2 = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18F42F0) + 2);
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18F4308) + 2);
  v3 = *(_QWORD *)(a1 + 40);
  v4 = v2;
  v5 = sub_56C9F0(280, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_26D390(v5, v3);
  *(_QWORD *)(v4 + 40) = v5;
  return v4;
}

// N5storm4echo5group8outEvent14AddPeerRequestE, virtual slot 5
__int64 __fastcall sub_3C6F70(__int64 a1)
{
  __int64 v2; // x0
  __int64 *v3; // x9
  __int64 *v4; // x9
  __int64 v5; // x22
  __int64 v6; // x23
  __int64 v7; // x20

  v2 = sub_56C9F0(64, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v3 = ((__int64*)goff_18F42F0);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 2;
  v4 = ((__int64*)goff_18F4818);
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)v2 = v4 + 2;
  v5 = v2;
  *(_QWORD *)(v2 + 40) = (*(__int64 (__fastcall **)(_QWORD, void *, int))(**(_QWORD **)(a1 + 40) + 40LL))(
                           *(_QWORD *)(a1 + 40),
                           &unk_1326E41,
                           0);
  v6 = *(_QWORD *)(a1 + 48);
  v7 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  sub_5B87B0(v7, v6);
  *(_QWORD *)(v5 + 48) = v7;
  *(_WORD *)(v5 + 56) = *(_WORD *)(a1 + 56);
  return v5;
}

// N5storm4echo5group8outEvent17RemovePeerRequestE, virtual slot 5
__int64 __fastcall sub_3C73E0(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x23
  __int64 v4; // x22
  __int64 v5; // x20

  v2 = sub_56C9F0(56, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18F42F0) + 2);
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18F4668) + 2);
  v3 = *(_QWORD *)(a1 + 40);
  v4 = v2;
  v5 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  sub_5B87B0(v5, v3);
  *(_QWORD *)(v4 + 40) = v5;
  *(_WORD *)(v4 + 48) = *(_WORD *)(a1 + 48);
  return v4;
}

// N5storm4echo5group8internal12GroupCreatedE, virtual slot 5
__int64 __fastcall sub_3C7FE0(__int64 a1)
{
  __int64 v2; // x0
  __int64 *v3; // x9
  __int64 v4; // x8
  __int64 v5; // x9
  __int64 v6; // x23
  __int64 v7; // x22
  __int64 v8; // x20

  v2 = sub_56C9F0(72, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v3 = goff_18F4350;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 2;
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 36);
  v5 = *(_QWORD *)(a1 + 44);
  *(_DWORD *)(v2 + 51) = *(_DWORD *)(a1 + 51);
  *(_QWORD *)(v2 + 44) = v5;
  *(_QWORD *)(v2 + 36) = v4;
  v6 = *(_QWORD *)(a1 + 56);
  v7 = v2;
  v8 = sub_56C9F0(496, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_25E630(v8, v6);
  *(_QWORD *)(v7 + 56) = v8;
  *(_DWORD *)(v7 + 64) = *(_DWORD *)(a1 + 64);
  *(_DWORD *)(v7 + 68) = *(_DWORD *)(a1 + 68);
  return v7;
}

// N5storm4echo5group8internal21GroupDescriptorUpdateE, virtual slot 5
__int64 __fastcall sub_3C8350(__int64 a1)
{
  __int64 v2; // x0
  __int64 *v3; // x9
  __int64 v4; // x8
  __int64 v5; // x9
  __int64 v6; // x19
  __int64 v7; // x22
  __int64 v8; // x20

  v2 = sub_56C9F0(64, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v3 = ((__int64*)goff_18F43C8);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 2;
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 36);
  v5 = *(_QWORD *)(a1 + 44);
  *(_DWORD *)(v2 + 51) = *(_DWORD *)(a1 + 51);
  *(_QWORD *)(v2 + 44) = v5;
  *(_QWORD *)(v2 + 36) = v4;
  v6 = *(_QWORD *)(a1 + 56);
  v7 = v2;
  v8 = sub_56C9F0(496, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_25E630(v8, v6);
  *(_QWORD *)(v7 + 56) = v8;
  return v7;
}

// N5storm4echo21EchoLinkPunchOperatorE, virtual slot 1
void __fastcall sub_3C8670(_QWORD *a1)
{
  _QWORD *v1; // x21
  _QWORD *v3; // x22
  __int64 v4; // x0

  *a1 = ((char *)goff_18F49F8 + 16);
  v1 = (_QWORD *)a1[6];
  if ( v1 != nullptr )
  {
    do
    {
      v3 = (_QWORD *)*v1;
      sub_578410(v1 + 3);
      sub_56CA00(v1, &unk_1326E41, 0);
      v1 = v3;
    }
    while ( v3 != nullptr );
  }
  v4 = a1[4];
  a1[4] = 0;
  if ( v4 != 0 )
    sub_56CA00(v4, &unk_1326E41, 0);
  sub_57EF40(a1 + 3);
  _ZdlPv(a1);
}

// N5storm4echo5group7inEvent6CreateE, virtual slot 5
__int64 __fastcall sub_3CBC30(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x23
  __int64 v4; // x22
  __int64 v5; // x20

  v2 = sub_56C9F0(64, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = ((__int64 *)goff_18F4F38 + 2);
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18F4320) + 2);
  v3 = *(_QWORD *)(a1 + 40);
  v4 = v2;
  v5 = sub_56C9F0(496, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_25E630(v5, v3);
  *(_QWORD *)(v4 + 40) = v5;
  *(_DWORD *)(v4 + 48) = *(_DWORD *)(a1 + 48);
  *(_QWORD *)(v4 + 56) = *(_QWORD *)(a1 + 56);
  return v4;
}

// N5storm4echo5group7inEvent20RefuseAddPeerRequestE, virtual slot 5
char *__fastcall sub_3CC4B0(__int64 a1)
{
  char *v2; // x20

  v2 = (char *)sub_56C9F0(96, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_3CC950(v2, a1);
  return v2;
}

// N5storm4echo5group7inEvent14RequestAddPeerE, virtual slot 5
__int64 __fastcall sub_3CD460(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x23
  __int64 v4; // x22
  __int64 v5; // x20

  v2 = sub_56C9F0(56, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = ((__int64 *)goff_18F4F38 + 2);
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18F4338) + 2);
  v3 = *(_QWORD *)(a1 + 40);
  v4 = v2;
  v5 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  sub_5B87B0(v5, v3);
  *(_QWORD *)(v4 + 40) = v5;
  *(_QWORD *)(v4 + 48) = (*(__int64 (__fastcall **)(_QWORD, void *, int))(**(_QWORD **)(a1 + 48) + 40LL))(
                           *(_QWORD *)(a1 + 48),
                           &unk_1326E41,
                           0);
  return v4;
}

// N5storm4echo5group21GroupConnectionEvents11SendRequestE, virtual slot 5
__int64 __fastcall sub_3CDEF0(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x8
  __int64 v4; // x9
  __int64 v5; // x21

  v2 = sub_56C9F0(96, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = ((__int64 *)goff_18F50A8 + 2);
  *(_WORD *)(v2 + 32) = *(_WORD *)(a1 + 32);
  *(_QWORD *)v2 = ((char *)goff_18F4360 + 16);
  v3 = *(_QWORD *)(a1 + 34);
  v4 = *(_QWORD *)(a1 + 42);
  *(_DWORD *)(v2 + 49) = *(_DWORD *)(a1 + 49);
  *(_QWORD *)(v2 + 42) = v4;
  *(_QWORD *)(v2 + 34) = v3;
  *(_DWORD *)(v2 + 56) = *(_DWORD *)(a1 + 56);
  v5 = v2;
  *(_QWORD *)(v2 + 64) = (*(__int64 (__fastcall **)(_QWORD, void *, int))(**(_QWORD **)(a1 + 64) + 40LL))(
                           *(_QWORD *)(a1 + 64),
                           &unk_1326E41,
                           0);
  *(_DWORD *)(v5 + 72) = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(v5 + 76) = *(_DWORD *)(a1 + 76);
  *(_DWORD *)(v5 + 80) = *(_DWORD *)(a1 + 80);
  *(_QWORD *)(v5 + 88) = *(_QWORD *)(a1 + 88);
  return v5;
}

// N5storm4echo5group21GroupConnectionEvents16ResponseAcceptedE, virtual slot 5
__int64 __fastcall sub_3CF400(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x9
  __int64 v4; // x8
  __int64 *v5; // x9
  __int64 v6; // x8
  __int64 v7; // x9

  result = sub_56C9F0(56, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = goff_18F50A8;
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v3 + 2;
  v5 = goff_18F43D0;
  *(_QWORD *)(result + 24) = v4;
  LOWORD(v4) = *(_WORD *)(a1 + 32);
  *(_QWORD *)result = v5 + 2;
  *(_WORD *)(result + 32) = v4;
  v6 = *(_QWORD *)(a1 + 36);
  v7 = *(_QWORD *)(a1 + 44);
  *(_DWORD *)(result + 52) = *(_DWORD *)(a1 + 52);
  *(_QWORD *)(result + 44) = v7;
  *(_QWORD *)(result + 36) = v6;
  return result;
}

// N5storm4echo5group21GroupConnectionEvents13PeerConnectedE, virtual slot 5
__int64 __fastcall sub_3CFAA0(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x9
  __int64 v4; // x8
  __int64 *v5; // x9

  result = sub_56C9F0(40, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = goff_18F50A8;
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v3 + 2;
  v5 = ((__int64*)goff_18F43F0);
  *(_QWORD *)(result + 24) = v4;
  *(_WORD *)(result + 32) = *(_WORD *)(a1 + 32);
  *(_QWORD *)result = v5 + 2;
  return result;
}

// N5storm4echo5group16ConnectionEvents10DiscoveredE, virtual slot 5
__int64 __fastcall sub_3D70C0(__int64 a1)
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
  v5 = goff_18F45D0;
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

// N5storm4echo5group21GroupConnectionEvents15ReceivedRequestE, virtual slot 5
__int64 __fastcall sub_3D8810(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x8
  __int64 v4; // x9
  __int64 v5; // x21

  v2 = sub_56C9F0(88, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = ((__int64 *)goff_18F50A8 + 2);
  *(_WORD *)(v2 + 32) = *(_WORD *)(a1 + 32);
  *(_QWORD *)v2 = ((char *)goff_18F4658 + 16);
  v3 = *(_QWORD *)(a1 + 34);
  v4 = *(_QWORD *)(a1 + 42);
  *(_DWORD *)(v2 + 49) = *(_DWORD *)(a1 + 49);
  *(_QWORD *)(v2 + 42) = v4;
  *(_QWORD *)(v2 + 34) = v3;
  *(_DWORD *)(v2 + 56) = *(_DWORD *)(a1 + 56);
  v5 = v2;
  *(_QWORD *)(v2 + 64) = (*(__int64 (__fastcall **)(_QWORD, void *, int))(**(_QWORD **)(a1 + 64) + 40LL))(
                           *(_QWORD *)(a1 + 64),
                           &unk_1326E41,
                           0);
  *(_WORD *)(v5 + 72) = *(_WORD *)(a1 + 72);
  *(_QWORD *)(v5 + 80) = *(_QWORD *)(a1 + 80);
  return v5;
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

// N5storm4echo5group19PlayerJoinedMessageE, virtual slot 16
__int64 __fastcall sub_3DCB90(__int64 a1, _QWORD *a2)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 120);
  if ( result != 0 )
    return sub_26D620(result, a2, 0);
  return result;
}

// N5storm4echo5group19PlayerUpdateMessageE, virtual slot 16
__int64 __fastcall sub_3DDBA0(__int64 a1, _QWORD *a2)
{
  __int64 result; // x0

  result = *(_QWORD *)(a1 + 120);
  if ( result != 0 )
    return sub_26D620(result, a2, 0);
  return result;
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

// N5storm4echo9multicast21RemoveRelationMessageE, virtual slot 5
__int64 __fastcall sub_3DF4A0(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8
  __int64 *v6; // x8

  v2 = sub_56C9F0(176, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((char *)goff_18F48A8 + 192);
  v4 = ((__int64 *)((__int64*)goff_18EDE68) + 2);
  *(_QWORD *)v2 = ((char *)goff_18F48A8 + 16);
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 32) = v4;
  sub_57F070(v2 + 40, a1 + 40);
  v5 = ((__int64 *)goff_18EDE70 + 24);
  *(_QWORD *)(v2 + 40) = ((__int64 *)goff_18EDE70 + 2);
  *(_QWORD *)(v2 + 48) = v5;
  *(_DWORD *)(v2 + 68) = *(_DWORD *)(a1 + 68);
  sub_57F1B0(v2 + 40, v2 + 8);
  sub_2590F0((_QWORD *)(v2 + 72), v2 + 8, (_QWORD *)(a1 + 72));
  *(_QWORD *)(v2 + 136) = ((__int64 *)((__int64*)goff_18EDE48) + 2);
  sub_57F070(v2 + 144, a1 + 144);
  v6 = ((__int64 *)((__int64*)goff_18EDE50) + 24);
  *(_QWORD *)(v2 + 144) = ((__int64 *)((__int64*)goff_18EDE50) + 2);
  *(_QWORD *)(v2 + 152) = v6;
  *(_DWORD *)(v2 + 172) = *(_DWORD *)(a1 + 172);
  sub_57F1B0(v2 + 144, v2 + 8);
  return v2;
}

// N5storm4echo9multicast21RemoveRelationMessageE, virtual slot 19
_Bool __fastcall sub_3DF780(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0 && (sub_57F110(a1 + 40, a2 + 40)) != 0 && (sub_57F110(a1 + 80, a2 + 80)) != 0 )
    return sub_57F110(a1 + 144, a2 + 144);
  else
    return 0;
}

// N5storm4echo9multicast22ConnectionReadyMessageE, virtual slot 5
__int64 __fastcall sub_3E01E0(__int64 a1)
{
  __int64 v2; // x19
  __int64 v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8
  __int64 *v6; // x8
  __int64 *v7; // x8

  v2 = sub_56C9F0(152, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((char *)((__int64*)goff_18F4890) + 192);
  v4 = ((__int64 *)((__int64*)goff_18EDE68) + 2);
  *(_QWORD *)v2 = ((char *)((__int64*)goff_18F4890) + 16);
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 32) = v4;
  sub_57F070(v2 + 40, a1 + 40);
  v5 = ((__int64 *)goff_18EDE70 + 24);
  *(_QWORD *)(v2 + 40) = ((__int64 *)goff_18EDE70 + 2);
  *(_QWORD *)(v2 + 48) = v5;
  *(_DWORD *)(v2 + 68) = *(_DWORD *)(a1 + 68);
  sub_57F1B0(v2 + 40, v2 + 8);
  *(_QWORD *)(v2 + 72) = ((__int64 *)((__int64*)goff_18EDCC8) + 2);
  sub_57F070(v2 + 80, a1 + 80);
  v6 = ((__int64 *)((__int64*)goff_18EDCD0) + 24);
  *(_QWORD *)(v2 + 80) = ((__int64 *)((__int64*)goff_18EDCD0) + 2);
  *(_QWORD *)(v2 + 88) = v6;
  sub_57F070(v2 + 112, a1 + 112);
  v7 = ((__int64 *)((__int64*)goff_18EDCD8) + 24);
  *(_QWORD *)(v2 + 112) = ((__int64 *)((__int64*)goff_18EDCD8) + 2);
  *(_QWORD *)(v2 + 120) = v7;
  *(_DWORD *)(v2 + 140) = *(_DWORD *)(a1 + 140);
  *(_QWORD *)(v2 + 144) = (*(__int64 (__fastcall **)(_QWORD, void *, int))(**(_QWORD **)(a1 + 144) + 40LL))(
                            *(_QWORD *)(a1 + 144),
                            &unk_1326E41,
                            0);
  sub_57F1B0(v2 + 112, v2 + 88);
  sub_57F1B0(*(_QWORD *)(v2 + 144), v2 + 88);
  sub_57F1B0(v2 + 80, v2 + 8);
  return v2;
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

// NSt3__110__function6__funcIZN5storm9transport10Connection6engineEvE5$_130NS_9allocatorIS5_EEFvRS4_RKNS4_5EventEEEE, virtual slot 6
__int64 __fastcall sub_3E7ED0(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  _BYTE v6[4]; // [xsp+1Ch] [xbp-4h] BYREF
  _BYTE v5[4]; // [xsp+18h] [xbp-8h] BYREF
  int v4; // [xsp+Ch] [xbp-14h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 17648) + 120LL))(*(_QWORD *)(a2 + 17648));
  if ( (result & 1) != 0 )
  {
    v6[0] = 0;
    v5[0] = 0;
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, void *, _BYTE *, _BYTE *))(**(_QWORD **)(a2 + 17808) + 160LL))(
               *(_QWORD *)(a2 + 17808),
               a2 + 952,
               &unk_13610A8,
               v6,
               v5);
    if ( v6[0] != 0 )
    {
      v4 = 2;
      result = sub_3AC700(a2, &v4, a2 + 752, a2 + 754, 0, 0);
      if ( result != 0 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD, __int64, void *, __int64))(**(_QWORD **)(a2 + 17800) + 288LL))(
                   *(_QWORD *)(a2 + 17800),
                   a2,
                   &unk_13610A8,
                   result);
        if ( (int)result >= 1 )
          *(_DWORD *)(a2 + 744) |= 8u;
      }
    }
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

// NSt3__110__function6__funcIZN5storm9transport10Connection6engineEvE5$_139NS_9allocatorIS5_EEFvRS4_RKNS4_5EventEEEE, virtual slot 6
__int64 __fastcall sub_3E8740(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  _BYTE v6[4]; // [xsp+1Ch] [xbp-4h] BYREF
  _BYTE v5[4]; // [xsp+18h] [xbp-8h] BYREF
  int v4; // [xsp+Ch] [xbp-14h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 17648) + 120LL))(*(_QWORD *)(a2 + 17648));
  if ( (result & 1) != 0 )
  {
    v6[0] = 0;
    v5[0] = 0;
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, void *, _BYTE *, _BYTE *))(**(_QWORD **)(a2 + 17808) + 160LL))(
               *(_QWORD *)(a2 + 17808),
               a2 + 952,
               &unk_13610A8,
               v6,
               v5);
    if ( v6[0] != 0 )
    {
      v4 = 2;
      result = sub_3AC700(a2, &v4, a2 + 752, a2 + 754, 0, 0);
      if ( result != 0 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD, __int64, void *, __int64))(**(_QWORD **)(a2 + 17800) + 288LL))(
                   *(_QWORD *)(a2 + 17800),
                   a2,
                   &unk_13610A8,
                   result);
        if ( (int)result >= 1 )
          *(_DWORD *)(a2 + 744) |= 8u;
      }
    }
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

// NSt3__110__function6__funcIZN5storm9transport10Connection6engineEvE5$_159NS_9allocatorIS5_EEFvRS4_RKNS4_5EventEEEE, virtual slot 6
__int64 __fastcall sub_3E9730(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  _BYTE v6[4]; // [xsp+1Ch] [xbp-4h] BYREF
  _BYTE v5[4]; // [xsp+18h] [xbp-8h] BYREF
  int v4; // [xsp+Ch] [xbp-14h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 17648) + 120LL))(*(_QWORD *)(a2 + 17648));
  if ( (result & 1) != 0 )
  {
    v6[0] = 0;
    v5[0] = 0;
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, void *, _BYTE *, _BYTE *))(**(_QWORD **)(a2 + 17808) + 160LL))(
               *(_QWORD *)(a2 + 17808),
               a2 + 952,
               &unk_13610A8,
               v6,
               v5);
    if ( v6[0] != 0 )
    {
      v4 = 2;
      result = sub_3AC700(a2, &v4, a2 + 752, a2 + 754, 0, 0);
      if ( result != 0 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD, __int64, void *, __int64))(**(_QWORD **)(a2 + 17800) + 288LL))(
                   *(_QWORD *)(a2 + 17800),
                   a2,
                   &unk_13610A8,
                   result);
        if ( (int)result >= 1 )
          *(_DWORD *)(a2 + 744) |= 8u;
      }
    }
  }
  return result;
}

// NSt3__110__function6__funcIZN5storm9transport10Connection6engineEvE5$_165NS_9allocatorIS5_EEFvRS4_RKNS4_5EventEEEE, virtual slot 6
__int64 __fastcall sub_3E9C10(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  _BYTE v6[4]; // [xsp+1Ch] [xbp-4h] BYREF
  _BYTE v5[4]; // [xsp+18h] [xbp-8h] BYREF
  int v4; // [xsp+Ch] [xbp-14h] BYREF

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 17648) + 120LL))(*(_QWORD *)(a2 + 17648));
  if ( (result & 1) != 0 )
  {
    v6[0] = 0;
    v5[0] = 0;
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, void *, _BYTE *, _BYTE *))(**(_QWORD **)(a2 + 17808) + 160LL))(
               *(_QWORD *)(a2 + 17808),
               a2 + 952,
               &unk_13610A8,
               v6,
               v5);
    if ( v6[0] != 0 )
    {
      v4 = 2;
      result = sub_3AC700(a2, &v4, a2 + 752, a2 + 754, 0, 0);
      if ( result != 0 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD, __int64, void *, __int64))(**(_QWORD **)(a2 + 17800) + 288LL))(
                   *(_QWORD *)(a2 + 17800),
                   a2,
                   &unk_13610A8,
                   result);
        if ( (int)result >= 1 )
          *(_DWORD *)(a2 + 744) |= 8u;
      }
    }
  }
  return result;
}

// NSt3__110__function6__funcIZN5storm9transport10Connection6engineEvE5$_175NS_9allocatorIS5_EEFvRS4_RKNS4_5EventEEEE, virtual slot 6
__int64 __fastcall sub_3EA4C0(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  _BYTE v6[4]; // [xsp+1Ch] [xbp-4h] BYREF
  _BYTE v5[4]; // [xsp+18h] [xbp-8h] BYREF
  int v4; // [xsp+Ch] [xbp-14h] BYREF

  v6[0] = 0;
  v5[0] = 0;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, void *, _BYTE *, _BYTE *))(**(_QWORD **)(a2 + 17808) + 160LL))(
             *(_QWORD *)(a2 + 17808),
             a2 + 952,
             &unk_13610A8,
             v6,
             v5);
  if ( v6[0] != 0 )
  {
    v4 = 8;
    result = sub_3AC700(a2, &v4, a2 + 752, a2 + 754, *(unsigned int *)(a2 + 824), 0);
    if ( result != 0 )
      return (*(__int64 (__fastcall **)(_QWORD, __int64, void *, __int64))(**(_QWORD **)(a2 + 17800) + 288LL))(
               *(_QWORD *)(a2 + 17800),
               a2,
               &unk_13610A8,
               result);
  }
  return result;
}

// NSt3__110__function6__funcIZN5storm9transport10Connection6engineEvE5$_185NS_9allocatorIS5_EEFvRS4_RKNS4_5EventEEEE, virtual slot 6
__int64 __fastcall sub_3EAD80(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  _BYTE v6[4]; // [xsp+1Ch] [xbp-4h] BYREF
  _BYTE v5[4]; // [xsp+18h] [xbp-8h] BYREF
  int v4; // [xsp+Ch] [xbp-14h] BYREF

  v6[0] = 0;
  v5[0] = 0;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, void *, _BYTE *, _BYTE *))(**(_QWORD **)(a2 + 17808) + 160LL))(
             *(_QWORD *)(a2 + 17808),
             a2 + 952,
             &unk_13610A8,
             v6,
             v5);
  if ( v6[0] != 0 )
  {
    v4 = 8;
    result = sub_3AC700(a2, &v4, a2 + 752, a2 + 754, *(unsigned int *)(a2 + 824), 0);
    if ( result != 0 )
      return (*(__int64 (__fastcall **)(_QWORD, __int64, void *, __int64))(**(_QWORD **)(a2 + 17800) + 288LL))(
               *(_QWORD *)(a2 + 17800),
               a2,
               &unk_13610A8,
               result);
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

float __fastcall sub_3F57B0(__int64 a1, unsigned int a2)
{
  __int64 v2; // x9
  float result; // s0
  __int64 v4; // x8

  v2 = *(__int64 *)(a1 + 8);
  result = 0.0;
  if ( a2 < (unsigned __int64)((*(__int64 *)(a1 + 16) - v2) >> 3) )
  {
    v4 = *(__int64 *)(v2 + 8LL * a2);
    if ( v4 != 0 )
      return *(float *)(v4 + 8);
  }
  return result;
}

// N5storm4echo12AgentMessageE, virtual slot 8
__int64 __fastcall sub_3F66C0(__int64 a1)
{
  __int64 *v1; // x20
  __int64 *v2; // x21
  _QWORD *v4; // x0
  _QWORD *v5; // x0
  __int64 v6; // x8
  char v7; // w9
  __int64 v8; // x8
  __int64 v9; // x9

  v1 = *(__int64 **)(a1 + 80);
  v2 = *(__int64 **)(a1 + 88);
  for ( *(_BYTE *)(a1 + 136) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 104LL) == 1; v1 != v2; v1 += 4 )
  {
    v4 = (_QWORD *)v1[2];
    if ( v4 != nullptr )
      sub_4543A0(v4);
    v5 = (_QWORD *)v1[3];
    if ( v5 != nullptr )
      sub_4543A0(v5);
    v6 = *v1;
    if ( *v1 != 0 )
    {
      v7 = *(_BYTE *)(v6 + 34) & 0xF0 | 2;
      *(_WORD *)(v6 + 32) = 0;
      *(_BYTE *)(v6 + 34) = v7;
    }
    v8 = v1[1];
    if ( v8 != 0 )
    {
      v9 = *(_QWORD *)(v8 + 8);
      *(_WORD *)v8 = 0;
      *(_QWORD *)(v8 + 16) = v9;
    }
  }
  sub_4543A0((_QWORD *)(a1 + 144));
  return sub_3BE8B0(a1);
}

// N5storm4echo12AgentMessageE, virtual slot 4
__int64 __fastcall sub_3F6770(_QWORD *a1)
{
  __int64 v1; // x20
  __int64 v2; // x21
  _QWORD *v4; // x0
  _QWORD *v5; // x0
  __int64 *v6; // x20
  __int64 *i; // x21

  v1 = a1[10];
  v2 = a1[11];
  if ( v1 != v2 )
  {
    do
    {
      v4 = *(_QWORD **)(v1 + 16);
      if ( v4 != nullptr )
        sub_4543A0(v4);
      v5 = *(_QWORD **)(v1 + 24);
      if ( v5 != nullptr )
        sub_4543A0(v5);
      v1 += 32;
    }
    while ( v2 != v1 );
    v6 = (__int64 *)a1[10];
    for ( i = (__int64 *)a1[11]; v6 != i; v6 += 4 )
      sub_3FA2B0(v6);
  }
  sub_4543A0(a1 + 18);
  return sub_3BE990(a1);
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

// N5storm4echo27AgentObserverImplementationE, virtual slot 2
__int64 __fastcall sub_4013F0(__int64 result)
{
  unsigned __int8 *v1; // x8
  int v2; // w10

  v1 = (unsigned __int8 *)(result + 58);
  { __typeof__(*(v1)) e_ = (0); if ( __atomic_compare_exchange_n(v1, &e_, 1u, 0, 5, 5) ) { v2 = e_; return (*(__int64 (__fastcall **)(_QWORD, __int64, int, int))(**(_QWORD **)(result + 8) + 48LL))(
               *(_QWORD *)(result + 8),
               result - 704,
               0,
               0); } v2 = e_; }
  return result;
}

// N5storm4echo27AgentObserverImplementationE, virtual slot 3
__int64 __fastcall sub_401BA0(__int64 result)
{
  unsigned __int8 *v1; // x8
  int v2; // w10

  v1 = (unsigned __int8 *)(result + 57);
  { __typeof__(*(v1)) e_ = (0); if ( __atomic_compare_exchange_n(v1, &e_, 1u, 0, 5, 5) ) { v2 = e_; return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(result + 8) + 56LL))(
               *(_QWORD *)(result + 8),
               result - 704); } v2 = e_; }
  return result;
}

// N5storm4echo27AgentObserverImplementationE, virtual slot 4
__int64 __fastcall sub_401BE0(__int64 result)
{
  unsigned __int8 *v1; // x8
  int v2; // w10

  v1 = (unsigned __int8 *)(result + 59);
  { __typeof__(*(v1)) e_ = (0); if ( __atomic_compare_exchange_n(v1, &e_, 1u, 0, 5, 5) ) { v2 = e_; return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, int))(**(_QWORD **)(result + 8) + 48LL))(
               *(_QWORD *)(result + 8),
               result - 704,
               1,
               0); } v2 = e_; }
  return result;
}

// N5storm4echo27AgentObserverImplementationE, virtual slot 5
__int64 __fastcall sub_401C20(__int64 result)
{
  unsigned __int8 *v1; // x8
  int v2; // w10

  v1 = (unsigned __int8 *)(result + 57);
  { __typeof__(*(v1)) e_ = (0); if ( __atomic_compare_exchange_n(v1, &e_, 1u, 0, 5, 5) ) { v2 = e_; return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(result + 8) + 56LL))(
               *(_QWORD *)(result + 8),
               result - 704); } v2 = e_; }
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

// N5storm4echo6object8internal7inEvent21InvokeReplicaResolvedE, virtual slot 5
__int64 __fastcall sub_4300D0(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x8
  unsigned __int64 *v4; // x8
  unsigned __int64 v5; // x9

  result = sub_56C9F0(80, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(result + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = ((__int64 *)goff_18EFCE8 + 2);
  *(_DWORD *)(result + 32) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)result = ((char *)((__int64*)goff_18F5EC8) + 16);
  *(_QWORD *)(result + 40) = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(result + 48) = v3;
  if ( v3 != 0 )
  {
    v4 = (unsigned __int64 *)(v3 + 8);
    v5 = __atomic_fetch_add(v4, 1, 0);
  }
  *(_DWORD *)(result + 56) = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(result + 60) = *(_DWORD *)(a1 + 60);
  *(_QWORD *)(result + 64) = *(_QWORD *)(a1 + 64);
  *(_WORD *)(result + 72) = *(_WORD *)(a1 + 72);
  return result;
}

// N5storm4echo6object8internal7inEvent11InvokeReadyE, virtual slot 5
__int64 __fastcall sub_430570(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x8
  unsigned __int64 *v4; // x8
  unsigned __int64 v5; // x9

  result = sub_56C9F0(80, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(result + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = ((__int64 *)goff_18EFCE8 + 2);
  *(_DWORD *)(result + 32) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)result = ((char *)((__int64*)goff_18F58F8) + 16);
  *(_QWORD *)(result + 40) = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(result + 48) = v3;
  if ( v3 != 0 )
  {
    v4 = (unsigned __int64 *)(v3 + 8);
    v5 = __atomic_fetch_add(v4, 1, 0);
  }
  *(_DWORD *)(result + 56) = *(_DWORD *)(a1 + 56);
  *(_QWORD *)(result + 64) = *(_QWORD *)(a1 + 64);
  *(_WORD *)(result + 72) = *(_WORD *)(a1 + 72);
  return result;
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

// N5storm4echo30MulticastedReplicaAddedMessageE, virtual slot 5
__int64 __fastcall sub_431680(__int64 a1)
{
  __int64 v2; // x20
  __int64 *v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8
  __int64 *v6; // x8

  v2 = sub_56C9F0(112, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)((__int64*)goff_18F5830) + 24);
  v4 = ((__int64 *)((__int64*)goff_18EDE68) + 2);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18F5830) + 2);
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 32) = v4;
  sub_57F070(v2 + 40, a1 + 40);
  v5 = ((__int64 *)goff_18EDE70 + 24);
  *(_QWORD *)(v2 + 40) = ((__int64 *)goff_18EDE70 + 2);
  *(_QWORD *)(v2 + 48) = v5;
  *(_DWORD *)(v2 + 68) = *(_DWORD *)(a1 + 68);
  sub_57F1B0(v2 + 40, v2 + 8);
  *(_QWORD *)(v2 + 72) = ((__int64 *)((__int64*)goff_18F5838) + 2);
  sub_57F070(v2 + 80, a1 + 80);
  v6 = ((__int64 *)((__int64*)goff_18F5840) + 24);
  *(_QWORD *)(v2 + 80) = ((__int64 *)((__int64*)goff_18F5840) + 2);
  *(_QWORD *)(v2 + 88) = v6;
  *(_WORD *)(v2 + 106) = *(_WORD *)(a1 + 106);
  sub_57F1B0(v2 + 80, v2 + 8);
  return v2;
}

// N5storm4echo32MulticastedReplicaRemovedMessageE, virtual slot 5
__int64 __fastcall sub_431E50(__int64 a1)
{
  __int64 v2; // x20
  __int64 *v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8
  __int64 *v6; // x8

  v2 = sub_56C9F0(112, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)((__int64*)goff_18F5848) + 24);
  v4 = ((__int64 *)((__int64*)goff_18EDE68) + 2);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18F5848) + 2);
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 32) = v4;
  sub_57F070(v2 + 40, a1 + 40);
  v5 = ((__int64 *)goff_18EDE70 + 24);
  *(_QWORD *)(v2 + 40) = ((__int64 *)goff_18EDE70 + 2);
  *(_QWORD *)(v2 + 48) = v5;
  *(_DWORD *)(v2 + 68) = *(_DWORD *)(a1 + 68);
  sub_57F1B0(v2 + 40, v2 + 8);
  *(_QWORD *)(v2 + 72) = ((__int64 *)((__int64*)goff_18F5838) + 2);
  sub_57F070(v2 + 80, a1 + 80);
  v6 = ((__int64 *)((__int64*)goff_18F5840) + 24);
  *(_QWORD *)(v2 + 80) = ((__int64 *)((__int64*)goff_18F5840) + 2);
  *(_QWORD *)(v2 + 88) = v6;
  *(_WORD *)(v2 + 106) = *(_WORD *)(a1 + 106);
  sub_57F1B0(v2 + 80, v2 + 8);
  return v2;
}

// N5storm4echo33MulticastedSetRefreshRatioMessageE, virtual slot 5
__int64 __fastcall sub_432620(__int64 a1)
{
  __int64 v2; // x20
  __int64 *v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8
  __int64 *v6; // x8
  __int64 *v7; // x8

  v2 = sub_56C9F0(168, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)((__int64*)goff_18F5850) + 24);
  v4 = ((__int64 *)((__int64*)goff_18EDE68) + 2);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18F5850) + 2);
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 32) = v4;
  sub_57F070(v2 + 40, a1 + 40);
  v5 = ((__int64 *)goff_18EDE70 + 24);
  *(_QWORD *)(v2 + 40) = ((__int64 *)goff_18EDE70 + 2);
  *(_QWORD *)(v2 + 48) = v5;
  *(_DWORD *)(v2 + 68) = *(_DWORD *)(a1 + 68);
  sub_57F1B0(v2 + 40, v2 + 8);
  *(_QWORD *)(v2 + 72) = ((__int64 *)((__int64*)goff_18F5838) + 2);
  sub_57F070(v2 + 80, a1 + 80);
  v6 = ((__int64 *)((__int64*)goff_18F5840) + 24);
  *(_QWORD *)(v2 + 80) = ((__int64 *)((__int64*)goff_18F5840) + 2);
  *(_QWORD *)(v2 + 88) = v6;
  *(_WORD *)(v2 + 106) = *(_WORD *)(a1 + 106);
  sub_57F1B0(v2 + 80, v2 + 8);
  *(_QWORD *)(v2 + 112) = ((__int64 *)((__int64*)goff_18F5858) + 2);
  sub_57F070(v2 + 120, a1 + 120);
  v7 = ((__int64 *)((__int64*)goff_18F5860) + 24);
  *(_QWORD *)(v2 + 120) = ((__int64 *)((__int64*)goff_18F5860) + 2);
  *(_QWORD *)(v2 + 128) = v7;
  *(_DWORD *)(v2 + 148) = *(_DWORD *)(a1 + 148);
  *(_DWORD *)(v2 + 152) = *(_DWORD *)(a1 + 152);
  *(_QWORD *)(v2 + 160) = *(_QWORD *)(a1 + 160);
  sub_57F1B0(v2 + 120, v2 + 8);
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

// N5storm18DynamicTypeFactoryINS_4echo33MulticastedSetRefreshRatioMessageEEE, virtual slot 2
__int64 __fastcall sub_433330(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0
  __int64 *v5; // x9
  __int64 *v6; // x8
  __int64 *v7; // x8
  __int64 *v8; // x9
  __int64 *v9; // x8
  __int64 *v10; // x9
  __int64 *v11; // x8

  v3 = sub_56C9F0(168, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_57F050(v3, v4);
  v5 = ((__int64*)goff_18EDE68);
  v6 = ((__int64 *)((__int64*)goff_18F5850) + 24);
  *(_QWORD *)v3 = ((__int64 *)((__int64*)goff_18F5850) + 2);
  *(_QWORD *)(v3 + 8) = v6;
  *(_QWORD *)(v3 + 32) = v5 + 2;
  sub_57F050(v3 + 40, v3 + 8);
  v7 = goff_18EDE70;
  v8 = ((__int64*)goff_18F5838);
  *(_QWORD *)(v3 + 40) = v7 + 2;
  *(_QWORD *)(v3 + 48) = v7 + 24;
  *(_DWORD *)(v3 + 68) = 0;
  *(_QWORD *)(v3 + 72) = v8 + 2;
  sub_57F050(v3 + 80, v3 + 8);
  v9 = ((__int64*)goff_18F5840);
  v10 = ((__int64*)goff_18F5858);
  *(_QWORD *)(v3 + 80) = v9 + 2;
  *(_QWORD *)(v3 + 88) = v9 + 24;
  *(_WORD *)(v3 + 106) = 0;
  *(_QWORD *)(v3 + 112) = v10 + 2;
  sub_57F050(v3 + 120, v3 + 8);
  v11 = ((__int64*)goff_18F5860);
  *(_QWORD *)(v3 + 120) = v11 + 2;
  *(_QWORD *)(v3 + 128) = v11 + 24;
  *(_QWORD *)(v3 + 148) = 0;
  *(_QWORD *)(v3 + 160) = 0;
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo33MulticastedSetRefreshRatioMessageEEE, virtual slot 3
__int64 __fastcall sub_433440(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20
  __int64 *v6; // x9
  __int64 *v7; // x8
  __int64 *v8; // x8
  __int64 *v9; // x9
  __int64 *v10; // x8
  __int64 *v11; // x9
  __int64 *v12; // x8

  v5 = sub_56C9F0(168, 8, 1092624384, 0LL, a3, a4);
  sub_57F050(v5, a2);
  v6 = ((__int64*)goff_18EDE68);
  v7 = ((__int64 *)((__int64*)goff_18F5850) + 24);
  *(_QWORD *)v5 = ((__int64 *)((__int64*)goff_18F5850) + 2);
  *(_QWORD *)(v5 + 8) = v7;
  *(_QWORD *)(v5 + 32) = v6 + 2;
  sub_57F050(v5 + 40, v5 + 8);
  v8 = goff_18EDE70;
  v9 = ((__int64*)goff_18F5838);
  *(_QWORD *)(v5 + 40) = v8 + 2;
  *(_QWORD *)(v5 + 48) = v8 + 24;
  *(_DWORD *)(v5 + 68) = 0;
  *(_QWORD *)(v5 + 72) = v9 + 2;
  sub_57F050(v5 + 80, v5 + 8);
  v10 = ((__int64*)goff_18F5840);
  v11 = ((__int64*)goff_18F5858);
  *(_QWORD *)(v5 + 80) = v10 + 2;
  *(_QWORD *)(v5 + 88) = v10 + 24;
  *(_WORD *)(v5 + 106) = 0;
  *(_QWORD *)(v5 + 112) = v11 + 2;
  sub_57F050(v5 + 120, v5 + 8);
  v12 = ((__int64*)goff_18F5860);
  *(_QWORD *)(v5 + 120) = v12 + 2;
  *(_QWORD *)(v5 + 128) = v12 + 24;
  *(_QWORD *)(v5 + 148) = 0;
  *(_QWORD *)(v5 + 160) = 0;
  return v5;
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

// N5storm4echo34MulticastedUpdateDescriptorMessageE, virtual slot 5
__int64 __fastcall sub_434290(__int64 a1)
{
  __int64 v2; // x20
  __int64 *v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8

  v2 = sub_56C9F0(272, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)((__int64*)goff_18F5870) + 24);
  v4 = ((__int64 *)((__int64*)goff_18F5838) + 2);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18F5870) + 2);
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 32) = v4;
  sub_57F070(v2 + 40, a1 + 40);
  v5 = ((__int64 *)((__int64*)goff_18F5840) + 24);
  *(_QWORD *)(v2 + 40) = ((__int64 *)((__int64*)goff_18F5840) + 2);
  *(_QWORD *)(v2 + 48) = v5;
  *(_WORD *)(v2 + 66) = *(_WORD *)(a1 + 66);
  sub_57F1B0(v2 + 40, v2 + 8);
  *(_QWORD *)(v2 + 72) = ((char *)((__int64*)goff_18F48A0) + 16);
  sub_2A07D0(v2 + 80, a1 + 80);
  sub_57F1B0(v2 + 80, v2 + 8);
  return v2;
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

// N5storm4echo23GiveMasterRoleFailEventE, virtual slot 5
__int64 __fastcall sub_4358C0(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8

  v2 = sub_56C9F0(216, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((char *)((__int64*)goff_18F58A0) + 192);
  v4 = ((__int64 *)((__int64*)goff_18F5838) + 2);
  *(_QWORD *)v2 = ((char *)((__int64*)goff_18F58A0) + 16);
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 32) = v4;
  sub_57F070(v2 + 40, a1 + 40);
  v5 = ((__int64 *)((__int64*)goff_18F5840) + 24);
  *(_QWORD *)(v2 + 40) = ((__int64 *)((__int64*)goff_18F5840) + 2);
  *(_QWORD *)(v2 + 48) = v5;
  *(_WORD *)(v2 + 66) = *(_WORD *)(a1 + 66);
  sub_57F1B0(v2 + 40, v2 + 8);
  *(_QWORD *)(v2 + 72) = ((char *)((__int64*)goff_18F58A8) + 16);
  sub_584570(v2 + 80, a1 + 80);
  sub_57F1B0(v2 + 80, v2 + 8);
  return v2;
}

// N5storm4echo38MulticastedAcceptGiveMasterRoleMessageE, virtual slot 5
__int64 __fastcall sub_436220(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x8
  __int64 *v4; // x23
  __int64 *v5; // x24
  __int64 *v6; // x25

  v2 = sub_56C9F0(112, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((char *)((__int64*)goff_18F58D0) + 192);
  v4 = ((__int64 *)((__int64*)goff_18F5838) + 2);
  *(_QWORD *)v2 = ((char *)((__int64*)goff_18F58D0) + 16);
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 32) = v4;
  sub_57F070(v2 + 40, a1 + 40);
  v5 = ((__int64 *)((__int64*)goff_18F5840) + 2);
  v6 = ((__int64 *)((__int64*)goff_18F5840) + 24);
  *(_QWORD *)(v2 + 40) = ((__int64 *)((__int64*)goff_18F5840) + 2);
  *(_QWORD *)(v2 + 48) = v6;
  *(_WORD *)(v2 + 66) = *(_WORD *)(a1 + 66);
  sub_57F1B0(v2 + 40, v2 + 8);
  *(_QWORD *)(v2 + 72) = v4;
  sub_57F070(v2 + 80, a1 + 80);
  *(_QWORD *)(v2 + 80) = v5;
  *(_QWORD *)(v2 + 88) = v6;
  *(_WORD *)(v2 + 106) = *(_WORD *)(a1 + 106);
  sub_57F1B0(v2 + 80, v2 + 8);
  return v2;
}

// N5storm4echo41MulticastedAcceptReplaceGoneMasterMessageE, virtual slot 5
__int64 __fastcall sub_4369D0(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8

  v2 = sub_56C9F0(72, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((char *)((__int64*)goff_18F58D8) + 192);
  v4 = ((__int64 *)((__int64*)goff_18F5838) + 2);
  *(_QWORD *)v2 = ((char *)((__int64*)goff_18F58D8) + 16);
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 32) = v4;
  sub_57F070(v2 + 40, a1 + 40);
  v5 = ((__int64 *)((__int64*)goff_18F5840) + 24);
  *(_QWORD *)(v2 + 40) = ((__int64 *)((__int64*)goff_18F5840) + 2);
  *(_QWORD *)(v2 + 48) = v5;
  *(_WORD *)(v2 + 66) = *(_WORD *)(a1 + 66);
  sub_57F1B0(v2 + 40, v2 + 8);
  return v2;
}

// N5storm18DynamicTypeFactoryINS_4echo41MulticastedAcceptReplaceGoneMasterMessageEEE, virtual slot 2
__int64 __fastcall sub_436D30(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0
  __int64 *v5; // x9
  __int64 v6; // x8
  __int64 *v7; // x8

  v3 = sub_56C9F0(72, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_57F050(v3, v4);
  v5 = ((__int64*)goff_18F5838);
  v6 = ((char *)((__int64*)goff_18F58D8) + 192);
  *(_QWORD *)v3 = ((char *)((__int64*)goff_18F58D8) + 16);
  *(_QWORD *)(v3 + 8) = v6;
  *(_QWORD *)(v3 + 32) = v5 + 2;
  sub_57F050(v3 + 40, v3 + 8);
  v7 = ((__int64*)goff_18F5840);
  *(_WORD *)(v3 + 66) = 0;
  *(_QWORD *)(v3 + 40) = v7 + 2;
  *(_QWORD *)(v3 + 48) = v7 + 24;
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo41MulticastedAcceptReplaceGoneMasterMessageEEE, virtual slot 3
__int64 __fastcall sub_436DD0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20
  __int64 *v6; // x9
  __int64 v7; // x8
  __int64 *v8; // x8

  v5 = sub_56C9F0(72, 8, 1092624384, 0LL, a3, a4);
  sub_57F050(v5, a2);
  v6 = ((__int64*)goff_18F5838);
  v7 = ((char *)((__int64*)goff_18F58D8) + 192);
  *(_QWORD *)v5 = ((char *)((__int64*)goff_18F58D8) + 16);
  *(_QWORD *)(v5 + 8) = v7;
  *(_QWORD *)(v5 + 32) = v6 + 2;
  sub_57F050(v5 + 40, v5 + 8);
  v8 = ((__int64*)goff_18F5840);
  *(_WORD *)(v5 + 66) = 0;
  *(_QWORD *)(v5 + 40) = v8 + 2;
  *(_QWORD *)(v5 + 48) = v8 + 24;
  return v5;
}

// N5storm4echo41MulticastedRefuseReplaceGoneMasterMessageE, virtual slot 5
__int64 __fastcall sub_437060(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8

  v2 = sub_56C9F0(72, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((char *)((__int64*)goff_18F58E0) + 192);
  v4 = ((__int64 *)((__int64*)goff_18F5838) + 2);
  *(_QWORD *)v2 = ((char *)((__int64*)goff_18F58E0) + 16);
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 32) = v4;
  sub_57F070(v2 + 40, a1 + 40);
  v5 = ((__int64 *)((__int64*)goff_18F5840) + 24);
  *(_QWORD *)(v2 + 40) = ((__int64 *)((__int64*)goff_18F5840) + 2);
  *(_QWORD *)(v2 + 48) = v5;
  *(_WORD *)(v2 + 66) = *(_WORD *)(a1 + 66);
  sub_57F1B0(v2 + 40, v2 + 8);
  return v2;
}

// N5storm18DynamicTypeFactoryINS_4echo41MulticastedRefuseReplaceGoneMasterMessageEEE, virtual slot 2
__int64 __fastcall sub_4373C0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0
  __int64 *v5; // x9
  __int64 v6; // x8
  __int64 *v7; // x8

  v3 = sub_56C9F0(72, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_57F050(v3, v4);
  v5 = ((__int64*)goff_18F5838);
  v6 = ((char *)((__int64*)goff_18F58E0) + 192);
  *(_QWORD *)v3 = ((char *)((__int64*)goff_18F58E0) + 16);
  *(_QWORD *)(v3 + 8) = v6;
  *(_QWORD *)(v3 + 32) = v5 + 2;
  sub_57F050(v3 + 40, v3 + 8);
  v7 = ((__int64*)goff_18F5840);
  *(_WORD *)(v3 + 66) = 0;
  *(_QWORD *)(v3 + 40) = v7 + 2;
  *(_QWORD *)(v3 + 48) = v7 + 24;
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo41MulticastedRefuseReplaceGoneMasterMessageEEE, virtual slot 3
__int64 __fastcall sub_437460(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20
  __int64 *v6; // x9
  __int64 v7; // x8
  __int64 *v8; // x8

  v5 = sub_56C9F0(72, 8, 1092624384, 0LL, a3, a4);
  sub_57F050(v5, a2);
  v6 = ((__int64*)goff_18F5838);
  v7 = ((char *)((__int64*)goff_18F58E0) + 192);
  *(_QWORD *)v5 = ((char *)((__int64*)goff_18F58E0) + 16);
  *(_QWORD *)(v5 + 8) = v7;
  *(_QWORD *)(v5 + 32) = v6 + 2;
  sub_57F050(v5 + 40, v5 + 8);
  v8 = ((__int64*)goff_18F5840);
  *(_WORD *)(v5 + 66) = 0;
  *(_QWORD *)(v5 + 40) = v8 + 2;
  *(_QWORD *)(v5 + 48) = v8 + 24;
  return v5;
}

// N5storm4echo35MulticastedReplaceGoneMasterMessageE, virtual slot 5
__int64 __fastcall sub_4376F0(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8

  v2 = sub_56C9F0(72, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((char *)((__int64*)goff_18F58B8) + 192);
  v4 = ((__int64 *)((__int64*)goff_18F5838) + 2);
  *(_QWORD *)v2 = ((char *)((__int64*)goff_18F58B8) + 16);
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 32) = v4;
  sub_57F070(v2 + 40, a1 + 40);
  v5 = ((__int64 *)((__int64*)goff_18F5840) + 24);
  *(_QWORD *)(v2 + 40) = ((__int64 *)((__int64*)goff_18F5840) + 2);
  *(_QWORD *)(v2 + 48) = v5;
  *(_WORD *)(v2 + 66) = *(_WORD *)(a1 + 66);
  sub_57F1B0(v2 + 40, v2 + 8);
  return v2;
}

// N5storm18DynamicTypeFactoryINS_4echo35MulticastedReplaceGoneMasterMessageEEE, virtual slot 2
__int64 __fastcall sub_437A50(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0
  __int64 *v5; // x9
  __int64 v6; // x8
  __int64 *v7; // x8

  v3 = sub_56C9F0(72, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_57F050(v3, v4);
  v5 = ((__int64*)goff_18F5838);
  v6 = ((char *)((__int64*)goff_18F58B8) + 192);
  *(_QWORD *)v3 = ((char *)((__int64*)goff_18F58B8) + 16);
  *(_QWORD *)(v3 + 8) = v6;
  *(_QWORD *)(v3 + 32) = v5 + 2;
  sub_57F050(v3 + 40, v3 + 8);
  v7 = ((__int64*)goff_18F5840);
  *(_WORD *)(v3 + 66) = 0;
  *(_QWORD *)(v3 + 40) = v7 + 2;
  *(_QWORD *)(v3 + 48) = v7 + 24;
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo35MulticastedReplaceGoneMasterMessageEEE, virtual slot 3
__int64 __fastcall sub_437AF0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20
  __int64 *v6; // x9
  __int64 v7; // x8
  __int64 *v8; // x8

  v5 = sub_56C9F0(72, 8, 1092624384, 0LL, a3, a4);
  sub_57F050(v5, a2);
  v6 = ((__int64*)goff_18F5838);
  v7 = ((char *)((__int64*)goff_18F58B8) + 192);
  *(_QWORD *)v5 = ((char *)((__int64*)goff_18F58B8) + 16);
  *(_QWORD *)(v5 + 8) = v7;
  *(_QWORD *)(v5 + 32) = v6 + 2;
  sub_57F050(v5 + 40, v5 + 8);
  v8 = ((__int64*)goff_18F5840);
  *(_WORD *)(v5 + 66) = 0;
  *(_QWORD *)(v5 + 40) = v8 + 2;
  *(_QWORD *)(v5 + 48) = v8 + 24;
  return v5;
}

// N5storm4echo27MulticastedReplicaGoneEventE, virtual slot 5
__int64 __fastcall sub_437D80(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8
  __int64 *v6; // x8

  v2 = sub_56C9F0(112, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((char *)((__int64*)goff_18F58E8) + 192);
  v4 = ((__int64 *)((__int64*)goff_18EDE68) + 2);
  *(_QWORD *)v2 = ((char *)((__int64*)goff_18F58E8) + 16);
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 32) = v4;
  sub_57F070(v2 + 40, a1 + 40);
  v5 = ((__int64 *)goff_18EDE70 + 24);
  *(_QWORD *)(v2 + 40) = ((__int64 *)goff_18EDE70 + 2);
  *(_QWORD *)(v2 + 48) = v5;
  *(_DWORD *)(v2 + 68) = *(_DWORD *)(a1 + 68);
  sub_57F1B0(v2 + 40, v2 + 8);
  *(_QWORD *)(v2 + 72) = ((__int64 *)((__int64*)goff_18F5838) + 2);
  sub_57F070(v2 + 80, a1 + 80);
  v6 = ((__int64 *)((__int64*)goff_18F5840) + 24);
  *(_QWORD *)(v2 + 80) = ((__int64 *)((__int64*)goff_18F5840) + 2);
  *(_QWORD *)(v2 + 88) = v6;
  *(_WORD *)(v2 + 106) = *(_WORD *)(a1 + 106);
  sub_57F1B0(v2 + 80, v2 + 8);
  return v2;
}

// N5storm4echo31MulticastedElectedMasterMessageE, virtual slot 5
__int64 __fastcall sub_438550(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8

  v2 = sub_56C9F0(72, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((char *)((__int64*)goff_18F58C0) + 192);
  v4 = ((__int64 *)((__int64*)goff_18F5838) + 2);
  *(_QWORD *)v2 = ((char *)((__int64*)goff_18F58C0) + 16);
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 32) = v4;
  sub_57F070(v2 + 40, a1 + 40);
  v5 = ((__int64 *)((__int64*)goff_18F5840) + 24);
  *(_QWORD *)(v2 + 40) = ((__int64 *)((__int64*)goff_18F5840) + 2);
  *(_QWORD *)(v2 + 48) = v5;
  *(_WORD *)(v2 + 66) = *(_WORD *)(a1 + 66);
  sub_57F1B0(v2 + 40, v2 + 8);
  return v2;
}

// N5storm18DynamicTypeFactoryINS_4echo31MulticastedElectedMasterMessageEEE, virtual slot 2
__int64 __fastcall sub_4388B0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0
  __int64 *v5; // x9
  __int64 v6; // x8
  __int64 *v7; // x8

  v3 = sub_56C9F0(72, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_57F050(v3, v4);
  v5 = ((__int64*)goff_18F5838);
  v6 = ((char *)((__int64*)goff_18F58C0) + 192);
  *(_QWORD *)v3 = ((char *)((__int64*)goff_18F58C0) + 16);
  *(_QWORD *)(v3 + 8) = v6;
  *(_QWORD *)(v3 + 32) = v5 + 2;
  sub_57F050(v3 + 40, v3 + 8);
  v7 = ((__int64*)goff_18F5840);
  *(_WORD *)(v3 + 66) = 0;
  *(_QWORD *)(v3 + 40) = v7 + 2;
  *(_QWORD *)(v3 + 48) = v7 + 24;
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo31MulticastedElectedMasterMessageEEE, virtual slot 3
__int64 __fastcall sub_438950(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20
  __int64 *v6; // x9
  __int64 v7; // x8
  __int64 *v8; // x8

  v5 = sub_56C9F0(72, 8, 1092624384, 0LL, a3, a4);
  sub_57F050(v5, a2);
  v6 = ((__int64*)goff_18F5838);
  v7 = ((char *)((__int64*)goff_18F58C0) + 192);
  *(_QWORD *)v5 = ((char *)((__int64*)goff_18F58C0) + 16);
  *(_QWORD *)(v5 + 8) = v7;
  *(_QWORD *)(v5 + 32) = v6 + 2;
  sub_57F050(v5 + 40, v5 + 8);
  v8 = ((__int64*)goff_18F5840);
  *(_WORD *)(v5 + 66) = 0;
  *(_QWORD *)(v5 + 40) = v8 + 2;
  *(_QWORD *)(v5 + 48) = v8 + 24;
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

// N5storm4echo6object7outFunc17MultiWriteMementoE, virtual slot 5
__int64 __fastcall sub_43B110(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x9
  __int64 v4; // x8
  __int64 v5; // x9

  result = sub_56C9F0(32, 8, 1092624384, 0LL, &unk_1326E41, 0);
  v3 = goff_18F5778;
  *(_QWORD *)result = ((__int64 *)goff_18EFA10 + 2);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)result = v3 + 2;
  v5 = ((__int64*)goff_18F5968);
  *(_QWORD *)(result + 16) = v4;
  *(_QWORD *)(result + 24) = *(_QWORD *)(a1 + 24);
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

// N5storm4echo17ReplicaReadyEventE, virtual slot 5
__int64 __fastcall sub_43EAC0(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8

  v2 = sub_56C9F0(72, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((char *)((__int64*)goff_18F59D8) + 192);
  v4 = ((__int64 *)((__int64*)goff_18F5838) + 2);
  *(_QWORD *)v2 = ((char *)((__int64*)goff_18F59D8) + 16);
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 32) = v4;
  sub_57F070(v2 + 40, a1 + 40);
  v5 = ((__int64 *)((__int64*)goff_18F5840) + 24);
  *(_QWORD *)(v2 + 40) = ((__int64 *)((__int64*)goff_18F5840) + 2);
  *(_QWORD *)(v2 + 48) = v5;
  *(_WORD *)(v2 + 66) = *(_WORD *)(a1 + 66);
  sub_57F1B0(v2 + 40, v2 + 8);
  return v2;
}

// N5storm18DynamicTypeFactoryINS_4echo17ReplicaReadyEventEEE, virtual slot 2
__int64 __fastcall sub_43EE20(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0
  __int64 *v5; // x9
  __int64 v6; // x8
  __int64 *v7; // x8

  v3 = sub_56C9F0(72, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_57F050(v3, v4);
  v5 = ((__int64*)goff_18F5838);
  v6 = ((char *)((__int64*)goff_18F59D8) + 192);
  *(_QWORD *)v3 = ((char *)((__int64*)goff_18F59D8) + 16);
  *(_QWORD *)(v3 + 8) = v6;
  *(_QWORD *)(v3 + 32) = v5 + 2;
  sub_57F050(v3 + 40, v3 + 8);
  v7 = ((__int64*)goff_18F5840);
  *(_WORD *)(v3 + 66) = 0;
  *(_QWORD *)(v3 + 40) = v7 + 2;
  *(_QWORD *)(v3 + 48) = v7 + 24;
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo17ReplicaReadyEventEEE, virtual slot 3
__int64 __fastcall sub_43EEC0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20
  __int64 *v6; // x9
  __int64 v7; // x8
  __int64 *v8; // x8

  v5 = sub_56C9F0(72, 8, 1092624384, 0LL, a3, a4);
  sub_57F050(v5, a2);
  v6 = ((__int64*)goff_18F5838);
  v7 = ((char *)((__int64*)goff_18F59D8) + 192);
  *(_QWORD *)v5 = ((char *)((__int64*)goff_18F59D8) + 16);
  *(_QWORD *)(v5 + 8) = v7;
  *(_QWORD *)(v5 + 32) = v6 + 2;
  sub_57F050(v5 + 40, v5 + 8);
  v8 = ((__int64*)goff_18F5840);
  *(_WORD *)(v5 + 66) = 0;
  *(_QWORD *)(v5 + 40) = v8 + 2;
  *(_QWORD *)(v5 + 48) = v8 + 24;
  return v5;
}

// N5storm4echo33MulticastedClientMasterReadyEventE, virtual slot 5
__int64 __fastcall sub_43F150(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8

  v2 = sub_56C9F0(72, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((char *)((__int64*)goff_18F59E0) + 192);
  v4 = ((__int64 *)((__int64*)goff_18F5838) + 2);
  *(_QWORD *)v2 = ((char *)((__int64*)goff_18F59E0) + 16);
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 32) = v4;
  sub_57F070(v2 + 40, a1 + 40);
  v5 = ((__int64 *)((__int64*)goff_18F5840) + 24);
  *(_QWORD *)(v2 + 40) = ((__int64 *)((__int64*)goff_18F5840) + 2);
  *(_QWORD *)(v2 + 48) = v5;
  *(_WORD *)(v2 + 66) = *(_WORD *)(a1 + 66);
  sub_57F1B0(v2 + 40, v2 + 8);
  return v2;
}

// N5storm18DynamicTypeFactoryINS_4echo33MulticastedClientMasterReadyEventEEE, virtual slot 2
__int64 __fastcall sub_43F4B0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0
  __int64 *v5; // x9
  __int64 v6; // x8
  __int64 *v7; // x8

  v3 = sub_56C9F0(72, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_57F050(v3, v4);
  v5 = ((__int64*)goff_18F5838);
  v6 = ((char *)((__int64*)goff_18F59E0) + 192);
  *(_QWORD *)v3 = ((char *)((__int64*)goff_18F59E0) + 16);
  *(_QWORD *)(v3 + 8) = v6;
  *(_QWORD *)(v3 + 32) = v5 + 2;
  sub_57F050(v3 + 40, v3 + 8);
  v7 = ((__int64*)goff_18F5840);
  *(_WORD *)(v3 + 66) = 0;
  *(_QWORD *)(v3 + 40) = v7 + 2;
  *(_QWORD *)(v3 + 48) = v7 + 24;
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo33MulticastedClientMasterReadyEventEEE, virtual slot 3
__int64 __fastcall sub_43F550(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20
  __int64 *v6; // x9
  __int64 v7; // x8
  __int64 *v8; // x8

  v5 = sub_56C9F0(72, 8, 1092624384, 0LL, a3, a4);
  sub_57F050(v5, a2);
  v6 = ((__int64*)goff_18F5838);
  v7 = ((char *)((__int64*)goff_18F59E0) + 192);
  *(_QWORD *)v5 = ((char *)((__int64*)goff_18F59E0) + 16);
  *(_QWORD *)(v5 + 8) = v7;
  *(_QWORD *)(v5 + 32) = v6 + 2;
  sub_57F050(v5 + 40, v5 + 8);
  v8 = ((__int64*)goff_18F5840);
  *(_WORD *)(v5 + 66) = 0;
  *(_QWORD *)(v5 + 40) = v8 + 2;
  *(_QWORD *)(v5 + 48) = v8 + 24;
  return v5;
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

// N5storm4echo19ObjectBundleMessageE, virtual slot 5
__int64 __fastcall sub_446A70(__int64 a1)
{
  __int64 v2; // x20
  __int64 *v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8

  v2 = sub_56C9F0(144, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)((__int64*)goff_18F5BC8) + 24);
  v4 = ((__int64 *)((__int64*)goff_18EDE68) + 2);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18F5BC8) + 2);
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 32) = v4;
  sub_57F070(v2 + 40, a1 + 40);
  v5 = ((__int64 *)goff_18EDE70 + 24);
  *(_QWORD *)(v2 + 40) = ((__int64 *)goff_18EDE70 + 2);
  *(_QWORD *)(v2 + 48) = v5;
  *(_DWORD *)(v2 + 68) = *(_DWORD *)(a1 + 68);
  sub_57F1B0(v2 + 40, v2 + 8);
  *(_QWORD *)(v2 + 72) = ((__int64 *)((__int64*)goff_18F5A80) + 2);
  sub_583700(v2 + 80, a1 + 80);
  sub_57F1B0(v2 + 80, v2 + 8);
  return v2;
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

// N5storm15NetPropertyDataINS_4echo19ObjectMigrationModeENS1_35NetPropertyObjectMigrationModeTraitEEE, virtual slot 5
__int64 __fastcall sub_448100(__int64 a1)
{
  __int64 v2; // x20
  __int64 *v3; // x8

  v2 = sub_56C9F0(48, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)goff_18F6830 + 24);
  *(_QWORD *)v2 = ((__int64 *)goff_18F6830 + 2);
  *(_QWORD *)(v2 + 8) = v3;
  *(_DWORD *)(v2 + 28) = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(v2 + 36) = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(v2 + 40) = *(_DWORD *)(a1 + 40);
  *(_WORD *)(v2 + 44) = *(_WORD *)(a1 + 44);
  return v2;
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

// N5storm4echo18DeleteReplicaEventE, virtual slot 5
__int64 __fastcall sub_4491A0(__int64 a1)
{
  __int64 v2; // x20
  __int64 *v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8

  v2 = sub_56C9F0(72, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)goff_18F5C00 + 24);
  v4 = ((__int64 *)((__int64*)goff_18F5838) + 2);
  *(_QWORD *)v2 = ((__int64 *)goff_18F5C00 + 2);
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 32) = v4;
  sub_57F070(v2 + 40, a1 + 40);
  v5 = ((__int64 *)((__int64*)goff_18F5840) + 24);
  *(_QWORD *)(v2 + 40) = ((__int64 *)((__int64*)goff_18F5840) + 2);
  *(_QWORD *)(v2 + 48) = v5;
  *(_WORD *)(v2 + 66) = *(_WORD *)(a1 + 66);
  sub_57F1B0(v2 + 40, v2 + 8);
  return v2;
}

// N5storm18DynamicTypeFactoryINS_4echo18DeleteReplicaEventEEE, virtual slot 2
__int64 __fastcall sub_449320(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0
  __int64 *v5; // x9
  __int64 *v6; // x8
  __int64 *v7; // x8

  v3 = sub_56C9F0(72, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_57F050(v3, v4);
  v5 = ((__int64*)goff_18F5838);
  v6 = ((__int64 *)goff_18F5C00 + 24);
  *(_QWORD *)v3 = ((__int64 *)goff_18F5C00 + 2);
  *(_QWORD *)(v3 + 8) = v6;
  *(_QWORD *)(v3 + 32) = v5 + 2;
  sub_57F050(v3 + 40, v3 + 8);
  v7 = ((__int64*)goff_18F5840);
  *(_WORD *)(v3 + 66) = 0;
  *(_QWORD *)(v3 + 40) = v7 + 2;
  *(_QWORD *)(v3 + 48) = v7 + 24;
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo18DeleteReplicaEventEEE, virtual slot 3
__int64 __fastcall sub_4493C0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20
  __int64 *v6; // x9
  __int64 *v7; // x8
  __int64 *v8; // x8

  v5 = sub_56C9F0(72, 8, 1092624384, 0LL, a3, a4);
  sub_57F050(v5, a2);
  v6 = ((__int64*)goff_18F5838);
  v7 = ((__int64 *)goff_18F5C00 + 24);
  *(_QWORD *)v5 = ((__int64 *)goff_18F5C00 + 2);
  *(_QWORD *)(v5 + 8) = v7;
  *(_QWORD *)(v5 + 32) = v6 + 2;
  sub_57F050(v5 + 40, v5 + 8);
  v8 = ((__int64*)goff_18F5840);
  *(_WORD *)(v5 + 66) = 0;
  *(_QWORD *)(v5 + 40) = v8 + 2;
  *(_QWORD *)(v5 + 48) = v8 + 24;
  return v5;
}

// N5storm4echo18MasterDeletedEventE, virtual slot 5
__int64 __fastcall sub_449740(__int64 a1)
{
  __int64 v2; // x20
  __int64 *v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8
  __int64 *v6; // x23
  __int64 *v7; // x24
  __int64 *v8; // x25

  v2 = sub_56C9F0(152, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)((__int64*)goff_18F5A90) + 24);
  v4 = ((__int64 *)((__int64*)goff_18F5838) + 2);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18F5A90) + 2);
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 32) = v4;
  sub_57F070(v2 + 40, a1 + 40);
  v5 = ((__int64 *)((__int64*)goff_18F5840) + 24);
  *(_QWORD *)(v2 + 40) = ((__int64 *)((__int64*)goff_18F5840) + 2);
  *(_QWORD *)(v2 + 48) = v5;
  *(_WORD *)(v2 + 66) = *(_WORD *)(a1 + 66);
  sub_57F1B0(v2 + 40, v2 + 8);
  v6 = ((__int64 *)((__int64*)goff_18EDE58) + 2);
  *(_QWORD *)(v2 + 72) = ((__int64 *)((__int64*)goff_18EDE58) + 2);
  sub_57F070(v2 + 80, a1 + 80);
  v7 = ((__int64 *)((__int64*)goff_18EDE60) + 2);
  v8 = ((__int64 *)((__int64*)goff_18EDE60) + 24);
  *(_QWORD *)(v2 + 80) = ((__int64 *)((__int64*)goff_18EDE60) + 2);
  *(_QWORD *)(v2 + 88) = v8;
  *(_BYTE *)(v2 + 106) = *(_BYTE *)(a1 + 106);
  sub_57F1B0(v2 + 80, v2 + 8);
  *(_QWORD *)(v2 + 112) = v6;
  sub_57F070(v2 + 120, a1 + 120);
  *(_QWORD *)(v2 + 120) = v7;
  *(_QWORD *)(v2 + 128) = v8;
  *(_BYTE *)(v2 + 146) = *(_BYTE *)(a1 + 146);
  sub_57F1B0(v2 + 120, v2 + 8);
  return v2;
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

// N5storm4echo22MementoActivationEventE, virtual slot 5
__int64 __fastcall sub_44A630(__int64 a1)
{
  __int64 v2; // x20
  __int64 *v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8
  __int64 *v6; // x8

  v2 = sub_56C9F0(112, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)goff_18F5C38 + 24);
  v4 = ((__int64 *)((__int64*)goff_18F5838) + 2);
  *(_QWORD *)v2 = ((__int64 *)goff_18F5C38 + 2);
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 32) = v4;
  sub_57F070(v2 + 40, a1 + 40);
  v5 = ((__int64 *)((__int64*)goff_18F5840) + 24);
  *(_QWORD *)(v2 + 40) = ((__int64 *)((__int64*)goff_18F5840) + 2);
  *(_QWORD *)(v2 + 48) = v5;
  *(_WORD *)(v2 + 66) = *(_WORD *)(a1 + 66);
  sub_57F1B0(v2 + 40, v2 + 8);
  *(_QWORD *)(v2 + 72) = ((__int64 *)((__int64*)goff_18EDE68) + 2);
  sub_57F070(v2 + 80, a1 + 80);
  v6 = ((__int64 *)goff_18EDE70 + 24);
  *(_QWORD *)(v2 + 80) = ((__int64 *)goff_18EDE70 + 2);
  *(_QWORD *)(v2 + 88) = v6;
  *(_DWORD *)(v2 + 108) = *(_DWORD *)(a1 + 108);
  sub_57F1B0(v2 + 80, v2 + 8);
  return v2;
}

// N5storm4echo24MasterDeleteReplicaEventE, virtual slot 5
__int64 __fastcall sub_44AD10(__int64 a1)
{
  __int64 v2; // x20
  __int64 *v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8

  v2 = sub_56C9F0(72, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)goff_18F5C50 + 24);
  v4 = ((__int64 *)((__int64*)goff_18F5838) + 2);
  *(_QWORD *)v2 = ((__int64 *)goff_18F5C50 + 2);
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 32) = v4;
  sub_57F070(v2 + 40, a1 + 40);
  v5 = ((__int64 *)((__int64*)goff_18F5840) + 24);
  *(_QWORD *)(v2 + 40) = ((__int64 *)((__int64*)goff_18F5840) + 2);
  *(_QWORD *)(v2 + 48) = v5;
  *(_WORD *)(v2 + 66) = *(_WORD *)(a1 + 66);
  sub_57F1B0(v2 + 40, v2 + 8);
  return v2;
}

// N5storm18DynamicTypeFactoryINS_4echo24MasterDeleteReplicaEventEEE, virtual slot 2
__int64 __fastcall sub_44AE90(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0
  __int64 *v5; // x9
  __int64 *v6; // x8
  __int64 *v7; // x8

  v3 = sub_56C9F0(72, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_57F050(v3, v4);
  v5 = ((__int64*)goff_18F5838);
  v6 = ((__int64 *)goff_18F5C50 + 24);
  *(_QWORD *)v3 = ((__int64 *)goff_18F5C50 + 2);
  *(_QWORD *)(v3 + 8) = v6;
  *(_QWORD *)(v3 + 32) = v5 + 2;
  sub_57F050(v3 + 40, v3 + 8);
  v7 = ((__int64*)goff_18F5840);
  *(_WORD *)(v3 + 66) = 0;
  *(_QWORD *)(v3 + 40) = v7 + 2;
  *(_QWORD *)(v3 + 48) = v7 + 24;
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo24MasterDeleteReplicaEventEEE, virtual slot 3
__int64 __fastcall sub_44AF30(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20
  __int64 *v6; // x9
  __int64 *v7; // x8
  __int64 *v8; // x8

  v5 = sub_56C9F0(72, 8, 1092624384, 0LL, a3, a4);
  sub_57F050(v5, a2);
  v6 = ((__int64*)goff_18F5838);
  v7 = ((__int64 *)goff_18F5C50 + 24);
  *(_QWORD *)v5 = ((__int64 *)goff_18F5C50 + 2);
  *(_QWORD *)(v5 + 8) = v7;
  *(_QWORD *)(v5 + 32) = v6 + 2;
  sub_57F050(v5 + 40, v5 + 8);
  v8 = ((__int64*)goff_18F5840);
  *(_WORD *)(v5 + 66) = 0;
  *(_QWORD *)(v5 + 40) = v8 + 2;
  *(_QWORD *)(v5 + 48) = v8 + 24;
  return v5;
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

__int64 __fastcall sub_44B740(__int64 a1, __int64 a2)
{
  __int64 *v4; // x8
  __int64 *v5; // x9
  __int64 *v6; // x8
  __int64 *v7; // x23
  __int64 *v8; // x24
  __int64 *v9; // x25

  sub_57F070(a1, a2);
  v4 = ((__int64 *)((__int64*)goff_18F5AA0) + 24);
  v5 = ((__int64 *)((__int64*)goff_18EE438) + 2);
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18F5AA0) + 2);
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)(a1 + 32) = v5;
  sub_57F070(a1 + 40, a2 + 40);
  v6 = ((__int64 *)((__int64*)goff_18EE440) + 24);
  *(_QWORD *)(a1 + 40) = ((__int64 *)((__int64*)goff_18EE440) + 2);
  *(_QWORD *)(a1 + 48) = v6;
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 72);
  sub_57F1B0(a1 + 40, a1 + 8);
  v7 = ((__int64 *)((__int64*)goff_18F5838) + 2);
  *(_QWORD *)(a1 + 80) = ((__int64 *)((__int64*)goff_18F5838) + 2);
  sub_57F070(a1 + 88, a2 + 88);
  v8 = ((__int64 *)((__int64*)goff_18F5840) + 2);
  v9 = ((__int64 *)((__int64*)goff_18F5840) + 24);
  *(_QWORD *)(a1 + 88) = ((__int64 *)((__int64*)goff_18F5840) + 2);
  *(_QWORD *)(a1 + 96) = v9;
  *(_WORD *)(a1 + 114) = *(_WORD *)(a2 + 114);
  sub_57F1B0(a1 + 88, a1 + 8);
  *(_QWORD *)(a1 + 120) = v7;
  sub_57F070(a1 + 128, a2 + 128);
  *(_QWORD *)(a1 + 128) = v8;
  *(_QWORD *)(a1 + 136) = v9;
  *(_WORD *)(a1 + 154) = *(_WORD *)(a2 + 154);
  sub_57F1B0(a1 + 128, a1 + 8);
  *(_QWORD *)(a1 + 160) = v7;
  sub_57F070(a1 + 168, a2 + 168);
  *(_QWORD *)(a1 + 168) = v8;
  *(_QWORD *)(a1 + 176) = v9;
  *(_WORD *)(a1 + 194) = *(_WORD *)(a2 + 194);
  return sub_57F1B0(a1 + 168, a1 + 8);
}

// N5storm4echo20InitialMementosEventE, virtual slot 5
__int64 __fastcall sub_44BBB0(__int64 a1)
{
  __int64 v2; // x20
  __int64 *v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8

  v2 = sub_56C9F0(144, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)goff_18F5C78 + 24);
  v4 = ((__int64 *)((__int64*)goff_18F5838) + 2);
  *(_QWORD *)v2 = ((__int64 *)goff_18F5C78 + 2);
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

__int64 __fastcall sub_44D270(__int64 a1, __int64 a2)
{
  __int64 *v4; // x8
  __int64 *v5; // x23
  __int64 *v6; // x24
  __int64 *v7; // x25
  __int64 *v8; // x8

  sub_57F070(a1, a2);
  v4 = ((__int64 *)goff_18F5CA8 + 24);
  v5 = ((__int64 *)((__int64*)goff_18F5838) + 2);
  *(_QWORD *)a1 = ((__int64 *)goff_18F5CA8 + 2);
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)(a1 + 32) = v5;
  sub_57F070(a1 + 40, a2 + 40);
  v6 = ((__int64 *)((__int64*)goff_18F5840) + 2);
  v7 = ((__int64 *)((__int64*)goff_18F5840) + 24);
  *(_QWORD *)(a1 + 40) = ((__int64 *)((__int64*)goff_18F5840) + 2);
  *(_QWORD *)(a1 + 48) = v7;
  *(_WORD *)(a1 + 66) = *(_WORD *)(a2 + 66);
  sub_57F1B0(a1 + 40, a1 + 8);
  *(_QWORD *)(a1 + 72) = ((__int64 *)((__int64*)goff_18EDC78) + 2);
  sub_57F070(a1 + 80, a2 + 80);
  v8 = ((__int64 *)((__int64*)goff_18EDC80) + 24);
  *(_QWORD *)(a1 + 80) = ((__int64 *)((__int64*)goff_18EDC80) + 2);
  *(_QWORD *)(a1 + 88) = v8;
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
  sub_57F1B0(a1 + 80, a1 + 8);
  *(_QWORD *)(a1 + 120) = v5;
  sub_57F070(a1 + 128, a2 + 128);
  *(_QWORD *)(a1 + 128) = v6;
  *(_QWORD *)(a1 + 136) = v7;
  *(_WORD *)(a1 + 154) = *(_WORD *)(a2 + 154);
  sub_57F1B0(a1 + 128, a1 + 8);
  *(_QWORD *)(a1 + 160) = v5;
  sub_57F070(a1 + 168, a2 + 168);
  *(_QWORD *)(a1 + 168) = v6;
  *(_QWORD *)(a1 + 176) = v7;
  *(_WORD *)(a1 + 194) = *(_WORD *)(a2 + 194);
  return sub_57F1B0(a1 + 168, a1 + 8);
}

// N5storm4echo26AcquireMasterRoleFailEventE, virtual slot 5
__int64 __fastcall sub_44D730(__int64 a1)
{
  __int64 v2; // x20
  __int64 *v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8

  v2 = sub_56C9F0(216, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)goff_18F5CE0 + 24);
  v4 = ((__int64 *)((__int64*)goff_18F5838) + 2);
  *(_QWORD *)v2 = ((__int64 *)goff_18F5CE0 + 2);
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 32) = v4;
  sub_57F070(v2 + 40, a1 + 40);
  v5 = ((__int64 *)((__int64*)goff_18F5840) + 24);
  *(_QWORD *)(v2 + 40) = ((__int64 *)((__int64*)goff_18F5840) + 2);
  *(_QWORD *)(v2 + 48) = v5;
  *(_WORD *)(v2 + 66) = *(_WORD *)(a1 + 66);
  sub_57F1B0(v2 + 40, v2 + 8);
  *(_QWORD *)(v2 + 72) = ((char *)((__int64*)goff_18F58A8) + 16);
  sub_584570(v2 + 80, a1 + 80);
  sub_57F1B0(v2 + 80, v2 + 8);
  return v2;
}

// N5storm4echo20RecreateReplicaEventE, virtual slot 5
__int64 __fastcall sub_44DEA0(__int64 a1)
{
  __int64 v2; // x20
  __int64 *v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8

  v2 = sub_56C9F0(72, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)goff_18F5CF8 + 24);
  v4 = ((__int64 *)((__int64*)goff_18F5838) + 2);
  *(_QWORD *)v2 = ((__int64 *)goff_18F5CF8 + 2);
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 32) = v4;
  sub_57F070(v2 + 40, a1 + 40);
  v5 = ((__int64 *)((__int64*)goff_18F5840) + 24);
  *(_QWORD *)(v2 + 40) = ((__int64 *)((__int64*)goff_18F5840) + 2);
  *(_QWORD *)(v2 + 48) = v5;
  *(_WORD *)(v2 + 66) = *(_WORD *)(a1 + 66);
  sub_57F1B0(v2 + 40, v2 + 8);
  return v2;
}

// N5storm18DynamicTypeFactoryINS_4echo20RecreateReplicaEventEEE, virtual slot 2
__int64 __fastcall sub_44E020(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0
  __int64 *v5; // x9
  __int64 *v6; // x8
  __int64 *v7; // x8

  v3 = sub_56C9F0(72, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_57F050(v3, v4);
  v5 = ((__int64*)goff_18F5838);
  v6 = ((__int64 *)goff_18F5CF8 + 24);
  *(_QWORD *)v3 = ((__int64 *)goff_18F5CF8 + 2);
  *(_QWORD *)(v3 + 8) = v6;
  *(_QWORD *)(v3 + 32) = v5 + 2;
  sub_57F050(v3 + 40, v3 + 8);
  v7 = ((__int64*)goff_18F5840);
  *(_WORD *)(v3 + 66) = 0;
  *(_QWORD *)(v3 + 40) = v7 + 2;
  *(_QWORD *)(v3 + 48) = v7 + 24;
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo20RecreateReplicaEventEEE, virtual slot 3
__int64 __fastcall sub_44E0C0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20
  __int64 *v6; // x9
  __int64 *v7; // x8
  __int64 *v8; // x8

  v5 = sub_56C9F0(72, 8, 1092624384, 0LL, a3, a4);
  sub_57F050(v5, a2);
  v6 = ((__int64*)goff_18F5838);
  v7 = ((__int64 *)goff_18F5CF8 + 24);
  *(_QWORD *)v5 = ((__int64 *)goff_18F5CF8 + 2);
  *(_QWORD *)(v5 + 8) = v7;
  *(_QWORD *)(v5 + 32) = v6 + 2;
  sub_57F050(v5 + 40, v5 + 8);
  v8 = ((__int64*)goff_18F5840);
  *(_WORD *)(v5 + 66) = 0;
  *(_QWORD *)(v5 + 40) = v8 + 2;
  *(_QWORD *)(v5 + 48) = v8 + 24;
  return v5;
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

// N5storm4echo29MulticastedCreateSuccessEventE, virtual slot 5
__int64 __fastcall sub_44F0C0(__int64 a1)
{
  __int64 v2; // x20
  __int64 *v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8
  __int64 *v6; // x23
  __int64 *v7; // x24
  __int64 *v8; // x25

  v2 = sub_56C9F0(160, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)goff_18F5D38 + 24);
  v4 = ((__int64 *)((__int64*)goff_18EE438) + 2);
  *(_QWORD *)v2 = ((__int64 *)goff_18F5D38 + 2);
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 32) = v4;
  sub_57F070(v2 + 40, a1 + 40);
  v5 = ((__int64 *)((__int64*)goff_18EE440) + 24);
  *(_QWORD *)(v2 + 40) = ((__int64 *)((__int64*)goff_18EE440) + 2);
  *(_QWORD *)(v2 + 48) = v5;
  *(_QWORD *)(v2 + 72) = *(_QWORD *)(a1 + 72);
  sub_57F1B0(v2 + 40, v2 + 8);
  v6 = ((__int64 *)((__int64*)goff_18F5838) + 2);
  *(_QWORD *)(v2 + 80) = ((__int64 *)((__int64*)goff_18F5838) + 2);
  sub_57F070(v2 + 88, a1 + 88);
  v7 = ((__int64 *)((__int64*)goff_18F5840) + 2);
  v8 = ((__int64 *)((__int64*)goff_18F5840) + 24);
  *(_QWORD *)(v2 + 88) = ((__int64 *)((__int64*)goff_18F5840) + 2);
  *(_QWORD *)(v2 + 96) = v8;
  *(_WORD *)(v2 + 114) = *(_WORD *)(a1 + 114);
  sub_57F1B0(v2 + 88, v2 + 8);
  *(_QWORD *)(v2 + 120) = v6;
  sub_57F070(v2 + 128, a1 + 128);
  *(_QWORD *)(v2 + 128) = v7;
  *(_QWORD *)(v2 + 136) = v8;
  *(_WORD *)(v2 + 154) = *(_WORD *)(a1 + 154);
  sub_57F1B0(v2 + 128, v2 + 8);
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

// N5storm4echo28MulticastedCreateFailedEventE, virtual slot 5
__int64 __fastcall sub_450540(__int64 a1)
{
  __int64 v2; // x20
  __int64 *v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8
  __int64 *v6; // x8
  __int64 *v7; // x8

  v2 = sub_56C9F0(160, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)goff_18F5D68 + 24);
  v4 = ((__int64 *)((__int64*)goff_18EE438) + 2);
  *(_QWORD *)v2 = ((__int64 *)goff_18F5D68 + 2);
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 32) = v4;
  sub_57F070(v2 + 40, a1 + 40);
  v5 = ((__int64 *)((__int64*)goff_18EE440) + 24);
  *(_QWORD *)(v2 + 40) = ((__int64 *)((__int64*)goff_18EE440) + 2);
  *(_QWORD *)(v2 + 48) = v5;
  *(_QWORD *)(v2 + 72) = *(_QWORD *)(a1 + 72);
  sub_57F1B0(v2 + 40, v2 + 8);
  *(_QWORD *)(v2 + 80) = ((__int64 *)((__int64*)goff_18EDE48) + 2);
  sub_57F070(v2 + 88, a1 + 88);
  v6 = ((__int64 *)((__int64*)goff_18EDE50) + 24);
  *(_QWORD *)(v2 + 88) = ((__int64 *)((__int64*)goff_18EDE50) + 2);
  *(_QWORD *)(v2 + 96) = v6;
  *(_DWORD *)(v2 + 116) = *(_DWORD *)(a1 + 116);
  sub_57F1B0(v2 + 88, v2 + 8);
  *(_QWORD *)(v2 + 120) = ((__int64 *)((__int64*)goff_18F5838) + 2);
  sub_57F070(v2 + 128, a1 + 128);
  v7 = ((__int64 *)((__int64*)goff_18F5840) + 24);
  *(_QWORD *)(v2 + 128) = ((__int64 *)((__int64*)goff_18F5840) + 2);
  *(_QWORD *)(v2 + 136) = v7;
  *(_WORD *)(v2 + 154) = *(_WORD *)(a1 + 154);
  sub_57F1B0(v2 + 128, v2 + 8);
  return v2;
}

// N5storm4echo28MulticastedCreateFailedEventE, virtual slot 19
_Bool __fastcall sub_450890(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0 && (sub_57F110(a1 + 40, a2 + 40)) != 0 && (sub_57F110(a1 + 88, a2 + 88)) != 0 )
    return sub_57F110(a1 + 128, a2 + 128);
  else
    return 0;
}

// N5storm18DynamicTypeFactoryINS_4echo28MulticastedCreateFailedEventEEE, virtual slot 2
__int64 __fastcall sub_450930(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0
  __int64 *v5; // x9
  __int64 *v6; // x8
  __int64 *v7; // x8
  __int64 *v8; // x9
  __int64 *v9; // x8
  __int64 *v10; // x9
  __int64 *v11; // x8

  v3 = sub_56C9F0(160, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_57F050(v3, v4);
  v5 = ((__int64*)goff_18EE438);
  v6 = ((__int64 *)goff_18F5D68 + 24);
  *(_QWORD *)v3 = ((__int64 *)goff_18F5D68 + 2);
  *(_QWORD *)(v3 + 8) = v6;
  *(_QWORD *)(v3 + 32) = v5 + 2;
  sub_57F050(v3 + 40, v3 + 8);
  v7 = ((__int64 *)((__int64*)goff_18EE440) + 24);
  v8 = ((__int64 *)((__int64*)goff_18EDE48) + 2);
  *(_QWORD *)(v3 + 40) = ((__int64 *)((__int64*)goff_18EE440) + 2);
  *(_QWORD *)(v3 + 48) = v7;
  *(_QWORD *)(v3 + 72) = -1;
  *(_QWORD *)(v3 + 80) = v8;
  sub_57F050(v3 + 88, v3 + 8);
  v9 = ((__int64*)goff_18EDE50);
  v10 = ((__int64*)goff_18F5838);
  *(_DWORD *)(v3 + 116) = -1;
  *(_QWORD *)(v3 + 88) = v9 + 2;
  *(_QWORD *)(v3 + 96) = v9 + 24;
  *(_QWORD *)(v3 + 120) = v10 + 2;
  sub_57F050(v3 + 128, v3 + 8);
  v11 = ((__int64*)goff_18F5840);
  *(_WORD *)(v3 + 154) = 0;
  *(_QWORD *)(v3 + 128) = v11 + 2;
  *(_QWORD *)(v3 + 136) = v11 + 24;
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo28MulticastedCreateFailedEventEEE, virtual slot 3
__int64 __fastcall sub_450A40(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20
  __int64 *v6; // x9
  __int64 *v7; // x8
  __int64 *v8; // x8
  __int64 *v9; // x9
  __int64 *v10; // x8
  __int64 *v11; // x9
  __int64 *v12; // x8

  v5 = sub_56C9F0(160, 8, 1092624384, 0LL, a3, a4);
  sub_57F050(v5, a2);
  v6 = ((__int64*)goff_18EE438);
  v7 = ((__int64 *)goff_18F5D68 + 24);
  *(_QWORD *)v5 = ((__int64 *)goff_18F5D68 + 2);
  *(_QWORD *)(v5 + 8) = v7;
  *(_QWORD *)(v5 + 32) = v6 + 2;
  sub_57F050(v5 + 40, v5 + 8);
  v8 = ((__int64 *)((__int64*)goff_18EE440) + 24);
  v9 = ((__int64 *)((__int64*)goff_18EDE48) + 2);
  *(_QWORD *)(v5 + 40) = ((__int64 *)((__int64*)goff_18EE440) + 2);
  *(_QWORD *)(v5 + 48) = v8;
  *(_QWORD *)(v5 + 72) = -1;
  *(_QWORD *)(v5 + 80) = v9;
  sub_57F050(v5 + 88, v5 + 8);
  v10 = ((__int64*)goff_18EDE50);
  v11 = ((__int64*)goff_18F5838);
  *(_DWORD *)(v5 + 116) = -1;
  *(_QWORD *)(v5 + 88) = v10 + 2;
  *(_QWORD *)(v5 + 96) = v10 + 24;
  *(_QWORD *)(v5 + 120) = v11 + 2;
  sub_57F050(v5 + 128, v5 + 8);
  v12 = ((__int64*)goff_18F5840);
  *(_WORD *)(v5 + 154) = 0;
  *(_QWORD *)(v5 + 128) = v12 + 2;
  *(_QWORD *)(v5 + 136) = v12 + 24;
  return v5;
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

// N5storm4echo29MulticastedBrokerReadyMessageE, virtual slot 5
__int64 __fastcall sub_451D50(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8

  v2 = sub_56C9F0(72, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((char *)((__int64*)goff_18F59E8) + 192);
  v4 = ((__int64 *)((__int64*)goff_18F5838) + 2);
  *(_QWORD *)v2 = ((char *)((__int64*)goff_18F59E8) + 16);
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 32) = v4;
  sub_57F070(v2 + 40, a1 + 40);
  v5 = ((__int64 *)((__int64*)goff_18F5840) + 24);
  *(_QWORD *)(v2 + 40) = ((__int64 *)((__int64*)goff_18F5840) + 2);
  *(_QWORD *)(v2 + 48) = v5;
  *(_WORD *)(v2 + 66) = *(_WORD *)(a1 + 66);
  sub_57F1B0(v2 + 40, v2 + 8);
  return v2;
}

// N5storm18DynamicTypeFactoryINS_4echo29MulticastedBrokerReadyMessageEEE, virtual slot 2
__int64 __fastcall sub_451FC0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0
  __int64 *v5; // x9
  __int64 v6; // x8
  __int64 *v7; // x8

  v3 = sub_56C9F0(72, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_57F050(v3, v4);
  v5 = ((__int64*)goff_18F5838);
  v6 = ((char *)((__int64*)goff_18F59E8) + 192);
  *(_QWORD *)v3 = ((char *)((__int64*)goff_18F59E8) + 16);
  *(_QWORD *)(v3 + 8) = v6;
  *(_QWORD *)(v3 + 32) = v5 + 2;
  sub_57F050(v3 + 40, v3 + 8);
  v7 = ((__int64*)goff_18F5840);
  *(_WORD *)(v3 + 66) = 0;
  *(_QWORD *)(v3 + 40) = v7 + 2;
  *(_QWORD *)(v3 + 48) = v7 + 24;
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo29MulticastedBrokerReadyMessageEEE, virtual slot 3
__int64 __fastcall sub_452060(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20
  __int64 *v6; // x9
  __int64 v7; // x8
  __int64 *v8; // x8

  v5 = sub_56C9F0(72, 8, 1092624384, 0LL, a3, a4);
  sub_57F050(v5, a2);
  v6 = ((__int64*)goff_18F5838);
  v7 = ((char *)((__int64*)goff_18F59E8) + 192);
  *(_QWORD *)v5 = ((char *)((__int64*)goff_18F59E8) + 16);
  *(_QWORD *)(v5 + 8) = v7;
  *(_QWORD *)(v5 + 32) = v6 + 2;
  sub_57F050(v5 + 40, v5 + 8);
  v8 = ((__int64*)goff_18F5840);
  *(_WORD *)(v5 + 66) = 0;
  *(_QWORD *)(v5 + 40) = v8 + 2;
  *(_QWORD *)(v5 + 48) = v8 + 24;
  return v5;
}

// N5storm4echo23MulticastedReplicaEventE, virtual slot 5
__int64 __fastcall sub_4523E0(__int64 a1)
{
  __int64 v2; // x20
  __int64 *v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8
  __int64 *v6; // x8
  __int64 *v7; // x8

  v2 = sub_56C9F0(160, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)goff_18F5DB8 + 24);
  v4 = ((__int64 *)((__int64*)goff_18EDE68) + 2);
  *(_QWORD *)v2 = ((__int64 *)goff_18F5DB8 + 2);
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 32) = v4;
  sub_57F070(v2 + 40, a1 + 40);
  v5 = ((__int64 *)goff_18EDE70 + 24);
  *(_QWORD *)(v2 + 40) = ((__int64 *)goff_18EDE70 + 2);
  *(_QWORD *)(v2 + 48) = v5;
  *(_DWORD *)(v2 + 68) = *(_DWORD *)(a1 + 68);
  sub_57F1B0(v2 + 40, v2 + 8);
  *(_QWORD *)(v2 + 72) = ((__int64 *)((__int64*)goff_18EDC78) + 2);
  sub_57F070(v2 + 80, a1 + 80);
  v6 = ((__int64 *)((__int64*)goff_18EDC80) + 24);
  *(_QWORD *)(v2 + 80) = ((__int64 *)((__int64*)goff_18EDC80) + 2);
  *(_QWORD *)(v2 + 88) = v6;
  *(_QWORD *)(v2 + 112) = *(_QWORD *)(a1 + 112);
  sub_57F1B0(v2 + 80, v2 + 8);
  *(_QWORD *)(v2 + 120) = ((__int64 *)((__int64*)goff_18F5838) + 2);
  sub_57F070(v2 + 128, a1 + 128);
  v7 = ((__int64 *)((__int64*)goff_18F5840) + 24);
  *(_QWORD *)(v2 + 128) = ((__int64 *)((__int64*)goff_18F5840) + 2);
  *(_QWORD *)(v2 + 136) = v7;
  *(_WORD *)(v2 + 154) = *(_WORD *)(a1 + 154);
  sub_57F1B0(v2 + 128, v2 + 8);
  return v2;
}

// N5storm4echo23MulticastedReplicaEventE, virtual slot 19
_Bool __fastcall sub_452730(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0 && (sub_57F110(a1 + 40, a2 + 40)) != 0 && (sub_57F110(a1 + 80, a2 + 80)) != 0 )
    return sub_57F110(a1 + 128, a2 + 128);
  else
    return 0;
}

// N5storm4echo28MulticastedReplicaReadyEventE, virtual slot 5
__int64 __fastcall sub_452CC0(__int64 a1)
{
  __int64 v2; // x20
  __int64 *v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8
  __int64 *v6; // x8

  v2 = sub_56C9F0(112, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)goff_18F5DD0 + 24);
  v4 = ((__int64 *)((__int64*)goff_18EDE68) + 2);
  *(_QWORD *)v2 = ((__int64 *)goff_18F5DD0 + 2);
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)(v2 + 32) = v4;
  sub_57F070(v2 + 40, a1 + 40);
  v5 = ((__int64 *)goff_18EDE70 + 24);
  *(_QWORD *)(v2 + 40) = ((__int64 *)goff_18EDE70 + 2);
  *(_QWORD *)(v2 + 48) = v5;
  *(_DWORD *)(v2 + 68) = *(_DWORD *)(a1 + 68);
  sub_57F1B0(v2 + 40, v2 + 8);
  *(_QWORD *)(v2 + 72) = ((__int64 *)((__int64*)goff_18F5838) + 2);
  sub_57F070(v2 + 80, a1 + 80);
  v6 = ((__int64 *)((__int64*)goff_18F5840) + 24);
  *(_QWORD *)(v2 + 80) = ((__int64 *)((__int64*)goff_18F5840) + 2);
  *(_QWORD *)(v2 + 88) = v6;
  *(_WORD *)(v2 + 106) = *(_WORD *)(a1 + 106);
  sub_57F1B0(v2 + 80, v2 + 8);
  return v2;
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

__int64 __fastcall sub_453BD0(__int64 a1, __int64 a2)
{
  __int64 v3; // x20
  __int64 *v4; // x8
  __int64 *v5; // x23
  __int64 v6; // x21
  __int64 *v7; // x24
  __int64 *v8; // x25
  __int64 *v9; // x8

  v3 = a1;
  sub_57F070(a1, a2);
  v4 = ((__int64 *)goff_18F5E48 + 24);
  v5 = ((__int64 *)((__int64*)goff_18F5838) + 2);
  *(_QWORD *)v3 = ((__int64 *)goff_18F5E48 + 2);
  *(_QWORD *)(v3 + 8) = v4;
  v6 = v3 + 8;
  *(_QWORD *)(v3 + 32) = v5;
  sub_57F070(v3 + 40, a2 + 40);
  v7 = ((__int64 *)((__int64*)goff_18F5840) + 2);
  v8 = ((__int64 *)((__int64*)goff_18F5840) + 24);
  *(_QWORD *)(v3 + 40) = ((__int64 *)((__int64*)goff_18F5840) + 2);
  *(_QWORD *)(v3 + 48) = v8;
  *(_WORD *)(v3 + 66) = *(_WORD *)(a2 + 66);
  sub_57F1B0(v3 + 40, v3 + 8);
  *(_QWORD *)(v3 + 72) = v5;
  sub_57F070(v3 + 80, a2 + 80);
  *(_QWORD *)(v3 + 80) = v7;
  *(_QWORD *)(v3 + 88) = v8;
  *(_WORD *)(v3 + 106) = *(_WORD *)(a2 + 106);
  sub_57F1B0(v3 + 80, v3 + 8);
  *(_QWORD *)(v3 + 112) = v5;
  sub_57F070(v3 + 120, a2 + 120);
  *(_QWORD *)(v3 + 120) = v7;
  *(_QWORD *)(v3 + 128) = v8;
  *(_WORD *)(v3 + 146) = *(_WORD *)(a2 + 146);
  sub_57F1B0(v3 + 120, v3 + 8);
  *(_QWORD *)(v3 + 152) = ((__int64 *)((__int64*)goff_18EDC78) + 2);
  sub_57F070(v3 + 160, a2 + 160);
  v9 = ((__int64 *)((__int64*)goff_18EDC80) + 24);
  *(_QWORD *)(v3 + 160) = ((__int64 *)((__int64*)goff_18EDC80) + 2);
  *(_QWORD *)(v3 + 168) = v9;
  *(_QWORD *)(v3 + 192) = *(_QWORD *)(a2 + 192);
  sub_57F1B0(v3 + 160, v3 + 8);
  *(_QWORD *)(v3 + 200) = ((char *)((__int64*)goff_18F48A0) + 16);
  v3 += 208;
  sub_2A07D0(v3, a2 + 208);
  return sub_57F1B0(v3, v6);
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

// N5storm28SimpleLanMatchmakingStrategyE, virtual slot 23
__int64 __fastcall sub_45EE10(__int64 a1, __int64 a2)
{
  __int64 v3; // x0
  __int64 v4; // x19
  __int64 v5; // x8
  __int64 v6; // x0
  __int64 v7; // x8
  __int64 v8; // x0

  v3 = sub_57D200(40, 8, 1092677632, 0LL, &unk_1326E41, 0);
  *(_DWORD *)(v3 + 7) = 0;
  *(_QWORD *)v3 = 0;
  *(_DWORD *)(v3 + 12) = -1;
  v4 = v3;
  *(_QWORD *)(v3 + 24) = 0;
  *(_QWORD *)(v3 + 32) = 0;
  *(_QWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 12) = *(_DWORD *)(a2 + 12);
  v5 = (*(__int64 (__fastcall **)(_QWORD, void *, int))(**(_QWORD **)(a2 + 16) + 40LL))(
         *(_QWORD *)(a2 + 16),
         &unk_1326E41,
         0);
  v6 = *(_QWORD *)(v4 + 16);
  *(_QWORD *)(v4 + 16) = v5;
  if ( v6 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = (*(__int64 (__fastcall **)(_QWORD, void *, int))(**(_QWORD **)(a2 + 24) + 40LL))(
         *(_QWORD *)(a2 + 24),
         &unk_1326E41,
         0);
  v8 = *(_QWORD *)(v4 + 24);
  *(_QWORD *)(v4 + 24) = v7;
  if ( v8 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  return v4;
}

