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
extern __attribute__((visibility("hidden"))) int dword_18043E8;
extern char goff_18EC5F0[];
extern char goff_18EC5F8[];
extern char goff_18EC828[];
extern char goff_18EC850[];
extern char goff_18EC898[];
extern char goff_18EC900[];
extern char goff_18EC990[];
extern char goff_18EC9C8[];
extern char goff_18ECB48[];
extern char goff_18ECB58[];
extern char goff_18ECCB0[];
extern char goff_18ECCC8[];
extern char goff_18ECD20[];
extern char goff_18ECD78[];
extern char goff_18ED098[];
extern char goff_18ED0A8[];
extern char goff_18ED0F8[];
extern char goff_18ED1C8[];
extern char goff_18ED240[];
extern char goff_18ED2D8[];
extern char goff_18ED2E8[];
extern char goff_18ED318[];
extern char goff_18ED470[];
extern char goff_18ED528[];
extern char goff_18ED5C0[];
extern char goff_18ED5D0[];
extern char goff_18ED600[];
extern char goff_18ED7C0[];
extern char goff_18ED910[];
extern char goff_18ED940[];
extern char goff_18EDCE8[];
extern char goff_18EDDF0[];
extern char goff_18EDDF8[];
extern char goff_18EDE08[];
extern char goff_18EDE20[];
extern char goff_18EDE38[];
extern char goff_18EDE88[];
extern char goff_18EDE90[];
extern char goff_18EDEC8[];
extern char goff_18EDED0[];
extern char goff_18EDF00[];
extern char goff_18EDF08[];
extern char goff_18EDF10[];
extern char goff_18EDF20[];
extern char goff_18EDF38[];
extern char goff_18EDF40[];
extern char goff_18EDF98[];
extern char goff_18EDFD8[];
extern char goff_18EE000[];
extern char goff_18EE008[];
extern char goff_18EE028[];
extern char goff_18EE090[];
extern char goff_18EE0F0[];
extern char goff_18EE118[];
extern char goff_18EE128[];
extern char goff_18EE130[];
extern char goff_18EE138[];
extern char goff_18EE140[];
extern char goff_18EE150[];
extern char goff_18EE160[];
extern char goff_18EE168[];
extern char goff_18EE4A0[];
extern char goff_18EE4A8[];
extern char goff_18EE4B0[];
extern char goff_18EE508[];
extern char goff_18EE510[];
extern char goff_18EE518[];
extern char goff_18EE520[];
extern char goff_18EE528[];
extern char goff_18EE530[];
extern char goff_18EE548[];
extern char goff_18EE550[];
extern char goff_18EE558[];
extern char goff_18EE5E0[];
extern char goff_18EE5E8[];
extern char goff_18EE600[];
extern char goff_18EE620[];
extern char goff_18EE7F0[];
extern char goff_18EE7F8[];
extern char goff_18EEF90[];
extern char goff_18EFA10[];
extern char goff_18EFC40[];
extern char goff_18EFCD8[];
extern char goff_18EFCE8[];
extern char goff_18F01E8[];
extern char goff_18F0540[];
extern char goff_18F09A8[];
extern char goff_18F1210[];
extern char goff_18F1228[];
extern char goff_18F1230[];
extern char goff_18F1238[];
extern char goff_18F1288[];
extern char goff_18F1290[];
extern char goff_18F12B8[];
extern char goff_18F12C0[];
extern char goff_18F12D8[];
extern char goff_18F12E0[];
extern char goff_18F12F0[];
extern char goff_18F1320[];
extern char goff_18F1398[];
extern char goff_18F13A8[];
extern char goff_18F13D8[];
extern char goff_18F13E8[];
extern char goff_18F13F0[];
extern char goff_18F14F0[];
extern char goff_18F1508[];
extern char goff_18F16A8[];
extern char goff_18F16F8[];
extern char goff_18F17B8[];
extern char goff_18F1DB0[];
extern char goff_18F1F38[];
extern char goff_18F2CF0[];
extern char goff_18F2CF8[];
extern char goff_18F2D08[];
extern char goff_18F2D30[];
extern char goff_18F2D38[];
extern char goff_18F2D48[];
extern char goff_18F2D60[];
extern char goff_18F2D68[];
extern char goff_18F2D90[];
extern char goff_18F2EB8[];
extern char goff_18F2FF0[];
extern char goff_18F2FF8[];
extern char goff_18F3028[];
extern char goff_18F3038[];
extern char goff_18F3040[];
extern char goff_18F3090[];
extern char goff_18F31C0[];
extern char goff_18F31D0[];
extern char goff_18F3550[];
extern char goff_18F35B8[];
extern char goff_18F3618[];
extern char goff_18F3630[];
extern char goff_18F4290[];
extern char goff_18F42B0[];
extern char goff_18F42C8[];
extern char goff_18F42D8[];
extern char goff_18F42E0[];
extern char goff_18F42F0[];
extern char goff_18F42F8[];
extern char goff_18F4308[];
extern char goff_18F4350[];
extern char goff_18F43C8[];
extern char goff_18F43D0[];
extern char goff_18F43F0[];
extern char goff_18F4518[];
extern char goff_18F4520[];
extern char goff_18F4590[];
extern char goff_18F45D0[];
extern char goff_18F4668[];
extern char goff_18F4708[];
extern char goff_18F49F8[];
extern char goff_18F4A50[];
extern char goff_18F50A8[];
__int64 nn__os__ConvertToTimeSpan();
__int64 nn__os__GetSystemTick();
__int64 nn__ssl__Context__Create();
__attribute__((visibility("hidden"))) __int64 nullsub_1096();
__attribute__((visibility("hidden"))) __int64 nullsub_5();
__int64 printf();
__int64 pthread_mutex_destroy();
__int64 pthread_mutex_lock();
__int64 pthread_mutex_unlock();
extern __attribute__((visibility("hidden"))) __int64 qword_18FE0D8;
extern __attribute__((visibility("hidden"))) __int64 qword_1905F58;
extern __attribute__((visibility("hidden"))) __int64 qword_1907E28;
extern __attribute__((visibility("hidden"))) __int64 qword_1909240;
extern __attribute__((visibility("hidden"))) __int64 qword_190CB40;
__int64 std____shared_weak_count____release_weak();
__int64 std__condition_variable___condition_variable();
__int64 std__mutex___mutex();
__int64 std__recursive_mutex__lock();
__int64 std__recursive_mutex__unlock();
__int64 std__shared_timed_mutex__lock();
__int64 std__shared_timed_mutex__lock_shared();
__int64 std__shared_timed_mutex__unlock();
__int64 std__shared_timed_mutex__unlock_shared();
__int64 strtoul();
__attribute__((visibility("hidden"))) __int64 sub_109D60();
__attribute__((visibility("hidden"))) __int64 sub_160840();
__attribute__((visibility("hidden"))) __int64 sub_164FB0();
__attribute__((visibility("hidden"))) __int64 sub_165640();
__attribute__((visibility("hidden"))) __int64 sub_1750D0();
__attribute__((visibility("hidden"))) __int64 sub_180D00();
__attribute__((visibility("hidden"))) __int64 sub_181380();
__attribute__((visibility("hidden"))) __int64 sub_1873B0();
__attribute__((visibility("hidden"))) __int64 sub_18C7E0();
__attribute__((visibility("hidden"))) __int64 sub_190BE0();
__attribute__((visibility("hidden"))) __int64 sub_194E30();
__attribute__((visibility("hidden"))) __int64 sub_19CA60();
__attribute__((visibility("hidden"))) __int64 sub_19EBC0();
__attribute__((visibility("hidden"))) __int64 sub_1A2010();
__attribute__((visibility("hidden"))) __int64 sub_1B2190();
__attribute__((visibility("hidden"))) __int64 sub_257280();
__attribute__((visibility("hidden"))) __int64 sub_257400();
__attribute__((visibility("hidden"))) __int64 sub_258AA0();
__attribute__((visibility("hidden"))) __int64 sub_25E200();
__attribute__((visibility("hidden"))) __int64 sub_25E630();
__attribute__((visibility("hidden"))) __int64 sub_261DF0();
__attribute__((visibility("hidden"))) __int64 sub_267C90();
__attribute__((visibility("hidden"))) __int64 sub_268070();
__attribute__((visibility("hidden"))) __int64 sub_269C60();
__attribute__((visibility("hidden"))) __int64 sub_26BCC0();
__attribute__((visibility("hidden"))) __int64 sub_26D390();
__attribute__((visibility("hidden"))) __int64 sub_26D610();
__attribute__((visibility("hidden"))) __int64 sub_287220();
__attribute__((visibility("hidden"))) __int64 sub_2933F0();
__attribute__((visibility("hidden"))) __int64 sub_298DF0();
__attribute__((visibility("hidden"))) __int64 sub_2A07D0();
__attribute__((visibility("hidden"))) __int64 sub_2A1720();
__attribute__((visibility("hidden"))) __int64 sub_2A22F0();
__attribute__((visibility("hidden"))) __int64 sub_2B06B0();
__attribute__((visibility("hidden"))) __int64 sub_2B7A60();
__attribute__((visibility("hidden"))) __int64 sub_2BA320();
__attribute__((visibility("hidden"))) __int64 sub_2BC630();
__attribute__((visibility("hidden"))) __int64 sub_2BE370();
__attribute__((visibility("hidden"))) __int64 sub_2C1BF0();
__attribute__((visibility("hidden"))) __int64 sub_2C4070();
__attribute__((visibility("hidden"))) __int64 sub_2C4490();
__attribute__((visibility("hidden"))) __int64 sub_2C5550();
__attribute__((visibility("hidden"))) __int64 sub_2CC8D0();
__attribute__((visibility("hidden"))) __int64 sub_2D8FF0();
__attribute__((visibility("hidden"))) __int64 sub_2DEA20();
__attribute__((visibility("hidden"))) __int64 sub_2F2530();
__attribute__((visibility("hidden"))) __int64 sub_2FAC30();
__attribute__((visibility("hidden"))) __int64 sub_2FAC80();
__attribute__((visibility("hidden"))) __int64 sub_2FAD00();
__attribute__((visibility("hidden"))) __int64 sub_30B260();
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
__attribute__((visibility("hidden"))) __int64 sub_36B160();
__attribute__((visibility("hidden"))) __int64 sub_36EA0();
__attribute__((visibility("hidden"))) __int64 sub_37030();
__attribute__((visibility("hidden"))) __int64 sub_3745A0();
__attribute__((visibility("hidden"))) __int64 sub_3759B0();
__attribute__((visibility("hidden"))) __int64 sub_37A0C0();
__attribute__((visibility("hidden"))) __int64 sub_37A320();
__attribute__((visibility("hidden"))) __int64 sub_37BB50();
__attribute__((visibility("hidden"))) __int64 sub_38E700();
__attribute__((visibility("hidden"))) __int64 sub_3A1460();
__attribute__((visibility("hidden"))) __int64 sub_3AB000();
__attribute__((visibility("hidden"))) __int64 sub_3B3430();
__attribute__((visibility("hidden"))) __int64 sub_3B62B0();
__attribute__((visibility("hidden"))) __int64 sub_3CC950();
__attribute__((visibility("hidden"))) __int64 sub_3E1F70();
__attribute__((visibility("hidden"))) __int64 sub_3E28D0();
__attribute__((visibility("hidden"))) __int64 sub_3EE870();
__attribute__((visibility("hidden"))) __int64 sub_4140D0();
__attribute__((visibility("hidden"))) __int64 sub_45180();
__attribute__((visibility("hidden"))) __int64 sub_53380();
__attribute__((visibility("hidden"))) __int64 sub_54500();
__attribute__((visibility("hidden"))) __int64 sub_54BC60();
__attribute__((visibility("hidden"))) __int64 sub_54C050();
__attribute__((visibility("hidden"))) __int64 sub_554120();
__attribute__((visibility("hidden"))) __int64 sub_5541F0();
__attribute__((visibility("hidden"))) __int64 sub_5543A0();
__attribute__((visibility("hidden"))) __int64 sub_55A610();
__attribute__((visibility("hidden"))) __int64 sub_56A940();
__attribute__((visibility("hidden"))) __int64 sub_56C9F0();
__attribute__((visibility("hidden"))) __int64 sub_56CA00();
__attribute__((visibility("hidden"))) __int64 sub_56CA10();
__attribute__((visibility("hidden"))) __int64 sub_56DC30();
__attribute__((visibility("hidden"))) _Bool sub_576540();
__attribute__((visibility("hidden"))) __int64 sub_5771E0();
__attribute__((visibility("hidden"))) __int64 sub_577290();
__attribute__((visibility("hidden"))) __int64 sub_578410();
__attribute__((visibility("hidden"))) __int64 sub_57D200();
__attribute__((visibility("hidden"))) __int64 sub_57EDC0();
__attribute__((visibility("hidden"))) __int64 sub_57EEF0();
__attribute__((visibility("hidden"))) __int64 sub_57EF40();
__attribute__((visibility("hidden"))) __int64 sub_57F050();
__attribute__((visibility("hidden"))) __int64 sub_57F070();
__attribute__((visibility("hidden"))) _Bool sub_57F110();
__attribute__((visibility("hidden"))) __int64 sub_583240();
__attribute__((visibility("hidden"))) __int64 sub_5859F0();
__attribute__((visibility("hidden"))) __int64 sub_588E20();
__attribute__((visibility("hidden"))) __int64 sub_5894B0();
__attribute__((visibility("hidden"))) __int64 sub_592460();
__attribute__((visibility("hidden"))) __int64 sub_593BB0();
__attribute__((visibility("hidden"))) __int64 sub_594400();
__attribute__((visibility("hidden"))) __int64 sub_594410();
__attribute__((visibility("hidden"))) __int64 sub_5944A0();
__attribute__((visibility("hidden"))) __int64 sub_596B20();
__attribute__((visibility("hidden"))) __int64 sub_5B87B0();
__attribute__((visibility("hidden"))) __int64 sub_5BC360();
__attribute__((visibility("hidden"))) __int64 sub_5BCCC0();
__attribute__((visibility("hidden"))) _Bool sub_66B10();
__attribute__((visibility("hidden"))) __int64 sub_66D70();
__attribute__((visibility("hidden"))) __int64 sub_6EEA10();
__attribute__((visibility("hidden"))) __int64 sub_78E10();
__attribute__((visibility("hidden"))) __int64 sub_7C4B0();
__attribute__((visibility("hidden"))) __int64 sub_C2610();
__attribute__((visibility("hidden"))) __int64 sub_C289D0();
__attribute__((visibility("hidden"))) __int64 sub_C33C0();
__attribute__((visibility("hidden"))) __int64 sub_CAE10();
__attribute__((visibility("hidden"))) __int64 sub_D6CF0();
__attribute__((visibility("hidden"))) __int64 sub_D84D0();
__attribute__((visibility("hidden"))) __int64 sub_DAF90();
__attribute__((visibility("hidden"))) __int64 sub_FDEC0();
extern __attribute__((visibility("hidden"))) char unk_1326E41;

int __fastcall sub_250(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // x0
  char *v5; // x9
  unsigned __int64 v6; // x10
  unsigned __int64 v7; // x11
  char *v8; // x9

  result = 0xFFFFFFFFLL;
  if ( a3 != 0 )
  {
    v5 = (char *)goff_18EC5F0;
    v6 = (goff_18EC5F8 - goff_18EC5F0) / 24;
    if ( qword_18FE0D8 < v6 )
    {
      v7 = __atomic_fetch_add((unsigned __int64 *)&qword_18FE0D8, 1, 4);
      if ( v7 >= v6 )
      {
        return 0xFFFFFFFFLL;
      }
      else
      {
        v8 = &v5[24 * v7];
        result = 0;
        *(_QWORD *)v8 = a1;
        *((_QWORD *)v8 + 1) = a2;
        *((_QWORD *)v8 + 2) = a3;
      }
    }
  }
  return result;
}

__int64 __fastcall sub_37B70(__int64 a1, __int64 a2, const char *a3)
{
  __int64 result; // x0

  if ( a3 != nullptr )
    return printf("%s", a3);
  return result;
}

__int64 __fastcall sub_429E0(_QWORD *a1, int a2)
{
  __int64 v4; // x21
  __int64 result; // x0
  unsigned __int64 v6; // x8
  __int64 v7; // x8
  __int16 v8; // w9
  unsigned __int64 v9; // x8

  *a1 = ((__int64 *)((__int64*)goff_18EC828) + 2);
  v4 = sub_36EA0(0x40u, 4u, 0, 1086324736);
  result = sub_45180();
  a1[1] = v4;
  *(_BYTE *)(v4 + 48) = 0;
  v6 = atomic_load(*(unsigned __int64 **)(a1[1] + 24LL));
  v7 = *(_QWORD *)(v6 + 16);
  if ( a2 == 1 )
    v8 = 4;
  else
    v8 = 3;
  *(_QWORD *)(v7 + 8) = 0;
  *(_QWORD *)(v7 + 16) = 0;
  *(_QWORD *)v7 = 0;
  *(_WORD *)(v7 + 22) = v8;
  v9 = atomic_load(*(unsigned __int64 **)(a1[1] + 24LL));
  *(_QWORD *)(*(_QWORD *)(a1[1] + 24LL) + 16LL) = *(_QWORD *)(v9 + 16);
  return result;
}

__int64 __fastcall sub_51B70(char a1, int a2)
{
  pthread_mutex_t *v3; // x0

  v3 = (pthread_mutex_t *)(*(_QWORD *)goff_18EC898 + 32LL * a2);
  if ( (a1 & 1) != 0 )
    return pthread_mutex_lock(v3);
  else
    return pthread_mutex_unlock(v3);
}

// N11ubiservices17TrafficStatisticsE, virtual slot 1
__int64 __fastcall sub_524F0(__int64 a1)
{
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18EC900) + 2);
  sub_160840(a1 + 64, *(_QWORD *)(a1 + 72));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 24));
  return sub_37030(a1);
}

// N11ubiservices18HttpRetryComponentE, virtual slot 3
_Bool __fastcall sub_53B70(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // x8
  unsigned __int64 v4; // x20
  unsigned __int64 v6; // x8
  pthread_mutex_t *v7; // x21
  unsigned __int64 v8; // x8
  unsigned int v9; // w22
  unsigned __int64 v10; // x8
  unsigned int v11; // w23

  v3 = atomic_load(a3);
  v4 = v3 + 360;
  if ( (sub_66B10(v3 + 360, a3)) == 0 )
    return 0;
  v6 = atomic_load(a3);
  v7 = (pthread_mutex_t *)(v6 + 24);
  pthread_mutex_lock((pthread_mutex_t *)(v6 + 24));
  v8 = atomic_load(a3);
  v9 = *(_DWORD *)(v8 + 288);
  v10 = atomic_load(a3);
  v11 = *(_DWORD *)(v10 + 368);
  pthread_mutex_unlock(v7);
  if ( v9 >= v11 )
    return 0;
  sub_66D70(v4, a3);
  return 1;
}

_Bool __fastcall sub_53CD0(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // x8
  pthread_mutex_t *v3; // x21
  unsigned __int64 v6; // x22
  int v7; // w8
  unsigned __int64 v8; // x8
  pthread_mutex_t *v9; // x21
  unsigned __int64 v10; // x8
  unsigned int v11; // w23
  unsigned __int64 v12; // x8
  unsigned int v13; // w24

  v2 = atomic_load(a2);
  v3 = (pthread_mutex_t *)(v2 + 24);
  pthread_mutex_lock((pthread_mutex_t *)(v2 + 24));
  v6 = atomic_load(a2);
  pthread_mutex_unlock(v3);
  v7 = *(_DWORD *)(v6 + 320);
  if ( v7 == 84 || v7 == 82 )
  {
    v8 = atomic_load(a2);
    v9 = (pthread_mutex_t *)(v8 + 24);
    pthread_mutex_lock((pthread_mutex_t *)(v8 + 24));
    v10 = atomic_load(a2);
    v11 = *(_DWORD *)(v10 + 288);
    v12 = atomic_load(a2);
    v13 = *(_DWORD *)(v12 + 368);
    pthread_mutex_unlock(v9);
    if ( v11 < v13 )
    {
      sub_66D70(a1, a2);
      return 1;
    }
    sub_53380(a2, v6 + 320);
  }
  return 0;
}

// N11ubiservices22HttpStreamingComponentE, virtual slot 6
bool __fastcall sub_55EE0(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // x8
  pthread_mutex_t *v3; // x21
  unsigned __int64 *v5; // x19
  unsigned __int64 v6; // x8
  unsigned int v7; // w22
  unsigned __int64 v8; // x8
  pthread_mutex_t *v9; // x20
  unsigned __int64 v10; // x8

  v2 = atomic_load(a2);
  v3 = (pthread_mutex_t *)(v2 + 24);
  v5 = a2;
  pthread_mutex_lock((pthread_mutex_t *)(v2 + 24));
  v6 = atomic_load(v5);
  v7 = *(_DWORD *)(v6 + 272);
  pthread_mutex_unlock(v3);
  sub_54500(a1, v7);
  v8 = atomic_load(v5);
  v9 = (pthread_mutex_t *)(v8 + 24);
  pthread_mutex_lock((pthread_mutex_t *)(v8 + 24));
  v10 = atomic_load(v5);
  LODWORD(v5) = *(_DWORD *)(v10 + 316);
  pthread_mutex_unlock(v9);
  return (_DWORD)v5 != 4;
}

// N11ubiservices14HttpEngineCurlE, virtual slot 5
__int64 sub_58860()
{
  __int64 result; // x0
  __int64 v1; // x8

  result = sub_36EA0(0x18u, 4u, 0, 1086324736);
  v1 = goff_18EC990;
  *(_QWORD *)result = v1 + 16;
  *(_QWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 16) = 0;
  return result;
}

int __fastcall sub_5ADD0(__int64 a1, __int64 a2)
{
  if ( (unsigned int)nn__ssl__Context__Create(a2, 1) != 0 )
    return 95;
  else
    return 0;
}

// N11ubiservices16HttpBinaryEntityE, virtual slot 1
__int64 __fastcall sub_5AE10(_QWORD *a1)
{
  __int64 v2; // x8
  _QWORD *v3; // x20

  *a1 = ((__int64 *)((__int64*)goff_18EC9C8) + 2);
  v3 = a1 + 2;
  v2 = a1[2];
  if ( v2 != 0 )
    sub_37030(v2 - *(unsigned int *)(v2 - 4));
  *v3 = 0;
  v3[1] = 0;
  return sub_37030(a1);
}

__int64 *__fastcall sub_98E30(__int64 a1, __int64 **a2)
{
  __int64 *result; // x0
  pthread_mutex_t *v4; // x20
  __int64 *v6; // x23
  __int64 v7; // x22
  __int64 *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x0

  result = *a2;
  if ( *a2 == nullptr )
  {
    v4 = (pthread_mutex_t *)(*(_QWORD *)(a1 + 16) + 8LL);
    pthread_mutex_lock(v4);
    if ( *a2 == nullptr )
    {
      v6 = (__int64 *)sub_36EA0(8u, 4u, 0, 1086324736);
      v7 = sub_36EA0(0x128u, 4u, 0, 1086324736);
      sub_D6CF0(v7, a1);
      *v6 = v7;
      v8 = *a2;
      *a2 = v6;
      if ( v8 != nullptr )
      {
        v9 = *v8;
        *v8 = 0;
        if ( v9 != 0 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
          v10 = *v8;
          *v8 = 0;
          if ( v10 != 0 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        }
        else
        {
          *v8 = 0;
        }
        sub_37030(v8);
      }
    }
    pthread_mutex_unlock(v4);
    return *a2;
  }
  return result;
}

__int64 __fastcall sub_98FC0(__int64 a1, __int64 *a2)
{
  __int64 result; // x0
  pthread_mutex_t *v4; // x20
  _QWORD *v6; // x23
  __int64 v7; // x21
  __int64 v8; // x21

  result = *a2;
  if ( *a2 == 0 )
  {
    v4 = (pthread_mutex_t *)(*(_QWORD *)(a1 + 16) + 8LL);
    pthread_mutex_lock(v4);
    if ( *a2 == 0 )
    {
      v6 = (_QWORD *)sub_36EA0(0x10u, 4u, 0, 1086324736);
      *v6 = a1;
      v7 = sub_36EA0(0x30u, 4u, 0, 1086324736);
      *(_QWORD *)(v7 + 8) = 0;
      *(_WORD *)(v7 + 32) = 2;
      *(_QWORD *)(v7 + 16) = 0;
      *(_QWORD *)(v7 + 24) = 0;
      *(_QWORD *)(v7 + 40) = "EntityClient";
      sub_78E10(v7 + 8, 2u);
      v6[1] = v7;
      v8 = *a2;
      *a2 = (__int64)v6;
      if ( v8 != 0 )
      {
        sub_C2610(v8 + 8);
        sub_C2610(v8 + 8);
        sub_37030(v8);
      }
    }
    pthread_mutex_unlock(v4);
    return *a2;
  }
  return result;
}

__int64 __fastcall sub_994C0(__int64 a1, __int64 *a2)
{
  __int64 result; // x0
  pthread_mutex_t *v4; // x20
  _QWORD *v6; // x23
  __int64 v7; // x21
  __int64 v8; // x21

  result = *a2;
  if ( *a2 == 0 )
  {
    v4 = (pthread_mutex_t *)(*(_QWORD *)(a1 + 16) + 8LL);
    pthread_mutex_lock(v4);
    if ( *a2 == 0 )
    {
      v6 = (_QWORD *)sub_36EA0(0x10u, 4u, 0, 1086324736);
      *v6 = a1;
      v7 = sub_36EA0(0x30u, 4u, 0, 1086324736);
      *(_QWORD *)(v7 + 8) = 0;
      *(_WORD *)(v7 + 32) = 6;
      *(_QWORD *)(v7 + 16) = 0;
      *(_QWORD *)(v7 + 24) = 0;
      *(_QWORD *)(v7 + 40) = "StatsClient";
      sub_78E10(v7 + 8, 6u);
      v6[1] = v7;
      v8 = *a2;
      *a2 = (__int64)v6;
      if ( v8 != 0 )
      {
        sub_C2610(v8 + 8);
        sub_C2610(v8 + 8);
        sub_37030(v8);
      }
    }
    pthread_mutex_unlock(v4);
    return *a2;
  }
  return result;
}

// N11ubiservices8JobLoginE, virtual slot 7
double __fastcall sub_B1640(unsigned __int64 *a1)
{
  unsigned __int64 v1; // x8
  __int64 v2; // x19
  __int64 SystemTick; // x0
  double result; // d0

  v1 = atomic_load(a1 + 19);
  v2 = *(_QWORD *)(v1 + 32);
  SystemTick = nn__os__GetSystemTick((char *)a1);
  result = (double)(unsigned __int64)nn__os__ConvertToTimeSpan(SystemTick) * 1000000000.0 / 1000000000.0;
  *(_QWORD *)(v2 + 40) = (unsigned __int64)result;
  return result;
}

__int64 __fastcall sub_D6780(__int64 result, unsigned int a2)
{
  __int64 v2; // x20
  unsigned __int64 v3; // x8
  unsigned int *v5; // x8
  unsigned int v6; // w9
  unsigned int v7; // w9
  __int64 v8; // x8
  __int64 v9; // x9

  if ( (a2 & 0x80000000) == 0 )
  {
    v2 = *(_QWORD *)result;
    v3 = atomic_load((unsigned __int64 *)(*(_QWORD *)result + 128LL));
    if ( *(_DWORD *)(v3 + 24) == 0 && *(_BYTE *)(*(_QWORD *)(v2 + 272) + 112LL) == 0 )
    {
      v5 = (unsigned int *)(v2 + 144);
      v6 = atomic_load((unsigned int *)(v2 + 144));
      if ( v6 == 0 )
      {
        v7 = __atomic_fetch_add(v5, 1, 4);
        if ( v7 == 0 )
          result = sub_DAF90(v2);
      }
    }
    v8 = *(_QWORD *)(v2 + 272);
    v9 = 1000000000LL * a2;
    *(_QWORD *)(v8 + 128) = v9;
    if ( *(_BYTE *)(v8 + 112) == 0 )
    {
      *(_BYTE *)(v8 + 112) = 1;
      *(_QWORD *)(v8 + 120) = v9;
    }
  }
  return result;
}

__int64 __fastcall sub_D6820(__int64 result, unsigned int a2)
{
  __int64 v2; // x20
  unsigned int *v4; // x8
  unsigned int v5; // w9
  unsigned int v6; // w9
  __int64 v7; // x8
  __int64 v8; // x9

  if ( (a2 & 0x80000000) == 0 )
  {
    v2 = *(_QWORD *)result;
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)result + 272LL) + 112LL) = 0;
    sub_D84D0(v2);
    v4 = (unsigned int *)(v2 + 144);
    v5 = atomic_load((unsigned int *)(v2 + 144));
    if ( v5 == 0 )
    {
      v6 = __atomic_fetch_add(v4, 1, 4);
    }
    result = sub_DAF90(v2);
    v7 = *(_QWORD *)(v2 + 272);
    v8 = 1000000000LL * a2;
    *(_QWORD *)(v7 + 128) = v8;
    if ( *(_BYTE *)(v7 + 112) == 0 )
    {
      *(_BYTE *)(v7 + 112) = 1;
      *(_QWORD *)(v7 + 120) = v8;
    }
  }
  return result;
}

// N11ubiservices15EventInfoCustomE, virtual slot 4
_QWORD *__fastcall sub_E9450(__int64 a1)
{
  _QWORD *v2; // x20

  v2 = (_QWORD *)sub_36EA0(0x50u, 4u, 0, 1086324736);
  sub_165640(v2, a1);
  *v2 = ((__int64 *)((__int64*)goff_18ED2D8) + 2);
  return v2;
}

// N11ubiservices26EventInfoPlayerAchievementE, virtual slot 4
__int64 __fastcall sub_EAEE0(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_36EA0(0x58u, 4u, 0, 1086324736);
  sub_165640(v2, a1);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18ED2E8) + 2);
  *(_DWORD *)(v2 + 80) = *(_DWORD *)(a1 + 80);
  return v2;
}

// N11ubiservices23EventInfoPlayerPlayTimeE, virtual slot 4
_QWORD *__fastcall sub_EB650(__int64 a1)
{
  _QWORD *v2; // x20

  v2 = (_QWORD *)sub_36EA0(0x58u, 4u, 0, 1086324736);
  sub_165640(v2, a1);
  *v2 = ((__int64 *)goff_18ED240 + 2);
  v2[10] = *(_QWORD *)(a1 + 80);
  return v2;
}

// N11ubiservices25WebSocketHandshakeRequestE, virtual slot 4
_QWORD *__fastcall sub_FE2D0(__int64 a1)
{
  _QWORD *v2; // x20

  v2 = (_QWORD *)sub_36EA0(0x98u, 4u, 0, 1086324736);
  sub_FDEC0((__int64)v2, a1);
  *v2 = ((char *)((__int64*)goff_18ECB58) + 16);
  return v2;
}

// N11ubiservices17LeaderboardClientE, virtual slot 0
__int64 __fastcall sub_104780(_QWORD *a1)
{
  _QWORD *v1; // x19

  *a1 = ((char *)((__int64*)goff_18ECCB0) + 16);
  v1 = a1 + 2;
  sub_C2610(a1 + 2);
  return sub_C2610(v1);
}

// N11ubiservices17LeaderboardClientE, virtual slot 1
__int64 __fastcall sub_1047C0(_QWORD *a1)
{
  _QWORD *v2; // x20

  *a1 = ((char *)((__int64*)goff_18ECCB0) + 16);
  v2 = a1 + 2;
  sub_C2610(a1 + 2);
  sub_C2610(v2);
  return sub_37030(a1);
}

// N11ubiservices19JobUpdatePopulationE, virtual slot 0
__int64 __fastcall sub_139D20(_QWORD *a1)
{
  _QWORD *v1; // x8

  v1 = (_QWORD *)goff_18ED7C0;
  *a1 = ((char *)goff_18ECD78 + 16);
  if ( (_QWORD *)*v1 == a1 )
    *v1 = 0;
  sub_6EEA10(a1 + 36);
  return sub_181380(a1);
}

// N11ubiservices19JobUpdatePopulationE, virtual slot 1
__int64 __fastcall sub_139D70(_QWORD *a1)
{
  _QWORD *v1; // x8

  v1 = (_QWORD *)goff_18ED7C0;
  *a1 = ((char *)goff_18ECD78 + 16);
  if ( (_QWORD *)*v1 == a1 )
    *v1 = 0;
  sub_6EEA10(a1 + 36);
  sub_181380(a1);
  return sub_37030(a1);
}

void sub_14F0C0(__int64 result, __int64 a2, int a3, int a4)
{
  __int64 v4; // x8

  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = a2;
  v4 = ((__int64*)goff_18ECB48);
  *(_BYTE *)(result + 32) = 0;
  *(_QWORD *)result = v4 + 16;
  *(_DWORD *)(result + 36) = a4;
  *(_DWORD *)(result + 24) = a3;
  *(_DWORD *)(result + 28) = a3;
  return;
}

// N11ubiservices16HttpBinaryEntityE, virtual slot 0
void __fastcall sub_15AF70(_QWORD *result)
{
  __int64 v1; // x8
  _QWORD *v2; // x19

  *result = ((__int64 *)((__int64*)goff_18EC9C8) + 2);
  v2 = result + 2;
  v1 = result[2];
  if ( v1 != 0 )
    sub_37030(v1 - *(unsigned int *)(v1 - 4));
  *v2 = 0;
  v2[1] = 0;
  return;
}

// N11ubiservices16HttpStringEntityE, virtual slot 1
__int64 __fastcall sub_15B160(_QWORD *a1)
{
  __int64 v2; // x8
  _QWORD *v3; // x20

  *a1 = ((__int64 *)((__int64*)goff_18EC9C8) + 2);
  v3 = a1 + 2;
  v2 = a1[2];
  if ( v2 != 0 )
    sub_37030(v2 - *(unsigned int *)(v2 - 4));
  *v3 = 0;
  v3[1] = 0;
  return sub_37030(a1);
}

// N11ubiservices12Scheduler_BF21SchedulerWorkerThreadE, virtual slot 2
char *__fastcall sub_161AF0(__int64 a1)
{
  return sub_7C4B0(*(_QWORD *)(a1 + 96), (unsigned int)*((__int64*)goff_18ED940), 1);
}

// N11ubiservices17NotificationQueueINS_17StateNotificationEEE, virtual slot 0
__int64 __fastcall sub_175050(__int64 a1)
{
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18EC850) + 2);
  sub_1750D0(a1 + 72, *(_QWORD *)(a1 + 80));
  return pthread_mutex_destroy((pthread_mutex_t *)(a1 + 32));
}

// N11ubiservices17NotificationQueueINS_17StateNotificationEEE, virtual slot 1
__int64 __fastcall sub_175090(__int64 a1)
{
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18EC850) + 2);
  sub_1750D0(a1 + 72, *(_QWORD *)(a1 + 80));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 32));
  return sub_37030(a1);
}

// N11ubiservices17NotificationQueueINS_26AuthenticationNotificationEEE, virtual slot 0
__int64 __fastcall sub_180C80(__int64 a1)
{
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18ECCC8) + 16);
  sub_180D00(a1 + 72, *(_QWORD *)(a1 + 80));
  return pthread_mutex_destroy((pthread_mutex_t *)(a1 + 32));
}

// N11ubiservices17NotificationQueueINS_26AuthenticationNotificationEEE, virtual slot 1
__int64 __fastcall sub_180CC0(__int64 a1)
{
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18ECCC8) + 16);
  sub_180D00(a1 + 72, *(_QWORD *)(a1 + 80));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 32));
  return sub_37030(a1);
}

// N11ubiservices11AsyncResultINS_6VectorINS_14PopulationInfoEEEE14InternalResultE, virtual slot 0
void __fastcall sub_181B40(_QWORD *result)
{
  _QWORD *v1; // x19

  *result = ((char *)((__int64*)goff_18ECD20) + 16);
  v1 = result + 2;
  if ( result[2] != 0 )
  {
    sub_164FB0(result + 2);
    { sub_37030(*v1); return; }
  }
  return;
}

// N11ubiservices11AsyncResultINS_6VectorINS_14PopulationInfoEEEE14InternalResultE, virtual slot 1
__int64 __fastcall sub_181B90(_QWORD *a1)
{
  _QWORD *v2; // x20

  *a1 = ((char *)((__int64*)goff_18ECD20) + 16);
  v2 = a1 + 2;
  if ( a1[2] != 0 )
  {
    sub_164FB0(a1 + 2);
    sub_37030(*v2);
  }
  return sub_37030(a1);
}

// N11ubiservices17NotificationQueueINS_16ClubNotificationEEE, virtual slot 0
__int64 __fastcall sub_187330(__int64 a1)
{
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18ED098) + 16);
  sub_1873B0(a1 + 72, *(_QWORD *)(a1 + 80));
  return pthread_mutex_destroy((pthread_mutex_t *)(a1 + 32));
}

// N11ubiservices17NotificationQueueINS_16ClubNotificationEEE, virtual slot 1
__int64 __fastcall sub_187370(__int64 a1)
{
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18ED098) + 16);
  sub_1873B0(a1 + 72, *(_QWORD *)(a1 + 80));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 32));
  return sub_37030(a1);
}

// N11ubiservices11AsyncResultINS_6VectorINS_21ChallengePoolsBundledEEEE14InternalResultE, virtual slot 0
void __fastcall sub_187BC0(_QWORD *result)
{
  __int64 v1; // x21
  __int64 v2; // x20
  _QWORD *v3; // x19
  __int64 v4; // x0

  v1 = result[2];
  *result = ((char *)((__int64*)goff_18ED0A8) + 16);
  if ( v1 != 0 )
  {
    v2 = result[3];
    v3 = result;
    v4 = v1;
    if ( v2 != v1 )
    {
      do
      {
        v2 -= 168;
        sub_C33C0(v2);
      }
      while ( v1 != v2 );
      v4 = v3[2];
    }
    v3[3] = v1;
    { sub_37030(v4); return; }
  }
  return;
}

// N11ubiservices11AsyncResultINS_6VectorINS_21ChallengePoolsBundledEEEE14InternalResultE, virtual slot 1
__int64 __fastcall sub_187C40(_QWORD *a1)
{
  __int64 v1; // x21
  __int64 v3; // x20
  __int64 v4; // x0

  v1 = a1[2];
  *a1 = ((char *)((__int64*)goff_18ED0A8) + 16);
  if ( v1 != 0 )
  {
    v3 = a1[3];
    v4 = v1;
    if ( v3 != v1 )
    {
      do
      {
        v3 -= 168;
        sub_C33C0(v3);
      }
      while ( v1 != v3 );
      v4 = a1[2];
    }
    a1[3] = v1;
    sub_37030(v4);
  }
  return sub_37030(a1);
}

// N11ubiservices11AsyncResultINS_6VectorINS_13EntityProfileEEEE14InternalResultE, virtual slot 0
void __fastcall sub_188630(_QWORD *result)
{
  __int64 v1; // x21
  __int64 v2; // x20
  _QWORD *v3; // x19
  __int64 v4; // x0

  v1 = result[2];
  *result = ((char *)((__int64*)goff_18ED0F8) + 16);
  if ( v1 != 0 )
  {
    v2 = result[3];
    v3 = result;
    v4 = v1;
    if ( v2 != v1 )
    {
      do
      {
        v2 -= 152;
        sub_CAE10(v2);
      }
      while ( v1 != v2 );
      v4 = v3[2];
    }
    v3[3] = v1;
    { sub_37030(v4); return; }
  }
  return;
}

// N11ubiservices11AsyncResultINS_6VectorINS_13EntityProfileEEEE14InternalResultE, virtual slot 1
__int64 __fastcall sub_1886B0(_QWORD *a1)
{
  __int64 v1; // x21
  __int64 v3; // x20
  __int64 v4; // x0

  v1 = a1[2];
  *a1 = ((char *)((__int64*)goff_18ED0F8) + 16);
  if ( v1 != 0 )
  {
    v3 = a1[3];
    v4 = v1;
    if ( v3 != v1 )
    {
      do
      {
        v3 -= 152;
        sub_CAE10(v3);
      }
      while ( v1 != v3 );
      v4 = a1[2];
    }
    a1[3] = v1;
    sub_37030(v4);
  }
  return sub_37030(a1);
}

// N11ubiservices17NotificationQueueINS_17EventNotificationEEE, virtual slot 0
__int64 __fastcall sub_18C760(__int64 a1)
{
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18ED1C8) + 16);
  sub_18C7E0(a1 + 72, *(_QWORD *)(a1 + 80));
  return pthread_mutex_destroy((pthread_mutex_t *)(a1 + 32));
}

// N11ubiservices17NotificationQueueINS_17EventNotificationEEE, virtual slot 1
__int64 __fastcall sub_18C7A0(__int64 a1)
{
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18ED1C8) + 16);
  sub_18C7E0(a1 + 72, *(_QWORD *)(a1 + 80));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 32));
  return sub_37030(a1);
}

// N11ubiservices17NotificationQueueINS_18FriendNotificationEEE, virtual slot 0
__int64 __fastcall sub_190B60(__int64 a1)
{
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18ED318) + 16);
  sub_190BE0(a1 + 72, *(_QWORD *)(a1 + 80));
  return pthread_mutex_destroy((pthread_mutex_t *)(a1 + 32));
}

// N11ubiservices17NotificationQueueINS_18FriendNotificationEEE, virtual slot 1
__int64 __fastcall sub_190BA0(__int64 a1)
{
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18ED318) + 16);
  sub_190BE0(a1 + 72, *(_QWORD *)(a1 + 80));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 32));
  return sub_37030(a1);
}

// N11ubiservices17NotificationQueueINS_22HttpStreamNotificationEEE, virtual slot 0
__int64 __fastcall sub_194DB0(__int64 a1)
{
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18ED470) + 16);
  sub_194E30(a1 + 72, *(_QWORD *)(a1 + 80));
  return pthread_mutex_destroy((pthread_mutex_t *)(a1 + 32));
}

// N11ubiservices17NotificationQueueINS_22HttpStreamNotificationEEE, virtual slot 1
__int64 __fastcall sub_194DF0(__int64 a1)
{
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18ED470) + 16);
  sub_194E30(a1 + 72, *(_QWORD *)(a1 + 80));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 32));
  return sub_37030(a1);
}

// N11ubiservices11AsyncResultINS_6VectorINS_8NewsInfoEEEE14InternalResultE, virtual slot 1
__int64 __fastcall sub_199C80(_QWORD *a1)
{
  __int64 v1; // x21
  __int64 v3; // x20
  __int64 v4; // x0

  v1 = a1[2];
  *a1 = ((char *)((__int64*)goff_18ED528) + 16);
  if ( v1 != 0 )
  {
    v3 = a1[3];
    v4 = v1;
    if ( v3 != v1 )
    {
      do
      {
        v3 -= 216;
        sub_109D60(v3);
      }
      while ( v1 != v3 );
      v4 = a1[2];
    }
    a1[3] = v1;
    sub_37030(v4);
  }
  return sub_37030(a1);
}

// N11ubiservices17NotificationQueueINS_23NotificationUbiServicesEEE, virtual slot 0
__int64 __fastcall sub_19C9E0(__int64 a1)
{
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18ED5C0) + 16);
  sub_19CA60(a1 + 72, *(_QWORD *)(a1 + 80));
  return pthread_mutex_destroy((pthread_mutex_t *)(a1 + 32));
}

// N11ubiservices17NotificationQueueINS_23NotificationUbiServicesEEE, virtual slot 1
__int64 __fastcall sub_19CA20(__int64 a1)
{
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18ED5C0) + 16);
  sub_19CA60(a1 + 72, *(_QWORD *)(a1 + 80));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 32));
  return sub_37030(a1);
}

// N11ubiservices17NotificationQueueINS_18NotificationCustomEEE, virtual slot 0
__int64 __fastcall sub_19EB40(__int64 a1)
{
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18ED5D0) + 16);
  sub_19EBC0(a1 + 72, *(_QWORD *)(a1 + 80));
  return pthread_mutex_destroy((pthread_mutex_t *)(a1 + 32));
}

// N11ubiservices17NotificationQueueINS_18NotificationCustomEEE, virtual slot 1
__int64 __fastcall sub_19EB80(__int64 a1)
{
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18ED5D0) + 16);
  sub_19EBC0(a1 + 72, *(_QWORD *)(a1 + 80));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 32));
  return sub_37030(a1);
}

// N11ubiservices17NotificationQueueINS_22ParametersNotificationEEE, virtual slot 0
__int64 __fastcall sub_1A1F90(__int64 a1)
{
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18ED600) + 16);
  sub_1A2010(a1 + 72, *(_QWORD *)(a1 + 80));
  return pthread_mutex_destroy((pthread_mutex_t *)(a1 + 32));
}

// N11ubiservices17NotificationQueueINS_22ParametersNotificationEEE, virtual slot 1
__int64 __fastcall sub_1A1FD0(__int64 a1)
{
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18ED600) + 16);
  sub_1A2010(a1 + 72, *(_QWORD *)(a1 + 80));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 32));
  return sub_37030(a1);
}

// N11ubiservices17NotificationQueueINS_22WebsocketConnection_BF20WebsocketBufferEventEEE, virtual slot 0
__int64 __fastcall sub_1B2110(__int64 a1)
{
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18ED910) + 2);
  sub_1B2190(a1 + 72, *(_QWORD *)(a1 + 80));
  return pthread_mutex_destroy((pthread_mutex_t *)(a1 + 32));
}

// N11ubiservices17NotificationQueueINS_22WebsocketConnection_BF20WebsocketBufferEventEEE, virtual slot 1
__int64 __fastcall sub_1B2150(__int64 a1)
{
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18ED910) + 2);
  sub_1B2190(a1 + 72, *(_QWORD *)(a1 + 80));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 32));
  return sub_37030(a1);
}

__int64 __fastcall sub_257230(__int64 a1)
{
  sub_287220(a1 + 312, *(_QWORD *)(a1 + 320));
  sub_57EF40(a1 + 304);
  sub_257280(a1 + 200);
  sub_257400(a1 + 152);
  return sub_257400(a1 + 104);
}

__int64 __fastcall sub_257C10(__int64 a1)
{
  __int64 result; // x0

  result = sub_287220(a1 + 312, *(_QWORD *)(a1 + 320));
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 312) = a1 + 320;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 76) = 1065353216;
  return result;
}

// N5storm4echo9voicechat25PlatformChatterDescriptorE, virtual slot 19
_Bool __fastcall sub_2592F0(__int64 a1, __int64 a2)
{
  if ( (sub_576540(a1, a2)) != 0
    && (sub_57F110(a1 + 40, a2 + 40)) != 0
    && (sub_57F110(a1 + 120, a2 + 120)) != 0 )
  {
    return sub_57F110(a1 + 184, a2 + 184);
  }
  else
  {
    return 0;
  }
}

// N5storm10DataNumberIhLNS_19DataNumberQualifier11EQualifiersE8ELj0EEE, virtual slot 4
void sub_2598C0(__int64 result, __int64 a2)
{
  int v2; // w20
  _BYTE *v3; // x9
  __int64 v4; // x19

  v2 = *(unsigned __int8 *)(a2 + 17);
  if ( *(unsigned __int8 *)(result + 17) != v2 )
  {
    *(_BYTE *)(result + 16) = 1;
    v3 = *(_BYTE **)(result + 8);
    *v3 = 1;
    v4 = result;
    result = (*(__int64 (**)(void))(*(_QWORD *)result + 56LL))();
    if ( (result & 1) != 0 )
      sub_56DC30((_QWORD *)v4);
    *(_BYTE *)(v4 + 17) = v2;
  }
  return;
}

// N5storm4echo25DataObjectReplicationModeE, virtual slot 4
void sub_25B940(__int64 result, __int64 a2)
{
  __int64 v3; // x19
  _BYTE *v4; // x9

  v3 = result;
  if ( *(_DWORD *)(a2 + 20) != *(_DWORD *)(result + 20) || *(_DWORD *)(a2 + 24) != *(_DWORD *)(result + 24) )
  {
    *(_BYTE *)(result + 16) = 1;
    v4 = *(_BYTE **)(result + 8);
    *v4 = 1;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 56LL))(result);
    if ( (result & 1) != 0 )
      sub_56DC30((_QWORD *)v3);
    *(_DWORD *)(v3 + 20) = *(_DWORD *)(a2 + 20);
    *(_DWORD *)(v3 + 24) = *(_DWORD *)(a2 + 24);
  }
  return;
}

int __fastcall sub_25C370(int a1)
{
  unsigned int v1; // w8

  if ( a1 < 1 )
    return 0;
  v1 = 0;
  do
  {
    ++v1;
    a1 = (unsigned int)a1 >> 1;
  }
  while ( a1 != 0 );
  return v1;
}

// N5storm4echo10DataVectorINS_10DataNumberItLNS_19DataNumberQualifier11EQualifiersE8ELj0EEELj0ELj127EEE, virtual slot 9
__int64 __fastcall sub_25C3A0(_QWORD *a1)
{
  __int64 result; // x0
  _BYTE *v3; // x9

  result = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 64LL))(a1);
  if ( (_DWORD)result != 0 )
  {
    *((_BYTE *)a1 + 16) = 1;
    v3 = (_BYTE *)a1[1];
    *v3 = 1;
    if ( ((*(__int64 (__fastcall **)(_QWORD *))(*a1 + 56LL))(a1) & 1) != 0 )
      sub_56DC30(a1);
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 80LL))(a1);
  }
  return result;
}

__int64 __fastcall sub_25CD30(__int64 a1, __int64 a2)
{
  __int64 v2; // x8
  __int64 v3; // x9
  __int64 v6; // x21
  __int64 result; // x0

  v2 = qword_1905F58;
  *(_DWORD *)(a1 + 8) = -1;
  v3 = ((__int64*)goff_18EDDF0);
  *(_QWORD *)(a1 + 16) = v2;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = v3 + 16;
  v6 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  result = sub_5B87B0(v6, a2);
  *(_QWORD *)(a1 + 32) = v6;
  return result;
}

__int64 __fastcall sub_25CE90(__int64 a1, __int64 a2)
{
  __int64 v2; // x8
  __int64 v3; // x9
  __int64 v6; // x21
  __int64 result; // x0

  v2 = qword_1905F58;
  *(_DWORD *)(a1 + 8) = -1;
  v3 = ((__int64*)goff_18EDDF8);
  *(_QWORD *)(a1 + 16) = v2;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = v3 + 16;
  v6 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  result = sub_5B87B0(v6, a2);
  *(_QWORD *)(a1 + 32) = v6;
  return result;
}

__int64 __fastcall sub_25D9C0(__int64 a1, __int64 a2)
{
  __int64 v2; // x8
  __int64 *v3; // x9
  __int64 v6; // x21
  __int64 result; // x0

  v2 = qword_1905F58;
  *(_DWORD *)(a1 + 8) = -1;
  v3 = ((__int64*)goff_18EDE20);
  *(_QWORD *)(a1 + 16) = v2;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = v3 + 2;
  v6 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  result = sub_5B87B0(v6, a2);
  *(_QWORD *)(a1 + 32) = v6;
  return result;
}

// N5storm4echo15GroupDescriptorE, virtual slot 19
_Bool __fastcall sub_25E950(__int64 a1, __int64 a2)
{
  if ( (sub_576540(a1, a2)) != 0
    && (sub_57F110(a1 + 40, a2 + 40)) != 0
    && (sub_57F110(a1 + 104, a2 + 104)) != 0
    && (sub_57F110(a1 + 144, a2 + 144)) != 0
    && (sub_57F110(a1 + 184, a2 + 184)) != 0
    && (sub_57F110(a1 + 224, a2 + 224)) != 0
    && (sub_57F110(a1 + 264, a2 + 264)) != 0
    && *(_DWORD *)(a1 + 296) == *(_DWORD *)(a2 + 296) )
  {
    return sub_57F110(a1 + 312, a2 + 312);
  }
  else
  {
    return 0;
  }
}

__int64 __fastcall sub_260140(__int64 a1, __int64 a2, __int64 *a3, int a4, __int64 a5, int a6, int a7, int *a8)
{
  int v14; // w23
  __int64 v15; // x19
  __int64 result; // x0
  __int64 v17; // [xsp+8h] [xbp-38h] BYREF

  v17 = *a3;
  sub_5859F0(a1, a2, &v17);
  *(_DWORD *)(a1 + 48) = a4;
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18EDEC8) + 2);
  v14 = *a8;
  v15 = sub_56C9F0(512, 8, 1092624384, 0LL, &unk_1326E41, 0);
  result = sub_268070(v15, a5);
  *(_QWORD *)(a1 + 56) = v15;
  *(_DWORD *)(a1 + 64) = a6;
  *(_DWORD *)(a1 + 68) = a7;
  *(_DWORD *)(a1 + 72) = v14;
  return result;
}

__int64 __fastcall sub_2601F0(__int64 a1, __int64 a2, __int64 *a3, int a4, __int64 a5, int a6, int a7)
{
  __int64 *v12; // x8
  __int64 v13; // x22
  __int64 result; // x0
  __int64 v15; // [xsp+8h] [xbp-28h] BYREF

  v15 = *a3;
  sub_5859F0(a1, a2, &v15);
  v12 = ((__int64*)goff_18EDEC8);
  *(_DWORD *)(a1 + 48) = a4;
  *(_QWORD *)a1 = v12 + 2;
  v13 = sub_56C9F0(512, 8, 1092624384, 0LL, &unk_1326E41, 0);
  result = sub_268070(v13, a5);
  *(_QWORD *)(a1 + 56) = v13;
  *(_DWORD *)(a1 + 64) = a6;
  *(_DWORD *)(a1 + 68) = a7;
  *(_DWORD *)(a1 + 72) = -1;
  return result;
}

void sub_2604D0(__int64 a1, __int64 a2, __int64 *a3, int a4, __int64 *a5, int a6, int a7)
{  __int64 v13; // x8
  __int64 v14; // x9
  __int64 v15; // [xsp+8h] [xbp-28h] BYREF

  v15 = *a3;
  sub_5859F0(a1, a2, &v15);
  *(_DWORD *)(a1 + 48) = a4;
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18EDED0) + 2);
  v13 = *a5;
  v14 = a5[1];
  *a5 = 0;
  a5[1] = 0;
  *(_DWORD *)(a1 + 72) = a6;
  *(_DWORD *)(a1 + 76) = a7;
  *(_QWORD *)(a1 + 56) = v13;
  *(_QWORD *)(a1 + 64) = v14;
  return;
}

void sub_260FD0(__int64 result, int a2, int a3, __int64 *a4)
{
  __int64 v4; // x8
  __int64 v5; // x9
  __int64 v6; // x10
  __int64 *v7; // x11

  v4 = *a4;
  v5 = a4[1];
  *a4 = 0;
  a4[1] = 0;
  v6 = qword_1905F58;
  *(_DWORD *)(result + 8) = -1;
  *(_DWORD *)(result + 32) = a2;
  *(_DWORD *)(result + 36) = a3;
  v7 = ((__int64*)goff_18EDF00);
  *(_QWORD *)(result + 40) = v4;
  *(_QWORD *)(result + 48) = v5;
  *(_QWORD *)(result + 16) = v6;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)result = v7 + 2;
  return;
}

// N5storm4echo16ObjectDescriptorE, virtual slot 19
_Bool __fastcall sub_268700(__int64 a1, __int64 a2)
{
  if ( (sub_576540(a1, a2)) != 0
    && (sub_57F110(a1 + 40, a2 + 40)) != 0
    && (sub_57F110(a1 + 80, a2 + 80)) != 0
    && (sub_57F110(a1 + 128, a2 + 128)) != 0
    && (sub_57F110(a1 + 168, a2 + 168)) != 0 )
  {
    return sub_57F110(a1 + 400, a2 + 400);
  }
  else
  {
    return 0;
  }
}

void sub_26A760(__int64 result, int a2, int a3, int a4, __int64 *a5)
{
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x10

  v5 = *a5;
  v6 = a5[1];
  *a5 = 0;
  a5[1] = 0;
  v7 = qword_1905F58;
  *(_DWORD *)(result + 8) = -1;
  *(_DWORD *)(result + 32) = a4;
  *(_QWORD *)(result + 40) = v5;
  *(_QWORD *)(result + 48) = v6;
  *(_QWORD *)(result + 16) = v7;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)result = ((__int64 *)((__int64*)goff_18EE4A0) + 2);
  *(_DWORD *)(result + 56) = a2;
  *(_DWORD *)(result + 60) = a3;
  return;
}

__int64 __fastcall sub_26AB70(__int64 result, int a2, int a3, int a4, __int64 *a5, int a6)
{
  __int64 v6; // x8
  __int64 v7; // x9
  unsigned __int64 *v8; // x10
  unsigned __int64 v9; // x11
  __int64 v10; // x10
  __int64 *v11; // x8

  v7 = *a5;
  v6 = a5[1];
  if ( v6 != 0 )
  {
    v8 = (unsigned __int64 *)(v6 + 8);
    v9 = __atomic_fetch_add(v8, 1, 0);
  }
  v10 = qword_1905F58;
  *(_DWORD *)(result + 8) = -1;
  *(_QWORD *)(result + 16) = v10;
  *(_QWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 32) = a4;
  *(_QWORD *)(result + 40) = v7;
  *(_QWORD *)(result + 48) = v6;
  *(_DWORD *)(result + 56) = a2;
  *(_DWORD *)(result + 60) = a6;
  v11 = ((__int64*)goff_18EE4A8);
  *(_QWORD *)result = v11 + 2;
  *(_DWORD *)(result + 64) = a3;
  return result;
}

__int64 __fastcall sub_26ABD0(__int64 result, int a2, int a3, int a4, __int64 *a5, int a6)
{
  __int64 v6; // x8
  __int64 v7; // x9
  unsigned __int64 *v8; // x10
  unsigned __int64 v9; // x11
  __int64 v10; // x10
  __int64 *v11; // x8

  v7 = *a5;
  v6 = a5[1];
  if ( v6 != 0 )
  {
    v8 = (unsigned __int64 *)(v6 + 8);
    v9 = __atomic_fetch_add(v8, 1, 0);
  }
  v10 = qword_1905F58;
  *(_DWORD *)(result + 8) = -1;
  *(_QWORD *)(result + 16) = v10;
  *(_QWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 32) = a4;
  *(_QWORD *)(result + 40) = v7;
  *(_QWORD *)(result + 48) = v6;
  *(_DWORD *)(result + 56) = a2;
  *(_DWORD *)(result + 60) = a6;
  v11 = goff_18EE4B0;
  *(_QWORD *)result = v11 + 2;
  *(_DWORD *)(result + 64) = a3;
  return result;
}

__int64 __fastcall sub_26DA60(_QWORD *a1, __int64 a2)
{
  __int64 v3; // x8
  __int64 v4; // x9
  __int64 v6; // x21
  __int64 result; // x0

  *a1 = 0;
  a1[1] = 0;
  v3 = qword_1905F58;
  *((_DWORD *)a1 + 2) = -1;
  v4 = ((__int64*)goff_18EE5E0);
  a1[2] = v3;
  a1[3] = 0;
  *a1 = v4 + 16;
  v6 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  result = sub_5B87B0(v6, a2);
  a1[4] = v6;
  return result;
}

__int64 __fastcall sub_26DBD0(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // x10
  __int64 v4; // x8
  char v7; // w22
  __int64 v8; // x21
  __int64 result; // x0

  v3 = goff_18EE5E8;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  v4 = qword_1905F58;
  *(_DWORD *)(a1 + 8) = -1;
  *(_QWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 24) = 0;
  v7 = a3 & 1;
  *(_QWORD *)a1 = v3 + 16;
  v8 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  result = sub_5B87B0(v8, a2);
  *(_QWORD *)(a1 + 32) = v8;
  *(_BYTE *)(a1 + 40) = v7;
  return result;
}

__int64 __fastcall sub_26DDB0(_QWORD *a1, unsigned int a2)
{
  if ( a2 >= (unsigned __int64)((__int64)(a1[1] - *a1) >> 3) )
    return 0;
  else
    return *(_QWORD *)(*a1 + 8LL * a2);
}

// N5storm4echo6engine11resultEvent7StartupE, virtual slot 5
__int64 __fastcall sub_270630(__int64 a1)
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
  v5 = goff_18EE7F8;
  *(_DWORD *)(result + 36) = *(_DWORD *)(a1 + 36);
  *(_QWORD *)(result + 40) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)result = v5 + 2;
  return result;
}

// N5storm4echo6object8outEvent4ScanE, virtual slot 5
__int64 __fastcall sub_2796D0(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x9
  __int64 v4; // x8
  __int64 v5; // x20
  unsigned __int64 *v6; // x8
  unsigned __int64 v7; // x9

  v2 = sub_56C9F0(88, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  v3 = goff_18EE008;
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = v3 + 16;
  *(_QWORD *)(v2 + 32) = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(v2 + 40) = *(_QWORD *)(a1 + 40);
  v4 = *(_QWORD *)(a1 + 48);
  v5 = v2;
  *(_QWORD *)(v2 + 48) = v4;
  if ( v4 != 0 )
  {
    v6 = (unsigned __int64 *)(v4 + 8);
    v7 = __atomic_fetch_add(v6, 1, 0);
  }
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18EE090) + 2);
  *(_DWORD *)(v2 + 56) = *(_DWORD *)(a1 + 56);
  sub_2B06B0((char *)(v2 + 64), (__int64 **)(a1 + 64));
  return v5;
}

unsigned int *__fastcall sub_27D5D0(__int64 a1)
{
  unsigned int *v1; // x19

  v1 = (unsigned int *)(a1 - 32);
  nullsub_1096(a1);
  return sub_577290(v1);
}

void __fastcall sub_27D600(__int64 a1)
{
  unsigned int *v1; // x19

  v1 = (unsigned int *)(a1 - 32);
  nullsub_1096(a1);
  sub_577290(v1);
  _ZdlPv(v1);
}

// N5storm4echo6engine8outEvent21PeerDescriptorUpdatedE, virtual slot 5
__int64 __fastcall sub_27F070(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x19
  __int64 v4; // x22
  __int64 v5; // x20

  v2 = sub_56C9F0(40, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18EDE20) + 2);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = v2;
  v5 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  sub_5B87B0(v5, v3);
  *(_QWORD *)(v4 + 32) = v5;
  return v4;
}

// N5storm4echo15GroupDescriptorE, virtual slot 5
__int64 __fastcall sub_27F5A0(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(496, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_25E630(v2, a1);
  return v2;
}

// N5storm4echo3lan8outEvent28MatchmakingPortBindingResultE, virtual slot 5
__int64 __fastcall sub_27F9F0(__int64 a1)
{
  __int64 result; // x0
  int v3; // w8

  result = sub_56C9F0(40, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(result + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = ((__int64 *)((__int64*)goff_18EDE88) + 2);
  v3 = *(_DWORD *)(a1 + 32);
  *(_BYTE *)(result + 36) = *(_BYTE *)(a1 + 36);
  *(_DWORD *)(result + 32) = v3;
  return result;
}

// N5storm4echo3lan8outEvent26DiscoveryPortBindingResultE, virtual slot 5
__int64 __fastcall sub_27FDD0(__int64 a1)
{
  __int64 result; // x0
  int v3; // w8

  result = sub_56C9F0(40, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(result + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = ((__int64 *)((__int64*)goff_18EDE90) + 2);
  v3 = *(_DWORD *)(a1 + 32);
  *(_BYTE *)(result + 36) = *(_BYTE *)(a1 + 36);
  *(_DWORD *)(result + 32) = v3;
  return result;
}

// N5storm4echo16ObjectDescriptorE, virtual slot 5
__int64 __fastcall sub_282B60(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(512, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_268070(v2, a1);
  return v2;
}

// N5storm4echo14objectObserver8outEvent10DiscoveredE, virtual slot 5
__int64 __fastcall sub_283020(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(112, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_269C60(v2, a1);
  return v2;
}

// N5storm4echo3QOS8outEvent28PeerNetworkInactivityClearedE, virtual slot 5
__int64 __fastcall sub_2853B0(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x23
  __int64 v4; // x22
  __int64 v5; // x20

  v2 = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = ((char *)goff_18EE5E8 + 16);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = v2;
  v5 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  sub_5B87B0(v5, v3);
  *(_QWORD *)(v4 + 32) = v5;
  *(_BYTE *)(v4 + 40) = *(_BYTE *)(a1 + 40);
  return v4;
}

// N5storm4echo6object7inEvent19SendLoopbackUnicastE, virtual slot 5
_QWORD *__fastcall sub_285BC0(__int64 a1)
{
  _QWORD *v2; // x20

  v2 = (_QWORD *)sub_56C9F0(56, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_298DF0((__int64)v2, a1);
  *v2 = ((__int64 *)((__int64*)goff_18EE140) + 2);
  return v2;
}

// N5storm4echo11peerChannel8outEvent13PeerBroadcastE, virtual slot 5
_QWORD *__fastcall sub_2869E0(__int64 a1)
{
  _QWORD *v2; // x20

  v2 = (_QWORD *)sub_56C9F0(72, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_26BCC0(v2, a1);
  *v2 = ((__int64 *)((__int64*)goff_18EE548) + 2);
  return v2;
}

// N5storm4echo11peerChannel8outEvent11PeerUnicastE, virtual slot 5
_QWORD *__fastcall sub_286DA0(__int64 a1)
{
  _QWORD *v2; // x20

  v2 = (_QWORD *)sub_56C9F0(72, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_26BCC0(v2, a1);
  *v2 = ((__int64 *)((__int64*)goff_18EE550) + 2);
  return v2;
}

// N5storm10DataNumberIhLNS_19DataNumberQualifier11EQualifiersE16ELj1EEE, virtual slot 4
void sub_2876A0(__int64 result, __int64 a2)
{
  int v2; // w20
  _BYTE *v3; // x9
  __int64 v4; // x19

  v2 = *(unsigned __int8 *)(a2 + 17);
  if ( *(unsigned __int8 *)(result + 17) != v2 )
  {
    *(_BYTE *)(result + 16) = 1;
    v3 = *(_BYTE **)(result + 8);
    *v3 = 1;
    v4 = result;
    result = (*(__int64 (**)(void))(*(_QWORD *)result + 56LL))();
    if ( (result & 1) != 0 )
      sub_56DC30((_QWORD *)v4);
    *(_BYTE *)(v4 + 17) = v2;
  }
  return;
}

// N5storm4echo6engine7inEvent20UpdatePeerDescriptorE, virtual slot 5
__int64 __fastcall sub_28D310(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x19
  __int64 v4; // x22
  __int64 v5; // x20

  v2 = sub_56C9F0(40, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18EDE38) + 2);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = v2;
  v5 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  sub_5B87B0(v5, v3);
  *(_QWORD *)(v4 + 32) = v5;
  return v4;
}

// N5storm18DynamicTypeFactoryINS_8FunctionEEE, virtual slot 2
__int64 __fastcall sub_28F6A0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // x0

  result = sub_56C9F0(24, 8, 1092624384, 0LL, a2, a3);
  *(_QWORD *)result = ((__int64 *)goff_18EFA10 + 2);
  *(_DWORD *)(result + 8) = -1;
  *(_QWORD *)(result + 16) = qword_1905F58;
  return result;
}

// N5storm18DynamicTypeFactoryINS_11TouchedBitsEEE, virtual slot 2
__int64 __fastcall sub_292390(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // x0
  __int64 v4; // x8

  result = sub_56C9F0(32, 8, 1092624384, 0LL, a2, a3);
  v4 = ((__int64*)goff_18EDF98);
  *(_QWORD *)result = v4 + 16;
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 24) = 32;
  return result;
}

// N5storm4echo6object7inEvent6CreateE, virtual slot 0
__int64 __fastcall sub_292790(_QWORD *a1)
{
  __int64 v2; // x0
  __int64 result; // x0

  *a1 = ((__int64 *)((__int64*)goff_18EFC40) + 2);
  v2 = a1[7];
  a1[7] = 0;
  if ( v2 != 0 )
    sub_2B7A60(v2, &unk_1326E41, 0);
  result = a1[5];
  a1[5] = 0;
  if ( result != 0 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  return result;
}

// N5storm4echo6object7inEvent6CreateE, virtual slot 1
__int64 __fastcall sub_292800(_QWORD *a1)
{
  __int64 v2; // x0
  __int64 v3; // x0

  *a1 = ((__int64 *)((__int64*)goff_18EFC40) + 2);
  v2 = a1[7];
  a1[7] = 0;
  if ( v2 != 0 )
    sub_2B7A60(v2, &unk_1326E41, 0);
  v3 = a1[5];
  a1[5] = 0;
  if ( v3 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm4echo6object7inEvent6CreateE, virtual slot 5
__int64 __fastcall sub_292940(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(64, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_2933F0(v2, a1);
  return v2;
}

// N5storm4echo6object7inEvent20DeleteWithDescriptorE, virtual slot 5
__int64 __fastcall sub_296810(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x23
  __int64 v4; // x22
  __int64 v5; // x20

  v2 = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18EFCD8) + 2);
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18EE0F0) + 2);
  v3 = *(_QWORD *)(a1 + 40);
  v4 = v2;
  v5 = sub_56C9F0(512, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_268070(v5, v3);
  *(_QWORD *)(v4 + 40) = v5;
  *(_BYTE *)(v4 + 36) = *(_BYTE *)(a1 + 36);
  return v4;
}

// N5storm4echo6object7inEvent18SendReplicaMessageE, virtual slot 5
_QWORD *__fastcall sub_298720(__int64 a1)
{
  _QWORD *v2; // x20

  v2 = (_QWORD *)sub_56C9F0(56, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_298DF0((__int64)v2, a1);
  *v2 = ((__int64 *)((__int64*)goff_18EE118) + 2);
  return v2;
}

// N5storm4echo6object7inEvent19SendMasterBroadcastE, virtual slot 5
_QWORD *__fastcall sub_299700(__int64 a1)
{
  _QWORD *v2; // x20

  v2 = (_QWORD *)sub_56C9F0(56, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_298DF0(v2, a1);
  *v2 = ((__int64 *)((__int64*)goff_18EE128) + 2);
  return v2;
}

// N5storm4echo6object7inEvent26SendMasterBroadcastExcludeE, virtual slot 5
__int64 __fastcall sub_299BD0(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(64, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_298DF0(v2, a1);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18EE130) + 2);
  *(_DWORD *)(v2 + 56) = *(_DWORD *)(a1 + 56);
  return v2;
}

// N5storm4echo6object7inEvent17SendMasterUnicastE, virtual slot 5
__int64 __fastcall sub_29A140(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(64, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_298DF0(v2, a1);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18EE138) + 2);
  *(_DWORD *)(v2 + 56) = *(_DWORD *)(a1 + 56);
  return v2;
}

// N5storm18DynamicTypeFactoryINS_18DataContainerEmptyEEE, virtual slot 2
_QWORD *__fastcall sub_29AEB0(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *result; // x0

  result = (_QWORD *)sub_56C9F0(8, 8, 1092624384, 0LL, a2, a3);
  *result = ((__int64 *)((__int64*)goff_18EE150) + 2);
  return result;
}

// N5storm4echo6object7inEvent20AcceptGiveMasterRoleE, virtual slot 5
__int64 __fastcall sub_29B730(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x9
  __int64 v4; // x8
  __int64 *v5; // x9
  __int64 *v6; // x9

  result = sub_56C9F0(40, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = goff_18EFCE8;
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v3 + 2;
  v5 = goff_18F01E8;
  *(_QWORD *)(result + 24) = v4;
  LODWORD(v4) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)result = v5 + 2;
  v6 = ((__int64*)goff_18EE160);
  *(_DWORD *)(result + 32) = v4;
  *(_DWORD *)(result + 36) = *(_DWORD *)(a1 + 36);
  *(_QWORD *)result = v6 + 2;
  return result;
}

// N5storm4echo6object7inEvent20RefuseGiveMasterRoleE, virtual slot 5
__int64 __fastcall sub_29C110(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x9
  __int64 v4; // x8
  __int64 *v5; // x9
  __int64 *v6; // x9

  result = sub_56C9F0(40, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = goff_18EFCE8;
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v3 + 2;
  v5 = goff_18F01E8;
  *(_QWORD *)(result + 24) = v4;
  LODWORD(v4) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)result = v5 + 2;
  v6 = ((__int64*)goff_18EE168);
  *(_DWORD *)(result + 32) = v4;
  *(_DWORD *)(result + 36) = *(_DWORD *)(a1 + 36);
  *(_QWORD *)result = v6 + 2;
  return result;
}

// N5storm27NetPropertyRefDataContainerE, virtual slot 5
__int64 __fastcall sub_2A0030(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(192, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_2A07D0(v2, a1);
  return v2;
}

// N5storm4echo11peerChannel7inEvent17SendPeerBroadcastE, virtual slot 5
_QWORD *__fastcall sub_2A1A40(__int64 a1)
{
  _QWORD *v2; // x20

  v2 = (_QWORD *)sub_56C9F0(80, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_2A22F0((__int64)v2, a1);
  *v2 = ((__int64 *)((__int64*)goff_18EE508) + 2);
  sub_2A1720(v2 + 7, a1 + 56);
  return v2;
}

// N5storm4echo11peerChannel7inEvent11SendMessageE, virtual slot 5
__int64 __fastcall sub_2A1F60(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(56, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_2A22F0(v2, a1);
  return v2;
}

// N5storm4echo11peerChannel7inEvent15SendPeerUnicastE, virtual slot 5
__int64 __fastcall sub_2A28C0(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(64, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_2A22F0(v2, a1);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18EE510) + 2);
  *(_DWORD *)(v2 + 56) = *(_DWORD *)(a1 + 56);
  return v2;
}

// N5storm4echo11peerChannel7inEvent24SendPeerBroadcastExcludeE, virtual slot 5
_QWORD *__fastcall sub_2A2EB0(__int64 a1)
{
  _QWORD *v2; // x20

  v2 = (_QWORD *)sub_56C9F0(80, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_2A22F0(v2, a1);
  *v2 = ((__int64 *)((__int64*)goff_18EE518) + 2);
  sub_2A1720(v2 + 7, a1 + 56);
  return v2;
}

// N5storm4echo11peerChannel7inEvent23SendPeerPacketBroadcastE, virtual slot 5
_QWORD *__fastcall sub_2A3500(__int64 a1)
{
  _QWORD *v2; // x20

  v2 = (_QWORD *)sub_56C9F0(56, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_2A22F0(v2, a1);
  *v2 = ((__int64 *)((__int64*)goff_18EE520) + 2);
  return v2;
}

// N5storm4echo11peerChannel7inEvent21SendPeerPacketUnicastE, virtual slot 5
__int64 __fastcall sub_2A3A00(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(64, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_2A22F0(v2, a1);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18EE528) + 2);
  *(_DWORD *)(v2 + 56) = *(_DWORD *)(a1 + 56);
  return v2;
}

// N5storm4echo11peerChannel7inEvent30SendPeerPacketBroadcastExcludeE, virtual slot 5
_QWORD *__fastcall sub_2A3FF0(__int64 a1)
{
  _QWORD *v2; // x20

  v2 = (_QWORD *)sub_56C9F0(80, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_2A22F0(v2, a1);
  *v2 = ((__int64 *)((__int64*)goff_18EE530) + 2);
  sub_2A1720(v2 + 7, a1 + 56);
  return v2;
}

// N5storm4echo3QOS7inEvent4PingE, virtual slot 5
__int64 __fastcall sub_2A5150(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x23
  __int64 v4; // x22
  __int64 v5; // x20

  v2 = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18EE600) + 2);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = v2;
  v5 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  sub_5B87B0(v5, v3);
  *(_QWORD *)(v4 + 32) = v5;
  *(_DWORD *)(v4 + 40) = *(_DWORD *)(a1 + 40);
  return v4;
}

// N5storm4echo8registry7inEvent16AddObjectMementoE, virtual slot 5
__int64 __fastcall sub_2A73F0(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x9
  __int64 v4; // x8

  result = sub_56C9F0(64, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  v3 = goff_18F09A8;
  *(_QWORD *)(result + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v3 + 2;
  *(_DWORD *)(result + 32) = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(result + 36) = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(result + 40) = *(_DWORD *)(a1 + 40);
  *(_QWORD *)result = ((__int64 *)((__int64*)goff_18EE620) + 2);
  v4 = *(_QWORD *)(a1 + 44);
  *(_QWORD *)(result + 52) = *(_QWORD *)(a1 + 52);
  *(_QWORD *)(result + 44) = v4;
  return result;
}

// N5storm18DynamicTypeFactoryINS_4echo6object8outEvent5ReadyEEE, virtual slot 2
__int64 __fastcall sub_2AD9E0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // x0
  __int64 v4; // x8

  result = sub_56C9F0(56, 8, 1092624387, 0LL, a2, a3);
  *(_QWORD *)result = 0;
  *(_QWORD *)(result + 8) = 0;
  v4 = qword_1905F58;
  *(_DWORD *)(result + 8) = -1;
  *(_DWORD *)(result + 32) = -1;
  *(_DWORD *)(result + 52) = 0;
  *(_QWORD *)(result + 44) = 0;
  *(_QWORD *)(result + 36) = 0;
  *(_QWORD *)(result + 16) = v4;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)result = ((__int64 *)((__int64*)goff_18EDF00) + 2);
  return result;
}

// N5storm18DynamicTypeFactoryINS_4echo6object8outEvent14MasterResolvedEEE, virtual slot 2
__int64 __fastcall sub_2ADE40(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // x0
  __int64 v4; // x8

  result = sub_56C9F0(64, 8, 1092624387, 0LL, a2, a3);
  v4 = qword_1905F58;
  *(_DWORD *)(result + 8) = -1;
  *(_DWORD *)(result + 32) = -1;
  *(_QWORD *)(result + 44) = 0;
  *(_QWORD *)(result + 36) = 0;
  *(_QWORD *)(result + 52) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(result + 16) = v4;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)result = ((__int64 *)((__int64*)goff_18EDF08) + 2);
  return result;
}

// N5storm18DynamicTypeFactoryINS_4echo6object8outEvent15ReplicaResolvedEEE, virtual slot 2
__int64 __fastcall sub_2ADFE0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // x0
  __int64 v4; // x8

  result = sub_56C9F0(64, 8, 1092624387, 0LL, a2, a3);
  v4 = qword_1905F58;
  *(_DWORD *)(result + 8) = -1;
  *(_DWORD *)(result + 32) = -1;
  *(_QWORD *)(result + 44) = 0;
  *(_QWORD *)(result + 36) = 0;
  *(_QWORD *)(result + 52) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(result + 16) = v4;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)result = ((__int64 *)((__int64*)goff_18EDF10) + 2);
  return result;
}

// N5storm18DynamicTypeFactoryINS_4echo6object8outEvent20ResolvedReplicaReadyEEE, virtual slot 2
__int64 __fastcall sub_2AE2C0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // x0
  __int64 v4; // x8

  result = sub_56C9F0(64, 8, 1092624387, 0LL, a2, a3);
  v4 = qword_1905F58;
  *(_DWORD *)(result + 8) = -1;
  *(_DWORD *)(result + 32) = -1;
  *(_QWORD *)(result + 44) = 0;
  *(_QWORD *)(result + 36) = 0;
  *(_QWORD *)(result + 52) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(result + 16) = v4;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)result = ((__int64 *)((__int64*)goff_18EDF20) + 2);
  return result;
}

// N5storm18DynamicTypeFactoryINS_4echo6object8outEvent10MasterGoneEEE, virtual slot 2
__int64 __fastcall sub_2AE6E0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // x0
  __int64 v4; // x8

  result = sub_56C9F0(64, 8, 1092624387, 0LL, a2, a3);
  v4 = qword_1905F58;
  *(_DWORD *)(result + 8) = -1;
  *(_DWORD *)(result + 32) = -1;
  *(_QWORD *)(result + 44) = 0;
  *(_QWORD *)(result + 36) = 0;
  *(_QWORD *)(result + 52) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(result + 16) = v4;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)result = ((__int64 *)((__int64*)goff_18EDF38) + 2);
  return result;
}

// N5storm18DynamicTypeFactoryINS_4echo6object8outEvent11ReplicaGoneEEE, virtual slot 2
__int64 __fastcall sub_2AE880(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // x0
  __int64 v4; // x8

  result = sub_56C9F0(64, 8, 1092624387, 0LL, a2, a3);
  v4 = qword_1905F58;
  *(_DWORD *)(result + 8) = -1;
  *(_DWORD *)(result + 32) = -1;
  *(_QWORD *)(result + 44) = 0;
  *(_QWORD *)(result + 36) = 0;
  *(_QWORD *)(result + 52) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(result + 16) = v4;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)result = ((__int64 *)((__int64*)goff_18EDF40) + 2);
  return result;
}

// N5storm18DynamicTypeFactoryINS_4echo6object8outEvent18MasterRoleMigratedEEE, virtual slot 2
__int64 __fastcall sub_2AF510(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // x0
  __int64 v4; // x8
  __int64 *v5; // x9

  result = sub_56C9F0(64, 8, 1092624387, 0LL, a2, a3);
  v4 = qword_1905F58;
  *(_DWORD *)(result + 8) = -1;
  *(_DWORD *)(result + 32) = -1;
  *(_DWORD *)(result + 52) = 0;
  v5 = ((__int64*)goff_18EE028);
  *(_QWORD *)(result + 44) = 0;
  *(_QWORD *)(result + 16) = v4;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)result = v5 + 2;
  *(_QWORD *)(result + 36) = 0;
  *(_QWORD *)(result + 56) = -1;
  return result;
}

// N5storm18DynamicTypeFactoryINS_4echo14objectObserver8outEvent4GoneEEE, virtual slot 2
__int64 __fastcall sub_2B07D0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // x0
  __int64 v4; // x8
  __int64 *v5; // x9

  result = sub_56C9F0(64, 8, 1092624387, 0LL, a2, a3);
  v4 = qword_1905F58;
  *(_DWORD *)(result + 8) = -1;
  *(_DWORD *)(result + 32) = 0;
  v5 = ((__int64*)goff_18EE4A0);
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 16) = v4;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)result = v5 + 2;
  *(_QWORD *)(result + 56) = -1;
  return result;
}

// N5storm18DynamicTypeFactoryINS_4echo9voicechat17ChatterDescriptorEEE, virtual slot 2
__int64 __fastcall sub_2B21E0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0

  v3 = sub_56C9F0(288, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_258AA0(v3, v4);
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo9voicechat17ChatterDescriptorEEE, virtual slot 3
__int64 __fastcall sub_2B2230(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20

  v5 = sub_56C9F0(288, 8, 1092624384, 0LL, a3, a4);
  sub_258AA0(v5, a2);
  return v5;
}

// N5storm18DynamicTypeFactoryINS_4echo8emulator8outEvent5StatsEEE, virtual slot 2
__int64 __fastcall sub_2B26C0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // x0
  __int64 v4; // x8
  __int64 *v5; // x9

  result = sub_56C9F0(72, 8, 1092624387, 0LL, a2, a3);
  v4 = qword_1905F58;
  *(_DWORD *)(result + 8) = -1;
  *(_DWORD *)(result + 64) = 0;
  v5 = goff_18EEF90;
  *(_QWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 56) = 0;
  *(_QWORD *)(result + 16) = v4;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)result = v5 + 2;
  *(_QWORD *)(result + 40) = 0;
  return result;
}

// N5storm18DynamicTypeFactoryINS_4echo15GroupDescriptorEEE, virtual slot 2
__int64 __fastcall sub_2B2F60(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0

  v3 = sub_56C9F0(496, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_25E200(v3, v4);
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo15GroupDescriptorEEE, virtual slot 3
__int64 __fastcall sub_2B2FB0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20

  v5 = sub_56C9F0(496, 8, 1092624384, 0LL, a3, a4);
  sub_25E200(v5, a2);
  return v5;
}

// N5storm18DynamicTypeFactoryINS_4echo6object8outEvent11ReadMementoEEE, virtual slot 2
__int64 __fastcall sub_2B3760(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // x0

  result = sub_56C9F0(96, 8, 1092624387, 0LL, a2, a3);
  *(_QWORD *)(result + 16) = qword_1905F58;
  *(_QWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 8) = -1;
  *(_DWORD *)(result + 32) = -1;
  *(_DWORD *)(result + 52) = 0;
  *(_QWORD *)(result + 44) = 0;
  *(_QWORD *)(result + 36) = 0;
  *(_QWORD *)(result + 56) = -1;
  *(_QWORD *)(result + 64) = -1;
  *(_QWORD *)result = ((char *)((__int64*)goff_18EDFD8) + 16);
  *(_WORD *)(result + 72) = 0;
  *(_QWORD *)(result + 80) = 0;
  *(_QWORD *)(result + 88) = 0;
  return result;
}

// N5storm18DynamicTypeFactoryINS_4echo6object8outEvent16MultiReadMementoEEE, virtual slot 2
__int64 __fastcall sub_2B3910(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // x0
  __int64 v4; // x8
  __int64 v5; // x8

  result = sub_56C9F0(80, 8, 1092624387, 0LL, a2, a3);
  v4 = qword_1905F58;
  *(_DWORD *)(result + 8) = -1;
  *(_DWORD *)(result + 32) = -1;
  *(_DWORD *)(result + 52) = 0;
  *(_QWORD *)(result + 44) = 0;
  *(_QWORD *)(result + 36) = 0;
  *(_QWORD *)(result + 16) = v4;
  *(_QWORD *)(result + 24) = 0;
  v5 = ((__int64*)goff_18EE000);
  *(_QWORD *)(result + 64) = 0;
  *(_QWORD *)(result + 72) = 0;
  *(_QWORD *)result = v5 + 16;
  *(_QWORD *)(result + 56) = 0;
  return result;
}

// N5storm18DynamicTypeFactoryINS_4echo16ObjectDescriptorEEE, virtual slot 2
__int64 __fastcall sub_2B3EA0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0

  v3 = sub_56C9F0(512, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_267C90(v3, v4);
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo16ObjectDescriptorEEE, virtual slot 3
__int64 __fastcall sub_2B3EF0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20

  v5 = sub_56C9F0(512, 8, 1092624384, 0LL, a3, a4);
  sub_267C90(v5, a2);
  return v5;
}

// N5storm18DynamicTypeFactoryINS_4echo11peerChannel8outEvent15OversizeMessageEEE, virtual slot 2
__int64 __fastcall sub_2B4510(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // x0
  __int64 v4; // x8
  __int64 *v5; // x10

  result = sub_56C9F0(48, 8, 1092624387, 0LL, a2, a3);
  v4 = qword_1905F58;
  *(_DWORD *)(result + 8) = -1;
  v5 = ((__int64*)goff_18EE558);
  *(_QWORD *)result = v5 + 2;
  *(_QWORD *)(result + 16) = v4;
  *(_QWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 32) = -1;
  *(_QWORD *)(result + 36) = -1;
  *(_DWORD *)(result + 44) = 0;
  return result;
}

// N5storm15NetPropertyDataINS_4GUIDENS_20NetPropertyDataTraitIS1_EEEE, virtual slot 5
__int64 __fastcall sub_2B60E0(__int64 a1)
{
  __int64 v2; // x20
  __int64 *v3; // x8
  __int64 v4; // x8
  __int64 v5; // x9

  v2 = sub_56C9F0(48, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)((__int64*)goff_18EDCE8) + 24);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18EDCE8) + 2);
  *(_QWORD *)(v2 + 8) = v3;
  v4 = *(_QWORD *)(a1 + 26);
  v5 = *(_QWORD *)(a1 + 34);
  *(_DWORD *)(v2 + 41) = *(_DWORD *)(a1 + 41);
  *(_QWORD *)(v2 + 34) = v5;
  *(_QWORD *)(v2 + 26) = v4;
  return v2;
}

// N5storm18DynamicTypeFactoryINS_15NetPropertyDataINS_4GUIDENS_20NetPropertyDataTraitIS2_EEEEEE, virtual slot 2
__int64 __fastcall sub_2B6480(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0
  __int64 *v5; // x8

  v3 = sub_56C9F0(48, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_57F050(v3, v4);
  v5 = ((__int64*)goff_18EDCE8);
  *(_BYTE *)(v3 + 26) = 0;
  *(_QWORD *)v3 = v5 + 2;
  *(_QWORD *)(v3 + 8) = v5 + 24;
  return v3;
}

// N5storm18DynamicTypeFactoryINS_15NetPropertyDataINS_4GUIDENS_20NetPropertyDataTraitIS2_EEEEEE, virtual slot 3
__int64 __fastcall sub_2B64F0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20
  __int64 *v6; // x8

  v5 = sub_56C9F0(48, 8, 1092624384, 0LL, a3, a4);
  sub_57F050(v5, a2);
  v6 = ((__int64*)goff_18EDCE8);
  *(_BYTE *)(v5 + 26) = 0;
  *(_QWORD *)v5 = v6 + 2;
  *(_QWORD *)(v5 + 8) = v6 + 24;
  return v5;
}

// N5storm18DynamicTypeFactoryINS_4echo14objectObserver8outEvent19BrokerObjectCreatedEEE, virtual slot 2
__int64 __fastcall sub_2B7DA0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // x0
  __int64 v4; // x8

  result = sub_56C9F0(72, 8, 1092624387, 0LL, a2, a3);
  v4 = qword_1905F58;
  *(_DWORD *)(result + 8) = -1;
  *(_DWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 56) = -1;
  *(_DWORD *)(result + 64) = -1;
  *(_QWORD *)(result + 16) = v4;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)result = ((__int64 *)((__int64*)goff_18EE4A8) + 2);
  return result;
}

// N5storm18DynamicTypeFactoryINS_4echo14objectObserver8outEvent19BrokerObjectDeletedEEE, virtual slot 2
__int64 __fastcall sub_2B7F40(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // x0
  __int64 v4; // x8

  result = sub_56C9F0(72, 8, 1092624387, 0LL, a2, a3);
  v4 = qword_1905F58;
  *(_DWORD *)(result + 8) = -1;
  *(_DWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 56) = -1;
  *(_DWORD *)(result + 64) = -1;
  *(_QWORD *)(result + 16) = v4;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)result = ((__int64 *)goff_18EE4B0 + 2);
  return result;
}

// N5storm18DynamicTypeFactoryINS_4echo11peerChannel8outEvent13PeerBroadcastEEE, virtual slot 2
__int64 __fastcall sub_2B80E0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // x0
  __int64 v4; // x8

  result = sub_56C9F0(72, 8, 1092624387, 0LL, a2, a3);
  v4 = qword_1905F58;
  *(_DWORD *)(result + 8) = -1;
  *(_DWORD *)(result + 40) = -1;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = -1;
  *(_QWORD *)(result + 16) = v4;
  *(_QWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 56) = -1;
  *(_DWORD *)(result + 64) = -1;
  *(_QWORD *)result = ((__int64 *)((__int64*)goff_18EE548) + 2);
  return result;
}

// N5storm18DynamicTypeFactoryINS_4echo11peerChannel8outEvent11PeerUnicastEEE, virtual slot 2
__int64 __fastcall sub_2B8280(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // x0
  __int64 v4; // x8

  result = sub_56C9F0(72, 8, 1092624387, 0LL, a2, a3);
  v4 = qword_1905F58;
  *(_DWORD *)(result + 8) = -1;
  *(_DWORD *)(result + 40) = -1;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = -1;
  *(_QWORD *)(result + 16) = v4;
  *(_QWORD *)(result + 48) = 0;
  *(_QWORD *)(result + 56) = -1;
  *(_DWORD *)(result + 64) = -1;
  *(_QWORD *)result = ((__int64 *)((__int64*)goff_18EE550) + 2);
  return result;
}

__int64 __fastcall sub_2B8970(
        __int64 result,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 *a9,
        __int64 *a10,
        char a11,
        char a12)
{
  __int64 v12; // x12
  __int64 v13; // x13
  __int64 v14; // x12
  __int64 v15; // x13
  int v16; // w10

  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a3;
  *(_DWORD *)(result + 8) = a4;
  *(_DWORD *)(result + 12) = a5;
  *(_DWORD *)(result + 16) = a6;
  *(_DWORD *)(result + 20) = a7;
  *(_QWORD *)(result + 24) = a8;
  v12 = *a9;
  v13 = a9[1];
  *(_DWORD *)(result + 47) = *(_DWORD *)((char *)a9 + 15);
  *(_QWORD *)(result + 32) = v12;
  *(_QWORD *)(result + 40) = v13;
  v14 = *a10;
  v15 = a10[1];
  v16 = *(_DWORD *)((char *)a10 + 15);
  *(_BYTE *)(result + 70) = a11;
  *(_DWORD *)(result + 66) = v16;
  *(_QWORD *)(result + 59) = v15;
  *(_QWORD *)(result + 51) = v14;
  *(_DWORD *)(result + 72) = -1;
  *(_BYTE *)(result + 76) = 1;
  if ( a12 != 1 )
    *(_DWORD *)(result + 72) = a3;
  return result;
}

__int64 __fastcall sub_2B89E0(__int64 result, __int64 a2)
{
  __int64 v2; // x8
  __int64 v3; // x9
  __int64 v4; // x8
  __int64 v5; // x9

  *(_DWORD *)(result + 72) = -1;
  *(_BYTE *)(result + 32) = 0;
  *(_BYTE *)(result + 51) = 0;
  *(_BYTE *)(result + 76) = 1;
  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 8);
  v2 = *(_QWORD *)(a2 + 51);
  v3 = *(_QWORD *)(a2 + 59);
  *(_DWORD *)(result + 66) = *(_DWORD *)(a2 + 66);
  *(_QWORD *)(result + 59) = v3;
  *(_QWORD *)(result + 51) = v2;
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a2 + 20);
  *(_QWORD *)(result + 24) = *(_QWORD *)(a2 + 24);
  v4 = *(_QWORD *)(a2 + 32);
  v5 = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(result + 47) = *(_DWORD *)(a2 + 47);
  *(_QWORD *)(result + 32) = v4;
  *(_QWORD *)(result + 40) = v5;
  *(_BYTE *)(result + 70) = *(_BYTE *)(a2 + 70);
  LODWORD(v4) = *(_DWORD *)(a2 + 72);
  *(_BYTE *)(result + 76) = *(_BYTE *)(a2 + 76);
  *(_DWORD *)(result + 72) = v4;
  return result;
}

__int64 __fastcall sub_2B9210(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4, int a5)
{
  __int64 result; // x0
  __int64 v9; // x8
  __int64 v10; // x9
  __int64 v11; // [xsp+8h] [xbp-18h] BYREF

  v11 = *a3;
  result = sub_5859F0(a1, a2, &v11);
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18F1210) + 2);
  v9 = *a4;
  v10 = a4[1];
  *(_DWORD *)(a1 + 63) = *(_DWORD *)((char *)a4 + 15);
  *(_QWORD *)(a1 + 48) = v9;
  *(_QWORD *)(a1 + 56) = v10;
  *(_DWORD *)(a1 + 68) = a5;
  return result;
}

__int64 __fastcall sub_2BA0B0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 *v6; // x8
  __int64 v7; // x21
  __int64 result; // x0
  __int64 v9; // [xsp+8h] [xbp-18h] BYREF

  v9 = *a3;
  sub_5859F0(a1, a2, &v9);
  *(_QWORD *)(a1 + 72) = 0;
  v6 = ((__int64*)goff_18F1228);
  *(_QWORD *)a1 = v6 + 2;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 80) = -1;
  v7 = sub_56C9F0(280, 8, 1092624384, 0LL, &unk_1326E41, 0);
  result = sub_26D390(v7, a4);
  *(_QWORD *)(a1 + 88) = v7;
  return result;
}

void sub_2BA550(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4, int a5, int a6)
{  __int64 v11; // x8
  __int64 v12; // x9
  __int64 *v13; // x8
  __int64 v14; // [xsp+8h] [xbp-28h] BYREF

  v14 = *a3;
  sub_5859F0(a1, a2, &v14);
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18F1210) + 2);
  v11 = *a4;
  v12 = a4[1];
  *(_DWORD *)(a1 + 63) = *(_DWORD *)((char *)a4 + 15);
  *(_QWORD *)(a1 + 48) = v11;
  *(_QWORD *)(a1 + 56) = v12;
  v13 = ((__int64*)goff_18F1230);
  *(_DWORD *)(a1 + 68) = a5;
  *(_DWORD *)(a1 + 72) = a6;
  *(_QWORD *)a1 = v13 + 2;
  return;
}

void sub_2BA6D0(__int64 result, __int64 *a2, int a3, int a4, __int64 *a5)
{
  __int64 v5; // x8
  __int64 *v6; // x9
  __int64 v7; // x8
  __int64 v8; // x9

  v5 = *a5;
  v6 = ((__int64*)goff_18F1238);
  *(_DWORD *)(result + 8) = a4;
  *(_QWORD *)(result + 16) = v5;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)result = v6 + 2;
  v7 = *a2;
  v8 = a2[1];
  *(_DWORD *)(result + 47) = *(_DWORD *)((char *)a2 + 15);
  *(_QWORD *)(result + 32) = v7;
  *(_QWORD *)(result + 40) = v8;
  *(_DWORD *)(result + 52) = a3;
  return;
}

void sub_2BCEF0(__int64 result, __int64 *a2, int a3, int a4)
{
  __int64 v4; // x8
  __int64 *v5; // x9
  __int64 v6; // x8
  __int64 v7; // x9
  __int64 v8; // x8

  v4 = qword_1907E28;
  *(_DWORD *)(result + 8) = -1;
  v5 = ((__int64*)goff_18F1238);
  *(_QWORD *)(result + 16) = v4;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)result = v5 + 2;
  v6 = *a2;
  v7 = a2[1];
  *(_DWORD *)(result + 47) = *(_DWORD *)((char *)a2 + 15);
  *(_QWORD *)(result + 32) = v6;
  *(_QWORD *)(result + 40) = v7;
  v8 = ((__int64*)goff_18F1288);
  *(_DWORD *)(result + 52) = a3;
  *(_DWORD *)(result + 56) = a4;
  *(_QWORD *)result = v8 + 16;
  return;
}

void sub_2BD040(__int64 result, __int64 *a2, int a3, int a4)
{
  __int64 v4; // x8
  __int64 *v5; // x9
  __int64 v6; // x8
  __int64 v7; // x9
  __int64 v8; // x8

  v4 = qword_1907E28;
  *(_DWORD *)(result + 8) = -1;
  v5 = ((__int64*)goff_18F1238);
  *(_QWORD *)(result + 16) = v4;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)result = v5 + 2;
  v6 = *a2;
  v7 = a2[1];
  *(_DWORD *)(result + 47) = *(_DWORD *)((char *)a2 + 15);
  *(_QWORD *)(result + 32) = v6;
  *(_QWORD *)(result + 40) = v7;
  v8 = ((__int64*)goff_18F1290);
  *(_DWORD *)(result + 52) = a3;
  *(_DWORD *)(result + 56) = a4;
  *(_QWORD *)result = v8 + 16;
  return;
}

__int64 __fastcall sub_2BDAE0(__int64 a1, __int64 *a2, int a3, int a4, __int64 a5, int a6, __int64 a7, int a8)
{
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x9
  __int64 v11; // x10
  __int64 v16; // x24
  __int64 result; // x0
  __int64 v18; // x21

  v8 = qword_1907E28;
  *(_DWORD *)(a1 + 8) = -1;
  *(_QWORD *)(a1 + 16) = v8;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18F1238) + 2);
  v9 = ((__int64*)goff_18F12B8);
  v10 = *a2;
  v11 = a2[1];
  *(_DWORD *)(a1 + 47) = *(_DWORD *)((char *)a2 + 15);
  *(_QWORD *)(a1 + 32) = v10;
  *(_QWORD *)(a1 + 40) = v11;
  *(_QWORD *)a1 = v9 + 16;
  *(_DWORD *)(a1 + 52) = a3;
  *(_DWORD *)(a1 + 56) = a4;
  *(_DWORD *)(a1 + 60) = a6;
  v16 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  result = sub_5B87B0(v16, a5);
  *(_QWORD *)(a1 + 64) = v16;
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = a8;
  if ( a7 != 0 )
  {
    v18 = sub_56C9F0(1000, 8, 1092624384, 0LL, &unk_1326E41, 0);
    sub_2C1BF0(v18, a7);
    result = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 72) = v18;
    if ( result != 0 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

void sub_2BDF90(__int64 result, __int64 *a2, int a3, int a4)
{
  __int64 v4; // x8
  __int64 *v5; // x9
  __int64 v6; // x8
  __int64 v7; // x9
  __int64 v8; // x8

  v4 = qword_1907E28;
  *(_DWORD *)(result + 8) = -1;
  v5 = ((__int64*)goff_18F1238);
  *(_QWORD *)(result + 16) = v4;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)result = v5 + 2;
  v6 = *a2;
  v7 = a2[1];
  *(_DWORD *)(result + 47) = *(_DWORD *)((char *)a2 + 15);
  *(_QWORD *)(result + 32) = v6;
  *(_QWORD *)(result + 40) = v7;
  v8 = ((__int64*)goff_18F12C0);
  *(_DWORD *)(result + 52) = a3;
  *(_DWORD *)(result + 56) = a4;
  *(_QWORD *)result = v8 + 16;
  return;
}

__int64 __fastcall sub_2BE8A0(__int64 a1, __int64 *a2, int a3, __int64 a4)
{
  __int64 v4; // x8
  __int64 *v5; // x9
  __int64 v7; // x8
  __int64 v8; // x9
  __int64 *v9; // x9
  __int64 v11; // x21
  __int64 result; // x0

  v4 = qword_1907E28;
  *(_DWORD *)(a1 + 8) = -1;
  v5 = ((__int64*)goff_18F1238);
  *(_QWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = v5 + 2;
  v7 = *a2;
  v8 = a2[1];
  *(_DWORD *)(a1 + 47) = *(_DWORD *)((char *)a2 + 15);
  *(_QWORD *)(a1 + 40) = v8;
  v9 = ((__int64*)goff_18F12D8);
  *(_QWORD *)(a1 + 32) = v7;
  *(_DWORD *)(a1 + 52) = a3;
  *(_QWORD *)a1 = v9 + 2;
  v11 = sub_56C9F0(1000, 8, 1092624384, 0LL, &unk_1326E41, 0);
  result = sub_2C1BF0(v11, a4);
  *(_QWORD *)(a1 + 56) = v11;
  return result;
}

__int64 __fastcall sub_2BE9A0(__int64 a1, __int64 *a2, int a3, int a4, __int64 a5)
{
  __int64 v5; // x8
  __int64 *v6; // x9
  __int64 v7; // x8
  __int64 v8; // x9
  __int64 *v10; // x8
  __int64 v12; // x21
  __int64 result; // x0

  v5 = qword_1907E28;
  *(_DWORD *)(a1 + 8) = -1;
  v6 = ((__int64*)goff_18F1238);
  *(_QWORD *)(a1 + 16) = v5;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = v6 + 2;
  v7 = *a2;
  v8 = a2[1];
  *(_DWORD *)(a1 + 47) = *(_DWORD *)((char *)a2 + 15);
  *(_QWORD *)(a1 + 32) = v7;
  *(_QWORD *)(a1 + 40) = v8;
  v10 = ((__int64*)goff_18F12E0);
  *(_DWORD *)(a1 + 52) = a3;
  *(_DWORD *)(a1 + 56) = a4;
  *(_QWORD *)a1 = v10 + 2;
  v12 = sub_56C9F0(280, 8, 1092624384, 0LL, &unk_1326E41, 0);
  result = sub_26D390(v12, a5);
  *(_QWORD *)(a1 + 64) = v12;
  return result;
}

__int64 __fastcall sub_2BF300(__int64 a1, __int64 *a2, int a3, __int64 a4)
{
  __int64 v4; // x8
  __int64 *v5; // x9
  __int64 v7; // x8
  __int64 v8; // x9
  __int64 *v9; // x9
  __int64 v11; // x21
  __int64 result; // x0

  v4 = qword_1907E28;
  *(_DWORD *)(a1 + 8) = -1;
  v5 = ((__int64*)goff_18F1238);
  *(_QWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = v5 + 2;
  v7 = *a2;
  v8 = a2[1];
  *(_DWORD *)(a1 + 47) = *(_DWORD *)((char *)a2 + 15);
  *(_QWORD *)(a1 + 40) = v8;
  v9 = ((__int64*)goff_18F12F0);
  *(_QWORD *)(a1 + 32) = v7;
  *(_DWORD *)(a1 + 52) = a3;
  *(_QWORD *)a1 = v9 + 2;
  v11 = sub_56C9F0(280, 8, 1092624384, 0LL, &unk_1326E41, 0);
  result = sub_26D390(v11, a4);
  *(_QWORD *)(a1 + 56) = v11;
  return result;
}

__int64 __fastcall sub_2C4440(__int64 a1)
{
  _BYTE v3[960]; // [xsp+0h] [xbp-3D0h] BYREF

  sub_2C4070(a1);
  *(_DWORD *)(a1 + 952) = 0;
  sub_2C4070(v3);
  sub_2C4490(a1, (__int64)v3);
  return sub_C289D0((__int64)v3);
}

// N5storm4echo14EventCollectorE, virtual slot 0
__int64 __fastcall sub_2C54C0(_QWORD *a1)
{
  _QWORD *v2; // x0
  _QWORD *v3; // x21
  __int64 result; // x0

  *a1 = ((char *)goff_18F13F0 + 16);
  sub_2C5550();
  v2 = (_QWORD *)a1[7];
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
  result = a1[5];
  a1[5] = 0;
  if ( result != 0 )
    return sub_56CA00(result, &unk_1326E41, 0);
  return result;
}

// N5storm4echo14EventCollectorE, virtual slot 1
void __fastcall sub_2C56E0(_QWORD *a1)
{
  _QWORD *v2; // x0
  _QWORD *v3; // x21
  __int64 v4; // x0

  *a1 = ((char *)goff_18F13F0 + 16);
  sub_2C5550();
  v2 = (_QWORD *)a1[7];
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
  v4 = a1[5];
  a1[5] = 0;
  if ( v4 != 0 )
    sub_56CA00(v4, &unk_1326E41, 0);
  _ZdlPv(a1);
}

void sub_2CC870(__int64 result, __int64 a2, int a3, int a4)
{
  __int64 v4; // x20
  char *v5; // x0

  if ( *(_DWORD *)(result + 64) == a4 )
  {
    v4 = result;
    v5 = *(char **)(result + 160);
    if ( v5 != nullptr )
      std__recursive_mutex__lock(v5);
    *(_DWORD *)sub_2CC8D0(v4 + 168, a2) = a3;
    result = *(_QWORD *)(v4 + 160);
    if ( result != 0 )
      { std__recursive_mutex__unlock((char *)result); return; }
  }
  return;
}

// N5storm4echo3GRO18GROManager_NetworkE, virtual slot 0
__int64 __fastcall sub_2CD0D0(_QWORD *a1)
{
  __int64 v1; // x8
  _QWORD *v3; // x20
  __int64 v4; // x21

  v1 = goff_18F14F0;
  *a1 = goff_18F14F0 + 16;
  a1[4] = v1 + 904;
  v3 = a1 + 4;
  a1[7] = v1 + 976;
  sub_2FAC30(a1 + 25, a1[26]);
  sub_2FAC80(a1 + 22, a1[23]);
  v4 = a1[19];
  if ( v4 != 0 && a1[18] == 0 )
  {
    std__condition_variable___condition_variable((char *)(v4 + 40));
    std__condition_variable___condition_variable((char *)(v4 + 32));
    std__mutex___mutex((char *)v4);
    sub_57EDC0(v4, 0LL, &unk_1326E41, 0);
    a1[19] = 0;
  }
  sub_2FAD00(a1 + 15, a1[16]);
  nullsub_1096(v3);
  return sub_577290(a1);
}

void sub_2D04E0(__int64 a1)
{  __int64 *v3; // x9

  sub_5771E0((_QWORD *)a1, 0LL, (__int64)&unk_1326E41, 0, 0, 0LL);
  sub_54BC60(a1 + 32);
  v3 = ((__int64 *)((__int64*)goff_18F1508) + 2);
  *(_QWORD *)a1 = v3;
  *(_QWORD *)(a1 + 32) = ((__int64 *)((__int64*)goff_18F1508) + 106);
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 72) = -1;
  return;
}

unsigned int *__fastcall sub_2D0580(__int64 a1)
{
  unsigned int *v1; // x19

  v1 = (unsigned int *)(a1 - 32);
  nullsub_1096(a1);
  return sub_577290(v1);
}

void __fastcall sub_2D05E0(__int64 a1)
{
  unsigned int *v1; // x19

  v1 = (unsigned int *)(a1 - 32);
  nullsub_1096(a1);
  sub_577290(v1);
  _ZdlPv(v1);
}

__int64 __fastcall sub_2D6160(char *a1, unsigned int *a2)
{
  unsigned int v2; // w8
  __int64 v3; // x0
  char *v4; // x10
  __int64 v5; // t1
  char *v6; // x9
  unsigned int v7; // w11
  bool v8; // cf
  _BOOL4 v9; // w11

  v2 = *a2;
  v5 = *(_QWORD *)(a1 + 120);
  v3 = a1 + 120;
  v4 = v5;
  if ( v5 == 0 )
    return 0;
  v6 = v3;
  do
  {
    v7 = *(_DWORD *)(v4 + 32);
    v8 = v7 >= v2;
    v9 = v7 < v2;
    if ( v8 )
      v6 = v4;
    v4 = *(_QWORD *)(v4 + 8LL * v9);
  }
  while ( v4 != 0 );
  if ( v6 == v3 )
    return 0;
  if ( *(_DWORD *)(v6 + 32) <= v2 )
    return *(_QWORD *)(v6 + 40);
  return 0;
}

bool __fastcall sub_2D6B00(char *a1, unsigned int *a2)
{
  unsigned int v2; // w8
  __int64 v3; // x0
  char *v4; // x10
  __int64 v5; // t1
  char *v6; // x9
  unsigned int v7; // w11
  bool v8; // cf
  _BOOL4 v9; // w11
  char *v11; // x8

  v2 = *a2;
  v5 = *(_QWORD *)(a1 + 120);
  v3 = a1 + 120;
  v4 = v5;
  if ( v5 == 0 )
    return false;
  v6 = v3;
  do
  {
    v7 = *(_DWORD *)(v4 + 32);
    v8 = v7 >= v2;
    v9 = v7 < v2;
    if ( v8 )
      v6 = v4;
    v4 = *(_QWORD *)(v4 + 8LL * v9);
  }
  while ( v4 != 0 );
  if ( v6 == v3 )
    return false;
  if ( *(_DWORD *)(v6 + 32) > v2 )
    return false;
  v11 = *(_QWORD *)(v6 + 40);
  return v11 != 0 && *(_BYTE *)(v11 + 72) != 0;
}

// N5storm4echo24PeerChannelDemux_NetworkE, virtual slot 0
_QWORD *__fastcall sub_2D8630(_QWORD *result)
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

// N5storm4echo24PeerChannelDemux_NetworkE, virtual slot 1
void __fastcall sub_2D86A0(char *a1)
{
  __int64 v2; // x22
  __int64 v3; // x21

  v2 = 256;
  *(_QWORD *)a1 = ((char *)((__int64*)goff_18F16A8) + 16);
  do
  {
    v3 = *(_QWORD *)&a1[v2];
    *(_QWORD *)&a1[v2] = 0;
    if ( v3 != 0 )
    {
      sub_2D8FF0(v3);
      sub_57EDC0(v3, 0LL, &unk_1326E41, 0);
    }
    v2 -= 8;
  }
  while ( v2 != 0 );
  _ZdlPv(a1);
}

// N5storm4echo26PeerChannelManager_Network26MessageSorterDeleteVisitorE, virtual slot 2
__int64 __fastcall sub_2DE240(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a3 != 0 )
    sub_57EDC0(a3, 0LL, &unk_1326E41, 0);
  return 1;
}

__int64 __fastcall sub_2DF4A0(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x8

  sub_5771E0((_QWORD *)a1, 0LL, (__int64)&unk_1326E41, 0, 0, 0LL);
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  result = sub_54BC60(a1 + 32);
  v3 = ((__int64 *)((__int64*)goff_18F16F8) + 106);
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18F16F8) + 2);
  *(_QWORD *)(a1 + 32) = v3;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 72) = -1;
  return result;
}

unsigned int *__fastcall sub_2DF540(__int64 a1)
{
  unsigned int *v1; // x19

  v1 = (unsigned int *)(a1 - 32);
  nullsub_1096(a1);
  return sub_577290(v1);
}

void __fastcall sub_2DF5A0(__int64 a1)
{
  unsigned int *v1; // x19

  v1 = (unsigned int *)(a1 - 32);
  nullsub_1096(a1);
  sub_577290(v1);
  _ZdlPv(v1);
}

__int64 __fastcall sub_2E5BA0(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x8

  sub_5771E0((_QWORD *)a1, 0LL, (__int64)&unk_1326E41, 0, 0, 0LL);
  result = sub_54BC60(a1 + 32);
  v3 = goff_18F17B8;
  *(_QWORD *)a1 = v3 + 2;
  *(_QWORD *)(a1 + 32) = v3 + 106;
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 72) = -1;
  return result;
}

unsigned int *__fastcall sub_2E5C40(__int64 a1)
{
  unsigned int *v1; // x19

  v1 = (unsigned int *)(a1 - 32);
  nullsub_1096(a1);
  return sub_577290(v1);
}

void __fastcall sub_2E5CA0(__int64 a1)
{
  unsigned int *v1; // x19

  v1 = (unsigned int *)(a1 - 32);
  nullsub_1096(a1);
  sub_577290(v1);
  _ZdlPv(v1);
}

// N5storm4echo7session11resultEvent9AddPlayerE, virtual slot 5
__int64 __fastcall sub_2EA000(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(96, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_2BA320(v2, a1);
  return v2;
}

// N5storm4echo7session8outEvent8PeerGoneE, virtual slot 5
__int64 __fastcall sub_2EB690(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(192, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_2BC630(v2, a1);
  return v2;
}

// N5storm4echo7session8outEvent11JoinRequestE, virtual slot 5
__int64 __fastcall sub_2EC200(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(96, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_2BE370(v2, a1);
  return v2;
}

// N5storm4echo6player7inEvent22AcceptAddPlayerRequestE, virtual slot 5
__int64 __fastcall sub_2F13D0(__int64 a1)
{
  __int64 result; // x0
  __int64 *v3; // x9
  __int64 v4; // x8
  __int64 *v5; // x9
  __int64 v6; // x8
  __int64 v7; // x9

  result = sub_56C9F0(56, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v3 = goff_18F1F38;
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = v3 + 2;
  v5 = ((__int64*)goff_18F1320);
  *(_QWORD *)(result + 24) = v4;
  LOBYTE(v4) = *(_BYTE *)(a1 + 32);
  *(_QWORD *)result = v5 + 2;
  *(_BYTE *)(result + 32) = v4;
  v6 = *(_QWORD *)(a1 + 33);
  v7 = *(_QWORD *)(a1 + 41);
  *(_QWORD *)(result + 48) = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(result + 41) = v7;
  *(_QWORD *)(result + 33) = v6;
  return result;
}

// N5storm4echo7session7inEvent4KickE, virtual slot 5
char *__fastcall sub_2F2070(__int64 a1)
{
  char *v2; // x20

  v2 = (char *)sub_56C9F0(96, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_2F2530(v2, a1);
  return v2;
}

// N5storm18DynamicTypeFactoryINS_4echo4time6inFunc17GetSystemTimeInMsEEE, virtual slot 2
__int64 __fastcall sub_2F8A40(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // x0
  __int64 *v4; // x8
  __int64 v5; // x10

  result = sub_56C9F0(24, 8, 1092624384, 0LL, a2, a3);
  v4 = goff_18EFA10;
  v5 = ((__int64*)goff_18F13D8);
  *(_DWORD *)(result + 8) = -1;
  *(_QWORD *)result = v4 + 2;
  *(_QWORD *)(result + 16) = qword_1907E28;
  *(_QWORD *)result = v5 + 16;
  return result;
}

void sub_2FB8A0(__int64 result, _QWORD *a2)
{
  __int64 v3; // x20
  __int64 v4; // x0

  if ( a2 != nullptr )
  {
    v3 = result;
    sub_2FB8A0(result, *a2);
    sub_2FB8A0(v3, a2[1]);
    v4 = a2[5];
    a2[5] = 0;
    if ( v4 != 0 )
      sub_57EDC0(v4, 0LL, &unk_1326E41, 0);
    { sub_56CA00(a2, &unk_1326E41, 0); return; }
  }
  return;
}

void sub_2FB970(__int64 result, _QWORD *a2)
{
  __int64 v3; // x20
  __int64 v4; // x20

  if ( a2 != nullptr )
  {
    v3 = result;
    sub_2FB970(result, *a2);
    sub_2FB970(v3, a2[1]);
    v4 = a2[7];
    a2[7] = 0;
    if ( v4 != 0 )
    {
      sub_2DEA20(v4);
      sub_57EDC0(v4, 0LL, &unk_1326E41, 0);
    }
    { sub_56CA00(a2, &unk_1326E41, 0); return; }
  }
  return;
}

// N5storm10DataNumberIjLNS_19DataNumberQualifier11EQualifiersE8ELj0EEE, virtual slot 4
void sub_2FC670(__int64 result, __int64 a2)
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

// N5storm4echo12DataStringIdINS_8StringIdEEE, virtual slot 4
void sub_2FCE10(__int64 result, __int64 a2)
{
  _BYTE *v2; // x9
  __int64 v4; // x19

  if ( *(_DWORD *)(a2 + 20) != *(_DWORD *)(result + 20) )
  {
    *(_BYTE *)(result + 16) = 1;
    v2 = *(_BYTE **)(result + 8);
    *v2 = 1;
    v4 = result;
    result = (*(__int64 (**)(void))(*(_QWORD *)result + 56LL))();
    if ( (result & 1) != 0 )
      sub_56DC30((_QWORD *)v4);
    *(_DWORD *)(v4 + 20) = *(_DWORD *)(a2 + 20);
  }
  return;
}

void sub_3022F0(__int64 result, _QWORD *a2)
{
  __int64 v3; // x20
  _QWORD *v4; // x0

  if ( a2 != nullptr )
  {
    v3 = result;
    sub_3022F0(result, *a2);
    sub_3022F0(v3, a2[1]);
    v4 = (_QWORD *)a2[5];
    a2[5] = 0;
    if ( v4 != nullptr )
      sub_30B260(v4, (__int64)&unk_1326E41, 0);
    { sub_56CA00(a2, &unk_1326E41, 0); return; }
  }
  return;
}

// N5storm18NetPropertyIntegerIjNS_20BinaryNumericalTraitIjLh2ELh0ELb0ENS_19DefaultValueFunctorIjLm0EEEEEEE, virtual slot 5
__int64 __fastcall sub_3026F0(__int64 a1)
{
  __int64 v2; // x20
  __int64 *v3; // x8

  v2 = sub_56C9F0(32, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)((__int64*)goff_18F1398) + 24);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18F1398) + 2);
  *(_QWORD *)(v2 + 8) = v3;
  *(_DWORD *)(v2 + 28) = *(_DWORD *)(a1 + 28);
  return v2;
}

// N5storm18DynamicTypeFactoryINS_18NetPropertyIntegerIjNS_20BinaryNumericalTraitIjLh2ELh0ELb0ENS_19DefaultValueFunctorIjLm0EEEEEEEEE, virtual slot 2
__int64 __fastcall sub_302AB0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0
  __int64 *v5; // x8

  v3 = sub_56C9F0(32, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_57F050(v3, v4);
  v5 = ((__int64*)goff_18F1398);
  *(_DWORD *)(v3 + 28) = 0;
  *(_QWORD *)v3 = v5 + 2;
  *(_QWORD *)(v3 + 8) = v5 + 24;
  return v3;
}

// N5storm18DynamicTypeFactoryINS_18NetPropertyIntegerIjNS_20BinaryNumericalTraitIjLh2ELh0ELb0ENS_19DefaultValueFunctorIjLm0EEEEEEEEE, virtual slot 3
__int64 __fastcall sub_302B20(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20
  __int64 *v6; // x8

  v5 = sub_56C9F0(32, 8, 1092624384, 0LL, a3, a4);
  sub_57F050(v5, a2);
  v6 = ((__int64*)goff_18F1398);
  *(_DWORD *)(v5 + 28) = 0;
  *(_QWORD *)v5 = v6 + 2;
  *(_QWORD *)(v5 + 8) = v6 + 24;
  return v5;
}

// N5storm18NetPropertyIntegerIjNS_20BinaryNumericalTraitIjLh4ELh0ELb0ENS_19DefaultValueFunctorIjLm0EEEEEEE, virtual slot 5
__int64 __fastcall sub_302D90(__int64 a1)
{
  __int64 v2; // x20
  __int64 *v3; // x8

  v2 = sub_56C9F0(32, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)goff_18F13A8 + 24);
  *(_QWORD *)v2 = ((__int64 *)goff_18F13A8 + 2);
  *(_QWORD *)(v2 + 8) = v3;
  *(_DWORD *)(v2 + 28) = *(_DWORD *)(a1 + 28);
  return v2;
}

// N5storm18DynamicTypeFactoryINS_18NetPropertyIntegerIjNS_20BinaryNumericalTraitIjLh4ELh0ELb0ENS_19DefaultValueFunctorIjLm0EEEEEEEEE, virtual slot 2
__int64 __fastcall sub_303150(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0
  __int64 *v5; // x8

  v3 = sub_56C9F0(32, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_57F050(v3, v4);
  v5 = goff_18F13A8;
  *(_DWORD *)(v3 + 28) = 0;
  *(_QWORD *)v3 = v5 + 2;
  *(_QWORD *)(v3 + 8) = v5 + 24;
  return v3;
}

// N5storm18DynamicTypeFactoryINS_18NetPropertyIntegerIjNS_20BinaryNumericalTraitIjLh4ELh0ELb0ENS_19DefaultValueFunctorIjLm0EEEEEEEEE, virtual slot 3
__int64 __fastcall sub_3031C0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20
  __int64 *v6; // x8

  v5 = sub_56C9F0(32, 8, 1092624384, 0LL, a3, a4);
  sub_57F050(v5, a2);
  v6 = goff_18F13A8;
  *(_DWORD *)(v5 + 28) = 0;
  *(_QWORD *)v5 = v6 + 2;
  *(_QWORD *)(v5 + 8) = v6 + 24;
  return v5;
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
  v4 = __atomic_fetch_add(v3, 1, 4);
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
    v5 = __atomic_fetch_sub(v4, 1, 4);
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
    v4 = __atomic_fetch_sub(v3, 1, 4);
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
      v8 = __atomic_sub_fetch(v6, 1, 4);
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

__int64 __fastcall sub_3BF750(__int64 a1, unsigned int a2)
{
  return *(_QWORD *)(a1 + 88) + 12LL * a2;
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

// N5storm4echo5group7inEvent20RefuseAddPeerRequestE, virtual slot 5
char *__fastcall sub_3CC4B0(__int64 a1)
{
  char *v2; // x20

  v2 = (char *)sub_56C9F0(96, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_3CC950(v2, a1);
  return v2;
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

