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
extern char goff_18EC5F0[];
extern char goff_18EC5F8[];
extern char goff_18EC708[];
extern char goff_18EC7A8[];
extern char goff_18EC7C0[];
extern char goff_18EC808[];
extern char goff_18EC810[];
extern char goff_18EC818[];
extern char goff_18EC828[];
extern char goff_18EC848[];
extern char goff_18EC850[];
extern char goff_18EC898[];
extern char goff_18EC8F0[];
extern char goff_18EC900[];
extern char goff_18EC908[];
extern char goff_18EC910[];
extern char goff_18EC920[];
extern char goff_18EC990[];
extern char goff_18EC9C8[];
extern char goff_18EC9F8[];
extern char goff_18ECA30[];
extern char goff_18ECA58[];
extern char goff_18ECAA8[];
extern char goff_18ECB48[];
extern char goff_18ECB58[];
extern char goff_18ECB80[];
extern char goff_18ECB90[];
extern char goff_18ECC48[];
extern char goff_18ECCA8[];
extern char goff_18ECCB0[];
extern char goff_18ECCB8[];
extern char goff_18ECCC8[];
extern char goff_18ECCF8[];
extern char goff_18ECD00[];
extern char goff_18ECD18[];
extern char goff_18ECD20[];
extern char goff_18ECD78[];
extern char goff_18ECE20[];
extern char goff_18ECEF8[];
extern char goff_18ED070[];
extern char goff_18ED078[];
extern char goff_18ED090[];
extern char goff_18ED098[];
extern char goff_18ED0A8[];
extern char goff_18ED0F8[];
extern char goff_18ED1C0[];
extern char goff_18ED1C8[];
extern char goff_18ED230[];
extern char goff_18ED238[];
extern char goff_18ED240[];
extern char goff_18ED298[];
extern char goff_18ED2D8[];
extern char goff_18ED2E8[];
extern char goff_18ED310[];
extern char goff_18ED318[];
extern char goff_18ED328[];
extern char goff_18ED3B8[];
extern char goff_18ED470[];
extern char goff_18ED4B0[];
extern char goff_18ED528[];
extern char goff_18ED5B8[];
extern char goff_18ED5C0[];
extern char goff_18ED5C8[];
extern char goff_18ED5D0[];
extern char goff_18ED5F8[];
extern char goff_18ED600[];
extern char goff_18ED670[];
extern char goff_18ED678[];
extern char goff_18ED7C0[];
extern char goff_18ED8D0[];
extern char goff_18ED8F0[];
extern char goff_18ED910[];
extern char goff_18ED940[];
extern char goff_18EDA30[];
extern char goff_18EDC88[];
extern char goff_18EDCC0[];
extern char goff_18EDCC8[];
extern char goff_18EDCD0[];
extern char goff_18EDCD8[];
extern char goff_18EDCE0[];
extern char goff_18EDCE8[];
extern char goff_18EDCF0[];
extern char goff_18EDCF8[];
extern char goff_18EDDE0[];
extern char goff_18EDDF0[];
extern char goff_18EDDF8[];
extern char goff_18EDE00[];
extern char goff_18EDE08[];
extern char goff_18EDE20[];
extern char goff_18EDE38[];
extern char goff_18EDE40[];
extern char goff_18EDE88[];
extern char goff_18EDE90[];
extern char goff_18EDE98[];
extern char goff_18EDEA0[];
extern char goff_18EDEB8[];
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
extern char goff_18EE018[];
extern char goff_18EE028[];
extern char goff_18EE038[];
extern char goff_18EE088[];
extern char goff_18EE090[];
extern char goff_18EE0B0[];
extern char goff_18EE0F0[];
extern char goff_18EE100[];
extern char goff_18EE118[];
extern char goff_18EE128[];
extern char goff_18EE130[];
extern char goff_18EE138[];
extern char goff_18EE140[];
extern char goff_18EE150[];
extern char goff_18EE158[];
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
extern char goff_18EE860[];
extern char goff_18EEF90[];
extern char goff_18EFA10[];
extern char goff_18EFAB0[];
extern char goff_18EFC40[];
extern char goff_18EFCD8[];
extern char goff_18EFCE8[];
extern char goff_18F01E8[];
extern char goff_18F09A8[];
extern char goff_18F1210[];
extern char goff_18F1228[];
extern char goff_18F1230[];
extern char goff_18F1238[];
extern char goff_18F1250[];
extern char goff_18F1270[];
extern char goff_18F1288[];
extern char goff_18F1290[];
extern char goff_18F12B8[];
extern char goff_18F12C0[];
extern char goff_18F12D8[];
extern char goff_18F12E0[];
extern char goff_18F12F0[];
extern char goff_18F1320[];
extern char goff_18F1350[];
extern char goff_18F1360[];
extern char goff_18F1388[];
extern char goff_18F1398[];
extern char goff_18F13A8[];
extern char goff_18F13D8[];
extern char goff_18F13F0[];
extern char goff_18F14F0[];
extern char goff_18F1508[];
extern char goff_18F16A8[];
extern char goff_18F16F8[];
extern char goff_18F17B8[];
extern char goff_18F1F38[];
extern char goff_18F2440[];
extern char goff_18F2448[];
extern __attribute__((visibility("hidden"))) char loc_2C13B0[];
extern __attribute__((visibility("hidden"))) char loc_5B80B0[];
__int64 nn__os__ConvertToTimeSpan();
__int64 nn__os__GetSystemTick();
__int64 nn__ssl__Context__Create();
__attribute__((visibility("hidden"))) __int64 nullsub_1096();
__int64 printf();
__int64 pthread_mutex_destroy();
__int64 pthread_mutex_lock();
__int64 pthread_mutex_unlock();
extern __attribute__((visibility("hidden"))) __int64 qword_18FE0D8;
extern __attribute__((visibility("hidden"))) __int64 qword_1905F58;
extern __attribute__((visibility("hidden"))) __int64 qword_1907E28;
__int64 std____shared_weak_count____release_weak();
__int64 std__condition_variable___condition_variable();
__int64 std__mutex___mutex();
__int64 std__recursive_mutex__lock();
__int64 std__recursive_mutex__unlock();
__attribute__((visibility("hidden"))) __int64 sub_109D60();
__attribute__((visibility("hidden"))) __int64 sub_124B30();
__attribute__((visibility("hidden"))) __int64 sub_1255F0();
__attribute__((visibility("hidden"))) __int64 sub_156370();
__attribute__((visibility("hidden"))) __int64 sub_160630();
__attribute__((visibility("hidden"))) __int64 sub_1607C0();
__attribute__((visibility("hidden"))) __int64 sub_160840();
__attribute__((visibility("hidden"))) __int64 sub_160BD0();
__attribute__((visibility("hidden"))) __int64 sub_161860();
__attribute__((visibility("hidden"))) __int64 sub_162430();
__attribute__((visibility("hidden"))) __int64 sub_163DB0();
__attribute__((visibility("hidden"))) __int64 sub_163E60();
__attribute__((visibility("hidden"))) __int64 sub_164490();
__attribute__((visibility("hidden"))) __int64 sub_1648A0();
__attribute__((visibility("hidden"))) __int64 sub_164FB0();
__attribute__((visibility("hidden"))) __int64 sub_165640();
__attribute__((visibility("hidden"))) __int64 sub_165DA0();
__attribute__((visibility("hidden"))) __int64 sub_167480();
__attribute__((visibility("hidden"))) __int64 sub_167500();
__attribute__((visibility("hidden"))) __int64 sub_167B80();
__attribute__((visibility("hidden"))) __int64 sub_169680();
__attribute__((visibility("hidden"))) __int64 sub_169D20();
__attribute__((visibility("hidden"))) __int64 sub_16AB30();
__attribute__((visibility("hidden"))) __int64 sub_1750D0();
__attribute__((visibility("hidden"))) __int64 sub_180D00();
__attribute__((visibility("hidden"))) __int64 sub_181380();
__attribute__((visibility("hidden"))) __int64 sub_1873B0();
__attribute__((visibility("hidden"))) __int64 sub_18C7E0();
__attribute__((visibility("hidden"))) __int64 sub_190BE0();
__attribute__((visibility("hidden"))) __int64 sub_194E30();
__attribute__((visibility("hidden"))) __int64 sub_1957C0();
__attribute__((visibility("hidden"))) __int64 sub_19CA60();
__attribute__((visibility("hidden"))) __int64 sub_19EBC0();
__attribute__((visibility("hidden"))) __int64 sub_1A2010();
__attribute__((visibility("hidden"))) __int64 sub_1B00B0();
__attribute__((visibility("hidden"))) __int64 sub_1B2190();
__attribute__((visibility("hidden"))) __int64 sub_257280();
__attribute__((visibility("hidden"))) __int64 sub_257400();
__attribute__((visibility("hidden"))) __int64 sub_258AA0();
__attribute__((visibility("hidden"))) __int64 sub_25E200();
__attribute__((visibility("hidden"))) __int64 sub_25E630();
__attribute__((visibility("hidden"))) __int64 sub_267C90();
__attribute__((visibility("hidden"))) __int64 sub_268070();
__attribute__((visibility("hidden"))) __int64 sub_269C60();
__attribute__((visibility("hidden"))) __int64 sub_26BCC0();
__attribute__((visibility("hidden"))) __int64 sub_26D390();
__attribute__((visibility("hidden"))) __int64 sub_287220();
__attribute__((visibility("hidden"))) __int64 sub_290830();
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
__attribute__((visibility("hidden"))) __int64 sub_30B340();
__attribute__((visibility("hidden"))) __int64 sub_36EA0();
__attribute__((visibility("hidden"))) __int64 sub_37030();
__attribute__((visibility("hidden"))) __int64 sub_3DA20();
__attribute__((visibility("hidden"))) __int64 sub_3E9D0();
__attribute__((visibility("hidden"))) __int64 sub_3EBB0();
__attribute__((visibility("hidden"))) __int64 sub_45180();
__attribute__((visibility("hidden"))) __int64 sub_4D9E0();
__attribute__((visibility("hidden"))) __int64 sub_53380();
__attribute__((visibility("hidden"))) __int64 sub_54500();
__attribute__((visibility("hidden"))) __int64 sub_54BC60();
__attribute__((visibility("hidden"))) __int64 sub_56C9F0();
__attribute__((visibility("hidden"))) __int64 sub_56CA00();
__attribute__((visibility("hidden"))) __int64 sub_56DC30();
__attribute__((visibility("hidden"))) _Bool sub_576540();
__attribute__((visibility("hidden"))) __int64 sub_5771E0();
__attribute__((visibility("hidden"))) __int64 sub_577290();
__attribute__((visibility("hidden"))) __int64 sub_578210();
__attribute__((visibility("hidden"))) __int64 sub_57D200();
__attribute__((visibility("hidden"))) __int64 sub_57EDC0();
__attribute__((visibility("hidden"))) __int64 sub_57EEF0();
__attribute__((visibility("hidden"))) __int64 sub_57EF40();
__attribute__((visibility("hidden"))) __int64 sub_57F050();
__attribute__((visibility("hidden"))) __int64 sub_57F070();
__attribute__((visibility("hidden"))) _Bool sub_57F110();
__attribute__((visibility("hidden"))) __int64 sub_57F1B0();
__attribute__((visibility("hidden"))) __int64 sub_583240();
__attribute__((visibility("hidden"))) __int64 sub_5859F0();
__attribute__((visibility("hidden"))) __int64 sub_5B520();
__attribute__((visibility("hidden"))) __int64 sub_5B87B0();
__attribute__((visibility("hidden"))) __int64 sub_5B8CF0();
__attribute__((visibility("hidden"))) __int64 sub_5DF60();
__attribute__((visibility("hidden"))) _Bool sub_66B10();
__attribute__((visibility("hidden"))) __int64 sub_66D70();
__attribute__((visibility("hidden"))) __int64 sub_6EEA10();
__attribute__((visibility("hidden"))) __int64 sub_701100();
__attribute__((visibility("hidden"))) __int64 sub_781380();
__attribute__((visibility("hidden"))) __int64 sub_78E10();
__attribute__((visibility("hidden"))) __int64 sub_792D0();
__attribute__((visibility("hidden"))) __int64 sub_795D0();
__attribute__((visibility("hidden"))) __int64 sub_79640();
__attribute__((visibility("hidden"))) __int64 sub_7A690();
__attribute__((visibility("hidden"))) __int64 sub_7C4B0();
__attribute__((visibility("hidden"))) __int64 sub_7E7E0();
__attribute__((visibility("hidden"))) __int64 sub_7F5830();
__attribute__((visibility("hidden"))) __int64 sub_917D0();
__attribute__((visibility("hidden"))) __int64 sub_990B0();
__attribute__((visibility("hidden"))) __int64 sub_99380();
__attribute__((visibility("hidden"))) __int64 sub_9A890();
__attribute__((visibility("hidden"))) __int64 sub_9AB70();
__attribute__((visibility("hidden"))) __int64 sub_9B180();
__attribute__((visibility("hidden"))) __int64 sub_9B5A0();
__attribute__((visibility("hidden"))) __int64 sub_C2610();
__attribute__((visibility("hidden"))) __int64 sub_C289D0();
__attribute__((visibility("hidden"))) __int64 sub_C33C0();
__attribute__((visibility("hidden"))) __int64 sub_C3520();
__attribute__((visibility("hidden"))) __int64 sub_CAE10();
__attribute__((visibility("hidden"))) __int64 sub_D6CF0();
__attribute__((visibility("hidden"))) __int64 sub_D84D0();
__attribute__((visibility("hidden"))) __int64 sub_DAF90();
__attribute__((visibility("hidden"))) __int64 sub_E86C0();
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
      v7 = __atomic_fetch_add((unsigned __int64 *)&qword_18FE0D8, 1, 5);
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

void __fastcall sub_371A0(void *result, _QWORD *a2)
{
  void *v3; // x20

  if ( a2 != nullptr )
  {
    v3 = result;
    sub_371A0(result, *a2);
    sub_371A0(v3, a2[1]);
    free((void *)*(a2 - 3));
    --*(__int64*)goff_18EC708;
  }
  return;
}

__int64 __fastcall sub_37B70(__int64 a1, __int64 a2, const char *a3)
{
  __int64 result; // x0

  if ( a3 != nullptr )
    return printf("%s", a3);
  return result;
}

__int64 __fastcall sub_38830(__int64 a1)
{
  __int64 *v2; // x21
  unsigned __int64 *v3; // x8
  unsigned __int64 v4; // x0
  unsigned int *v5; // x8
  unsigned int v6; // w9
  unsigned int v7; // w9
  unsigned __int64 *v8; // x8
  unsigned __int64 v9; // x0
  unsigned int *v10; // x8
  unsigned int v11; // w9
  unsigned int v12; // w9

  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 144));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 96));
  sub_160630(a1 + 64, *(_QWORD *)(a1 + 72));
  v2 = ((__int64*)goff_18EC7A8);
  *(_QWORD *)(a1 + 40) = ((__int64 *)((__int64*)goff_18EC7A8) + 2);
  v3 = (unsigned __int64 *)(a1 + 56);
  v4 = __atomic_exchange_n(v3, 0, 5);
  if ( v4 != 0 )
  {
    v5 = (unsigned int *)(v4 + 8);
    v7 = __atomic_sub_fetch(v5, 1, 5);
    if ( v7 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  sub_792D0((_QWORD *)(a1 + 40));
  *(_QWORD *)(a1 + 16) = v2 + 2;
  v8 = (unsigned __int64 *)(a1 + 32);
  v9 = __atomic_exchange_n(v8, 0, 5);
  if ( v9 != 0 )
  {
    v10 = (unsigned int *)(v9 + 8);
    v12 = __atomic_sub_fetch(v10, 1, 5);
    if ( v12 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  sub_792D0((_QWORD *)(a1 + 16));
  return sub_C2610(a1);
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

// N11ubiservices18NotificationSourceINS_17StateNotificationEEE, virtual slot 1
__int64 __fastcall sub_4F500(_QWORD *a1)
{
  unsigned __int64 *v1; // x20
  unsigned __int64 v3; // x0
  unsigned int *v4; // x8
  unsigned int v5; // w9
  unsigned int v6; // w9

  *a1 = ((__int64 *)((__int64*)goff_18EC848) + 2);
  v1 = (unsigned __int64 *)a1[2];
  a1[2] = 0;
  if ( v1 != nullptr )
  {
    sub_1607C0(v1 + 1, v1[2]);
    v3 = __atomic_exchange_n(v1, 0, 5);
    if ( v3 != 0 )
    {
      v4 = (unsigned int *)(v3 + 8);
      v6 = __atomic_sub_fetch(v4, 1, 5);
      if ( v6 == 0 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    sub_37030(v1);
  }
  return sub_37030(a1);
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

// N11ubiservices27HttpRequestManagerComponentE, virtual slot 0
__int64 __fastcall sub_530F0(_QWORD *a1)
{
  unsigned __int64 *v2; // x8
  unsigned __int64 v3; // x0
  unsigned int *v4; // x8
  unsigned int v5; // w9
  unsigned int v6; // w9
  __int64 result; // x0

  *a1 = ((__int64 *)((__int64*)goff_18EC908) + 2);
  v2 = a1 + 6;
  v3 = __atomic_exchange_n(v2, 0, 5);
  if ( v3 != 0 )
  {
    v4 = (unsigned int *)(v3 + 8);
    v6 = __atomic_sub_fetch(v4, 1, 5);
    if ( v6 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  result = sub_160BD0(a1 + 3, a1[4]);
  *a1 = ((__int64 *)((__int64*)goff_18EC910) + 2);
  return result;
}

// N11ubiservices27HttpRequestManagerComponentE, virtual slot 1
__int64 __fastcall sub_53170(_QWORD *a1)
{
  unsigned __int64 *v2; // x8
  unsigned __int64 v3; // x0
  unsigned int *v4; // x8
  unsigned int v5; // w9
  unsigned int v6; // w9

  *a1 = ((__int64 *)((__int64*)goff_18EC908) + 2);
  v2 = a1 + 6;
  v3 = __atomic_exchange_n(v2, 0, 5);
  if ( v3 != 0 )
  {
    v4 = (unsigned int *)(v3 + 8);
    v6 = __atomic_sub_fetch(v4, 1, 5);
    if ( v6 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  sub_160BD0(a1 + 3, a1[4]);
  *a1 = ((__int64 *)((__int64*)goff_18EC910) + 2);
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

__int64 __fastcall sub_69940(_QWORD *a1)
{
  __int64 v2; // x0
  unsigned __int64 *v3; // x21
  unsigned __int64 v4; // x8
  pthread_mutex_t *v5; // x20
  unsigned __int64 v6; // x8
  unsigned __int64 v7; // x8
  __int64 v8; // x0
  unsigned __int64 *v9; // x21
  unsigned __int64 v10; // x8
  pthread_mutex_t *v11; // x20
  unsigned __int64 v12; // x8
  unsigned __int64 v13; // x8
  unsigned __int64 *v14; // x21
  unsigned __int64 v15; // x8
  pthread_mutex_t *v16; // x20
  unsigned __int64 v17; // x8
  __int64 v18; // x0
  __int64 result; // x0
  unsigned __int64 *v20; // x21
  unsigned __int64 v21; // x8
  pthread_mutex_t *v22; // x20
  unsigned __int64 v23; // x8
  __int64 v24; // x0

  v2 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 40LL))(a1);
  if ( (sub_795D0(v2) & 1) != 0
    && (v3 = (unsigned __int64 *)a1[23],
        v4 = atomic_load(v3),
        v5 = (pthread_mutex_t *)(v4 + 24),
        pthread_mutex_lock((pthread_mutex_t *)(v4 + 24)),
        v6 = atomic_load(v3),
        LODWORD(v3) = *(_DWORD *)(v6 + 316),
        pthread_mutex_unlock(v5),
        (_DWORD)v3 != 0) )
  {
    v7 = atomic_load((unsigned __int64 *)((*(__int64 (__fastcall **)(_QWORD *))(*a1 + 40LL))(a1) + 8));
    *(_BYTE *)(v7 + 104) = 0;
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 40LL))(a1);
    if ( (sub_795D0(v8) & 1) == 0 )
    {
      v9 = (unsigned __int64 *)a1[23];
      v10 = atomic_load(v9);
      v11 = (pthread_mutex_t *)(v10 + 24);
      pthread_mutex_lock((pthread_mutex_t *)(v10 + 24));
      v12 = atomic_load(v9);
      LODWORD(v9) = *(_DWORD *)(v12 + 316);
      pthread_mutex_unlock(v11);
      if ( (_DWORD)v9 == 0 )
      {
        v13 = atomic_load((unsigned __int64 *)((*(__int64 (__fastcall **)(_QWORD *))(*a1 + 40LL))(a1) + 8));
        *(_BYTE *)(v13 + 104) = 1;
      }
    }
  }
  v14 = (unsigned __int64 *)a1[23];
  v15 = atomic_load(v14);
  v16 = (pthread_mutex_t *)(v15 + 24);
  pthread_mutex_lock((pthread_mutex_t *)(v15 + 24));
  v17 = atomic_load(v14);
  LODWORD(v14) = *(_DWORD *)(v17 + 288);
  pthread_mutex_unlock(v16);
  v18 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 40LL))(a1);
  result = sub_79640(v18);
  if ( (unsigned int)v14 > (unsigned int)result )
  {
    v20 = (unsigned __int64 *)a1[23];
    v21 = atomic_load(v20);
    v22 = (pthread_mutex_t *)(v21 + 24);
    pthread_mutex_lock((pthread_mutex_t *)(v21 + 24));
    v23 = atomic_load(v20);
    LODWORD(v20) = *(_DWORD *)(v23 + 288);
    pthread_mutex_unlock(v22);
    v24 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 40LL))(a1);
    return sub_7A690(v24, (unsigned int)v20);
  }
  return result;
}

unsigned __int64 __fastcall sub_7E1B0(__int64 a1)
{
  unsigned __int64 result; // x0
  unsigned int *v3; // x9
  __int64 *v4; // x10
  unsigned __int64 *v5; // x8
  unsigned int v6; // w10

  result = sub_36EA0(0x28u, 4u, 0, 1086324736);
  *(_DWORD *)(result + 8) = 0;
  v3 = (unsigned int *)(result + 8);
  v4 = ((__int64*)goff_18EC818);
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)result = v4 + 2;
  *(_QWORD *)(a1 + 8) = 0;
  v5 = (unsigned __int64 *)(a1 + 8);
  if ( result != 0 )
  {
    v6 = __atomic_fetch_add(v3, 1, 5);
    __atomic_exchange_n(v5, result, 5);
  }
  else
  {
    __atomic_exchange_n(v5, 0, 5);
  }
  *(_BYTE *)(a1 + 16) = 0;
  return result;
}

// N11ubiservices27JobWebSocketCloseConnectionE, virtual slot 1
__int64 __fastcall sub_8A280(unsigned __int64 *a1)
{
  __int64 *v1; // x21
  __int64 *v2; // x10
  unsigned __int64 *v4; // x8
  _QWORD *v5; // x20
  unsigned __int64 v6; // x0
  unsigned int *v7; // x8
  unsigned int v8; // w9
  unsigned int v9; // w9
  unsigned __int64 *v10; // x8
  unsigned __int64 v11; // x0
  unsigned int *v12; // x8
  unsigned int v13; // w9
  unsigned int v14; // w9
  unsigned __int64 *v15; // x8
  unsigned __int64 v16; // x0
  unsigned int *v17; // x8
  unsigned int v18; // w9
  unsigned int v19; // w9

  v1 = ((__int64*)goff_18EC7C0);
  v2 = ((__int64 *)((__int64*)goff_18EC7C0) + 2);
  *a1 = ((char *)goff_18ECB80 + 16);
  v4 = a1 + 23;
  a1[21] = (unsigned __int64)v2;
  v5 = a1 + 21;
  v6 = __atomic_exchange_n(v4, 0, 5);
  if ( v6 != 0 )
  {
    v7 = (unsigned int *)(v6 + 8);
    v9 = __atomic_sub_fetch(v7, 1, 5);
    if ( v9 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  sub_792D0(v5);
  v10 = a1 + 19;
  v11 = __atomic_exchange_n(v10, 0, 5);
  if ( v11 != 0 )
  {
    v12 = (unsigned int *)(v11 + 8);
    v14 = __atomic_sub_fetch(v12, 1, 5);
    if ( v14 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  *a1 = ((char *)((__int64*)goff_18ECAA8) + 16);
  sub_792D0(a1 + 17);
  *a1 = (unsigned __int64)(((__int64 *)((__int64*)goff_18ECB90) + 2));
  a1[9] = (unsigned __int64)(v1 + 2);
  v15 = a1 + 11;
  v16 = __atomic_exchange_n(v15, 0, 5);
  if ( v16 != 0 )
  {
    v17 = (unsigned int *)(v16 + 8);
    v19 = __atomic_sub_fetch(v17, 1, 5);
    if ( v19 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  sub_792D0(a1 + 9);
  return sub_37030(a1);
}

// N11ubiservices26JobWebSocketOpenConnectionE, virtual slot 8
__int64 __fastcall sub_8B5E0(__int64 a1)
{
  unsigned __int64 v2; // x0
  __int64 result; // x0

  v2 = atomic_load((unsigned __int64 *)(a1 + 96));
  result = (*(__int64 (__fastcall **)(unsigned __int64, int))(*(_QWORD *)v2 + 24LL))(v2, 0);
  *(_BYTE *)(a1 + 376) = 1;
  return result;
}

// N11ubiservices23JobWebSocketWriteStreamE, virtual slot 8
__int64 __fastcall sub_91620(__int64 a1)
{
  unsigned __int64 v1; // x0

  v1 = atomic_load((unsigned __int64 *)(a1 + 96));
  return (*(__int64 (__fastcall **)(unsigned __int64, int))(*(_QWORD *)v1 + 24LL))(v1, 0);
}

// N11ubiservices15WebSocketEngineE, virtual slot 4
__int64 __fastcall sub_94BB0(__int64 a1, unsigned __int64 *a2, __int64 a3, char **a4)
{
  __int64 v7; // x19

  v7 = sub_36EA0(0x78u, 4u, 0, 1086324736);
  sub_917D0(v7, a2, a3, a4);
  if ( *(_BYTE *)(v7 + 40) == 0
    && ((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 80) + 136LL))(*(_QWORD *)(v7 + 80)) & 1) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, int))(**(_QWORD **)(v7 + 80) + 192LL))(*(_QWORD *)(v7 + 80), 0);
    if ( ((*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v7 + 80) + 112LL))(*(_QWORD *)(v7 + 80), 0x4000) & 1) != 0 )
      *(_BYTE *)(v7 + 41) = 1;
  }
  *(_BYTE *)(v7 + 40) = 1;
  if ( *(_BYTE *)(v7 + 41) == 0 )
  {
    (**(void (__fastcall ***)(__int64))v7)(v7);
    sub_37030(v7);
    return 0;
  }
  return v7;
}

__int64 __fastcall sub_94FD0(unsigned __int64 *a1)
{
  __int64 v1; // x20
  unsigned __int64 v3; // x8
  unsigned __int64 v4; // x8
  __int64 *v5; // x8
  __int64 v6; // x21
  unsigned __int64 v7; // x8
  __int64 result; // x0
  unsigned int *v9; // x8
  unsigned int v10; // w9
  unsigned int v11; // w9

  v1 = *((__int64*)goff_18EC810);
  if ( *((__int64*)goff_18EC810) != 0 )
  {
    v3 = atomic_load(a1);
    if ( *(_BYTE *)(v3 + 24) != 0 )
    {
      v4 = atomic_load(a1);
      v5 = *(__int64 **)(v4 + 104);
      if ( v5 != nullptr )
      {
        v6 = *v5;
        if ( *v5 != 0 )
        {
          sub_3DA20(v6 + 120);
          sub_3DA20(v6 + 32);
        }
      }
    }
    v7 = atomic_load(a1);
    if ( *(_BYTE *)(v7 + 24) != 0 )
      sub_4D9E0(*(_QWORD *)(v1 + 248), a1);
  }
  result = __atomic_exchange_n(a1, 0, 5);
  if ( result != 0 )
  {
    v9 = (unsigned int *)(result + 8);
    v11 = __atomic_sub_fetch(v9, 1, 5);
    if ( v11 == 0 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
  }
  return result;
}

__int64 __fastcall sub_98D60(__int64 a1, __int64 *a2)
{
  __int64 result; // x0
  pthread_mutex_t *v4; // x20
  _QWORD *v6; // x23
  _QWORD *v7; // x22
  __int64 v8; // x0

  result = *a2;
  if ( *a2 == 0 )
  {
    v4 = (pthread_mutex_t *)(*(_QWORD *)(a1 + 16) + 8LL);
    pthread_mutex_lock(v4);
    if ( *a2 == 0 )
    {
      v6 = (_QWORD *)sub_36EA0(0x18u, 4u, 0, 1086324736);
      *v6 = ((char *)((__int64*)goff_18ECCA8) + 16);
      v6[1] = a1;
      v7 = (_QWORD *)sub_36EA0(0x28u, 4u, 0, 1086324736);
      sub_5B520(v7, a1);
      v6[2] = v7;
      v8 = *a2;
      *a2 = (__int64)v6;
      if ( v8 != 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    }
    pthread_mutex_unlock(v4);
    return *a2;
  }
  return result;
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

__int64 __fastcall sub_99150(__int64 a1, __int64 *a2)
{
  __int64 result; // x0
  pthread_mutex_t *v4; // x20
  _QWORD *v6; // x23
  __int64 v7; // x21
  __int64 v8; // x0

  result = *a2;
  if ( *a2 == 0 )
  {
    v4 = (pthread_mutex_t *)(*(_QWORD *)(a1 + 16) + 8LL);
    pthread_mutex_lock(v4);
    if ( *a2 == 0 )
    {
      v6 = (_QWORD *)sub_36EA0(0x18u, 4u, 0, 1086324736);
      *v6 = ((char *)((__int64*)goff_18ECCB0) + 16);
      v6[1] = a1;
      v7 = sub_36EA0(0x30u, 4u, 0, 1086324736);
      *(_QWORD *)(v7 + 8) = 0;
      *(_QWORD *)(v7 + 16) = 0;
      *(_QWORD *)(v7 + 24) = 0;
      *(_WORD *)(v7 + 32) = 4;
      *(_QWORD *)(v7 + 40) = "LeaderboardClient";
      sub_78E10(v7 + 8, 4u);
      v6[2] = v7;
      v8 = *a2;
      *a2 = (__int64)v6;
      if ( v8 != 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
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

// N11ubiservices18NotificationSourceINS_26AuthenticationNotificationEEE, virtual slot 1
__int64 __fastcall sub_99A50(_QWORD *a1)
{
  unsigned __int64 *v1; // x20
  unsigned __int64 v3; // x0
  unsigned int *v4; // x8
  unsigned int v5; // w9
  unsigned int v6; // w9

  *a1 = ((char *)((__int64*)goff_18ECCB8) + 16);
  v1 = (unsigned __int64 *)a1[2];
  a1[2] = 0;
  if ( v1 != nullptr )
  {
    sub_162430(v1 + 1, v1[2]);
    v3 = __atomic_exchange_n(v1, 0, 5);
    if ( v3 != 0 )
    {
      v4 = (unsigned int *)(v3 + 8);
      v6 = __atomic_sub_fetch(v4, 1, 5);
      if ( v6 == 0 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    sub_37030(v1);
  }
  return sub_37030(a1);
}

__int64 __fastcall sub_A6530(unsigned __int64 *a1, __int64 a2)
{
  __int64 v2; // x21
  __int64 v3; // x8
  pthread_mutex_t *v6; // x22
  __int64 v7; // x23
  __int64 v8; // x0
  unsigned __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x20
  __int64 v12; // x8
  pthread_mutex_t *v13; // x21
  __int64 v14; // x22
  __int64 v15; // x0
  unsigned __int64 v16; // x8
  __int64 v17; // x0

  v2 = atomic_load(a1);
  v3 = *(_QWORD *)(v2 + 72);
  if ( v3 == 0 )
  {
    v6 = (pthread_mutex_t *)(*(_QWORD *)(v2 + 16) + 8LL);
    pthread_mutex_lock(v6);
    if ( *(_QWORD *)(v2 + 72) == 0 )
    {
      v7 = sub_36EA0(0x70u, 4u, 0, 1086324736);
      sub_9B180(v7, v2);
      v8 = *(_QWORD *)(v2 + 72);
      *(_QWORD *)(v2 + 72) = v7;
      if ( v8 != 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    }
    pthread_mutex_unlock(v6);
    v3 = *(_QWORD *)(v2 + 72);
  }
  v9 = atomic_load((unsigned __int64 *)(v3 + 104));
  v10 = atomic_load(*(unsigned __int64 **)(v9 + 16));
  sub_9AB70(v10, a1);
  v11 = atomic_load(a1);
  v12 = *(_QWORD *)(v11 + 72);
  if ( v12 == 0 )
  {
    v13 = (pthread_mutex_t *)(*(_QWORD *)(v11 + 16) + 8LL);
    pthread_mutex_lock(v13);
    if ( *(_QWORD *)(v11 + 72) == 0 )
    {
      v14 = sub_36EA0(0x70u, 4u, 0, 1086324736);
      sub_9B180(v14, v11);
      v15 = *(_QWORD *)(v11 + 72);
      *(_QWORD *)(v11 + 72) = v14;
      if ( v15 != 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    }
    pthread_mutex_unlock(v13);
    v12 = *(_QWORD *)(v11 + 72);
  }
  v16 = atomic_load((unsigned __int64 *)(v12 + 104));
  v17 = atomic_load(*(unsigned __int64 **)(v16 + 16));
  return sub_9A890(v17, a2);
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

// N11ubiservices37CacheInvalidationResumeFromBackgroundE, virtual slot 4
__int64 __fastcall sub_C0C80(__int64 a1, __int64 a2)
{
  __int64 v2; // x21
  __int64 v3; // x22
  __int64 v4; // x23
  __int64 v5; // x24
  _QWORD *v6; // x20
  unsigned __int64 *v7; // x8
  unsigned __int64 v8; // x0
  unsigned int *v9; // x8
  unsigned int v10; // w9
  unsigned int v11; // w9

  v2 = *(_QWORD *)(sub_990B0(a2, (__int64 *)(a2 + 96)) + 16);
  pthread_mutex_lock((pthread_mutex_t *)(v2 + 40));
  v3 = *(_QWORD *)(v2 + 8);
  v4 = *(_QWORD *)(v2 + 16);
  if ( v4 != v3 )
  {
    v5 = ((char *)((__int64*)goff_18ED070) + 16);
    do
    {
      *(_QWORD *)(v4 - 40) = v5;
      v6 = (_QWORD *)(v4 - 40);
      v4 -= 48;
      v7 = v6 + 2;
      v8 = __atomic_exchange_n(v7, 0, 5);
      if ( v8 != 0 )
      {
        v9 = (unsigned int *)(v8 + 8);
        v11 = __atomic_sub_fetch(v9, 1, 5);
        if ( v11 == 0 )
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      sub_792D0(v6);
    }
    while ( v4 != v3 );
  }
  *(_QWORD *)(v2 + 16) = v3;
  return pthread_mutex_unlock((pthread_mutex_t *)(v2 + 40));
}

// N11ubiservices37CacheInvalidationResumeFromBackgroundE, virtual slot 8
__int64 __fastcall sub_C0F70(__int64 a1, __int64 a2)
{
  __int64 *v2; // x19
  __int64 v4; // x23
  __int64 v5; // x24
  __int64 v6; // x25
  __int64 v7; // x26
  _QWORD *v8; // x22
  unsigned __int64 *v9; // x8
  unsigned __int64 v10; // x0
  unsigned int *v11; // x8
  unsigned int v12; // w9
  unsigned int v13; // w9
  __int64 v14; // x21
  __int64 v15; // x22
  __int64 v16; // x23
  __int64 v17; // x24
  _QWORD *v18; // x20
  unsigned __int64 *v19; // x8
  unsigned __int64 v20; // x0
  unsigned int *v21; // x8
  unsigned int v22; // w9
  unsigned int v23; // w9

  v2 = (__int64 *)(a2 + 152);
  v4 = *(_QWORD *)(sub_99380(a2, (__int64 *)(a2 + 152)) + 56);
  pthread_mutex_lock((pthread_mutex_t *)(v4 + 40));
  v5 = *(_QWORD *)(v4 + 8);
  v6 = *(_QWORD *)(v4 + 16);
  if ( v6 != v5 )
  {
    v7 = ((char *)((__int64*)goff_18ECD00) + 16);
    do
    {
      *(_QWORD *)(v6 - 40) = v7;
      v8 = (_QWORD *)(v6 - 40);
      v6 -= 48;
      v9 = v8 + 2;
      v10 = __atomic_exchange_n(v9, 0, 5);
      if ( v10 != 0 )
      {
        v11 = (unsigned int *)(v10 + 8);
        v13 = __atomic_sub_fetch(v11, 1, 5);
        if ( v13 == 0 )
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      sub_792D0(v8);
    }
    while ( v6 != v5 );
  }
  *(_QWORD *)(v4 + 16) = v5;
  pthread_mutex_unlock((pthread_mutex_t *)(v4 + 40));
  v14 = *(_QWORD *)(sub_99380(a2, v2) + 64);
  pthread_mutex_lock((pthread_mutex_t *)(v14 + 40));
  v15 = *(_QWORD *)(v14 + 8);
  v16 = *(_QWORD *)(v14 + 16);
  if ( v16 != v15 )
  {
    v17 = ((char *)((__int64*)goff_18ECD00) + 16);
    do
    {
      *(_QWORD *)(v16 - 40) = v17;
      v18 = (_QWORD *)(v16 - 40);
      v16 -= 48;
      v19 = v18 + 2;
      v20 = __atomic_exchange_n(v19, 0, 5);
      if ( v20 != 0 )
      {
        v21 = (unsigned int *)(v20 + 8);
        v23 = __atomic_sub_fetch(v21, 1, 5);
        if ( v23 == 0 )
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      sub_792D0(v18);
    }
    while ( v16 != v15 );
  }
  *(_QWORD *)(v14 + 16) = v15;
  return pthread_mutex_unlock((pthread_mutex_t *)(v14 + 40));
}

__int64 __fastcall sub_C16D0(unsigned __int64 *a1)
{
  unsigned __int64 *v1; // x20
  unsigned __int64 v3; // x0
  unsigned int *v4; // x8
  unsigned int v5; // w9
  unsigned int v6; // w9
  unsigned __int64 *v7; // x8
  unsigned __int64 v8; // x0
  unsigned int *v9; // x8
  unsigned int v10; // w9
  unsigned int v11; // w9
  unsigned __int64 *v12; // x8
  unsigned __int64 v13; // x0
  unsigned int *v14; // x8
  unsigned int v15; // w9
  unsigned int v16; // w9
  unsigned __int64 *v17; // x8
  unsigned __int64 v18; // x0
  unsigned int *v19; // x8
  unsigned int v20; // w9
  unsigned int v21; // w9
  unsigned __int64 *v22; // x8
  __int64 result; // x0
  unsigned int *v24; // x8
  unsigned int v25; // w9
  unsigned int v26; // w9

  a1[18] = (unsigned __int64)(((__int64 *)((__int64*)goff_18EC808) + 2));
  v1 = (unsigned __int64 *)a1[20];
  a1[20] = 0;
  if ( v1 != nullptr )
  {
    v3 = __atomic_exchange_n(v1, 0, 5);
    if ( v3 != 0 )
    {
      v4 = (unsigned int *)(v3 + 8);
      v6 = __atomic_sub_fetch(v4, 1, 5);
      if ( v6 == 0 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    sub_37030(v1);
  }
  if ( a1[14] != 0 )
  {
    sub_163E60(a1 + 14);
    sub_37030(a1[14]);
  }
  sub_163DB0(a1 + 11, a1[12]);
  v7 = a1 + 9;
  v8 = __atomic_exchange_n(v7, 0, 5);
  if ( v8 != 0 )
  {
    v9 = (unsigned int *)(v8 + 8);
    v11 = __atomic_sub_fetch(v9, 1, 5);
    if ( v11 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v12 = a1 + 7;
  v13 = __atomic_exchange_n(v12, 0, 5);
  if ( v13 != 0 )
  {
    v14 = (unsigned int *)(v13 + 8);
    v16 = __atomic_sub_fetch(v14, 1, 5);
    if ( v16 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v17 = a1 + 5;
  v18 = __atomic_exchange_n(v17, 0, 5);
  if ( v18 != 0 )
  {
    v19 = (unsigned int *)(v18 + 8);
    v21 = __atomic_sub_fetch(v19, 1, 5);
    if ( v21 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v22 = a1 + 2;
  result = __atomic_exchange_n(v22, 0, 5);
  if ( result != 0 )
  {
    v24 = (unsigned int *)(result + 8);
    v26 = __atomic_sub_fetch(v24, 1, 5);
    if ( v26 == 0 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
  }
  return result;
}

// N11ubiservices18NotificationSourceINS_16ClubNotificationEEE, virtual slot 1
__int64 __fastcall sub_C18F0(_QWORD *a1)
{
  unsigned __int64 *v1; // x20
  unsigned __int64 v3; // x0
  unsigned int *v4; // x8
  unsigned int v5; // w9
  unsigned int v6; // w9

  *a1 = ((char *)((__int64*)goff_18ED090) + 16);
  v1 = (unsigned __int64 *)a1[2];
  a1[2] = 0;
  if ( v1 != nullptr )
  {
    sub_164490(v1 + 1, v1[2]);
    v3 = __atomic_exchange_n(v1, 0, 5);
    if ( v3 != 0 )
    {
      v4 = (unsigned int *)(v3 + 8);
      v6 = __atomic_sub_fetch(v4, 1, 5);
      if ( v6 == 0 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    sub_37030(v1);
  }
  return sub_37030(a1);
}

__int64 __fastcall sub_C24F0(unsigned __int64 *a1)
{
  _QWORD *v1; // x21
  unsigned __int64 *v3; // x8
  unsigned __int64 v4; // x0
  unsigned int *v5; // x8
  unsigned int v6; // w9
  unsigned int v7; // w9
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

  v1 = a1 + 3;
  sub_3DA20((__int64)(a1 + 3));
  sub_C2610(a1 + 1);
  a1[6] = (unsigned __int64)(((__int64 *)((__int64*)goff_18EC7C0) + 2));
  v3 = a1 + 8;
  v4 = __atomic_exchange_n(v3, 0, 5);
  if ( v4 != 0 )
  {
    v5 = (unsigned int *)(v4 + 8);
    v7 = __atomic_sub_fetch(v5, 1, 5);
    if ( v7 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  sub_792D0(a1 + 6);
  a1[3] = (unsigned __int64)(((__int64 *)((__int64*)goff_18EC8F0) + 2));
  v8 = a1 + 5;
  v9 = __atomic_exchange_n(v8, 0, 5);
  if ( v9 != 0 )
  {
    v10 = (unsigned int *)(v9 + 8);
    v12 = __atomic_sub_fetch(v10, 1, 5);
    if ( v12 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  sub_792D0(v1);
  v13 = a1 + 2;
  v14 = __atomic_exchange_n(v13, 0, 5);
  if ( v14 != 0 )
  {
    v15 = (unsigned int *)(v14 + 8);
    v17 = __atomic_sub_fetch(v15, 1, 5);
    if ( v17 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return sub_C2610(a1 + 1);
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
        v7 = __atomic_fetch_add(v5, 1, 5);
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
      v6 = __atomic_fetch_add(v4, 1, 5);
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

// N11ubiservices18NotificationSourceINS_17EventNotificationEEE, virtual slot 1
__int64 __fastcall sub_D6990(_QWORD *a1)
{
  unsigned __int64 *v1; // x20
  unsigned __int64 v3; // x0
  unsigned int *v4; // x8
  unsigned int v5; // w9
  unsigned int v6; // w9

  *a1 = ((char *)((__int64*)goff_18ED1C0) + 16);
  v1 = (unsigned __int64 *)a1[2];
  a1[2] = 0;
  if ( v1 != nullptr )
  {
    sub_1648A0(v1 + 1, v1[2]);
    v3 = __atomic_exchange_n(v1, 0, 5);
    if ( v3 != 0 )
    {
      v4 = (unsigned int *)(v3 + 8);
      v6 = __atomic_sub_fetch(v4, 1, 5);
      if ( v6 == 0 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    sub_37030(v1);
  }
  return sub_37030(a1);
}

// N11ubiservices20EventInfoPlayerStartE, virtual slot 0
__int64 __fastcall sub_DFDD0(unsigned __int64 *a1)
{
  unsigned __int64 *v2; // x8
  unsigned __int64 v3; // x0
  unsigned int *v4; // x8
  unsigned int v5; // w9
  unsigned int v6; // w9
  unsigned __int64 *v7; // x8
  unsigned __int64 v8; // x0
  unsigned int *v9; // x8
  unsigned int v10; // w9
  unsigned int v11; // w9
  unsigned __int64 v12; // x0
  unsigned __int64 *v13; // x8
  __int64 result; // x0
  unsigned int *v15; // x8
  unsigned int v16; // w9
  unsigned int v17; // w9

  *a1 = (unsigned __int64)(((__int64 *)((__int64*)goff_18ED230) + 2));
  v2 = a1 + 13;
  v3 = __atomic_exchange_n(v2, 0, 5);
  if ( v3 != 0 )
  {
    v4 = (unsigned int *)(v3 + 8);
    v6 = __atomic_sub_fetch(v4, 1, 5);
    if ( v6 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( a1[10] != 0 )
  {
    sub_164FB0(a1 + 10);
    sub_37030(a1[10]);
  }
  *a1 = (unsigned __int64)(((__int64 *)((__int64*)goff_18ED238) + 2));
  v7 = a1 + 9;
  v8 = __atomic_exchange_n(v7, 0, 5);
  if ( v8 != 0 )
  {
    v9 = (unsigned int *)(v8 + 8);
    v11 = __atomic_sub_fetch(v9, 1, 5);
    if ( v11 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v12 = a1[5];
  if ( v12 != 0 )
  {
    a1[6] = v12;
    sub_37030(v12);
  }
  v13 = a1 + 2;
  result = __atomic_exchange_n(v13, 0, 5);
  if ( result != 0 )
  {
    v15 = (unsigned int *)(result + 8);
    v17 = __atomic_sub_fetch(v15, 1, 5);
    if ( v17 == 0 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
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

__int64 __fastcall sub_EAE30(__int64 a1, int a2, unsigned __int64 *a3)
{
  __int64 result; // x0
  unsigned int *v7; // x8
  unsigned int v8; // w9
  unsigned int v9; // w9
  __int64 *v10; // x8
  unsigned __int64 v11; // [xsp+8h] [xbp-28h] BYREF

  sub_7E7E0(&v11, "player.achievement");
  sub_E86C0(a1, 12, &v11, a3);
  result = __atomic_exchange_n(&v11, 0, 5);
  if ( result != 0 )
  {
    v7 = (unsigned int *)(result + 8);
    v9 = __atomic_sub_fetch(v7, 1, 5);
    if ( v9 == 0 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
  }
  v10 = ((__int64*)goff_18ED2E8);
  *(_QWORD *)a1 = v10 + 2;
  *(_DWORD *)(a1 + 80) = a2;
  return result;
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

// N11ubiservices18NotificationSourceINS_18FriendNotificationEEE, virtual slot 1
__int64 __fastcall sub_F0DF0(_QWORD *a1)
{
  unsigned __int64 *v1; // x20
  unsigned __int64 v3; // x0
  unsigned int *v4; // x8
  unsigned int v5; // w9
  unsigned int v6; // w9

  *a1 = ((char *)((__int64*)goff_18ED310) + 16);
  v1 = (unsigned __int64 *)a1[2];
  a1[2] = 0;
  if ( v1 != nullptr )
  {
    sub_165DA0(v1 + 1, v1[2]);
    v3 = __atomic_exchange_n(v1, 0, 5);
    if ( v3 != 0 )
    {
      v4 = (unsigned int *)(v3 + 8);
      v6 = __atomic_sub_fetch(v4, 1, 5);
      if ( v6 == 0 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    sub_37030(v1);
  }
  return sub_37030(a1);
}

unsigned __int64 __fastcall sub_FC820(_QWORD *a1)
{
  unsigned __int64 result; // x0
  unsigned int *v3; // x8
  __int64 *v4; // x9
  unsigned __int64 *v5; // x19
  unsigned int v6; // w9

  a1[3] = 0;
  a1[2] = 0;
  a1[1] = a1 + 2;
  result = sub_36EA0(0x28u, 4u, 0, 1086324736);
  *(_DWORD *)(result + 8) = 0;
  v3 = (unsigned int *)(result + 8);
  *(_QWORD *)(result + 32) = 0;
  v4 = ((__int64 *)((__int64*)goff_18EC818) + 2);
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)result = v4;
  a1[4] = 0;
  v5 = a1 + 4;
  if ( result != 0 )
  {
    v6 = __atomic_fetch_add(v3, 1, 5);
    __atomic_exchange_n(v5, result, 5);
  }
  else
  {
    __atomic_exchange_n(v5, 0, 5);
  }
  return result;
}

unsigned __int64 __fastcall sub_FC8C0(_QWORD *a1)
{
  unsigned __int64 result; // x0
  unsigned int *v3; // x9
  __int64 *v4; // x10
  unsigned __int64 *v5; // x8
  unsigned int v6; // w10
  unsigned __int64 *v7; // x19

  *a1 = ((char *)((__int64*)goff_18EC9F8) + 16);
  a1[3] = 0;
  a1[4] = 0;
  a1[2] = a1 + 3;
  result = sub_36EA0(0x28u, 4u, 0, 1086324736);
  *(_DWORD *)(result + 8) = 0;
  v3 = (unsigned int *)(result + 8);
  v4 = ((__int64*)goff_18EC818);
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)result = v4 + 2;
  a1[5] = 0;
  v5 = a1 + 5;
  if ( result != 0 )
  {
    v6 = __atomic_fetch_add(v3, 1, 5);
    __atomic_exchange_n(v5, result, 5);
  }
  else
  {
    __atomic_exchange_n(v5, 0, 5);
  }
  a1[7] = 0;
  v7 = a1 + 7;
  *(v7 - 1) = 0;
  __atomic_exchange_n(v7, 0, 5);
  return result;
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

// N11ubiservices18NotificationSourceINS_23NotificationUbiServicesEEE, virtual slot 1
__int64 __fastcall sub_124AA0(_QWORD *a1)
{
  unsigned __int64 *v1; // x20
  unsigned __int64 v3; // x0
  unsigned int *v4; // x8
  unsigned int v5; // w9
  unsigned int v6; // w9

  *a1 = ((char *)((__int64*)goff_18ED5B8) + 16);
  v1 = (unsigned __int64 *)a1[2];
  a1[2] = 0;
  if ( v1 != nullptr )
  {
    sub_167480(v1 + 1, v1[2]);
    v3 = __atomic_exchange_n(v1, 0, 5);
    if ( v3 != 0 )
    {
      v4 = (unsigned int *)(v3 + 8);
      v6 = __atomic_sub_fetch(v4, 1, 5);
      if ( v6 == 0 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    sub_37030(v1);
  }
  return sub_37030(a1);
}

// N11ubiservices18NotificationSourceINS_18NotificationCustomEEE, virtual slot 1
__int64 __fastcall sub_125560(_QWORD *a1)
{
  unsigned __int64 *v1; // x20
  unsigned __int64 v3; // x0
  unsigned int *v4; // x8
  unsigned int v5; // w9
  unsigned int v6; // w9

  *a1 = ((char *)((__int64*)goff_18ED5C8) + 16);
  v1 = (unsigned __int64 *)a1[2];
  a1[2] = 0;
  if ( v1 != nullptr )
  {
    sub_167500(v1 + 1, v1[2]);
    v3 = __atomic_exchange_n(v1, 0, 5);
    if ( v3 != 0 )
    {
      v4 = (unsigned int *)(v3 + 8);
      v6 = __atomic_sub_fetch(v4, 1, 5);
      if ( v6 == 0 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    sub_37030(v1);
  }
  return sub_37030(a1);
}

__int64 __fastcall sub_126230(_QWORD *a1, __int64 a2)
{
  __int64 v3; // x21
  __int64 v4; // x21
  unsigned __int64 *v5; // x8
  unsigned int *v6; // x9
  unsigned int v7; // w10
  __int64 v8; // x20
  __int64 result; // x0
  unsigned __int64 *v10; // x19
  unsigned int *v11; // x8
  unsigned int v12; // w9

  *a1 = a2;
  v3 = sub_36EA0(0x30u, 4u, 0, 1086324736);
  *(_QWORD *)(v3 + 8) = 0;
  *(_QWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 24) = 0;
  *(_WORD *)(v3 + 32) = 4;
  *(_QWORD *)(v3 + 40) = "NotificationClient";
  sub_78E10(v3 + 8, 4u);
  a1[1] = v3;
  v4 = sub_36EA0(0x18u, 4u, 0, 1086324736);
  sub_124B30(v4);
  a1[2] = 0;
  v5 = a1 + 2;
  if ( v4 != 0 )
  {
    v6 = (unsigned int *)(v4 + 8);
    v7 = __atomic_fetch_add(v6, 1, 5);
    __atomic_exchange_n(v5, v4, 5);
  }
  else
  {
    __atomic_exchange_n(v5, 0, 5);
  }
  v8 = sub_36EA0(0x18u, 4u, 0, 1086324736);
  result = sub_1255F0(v8);
  a1[3] = 0;
  v10 = a1 + 3;
  if ( v8 != 0 )
  {
    v11 = (unsigned int *)(v8 + 8);
    v12 = __atomic_fetch_add(v11, 1, 5);
    __atomic_exchange_n(v10, v8, 5);
  }
  else
  {
    __atomic_exchange_n(v10, 0, 5);
  }
  return result;
}

// N11ubiservices18NotificationSourceINS_22ParametersNotificationEEE, virtual slot 1
__int64 __fastcall sub_12A7E0(_QWORD *a1)
{
  unsigned __int64 *v1; // x20
  unsigned __int64 v3; // x0
  unsigned int *v4; // x8
  unsigned int v5; // w9
  unsigned int v6; // w9

  *a1 = ((char *)((__int64*)goff_18ED5F8) + 16);
  v1 = (unsigned __int64 *)a1[2];
  a1[2] = 0;
  if ( v1 != nullptr )
  {
    sub_167B80(v1 + 1, v1[2]);
    v3 = __atomic_exchange_n(v1, 0, 5);
    if ( v3 != 0 )
    {
      v4 = (unsigned int *)(v3 + 8);
      v6 = __atomic_sub_fetch(v4, 1, 5);
      if ( v6 == 0 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    sub_37030(v1);
  }
  return sub_37030(a1);
}

unsigned __int64 __fastcall sub_12C9B0(__int64 a1)
{
  __int64 v2; // x20
  unsigned __int64 v3; // x0
  unsigned int *v4; // x8
  unsigned int v5; // w9
  unsigned int v6; // w9
  unsigned __int64 v7; // x0
  unsigned int *v8; // x9
  __int64 *v9; // x21
  unsigned __int64 *v10; // x8
  unsigned int v11; // w10
  unsigned __int64 result; // x0
  unsigned int *v13; // x8
  unsigned __int64 *v14; // x19
  unsigned int v15; // w9
  unsigned __int64 v16; // [xsp+8h] [xbp-18h] BYREF

  v2 = a1 + 8;
  sub_7E7E0(&v16, "{}");
  sub_3EBB0(v2, &v16);
  v3 = __atomic_exchange_n(&v16, 0, 5);
  if ( v3 != 0 )
  {
    v4 = (unsigned int *)(v3 + 8);
    v6 = __atomic_sub_fetch(v4, 1, 5);
    if ( v6 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v7 = sub_36EA0(0x28u, 4u, 0, 1086324736);
  *(_DWORD *)(v7 + 8) = 0;
  v8 = (unsigned int *)(v7 + 8);
  v9 = ((__int64*)goff_18EC818);
  *(_QWORD *)(v7 + 24) = 0;
  *(_QWORD *)(v7 + 32) = 0;
  *(_QWORD *)(v7 + 16) = 0;
  *(_QWORD *)v7 = v9 + 2;
  *(_QWORD *)(a1 + 40) = 0;
  v10 = (unsigned __int64 *)(a1 + 40);
  if ( v7 != 0 )
  {
    v11 = __atomic_fetch_add(v8, 1, 5);
    __atomic_exchange_n(v10, v7, 5);
  }
  else
  {
    __atomic_exchange_n(v10, 0, 5);
  }
  result = sub_36EA0(0x28u, 4u, 0, 1086324736);
  *(_DWORD *)(result + 8) = 0;
  v13 = (unsigned int *)(result + 8);
  *(_QWORD *)result = v9 + 2;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  v14 = (unsigned __int64 *)(a1 + 48);
  if ( result != 0 )
  {
    v15 = __atomic_fetch_add(v13, 1, 5);
    __atomic_exchange_n(v14, result, 5);
  }
  else
  {
    __atomic_exchange_n(v14, 0, 5);
  }
  return result;
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

unsigned __int64 __fastcall sub_13A990(__int64 a1)
{
  unsigned __int64 v2; // x0
  unsigned int *v3; // x9
  __int64 *v4; // x21
  unsigned __int64 *v5; // x8
  unsigned int v6; // w10
  unsigned __int64 v7; // x0
  unsigned int *v8; // x9
  unsigned __int64 *v9; // x8
  unsigned int v10; // w10
  unsigned __int64 result; // x0
  unsigned int *v12; // x9
  unsigned __int64 *v13; // x8
  unsigned int v14; // w10

  v2 = sub_36EA0(0x28u, 4u, 0, 1086324736);
  *(_DWORD *)(v2 + 8) = 0;
  v3 = (unsigned int *)(v2 + 8);
  v4 = ((__int64*)goff_18EC818);
  *(_QWORD *)(v2 + 24) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 16) = 0;
  *(_QWORD *)v2 = v4 + 2;
  *(_QWORD *)(a1 + 8) = 0;
  v5 = (unsigned __int64 *)(a1 + 8);
  if ( v2 != 0 )
  {
    v6 = __atomic_fetch_add(v3, 1, 5);
    __atomic_exchange_n(v5, v2, 5);
  }
  else
  {
    __atomic_exchange_n(v5, 0, 5);
  }
  sub_3E9D0(a1 + 16, &unk_1326E41);
  v7 = sub_36EA0(0x28u, 4u, 0, 1086324736);
  *(_DWORD *)(v7 + 8) = 0;
  v8 = (unsigned int *)(v7 + 8);
  *(_QWORD *)(v7 + 16) = 0;
  *(_QWORD *)v7 = v4 + 2;
  *(_QWORD *)(v7 + 24) = 0;
  *(_QWORD *)(v7 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  v9 = (unsigned __int64 *)(a1 + 40);
  if ( v7 != 0 )
  {
    v10 = __atomic_fetch_add(v8, 1, 5);
    __atomic_exchange_n(v9, v7, 5);
  }
  else
  {
    __atomic_exchange_n(v9, 0, 5);
  }
  result = sub_36EA0(0x28u, 4u, 0, 1086324736);
  *(_DWORD *)(result + 8) = 0;
  v12 = (unsigned int *)(result + 8);
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)result = v4 + 2;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  v13 = (unsigned __int64 *)(a1 + 56);
  if ( result != 0 )
  {
    v14 = __atomic_fetch_add(v12, 1, 5);
    __atomic_exchange_n(v13, result, 5);
  }
  else
  {
    __atomic_exchange_n(v13, 0, 5);
  }
  *(_BYTE *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 74) = 0;
  return result;
}

__int64 *__fastcall sub_142580(__int64 *a1)
{
  __int64 *v1; // x20
  __int64 v3; // x22
  __int64 v4; // x23
  __int64 v5; // x24
  __int64 v6; // x0
  __int64 v7; // x25
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

  v1 = a1 + 2;
  sub_C2610(a1 + 2);
  sub_C2610(a1 + 3);
  v3 = a1[4];
  a1[4] = 0;
  if ( v3 != 0 )
  {
    v4 = *(_QWORD *)(v3 + 56);
    if ( v4 != 0 )
    {
      v5 = *(_QWORD *)(v3 + 64);
      v6 = *(_QWORD *)(v3 + 56);
      if ( v5 != v4 )
      {
        do
        {
          v7 = v5;
          v5 -= 80;
          v8 = (unsigned __int64 *)(v7 - 40);
          v9 = __atomic_exchange_n(v8, 0, 5);
          if ( v9 != 0 )
          {
            v10 = (unsigned int *)(v9 + 8);
            v12 = __atomic_sub_fetch(v10, 1, 5);
            if ( v12 == 0 )
              (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 16LL))(v9);
          }
          v13 = (unsigned __int64 *)(v7 - 64);
          v14 = __atomic_exchange_n(v13, 0, 5);
          if ( v14 != 0 )
          {
            v15 = (unsigned int *)(v14 + 8);
            v17 = __atomic_sub_fetch(v15, 1, 5);
            if ( v17 == 0 )
              (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 16LL))(v14);
          }
        }
        while ( v5 != v4 );
        v6 = *(_QWORD *)(v3 + 56);
      }
      *(_QWORD *)(v3 + 64) = v4;
      sub_37030(v6);
    }
    pthread_mutex_destroy((pthread_mutex_t *)(v3 + 16));
    sub_37030(v3);
  }
  sub_C2610(a1 + 3);
  sub_C2610(v1);
  return sub_C2610(a1 + 1);
}

// N11ubiservices18JobRequestUserInfoE, virtual slot 0
__int64 __fastcall sub_14D760(_QWORD *a1)
{
  unsigned __int64 *v2; // x8
  unsigned __int64 v3; // x0
  unsigned int *v4; // x8
  unsigned int v5; // w9
  unsigned int v6; // w9
  __int64 v7; // x20
  __int64 v8; // x21
  __int64 v9; // x0
  unsigned __int64 *v10; // x8
  unsigned __int64 v11; // x0
  unsigned int *v12; // x8
  unsigned int v13; // w9
  unsigned int v14; // w9

  *a1 = ((__int64 *)goff_18ED8F0 + 2);
  sub_9B5A0(
    a1 + 46,
    "C:/git/ubilibraries/Ubiservices/client-sdk/private/ubiservices/services/user/jobs/jobRequestUserInfo.cpp",
    179);
  sub_169680(a1 + 43, a1[44]);
  a1[40] = ((char *)((__int64*)goff_18ED3B8) + 16);
  v2 = a1 + 42;
  v3 = __atomic_exchange_n(v2, 0, 5);
  if ( v3 != 0 )
  {
    v4 = (unsigned int *)(v3 + 8);
    v6 = __atomic_sub_fetch(v4, 1, 5);
    if ( v6 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  sub_792D0(a1 + 40);
  v7 = a1[36];
  if ( v7 != 0 )
  {
    v8 = a1[37];
    v9 = a1[36];
    if ( v8 != v7 )
    {
      do
      {
        v10 = (unsigned __int64 *)(v8 - 16);
        v8 -= 24;
        v11 = __atomic_exchange_n(v10, 0, 5);
        if ( v11 != 0 )
        {
          v12 = (unsigned int *)(v11 + 8);
          v14 = __atomic_sub_fetch(v12, 1, 5);
          if ( v14 == 0 )
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
      while ( v8 != v7 );
      v9 = a1[36];
    }
    a1[37] = v7;
    sub_37030(v9);
  }
  return sub_1B00B0(a1);
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

// N11ubiservices20HttpTimeoutComponentE, virtual slot 0
__int64 __fastcall sub_152A90(_QWORD *a1)
{
  unsigned __int64 *v2; // x8
  __int64 result; // x0
  unsigned int *v4; // x8
  unsigned int v5; // w9
  unsigned int v6; // w9

  *a1 = ((char *)((__int64*)goff_18ECA30) + 16);
  sub_169D20(a1 + 4, a1[5]);
  v2 = a1 + 3;
  result = __atomic_exchange_n(v2, 0, 5);
  if ( result != 0 )
  {
    v4 = (unsigned int *)(result + 8);
    v6 = __atomic_sub_fetch(v4, 1, 5);
    if ( v6 == 0 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
  }
  *a1 = ((__int64 *)((__int64*)goff_18EC910) + 2);
  return result;
}

// N11ubiservices20HttpTimeoutComponentE, virtual slot 1
__int64 __fastcall sub_152B10(_QWORD *a1)
{
  unsigned __int64 *v2; // x8
  unsigned __int64 v3; // x0
  unsigned int *v4; // x8
  unsigned int v5; // w9
  unsigned int v6; // w9

  *a1 = ((char *)((__int64*)goff_18ECA30) + 16);
  sub_169D20(a1 + 4, a1[5]);
  v2 = a1 + 3;
  v3 = __atomic_exchange_n(v2, 0, 5);
  if ( v3 != 0 )
  {
    v4 = (unsigned int *)(v3 + 8);
    v6 = __atomic_sub_fetch(v4, 1, 5);
    if ( v6 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *a1 = ((__int64 *)((__int64*)goff_18EC910) + 2);
  return sub_37030(a1);
}

// N11ubiservices23JobWebSocketWriteStreamE, virtual slot 1
__int64 __fastcall sub_1532D0(unsigned __int64 *a1)
{
  unsigned __int64 *v2; // x8
  unsigned __int64 v3; // x0
  unsigned int *v4; // x8
  unsigned int v5; // w9
  unsigned int v6; // w9
  unsigned __int64 *v7; // x8
  unsigned __int64 v8; // x0
  unsigned int *v9; // x8
  unsigned int v10; // w9
  unsigned int v11; // w9
  __int64 *v12; // x10
  unsigned __int64 *v13; // x8
  unsigned __int64 v14; // x0
  unsigned int *v15; // x8
  unsigned int v16; // w9
  unsigned int v17; // w9

  *a1 = ((char *)goff_18ECC48 + 16);
  v2 = a1 + 13;
  v3 = __atomic_exchange_n(v2, 0, 5);
  if ( v3 != 0 )
  {
    v4 = (unsigned int *)(v3 + 8);
    v6 = __atomic_sub_fetch(v4, 1, 5);
    if ( v6 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v7 = a1 + 12;
  v8 = __atomic_exchange_n(v7, 0, 5);
  if ( v8 != 0 )
  {
    v9 = (unsigned int *)(v8 + 8);
    v11 = __atomic_sub_fetch(v9, 1, 5);
    if ( v11 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v12 = ((__int64 *)((__int64*)goff_18EC7C0) + 2);
  *a1 = (unsigned __int64)(((__int64 *)((__int64*)goff_18ECB90) + 2));
  v13 = a1 + 11;
  a1[9] = (unsigned __int64)v12;
  v14 = __atomic_exchange_n(v13, 0, 5);
  if ( v14 != 0 )
  {
    v15 = (unsigned int *)(v14 + 8);
    v17 = __atomic_sub_fetch(v15, 1, 5);
    if ( v17 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  sub_792D0(a1 + 9);
  return sub_37030(a1);
}

// N11ubiservices16JobDeleteSessionE, virtual slot 0
__int64 __fastcall sub_153410(unsigned __int64 *a1)
{
  __int64 *v1; // x21
  _QWORD *v3; // x20
  unsigned __int64 *v4; // x8
  unsigned __int64 v5; // x0
  unsigned int *v6; // x8
  unsigned int v7; // w9
  unsigned int v8; // w9
  unsigned __int64 *v9; // x8
  unsigned __int64 v10; // x0
  unsigned int *v11; // x8
  unsigned int v12; // w9
  unsigned int v13; // w9

  v1 = ((__int64*)goff_18EC7C0);
  *a1 = ((char *)goff_18ECE20 + 16);
  v3 = a1 + 59;
  a1[59] = (unsigned __int64)(v1 + 2);
  v4 = a1 + 61;
  v5 = __atomic_exchange_n(v4, 0, 5);
  if ( v5 != 0 )
  {
    v6 = (unsigned int *)(v5 + 8);
    v8 = __atomic_sub_fetch(v6, 1, 5);
    if ( v8 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  sub_792D0(v3);
  a1[56] = (unsigned __int64)(v1 + 2);
  v9 = a1 + 58;
  v10 = __atomic_exchange_n(v9, 0, 5);
  if ( v10 != 0 )
  {
    v11 = (unsigned int *)(v10 + 8);
    v13 = __atomic_sub_fetch(v11, 1, 5);
    if ( v13 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  sub_792D0(a1 + 56);
  sub_C3520(a1 + 36);
  return sub_156370(a1);
}

// N11ubiservices16JobDeleteSessionE, virtual slot 1
__int64 __fastcall sub_1534F0(unsigned __int64 *a1)
{
  __int64 *v1; // x21
  _QWORD *v3; // x20
  unsigned __int64 *v4; // x8
  unsigned __int64 v5; // x0
  unsigned int *v6; // x8
  unsigned int v7; // w9
  unsigned int v8; // w9
  unsigned __int64 *v9; // x8
  unsigned __int64 v10; // x0
  unsigned int *v11; // x8
  unsigned int v12; // w9
  unsigned int v13; // w9

  v1 = ((__int64*)goff_18EC7C0);
  *a1 = ((char *)goff_18ECE20 + 16);
  v3 = a1 + 59;
  a1[59] = (unsigned __int64)(v1 + 2);
  v4 = a1 + 61;
  v5 = __atomic_exchange_n(v4, 0, 5);
  if ( v5 != 0 )
  {
    v6 = (unsigned int *)(v5 + 8);
    v8 = __atomic_sub_fetch(v6, 1, 5);
    if ( v8 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  sub_792D0(v3);
  a1[56] = (unsigned __int64)(v1 + 2);
  v9 = a1 + 58;
  v10 = __atomic_exchange_n(v9, 0, 5);
  if ( v10 != 0 )
  {
    v11 = (unsigned int *)(v10 + 8);
    v13 = __atomic_sub_fetch(v11, 1, 5);
    if ( v13 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  sub_792D0(a1 + 56);
  sub_C3520(a1 + 36);
  sub_156370(a1);
  return sub_37030(a1);
}

// N11ubiservices24ParametersRemoteLogsGameE, virtual slot 3
__int64 __fastcall sub_153AB0(_QWORD *a1)
{
  void **v1; // x20
  void **v3; // x21
  void *v4; // x0
  unsigned __int64 *v5; // x8
  unsigned __int64 v6; // x0
  unsigned int *v7; // x8
  unsigned int v8; // w9
  unsigned int v9; // w9
  unsigned __int64 *v10; // x19
  __int64 result; // x0
  unsigned int *v12; // x8
  unsigned int v13; // w9
  unsigned int v14; // w9

  v1 = (void **)a1[6];
  *a1 = ((char *)((__int64*)goff_18ED678) + 16);
  if ( v1 != nullptr )
  {
    do
    {
      v3 = (void **)*v1;
      if ( ((_BYTE)v1[2] & 1) != 0 )
        _ZdlPv(v1[4]);
      _ZdlPv(v1);
      v1 = v3;
    }
    while ( v3 != nullptr );
  }
  v4 = (void *)a1[4];
  a1[4] = 0;
  if ( v4 != nullptr )
    _ZdlPv(v4);
  v5 = a1 + 3;
  v6 = __atomic_exchange_n(v5, 0, 5);
  if ( v6 != 0 )
  {
    v7 = (unsigned int *)(v6 + 8);
    v9 = __atomic_sub_fetch(v7, 1, 5);
    if ( v9 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *a1 = ((char *)((__int64*)goff_18ECEF8) + 16);
  v10 = a1 + 1;
  result = __atomic_exchange_n(v10, 0, 5);
  if ( result != 0 )
  {
    v12 = (unsigned int *)(result + 8);
    v14 = __atomic_sub_fetch(v12, 1, 5);
    if ( v14 == 0 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
  }
  return result;
}

// N11ubiservices24ParametersRemoteLogsGameE, virtual slot 4
__int64 __fastcall sub_153BB0(_QWORD *a1)
{
  void **v1; // x20
  void **v3; // x21
  void *v4; // x0
  unsigned __int64 *v5; // x8
  unsigned __int64 v6; // x0
  unsigned int *v7; // x8
  unsigned int v8; // w9
  unsigned int v9; // w9
  unsigned __int64 *v10; // x8
  unsigned __int64 v11; // x0
  unsigned int *v12; // x8
  unsigned int v13; // w9
  unsigned int v14; // w9

  v1 = (void **)a1[6];
  *a1 = ((char *)((__int64*)goff_18ED678) + 16);
  if ( v1 != nullptr )
  {
    do
    {
      v3 = (void **)*v1;
      if ( ((_BYTE)v1[2] & 1) != 0 )
        _ZdlPv(v1[4]);
      _ZdlPv(v1);
      v1 = v3;
    }
    while ( v3 != nullptr );
  }
  v4 = (void *)a1[4];
  a1[4] = 0;
  if ( v4 != nullptr )
    _ZdlPv(v4);
  v5 = a1 + 3;
  v6 = __atomic_exchange_n(v5, 0, 5);
  if ( v6 != 0 )
  {
    v7 = (unsigned int *)(v6 + 8);
    v9 = __atomic_sub_fetch(v7, 1, 5);
    if ( v9 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *a1 = ((char *)((__int64*)goff_18ECEF8) + 16);
  v10 = a1 + 1;
  v11 = __atomic_exchange_n(v10, 0, 5);
  if ( v11 != 0 )
  {
    v12 = (unsigned int *)(v11 + 8);
    v14 = __atomic_sub_fetch(v12, 1, 5);
    if ( v14 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return sub_37030(a1);
}

// N11ubiservices28ParametersRemoteLogsInternalE, virtual slot 3
__int64 __fastcall sub_153CB0(_QWORD *a1)
{
  unsigned __int64 *v2; // x8
  __int64 result; // x0
  unsigned int *v4; // x8
  unsigned int v5; // w9
  unsigned int v6; // w9

  *a1 = ((char *)((__int64*)goff_18ED670) + 16);
  sub_161860(a1 + 3, a1[4]);
  *a1 = ((char *)((__int64*)goff_18ECEF8) + 16);
  v2 = a1 + 1;
  result = __atomic_exchange_n(v2, 0, 5);
  if ( result != 0 )
  {
    v4 = (unsigned int *)(result + 8);
    v6 = __atomic_sub_fetch(v4, 1, 5);
    if ( v6 == 0 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
  }
  return result;
}

// N11ubiservices28ParametersRemoteLogsInternalE, virtual slot 4
__int64 __fastcall sub_153D40(_QWORD *a1)
{
  unsigned __int64 *v2; // x8
  unsigned __int64 v3; // x0
  unsigned int *v4; // x8
  unsigned int v5; // w9
  unsigned int v6; // w9

  *a1 = ((char *)((__int64*)goff_18ED670) + 16);
  sub_161860(a1 + 3, a1[4]);
  *a1 = ((char *)((__int64*)goff_18ECEF8) + 16);
  v2 = a1 + 1;
  v3 = __atomic_exchange_n(v2, 0, 5);
  if ( v3 != 0 )
  {
    v4 = (unsigned int *)(v3 + 8);
    v6 = __atomic_sub_fetch(v4, 1, 5);
    if ( v6 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return sub_37030(a1);
}

// N11ubiservices20EventInfoPlayerStartE, virtual slot 1
__int64 __fastcall sub_155EA0(unsigned __int64 *a1)
{
  unsigned __int64 *v2; // x8
  unsigned __int64 v3; // x0
  unsigned int *v4; // x8
  unsigned int v5; // w9
  unsigned int v6; // w9
  unsigned __int64 *v7; // x8
  unsigned __int64 v8; // x0
  unsigned int *v9; // x8
  unsigned int v10; // w9
  unsigned int v11; // w9
  unsigned __int64 v12; // x0
  unsigned __int64 *v13; // x8
  unsigned __int64 v14; // x0
  unsigned int *v15; // x8
  unsigned int v16; // w9
  unsigned int v17; // w9

  *a1 = (unsigned __int64)(((__int64 *)((__int64*)goff_18ED230) + 2));
  v2 = a1 + 13;
  v3 = __atomic_exchange_n(v2, 0, 5);
  if ( v3 != 0 )
  {
    v4 = (unsigned int *)(v3 + 8);
    v6 = __atomic_sub_fetch(v4, 1, 5);
    if ( v6 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( a1[10] != 0 )
  {
    sub_164FB0(a1 + 10);
    sub_37030(a1[10]);
  }
  *a1 = (unsigned __int64)(((__int64 *)((__int64*)goff_18ED238) + 2));
  v7 = a1 + 9;
  v8 = __atomic_exchange_n(v7, 0, 5);
  if ( v8 != 0 )
  {
    v9 = (unsigned int *)(v8 + 8);
    v11 = __atomic_sub_fetch(v9, 1, 5);
    if ( v11 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v12 = a1[5];
  if ( v12 != 0 )
  {
    a1[6] = v12;
    sub_37030(v12);
  }
  v13 = a1 + 2;
  v14 = __atomic_exchange_n(v13, 0, 5);
  if ( v14 != 0 )
  {
    v15 = (unsigned int *)(v14 + 8);
    v17 = __atomic_sub_fetch(v15, 1, 5);
    if ( v17 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return sub_37030(a1);
}

// N11ubiservices29JobRequestLeaderboardProfilesE, virtual slot 0
__int64 __fastcall sub_157A20(_QWORD *a1)
{
  unsigned __int64 *v2; // x8
  unsigned __int64 v3; // x0
  unsigned int *v4; // x8
  unsigned int v5; // w9
  unsigned int v6; // w9
  __int64 v7; // x20
  __int64 v8; // x21
  __int64 v9; // x0
  unsigned __int64 *v10; // x8
  unsigned __int64 v11; // x0
  unsigned int *v12; // x8
  unsigned int v13; // w9
  unsigned int v14; // w9
  unsigned __int64 *v15; // x8
  unsigned __int64 v16; // x0
  unsigned int *v17; // x8
  unsigned int v18; // w9
  unsigned int v19; // w9

  *a1 = ((char *)goff_18ED4B0 + 16);
  v2 = a1 + 41;
  v3 = __atomic_exchange_n(v2, 0, 5);
  if ( v3 != 0 )
  {
    v4 = (unsigned int *)(v3 + 8);
    v6 = __atomic_sub_fetch(v4, 1, 5);
    if ( v6 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v7 = a1[37];
  if ( v7 != 0 )
  {
    v8 = a1[38];
    v9 = a1[37];
    if ( v8 != v7 )
    {
      do
      {
        v10 = (unsigned __int64 *)(v8 - 16);
        v8 -= 24;
        v11 = __atomic_exchange_n(v10, 0, 5);
        if ( v11 != 0 )
        {
          v12 = (unsigned int *)(v11 + 8);
          v14 = __atomic_sub_fetch(v12, 1, 5);
          if ( v14 == 0 )
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
      while ( v8 != v7 );
      v9 = a1[37];
    }
    a1[38] = v7;
    sub_37030(v9);
  }
  v15 = a1 + 36;
  v16 = __atomic_exchange_n(v15, 0, 5);
  if ( v16 != 0 )
  {
    v17 = (unsigned int *)(v16 + 8);
    v19 = __atomic_sub_fetch(v17, 1, 5);
    if ( v19 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return sub_16AB30(a1);
}

// N11ubiservices29JobRequestLeaderboardProfilesE, virtual slot 1
__int64 __fastcall sub_157B30(_QWORD *a1)
{
  unsigned __int64 *v2; // x8
  unsigned __int64 v3; // x0
  unsigned int *v4; // x8
  unsigned int v5; // w9
  unsigned int v6; // w9
  __int64 v7; // x20
  __int64 v8; // x21
  __int64 v9; // x0
  unsigned __int64 *v10; // x8
  unsigned __int64 v11; // x0
  unsigned int *v12; // x8
  unsigned int v13; // w9
  unsigned int v14; // w9
  unsigned __int64 *v15; // x8
  unsigned __int64 v16; // x0
  unsigned int *v17; // x8
  unsigned int v18; // w9
  unsigned int v19; // w9

  *a1 = ((char *)goff_18ED4B0 + 16);
  v2 = a1 + 41;
  v3 = __atomic_exchange_n(v2, 0, 5);
  if ( v3 != 0 )
  {
    v4 = (unsigned int *)(v3 + 8);
    v6 = __atomic_sub_fetch(v4, 1, 5);
    if ( v6 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v7 = a1[37];
  if ( v7 != 0 )
  {
    v8 = a1[38];
    v9 = a1[37];
    if ( v8 != v7 )
    {
      do
      {
        v10 = (unsigned __int64 *)(v8 - 16);
        v8 -= 24;
        v11 = __atomic_exchange_n(v10, 0, 5);
        if ( v11 != 0 )
        {
          v12 = (unsigned int *)(v11 + 8);
          v14 = __atomic_sub_fetch(v12, 1, 5);
          if ( v14 == 0 )
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
      while ( v8 != v7 );
      v9 = a1[37];
    }
    a1[38] = v7;
    sub_37030(v9);
  }
  v15 = a1 + 36;
  v16 = __atomic_exchange_n(v15, 0, 5);
  if ( v16 != 0 )
  {
    v17 = (unsigned int *)(v16 + 8);
    v19 = __atomic_sub_fetch(v17, 1, 5);
    if ( v19 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  sub_16AB30(a1);
  return sub_37030(a1);
}

// N11ubiservices20JobRequestUsersBatchE, virtual slot 0
__int64 __fastcall sub_15A690(_QWORD *a1)
{
  __int64 v1; // x9
  _QWORD *v3; // x20
  unsigned __int64 *v4; // x8
  unsigned __int64 v5; // x0
  unsigned int *v6; // x8
  unsigned int v7; // w9
  unsigned int v8; // w9
  __int64 v9; // x20
  __int64 v10; // x21
  __int64 v11; // x0
  unsigned __int64 *v12; // x8
  unsigned __int64 v13; // x0
  unsigned int *v14; // x8
  unsigned int v15; // w9
  unsigned int v16; // w9

  v1 = ((__int64*)goff_18ED3B8);
  *a1 = ((char *)((__int64*)goff_18ED8D0) + 16);
  v3 = a1 + 39;
  a1[39] = v1 + 16;
  v4 = a1 + 41;
  v5 = __atomic_exchange_n(v4, 0, 5);
  if ( v5 != 0 )
  {
    v6 = (unsigned int *)(v5 + 8);
    v8 = __atomic_sub_fetch(v6, 1, 5);
    if ( v8 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  sub_792D0(v3);
  v9 = a1[36];
  if ( v9 != 0 )
  {
    v10 = a1[37];
    v11 = a1[36];
    if ( v10 != v9 )
    {
      do
      {
        v12 = (unsigned __int64 *)(v10 - 16);
        v10 -= 24;
        v13 = __atomic_exchange_n(v12, 0, 5);
        if ( v13 != 0 )
        {
          v14 = (unsigned int *)(v13 + 8);
          v16 = __atomic_sub_fetch(v14, 1, 5);
          if ( v16 == 0 )
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
      while ( v10 != v9 );
      v11 = a1[36];
    }
    a1[37] = v9;
    sub_37030(v11);
  }
  return sub_1B00B0(a1);
}

// N11ubiservices20JobRequestUsersBatchE, virtual slot 1
__int64 __fastcall sub_15A790(_QWORD *a1)
{
  __int64 v1; // x9
  _QWORD *v3; // x20
  unsigned __int64 *v4; // x8
  unsigned __int64 v5; // x0
  unsigned int *v6; // x8
  unsigned int v7; // w9
  unsigned int v8; // w9
  __int64 v9; // x20
  __int64 v10; // x21
  __int64 v11; // x0
  unsigned __int64 *v12; // x8
  unsigned __int64 v13; // x0
  unsigned int *v14; // x8
  unsigned int v15; // w9
  unsigned int v16; // w9

  v1 = ((__int64*)goff_18ED3B8);
  *a1 = ((char *)((__int64*)goff_18ED8D0) + 16);
  v3 = a1 + 39;
  a1[39] = v1 + 16;
  v4 = a1 + 41;
  v5 = __atomic_exchange_n(v4, 0, 5);
  if ( v5 != 0 )
  {
    v6 = (unsigned int *)(v5 + 8);
    v8 = __atomic_sub_fetch(v6, 1, 5);
    if ( v8 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  sub_792D0(v3);
  v9 = a1[36];
  if ( v9 != 0 )
  {
    v10 = a1[37];
    v11 = a1[36];
    if ( v10 != v9 )
    {
      do
      {
        v12 = (unsigned __int64 *)(v10 - 16);
        v10 -= 24;
        v13 = __atomic_exchange_n(v12, 0, 5);
        if ( v13 != 0 )
        {
          v14 = (unsigned int *)(v13 + 8);
          v16 = __atomic_sub_fetch(v14, 1, 5);
          if ( v16 == 0 )
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
      while ( v10 != v9 );
      v11 = a1[36];
    }
    a1[37] = v9;
    sub_37030(v11);
  }
  sub_1B00B0(a1);
  return sub_37030(a1);
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

// N11ubiservices18HttpRequestContext15InternalContextE, virtual slot 0
__int64 __fastcall sub_15AFC0(__int64 a1)
{
  unsigned __int64 *v2; // x8
  unsigned __int64 v3; // x0
  unsigned int *v4; // x8
  unsigned int v5; // w9
  unsigned int v6; // w9
  unsigned __int64 *v7; // x8
  unsigned __int64 v8; // x0
  unsigned int *v9; // x8
  unsigned int v10; // w9
  unsigned int v11; // w9
  unsigned __int64 *v12; // x8
  unsigned __int64 v13; // x0
  unsigned int *v14; // x8
  unsigned int v15; // w9
  unsigned int v16; // w9
  unsigned __int64 *v17; // x8
  unsigned __int64 v18; // x0
  unsigned int *v19; // x8
  unsigned int v20; // w9
  unsigned int v21; // w9
  unsigned __int64 *v22; // x8
  unsigned __int64 v23; // x0
  unsigned int *v24; // x8
  unsigned int v25; // w9
  unsigned int v26; // w9

  *(_QWORD *)a1 = ((char *)goff_18ECA58 + 16);
  v2 = (unsigned __int64 *)(a1 + 352);
  v3 = __atomic_exchange_n(v2, 0, 5);
  if ( v3 != 0 )
  {
    v4 = (unsigned int *)(v3 + 8);
    v6 = __atomic_sub_fetch(v4, 1, 5);
    if ( v6 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v7 = (unsigned __int64 *)(a1 + 328);
  v8 = __atomic_exchange_n(v7, 0, 5);
  if ( v8 != 0 )
  {
    v9 = (unsigned int *)(v8 + 8);
    v11 = __atomic_sub_fetch(v9, 1, 5);
    if ( v11 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  *(_QWORD *)(a1 + 240) = ((__int64 *)((__int64*)goff_18EC920) + 2);
  v12 = (unsigned __int64 *)(a1 + 248);
  v13 = __atomic_exchange_n(v12, 0, 5);
  if ( v13 != 0 )
  {
    v14 = (unsigned int *)(v13 + 8);
    v16 = __atomic_sub_fetch(v14, 1, 5);
    if ( v16 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v17 = (unsigned __int64 *)(a1 + 224);
  v18 = __atomic_exchange_n(v17, 0, 5);
  if ( v18 != 0 )
  {
    v19 = (unsigned int *)(v18 + 8);
    v21 = __atomic_sub_fetch(v19, 1, 5);
    if ( v21 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v22 = (unsigned __int64 *)(a1 + 216);
  v23 = __atomic_exchange_n(v22, 0, 5);
  if ( v23 != 0 )
  {
    v24 = (unsigned int *)(v23 + 8);
    v26 = __atomic_sub_fetch(v24, 1, 5);
    if ( v26 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  sub_701100(a1 + 192, *(_QWORD **)(a1 + 200));
  sub_5DF60(a1 + 64);
  return pthread_mutex_destroy((pthread_mutex_t *)(a1 + 24));
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

// N11ubiservices22JobApplyDynamicUpdatesE, virtual slot 0
__int64 __fastcall sub_15B980(unsigned __int64 *a1)
{
  unsigned __int64 *v2; // x8
  unsigned __int64 v3; // x0
  unsigned int *v4; // x8
  unsigned int v5; // w9
  unsigned int v6; // w9
  __int64 v7; // x21
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

  *a1 = ((char *)((__int64*)goff_18ECCF8) + 16);
  sub_6EEA10(a1 + 46);
  a1[42] = ((char *)((__int64*)goff_18ECD18) + 16);
  v2 = a1 + 44;
  v3 = __atomic_exchange_n(v2, 0, 5);
  if ( v3 != 0 )
  {
    v4 = (unsigned int *)(v3 + 8);
    v6 = __atomic_sub_fetch(v4, 1, 5);
    if ( v6 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  sub_792D0(a1 + 42);
  v7 = ((__int64*)goff_18ECD00);
  a1[39] = ((char *)((__int64*)goff_18ECD00) + 16);
  v8 = a1 + 41;
  v9 = __atomic_exchange_n(v8, 0, 5);
  if ( v9 != 0 )
  {
    v10 = (unsigned int *)(v9 + 8);
    v12 = __atomic_sub_fetch(v10, 1, 5);
    if ( v12 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  sub_792D0(a1 + 39);
  a1[36] = v7 + 16;
  v13 = a1 + 38;
  v14 = __atomic_exchange_n(v13, 0, 5);
  if ( v14 != 0 )
  {
    v15 = (unsigned int *)(v14 + 8);
    v17 = __atomic_sub_fetch(v15, 1, 5);
    if ( v17 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  sub_792D0(a1 + 36);
  return sub_181380(a1);
}

// N11ubiservices22JobApplyDynamicUpdatesE, virtual slot 1
__int64 __fastcall sub_15BAC0(unsigned __int64 *a1)
{
  unsigned __int64 *v2; // x8
  unsigned __int64 v3; // x0
  unsigned int *v4; // x8
  unsigned int v5; // w9
  unsigned int v6; // w9
  __int64 v7; // x21
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

  *a1 = ((char *)((__int64*)goff_18ECCF8) + 16);
  sub_6EEA10(a1 + 46);
  a1[42] = ((char *)((__int64*)goff_18ECD18) + 16);
  v2 = a1 + 44;
  v3 = __atomic_exchange_n(v2, 0, 5);
  if ( v3 != 0 )
  {
    v4 = (unsigned int *)(v3 + 8);
    v6 = __atomic_sub_fetch(v4, 1, 5);
    if ( v6 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  sub_792D0(a1 + 42);
  v7 = ((__int64*)goff_18ECD00);
  a1[39] = ((char *)((__int64*)goff_18ECD00) + 16);
  v8 = a1 + 41;
  v9 = __atomic_exchange_n(v8, 0, 5);
  if ( v9 != 0 )
  {
    v10 = (unsigned int *)(v9 + 8);
    v12 = __atomic_sub_fetch(v10, 1, 5);
    if ( v12 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  sub_792D0(a1 + 39);
  a1[36] = v7 + 16;
  v13 = a1 + 38;
  v14 = __atomic_exchange_n(v13, 0, 5);
  if ( v14 != 0 )
  {
    v15 = (unsigned int *)(v14 + 8);
    v17 = __atomic_sub_fetch(v15, 1, 5);
    if ( v17 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  sub_792D0(a1 + 36);
  sub_181380(a1);
  return sub_37030(a1);
}

// N11ubiservices23JobPeriodicPushPlayTimeE, virtual slot 0
__int64 __fastcall sub_15D410(_QWORD *a1)
{
  unsigned __int64 *v2; // x20
  unsigned __int64 *v3; // x8
  unsigned __int64 v4; // x0
  unsigned int *v5; // x8
  unsigned int v6; // w9
  unsigned int v7; // w9
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
  unsigned __int64 v18; // x0
  unsigned int *v19; // x8
  unsigned int v20; // w9
  unsigned int v21; // w9
  __int64 *v22; // x10
  unsigned __int64 *v23; // x8
  _QWORD *v24; // x19
  unsigned __int64 v25; // x0
  unsigned int *v26; // x8
  unsigned int v27; // w9
  unsigned int v28; // w9

  v2 = a1 + 12;
  v3 = a1 + 15;
  v4 = __atomic_exchange_n(v3, 0, 5);
  if ( v4 != 0 )
  {
    v5 = (unsigned int *)(v4 + 8);
    v7 = __atomic_sub_fetch(v5, 1, 5);
    if ( v7 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v8 = a1 + 14;
  v9 = __atomic_exchange_n(v8, 0, 5);
  if ( v9 != 0 )
  {
    v10 = (unsigned int *)(v9 + 8);
    v12 = __atomic_sub_fetch(v10, 1, 5);
    if ( v12 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v13 = a1 + 13;
  v14 = __atomic_exchange_n(v13, 0, 5);
  if ( v14 != 0 )
  {
    v15 = (unsigned int *)(v14 + 8);
    v17 = __atomic_sub_fetch(v15, 1, 5);
    if ( v17 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v18 = __atomic_exchange_n(v2, 0, 5);
  if ( v18 != 0 )
  {
    v19 = (unsigned int *)(v18 + 8);
    v21 = __atomic_sub_fetch(v19, 1, 5);
    if ( v21 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v22 = ((__int64 *)((__int64*)goff_18EC7C0) + 2);
  *a1 = ((__int64 *)((__int64*)goff_18ECB90) + 2);
  v23 = a1 + 11;
  a1[9] = v22;
  v24 = a1 + 9;
  v25 = __atomic_exchange_n(v23, 0, 5);
  if ( v25 != 0 )
  {
    v26 = (unsigned int *)(v25 + 8);
    v28 = __atomic_sub_fetch(v26, 1, 5);
    if ( v28 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  return sub_792D0(v24);
}

// N11ubiservices23JobPeriodicPushPlayTimeE, virtual slot 1
__int64 __fastcall sub_15D570(unsigned __int64 *a1)
{
  unsigned __int64 *v2; // x20
  unsigned __int64 *v3; // x8
  unsigned __int64 v4; // x0
  unsigned int *v5; // x8
  unsigned int v6; // w9
  unsigned int v7; // w9
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
  unsigned __int64 v18; // x0
  unsigned int *v19; // x8
  unsigned int v20; // w9
  unsigned int v21; // w9
  __int64 *v22; // x10
  unsigned __int64 *v23; // x8
  unsigned __int64 v24; // x0
  unsigned int *v25; // x8
  unsigned int v26; // w9
  unsigned int v27; // w9

  v2 = a1 + 12;
  v3 = a1 + 15;
  v4 = __atomic_exchange_n(v3, 0, 5);
  if ( v4 != 0 )
  {
    v5 = (unsigned int *)(v4 + 8);
    v7 = __atomic_sub_fetch(v5, 1, 5);
    if ( v7 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v8 = a1 + 14;
  v9 = __atomic_exchange_n(v8, 0, 5);
  if ( v9 != 0 )
  {
    v10 = (unsigned int *)(v9 + 8);
    v12 = __atomic_sub_fetch(v10, 1, 5);
    if ( v12 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v13 = a1 + 13;
  v14 = __atomic_exchange_n(v13, 0, 5);
  if ( v14 != 0 )
  {
    v15 = (unsigned int *)(v14 + 8);
    v17 = __atomic_sub_fetch(v15, 1, 5);
    if ( v17 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v18 = __atomic_exchange_n(v2, 0, 5);
  if ( v18 != 0 )
  {
    v19 = (unsigned int *)(v18 + 8);
    v21 = __atomic_sub_fetch(v19, 1, 5);
    if ( v21 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v22 = ((__int64 *)((__int64*)goff_18EC7C0) + 2);
  *a1 = (unsigned __int64)(((__int64 *)((__int64*)goff_18ECB90) + 2));
  v23 = a1 + 11;
  a1[9] = (unsigned __int64)v22;
  v24 = __atomic_exchange_n(v23, 0, 5);
  if ( v24 != 0 )
  {
    v25 = (unsigned int *)(v24 + 8);
    v27 = __atomic_sub_fetch(v25, 1, 5);
    if ( v27 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  sub_792D0(a1 + 9);
  return sub_37030(a1);
}

// N11ubiservices20JobStartEventSessionE, virtual slot 0
__int64 __fastcall sub_15D7C0(unsigned __int64 *a1)
{
  unsigned __int64 *v2; // x8
  unsigned __int64 v3; // x0
  unsigned int *v4; // x8
  unsigned int v5; // w9
  unsigned int v6; // w9
  unsigned __int64 *v7; // x8
  unsigned __int64 v8; // x0
  unsigned int *v9; // x8
  unsigned int v10; // w9
  unsigned int v11; // w9
  unsigned __int64 *v12; // x8
  unsigned __int64 v13; // x0
  unsigned int *v14; // x8
  unsigned int v15; // w9
  unsigned int v16; // w9

  *a1 = ((char *)((__int64*)goff_18ED298) + 16);
  v2 = a1 + 45;
  v3 = __atomic_exchange_n(v2, 0, 5);
  if ( v3 != 0 )
  {
    v4 = (unsigned int *)(v3 + 8);
    v6 = __atomic_sub_fetch(v4, 1, 5);
    if ( v6 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( a1[42] != 0 )
  {
    sub_164FB0(a1 + 42);
    sub_37030(a1[42]);
  }
  a1[39] = ((char *)((__int64*)goff_18ED078) + 16);
  v7 = a1 + 41;
  v8 = __atomic_exchange_n(v7, 0, 5);
  if ( v8 != 0 )
  {
    v9 = (unsigned int *)(v8 + 8);
    v11 = __atomic_sub_fetch(v9, 1, 5);
    if ( v11 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  sub_792D0(a1 + 39);
  a1[36] = (unsigned __int64)(((__int64 *)((__int64*)goff_18EC7C0) + 2));
  v12 = a1 + 38;
  v13 = __atomic_exchange_n(v12, 0, 5);
  if ( v13 != 0 )
  {
    v14 = (unsigned int *)(v13 + 8);
    v16 = __atomic_sub_fetch(v14, 1, 5);
    if ( v16 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  sub_792D0(a1 + 36);
  return sub_156370(a1);
}

// N11ubiservices12Scheduler_BF21SchedulerWorkerThreadE, virtual slot 2
char *__fastcall sub_161AF0(__int64 a1)
{
  return sub_7C4B0(*(_QWORD *)(a1 + 96), (unsigned int)*((__int64*)goff_18ED940), 1);
}

void sub_169320(__int64 result, __int64 a2)
{
  __int64 v3; // x20
  unsigned __int64 *v4; // x20
  unsigned __int64 v5; // x0
  unsigned int *v6; // x8
  unsigned int v7; // w9
  unsigned int v8; // w9

  if ( a2 != 0 )
  {
    v3 = result;
    sub_169320(result, *(_QWORD *)a2);
    sub_169320(v3, *(_QWORD *)(a2 + 8));
    v4 = (unsigned __int64 *)(a2 + 32);
    sub_701100(a2 + 40, *(_QWORD **)(a2 + 48));
    v5 = __atomic_exchange_n(v4, 0, 5);
    if ( v5 != 0 )
    {
      v6 = (unsigned int *)(v5 + 8);
      v8 = __atomic_sub_fetch(v6, 1, 5);
      if ( v8 == 0 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    { sub_37030(a2); return; }
  }
  return;
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

// N11ubiservices11AsyncResultINS_6VectorINS_10FriendInfoEEEE14InternalResultE, virtual slot 0
void __fastcall sub_191460(_QWORD *result)
{
  unsigned __int64 *v1; // x20
  unsigned __int64 *v2; // x21
  _QWORD *v3; // x19
  _QWORD *v4; // x1
  __int64 v5; // x0
  unsigned __int64 v6; // x0
  unsigned int *v7; // x8
  unsigned int v8; // w9
  unsigned int v9; // w9
  unsigned __int64 *v10; // x0

  v1 = (unsigned __int64 *)result[2];
  *result = ((char *)((__int64*)goff_18ED328) + 16);
  if ( v1 != nullptr )
  {
    v2 = (unsigned __int64 *)result[3];
    v3 = result;
    if ( v2 == v1 )
    {
      v10 = v1;
    }
    else
    {
      do
      {
        v4 = (_QWORD *)*(v2 - 2);
        v5 = (__int64)(v2 - 3);
        v2 -= 4;
        sub_7F5830(v5, v4);
        v6 = __atomic_exchange_n(v2, 0, 5);
        if ( v6 != 0 )
        {
          v7 = (unsigned int *)(v6 + 8);
          v9 = __atomic_sub_fetch(v7, 1, 5);
          if ( v9 == 0 )
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v6 + 16LL))(v6);
        }
      }
      while ( v2 != v1 );
      v10 = (unsigned __int64 *)v3[2];
    }
    v3[3] = v1;
    { sub_37030(v10); return; }
  }
  return;
}

// N11ubiservices11AsyncResultINS_6VectorINS_10FriendInfoEEEE14InternalResultE, virtual slot 1
__int64 __fastcall sub_191520(_QWORD *a1)
{
  unsigned __int64 *v1; // x20
  unsigned __int64 *v3; // x21
  _QWORD *v4; // x1
  __int64 v5; // x0
  unsigned __int64 v6; // x0
  unsigned int *v7; // x8
  unsigned int v8; // w9
  unsigned int v9; // w9
  unsigned __int64 *v10; // x0

  v1 = (unsigned __int64 *)a1[2];
  *a1 = ((char *)((__int64*)goff_18ED328) + 16);
  if ( v1 != nullptr )
  {
    v3 = (unsigned __int64 *)a1[3];
    if ( v3 == v1 )
    {
      v10 = v1;
    }
    else
    {
      do
      {
        v4 = (_QWORD *)*(v3 - 2);
        v5 = (__int64)(v3 - 3);
        v3 -= 4;
        sub_7F5830(v5, v4);
        v6 = __atomic_exchange_n(v3, 0, 5);
        if ( v6 != 0 )
        {
          v7 = (unsigned int *)(v6 + 8);
          v9 = __atomic_sub_fetch(v7, 1, 5);
          if ( v9 == 0 )
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v6 + 16LL))(v6);
        }
      }
      while ( v3 != v1 );
      v10 = (unsigned __int64 *)a1[2];
    }
    a1[3] = v1;
    sub_37030(v10);
  }
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

// N11ubiservices20NotificationListenerINS_22HttpStreamNotificationEEE, virtual slot 0
__int64 __fastcall sub_1956C0(_QWORD *a1)
{
  unsigned __int64 *v2; // x19
  unsigned __int64 v3; // x0
  __int64 result; // x0
  unsigned int *v5; // x8
  unsigned int v6; // w9
  unsigned int v7; // w9

  *a1 = ((char *)goff_18EDA30 + 16);
  v2 = a1 + 2;
  v3 = atomic_load(a1 + 2);
  sub_1957C0(v3, a1);
  result = __atomic_exchange_n(v2, 0, 5);
  if ( result != 0 )
  {
    v5 = (unsigned int *)(result + 8);
    v7 = __atomic_sub_fetch(v5, 1, 5);
    if ( v7 == 0 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 16LL))(result);
  }
  return result;
}

// N11ubiservices20NotificationListenerINS_22HttpStreamNotificationEEE, virtual slot 1
__int64 __fastcall sub_195740(_QWORD *a1)
{
  unsigned __int64 *v3; // x20
  unsigned __int64 v4; // x0
  unsigned __int64 v5; // x0
  unsigned int *v6; // x8
  unsigned int v7; // w9
  unsigned int v8; // w9

  *a1 = ((char *)goff_18EDA30 + 16);
  v3 = a1 + 2;
  v4 = atomic_load(a1 + 2);
  sub_1957C0(v4, a1);
  v5 = __atomic_exchange_n(v3, 0, 5);
  if ( v5 != 0 )
  {
    v6 = (unsigned int *)(v5 + 8);
    v8 = __atomic_sub_fetch(v6, 1, 5);
    if ( v8 == 0 )
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
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

__int64 __fastcall sub_1A91F0(__int64 *a1)
{
  __int64 v1; // x21
  __int64 v2; // x23
  __int64 *v4; // x22
  unsigned __int64 *v5; // x8
  unsigned __int64 v6; // x0
  unsigned int *v7; // x8
  unsigned int v8; // w9
  unsigned int v9; // w9
  unsigned __int64 *v10; // x8
  unsigned __int64 v11; // x0
  unsigned int *v12; // x8
  unsigned int v13; // w9
  unsigned int v14; // w9
  unsigned __int64 *v15; // x20
  unsigned __int64 v16; // x0
  unsigned int *v17; // x8
  unsigned int v18; // w9
  unsigned int v19; // w9
  unsigned __int64 *v20; // x8
  unsigned __int64 v21; // x0
  unsigned int *v22; // x8
  unsigned int v23; // w9
  unsigned int v24; // w9
  __int64 result; // x0

  v1 = a1[1];
  v2 = a1[2];
  if ( v2 != v1 )
  {
    v4 = ((__int64 *)((__int64*)goff_18EC808) + 2);
    do
    {
      a1[2] = v2 - 88;
      v5 = (unsigned __int64 *)(v2 - 32);
      v6 = __atomic_exchange_n(v5, 0, 5);
      if ( v6 != 0 )
      {
        v7 = (unsigned int *)(v6 + 8);
        v9 = __atomic_sub_fetch(v7, 1, 5);
        if ( v9 == 0 )
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      v10 = (unsigned __int64 *)(v2 - 48);
      v11 = __atomic_exchange_n(v10, 0, 5);
      if ( v11 != 0 )
      {
        v12 = (unsigned int *)(v11 + 8);
        v14 = __atomic_sub_fetch(v12, 1, 5);
        if ( v14 == 0 )
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v15 = *(unsigned __int64 **)(v2 - 56);
      *(_QWORD *)(v2 - 72) = v4;
      *(_QWORD *)(v2 - 56) = 0;
      if ( v15 != nullptr )
      {
        v16 = __atomic_exchange_n(v15, 0, 5);
        if ( v16 != 0 )
        {
          v17 = (unsigned int *)(v16 + 8);
          v19 = __atomic_sub_fetch(v17, 1, 5);
          if ( v19 == 0 )
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        sub_37030(v15);
      }
      v20 = (unsigned __int64 *)(v2 - 80);
      v21 = __atomic_exchange_n(v20, 0, 5);
      if ( v21 != 0 )
      {
        v22 = (unsigned int *)(v21 + 8);
        v24 = __atomic_sub_fetch(v22, 1, 5);
        if ( v24 == 0 )
          (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      v2 = a1[2];
    }
    while ( v2 != v1 );
  }
  result = *a1;
  if ( *a1 != 0 )
    return sub_37030(result);
  return result;
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

__int64 __fastcall sub_257060(__int64 a1)
{
  __int64 result; // x0

  *(_QWORD *)(a1 + 76) = 1065353216;
  *(_QWORD *)(a1 + 252) = 0xC3500000FA000LL;
  *(_WORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 65) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 60) = 0;
  *(_QWORD *)(a1 + 52) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_BYTE *)(a1 + 96) = 0;
  *(_QWORD *)a1 = 0;
  *(_BYTE *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 260) = 0x2A0007A120LL;
  *(_QWORD *)(a1 + 268) = 0x3E4CCCCD3DCCCCCDLL;
  *(_QWORD *)(a1 + 276) = 0x780000012CLL;
  *(_QWORD *)(a1 + 284) = 0x3C23D70ABDCCCCCDLL;
  *(_QWORD *)(a1 + 292) = 0x3C00001388LL;
  result = sub_57EEF0(a1 + 304);
  *(_QWORD *)(a1 + 320) = 0;
  *(_QWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 312) = a1 + 320;
  return result;
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

// N5storm4echo23DataObjectMigrationModeE, virtual slot 4
void sub_25BE00(__int64 result, __int64 a2)
{
  __int64 v3; // x19
  _BYTE *v4; // x9

  v3 = result;
  if ( *(_DWORD *)(a2 + 20) != *(_DWORD *)(result + 20)
    || *(_DWORD *)(a2 + 24) != *(_DWORD *)(result + 24)
    || *(_DWORD *)(a2 + 28) != *(_DWORD *)(result + 28)
    || *(_DWORD *)(a2 + 32) != *(_DWORD *)(result + 32)
    || (*(_BYTE *)(a2 + 36) != 0) != (*(_BYTE *)(result + 36) != 0)
    || (*(_BYTE *)(a2 + 37) != 0) != (*(_BYTE *)(result + 37) != 0) )
  {
    *(_BYTE *)(result + 16) = 1;
    v4 = *(_BYTE **)(result + 8);
    *v4 = 1;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 56LL))(result);
    if ( (result & 1) != 0 )
      sub_56DC30((_QWORD *)v3);
    *(_DWORD *)(v3 + 20) = *(_DWORD *)(a2 + 20);
    *(_DWORD *)(v3 + 24) = *(_DWORD *)(a2 + 24);
    *(_DWORD *)(v3 + 28) = *(_DWORD *)(a2 + 28);
    *(_DWORD *)(v3 + 32) = *(_DWORD *)(a2 + 32);
    *(_WORD *)(v3 + 36) = *(_WORD *)(a2 + 36);
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

void sub_25CFF0(char *a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // x8
  __int64 v4; // x9
  __int64 v8; // x22

  v3 = qword_1905F58;
  *(_DWORD *)(a1 + 8) = -1;
  v4 = ((__int64*)goff_18EDE00);
  *(_QWORD *)(a1 + 16) = v3;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = v4 + 16;
  v8 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  sub_5B87B0(v8, a2);
  *(_QWORD *)(a1 + 32) = v8;
  *(_DWORD *)(a1 + 40) = *a3;
  *(_DWORD *)(a1 + 44) = a3[1];
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  return;
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

__int64 __fastcall sub_25F550(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v6; // x8
  __int64 *v7; // x8
  __int64 result; // x0
  __int64 v12; // x8
  __int64 v13; // x9

  v6 = qword_1905F58;
  *(_DWORD *)(a1 + 8) = -1;
  *(_QWORD *)(a1 + 16) = v6;
  *(_QWORD *)(a1 + 24) = 0;
  v7 = ((__int64*)goff_18EDE98);
  *(_QWORD *)a1 = v7 + 2;
  *(_DWORD *)(a1 + 32) = a2;
  *(_DWORD *)(a1 + 36) = a3;
  *(_QWORD *)(a1 + 40) = (*(__int64 (__fastcall **)(__int64, void *, int))(*(_QWORD *)a4 + 40LL))(
                           a4,
                           &unk_1326E41,
                           0);
  result = (*(__int64 (__fastcall **)(__int64, void *, int))(*(_QWORD *)a5 + 40LL))(a5, &unk_1326E41, 0);
  *(_QWORD *)(a1 + 48) = result;
  v12 = *a6;
  v13 = a6[1];
  *(_DWORD *)(a1 + 71) = *(_DWORD *)((char *)a6 + 15);
  *(_QWORD *)(a1 + 56) = v12;
  *(_QWORD *)(a1 + 64) = v13;
  return result;
}

__int64 __fastcall sub_25F7E0(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v6; // x8
  __int64 *v7; // x8
  __int64 result; // x0
  __int64 v12; // x8
  __int64 v13; // x9

  v6 = qword_1905F58;
  *(_DWORD *)(a1 + 8) = -1;
  *(_QWORD *)(a1 + 16) = v6;
  *(_QWORD *)(a1 + 24) = 0;
  v7 = ((__int64*)goff_18EDEA0);
  *(_QWORD *)a1 = v7 + 2;
  *(_DWORD *)(a1 + 32) = a2;
  *(_DWORD *)(a1 + 36) = a3;
  *(_QWORD *)(a1 + 40) = (*(__int64 (__fastcall **)(__int64, void *, int))(*(_QWORD *)a4 + 40LL))(
                           a4,
                           &unk_1326E41,
                           0);
  result = (*(__int64 (__fastcall **)(__int64, void *, int))(*(_QWORD *)a5 + 40LL))(a5, &unk_1326E41, 0);
  *(_QWORD *)(a1 + 48) = result;
  v12 = *a6;
  v13 = a6[1];
  *(_DWORD *)(a1 + 71) = *(_DWORD *)((char *)a6 + 15);
  *(_QWORD *)(a1 + 56) = v12;
  *(_QWORD *)(a1 + 64) = v13;
  return result;
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

__int64 __fastcall sub_263080(__int64 a1, int a2, int a3, int a4, __int64 *a5, __int64 a6)
{
  __int64 v6; // x8
  __int64 v7; // x9
  __int64 v8; // x10
  __int64 *v9; // x10
  __int64 result; // x0

  v6 = *a5;
  v7 = a5[1];
  *a5 = 0;
  a5[1] = 0;
  v8 = qword_1905F58;
  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 32) = a3;
  *(_DWORD *)(a1 + 36) = a4;
  *(_QWORD *)(a1 + 16) = v8;
  *(_QWORD *)(a1 + 24) = 0;
  v9 = ((__int64*)goff_18EE018);
  *(_QWORD *)(a1 + 40) = v6;
  *(_QWORD *)(a1 + 48) = v7;
  *(_QWORD *)a1 = v9 + 2;
  *(_DWORD *)(a1 + 56) = a2;
  result = (*(__int64 (__fastcall **)(__int64, void *, int))(*(_QWORD *)a6 + 40LL))(a6, &unk_1326E41, 0);
  *(_QWORD *)(a1 + 64) = result;
  return result;
}

__int64 __fastcall sub_2634F0(__int64 a1, int a2, int a3, __int64 *a4, __int64 a5)
{
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x10
  __int64 *v8; // x10
  __int64 result; // x0

  v5 = *a4;
  v6 = a4[1];
  *a4 = 0;
  a4[1] = 0;
  v7 = qword_1905F58;
  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 32) = a2;
  *(_DWORD *)(a1 + 36) = a3;
  *(_QWORD *)(a1 + 16) = v7;
  *(_QWORD *)(a1 + 24) = 0;
  v8 = ((__int64*)goff_18EE038);
  *(_QWORD *)(a1 + 40) = v5;
  *(_QWORD *)(a1 + 48) = v6;
  *(_QWORD *)a1 = v8 + 2;
  *(_QWORD *)(a1 + 56) = 0;
  result = (*(__int64 (__fastcall **)(__int64, void *, int))(*(_QWORD *)a5 + 40LL))(a5, &unk_1326E41, 0);
  *(_QWORD *)(a1 + 64) = result;
  return result;
}

__int64 __fastcall sub_263570(__int64 a1, int a2, int a3, __int64 *a4, __int64 a5)
{
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x10
  __int64 result; // x0

  v5 = *a4;
  v6 = a4[1];
  *a4 = 0;
  a4[1] = 0;
  v7 = qword_1905F58;
  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 32) = a2;
  *(_DWORD *)(a1 + 36) = a3;
  *(_QWORD *)(a1 + 40) = v5;
  *(_QWORD *)(a1 + 48) = v6;
  *(_QWORD *)(a1 + 16) = v7;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18EE038) + 2);
  result = (*(__int64 (__fastcall **)(__int64, void *, int))(*(_QWORD *)a5 + 40LL))(a5, &unk_1326E41, 0);
  *(_QWORD *)(a1 + 56) = result;
  *(_QWORD *)(a1 + 64) = 0;
  return result;
}

__int64 __fastcall sub_263C70(
        __int64 a1,
        int a2,
        int a3,
        __int64 *a4,
        __int64 a5,
        _DWORD *a6,
        char a7,
        int a8,
        int a9,
        int a10)
{
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 v12; // x10
  char v16; // w24
  __int64 result; // x0

  v10 = *a4;
  v11 = a4[1];
  *a4 = 0;
  a4[1] = 0;
  v12 = qword_1905F58;
  *(_DWORD *)(a1 + 8) = -1;
  *(_QWORD *)(a1 + 16) = v12;
  *(_QWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 32) = a2;
  *(_DWORD *)(a1 + 36) = a3;
  *(_QWORD *)(a1 + 40) = v10;
  *(_QWORD *)(a1 + 48) = v11;
  v16 = a7 & 1;
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18EE088) + 2);
  result = (*(__int64 (__fastcall **)(__int64, void *, int))(*(_QWORD *)a5 + 40LL))(a5, &unk_1326E41, 0);
  *(_QWORD *)(a1 + 56) = result;
  *(_DWORD *)(a1 + 64) = *a6;
  *(_DWORD *)(a1 + 68) = a8;
  *(_DWORD *)(a1 + 72) = a9;
  *(_DWORD *)(a1 + 76) = a10;
  *(_BYTE *)(a1 + 80) = v16;
  return result;
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

// N5storm4echo6engine8outEvent29StreamPackerTimeSliceExceededE, virtual slot 5
__int64 __fastcall sub_26F890(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x8

  result = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(result + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = ((char *)((__int64*)goff_18EDDE0) + 16);
  v3 = *(_QWORD *)(a1 + 32);
  *(_BYTE *)(result + 40) = *(_BYTE *)(a1 + 40);
  *(_QWORD *)(result + 32) = v3;
  return result;
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

// N5storm4echo6object11resultEvent6DeleteE, virtual slot 5
__int64 __fastcall sub_271220(__int64 a1)
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
  *(_QWORD *)result = ((__int64 *)((__int64*)goff_18EE7F0) + 2);
  *(_DWORD *)(result + 32) = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(result + 36) = *(_DWORD *)(a1 + 36);
  *(_QWORD *)(result + 40) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)result = ((__int64 *)goff_18EE860 + 2);
  *(_DWORD *)(result + 48) = *(_DWORD *)(a1 + 48);
  *(_QWORD *)result = ((__int64 *)((__int64*)goff_18EDED0) + 2);
  *(_QWORD *)(result + 56) = *(_QWORD *)(a1 + 56);
  v3 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(result + 64) = v3;
  if ( v3 != 0 )
  {
    v4 = (unsigned __int64 *)(v3 + 8);
    v5 = __atomic_fetch_add(v4, 1, 0);
  }
  *(_QWORD *)(result + 72) = *(_QWORD *)(a1 + 72);
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

// N5storm4echo6engine8outEvent38PeerManagerTransmissionWindowFullRaiseE, virtual slot 5
__int64 __fastcall sub_27E5C0(__int64 a1)
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
  *(_QWORD *)v2 = ((char *)((__int64*)goff_18EDDF0) + 16);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = v2;
  v5 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  sub_5B87B0(v5, v3);
  *(_QWORD *)(v4 + 32) = v5;
  return v4;
}

// N5storm4echo6engine8outEvent38PeerManagerTransmissionWindowFullClearE, virtual slot 5
__int64 __fastcall sub_27E950(__int64 a1)
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
  *(_QWORD *)v2 = ((char *)((__int64*)goff_18EDDF8) + 16);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = v2;
  v5 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  sub_5B87B0(v5, v3);
  *(_QWORD *)(v4 + 32) = v5;
  return v4;
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

// N5storm4echo15GroupDescriptorE, virtual slot 0
__int64 __fastcall sub_27F3A0(__int64 a1)
{
  __int64 *v1; // x9
  __int64 *v2; // x8
  __int64 result; // x0
  __int64 *v5; // x9
  __int64 *v6; // x10

  v1 = ((__int64*)goff_18EDC88);
  v2 = ((__int64 *)((__int64*)goff_18EDE40) + 24);
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18EDE40) + 2);
  *(_QWORD *)(a1 + 8) = v2;
  *(_QWORD *)(a1 + 304) = v1 + 2;
  result = sub_781380(a1 + 312);
  v5 = goff_18EDCF8;
  v6 = ((__int64 *)goff_18EDCF8 + 2);
  *(_QWORD *)(a1 + 32) = ((__int64 *)((__int64*)goff_18EDCF0) + 2);
  *(_QWORD *)(a1 + 40) = v6;
  *(_QWORD *)(a1 + 48) = v5 + 24;
  if ( (*(_BYTE *)(a1 + 72) & 1) != 0 )
    return sub_56CA00(*(_QWORD *)(a1 + 88), &unk_1326E41, 0);
  return result;
}

// N5storm4echo15GroupDescriptorE, virtual slot 1
__int64 __fastcall sub_27F430(__int64 a1)
{
  __int64 *v1; // x9
  __int64 *v2; // x8
  __int64 *v4; // x9
  __int64 *v5; // x10

  v1 = ((__int64*)goff_18EDC88);
  v2 = ((__int64 *)((__int64*)goff_18EDE40) + 24);
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18EDE40) + 2);
  *(_QWORD *)(a1 + 8) = v2;
  *(_QWORD *)(a1 + 304) = v1 + 2;
  sub_781380(a1 + 312);
  v4 = goff_18EDCF8;
  v5 = ((__int64 *)goff_18EDCF8 + 2);
  *(_QWORD *)(a1 + 32) = ((__int64 *)((__int64*)goff_18EDCF0) + 2);
  *(_QWORD *)(a1 + 40) = v5;
  *(_QWORD *)(a1 + 48) = v4 + 24;
  if ( (*(_BYTE *)(a1 + 72) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 88), &unk_1326E41, 0);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm4echo15GroupDescriptorE, virtual slot 5
__int64 __fastcall sub_27F5A0(__int64 a1)
{
  __int64 v2; // x20

  v2 = sub_56C9F0(496, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_25E630(v2, a1);
  return v2;
}

__int64 __fastcall sub_27F870(__int64 a1)
{
  __int64 *v1; // x9
  __int64 *v2; // x8
  char *v4; // x19
  __int64 *v5; // x9
  __int64 *v6; // x10

  v1 = ((__int64*)goff_18EDC88);
  v2 = ((__int64*)goff_18EDE40) + 24;
  *(_QWORD *)(a1 - 8) = ((__int64 *)((__int64*)goff_18EDE40) + 2);
  v4 = a1 - 8;
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 296) = v1 + 2;
  sub_781380(a1 + 304);
  v5 = goff_18EDCF8;
  v6 = ((__int64 *)goff_18EDCF8 + 2);
  *(_QWORD *)(a1 + 24) = ((__int64 *)((__int64*)goff_18EDCF0) + 2);
  *(_QWORD *)(a1 + 32) = v6;
  *(_QWORD *)(a1 + 40) = v5 + 24;
  if ( (*(_BYTE *)(a1 + 64) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(v4 + 88), &unk_1326E41, 0);
  return sub_56CA00(v4, &unk_1326E41, 0);
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

// N5storm4echo3lan8outEvent17DiscoveredSessionE, virtual slot 5
__int64 __fastcall sub_280210(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x21
  __int64 v4; // x8
  __int64 v5; // x9

  v2 = sub_56C9F0(80, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18EDE98) + 2);
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(v2 + 36) = *(_DWORD *)(a1 + 36);
  v3 = v2;
  *(_QWORD *)(v2 + 40) = (*(__int64 (__fastcall **)(_QWORD, void *, int))(**(_QWORD **)(a1 + 40) + 40LL))(
                           *(_QWORD *)(a1 + 40),
                           &unk_1326E41,
                           0);
  *(_QWORD *)(v3 + 48) = (*(__int64 (__fastcall **)(_QWORD, void *, int))(**(_QWORD **)(a1 + 48) + 40LL))(
                           *(_QWORD *)(a1 + 48),
                           &unk_1326E41,
                           0);
  v4 = *(_QWORD *)(a1 + 56);
  v5 = *(_QWORD *)(a1 + 64);
  *(_DWORD *)(v3 + 71) = *(_DWORD *)(a1 + 71);
  *(_QWORD *)(v3 + 56) = v4;
  *(_QWORD *)(v3 + 64) = v5;
  return v3;
}

// N5storm4echo3lan8outEvent15DiscoveredGroupE, virtual slot 5
__int64 __fastcall sub_280720(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x21
  __int64 v4; // x8
  __int64 v5; // x9

  v2 = sub_56C9F0(80, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18EDEA0) + 2);
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(v2 + 36) = *(_DWORD *)(a1 + 36);
  v3 = v2;
  *(_QWORD *)(v2 + 40) = (*(__int64 (__fastcall **)(_QWORD, void *, int))(**(_QWORD **)(a1 + 40) + 40LL))(
                           *(_QWORD *)(a1 + 40),
                           &unk_1326E41,
                           0);
  *(_QWORD *)(v3 + 48) = (*(__int64 (__fastcall **)(_QWORD, void *, int))(**(_QWORD **)(a1 + 48) + 40LL))(
                           *(_QWORD *)(a1 + 48),
                           &unk_1326E41,
                           0);
  v4 = *(_QWORD *)(a1 + 56);
  v5 = *(_QWORD *)(a1 + 64);
  *(_DWORD *)(v3 + 71) = *(_DWORD *)(a1 + 71);
  *(_QWORD *)(v3 + 56) = v4;
  *(_QWORD *)(v3 + 64) = v5;
  return v3;
}

// N5storm4echo6object11resultEvent6CreateE, virtual slot 5
__int64 __fastcall sub_280C80(__int64 a1)
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
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18EE7F0) + 2);
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(v2 + 36) = *(_DWORD *)(a1 + 36);
  *(_QWORD *)(v2 + 40) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)v2 = ((__int64 *)goff_18EE860 + 2);
  *(_DWORD *)(v2 + 48) = *(_DWORD *)(a1 + 48);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18EDEC8) + 2);
  v3 = *(_QWORD *)(a1 + 56);
  v4 = v2;
  v5 = sub_56C9F0(512, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_268070(v5, v3);
  *(_QWORD *)(v4 + 56) = v5;
  *(_DWORD *)(v4 + 64) = *(_DWORD *)(a1 + 64);
  *(_DWORD *)(v4 + 68) = *(_DWORD *)(a1 + 68);
  *(_DWORD *)(v4 + 72) = *(_DWORD *)(a1 + 72);
  return v4;
}

// N5storm4echo6object8outEvent16MultiReadMementoE, virtual slot 0
void __fastcall sub_281540(_QWORD *result)
{
  _QWORD *v1; // x20
  _QWORD *v2; // x19
  _QWORD *v3; // x21
  __int64 v4; // x0
  __int64 v5; // t1
  _QWORD *v6; // x0
  char *v7; // x19
  unsigned __int64 *v8; // x8
  unsigned __int64 v9; // x9

  v1 = (_QWORD *)result[7];
  v2 = result;
  *result = ((char *)((__int64*)goff_18EE000) + 16);
  if ( v1 != nullptr )
  {
    v3 = (_QWORD *)result[8];
    if ( v3 == v1 )
    {
      v6 = v1;
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
      v6 = (_QWORD *)v2[7];
    }
    v2[8] = v1;
    sub_56CA00(v6, &unk_1326E41, 0);
  }
  *v2 = ((char *)goff_18EE008 + 16);
  v7 = (char *)v2[6];
  if ( v7 != nullptr )
  {
    v8 = (unsigned __int64 *)((char *)v7 + 8);
    v9 = __atomic_fetch_sub(v8, 1, 5);
    if ( v9 == 0 )
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 16LL))(v7);
      { std____shared_weak_count____release_weak(v7); return; }
    }
  }
  return;
}

// N5storm4echo6object8outEvent16MultiReadMementoE, virtual slot 1
__int64 __fastcall sub_281620(_QWORD *a1)
{
  _QWORD *v1; // x20
  _QWORD *v3; // x21
  __int64 v4; // x0
  __int64 v5; // t1
  _QWORD *v6; // x0
  char *v7; // x20
  unsigned __int64 *v8; // x8
  unsigned __int64 v9; // x9

  v1 = (_QWORD *)a1[7];
  *a1 = ((char *)((__int64*)goff_18EE000) + 16);
  if ( v1 != nullptr )
  {
    v3 = (_QWORD *)a1[8];
    if ( v3 == v1 )
    {
      v6 = v1;
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
      v6 = (_QWORD *)a1[7];
    }
    a1[8] = v1;
    sub_56CA00(v6, &unk_1326E41, 0);
  }
  v7 = (char *)a1[6];
  *a1 = ((char *)goff_18EE008 + 16);
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
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm4echo6object8outEvent18MasterRoleAcquiredE, virtual slot 5
__int64 __fastcall sub_281C10(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x9
  __int64 v4; // x8
  __int64 v5; // x20
  unsigned __int64 *v6; // x8
  unsigned __int64 v7; // x9

  v2 = sub_56C9F0(72, 8, 1092624387, 0LL, &unk_1326E41, 0);
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
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18EE018) + 2);
  *(_DWORD *)(v2 + 56) = *(_DWORD *)(a1 + 56);
  *(_QWORD *)(v2 + 64) = (*(__int64 (__fastcall **)(_QWORD, void *, int))(**(_QWORD **)(a1 + 64) + 40LL))(
                           *(_QWORD *)(a1 + 64),
                           &unk_1326E41,
                           0);
  return v5;
}

// N5storm4echo6object8outEvent14GiveMasterRoleE, virtual slot 5
__int64 __fastcall sub_282140(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x9
  __int64 v4; // x8
  __int64 v5; // x20
  unsigned __int64 *v6; // x8
  unsigned __int64 v7; // x9

  v2 = sub_56C9F0(72, 8, 1092624387, 0LL, &unk_1326E41, 0);
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
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18EE038) + 2);
  *(_QWORD *)(v2 + 56) = (*(__int64 (__fastcall **)(_QWORD, void *, int))(**(_QWORD **)(a1 + 56) + 40LL))(
                           *(_QWORD *)(a1 + 56),
                           &unk_1326E41,
                           0);
  *(_QWORD *)(v5 + 64) = (*(__int64 (__fastcall **)(_QWORD, void *, int))(**(_QWORD **)(a1 + 64) + 40LL))(
                           *(_QWORD *)(a1 + 64),
                           &unk_1326E41,
                           0);
  return v5;
}

// N5storm4echo6object8outEvent13MementoTooBigE, virtual slot 5
__int64 __fastcall sub_282660(__int64 a1)
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
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18EE088) + 2);
  *(_QWORD *)(v2 + 56) = (*(__int64 (__fastcall **)(_QWORD, void *, int))(**(_QWORD **)(a1 + 56) + 40LL))(
                           *(_QWORD *)(a1 + 56),
                           &unk_1326E41,
                           0);
  *(_DWORD *)(v5 + 64) = *(_DWORD *)(a1 + 64);
  *(_DWORD *)(v5 + 68) = *(_DWORD *)(a1 + 68);
  *(_DWORD *)(v5 + 72) = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(v5 + 76) = *(_DWORD *)(a1 + 76);
  *(_BYTE *)(v5 + 80) = *(_BYTE *)(a1 + 80);
  return v5;
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

// N5storm4echo3QOS8outEvent27PeerNetworkInactivityRaisedE, virtual slot 5
__int64 __fastcall sub_285020(__int64 a1)
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
  *(_QWORD *)v2 = ((char *)((__int64*)goff_18EE5E0) + 16);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = v2;
  v5 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  sub_5B87B0(v5, v3);
  *(_QWORD *)(v4 + 32) = v5;
  return v4;
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

// N5storm4echo9multicast7inEvent16WelcomePeerEventE, virtual slot 5
__int64 __fastcall sub_28FFC0(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x19
  __int64 *v4; // x8
  __int64 *v5; // x8

  v2 = sub_56C9F0(112, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = ((__int64 *)goff_18EFAB0 + 2);
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18EDEB8) + 2);
  v3 = v2;
  *(_DWORD *)(v2 + 36) = *(_DWORD *)(a1 + 36);
  sub_57F070(v2 + 40, a1 + 40);
  v4 = ((__int64*)goff_18EDCD0) + 24;
  *(_QWORD *)(v3 + 40) = ((__int64 *)((__int64*)goff_18EDCD0) + 2);
  *(_QWORD *)(v3 + 48) = v4;
  sub_57F070(v3 + 72, a1 + 72);
  v5 = ((__int64*)goff_18EDCD8) + 24;
  *(_QWORD *)(v3 + 72) = ((__int64 *)((__int64*)goff_18EDCD8) + 2);
  *(_QWORD *)(v3 + 80) = v5;
  *(_DWORD *)(v3 + 100) = *(_DWORD *)(a1 + 100);
  *(_QWORD *)(v3 + 104) = (*(__int64 (__fastcall **)(_QWORD, void *, int))(**(_QWORD **)(a1 + 104) + 40LL))(
                            *(_QWORD *)(a1 + 104),
                            &unk_1326E41,
                            0);
  sub_57F1B0(v3 + 72, v3 + 48);
  sub_57F1B0(*(_QWORD *)(v3 + 104), v3 + 48);
  return v3;
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

// N5storm4echo6object7inEvent22UpdateObjectDescriptorE, virtual slot 5
__int64 __fastcall sub_293680(__int64 a1)
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
  *(_QWORD *)v2 = ((__int64 *)goff_18EFCE8 + 2);
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18EE0B0) + 2);
  v3 = *(_QWORD *)(a1 + 40);
  v4 = v2;
  v5 = sub_56C9F0(512, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_268070(v5, v3);
  *(_QWORD *)(v4 + 40) = v5;
  return v4;
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

// N5storm4echo6object7inEvent14SetRefreshRateE, virtual slot 5
__int64 __fastcall sub_2973D0(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x8

  result = sub_56C9F0(56, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(result + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = ((__int64 *)goff_18EFCE8 + 2);
  *(_DWORD *)(result + 32) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)result = ((__int64 *)((__int64*)goff_18EE100) + 2);
  *(_DWORD *)(result + 36) = *(_DWORD *)(a1 + 36);
  v3 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(result + 48) = *(_DWORD *)(a1 + 48);
  *(_QWORD *)(result + 40) = v3;
  return result;
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

// N5storm4echo6object7inEvent14GiveMasterRoleE, virtual slot 5
__int64 __fastcall sub_29B170(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x21

  v2 = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)v2 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(v2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)v2 = ((__int64 *)goff_18EFCE8 + 2);
  *(_DWORD *)(v2 + 32) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18EE158) + 2);
  *(_DWORD *)(v2 + 36) = *(_DWORD *)(a1 + 36);
  v3 = v2;
  *(_QWORD *)(v2 + 40) = (*(__int64 (__fastcall **)(_QWORD, void *, int))(**(_QWORD **)(a1 + 40) + 40LL))(
                           *(_QWORD *)(a1 + 40),
                           &unk_1326E41,
                           0);
  return v3;
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

// N5storm18DynamicTypeFactoryINS_4echo9voicechat25PlatformChatterDescriptorEEE, virtual slot 2
__int64 __fastcall sub_2B23C0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0
  __int64 *v5; // x9
  __int64 *v6; // x8
  __int64 *v7; // x10
  __int64 *v8; // x8
  __int64 *v9; // x9
  __int64 *v10; // x8

  v3 = sub_56C9F0(232, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_57F050(v3, v4);
  v5 = ((__int64*)goff_18EDCC8);
  v6 = ((__int64 *)((__int64*)goff_18EDCC0) + 24);
  *(_QWORD *)v3 = ((__int64 *)((__int64*)goff_18EDCC0) + 2);
  *(_QWORD *)(v3 + 8) = v6;
  *(_QWORD *)(v3 + 32) = v5 + 2;
  sub_290830(v3 + 40, v3 + 8);
  *(_QWORD *)(v3 + 112) = ((__int64 *)((__int64*)goff_18EDCF0) + 2);
  sub_57F050(v3 + 120, v3 + 8);
  v7 = ((__int64 *)goff_18EDCF8 + 2);
  v8 = ((__int64 *)goff_18EDCF8 + 24);
  v9 = ((__int64 *)((__int64*)goff_18EDCE0) + 2);
  *(_QWORD *)(v3 + 152) = 0;
  *(_QWORD *)(v3 + 160) = 0;
  *(_QWORD *)(v3 + 120) = v7;
  *(_QWORD *)(v3 + 128) = v8;
  *(_QWORD *)(v3 + 168) = 0;
  *(_QWORD *)(v3 + 176) = v9;
  sub_57F050(v3 + 184, v3 + 8);
  v10 = ((__int64*)goff_18EDCE8);
  *(_BYTE *)(v3 + 210) = 0;
  *(_QWORD *)(v3 + 184) = v10 + 2;
  *(_QWORD *)(v3 + 192) = v10 + 24;
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo9voicechat25PlatformChatterDescriptorEEE, virtual slot 3
__int64 __fastcall sub_2B24B0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20
  __int64 *v6; // x9
  __int64 *v7; // x8
  __int64 *v8; // x10
  __int64 *v9; // x8
  __int64 *v10; // x9
  __int64 *v11; // x8

  v5 = sub_56C9F0(232, 8, 1092624384, 0LL, a3, a4);
  sub_57F050(v5, a2);
  v6 = ((__int64*)goff_18EDCC8);
  v7 = ((__int64 *)((__int64*)goff_18EDCC0) + 24);
  *(_QWORD *)v5 = ((__int64 *)((__int64*)goff_18EDCC0) + 2);
  *(_QWORD *)(v5 + 8) = v7;
  *(_QWORD *)(v5 + 32) = v6 + 2;
  sub_290830(v5 + 40, v5 + 8);
  *(_QWORD *)(v5 + 112) = ((__int64 *)((__int64*)goff_18EDCF0) + 2);
  sub_57F050(v5 + 120, v5 + 8);
  v8 = ((__int64 *)goff_18EDCF8 + 2);
  v9 = ((__int64 *)goff_18EDCF8 + 24);
  v10 = ((__int64 *)((__int64*)goff_18EDCE0) + 2);
  *(_QWORD *)(v5 + 152) = 0;
  *(_QWORD *)(v5 + 160) = 0;
  *(_QWORD *)(v5 + 120) = v8;
  *(_QWORD *)(v5 + 128) = v9;
  *(_QWORD *)(v5 + 168) = 0;
  *(_QWORD *)(v5 + 176) = v10;
  sub_57F050(v5 + 184, v5 + 8);
  v11 = ((__int64*)goff_18EDCE8);
  *(_BYTE *)(v5 + 210) = 0;
  *(_QWORD *)(v5 + 184) = v11 + 2;
  *(_QWORD *)(v5 + 192) = v11 + 24;
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

// N5storm18DynamicTypeFactoryINS_4echo6engine8outEvent38PeerManagerTransmissionWindowFullRaiseEEE, virtual slot 3
__int64 __fastcall sub_2B2860(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x21
  __int64 v6; // x8
  __int64 v7; // x9
  __int64 v8; // x19
  _BYTE v10[1232]; // [xsp+0h] [xbp-4F0h] BYREF

  v5 = sub_56C9F0(40, 8, 1092624387, 0LL, a3, a4);
  ((void (__fastcall *)(_BYTE *, __int64))loc_5B80B0)(v10, a2);
  v6 = qword_1905F58;
  *(_DWORD *)(v5 + 8) = -1;
  v7 = ((__int64*)goff_18EDDF0);
  *(_QWORD *)(v5 + 16) = v6;
  *(_QWORD *)(v5 + 24) = 0;
  *(_QWORD *)v5 = v7 + 16;
  v8 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  sub_5B87B0(v8, (__int64)v10);
  *(_QWORD *)(v5 + 32) = v8;
  sub_5B8CF0((__int64)v10);
  return v5;
}

// N5storm18DynamicTypeFactoryINS_4echo6engine8outEvent38PeerManagerTransmissionWindowFullClearEEE, virtual slot 3
__int64 __fastcall sub_2B2A50(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x21
  __int64 v6; // x8
  __int64 v7; // x9
  __int64 v8; // x19
  _BYTE v10[1232]; // [xsp+0h] [xbp-4F0h] BYREF

  v5 = sub_56C9F0(40, 8, 1092624387, 0LL, a3, a4);
  ((void (__fastcall *)(_BYTE *, __int64))loc_5B80B0)(v10, a2);
  v6 = qword_1905F58;
  *(_DWORD *)(v5 + 8) = -1;
  v7 = ((__int64*)goff_18EDDF8);
  *(_QWORD *)(v5 + 16) = v6;
  *(_QWORD *)(v5 + 24) = 0;
  *(_QWORD *)v5 = v7 + 16;
  v8 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  sub_5B87B0(v8, (__int64)v10);
  *(_QWORD *)(v5 + 32) = v8;
  sub_5B8CF0((__int64)v10);
  return v5;
}

// N5storm18DynamicTypeFactoryINS_4echo6engine8outEvent21PeerDescriptorUpdatedEEE, virtual slot 3
__int64 __fastcall sub_2B2D80(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x21
  __int64 v6; // x8
  __int64 *v7; // x9
  __int64 v8; // x19
  _BYTE v10[1232]; // [xsp+0h] [xbp-4F0h] BYREF

  v5 = sub_56C9F0(40, 8, 1092624387, 0LL, a3, a4);
  ((void (__fastcall *)(_BYTE *, __int64))loc_5B80B0)(v10, a2);
  v6 = qword_1905F58;
  *(_DWORD *)(v5 + 8) = -1;
  v7 = ((__int64*)goff_18EDE20);
  *(_QWORD *)(v5 + 16) = v6;
  *(_QWORD *)(v5 + 24) = 0;
  *(_QWORD *)v5 = v7 + 2;
  v8 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  sub_5B87B0(v8, (__int64)v10);
  *(_QWORD *)(v5 + 32) = v8;
  sub_5B8CF0((__int64)v10);
  return v5;
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

// N5storm18DynamicTypeFactoryINS_4echo3QOS8outEvent27PeerNetworkInactivityRaisedEEE, virtual slot 3
_QWORD *__fastcall sub_2B4E60(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD *v5; // x21
  __int64 v6; // x8
  __int64 v7; // x9
  __int64 v8; // x19
  _BYTE v10[1232]; // [xsp+0h] [xbp-4F0h] BYREF

  v5 = (_QWORD *)sub_56C9F0(40, 8, 1092624387, 0LL, a3, a4);
  ((void (__fastcall *)(_BYTE *, __int64))loc_5B80B0)(v10, a2);
  *v5 = 0;
  v5[1] = 0;
  v6 = qword_1905F58;
  *((_DWORD *)v5 + 2) = -1;
  v7 = ((__int64*)goff_18EE5E0);
  v5[2] = v6;
  v5[3] = 0;
  *v5 = v7 + 16;
  v8 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  sub_5B87B0(v8, (__int64)v10);
  v5[4] = v8;
  sub_5B8CF0((__int64)v10);
  return v5;
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

_QWORD *__fastcall sub_2BB2C0(__int64 a1, __int64 *a2, int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // x8
  __int64 *v8; // x9
  __int64 v9; // x8
  __int64 v10; // x9
  __int64 *v12; // x8
  __int64 v16; // x23
  __int64 v17; // x8
  __int64 v18; // x9
  __int64 v19; // x8
  __int64 v20; // x9

  v7 = qword_1907E28;
  *(_DWORD *)(a1 + 8) = -1;
  v8 = ((__int64*)goff_18F1238);
  *(_QWORD *)(a1 + 16) = v7;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = v8 + 2;
  v9 = *a2;
  v10 = a2[1];
  *(_DWORD *)(a1 + 47) = *(_DWORD *)((char *)a2 + 15);
  *(_QWORD *)(a1 + 32) = v9;
  *(_QWORD *)(a1 + 40) = v10;
  v12 = ((__int64*)goff_18F1250);
  *(_DWORD *)(a1 + 52) = a3;
  *(_DWORD *)(a1 + 56) = a4;
  *(_QWORD *)a1 = v12 + 2;
  v16 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  sub_5B87B0(v16, a5);
  *(_QWORD *)(a1 + 64) = v16;
  *(_BYTE *)(a1 + 104) = 0;
  *(_BYTE *)(a1 + 123) = 0;
  *(_DWORD *)(a1 + 144) = -1;
  *(_BYTE *)(a1 + 148) = 1;
  *(_DWORD *)(a1 + 72) = *(_DWORD *)a6;
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(a6 + 8);
  v17 = *(_QWORD *)(a6 + 51);
  v18 = *(_QWORD *)(a6 + 59);
  *(_DWORD *)(a1 + 138) = *(_DWORD *)(a6 + 66);
  *(_QWORD *)(a1 + 131) = v18;
  *(_QWORD *)(a1 + 123) = v17;
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a6 + 4);
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(a6 + 12);
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a6 + 16);
  *(_DWORD *)(a1 + 92) = *(_DWORD *)(a6 + 20);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a6 + 24);
  v19 = *(_QWORD *)(a6 + 32);
  v20 = *(_QWORD *)(a6 + 40);
  *(_DWORD *)(a1 + 119) = *(_DWORD *)(a6 + 47);
  *(_QWORD *)(a1 + 104) = v19;
  *(_QWORD *)(a1 + 112) = v20;
  *(_BYTE *)(a1 + 142) = *(_BYTE *)(a6 + 70);
  LODWORD(v19) = *(_DWORD *)(a6 + 72);
  *(_BYTE *)(a1 + 148) = *(_BYTE *)(a6 + 76);
  *(_DWORD *)(a1 + 144) = v19;
  return sub_578210((_QWORD *)(a1 + 152), a7);
}

_QWORD *__fastcall sub_2BBCF0(__int64 a1, __int64 *a2, int a3, int a4, __int64 a5, int a6, __int64 a7, __int64 a8)
{
  __int64 v8; // x8
  __int64 *v9; // x9
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 v13; // x8
  __int64 v18; // x24
  __int64 v19; // x8
  __int64 v20; // x9
  __int64 v21; // x8
  __int64 v22; // x9

  v8 = qword_1907E28;
  *(_DWORD *)(a1 + 8) = -1;
  v9 = ((__int64*)goff_18F1238);
  *(_QWORD *)(a1 + 16) = v8;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = v9 + 2;
  v10 = *a2;
  v11 = a2[1];
  *(_DWORD *)(a1 + 47) = *(_DWORD *)((char *)a2 + 15);
  *(_QWORD *)(a1 + 32) = v10;
  *(_QWORD *)(a1 + 40) = v11;
  v13 = ((__int64*)goff_18F1270);
  *(_DWORD *)(a1 + 52) = a3;
  *(_DWORD *)(a1 + 56) = a4;
  *(_QWORD *)a1 = v13 + 16;
  v18 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  sub_5B87B0(v18, a5);
  *(_QWORD *)(a1 + 64) = v18;
  *(_DWORD *)(a1 + 72) = a6;
  *(_BYTE *)(a1 + 112) = 0;
  *(_BYTE *)(a1 + 131) = 0;
  *(_DWORD *)(a1 + 152) = -1;
  *(_BYTE *)(a1 + 156) = 1;
  *(_DWORD *)(a1 + 80) = *(_DWORD *)a7;
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a7 + 8);
  v19 = *(_QWORD *)(a7 + 51);
  v20 = *(_QWORD *)(a7 + 59);
  *(_DWORD *)(a1 + 146) = *(_DWORD *)(a7 + 66);
  *(_QWORD *)(a1 + 139) = v20;
  *(_QWORD *)(a1 + 131) = v19;
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(a7 + 4);
  *(_DWORD *)(a1 + 92) = *(_DWORD *)(a7 + 12);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a7 + 16);
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(a7 + 20);
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a7 + 24);
  v21 = *(_QWORD *)(a7 + 32);
  v22 = *(_QWORD *)(a7 + 40);
  *(_DWORD *)(a1 + 127) = *(_DWORD *)(a7 + 47);
  *(_QWORD *)(a1 + 112) = v21;
  *(_QWORD *)(a1 + 120) = v22;
  *(_BYTE *)(a1 + 150) = *(_BYTE *)(a7 + 70);
  LODWORD(v21) = *(_DWORD *)(a7 + 72);
  *(_BYTE *)(a1 + 156) = *(_BYTE *)(a7 + 76);
  *(_DWORD *)(a1 + 152) = v21;
  return sub_578210((_QWORD *)(a1 + 160), a8);
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

// N5storm4echo17SessionDescriptorE, virtual slot 19
_Bool __fastcall sub_2C2800(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) != 0
    && (sub_57F110(a1 + 40, a2 + 40)) != 0
    && (sub_57F110(a1 + 104, a2 + 104)) != 0
    && (sub_57F110(a1 + 160, a2 + 160)) != 0
    && (sub_57F110(a1 + 200, a2 + 200)) != 0
    && (sub_57F110(a1 + 240, a2 + 240)) != 0
    && (sub_57F110(a1 + 280, a2 + 280)) != 0
    && (sub_57F110(a1 + 320, a2 + 320)) != 0
    && (sub_57F110(a1 + 360, a2 + 360)) != 0
    && (sub_57F110(a1 + 400, a2 + 400)) != 0
    && (sub_57F110(a1 + 456, a2 + 456)) != 0
    && (sub_57F110(a1 + 496, a2 + 496)) != 0
    && (sub_57F110(a1 + 536, a2 + 536)) != 0
    && (sub_57F110(a1 + 576, a2 + 576)) != 0
    && (sub_57F110(a1 + 616, a2 + 616)) != 0
    && (sub_57F110(a1 + 656, a2 + 656)) != 0
    && (sub_57F110(a1 + 696, a2 + 696)) != 0
    && (sub_57F110(a1 + 736, a2 + 736)) != 0
    && (sub_57F110(a1 + 776, a2 + 776)) != 0 )
  {
    return sub_57F110(a1 + 816, a2 + 816);
  }
  else
  {
    return 0;
  }
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

void __fastcall sub_2CF9F0(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // x22
  _DWORD **v4; // x23
  _DWORD *v6; // t1
  _QWORD *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0
  _QWORD *v11; // x24
  _QWORD *v12; // x21
  _QWORD *v13; // t1
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0

  v4 = *(_DWORD ***)(a2 + 168);
  v3 = *(_QWORD **)(a2 + 176);
  while ( v3 != v4 )
  {
    v6 = *v4++;
    if ( *v6 == a3 )
    {
      if ( v3 == v4 )
      {
        v11 = v4 - 1;
      }
      else
      {
        do
        {
          v7 = *(v4 - 1);
          *(v4 - 1) = *v4;
          *v4 = nullptr;
          if ( v7 != nullptr )
          {
            v8 = v7[7];
            if ( v8 != 0 )
            {
              v7[8] = v8;
              sub_56CA00(v8, &unk_1326E41, 0);
            }
            v9 = v7[4];
            if ( v9 != 0 )
            {
              v7[5] = v9;
              sub_56CA00(v9, &unk_1326E41, 0);
            }
            v10 = v7[1];
            if ( v10 != 0 )
            {
              v7[2] = v10;
              sub_56CA00(v10, &unk_1326E41, 0);
            }
            sub_57EDC0(v7, 0LL, &unk_1326E41, 0);
          }
          ++v4;
        }
        while ( v3 != v4 );
        v3 = *(_QWORD **)(a2 + 176);
        v11 = v4 - 1;
        if ( v4 == v3 + 1 )
          goto LABEL_26;
      }
      do
      {
        v13 = (_QWORD *)*--v3;
        v12 = v13;
        *v3 = 0;
        if ( v13 != nullptr )
        {
          v14 = v12[7];
          if ( v14 != 0 )
          {
            v12[8] = v14;
            sub_56CA00(v14, &unk_1326E41, 0);
          }
          v15 = v12[4];
          if ( v15 != 0 )
          {
            v12[5] = v15;
            sub_56CA00(v15, &unk_1326E41, 0);
          }
          v16 = v12[1];
          if ( v16 != 0 )
          {
            v12[2] = v16;
            sub_56CA00(v16, &unk_1326E41, 0);
          }
          sub_57EDC0(v12, 0LL, &unk_1326E41, 0);
        }
      }
      while ( v11 != v3 );
LABEL_26:
      *(_QWORD *)(a2 + 176) = v11;
      return;
    }
  }
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

__int64 __fastcall sub_2D6060(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // w8
  __int64 v4; // x11
  __int64 v6; // x9
  unsigned int v7; // w12
  bool v8; // cf
  _BOOL4 v9; // w12
  __int64 v10; // x0
  __int64 v11; // x19
  _QWORD *v12; // x0
  _QWORD *v14; // [xsp+8h] [xbp-18h] BYREF

  v2 = *a2;
  v4 = *(_QWORD *)(a1 + 120);
  if ( v4 != 0 )
  {
    v6 = a1 + 120;
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
    if ( v6 != a1 + 120 && *(_DWORD *)(v6 + 32) <= v2 )
      return *(_QWORD *)(v6 + 40);
  }
  v10 = sub_57D200(80, 8, 1092628498, 0LL, &unk_1326E41, 0);
  *(_QWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 24) = 0;
  *(_QWORD *)(v10 + 8) = 0;
  *(_QWORD *)(v10 + 32) = 0;
  *(_QWORD *)v10 = v10 + 8;
  *(_QWORD *)(v10 + 40) = 0;
  *(_QWORD *)(v10 + 56) = 0;
  *(_QWORD *)(v10 + 48) = v10 + 56;
  *(_QWORD *)(v10 + 64) = 0;
  *(_WORD *)(v10 + 72) = 0;
  *(_BYTE *)(v10 + 74) = 0;
  *(_DWORD *)(v10 + 76) = 0;
  v14 = (_QWORD *)v10;
  v11 = *(_QWORD *)(sub_30B340((__int64 **)(a1 + 112), a2, (__int64 *)&v14) + 40);
  v12 = v14;
  v14 = nullptr;
  if ( v12 != nullptr )
    sub_30B260(v12, (__int64)&unk_1326E41, 0);
  return v11;
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

// N5storm4echo17SessionDescriptorE, virtual slot 0
__int64 __fastcall sub_2ED560(__int64 a1)
{
  __int64 *v1; // x9
  __int64 *v2; // x8
  __int64 result; // x0
  __int64 *v5; // x9
  __int64 *v6; // x10

  v1 = ((__int64*)goff_18EDC88);
  v2 = ((__int64 *)((__int64*)goff_18F1388) + 24);
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18F1388) + 2);
  *(_QWORD *)(a1 + 8) = v2;
  *(_QWORD *)(a1 + 808) = v1 + 2;
  result = sub_781380(a1 + 816);
  v5 = goff_18EDCF8;
  v6 = ((__int64 *)goff_18EDCF8 + 2);
  *(_QWORD *)(a1 + 32) = ((__int64 *)((__int64*)goff_18EDCF0) + 2);
  *(_QWORD *)(a1 + 40) = v6;
  *(_QWORD *)(a1 + 48) = v5 + 24;
  if ( (*(_BYTE *)(a1 + 72) & 1) != 0 )
    return sub_56CA00(*(_QWORD *)(a1 + 88), &unk_1326E41, 0);
  return result;
}

// N5storm4echo17SessionDescriptorE, virtual slot 1
__int64 __fastcall sub_2ED5F0(__int64 a1)
{
  __int64 *v1; // x9
  __int64 *v2; // x8
  __int64 *v4; // x9
  __int64 *v5; // x10

  v1 = ((__int64*)goff_18EDC88);
  v2 = ((__int64 *)((__int64*)goff_18F1388) + 24);
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18F1388) + 2);
  *(_QWORD *)(a1 + 8) = v2;
  *(_QWORD *)(a1 + 808) = v1 + 2;
  sub_781380(a1 + 816);
  v4 = goff_18EDCF8;
  v5 = ((__int64 *)goff_18EDCF8 + 2);
  *(_QWORD *)(a1 + 32) = ((__int64 *)((__int64*)goff_18EDCF0) + 2);
  *(_QWORD *)(a1 + 40) = v5;
  *(_QWORD *)(a1 + 48) = v4 + 24;
  if ( (*(_BYTE *)(a1 + 72) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 88), &unk_1326E41, 0);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

__int64 __fastcall sub_2EDA30(__int64 a1)
{
  __int64 *v1; // x9
  __int64 *v2; // x8
  char *v4; // x19
  __int64 *v5; // x9
  __int64 *v6; // x10

  v1 = ((__int64*)goff_18EDC88);
  v2 = ((__int64*)goff_18F1388) + 24;
  *(_QWORD *)(a1 - 8) = ((__int64 *)((__int64*)goff_18F1388) + 2);
  v4 = a1 - 8;
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 800) = v1 + 2;
  sub_781380(a1 + 808);
  v5 = goff_18EDCF8;
  v6 = ((__int64 *)goff_18EDCF8 + 2);
  *(_QWORD *)(a1 + 24) = ((__int64 *)((__int64*)goff_18EDCF0) + 2);
  *(_QWORD *)(a1 + 32) = v6;
  *(_QWORD *)(a1 + 40) = v5 + 24;
  if ( (*(_BYTE *)(a1 + 64) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(v4 + 88), &unk_1326E41, 0);
  return sub_56CA00(v4, &unk_1326E41, 0);
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

// N5storm4echo6player7inEvent16RequestAddPlayerE, virtual slot 5
__int64 __fastcall sub_2F4240(__int64 a1)
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
  *(_QWORD *)v2 = ((__int64 *)goff_18F1F38 + 2);
  *(_BYTE *)(v2 + 32) = *(_BYTE *)(a1 + 32);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18F1350) + 2);
  v3 = *(_QWORD *)(a1 + 40);
  v4 = v2;
  v5 = sub_56C9F0(280, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_26D390(v5, v3);
  *(_QWORD *)(v4 + 40) = v5;
  return v4;
}

// N5storm4echo6player7inEvent12UpdatePlayerE, virtual slot 5
__int64 __fastcall sub_2F4FC0(__int64 a1)
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
  *(_QWORD *)v2 = ((__int64 *)goff_18F1F38 + 2);
  *(_BYTE *)(v2 + 32) = *(_BYTE *)(a1 + 32);
  *(_QWORD *)v2 = ((__int64 *)((__int64*)goff_18F1360) + 2);
  v3 = *(_QWORD *)(a1 + 40);
  v4 = v2;
  v5 = sub_56C9F0(280, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_26D390(v5, v3);
  *(_QWORD *)(v4 + 40) = v5;
  return v4;
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

// N5storm4echo4time7inEvent18SetSessionTimeInMsE, virtual slot 5
__int64 __fastcall sub_2F9140(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x9

  result = sub_56C9F0(56, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(result + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = ((__int64 *)((__int64*)goff_18F2440) + 2);
  *(_DWORD *)(result + 32) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)result = ((__int64 *)goff_18F2448 + 2);
  v3 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(result + 40) = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(result + 48) = v3;
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

// N5storm18DynamicTypeFactoryINS_4echo17SessionDescriptorEEE, virtual slot 2
__int64 __fastcall sub_302140(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x19
  __int64 (__fastcall **v4)(); // x0

  v3 = sub_56C9F0(1000, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  ((void (__fastcall *)(__int64, __int64 (__fastcall **)()))loc_2C13B0)(v3, v4);
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo17SessionDescriptorEEE, virtual slot 3
__int64 __fastcall sub_302190(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // x20

  v5 = sub_56C9F0(1000, 8, 1092624384, 0LL, a3, a4);
  ((void (__fastcall *)(__int64, __int64))loc_2C13B0)(v5, a2);
  return v5;
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

