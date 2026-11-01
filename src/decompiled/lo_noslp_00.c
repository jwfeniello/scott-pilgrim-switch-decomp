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
__int64 _ZdlPv();
__int64 _Znwm();
extern char goff_18EC818[];
extern char goff_18EC8B8[];
extern char goff_18EC8C0[];
extern char goff_18ECCD0[];
extern char goff_18EDC88[];
extern char goff_18EDCC8[];
extern char goff_18EDCD0[];
extern char goff_18EDCD8[];
extern char goff_18EDD08[];
extern char goff_18EDE08[];
extern char goff_18EDF98[];
extern char goff_18EDFE8[];
extern char goff_18EE438[];
extern char goff_18EE440[];
extern char goff_18EE450[];
extern char goff_18EE470[];
extern char goff_18EE478[];
extern char goff_18EE490[];
extern char goff_18EE498[];
extern char goff_18EE5C0[];
extern char goff_18EED80[];
extern char goff_18EED90[];
extern char goff_18EEE10[];
extern char goff_18EF598[];
extern char goff_18EF5A0[];
extern char goff_18EFB30[];
extern char goff_18F1258[];
extern char goff_18F13D0[];
extern char goff_18F13E0[];
extern char goff_18F1708[];
extern char goff_18F2620[];
extern char goff_18F2678[];
extern char goff_18F3010[];
extern char goff_18F3018[];
extern char goff_18F3020[];
extern char goff_18F3030[];
extern char goff_18F3260[];
extern char goff_18F33D8[];
extern char goff_18F33E8[];
extern char goff_18F33F0[];
extern char goff_18F3418[];
extern char goff_18F3420[];
extern char goff_18F3428[];
extern char goff_18F3430[];
extern char goff_18F3440[];
extern char goff_18F3448[];
extern char goff_18F3498[];
extern char goff_18F34A0[];
extern char goff_18F34A8[];
extern char goff_18F34E0[];
extern char goff_18F3618[];
extern char goff_18F3620[];
extern char goff_18F3628[];
extern char goff_18F39E8[];
extern char goff_18F3F00[];
extern char goff_18F4340[];
extern char goff_18F4690[];
extern char goff_18F4728[];
extern char goff_18F4890[];
extern char goff_18F5A80[];
extern char goff_18F5A88[];
extern char goff_18F5AD8[];
extern char goff_18F5BB0[];
extern char goff_18F5BC8[];
extern char goff_18F5C78[];
extern char goff_18F5D10[];
extern char goff_18F5F28[];
extern char goff_18F5FD0[];
extern char goff_18F6CD8[];
extern char goff_18F7040[];
extern char goff_18F7050[];
extern char goff_18F7060[];
extern char goff_18F7A68[];
extern char goff_18F7D20[];
extern char goff_18F87A0[];
extern char goff_18F87A8[];
extern char goff_18F87B0[];
extern char goff_18F88D8[];
extern char goff_18F9358[];
extern char goff_18F9498[];
extern char goff_18F9740[];
extern char goff_18F9748[];
extern char goff_18F9798[];
extern char goff_18F97A0[];
extern char goff_18F97A8[];
extern char goff_18F97B0[];
extern char goff_18F9858[];
extern char goff_18F9980[];
extern char goff_18F9998[];
extern char goff_18F9C08[];
extern char goff_18F9C70[];
extern char goff_18F9D60[];
extern char goff_18FA9D0[];
extern char goff_18FA9E8[];
extern char goff_18FAC58[];
extern char goff_18FAC60[];
extern char goff_18FAC68[];
extern char goff_18FAFD8[];
extern char goff_18FB1F0[];
extern char goff_18FB228[];
extern char goff_18FB258[];
extern char goff_18FB280[];
extern char goff_18FB290[];
extern char goff_18FB450[];
extern char goff_18FB5A8[];
__attribute__((visibility("hidden"))) __int64 nullsub_1096();
__int64 std____shared_weak_count____release_weak();
__int64 std__shared_timed_mutex__lock_shared();
__int64 std__shared_timed_mutex__shared_timed_mutex();
__int64 std__shared_timed_mutex__unlock_shared();
__attribute__((visibility("hidden"))) __int64 sub_161510();
__attribute__((visibility("hidden"))) __int64 sub_1E5500();
__attribute__((visibility("hidden"))) __int64 sub_260AD0();
__attribute__((visibility("hidden"))) __int64 sub_2B8840();
__attribute__((visibility("hidden"))) __int64 sub_2FB920();
__attribute__((visibility("hidden"))) __int64 sub_2FB970();
__attribute__((visibility("hidden"))) __int64 sub_33B550();
__attribute__((visibility("hidden"))) __int64 sub_36EA0();
__attribute__((visibility("hidden"))) __int64 sub_37030();
__attribute__((visibility("hidden"))) __int64 sub_38BD20();
__attribute__((visibility("hidden"))) __int64 sub_3C8740();
__attribute__((visibility("hidden"))) __int64 sub_47C170();
__attribute__((visibility("hidden"))) __int64 sub_4D6990();
__attribute__((visibility("hidden"))) __int64 sub_4EB320();
__attribute__((visibility("hidden"))) __int64 sub_4ED570();
__attribute__((visibility("hidden"))) __int64 sub_4EDA40();
__attribute__((visibility("hidden"))) __int64 sub_4EE210();
__attribute__((visibility("hidden"))) __int64 sub_4EE230();
__attribute__((visibility("hidden"))) __int64 sub_4F47B0();
__attribute__((visibility("hidden"))) __int64 sub_4F48F0();
__attribute__((visibility("hidden"))) __int64 sub_4F4A80();
__attribute__((visibility("hidden"))) __int64 sub_4F6A30();
__attribute__((visibility("hidden"))) __int64 sub_4F81E0();
__attribute__((visibility("hidden"))) __int64 sub_4F8660();
__attribute__((visibility("hidden"))) __int64 sub_4F8720();
__attribute__((visibility("hidden"))) __int64 sub_4FABF0();
__attribute__((visibility("hidden"))) __int64 sub_4FB9D0();
__attribute__((visibility("hidden"))) __int64 sub_505AE0();
__attribute__((visibility("hidden"))) __int64 sub_505DA0();
__attribute__((visibility("hidden"))) __int64 sub_505EE0();
__attribute__((visibility("hidden"))) unsigned int sub_505FB0();
__attribute__((visibility("hidden"))) __int64 sub_505FC0();
__attribute__((visibility("hidden"))) __int64 sub_50B700();
__attribute__((visibility("hidden"))) __int64 sub_51C2A0();
__attribute__((visibility("hidden"))) __int64 sub_51D3A0();
__attribute__((visibility("hidden"))) __int64 sub_5206E0();
__attribute__((visibility("hidden"))) __int64 sub_526840();
__attribute__((visibility("hidden"))) __int64 sub_52F2F0();
__attribute__((visibility("hidden"))) __int64 sub_54DC00();
__attribute__((visibility("hidden"))) __int64 sub_5543A0();
__attribute__((visibility("hidden"))) __int64 sub_56C9F0();
__attribute__((visibility("hidden"))) __int64 sub_56CA00();
__attribute__((visibility("hidden"))) __int64 sub_56DC80();
__attribute__((visibility("hidden"))) __int64 sub_575CE0();
__attribute__((visibility("hidden"))) __int64 sub_576000();
__attribute__((visibility("hidden"))) __int64 sub_576860();
__attribute__((visibility("hidden"))) __int64 sub_5771E0();
__attribute__((visibility("hidden"))) __int64 sub_577290();
__attribute__((visibility("hidden"))) __int64 sub_5773C0();
__attribute__((visibility("hidden"))) __int64 sub_578210();
__attribute__((visibility("hidden"))) __int64 sub_57D200();
__attribute__((visibility("hidden"))) __int64 sub_57D230();
__attribute__((visibility("hidden"))) __int64 sub_57D530();
__attribute__((visibility("hidden"))) __int64 sub_57E130();
__attribute__((visibility("hidden"))) __int64 sub_57EDC0();
__attribute__((visibility("hidden"))) __int64 sub_57F050();
__attribute__((visibility("hidden"))) __int64 sub_57F070();
__attribute__((visibility("hidden"))) __int64 sub_57F1B0();
__attribute__((visibility("hidden"))) __int64 sub_57F220();
__attribute__((visibility("hidden"))) __int64 sub_583240();
__attribute__((visibility("hidden"))) __int64 sub_583870();
__attribute__((visibility("hidden"))) __int64 sub_592460();
__attribute__((visibility("hidden"))) __int64 sub_5C6FC0();
__attribute__((visibility("hidden"))) __int64 sub_781380();
extern __attribute__((visibility("hidden"))) char unk_1326E41;
__int64 x9();

// N11ubiservices8EventLogE, virtual slot 0
__int64 __fastcall sub_6D570(_QWORD *a1)
{
  __int64 result; // x0
  void (__fastcall ***v3)(_QWORD); // x20
  void (__fastcall ***v4)(_QWORD); // x20

  *a1 = ((__int64 *)((__int64*)goff_18EC8B8) + 2);
  result = sub_161510(a1 + 5, a1[6]);
  *a1 = ((__int64 *)((__int64*)goff_18EC8C0) + 2);
  v3 = (void (__fastcall ***)(_QWORD))a1[1];
  a1[1] = 0;
  if ( v3 != nullptr )
  {
    (**v3)(v3);
    result = sub_37030(v3);
  }
  v4 = (void (__fastcall ***)(_QWORD))a1[2];
  a1[2] = 0;
  if ( v4 != nullptr )
  {
    (**v4)(v4);
    return sub_37030(v4);
  }
  return result;
}

// N11ubiservices8EventLogE, virtual slot 1
__int64 __fastcall sub_6D680(_QWORD *a1)
{
  void (__fastcall ***v2)(_QWORD); // x20
  void (__fastcall ***v3)(_QWORD); // x20

  *a1 = ((__int64 *)((__int64*)goff_18EC8B8) + 2);
  sub_161510(a1 + 5, a1[6]);
  *a1 = ((__int64 *)((__int64*)goff_18EC8C0) + 2);
  v2 = (void (__fastcall ***)(_QWORD))a1[1];
  a1[1] = 0;
  if ( v2 != nullptr )
  {
    (**v2)(v2);
    sub_37030(v2);
  }
  v3 = (void (__fastcall ***)(_QWORD))a1[2];
  a1[2] = 0;
  if ( v3 != nullptr )
  {
    (**v3)(v3);
    sub_37030(v3);
  }
  return sub_37030(a1);
}

unsigned __int64 __fastcall sub_9C150(_QWORD *a1)
{
  unsigned __int64 result; // x0
  unsigned int *v3; // x8
  __int64 *v4; // x9
  unsigned __int64 *v5; // x19
  unsigned int v6; // w9

  *a1 = ((char *)((__int64*)goff_18ECCD0) + 16);
  a1[1] = 0;
  result = sub_36EA0(0x28u, 4u, 0, 1086324736);
  *(_DWORD *)(result + 8) = 0;
  v3 = (unsigned int *)(result + 8);
  *(_QWORD *)(result + 32) = 0;
  v4 = ((__int64 *)((__int64*)goff_18EC818) + 2);
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)result = v4;
  a1[2] = 0;
  v5 = a1 + 2;
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

// N5storm4echo6object8outEvent16MultiReadMementoE, virtual slot 15
_QWORD *__fastcall sub_263010(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // x0
  _QWORD **i; // x20
  _QWORD **v6; // x21

  result = (_QWORD *)sub_260AD0(a1, a2);
  v6 = *(_QWORD ***)(a1 + 56);
  for ( i = *(_QWORD ***)(a1 + 64); v6 != i; ++v6 )
  {
    result = *v6;
    if ( *v6 != nullptr )
    {
      a2[10] = "read-memento";
      a2[11] = 12;
      result = sub_576860(result, a2, 0);
    }
  }
  return result;
}

__int64 *__fastcall sub_269C60(__int64 a1, __int64 a2)
{
  __int64 *v2; // x9
  __int64 v3; // x8
  unsigned __int64 *v5; // x8
  unsigned __int64 v6; // x9
  __int64 v7; // x0
  __int64 v8; // x20
  __int64 *result; // x0
  __int64 v10; // x8

  *(_QWORD *)a1 = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  v2 = ((__int64*)goff_18EE478);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)a1 = v2 + 2;
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  v3 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 48) = v3;
  if ( v3 != 0 )
  {
    v5 = (unsigned __int64 *)(v3 + 8);
    v6 = __atomic_fetch_add(v5, 1, 0);
  }
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18EE470) + 2);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 68);
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 76);
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 84);
  *(_WORD *)(a1 + 88) = *(_WORD *)(a2 + 88);
  *(_BYTE *)(a1 + 92) = *(_BYTE *)(a2 + 92);
  v7 = *(_QWORD *)(a2 + 96);
  if ( v7 != 0 )
    v8 = (*(__int64 (__fastcall **)(__int64, void *, int))(*(_QWORD *)v7 + 40LL))(v7, &unk_1326E41, 0);
  else
    v8 = 0;
  *(_QWORD *)(a1 + 96) = v8;
  result = (__int64 *)_Znwm(0x20u);
  v10 = ((char *)((__int64*)goff_18EDFE8) + 16);
  result[2] = 0;
  result[3] = v8;
  *result = v10;
  result[1] = 0;
  *(_QWORD *)(a1 + 104) = result;
  return result;
}

// N5storm4echo16ObjectDescriptor22ResolveConflictFunctorE, virtual slot 5
_QWORD *__fastcall sub_2709E0(__int64 a1)
{
  _QWORD *v2; // x20
  __int64 *v3; // x8

  v2 = (_QWORD *)sub_56C9F0(32, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)goff_18EE450 + 25);
  *v2 = ((__int64 *)goff_18EE450 + 2);
  v2[1] = v3;
  return v2;
}

__int64 __fastcall sub_284AD0(__int64 **a1)
{
  __int64 *v1; // x8
  __int64 *v2; // x9

  v1 = ((__int64 *)((__int64*)goff_18EE5C0) + 24);
  v2 = ((__int64 *)((__int64*)goff_18EDC88) + 2);
  *(a1 - 1) = ((__int64 *)((__int64*)goff_18EE5C0) + 2);
  *a1 = v1;
  a1[10] = v2;
  return sub_781380((__int64)(a1 + 11));
}

__int64 __fastcall sub_284B00(__int64 **a1)
{
  __int64 *v1; // x9
  __int64 *v2; // x8
  __int64 **v3; // x19

  v1 = ((__int64*)goff_18EDC88);
  v2 = ((__int64 *)((__int64*)goff_18EE5C0) + 24);
  *(a1 - 1) = ((__int64 *)((__int64*)goff_18EE5C0) + 2);
  v3 = a1 - 1;
  *a1 = v2;
  a1[10] = v1 + 2;
  sub_781380((__int64)(a1 + 11));
  return sub_56CA00(v3, &unk_1326E41, 0);
}

__int64 __fastcall sub_290830(__int64 a1, __int64 a2)
{
  __int64 *v3; // x8
  __int64 *v4; // x8
  int *v5; // x8
  _QWORD *v6; // x21
  __int64 (__fastcall **v7)(); // x0
  __int64 *v8; // x8
  __int64 v9; // x0

  sub_57F050(a1, a2);
  v3 = ((__int64 *)((__int64*)goff_18EDCD0) + 24);
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18EDCD0) + 2);
  *(_QWORD *)(a1 + 8) = v3;
  sub_57F050(a1 + 32, a1 + 8);
  v4 = ((__int64 *)((__int64*)goff_18EDCD8) + 24);
  *(_QWORD *)(a1 + 32) = ((__int64 *)((__int64*)goff_18EDCD8) + 2);
  *(_QWORD *)(a1 + 40) = v4;
  v5 = ((__int64*)goff_18EF598);
  *(_QWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 60) = *v5;
  sub_57F220(a1 + 32);
  v6 = (_QWORD *)sub_56C9F0(32, 8, 1092624384, 0LL, &unk_1326E41, 0);
  v7 = sub_583240();
  sub_57F050(v6, v7);
  v8 = ((__int64 *)((__int64*)goff_18EF5A0) + 24);
  *v6 = ((__int64 *)((__int64*)goff_18EF5A0) + 2);
  v6[1] = v8;
  v9 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = v6;
  if ( v9 != 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    v6 = *(_QWORD **)(a1 + 64);
  }
  sub_57F1B0(v6, a1 + 8);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 128LL))(a1);
}

// N5storm4echo9multicast7inEvent18AddBiRelationEventE, virtual slot 1
__int64 __fastcall sub_290BA0(_QWORD *a1)
{
  __int64 *v1; // x20
  __int64 *v2; // x21
  __int64 v4; // x0
  __int64 v5; // x0
  char *v6; // x20
  unsigned __int64 *v7; // x8
  unsigned __int64 v8; // x9
  char *v9; // x20
  unsigned __int64 *v10; // x8
  unsigned __int64 v11; // x9

  v1 = ((__int64 *)((__int64*)goff_18EDCD0) + 2);
  v2 = ((__int64 *)((__int64*)goff_18EDCD0) + 24);
  *a1 = ((__int64 *)((__int64*)goff_18EFB30) + 2);
  a1[19] = v1;
  a1[20] = v2;
  v4 = a1[27];
  a1[27] = 0;
  if ( v4 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = a1[18];
  a1[10] = v1;
  a1[11] = v2;
  a1[18] = 0;
  if ( v5 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = (char *)a1[9];
  if ( v6 == nullptr )
    goto LABEL_9;
  v7 = (unsigned __int64 *)((char *)v6 + 8);
  v8 = __atomic_fetch_sub(v7, 1, 5);
  if ( v8 == 0 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 16LL))(v6);
    std____shared_weak_count____release_weak(v6);
    v9 = (char *)a1[7];
    if ( v9 == nullptr )
      return sub_56CA00(a1, &unk_1326E41, 0);
  }
  else
  {
LABEL_9:
    v9 = (char *)a1[7];
    if ( v9 == nullptr )
      return sub_56CA00(a1, &unk_1326E41, 0);
  }
  v10 = (unsigned __int64 *)((char *)v9 + 8);
  v11 = __atomic_fetch_sub(v10, 1, 5);
  if ( v11 == 0 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 16LL))(v9);
    std____shared_weak_count____release_weak(v9);
  }
  return sub_56CA00(a1, &unk_1326E41, 0);
}

__int64 __fastcall sub_2A04E0(__int64 **a1)
{
  __int64 *v1; // x9
  __int64 *v2; // x8
  __int64 **v4; // x19
  __int64 *v5; // x8
  __int64 *v6; // x0

  v1 = ((__int64*)goff_18EE498);
  v2 = ((__int64*)goff_18EE490) + 24;
  *(a1 - 1) = ((__int64 *)((__int64*)goff_18EE490) + 2);
  v4 = a1 - 1;
  *a1 = v2;
  a1[12] = v1 + 2;
  a1[13] = v1 + 24;
  sub_576000(a1 + 16);
  v5 = ((__int64*)goff_18EDCD0);
  v6 = a1[11];
  a1[3] = v5 + 2;
  a1[11] = nullptr;
  a1[4] = v5 + 24;
  if ( v6 != nullptr )
    (*(void (__fastcall **)(__int64 *))(*v6 + 8))(v6);
  return sub_56CA00(v4, &unk_1326E41, 0);
}

// N5storm18DynamicTypeFactoryINS_4echo16ObjectDescriptor22ResolveConflictFunctorEEE, virtual slot 2
_QWORD *__fastcall sub_2AD570(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // x19
  __int64 (__fastcall **v4)(); // x0
  __int64 *v5; // x8

  v3 = (_QWORD *)sub_56C9F0(32, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_57F050(v3, v4);
  v5 = ((__int64 *)goff_18EE450 + 25);
  *v3 = ((__int64 *)goff_18EE450 + 2);
  v3[1] = v5;
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo16ObjectDescriptor22ResolveConflictFunctorEEE, virtual slot 3
_QWORD *__fastcall sub_2AD5E0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD *v5; // x20
  __int64 *v6; // x8

  v5 = (_QWORD *)sub_56C9F0(32, 8, 1092624384, 0LL, a3, a4);
  sub_57F050(v5, a2);
  v6 = ((__int64 *)goff_18EE450 + 25);
  *v5 = ((__int64 *)goff_18EE450 + 2);
  v5[1] = v6;
  return v5;
}

// N5storm15NetPropertyDataINS_9FixedGuidImEENS_20NetPropertyDataTraitIS2_EEEE, virtual slot 5
_QWORD *__fastcall sub_2B6E50(__int64 a1)
{
  _QWORD *v2; // x20
  __int64 *v3; // x8

  v2 = (_QWORD *)sub_56C9F0(40, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)((__int64*)goff_18EE440) + 24);
  *v2 = ((__int64 *)((__int64*)goff_18EE440) + 2);
  v2[1] = v3;
  v2[4] = *(_QWORD *)(a1 + 32);
  return v2;
}

// N5storm18DynamicTypeFactoryINS_15NetPropertyDataINS_9FixedGuidImEENS_20NetPropertyDataTraitIS3_EEEEEE, virtual slot 2
_QWORD *__fastcall sub_2B7220(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // x19
  __int64 (__fastcall **v4)(); // x0
  __int64 *v5; // x8

  v3 = (_QWORD *)sub_56C9F0(40, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_57F050(v3, v4);
  v5 = ((__int64 *)((__int64*)goff_18EE440) + 24);
  *v3 = ((__int64 *)((__int64*)goff_18EE440) + 2);
  v3[1] = v5;
  v3[4] = -1;
  return v3;
}

// N5storm18DynamicTypeFactoryINS_15NetPropertyDataINS_9FixedGuidImEENS_20NetPropertyDataTraitIS3_EEEEEE, virtual slot 3
_QWORD *__fastcall sub_2B7290(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD *v5; // x20
  __int64 *v6; // x8

  v5 = (_QWORD *)sub_56C9F0(40, 8, 1092624384, 0LL, a3, a4);
  sub_57F050(v5, a2);
  v6 = ((__int64 *)((__int64*)goff_18EE440) + 24);
  *v5 = ((__int64 *)((__int64*)goff_18EE440) + 2);
  v5[1] = v6;
  v5[4] = -1;
  return v5;
}

// N5storm4echo19PingManager_NetworkE, virtual slot 0
__int64 __fastcall sub_2DFBB0(_QWORD *a1)
{
  __int64 *v1; // x8
  _QWORD *v2; // x20
  __int64 *v4; // x8
  __int64 v5; // x0
  __int64 v6; // x0

  v1 = goff_18F1708;
  *a1 = ((__int64 *)goff_18F1708 + 2);
  a1[3] = v1 + 39;
  v2 = a1 + 3;
  a1[7] = v1 + 139;
  a1[8] = v1 + 148;
  sub_2FB920(a1 + 40, a1[41]);
  v4 = ((__int64*)goff_18EDCD0);
  v5 = a1[38];
  a1[30] = v4 + 2;
  a1[38] = 0;
  a1[31] = v4 + 24;
  if ( v5 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  sub_576000(a1 + 23);
  sub_2FB970(a1 + 19, a1[20]);
  v6 = a1[18];
  a1[18] = 0;
  if ( v6 != 0 )
    sub_57EDC0(v6, 0LL, &unk_1326E41, 0);
  sub_577290(v2);
  return nullsub_1096(a1);
}

// N5storm15NetPropertyDataINS_9IPAddressENS_20NetPropertyDataTraitIS1_EEEE, virtual slot 5
_QWORD *__fastcall sub_2EE2B0(__int64 a1)
{
  _QWORD *v2; // x20
  __int64 *v3; // x8

  v2 = (_QWORD *)sub_56C9F0(208, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)goff_18F1258 + 24);
  *v2 = ((__int64 *)goff_18F1258 + 2);
  v2[1] = v3;
  sub_578210(v2 + 4, a1 + 32);
  return v2;
}

// N5storm18DynamicTypeFactoryINS_15NetPropertyDataINS_9IPAddressENS_20NetPropertyDataTraitIS2_EEEEEE, virtual slot 2
_QWORD *__fastcall sub_2EE710(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // x19
  __int64 (__fastcall **v4)(); // x0
  __int64 *v5; // x8

  v3 = (_QWORD *)sub_56C9F0(208, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_57F050(v3, v4);
  v5 = ((__int64 *)goff_18F1258 + 24);
  *v3 = ((__int64 *)goff_18F1258 + 2);
  v3[1] = v5;
  sub_5773C0(v3 + 4);
  return v3;
}

// N5storm18DynamicTypeFactoryINS_15NetPropertyDataINS_9IPAddressENS_20NetPropertyDataTraitIS2_EEEEEE, virtual slot 3
_QWORD *__fastcall sub_2EE780(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD *v5; // x20
  __int64 *v6; // x8

  v5 = (_QWORD *)sub_56C9F0(208, 8, 1092624384, 0LL, a3, a4);
  sub_57F050(v5, a2);
  v6 = ((__int64 *)goff_18F1258 + 24);
  *v5 = ((__int64 *)goff_18F1258 + 2);
  v5[1] = v6;
  sub_5773C0(v5 + 4);
  return v5;
}

// N5storm18DynamicTypeFactoryINS_4echo4time6inFunc24GetSessionTimeInMsReturnEEE, virtual slot 2
_QWORD *__fastcall sub_2F85A0(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *result; // x0

  result = (_QWORD *)sub_56C9F0(16, 8, 1092624384, 0LL, a2, a3);
  *result = ((char *)((__int64*)goff_18F13D0) + 16);
  result[1] = 0;
  return result;
}

// N5storm18DynamicTypeFactoryINS_4echo4time6inFunc23GetSystemTimeInMsReturnEEE, virtual slot 2
_QWORD *__fastcall sub_2F8F00(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *result; // x0

  result = (_QWORD *)sub_56C9F0(16, 8, 1092624384, 0LL, a2, a3);
  *result = ((char *)((__int64*)goff_18F13E0) + 16);
  result[1] = 0;
  return result;
}

// N5storm4echo7session31SessionExitHostMigrationMessageE, virtual slot 16
__int64 *__fastcall sub_3402D0(__int64 a1, _QWORD *a2)
{
  int v4; // w8
  __int64 *result; // x0
  __int64 v7[3]; // [xsp+8h] [xbp-28h] BYREF
  int v6; // [xsp+4h] [xbp-2Ch] BYREF

  sub_33B550(a1, a2);
  v4 = *(_DWORD *)(a1 + 100);
  v7[0] = (__int64)"peerId";
  v6 = v4;
  v7[1] = 6;
  v7[2] = (__int64)&v6;
  result = (__int64 *)sub_57D530((__int64)a2, (__int64)v7);
  if ( ((unsigned __int8)result & 1) != 0 )
    return sub_2B8840(v7, (__int64)a2, 0);
  return result;
}

// N5storm4echo7session25SessionHostElectedMessageE, virtual slot 0
__int64 __fastcall sub_3409F0(_QWORD *a1)
{
  __int64 v1; // x9
  _QWORD *v2; // x21
  _QWORD *v4; // x22
  __int64 v5; // x8
  __int64 v6; // t1
  unsigned int *v7; // x8
  unsigned int v8; // w9
  unsigned int v9; // w9
  _QWORD *v10; // x0
  __int64 *v11; // x8
  __int64 result; // x0

  v1 = ((__int64*)goff_18F3448);
  *a1 = ((char *)((__int64*)goff_18F3440) + 16);
  v2 = (_QWORD *)a1[22];
  a1[19] = v1 + 16;
  if ( v2 != nullptr )
  {
    v4 = (_QWORD *)a1[23];
    if ( v4 == v2 )
    {
      v10 = v2;
    }
    else
    {
      do
      {
        v6 = *--v4;
        v5 = v6;
        if ( v6 != 0 )
        {
          v7 = (unsigned int *)(v5 + 24);
          v9 = __atomic_sub_fetch(v7, 1, 5);
          if ( v9 == 0 )
          {
            if ( *v4 != 0 )
            {
              sub_57EDC0(*v4, 0LL, &unk_1326E41, 0);
              *v4 = 0;
            }
            *v4 = 0;
          }
        }
      }
      while ( v4 != v2 );
      v10 = (_QWORD *)a1[22];
    }
    a1[23] = v2;
    sub_56CA00(v10, &unk_1326E41, 0);
  }
  v11 = ((__int64*)goff_18EDCD0);
  result = a1[18];
  a1[10] = v11 + 2;
  a1[18] = 0;
  a1[11] = v11 + 24;
  if ( result != 0 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  return result;
}

// N5storm4echo7session25SessionHostElectedMessageE, virtual slot 1
__int64 __fastcall sub_340BC0(_QWORD *a1)
{
  __int64 v1; // x9
  _QWORD *v2; // x21
  _QWORD *v4; // x22
  __int64 v5; // x8
  __int64 v6; // t1
  unsigned int *v7; // x8
  unsigned int v8; // w9
  unsigned int v9; // w9
  _QWORD *v10; // x0
  __int64 *v11; // x8
  __int64 v12; // x0

  v1 = ((__int64*)goff_18F3448);
  *a1 = ((char *)((__int64*)goff_18F3440) + 16);
  v2 = (_QWORD *)a1[22];
  a1[19] = v1 + 16;
  if ( v2 != nullptr )
  {
    v4 = (_QWORD *)a1[23];
    if ( v4 == v2 )
    {
      v10 = v2;
    }
    else
    {
      do
      {
        v6 = *--v4;
        v5 = v6;
        if ( v6 != 0 )
        {
          v7 = (unsigned int *)(v5 + 24);
          v9 = __atomic_sub_fetch(v7, 1, 5);
          if ( v9 == 0 )
          {
            if ( *v4 != 0 )
            {
              sub_57EDC0(*v4, 0LL, &unk_1326E41, 0);
              *v4 = 0;
            }
            *v4 = 0;
          }
        }
      }
      while ( v4 != v2 );
      v10 = (_QWORD *)a1[22];
    }
    a1[23] = v2;
    sub_56CA00(v10, &unk_1326E41, 0);
  }
  v11 = ((__int64*)goff_18EDCD0);
  v12 = a1[18];
  a1[10] = v11 + 2;
  a1[18] = 0;
  a1[11] = v11 + 24;
  if ( v12 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  return sub_56CA00(a1, &unk_1326E41, 0);
}

// N5storm4echo13CTransmissionE, virtual slot 3
void __fastcall sub_35B260(_QWORD *a1)
{
  __int64 *v2; // x0
  __int64 *v3; // x20
  unsigned int *v4; // x8
  unsigned int v5; // w9
  unsigned int v6; // w9
  char *v7; // x21
  unsigned __int64 *v8; // x8
  unsigned __int64 v9; // x9
  __int64 (__fastcall *v10)(); // x9

  *a1 = ((char *)goff_18F3618 + 16);
  v2 = sub_5543A0();
  v3 = v2;
  v4 = (unsigned int *)(v2 + 6);
  v6 = __atomic_sub_fetch(v4, 1, 5);
  if ( v6 == 0 )
  {
    v7 = (char *)v2[5];
    v2[4] = 0;
    v2[5] = 0;
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
    v10 = goff_18F3628;
    *v3 = (__int64)((__int64*)goff_18F3620);
    v3[1] = 0;
    v3[2] = (__int64)v10;
    v3[3] = 0;
  }
  _ZdlPv(a1);
}

// N5storm17NetPropertyVectorINS_15TNetPropertyRefINS_15NetPropertyNullEEELm0EE10VectorSizeE, virtual slot 5
_QWORD *__fastcall sub_373FF0(__int64 a1)
{
  _QWORD *v2; // x20
  __int64 v3; // x8

  v2 = (_QWORD *)sub_56C9F0(48, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((char *)((__int64*)goff_18F33D8) + 192);
  *v2 = ((char *)((__int64*)goff_18F33D8) + 16);
  v2[1] = v3;
  v2[4] = *(_QWORD *)(a1 + 32);
  v2[5] = *(_QWORD *)(a1 + 40);
  return v2;
}

// N5storm18DynamicTypeFactoryINS_4echo7session18SessionBaseMessageEEE, virtual slot 2
_QWORD *__fastcall sub_37D2E0(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // x0
  __int64 *v4; // x22
  _QWORD *v5; // x19
  __int64 **v6; // x20
  __int64 v7; // x0
  __int64 *v8; // x8
  __int64 v9; // x0
  __int64 *v10; // x8

  v3 = (_QWORD *)sub_56C9F0(80, 8, 1092624384, 0LL, a2, a3);
  v4 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v3 = ((__int64 *)((__int64*)goff_18F3010) + 2);
  v5 = v3;
  v3[1] = v4;
  v6 = (__int64 **)(v3 + 1);
  v7 = sub_56DC80(v3 + 1);
  v8 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  v5[2] = v7;
  *((_WORD *)v5 + 12) = 1;
  *v6 = v8;
  v5[6] = v4;
  v9 = sub_56DC80(v5 + 6);
  *((_BYTE *)v5 + 64) = 1;
  v10 = ((__int64 *)goff_18F2620 + 2);
  v5[7] = v9;
  v5[6] = v10;
  *((_DWORD *)v5 + 17) = -1;
  v5[9] = 0;
  return v5;
}

// N5storm18DynamicTypeFactoryINS_4echo7session24SessionJoinRefuseMessageEEE, virtual slot 2
_QWORD *__fastcall sub_37D660(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // x0
  __int64 *v4; // x22
  _QWORD *v5; // x19
  __int64 **v6; // x20
  __int64 v7; // x0
  __int64 *v8; // x8
  __int64 v9; // x0
  __int64 *v10; // x8
  __int64 *v11; // x9
  __int64 v12; // x0
  __int64 *v13; // x8

  v3 = (_QWORD *)sub_56C9F0(152, 8, 1092624384, 0LL, a2, a3);
  v4 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v3 = ((__int64 *)((__int64*)goff_18F3010) + 2);
  v5 = v3;
  v3[1] = v4;
  v6 = (__int64 **)(v3 + 1);
  v7 = sub_56DC80(v3 + 1);
  v8 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  v5[2] = v7;
  *((_WORD *)v5 + 12) = 1;
  *v6 = v8;
  v5[6] = v4;
  v9 = sub_56DC80(v5 + 6);
  v10 = goff_18F2620;
  *((_BYTE *)v5 + 64) = 1;
  v11 = goff_18F3260;
  v5[7] = v9;
  v5[6] = v10 + 2;
  *((_DWORD *)v5 + 17) = -1;
  v5[9] = 0;
  *v5 = v11 + 2;
  v5[10] = v4;
  v12 = sub_56DC80(v5 + 10);
  *((_BYTE *)v5 + 96) = 1;
  v13 = ((__int64 *)((__int64*)goff_18EED80) + 2);
  v5[11] = v12;
  v5[10] = v13;
  v5[14] = 0;
  v5[15] = 0;
  v5[13] = 0;
  v5[16] = v4;
  v5[17] = sub_56DC80(v5 + 16);
  *((_BYTE *)v5 + 144) = 1;
  v5[16] = ((__int64 *)goff_18F2678 + 2);
  *((_DWORD *)v5 + 37) = -1;
  return v5;
}

// N5storm18DynamicTypeFactoryINS_4echo7session29SessionPeerUnreachableMessageEEE, virtual slot 2
_QWORD *__fastcall sub_37DA50(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // x0
  __int64 *v4; // x22
  _QWORD *v5; // x19
  __int64 **v6; // x20
  __int64 v7; // x0
  __int64 *v8; // x24
  __int64 v9; // x0
  __int64 *v10; // x8
  __int64 v11; // x9
  __int64 *v12; // x25
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 *v16; // x8

  v3 = (_QWORD *)sub_56C9F0(216, 8, 1092624384, 0LL, a2, a3);
  v4 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v3 = ((__int64 *)((__int64*)goff_18F3010) + 2);
  v5 = v3;
  v3[1] = v4;
  v6 = (__int64 **)(v3 + 1);
  v7 = sub_56DC80(v3 + 1);
  v8 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  v5[2] = v7;
  *((_WORD *)v5 + 12) = 1;
  *v6 = v8;
  v5[6] = v4;
  v9 = sub_56DC80(v5 + 6);
  v10 = goff_18F2620;
  *((_BYTE *)v5 + 64) = 1;
  v11 = ((__int64*)goff_18F33E8);
  v5[7] = v9;
  v12 = v10 + 2;
  v5[6] = v10 + 2;
  *((_DWORD *)v5 + 17) = -1;
  v5[9] = 0;
  *v5 = v11 + 16;
  v5[10] = v4;
  v13 = sub_56DC80(v5 + 10);
  *((_WORD *)v5 + 48) = 1;
  v5[11] = v13;
  v5[10] = v8;
  v5[15] = v4;
  v14 = sub_56DC80(v5 + 15);
  *((_BYTE *)v5 + 136) = 1;
  v5[16] = v14;
  v5[15] = v12;
  *((_DWORD *)v5 + 35) = 0;
  v5[18] = v4;
  v15 = sub_56DC80(v5 + 18);
  *((_BYTE *)v5 + 160) = 1;
  v16 = ((__int64 *)((__int64*)goff_18EED80) + 2);
  v5[19] = v15;
  v5[18] = v16;
  v5[22] = 0;
  v5[23] = 0;
  v5[21] = 0;
  v5[24] = v4;
  v5[25] = sub_56DC80(v5 + 24);
  *((_BYTE *)v5 + 208) = 1;
  v5[24] = ((__int64 *)goff_18F2678 + 2);
  *((_DWORD *)v5 + 53) = -1;
  return v5;
}

// N5storm18DynamicTypeFactoryINS_4echo7session23SessionPeerLeaveMessageEEE, virtual slot 2
_QWORD *__fastcall sub_37DD00(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // x0
  __int64 *v4; // x22
  _QWORD *v5; // x19
  __int64 **v6; // x20
  __int64 v7; // x0
  __int64 *v8; // x24
  __int64 v9; // x0
  __int64 *v10; // x8
  __int64 v11; // x9
  __int64 *v12; // x25
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 *v16; // x8

  v3 = (_QWORD *)sub_56C9F0(216, 8, 1092624384, 0LL, a2, a3);
  v4 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v3 = ((__int64 *)((__int64*)goff_18F3010) + 2);
  v5 = v3;
  v3[1] = v4;
  v6 = (__int64 **)(v3 + 1);
  v7 = sub_56DC80(v3 + 1);
  v8 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  v5[2] = v7;
  *((_WORD *)v5 + 12) = 1;
  *v6 = v8;
  v5[6] = v4;
  v9 = sub_56DC80(v5 + 6);
  v10 = goff_18F2620;
  *((_BYTE *)v5 + 64) = 1;
  v11 = ((__int64*)goff_18F33F0);
  v5[7] = v9;
  v12 = v10 + 2;
  v5[6] = v10 + 2;
  *((_DWORD *)v5 + 17) = -1;
  v5[9] = 0;
  *v5 = v11 + 16;
  v5[10] = v4;
  v13 = sub_56DC80(v5 + 10);
  *((_WORD *)v5 + 48) = 1;
  v5[11] = v13;
  v5[10] = v8;
  v5[15] = v4;
  v14 = sub_56DC80(v5 + 15);
  *((_BYTE *)v5 + 136) = 1;
  v5[16] = v14;
  v5[15] = v12;
  *((_DWORD *)v5 + 35) = 0;
  v5[18] = v4;
  v15 = sub_56DC80(v5 + 18);
  *((_BYTE *)v5 + 160) = 1;
  v16 = ((__int64 *)((__int64*)goff_18EED80) + 2);
  v5[19] = v15;
  v5[18] = v16;
  v5[22] = 0;
  v5[23] = 0;
  v5[21] = 0;
  v5[24] = v4;
  v5[25] = sub_56DC80(v5 + 24);
  *((_BYTE *)v5 + 208) = 1;
  v5[24] = ((__int64 *)goff_18F2678 + 2);
  *((_DWORD *)v5 + 53) = -1;
  return v5;
}

// N5storm18DynamicTypeFactoryINS_4echo7session19SessionReadyMessageEEE, virtual slot 2
_QWORD *__fastcall sub_37DFB0(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // x0
  __int64 *v4; // x22
  _QWORD *v5; // x19
  __int64 **v6; // x20
  __int64 v7; // x0
  __int64 *v8; // x8
  __int64 v9; // x0
  __int64 *v10; // x8
  __int64 *v11; // x9

  v3 = (_QWORD *)sub_56C9F0(80, 8, 1092624384, 0LL, a2, a3);
  v4 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v3 = ((__int64 *)((__int64*)goff_18F3010) + 2);
  v5 = v3;
  v3[1] = v4;
  v6 = (__int64 **)(v3 + 1);
  v7 = sub_56DC80(v3 + 1);
  v8 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  v5[2] = v7;
  *((_WORD *)v5 + 12) = 1;
  *v6 = v8;
  v5[6] = v4;
  v9 = sub_56DC80(v5 + 6);
  v10 = goff_18F2620;
  *((_BYTE *)v5 + 64) = 1;
  v11 = ((__int64*)goff_18F3498);
  v5[7] = v9;
  v5[6] = v10 + 2;
  *((_DWORD *)v5 + 17) = -1;
  v5[9] = 0;
  *v5 = v11 + 2;
  return v5;
}

// N5storm18DynamicTypeFactoryINS_4echo7session23SessionConnectedMessageEEE, virtual slot 2
_QWORD *__fastcall sub_37E1C0(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // x0
  __int64 *v4; // x22
  _QWORD *v5; // x19
  __int64 **v6; // x20
  __int64 v7; // x0
  __int64 *v8; // x8
  __int64 v9; // x0
  __int64 *v10; // x8
  __int64 *v11; // x9

  v3 = (_QWORD *)sub_56C9F0(80, 8, 1092624384, 0LL, a2, a3);
  v4 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v3 = ((__int64 *)((__int64*)goff_18F3010) + 2);
  v5 = v3;
  v3[1] = v4;
  v6 = (__int64 **)(v3 + 1);
  v7 = sub_56DC80(v3 + 1);
  v8 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  v5[2] = v7;
  *((_WORD *)v5 + 12) = 1;
  *v6 = v8;
  v5[6] = v4;
  v9 = sub_56DC80(v5 + 6);
  v10 = goff_18F2620;
  *((_BYTE *)v5 + 64) = 1;
  v11 = goff_18F39E8;
  v5[7] = v9;
  v5[6] = v10 + 2;
  *((_DWORD *)v5 + 17) = -1;
  v5[9] = 0;
  *v5 = v11 + 2;
  return v5;
}

// N5storm18DynamicTypeFactoryINS_4echo7session27SessionPeerConnectedMessageEEE, virtual slot 2
_QWORD *__fastcall sub_37E550(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // x0
  __int64 *v4; // x22
  _QWORD *v5; // x19
  __int64 **v6; // x20
  __int64 v7; // x0
  __int64 *v8; // x8
  __int64 v9; // x0
  __int64 *v10; // x8
  __int64 *v11; // x9
  __int64 *v12; // x24
  __int64 v13; // x0
  __int64 v14; // x0

  v3 = (_QWORD *)sub_56C9F0(128, 8, 1092624384, 0LL, a2, a3);
  v4 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v3 = ((__int64 *)((__int64*)goff_18F3010) + 2);
  v5 = v3;
  v3[1] = v4;
  v6 = (__int64 **)(v3 + 1);
  v7 = sub_56DC80(v3 + 1);
  v8 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  v5[2] = v7;
  *((_WORD *)v5 + 12) = 1;
  *v6 = v8;
  v5[6] = v4;
  v9 = sub_56DC80(v5 + 6);
  v10 = goff_18F2620;
  *((_BYTE *)v5 + 64) = 1;
  v11 = ((__int64*)goff_18F3030);
  v5[7] = v9;
  v12 = v10 + 2;
  v5[6] = v10 + 2;
  *((_DWORD *)v5 + 17) = -1;
  v5[9] = 0;
  *v5 = v11 + 2;
  v5[10] = v4;
  v13 = sub_56DC80(v5 + 10);
  *((_BYTE *)v5 + 96) = 1;
  v5[11] = v13;
  v5[10] = v12;
  *((_DWORD *)v5 + 25) = 0;
  v5[13] = v4;
  v14 = sub_56DC80(v5 + 13);
  *((_BYTE *)v5 + 120) = 1;
  v5[14] = v14;
  v5[13] = v12;
  *((_DWORD *)v5 + 31) = 0;
  return v5;
}

// N5storm18DynamicTypeFactoryINS_4echo7session23SessionGuidLeaveMessageEEE, virtual slot 2
_QWORD *__fastcall sub_37EAA0(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // x0
  __int64 *v4; // x22
  _QWORD *v5; // x19
  __int64 **v6; // x20
  __int64 v7; // x0
  __int64 *v8; // x24
  __int64 v9; // x0
  __int64 *v10; // x8
  __int64 v11; // x9
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 *v14; // x8

  v3 = (_QWORD *)sub_56C9F0(192, 8, 1092624384, 0LL, a2, a3);
  v4 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v3 = ((__int64 *)((__int64*)goff_18F3010) + 2);
  v5 = v3;
  v3[1] = v4;
  v6 = (__int64 **)(v3 + 1);
  v7 = sub_56DC80(v3 + 1);
  v8 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  v5[2] = v7;
  *((_WORD *)v5 + 12) = 1;
  *v6 = v8;
  v5[6] = v4;
  v9 = sub_56DC80(v5 + 6);
  v10 = goff_18F2620;
  *((_BYTE *)v5 + 64) = 1;
  v11 = ((__int64*)goff_18F3418);
  v5[7] = v9;
  v5[6] = v10 + 2;
  *((_DWORD *)v5 + 17) = -1;
  v5[9] = 0;
  *v5 = v11 + 16;
  v5[10] = v4;
  v12 = sub_56DC80(v5 + 10);
  *((_WORD *)v5 + 48) = 1;
  v5[11] = v12;
  v5[10] = v8;
  v5[15] = v4;
  v13 = sub_56DC80(v5 + 15);
  *((_BYTE *)v5 + 136) = 1;
  v14 = ((__int64 *)((__int64*)goff_18EED80) + 2);
  v5[16] = v13;
  v5[15] = v14;
  v5[19] = 0;
  v5[20] = 0;
  v5[18] = 0;
  v5[21] = v4;
  v5[22] = sub_56DC80(v5 + 21);
  *((_BYTE *)v5 + 184) = 1;
  v5[21] = ((__int64 *)goff_18F2678 + 2);
  *((_DWORD *)v5 + 47) = -1;
  return v5;
}

// N5storm18DynamicTypeFactoryINS_4echo7session19SessionLeaveMessageEEE, virtual slot 2
_QWORD *__fastcall sub_37ED30(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // x0
  __int64 *v4; // x22
  _QWORD *v5; // x19
  __int64 **v6; // x20
  __int64 v7; // x0
  __int64 *v8; // x24
  __int64 v9; // x0
  __int64 *v10; // x8
  __int64 v11; // x9
  __int64 *v12; // x25
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 *v16; // x8

  v3 = (_QWORD *)sub_56C9F0(216, 8, 1092624384, 0LL, a2, a3);
  v4 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v3 = ((__int64 *)((__int64*)goff_18F3010) + 2);
  v5 = v3;
  v3[1] = v4;
  v6 = (__int64 **)(v3 + 1);
  v7 = sub_56DC80(v3 + 1);
  v8 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  v5[2] = v7;
  *((_WORD *)v5 + 12) = 1;
  *v6 = v8;
  v5[6] = v4;
  v9 = sub_56DC80(v5 + 6);
  v10 = goff_18F2620;
  *((_BYTE *)v5 + 64) = 1;
  v11 = ((__int64*)goff_18F3420);
  v5[7] = v9;
  v12 = v10 + 2;
  v5[6] = v10 + 2;
  *((_DWORD *)v5 + 17) = -1;
  v5[9] = 0;
  *v5 = v11 + 16;
  v5[10] = v4;
  v13 = sub_56DC80(v5 + 10);
  *((_WORD *)v5 + 48) = 1;
  v5[11] = v13;
  v5[10] = v8;
  v5[15] = v4;
  v14 = sub_56DC80(v5 + 15);
  *((_BYTE *)v5 + 136) = 1;
  v5[16] = v14;
  v5[15] = v12;
  *((_DWORD *)v5 + 35) = 0;
  v5[18] = v4;
  v15 = sub_56DC80(v5 + 18);
  *((_BYTE *)v5 + 160) = 1;
  v16 = ((__int64 *)((__int64*)goff_18EED80) + 2);
  v5[19] = v15;
  v5[18] = v16;
  v5[22] = 0;
  v5[23] = 0;
  v5[21] = 0;
  v5[24] = v4;
  v5[25] = sub_56DC80(v5 + 24);
  *((_BYTE *)v5 + 208) = 1;
  v5[24] = ((__int64 *)goff_18F2678 + 2);
  *((_DWORD *)v5 + 53) = -1;
  return v5;
}

// N5storm18DynamicTypeFactoryINS_4echo7session22SessionDissolveMessageEEE, virtual slot 2
_QWORD *__fastcall sub_37EFE0(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // x0
  __int64 *v4; // x22
  _QWORD *v5; // x19
  __int64 **v6; // x20
  __int64 v7; // x0
  __int64 *v8; // x8
  __int64 v9; // x0
  __int64 *v10; // x8
  __int64 v11; // x9
  __int64 v12; // x0
  __int64 *v13; // x8

  v3 = (_QWORD *)sub_56C9F0(152, 8, 1092624384, 0LL, a2, a3);
  v4 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v3 = ((__int64 *)((__int64*)goff_18F3010) + 2);
  v5 = v3;
  v3[1] = v4;
  v6 = (__int64 **)(v3 + 1);
  v7 = sub_56DC80(v3 + 1);
  v8 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  v5[2] = v7;
  *((_WORD *)v5 + 12) = 1;
  *v6 = v8;
  v5[6] = v4;
  v9 = sub_56DC80(v5 + 6);
  v10 = goff_18F2620;
  *((_BYTE *)v5 + 64) = 1;
  v11 = ((__int64*)goff_18F3428);
  v5[7] = v9;
  v5[6] = v10 + 2;
  *((_DWORD *)v5 + 17) = -1;
  v5[9] = 0;
  *v5 = v11 + 16;
  v5[10] = v4;
  v12 = sub_56DC80(v5 + 10);
  *((_BYTE *)v5 + 96) = 1;
  v13 = ((__int64 *)((__int64*)goff_18EED80) + 2);
  v5[11] = v12;
  v5[10] = v13;
  v5[14] = 0;
  v5[15] = 0;
  v5[13] = 0;
  v5[16] = v4;
  v5[17] = sub_56DC80(v5 + 16);
  *((_BYTE *)v5 + 144) = 1;
  v5[16] = ((__int64 *)goff_18F2678 + 2);
  *((_DWORD *)v5 + 37) = -1;
  return v5;
}

// N5storm18DynamicTypeFactoryINS_4echo7session27SessionReJoinRequestMessageEEE, virtual slot 2
_QWORD *__fastcall sub_37F250(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // x0
  __int64 *v4; // x22
  _QWORD *v5; // x19
  __int64 **v6; // x20
  __int64 v7; // x0
  __int64 *v8; // x8
  __int64 v9; // x0
  __int64 *v10; // x8
  __int64 *v11; // x9
  __int64 *v12; // x24
  __int64 v13; // x0

  v3 = (_QWORD *)sub_56C9F0(104, 8, 1092624384, 0LL, a2, a3);
  v4 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v3 = ((__int64 *)((__int64*)goff_18F3010) + 2);
  v5 = v3;
  v3[1] = v4;
  v6 = (__int64 **)(v3 + 1);
  v7 = sub_56DC80(v3 + 1);
  v8 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  v5[2] = v7;
  *((_WORD *)v5 + 12) = 1;
  *v6 = v8;
  v5[6] = v4;
  v9 = sub_56DC80(v5 + 6);
  v10 = goff_18F2620;
  *((_BYTE *)v5 + 64) = 1;
  v11 = ((__int64*)goff_18F3020);
  v5[7] = v9;
  v12 = v10 + 2;
  v5[6] = v10 + 2;
  *((_DWORD *)v5 + 17) = -1;
  v5[9] = 0;
  *v5 = v11 + 2;
  v5[10] = v4;
  v13 = sub_56DC80(v5 + 10);
  *((_BYTE *)v5 + 96) = 1;
  v5[11] = v13;
  v5[10] = v12;
  *((_DWORD *)v5 + 25) = 0;
  return v5;
}

// N5storm18DynamicTypeFactoryINS_4echo7session25SessionReJoinDelayMessageEEE, virtual slot 2
_QWORD *__fastcall sub_37F480(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // x0
  __int64 *v4; // x22
  _QWORD *v5; // x19
  __int64 **v6; // x20
  __int64 v7; // x0
  __int64 *v8; // x8
  __int64 v9; // x0
  __int64 *v10; // x8
  __int64 v11; // x9

  v3 = (_QWORD *)sub_56C9F0(80, 8, 1092624384, 0LL, a2, a3);
  v4 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v3 = ((__int64 *)((__int64*)goff_18F3010) + 2);
  v5 = v3;
  v3[1] = v4;
  v6 = (__int64 **)(v3 + 1);
  v7 = sub_56DC80(v3 + 1);
  v8 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  v5[2] = v7;
  *((_WORD *)v5 + 12) = 1;
  *v6 = v8;
  v5[6] = v4;
  v9 = sub_56DC80(v5 + 6);
  v10 = goff_18F2620;
  *((_BYTE *)v5 + 64) = 1;
  v11 = goff_18F34E0;
  v5[7] = v9;
  v5[6] = v10 + 2;
  *((_DWORD *)v5 + 17) = -1;
  v5[9] = 0;
  *v5 = v11 + 16;
  return v5;
}

// N5storm18DynamicTypeFactoryINS_4echo7session31SessionExitHostMigrationMessageEEE, virtual slot 2
_QWORD *__fastcall sub_37F690(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // x0
  __int64 *v4; // x22
  _QWORD *v5; // x19
  __int64 **v6; // x20
  __int64 v7; // x0
  __int64 *v8; // x8
  __int64 v9; // x0
  __int64 *v10; // x8
  __int64 *v11; // x9
  __int64 *v12; // x24
  __int64 v13; // x0

  v3 = (_QWORD *)sub_56C9F0(104, 8, 1092624384, 0LL, a2, a3);
  v4 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v3 = ((__int64 *)((__int64*)goff_18F3010) + 2);
  v5 = v3;
  v3[1] = v4;
  v6 = (__int64 **)(v3 + 1);
  v7 = sub_56DC80(v3 + 1);
  v8 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  v5[2] = v7;
  *((_WORD *)v5 + 12) = 1;
  *v6 = v8;
  v5[6] = v4;
  v9 = sub_56DC80(v5 + 6);
  v10 = goff_18F2620;
  *((_BYTE *)v5 + 64) = 1;
  v11 = ((__int64*)goff_18F34A0);
  v5[7] = v9;
  v12 = v10 + 2;
  v5[6] = v10 + 2;
  *((_DWORD *)v5 + 17) = -1;
  v5[9] = 0;
  *v5 = v11 + 2;
  v5[10] = v4;
  v13 = sub_56DC80(v5 + 10);
  *((_BYTE *)v5 + 96) = 1;
  v5[11] = v13;
  v5[10] = v12;
  *((_DWORD *)v5 + 25) = 0;
  return v5;
}

// N5storm18DynamicTypeFactoryINS_4echo7session26SessionHostTransferMessageEEE, virtual slot 2
_QWORD *__fastcall sub_37F8C0(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // x0
  __int64 *v4; // x22
  _QWORD *v5; // x19
  __int64 **v6; // x20
  __int64 v7; // x0
  __int64 *v8; // x8
  __int64 v9; // x0
  __int64 *v10; // x8
  __int64 v11; // x9
  __int64 *v12; // x24
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 *v15; // x8
  __int64 v16; // x0
  __int64 *v17; // x8

  v3 = (_QWORD *)sub_56C9F0(200, 8, 1092624384, 0LL, a2, a3);
  v4 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v3 = ((__int64 *)((__int64*)goff_18F3010) + 2);
  v5 = v3;
  v3[1] = v4;
  v6 = (__int64 **)(v3 + 1);
  v7 = sub_56DC80(v3 + 1);
  v8 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  v5[2] = v7;
  *((_WORD *)v5 + 12) = 1;
  *v6 = v8;
  v5[6] = v4;
  v9 = sub_56DC80(v5 + 6);
  v10 = goff_18F2620;
  *((_BYTE *)v5 + 64) = 1;
  v11 = ((__int64*)goff_18F3430);
  v5[7] = v9;
  v12 = v10 + 2;
  v5[6] = v10 + 2;
  *((_DWORD *)v5 + 17) = -1;
  v5[9] = 0;
  *v5 = v11 + 16;
  v5[10] = v4;
  v13 = sub_56DC80(v5 + 10);
  *((_BYTE *)v5 + 96) = 1;
  v5[11] = v13;
  v5[10] = v12;
  *((_DWORD *)v5 + 25) = 0;
  v5[13] = v4;
  v14 = sub_56DC80(v5 + 13);
  v15 = goff_18EEE10;
  v5[14] = v14;
  *((_WORD *)v5 + 60) = 1;
  v5[13] = v15 + 2;
  v5[16] = v4;
  v16 = sub_56DC80(v5 + 16);
  *((_BYTE *)v5 + 144) = 1;
  v17 = ((__int64 *)((__int64*)goff_18EED80) + 2);
  v5[17] = v16;
  v5[16] = v17;
  v5[20] = 0;
  v5[21] = 0;
  v5[19] = 0;
  v5[22] = v4;
  v5[23] = sub_56DC80(v5 + 22);
  *((_BYTE *)v5 + 192) = 1;
  v5[22] = ((__int64 *)goff_18F2678 + 2);
  *((_DWORD *)v5 + 49) = -1;
  return v5;
}

// N5storm18DynamicTypeFactoryINS_4echo7session28SessionPeerStreamOpenMessageEEE, virtual slot 2
_QWORD *__fastcall sub_3801B0(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // x0
  __int64 *v4; // x22
  _QWORD *v5; // x19
  __int64 **v6; // x20
  __int64 v7; // x0
  __int64 *v8; // x8
  __int64 v9; // x0
  __int64 *v10; // x8
  __int64 *v11; // x9

  v3 = (_QWORD *)sub_56C9F0(80, 8, 1092624384, 0LL, a2, a3);
  v4 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v3 = ((__int64 *)((__int64*)goff_18F3010) + 2);
  v5 = v3;
  v3[1] = v4;
  v6 = (__int64 **)(v3 + 1);
  v7 = sub_56DC80(v3 + 1);
  v8 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  v5[2] = v7;
  *((_WORD *)v5 + 12) = 1;
  *v6 = v8;
  v5[6] = v4;
  v9 = sub_56DC80(v5 + 6);
  v10 = goff_18F2620;
  *((_BYTE *)v5 + 64) = 1;
  v11 = ((__int64*)goff_18F34A8);
  v5[7] = v9;
  v5[6] = v10 + 2;
  *((_DWORD *)v5 + 17) = -1;
  v5[9] = 0;
  *v5 = v11 + 2;
  return v5;
}

// N5storm18DynamicTypeFactoryINS_4echo7session28SessionWaitingRestartMessageEEE, virtual slot 2
_QWORD *__fastcall sub_3803C0(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // x0
  __int64 *v4; // x22
  _QWORD *v5; // x19
  __int64 **v6; // x20
  __int64 v7; // x0
  __int64 *v8; // x8
  __int64 v9; // x0
  __int64 *v10; // x8
  __int64 *v11; // x9

  v3 = (_QWORD *)sub_56C9F0(80, 8, 1092624384, 0LL, a2, a3);
  v4 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v3 = ((__int64 *)((__int64*)goff_18F3010) + 2);
  v5 = v3;
  v3[1] = v4;
  v6 = (__int64 **)(v3 + 1);
  v7 = sub_56DC80(v3 + 1);
  v8 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  v5[2] = v7;
  *((_WORD *)v5 + 12) = 1;
  *v6 = v8;
  v5[6] = v4;
  v9 = sub_56DC80(v5 + 6);
  v10 = goff_18F2620;
  *((_BYTE *)v5 + 64) = 1;
  v11 = ((__int64*)goff_18F3018);
  v5[7] = v9;
  v5[6] = v10 + 2;
  *((_DWORD *)v5 + 17) = -1;
  v5[9] = 0;
  *v5 = v11 + 2;
  return v5;
}

__int64 __fastcall sub_3C7B10(__int64 **a1)
{
  __int64 *v1; // x9
  __int64 **v3; // x19
  __int64 *v4; // x10
  __int64 *v5; // x11
  __int64 *v6; // x0

  v1 = ((__int64 *)((__int64*)goff_18F4340) + 24);
  *(a1 - 1) = ((__int64 *)((__int64*)goff_18F4340) + 2);
  v3 = a1 - 1;
  *a1 = v1;
  v4 = ((__int64*)goff_18EDCD0);
  v5 = ((__int64 *)((__int64*)goff_18EDCD0) + 2);
  a1[8] = ((__int64 *)((__int64*)goff_18EDCC8) + 2);
  a1[9] = v5;
  a1[10] = v4 + 24;
  v6 = a1[17];
  a1[17] = nullptr;
  if ( v6 != nullptr )
    (*(void (__fastcall **)(__int64 *))(*v6 + 8))(v6);
  return sub_56CA00(v3, &unk_1326E41, 0);
}

// N5storm4echo5group11DropMessageE, virtual slot 16
void *__fastcall sub_3DC460(__int64 a1, _QWORD *a2)
{
  int v2; // w10
  void *result; // x0
  __int64 v5[4]; // [xsp+0h] [xbp-30h] BYREF
  int v6 __attribute__((aligned(8)));

  v2 = *(_DWORD *)(a1 + 124);
  v5[0] = (__int64)"reason";
  v5[1] = 6;
  v6 = v2;
  v5[3] = a1 + 80;
  v5[2] = (__int64)&v6;
  result = (void *)sub_57D530((__int64)a2, (__int64)v5);
  if ( ((unsigned __int8)result & 1) != 0 )
    return sub_57E130(v5, a2, 0);
  return result;
}

__int64 __fastcall sub_3E0590(__int64 *a1)
{
  __int64 v1; // x9
  __int64 *v3; // x19
  __int64 *v4; // x10
  __int64 *v5; // x11
  __int64 v6; // x0

  v1 = ((char *)((__int64*)goff_18F4890) + 192);
  *(a1 - 1) = ((char *)((__int64*)goff_18F4890) + 16);
  v3 = a1 - 1;
  *a1 = v1;
  v4 = ((__int64*)goff_18EDCD0);
  v5 = ((__int64 *)((__int64*)goff_18EDCD0) + 2);
  a1[8] = (__int64)(((__int64 *)((__int64*)goff_18EDCC8) + 2));
  a1[9] = (__int64)v5;
  a1[10] = (__int64)(v4 + 24);
  v6 = a1[17];
  a1[17] = 0;
  if ( v6 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  return sub_56CA00(v3, &unk_1326E41, 0);
}

// N5storm18StateMachineActionINS_4echo5group14PeerConnectionEEE, virtual slot 3
_QWORD *__fastcall sub_3E5540(_QWORD *a1)
{
  _QWORD *result; // x0
  __int64 v3; // x9

  result = (_QWORD *)sub_57D200(32, 8, 1092624390, 0LL, &unk_1326E41, 0);
  *result = ((char *)goff_18F4690 + 16);
  v3 = a1[2];
  result[1] = a1[1];
  result[2] = v3;
  result[3] = a1[3];
  return result;
}

// N5storm18StateMachineActionINS_4echo5group15GroupConnectionEEE, virtual slot 3
_QWORD *__fastcall sub_3E55D0(_QWORD *a1)
{
  _QWORD *result; // x0
  __int64 v3; // x9

  result = (_QWORD *)sub_57D200(32, 8, 1092624390, 0LL, &unk_1326E41, 0);
  *result = ((char *)goff_18F4728 + 16);
  v3 = a1[2];
  result[1] = a1[1];
  result[2] = v3;
  result[3] = a1[3];
  return result;
}

// N5storm4echo19ObjectBundleMessageE, virtual slot 0
__int64 __fastcall sub_419940(_QWORD *a1)
{
  __int64 *v1; // x8
  __int64 *v2; // x9

  v1 = ((__int64 *)((__int64*)goff_18F5BC8) + 24);
  v2 = ((__int64 *)((__int64*)goff_18F5A80) + 2);
  *a1 = ((__int64 *)((__int64*)goff_18F5BC8) + 2);
  a1[1] = v1;
  a1[9] = v2;
  return sub_583870((char *)(a1 + 10));
}

// N5storm4echo24UndeliveredMessagesEventE, virtual slot 0
__int64 __fastcall sub_423930(_QWORD *a1)
{
  __int64 *v1; // x8
  __int64 *v2; // x9

  v1 = ((__int64 *)((__int64*)goff_18F5A88) + 24);
  v2 = ((__int64 *)((__int64*)goff_18F5A80) + 2);
  *a1 = ((__int64 *)((__int64*)goff_18F5A88) + 2);
  a1[1] = v1;
  a1[9] = v2;
  return sub_583870((char *)(a1 + 10));
}

// N5storm4echo20InitialMementosEventE, virtual slot 0
__int64 __fastcall sub_424090(_QWORD *a1)
{
  __int64 *v1; // x8
  __int64 *v2; // x9

  v1 = ((__int64 *)goff_18F5C78 + 24);
  v2 = ((__int64 *)((__int64*)goff_18F5A80) + 2);
  *a1 = ((__int64 *)goff_18F5C78 + 2);
  a1[1] = v1;
  a1[9] = v2;
  return sub_583870((char *)(a1 + 10));
}

// N5storm4echo24AgentMementoHierarchicalE, virtual slot 2
__int64 __fastcall sub_42F830(_QWORD *a1)
{
  __int64 *v1; // x8

  v1 = ((__int64 *)((__int64*)goff_18F5FD0) + 44);
  *a1 = ((__int64 *)((__int64*)goff_18F5FD0) + 2);
  a1[1] = v1;
  sub_592460(a1 + 27);
  return sub_3C8740(a1);
}

// N5storm4echo24AgentMementoHierarchicalE, virtual slot 3
void __fastcall sub_42F870(_QWORD *a1)
{
  __int64 *v1; // x8

  v1 = ((__int64 *)((__int64*)goff_18F5FD0) + 44);
  *a1 = ((__int64 *)((__int64*)goff_18F5FD0) + 2);
  a1[1] = v1;
  sub_592460(a1 + 27);
  sub_3C8740(a1);
  _ZdlPv(a1);
}

__int64 __fastcall sub_42F8B0(__int64 **a1)
{
  __int64 *v1; // x8
  __int64 **v2; // x19

  v1 = ((__int64 *)((__int64*)goff_18F5FD0) + 44);
  *(a1 - 1) = ((__int64 *)((__int64*)goff_18F5FD0) + 2);
  v2 = a1 - 1;
  *a1 = v1;
  sub_592460(a1 + 26);
  return sub_3C8740(v2);
}

void __fastcall sub_42F8F0(__int64 **a1)
{
  __int64 *v1; // x8
  __int64 **v2; // x19

  v1 = ((__int64 *)((__int64*)goff_18F5FD0) + 44);
  *(a1 - 1) = ((__int64 *)((__int64*)goff_18F5FD0) + 2);
  v2 = a1 - 1;
  *a1 = v1;
  sub_592460(a1 + 26);
  sub_3C8740(v2);
  _ZdlPv(v2);
}

// N5storm18DynamicTypeFactoryINS_4echo28CServiceUnicastDataContainerEEE, virtual slot 2
_QWORD *__fastcall sub_4468A0(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // x0
  __int64 *v4; // x9
  _QWORD *v5; // x19
  _QWORD *v6; // x20

  v3 = (_QWORD *)sub_56C9F0(40, 8, 1092624384, 0LL, a2, a3);
  v4 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v3 = ((__int64 *)goff_18F5BB0 + 2);
  v5 = v3;
  v3[1] = v4;
  v6 = v3 + 1;
  v3[2] = sub_56DC80(v3 + 1);
  *((_WORD *)v5 + 12) = 1;
  *v6 = ((__int64 *)goff_18EEE10 + 2);
  *((_WORD *)v5 + 16) = 0;
  return v5;
}

// N5storm4echo19ObjectBundleMessageE, virtual slot 1
__int64 __fastcall sub_446940(_QWORD *a1)
{
  __int64 *v1; // x9
  __int64 *v2; // x8

  v1 = ((__int64*)goff_18F5A80);
  v2 = ((__int64 *)((__int64*)goff_18F5BC8) + 24);
  *a1 = ((__int64 *)((__int64*)goff_18F5BC8) + 2);
  a1[1] = v2;
  a1[9] = v1 + 2;
  sub_583870((char *)(a1 + 10));
  return sub_56CA00(a1, &unk_1326E41, 0);
}

__int64 __fastcall sub_446C40(__int64 **a1)
{
  __int64 *v1; // x8
  __int64 *v2; // x9

  v1 = ((__int64 *)((__int64*)goff_18F5BC8) + 24);
  v2 = ((__int64 *)((__int64*)goff_18F5A80) + 2);
  *(a1 - 1) = ((__int64 *)((__int64*)goff_18F5BC8) + 2);
  *a1 = v1;
  a1[8] = v2;
  return sub_583870((__int64)(a1 + 9));
}

__int64 __fastcall sub_446C70(__int64 **a1)
{
  __int64 *v1; // x9
  __int64 *v2; // x8
  __int64 **v3; // x19

  v1 = ((__int64*)goff_18F5A80);
  v2 = ((__int64 *)((__int64*)goff_18F5BC8) + 24);
  *(a1 - 1) = ((__int64 *)((__int64*)goff_18F5BC8) + 2);
  v3 = a1 - 1;
  *a1 = v2;
  a1[8] = v1 + 2;
  sub_583870((__int64)(a1 + 9));
  return sub_56CA00(v3, &unk_1326E41, 0);
}

// N5storm4echo24UndeliveredMessagesEventE, virtual slot 1
__int64 __fastcall sub_449E30(_QWORD *a1)
{
  __int64 *v1; // x9
  __int64 *v2; // x8

  v1 = ((__int64*)goff_18F5A80);
  v2 = ((__int64 *)((__int64*)goff_18F5A88) + 24);
  *a1 = ((__int64 *)((__int64*)goff_18F5A88) + 2);
  a1[1] = v2;
  a1[9] = v1 + 2;
  sub_583870((char *)(a1 + 10));
  return sub_56CA00(a1, &unk_1326E41, 0);
}

__int64 __fastcall sub_44A130(__int64 **a1)
{
  __int64 *v1; // x8
  __int64 *v2; // x9

  v1 = ((__int64 *)((__int64*)goff_18F5A88) + 24);
  v2 = ((__int64 *)((__int64*)goff_18F5A80) + 2);
  *(a1 - 1) = ((__int64 *)((__int64*)goff_18F5A88) + 2);
  *a1 = v1;
  a1[8] = v2;
  return sub_583870((__int64)(a1 + 9));
}

__int64 __fastcall sub_44A160(__int64 **a1)
{
  __int64 *v1; // x9
  __int64 *v2; // x8
  __int64 **v3; // x19

  v1 = ((__int64*)goff_18F5A80);
  v2 = ((__int64 *)((__int64*)goff_18F5A88) + 24);
  *(a1 - 1) = ((__int64 *)((__int64*)goff_18F5A88) + 2);
  v3 = a1 - 1;
  *a1 = v2;
  a1[8] = v1 + 2;
  sub_583870((__int64)(a1 + 9));
  return sub_56CA00(v3, &unk_1326E41, 0);
}

// N5storm4echo20InitialMementosEventE, virtual slot 1
__int64 __fastcall sub_44BA80(_QWORD *a1)
{
  __int64 *v1; // x9
  __int64 *v2; // x8

  v1 = ((__int64*)goff_18F5A80);
  v2 = ((__int64 *)goff_18F5C78 + 24);
  *a1 = ((__int64 *)goff_18F5C78 + 2);
  a1[1] = v2;
  a1[9] = v1 + 2;
  sub_583870((char *)(a1 + 10));
  return sub_56CA00(a1, &unk_1326E41, 0);
}

__int64 __fastcall sub_44BD80(__int64 **a1)
{
  __int64 *v1; // x8
  __int64 *v2; // x9

  v1 = ((__int64 *)goff_18F5C78 + 24);
  v2 = ((__int64 *)((__int64*)goff_18F5A80) + 2);
  *(a1 - 1) = ((__int64 *)goff_18F5C78 + 2);
  *a1 = v1;
  a1[8] = v2;
  return sub_583870((__int64)(a1 + 9));
}

__int64 __fastcall sub_44BDB0(__int64 **a1)
{
  __int64 *v1; // x9
  __int64 *v2; // x8
  __int64 **v3; // x19

  v1 = ((__int64*)goff_18F5A80);
  v2 = ((__int64 *)goff_18F5C78 + 24);
  *(a1 - 1) = ((__int64 *)goff_18F5C78 + 2);
  v3 = a1 - 1;
  *a1 = v2;
  a1[8] = v1 + 2;
  sub_583870((__int64)(a1 + 9));
  return sub_56CA00(v3, &unk_1326E41, 0);
}

// N5storm4echo18RejectReplicaEventE, virtual slot 5
_QWORD *__fastcall sub_44E440(__int64 a1)
{
  _QWORD *v2; // x20
  __int64 *v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8

  v2 = (_QWORD *)sub_56C9F0(80, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)goff_18F5D10 + 24);
  v4 = ((__int64 *)((__int64*)goff_18EE438) + 2);
  *v2 = ((__int64 *)goff_18F5D10 + 2);
  v2[1] = v3;
  v2[4] = v4;
  sub_57F070(v2 + 5, a1 + 40);
  v5 = ((__int64 *)((__int64*)goff_18EE440) + 24);
  v2[5] = ((__int64 *)((__int64*)goff_18EE440) + 2);
  v2[6] = v5;
  v2[9] = *(_QWORD *)(a1 + 72);
  sub_57F1B0(v2 + 5, v2 + 1);
  return v2;
}

// N5storm18DynamicTypeFactoryINS_4echo18RejectReplicaEventEEE, virtual slot 2
_QWORD *__fastcall sub_44E5C0(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // x19
  __int64 (__fastcall **v4)(); // x0
  __int64 *v5; // x9
  __int64 *v6; // x8
  __int64 *v7; // x8

  v3 = (_QWORD *)sub_56C9F0(80, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_57F050(v3, v4);
  v5 = ((__int64*)goff_18EE438);
  v6 = ((__int64 *)goff_18F5D10 + 24);
  *v3 = ((__int64 *)goff_18F5D10 + 2);
  v3[1] = v6;
  v3[4] = v5 + 2;
  sub_57F050(v3 + 5, v3 + 1);
  v7 = ((__int64 *)((__int64*)goff_18EE440) + 24);
  v3[5] = ((__int64 *)((__int64*)goff_18EE440) + 2);
  v3[6] = v7;
  v3[9] = -1;
  return v3;
}

// N5storm18DynamicTypeFactoryINS_4echo18RejectReplicaEventEEE, virtual slot 3
_QWORD *__fastcall sub_44E660(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD *v5; // x20
  __int64 *v6; // x9
  __int64 *v7; // x8
  __int64 *v8; // x8

  v5 = (_QWORD *)sub_56C9F0(80, 8, 1092624384, 0LL, a3, a4);
  sub_57F050(v5, a2);
  v6 = ((__int64*)goff_18EE438);
  v7 = ((__int64 *)goff_18F5D10 + 24);
  *v5 = ((__int64 *)goff_18F5D10 + 2);
  v5[1] = v7;
  v5[4] = v6 + 2;
  sub_57F050(v5 + 5, v5 + 1);
  v8 = ((__int64 *)((__int64*)goff_18EE440) + 24);
  v5[5] = ((__int64 *)((__int64*)goff_18EE440) + 2);
  v5[6] = v8;
  v5[9] = -1;
  return v5;
}

// N5storm18StateMachineActionINS_4echo19ObjectLoopbackStateEEE, virtual slot 3
_QWORD *__fastcall sub_45A090(_QWORD *a1)
{
  _QWORD *result; // x0
  __int64 v3; // x9

  result = (_QWORD *)sub_57D200(32, 8, 1092624390, 0LL, &unk_1326E41, 0);
  *result = ((char *)goff_18F5AD8 + 16);
  v3 = a1[2];
  result[1] = a1[1];
  result[2] = v3;
  result[3] = a1[3];
  return result;
}

// N5storm18StateMachineActionINS_4echo9multicast11ObjectStateEEE, virtual slot 3
_QWORD *__fastcall sub_45D5D0(_QWORD *a1)
{
  _QWORD *result; // x0
  __int64 v3; // x9

  result = (_QWORD *)sub_57D200(32, 8, 1092624390, 0LL, &unk_1326E41, 0);
  *result = ((char *)goff_18F5F28 + 16);
  v3 = a1[2];
  result[1] = a1[1];
  result[2] = v3;
  result[3] = a1[3];
  return result;
}

// N5storm18DynamicTypeFactoryINS_16NetPropertyLocalINSt3__13mapINS_32SimpleMatchmakingSessionMetadata30MatchmakingSessionMetadataKeysEiNS2_4lessIS5_EENS_9AllocatorINS2_4pairIKS5_iEELi1092677632ELj0EEEEEEEEE, virtual slot 2
__int64 **__fastcall sub_48A200(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 **v3; // x19
  __int64 (__fastcall **v4)(); // x0
  __int64 *v5; // x10
  __int64 *v6; // x8

  v3 = (__int64 **)sub_56C9F0(56, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_57F050(v3, v4);
  v5 = ((__int64 *)goff_18F7040 + 2);
  v6 = ((__int64 *)goff_18F7040 + 24);
  v3[6] = nullptr;
  *v3 = v5;
  v3[1] = v6;
  v3[5] = nullptr;
  v3[4] = (__int64 *)(v3 + 5);
  return v3;
}

// N5storm18DynamicTypeFactoryINS_16NetPropertyLocalINSt3__13mapINS_32SimpleMatchmakingSessionMetadata30MatchmakingSessionMetadataKeysEiNS2_4lessIS5_EENS_9AllocatorINS2_4pairIKS5_iEELi1092677632ELj0EEEEEEEEE, virtual slot 3
__int64 **__fastcall sub_48A280(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 **v5; // x20
  __int64 *v6; // x10
  __int64 *v7; // x8

  v5 = (__int64 **)sub_56C9F0(56, 8, 1092624384, 0LL, a3, a4);
  sub_57F050(v5, a2);
  v6 = ((__int64 *)goff_18F7040 + 2);
  v7 = ((__int64 *)goff_18F7040 + 24);
  v5[6] = nullptr;
  *v5 = v6;
  v5[1] = v7;
  v5[5] = nullptr;
  v5[4] = (__int64 *)(v5 + 5);
  return v5;
}

// N5storm18DynamicTypeFactoryINS_16NetPropertyLocalINSt3__13mapINS_32SimpleMatchmakingSessionMetadata30MatchmakingSessionMetadataKeysEdNS2_4lessIS5_EENS_9AllocatorINS2_4pairIKS5_dEELi1092677632ELj0EEEEEEEEE, virtual slot 2
__int64 **__fastcall sub_48B3F0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 **v3; // x19
  __int64 (__fastcall **v4)(); // x0
  __int64 *v5; // x10
  __int64 *v6; // x8

  v3 = (__int64 **)sub_56C9F0(56, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_57F050(v3, v4);
  v5 = ((__int64 *)goff_18F7050 + 2);
  v6 = ((__int64 *)goff_18F7050 + 24);
  v3[6] = nullptr;
  *v3 = v5;
  v3[1] = v6;
  v3[5] = nullptr;
  v3[4] = (__int64 *)(v3 + 5);
  return v3;
}

// N5storm18DynamicTypeFactoryINS_16NetPropertyLocalINSt3__13mapINS_32SimpleMatchmakingSessionMetadata30MatchmakingSessionMetadataKeysEdNS2_4lessIS5_EENS_9AllocatorINS2_4pairIKS5_dEELi1092677632ELj0EEEEEEEEE, virtual slot 3
__int64 **__fastcall sub_48B470(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 **v5; // x20
  __int64 *v6; // x10
  __int64 *v7; // x8

  v5 = (__int64 **)sub_56C9F0(56, 8, 1092624384, 0LL, a3, a4);
  sub_57F050(v5, a2);
  v6 = ((__int64 *)goff_18F7050 + 2);
  v7 = ((__int64 *)goff_18F7050 + 24);
  v5[6] = nullptr;
  *v5 = v6;
  v5[1] = v7;
  v5[5] = nullptr;
  v5[4] = (__int64 *)(v5 + 5);
  return v5;
}

// N5storm18DynamicTypeFactoryINS_16NetPropertyLocalINSt3__13mapINS_32SimpleMatchmakingSessionMetadata30MatchmakingSessionMetadataKeysENS2_12basic_stringIcNS2_11char_traitsIcEENS_9AllocatorIcLi1092620295ELj0EEEEENS2_4lessIS5_EENS9_INS2_4pairIKS5_SB_EELi1092677632ELj0EEEEEEEEE, virtual slot 2
__int64 *__fastcall sub_48C800(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 *v3; // x19
  __int64 (__fastcall **v4)(); // x0
  __int64 v5; // x10
  __int64 v6; // x8

  v3 = (__int64 *)sub_56C9F0(56, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_57F050(v3, v4);
  v5 = ((char *)goff_18F7060 + 16);
  v6 = ((char *)goff_18F7060 + 192);
  v3[6] = 0;
  *v3 = v5;
  v3[1] = v6;
  v3[5] = 0;
  v3[4] = (__int64)(v3 + 5);
  return v3;
}

// N5storm18DynamicTypeFactoryINS_16NetPropertyLocalINSt3__13mapINS_32SimpleMatchmakingSessionMetadata30MatchmakingSessionMetadataKeysENS2_12basic_stringIcNS2_11char_traitsIcEENS_9AllocatorIcLi1092620295ELj0EEEEENS2_4lessIS5_EENS9_INS2_4pairIKS5_SB_EELi1092677632ELj0EEEEEEEEE, virtual slot 3
__int64 *__fastcall sub_48C880(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 *v5; // x20
  __int64 v6; // x10
  __int64 v7; // x8

  v5 = (__int64 *)sub_56C9F0(56, 8, 1092624384, 0LL, a3, a4);
  sub_57F050(v5, a2);
  v6 = ((char *)goff_18F7060 + 16);
  v7 = ((char *)goff_18F7060 + 192);
  v5[6] = 0;
  *v5 = v6;
  v5[1] = v7;
  v5[5] = 0;
  v5[4] = (__int64)(v5 + 5);
  return v5;
}

void __fastcall sub_4A1CC0(_QWORD *a1)
{
  __int64 v2; // x10
  __int64 v3; // x11
  __int64 v4; // x8
  __int64 *v6; // x8

  sub_47C170();
  v2 = ((char *)((__int64*)goff_18F7A68) + 1072);
  v3 = ((char *)((__int64*)goff_18F7A68) + 1200);
  v4 = ((char *)((__int64*)goff_18F7A68) + 1264);
  *a1 = ((char *)((__int64*)goff_18F7A68) + 16);
  a1[11] = v2;
  a1[12] = v3;
  a1[13] = v4;
  sub_5771E0(a1 + 14, 0LL, (__int64)&unk_1326E41, 0, 0, 0LL);
  v6 = ((__int64*)goff_18F6CD8);
  a1[18] = a1 + 13;
  a1[14] = v6 + 2;
  return;
}

// N5storm22SimpleObjectDescriptor22ResolveConflictFunctorE, virtual slot 5
_QWORD *__fastcall sub_4B59C0(__int64 a1)
{
  _QWORD *v2; // x20
  __int64 *v3; // x8

  v2 = (_QWORD *)sub_56C9F0(32, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)goff_18F7D20 + 25);
  *v2 = ((__int64 *)goff_18F7D20 + 2);
  v2[1] = v3;
  return v2;
}

// N5storm2mm5TimerE, virtual slot 2
__int64 __fastcall sub_4F39D0(__int64 result, __int64 a2)
{
  __int64 v2; // x19
  _BYTE *v3; // x22
  _QWORD *v5; // x20
  unsigned __int64 v6; // x9
  double v7; // d0

  v2 = *(_QWORD *)((__int64*)goff_18F9358);
  v3 = (_BYTE *)goff_18F88D8;
  v5 = (_QWORD *)result;
  if ( *(char*)goff_18F88D8 == 0 )
    result = sub_4EE210(*(_QWORD *)((__int64*)goff_18F9358));
  *(_QWORD *)a2 = v5[4];
  *(_QWORD *)(a2 + 8) = v5[5];
  *(_QWORD *)(a2 + 16) = v5[6];
  v6 = v5[7];
  if ( v6 != 0 )
    v7 = (double)(unsigned __int64)v5[4] / (double)v6;
  else
    v7 = 0.0;
  *(double *)(a2 + 32) = v7;
  *(_QWORD *)(a2 + 24) = v5[7];
  v5[4] = 0;
  v5[5] = -1;
  v5[6] = 0;
  v5[7] = 0;
  if ( *v3 == 0 )
    return sub_4EE230(v2);
  return result;
}

char *__fastcall sub_4F8270(char *a1, const char **a2)
{
  __int64 v4; // x21
  char *result; // x0
  const char *v6; // x20
  __int64 v7; // x8
  int v8; // w0
  int v9; // w21
  char *v10; // x0

  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = a1 + 24;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = a1 + 48;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = a1 + 72;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_WORD *)(a1 + 96) = 256;
  *(_BYTE *)(a1 + 98) = 0;
  v4 = sub_4EB320(128, &unk_1326E41, 0);
  result = (char *)sub_4FABF0(v4);
  *(_QWORD *)a1 = v4;
  v6 = *a2;
  v7 = *(_QWORD *)(a1 + 88);
  if ( v7 != 0 )
  {
    result = (char *)sub_37030(v7 - 4);
    *(_QWORD *)(a1 + 88) = 0;
    *(_BYTE *)(a1 + 97) = 0;
  }
  if ( v6 != nullptr )
  {
    v8 = strlen(v6);
    v9 = v8 + 1;
    v10 = (char *)sub_36EA0(v8 + 5, 4u, 0, 1095761920);
    *(_DWORD *)v10 = v9;
    v10 += 4;
    *(_QWORD *)(a1 + 88) = v10;
    result = strcpy(v10, v6);
    *(_WORD *)(a1 + 96) = 256;
    *(_BYTE *)(a1 + 98) = 0;
  }
  return result;
}

char *__fastcall sub_4F83D0(char *a1, const char *a2)
{
  __int64 v4; // x21
  char *result; // x0
  __int64 v6; // x8
  int v7; // w0
  int v8; // w21
  char *v9; // x0

  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = a1 + 24;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = a1 + 48;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = a1 + 72;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_WORD *)(a1 + 96) = 256;
  *(_BYTE *)(a1 + 98) = 0;
  v4 = sub_4EB320(128, &unk_1326E41, 0);
  result = (char *)sub_4FABF0(v4);
  v6 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)a1 = v4;
  if ( v6 != 0 )
  {
    result = (char *)sub_37030(v6 - 4);
    *(_QWORD *)(a1 + 88) = 0;
    *(_BYTE *)(a1 + 97) = 0;
  }
  if ( a2 != nullptr )
  {
    v7 = strlen(a2);
    v8 = v7 + 1;
    v9 = (char *)sub_36EA0(v7 + 5, 4u, 0, 1095761920);
    *(_DWORD *)v9 = v8;
    v9 += 4;
    *(_QWORD *)(a1 + 88) = v9;
    result = strcpy(v9, a2);
    *(_WORD *)(a1 + 96) = 256;
    *(_BYTE *)(a1 + 98) = 0;
  }
  return result;
}

__int64 __fastcall sub_5046A0(_QWORD *a1)
{
  __int64 v2; // x0
  __int64 result; // x0
  __int64 v4; // x20
  unsigned int v5; // w0
  _QWORD v8[2]; // [xsp+50h] [xbp-30h] BYREF
  _QWORD v7[5]; // [xsp+28h] [xbp-58h] BYREF
  _QWORD v6[5]; // [xsp+0h] [xbp-80h] BYREF

  sub_505AE0((__int64)a1, 5, 64);
  *a1 = ((__int64 *)((__int64*)goff_18F9498) + 2);
  a1[7] = 0;
  a1[8] = 0;
  v2 = sub_4FB9D0(a1 + 9, 1024);
  a1[13] = 0;
  result = sub_1E5500(v2);
  a1[7] = result;
  if ( result != 0 )
  {
    v8[0] = 0x45434C5D4D264443LL;
    v8[1] = 0x2E1B273B5A584837LL;
    sub_505DA0(v7, (__int64)v8, 16);
    v4 = sub_505FC0(v7);
    v8[0] = 0x45434C5D4D264443LL;
    v8[1] = 0x2E1B273B5A584837LL;
    sub_505DA0(v6, (__int64)v8, 16);
    v5 = sub_505FB0(v6);
    (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 64LL))(a1, v4, v5);
    sub_505EE0(v6);
    return sub_505EE0(v7);
  }
  return result;
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

__int64 __fastcall sub_51C020(_QWORD *a1)
{
  void *v1; // x21
  __int64 *v3; // x20
  unsigned __int64 v4; // x8
  _QWORD *v5; // x10
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v9[3]; // [xsp+8h] [xbp-38h] BYREF

  v1 = goff_18F87A8;
  v3 = (__int64 *)((char *)goff_18F87A8 + 16);
  if ( *(char*)goff_18F87A0 != 0 )
  {
    v4 = *(unsigned int *)sub_4D6990(*((__int64*)goff_18F87B0));
    if ( (_DWORD)v4 != 0 )
    {
      v5 = *(_QWORD **)((char *)((char *)0x80) + (_QWORD)v1);
      if ( v4 >= (__int64)(v5[1] - *v5) >> 3 )
      {
        sub_4EDA40( 0LL, 0, 3758096387LL, 0);
        v6 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_8;
      }
      v3 = (__int64 *)(*(_QWORD *)(*v5 + 8 * v4) + 8LL);
    }
  }
  v6 = *v3;
  if ( *v3 != 0 )
  {
LABEL_8:
    v7 = *(_QWORD *)(v6 + 16);
    goto LABEL_9;
  }
  v7 = 0;
LABEL_9:
  sub_50B700(v7, a1 + 54);
  v9[0] = (__int64)((__int64*)goff_18F9740);
  v9[1] = 0;
  v9[2] = (__int64)&unk_1326E41;
  return sub_51D3A0(a1, v9);
}

// N5storm2mm18JobConnectEndPointE, virtual slot 14
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

__int64 __fastcall sub_51D050(char *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // x8
  void *v7; // x22
  __int64 *v8; // x21
  unsigned __int64 v9; // x8
  _QWORD *v10; // x10
  char *v11; // x8
  char *v12; // x21
  __int64 v13; // x20
  _QWORD *v14; // x0
  __int64 v15; // x8

  sub_4F47B0(a1, a2, a4);
  v6 = ((__int64*)goff_18F9798);
  *(_QWORD *)a1 = v6 + 16;
  *(_QWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 132) = a3;
  v7 = goff_18F87A8;
  v8 = (__int64 *)((char *)goff_18F87A8 + 32);
  if ( *(char*)goff_18F87A0 != 0 )
  {
    v9 = *(unsigned int *)sub_4D6990(*((__int64*)goff_18F87B0));
    if ( (_DWORD)v9 != 0 )
    {
      v10 = *(_QWORD **)((char *)((char *)0x80) + (_QWORD)v7);
      if ( v9 >= (__int64)(v10[1] - *v10) >> 3 )
      {
        sub_4EDA40( 0LL, 0, 3758096387LL, 0);
        v11 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_7;
      }
      v8 = (__int64 *)(*(_QWORD *)(*v10 + 8 * v9) + 24LL);
    }
  }
  v11 = *v8;
LABEL_7:
  v12 = *(_QWORD *)(v11 + 16);
  sub_4F4A80(v12);
  v13 = sub_4F6A30(*(_QWORD *)(v12 + 24), a3);
  v14 = (_QWORD *)sub_4EB320(40, &unk_1326E41, 0);
  v15 = ((__int64*)goff_18F97A0);
  v14[2] = 96;
  v14[3] = 1;
  v14[4] = v13;
  *v14 = v15 + 16;
  v14[1] = a1;
  return sub_4ED570(v13, v14, 0, 0);
}

__int64 __fastcall sub_51D320(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // x0
  __int64 v7; // x8
  __int64 (__fastcall *v8)(); // x9

  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  v6 = (_QWORD *)sub_4EB320(40, &unk_1326E41, 0);
  v7 = goff_18F97A8;
  v8 = goff_18F97B0;
  v6[3] = 0;
  v6[4] = a3;
  v6[1] = a1;
  v6[2] = v8;
  *v6 = v7 + 16;
  return sub_4ED570(a2, v6, 0, 1);
}

_QWORD *__fastcall sub_521C40(_QWORD *result)
{
  *result = ((char *)((__int64*)goff_18F9858) + 16);
  result[2] = 0;
  result[1] = result + 2;
  result[6] = 0;
  result[5] = 0;
  result[3] = 0;
  result[4] = result + 5;
  return result;
}

__int64 __fastcall sub_52E540(__int64 a1)
{
  _BYTE v4[104]; // [xsp+18h] [xbp-78h] BYREF
  _QWORD v3[3]; // [xsp+0h] [xbp-90h] BYREF

  sub_5206E0(*(_QWORD *)(*(_QWORD *)(a1 + 144) + 208LL), 0LL);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 144) + 32LL))(*(_QWORD *)(a1 + 144));
  sub_4F81E0(v4);
  sub_4F8660(*(_QWORD *)(a1 + 144) + 272LL, v4);
  if ( *(_BYTE *)(a1 + 168) != 0 )
  {
    sub_4F48F0(a1);
  }
  else
  {
    v3[0] = ((__int64*)goff_18F9980);
    v3[1] = 0;
    v3[2] = &unk_1326E41;
    sub_51D3A0(a1, v3);
  }
  return sub_4F8720(v4);
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

_QWORD *__fastcall sub_54CB20(_QWORD *a1)
{
  __int64 v2; // x20
  _QWORD *result; // x0

  *a1 = ((__int64 *)((__int64*)goff_18F9C08) + 2);
  a1[1] = 0;
  v2 = sub_57D200(392, 8, 1092624393, 0LL, &unk_1326E41, 0);
  result = sub_54DC00(v2);
  a1[1] = v2;
  return result;
}

// N5storm6LoggerE, virtual slot 0
__int64 __fastcall sub_554710(_QWORD *a1)
{
  __int64 v1; // x20
  __int64 i; // x22

  *a1 = ((char *)((__int64*)goff_18F9C70) + 16);
  v1 = a1[1];
  a1[1] = 0;
  if ( v1 != 0 )
  {
    for ( i = 2208; i != 0; i -= 24 )
    {
      if ( (*(_BYTE *)(v1 + i - 24) & 1) != 0 )
        sub_56CA00(*(_QWORD *)(v1 + i - 8), &unk_1326E41, 0);
    }
    sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
  }
  return sub_57D230(a1);
}

// N5storm6LoggerE, virtual slot 1
void __fastcall sub_554830(_QWORD *a1)
{
  __int64 v1; // x20
  __int64 i; // x22

  *a1 = ((char *)((__int64*)goff_18F9C70) + 16);
  v1 = a1[1];
  a1[1] = 0;
  if ( v1 != 0 )
  {
    for ( i = 2208; i != 0; i -= 24 )
    {
      if ( (*(_BYTE *)(v1 + i - 24) & 1) != 0 )
        sub_56CA00(*(_QWORD *)(v1 + i - 8), &unk_1326E41, 0);
    }
    sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
  }
  sub_57D230(a1);
  _ZdlPv(a1);
}

// N5storm10NullLoggerE, virtual slot 0
__int64 __fastcall sub_55D160(_QWORD *a1)
{
  __int64 v1; // x20
  __int64 i; // x22

  *a1 = ((char *)((__int64*)goff_18F9C70) + 16);
  v1 = a1[1];
  a1[1] = 0;
  if ( v1 != 0 )
  {
    for ( i = 2208; i != 0; i -= 24 )
    {
      if ( (*(_BYTE *)(v1 + i - 24) & 1) != 0 )
        sub_56CA00(*(_QWORD *)(v1 + i - 8), &unk_1326E41, 0);
    }
    sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
  }
  return sub_57D230(a1);
}

// N5storm10NullLoggerE, virtual slot 1
void __fastcall sub_55D1F0(_QWORD *a1)
{
  __int64 v1; // x20
  __int64 i; // x22

  *a1 = ((char *)((__int64*)goff_18F9C70) + 16);
  v1 = a1[1];
  a1[1] = 0;
  if ( v1 != 0 )
  {
    for ( i = 2208; i != 0; i -= 24 )
    {
      if ( (*(_BYTE *)(v1 + i - 24) & 1) != 0 )
        sub_56CA00(*(_QWORD *)(v1 + i - 8), &unk_1326E41, 0);
    }
    sub_57EDC0(v1, 0LL, &unk_1326E41, 0);
  }
  sub_57D230(a1);
  _ZdlPv(a1);
}

// N5storm20IDynamicTypeRegistryE, virtual slot 0
void __fastcall sub_55D8A0(_QWORD *result)
{
  __int64 *v1; // x19
  _QWORD *v2; // x0
  _QWORD *v3; // x21
  __int64 v4; // x0

  *result = ((char *)goff_18F9D60 + 16);
  v1 = (__int64 *)result[1];
  result[1] = 0;
  if ( v1 != nullptr )
  {
    v2 = (_QWORD *)v1[2];
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
    v4 = *v1;
    *v1 = 0;
    if ( v4 != 0 )
      sub_56CA00(v4, &unk_1326E41, 0);
    { sub_57EDC0(v1, 0LL, &unk_1326E41, 0); return; }
  }
  return;
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

int __fastcall sub_562900(char *a1, unsigned __int16 a2, char *a3)
{
  char *v3; // x19
  char *v7; // x9
  __int64 v8; // x22
  __int64 v9; // t1
  char *v10; // x8
  unsigned int v11; // w10
  bool v12; // cf
  _BOOL4 v13; // w10
  unsigned int v14; // w20
  __int64 v15; // x9
  __int64 v16; // x10

  v3 = (char *)(a1 + 72);
  std__shared_timed_mutex__lock_shared((char *)(a1 + 72));
  v9 = *(_QWORD *)(a1 + 56);
  v8 = a1 + 56;
  v7 = v9;
  if ( v9 == 0 )
    goto LABEL_9;
  v10 = v8;
  do
  {
    v11 = *(unsigned __int16 *)(v7 + 26);
    v12 = v11 >= a2;
    v13 = v11 < a2;
    if ( v12 )
      v10 = v7;
    v7 = *(_QWORD *)(v7 + 8LL * v13);
  }
  while ( v7 != 0 );
  if ( v10 != v8 && *(unsigned __int16 *)(v10 + 26) <= (unsigned int)a2 )
  {
    v15 = *(_QWORD *)(v10 + 28);
    v16 = *(_QWORD *)(v10 + 36);
    *(_DWORD *)(a3 + 15) = *(_DWORD *)(v10 + 43);
    *(_QWORD *)a3 = v15;
    *(_QWORD *)(a3 + 8) = v16;
    v14 = 1;
  }
  else
  {
LABEL_9:
    v14 = 0;
  }
  std__shared_timed_mutex__unlock_shared(v3);
  return v14;
}

// N5storm8internal23NullDynamicTypeRegistryE, virtual slot 1
void __fastcall sub_57F500(_QWORD *a1)
{
  __int64 *v1; // x20
  _QWORD *v3; // x0
  _QWORD *v4; // x22
  __int64 v5; // x0

  *a1 = ((char *)goff_18F9D60 + 16);
  v1 = (__int64 *)a1[1];
  a1[1] = 0;
  if ( v1 != nullptr )
  {
    v3 = (_QWORD *)v1[2];
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
    v5 = *v1;
    *v1 = 0;
    if ( v5 != 0 )
      sub_56CA00(v5, &unk_1326E41, 0);
    sub_37030(v1);
  }
  _ZdlPv(a1);
}

__int64 __fastcall sub_58CF10(__int64 **a1)
{
  __int64 *v1; // x8
  __int64 **v2; // x19

  v1 = ((__int64*)goff_18EE498) + 24;
  *(a1 - 1) = ((__int64 *)((__int64*)goff_18EE498) + 2);
  v2 = a1 - 1;
  *a1 = v1;
  sub_576000(a1 + 3);
  return sub_56CA00(v2, &unk_1326E41, 0);
}

// N5storm18DynamicTypeFactoryINS_24NetPropertyDataContainerEEE, virtual slot 3
_QWORD *__fastcall sub_58F650(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD *v5; // x20
  __int64 *v6; // x8

  v5 = (_QWORD *)sub_56C9F0(88, 8, 1092624384, 0LL, a3, a4);
  sub_57F050(v5, a2);
  v6 = ((__int64 *)((__int64*)goff_18EE498) + 24);
  *v5 = ((__int64 *)((__int64*)goff_18EE498) + 2);
  v5[1] = v6;
  sub_575CE0(v5 + 4);
  return v5;
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

void sub_592810(__int64 result, _QWORD *a2)
{
  __int64 v2; // x9
  __int64 v3; // x20
  __int64 v4; // x21
  __int64 v5; // x19

  v2 = ~a2[3];
  v3 = a2[6];
  v4 = a2[7];
  a2[2] = ~a2[2];
  a2[3] = v2;
  if ( v3 != v4 )
  {
    v5 = result;
    do
    {
      sub_592810(v5, v3);
      v3 += 104;
    }
    while ( v4 != v3 );
  }
  return;
}

__int64 __fastcall sub_5B8C10(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // x21
  __int64 *v7; // x8
  _QWORD *v8; // x20
  __int64 *v9; // x9
  __int64 *v10; // x8
  __int64 v11; // x22
  __int64 i; // x23

  *a1 = ((__int64 *)((__int64*)goff_18FAC58) + 2);
  v5 = a1 + 1;
  sub_57F070(a1 + 1, a3 + 8);
  v7 = ((__int64*)goff_18FAC60) + 24;
  *v5 = ((__int64 *)((__int64*)goff_18FAC60) + 2);
  a1[2] = v7;
  v8 = a1 + 2;
  sub_5C6FC0((char *)(v8 + 3), (__int64 *)(a3 + 40));
  sub_57F070(v8 + 6, a3 + 64);
  v9 = ((__int64 *)((__int64*)goff_18FAC68) + 2);
  v10 = ((__int64*)goff_18FAC68) + 24;
  v8[10] = v8 + 3;
  v8[6] = v9;
  v8[11] = v5;
  v8[7] = v10;
  sub_57F1B0(v8 + 6, v8);
  v11 = v8[3];
  for ( i = v8[4]; v11 != i; v11 += 208 )
    sub_57F1B0(v11, v8);
  return sub_57F1B0(v5, a2);
}

__int64 __fastcall sub_5BEFF0(__int64 **a1)
{
  __int64 *v1; // x9
  __int64 *v2; // x8
  __int64 result; // x0
  char *v5; // x19
  unsigned __int64 *v6; // x8
  unsigned __int64 v7; // x9

  v1 = ((__int64*)goff_18EDC88);
  v2 = ((__int64 *)goff_18F3F00 + 24);
  *(a1 - 1) = ((__int64 *)goff_18F3F00 + 2);
  *a1 = v2;
  a1[19] = v1 + 2;
  result = sub_781380((__int64)(a1 + 20));
  v5 = (char *)a1[18];
  if ( v5 != nullptr )
  {
    v6 = (unsigned __int64 *)((char *)v5 + 8);
    v7 = __atomic_fetch_sub(v6, 1, 5);
    if ( v7 == 0 )
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 16LL))(v5);
      return std____shared_weak_count____release_weak(v5);
    }
  }
  return result;
}

__int64 __fastcall sub_5BF080(__int64 **a1)
{
  __int64 *v1; // x9
  __int64 *v2; // x8
  __int64 **v4; // x19
  char *v5; // x20
  unsigned __int64 *v6; // x8
  unsigned __int64 v7; // x9

  v1 = ((__int64*)goff_18EDC88);
  v2 = ((__int64 *)goff_18F3F00 + 24);
  *(a1 - 1) = ((__int64 *)goff_18F3F00 + 2);
  v4 = a1 - 1;
  *a1 = v2;
  a1[19] = v1 + 2;
  sub_781380((__int64)(a1 + 20));
  v5 = (char *)a1[18];
  if ( v5 != nullptr )
  {
    v6 = (unsigned __int64 *)((char *)v5 + 8);
    v7 = __atomic_fetch_sub(v6, 1, 5);
    if ( v7 == 0 )
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 16LL))(v5);
      std____shared_weak_count____release_weak(v5);
    }
  }
  return sub_56CA00(v4, &unk_1326E41, 0);
}

// N5storm17NetPropertyVectorINS_15NetPropertyDataINS_9IPAddressENS_20NetPropertyDataTraitIS2_EEEELm0EEE, virtual slot 5
_QWORD *__fastcall sub_5C5CB0(__int64 a1)
{
  _QWORD *v2; // x19
  __int64 *v3; // x8
  __int64 *v4; // x9
  __int64 *v5; // x8
  __int64 v6; // x21
  __int64 i; // x22

  v2 = (_QWORD *)sub_56C9F0(104, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)((__int64*)goff_18FAC60) + 24);
  *v2 = ((__int64 *)((__int64*)goff_18FAC60) + 2);
  v2[1] = v3;
  sub_5C6FC0((char *)(v2 + 4), (__int64 *)(a1 + 32));
  sub_57F070(v2 + 7, a1 + 56);
  v4 = ((__int64 *)((__int64*)goff_18FAC68) + 2);
  v5 = ((__int64 *)((__int64*)goff_18FAC68) + 24);
  v2[11] = v2 + 4;
  v2[7] = v4;
  v2[12] = v2;
  v2[8] = v5;
  sub_57F1B0(v2 + 7, v2 + 1);
  v6 = v2[4];
  for ( i = v2[5]; v6 != i; v6 += 208 )
    sub_57F1B0(v6, v2 + 1);
  return v2;
}

// N5storm17NetPropertyVectorINS_15NetPropertyDataINS_9IPAddressENS_20NetPropertyDataTraitIS2_EEEELm0EE10VectorSizeE, virtual slot 5
_QWORD *__fastcall sub_5C64B0(__int64 a1)
{
  _QWORD *v2; // x20
  __int64 *v3; // x8

  v2 = (_QWORD *)sub_56C9F0(48, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((__int64 *)((__int64*)goff_18FAC68) + 24);
  *v2 = ((__int64 *)((__int64*)goff_18FAC68) + 2);
  v2[1] = v3;
  v2[4] = *(_QWORD *)(a1 + 32);
  v2[5] = *(_QWORD *)(a1 + 40);
  return v2;
}

// N5storm15NetPropertyDataINS_13ApplicationIdENS_20NetPropertyDataTraitIS1_EEEE, virtual slot 5
_QWORD *__fastcall sub_5C8560(__int64 a1)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8

  v2 = (_QWORD *)sub_56C9F0(48, 8, 1092624384, 0LL, &unk_1326E41, 0);
  sub_57F070(v2, a1);
  v3 = ((char *)((__int64*)goff_18FA9E8) + 192);
  *v2 = ((char *)((__int64*)goff_18FA9E8) + 16);
  v2[1] = v3;
  v4 = *(_QWORD *)(a1 + 26);
  *(_QWORD *)((char *)v2 + 34) = *(_QWORD *)(a1 + 34);
  *(_QWORD *)((char *)v2 + 26) = v4;
  return v2;
}

// N5storm5punch42ProductPunchClientImplNetworkStartupParamsE, virtual slot 1
void __fastcall sub_60FBF0(_QWORD *a1)
{
  __int64 *v1; // x9

  v1 = ((__int64 *)((__int64*)goff_18FB1F0) + 2);
  *a1 = ((__int64 *)goff_18FB228 + 2);
  a1[1] = v1;
  if ( (a1[4] & 1) != 0 )
    sub_56CA00(a1[6], &unk_1326E41, 0);
  _ZdlPv(a1);
}

// N5storm5punch39ProductPunchClientImplMainStartupParamsE, virtual slot 1
void __fastcall sub_60FC60(_QWORD *a1)
{
  __int64 *v1; // x9

  v1 = ((__int64 *)((__int64*)goff_18FB1F0) + 2);
  *a1 = ((__int64 *)((__int64*)goff_18FB258) + 2);
  a1[1] = v1;
  if ( (a1[4] & 1) != 0 )
    sub_56CA00(a1[6], &unk_1326E41, 0);
  _ZdlPv(a1);
}

// N5storm5punch32TraversalImplNetworkStartupParamE, virtual slot 1
void __fastcall sub_60FE40(_QWORD *a1)
{
  __int64 *v1; // x9

  v1 = ((__int64 *)((__int64*)goff_18FB1F0) + 2);
  *a1 = ((__int64 *)((__int64*)goff_18FB280) + 2);
  a1[1] = v1;
  if ( (a1[4] & 1) != 0 )
    sub_56CA00(a1[6], &unk_1326E41, 0);
  _ZdlPv(a1);
}

// N5storm5punch27UpnpImplNetworkStartupParamE, virtual slot 1
void __fastcall sub_60FEB0(_QWORD *a1)
{
  __int64 *v1; // x9

  v1 = ((__int64 *)((__int64*)goff_18FB1F0) + 2);
  *a1 = ((__int64 *)((__int64*)goff_18FB290) + 2);
  a1[1] = v1;
  if ( (a1[4] & 1) != 0 )
    sub_56CA00(a1[6], &unk_1326E41, 0);
  _ZdlPv(a1);
}

// N5storm18StateMachineActionINS_5punch25DetectNatTypeStateMachineEEE, virtual slot 3
_QWORD *__fastcall sub_624DA0(_QWORD *a1)
{
  _QWORD *result; // x0
  __int64 v3; // x9

  result = (_QWORD *)sub_57D200(32, 8, 1092624390, 0LL, &unk_1326E41, 0);
  *result = ((char *)goff_18FAFD8 + 16);
  v3 = a1[2];
  result[1] = a1[1];
  result[2] = v3;
  result[3] = a1[3];
  return result;
}

// N5storm18StateMachineActionINS_5punch31TraversalConnectionStateMachineEEE, virtual slot 3
_QWORD *__fastcall sub_626EF0(_QWORD *a1)
{
  _QWORD *result; // x0
  __int64 v3; // x9

  result = (_QWORD *)sub_57D200(32, 8, 1092624390, 0LL, &unk_1326E41, 0);
  *result = ((char *)goff_18FB450 + 16);
  v3 = a1[2];
  result[1] = a1[1];
  result[2] = v3;
  result[3] = a1[3];
  return result;
}

// N5storm18StateMachineActionINS_5punch24SeekEndpointStateMachineEEE, virtual slot 3
_QWORD *__fastcall sub_627570(_QWORD *a1)
{
  _QWORD *result; // x0
  __int64 v3; // x9

  result = (_QWORD *)sub_57D200(32, 8, 1092624390, 0LL, &unk_1326E41, 0);
  *result = ((char *)goff_18FB5A8 + 16);
  v3 = a1[2];
  result[1] = a1[1];
  result[2] = v3;
  result[3] = a1[3];
  return result;
}

