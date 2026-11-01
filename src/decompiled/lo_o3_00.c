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
__int64 Recovered_ResultTextDestroy();
__int64 _ZdlPv();
extern char goff_18ECC98[];
extern char goff_18EDE08[];
extern char goff_18F1510[];
extern char goff_18F2F88[];
extern char goff_18F4670[];
extern char goff_18F49A0[];
extern char goff_18F4A60[];
extern char goff_18F4A68[];
extern char goff_18F6BD0[];
extern char goff_18F7078[];
extern char goff_18F7A68[];
extern char goff_18F7AD8[];
extern char goff_18F87A0[];
extern char goff_18F87B0[];
extern char goff_18F88D8[];
extern char goff_18F9230[];
extern char goff_18F94E0[];
extern char goff_18F95B8[];
extern char goff_18F96F0[];
extern char goff_18F96F8[];
extern char goff_18F9A40[];
extern char goff_18F9A48[];
extern char goff_18F9A60[];
extern char goff_18F9A68[];
extern char goff_18F9A70[];
extern char goff_18F9A78[];
extern char goff_18F9D20[];
extern char goff_18FAAC0[];
extern char goff_18FADA8[];
extern char goff_18FB260[];
extern char goff_18FB268[];
extern char goff_18FB270[];
extern char goff_18FB8A0[];
extern char goff_18FB8B0[];
extern char goff_18FB900[];
extern char goff_18FBB08[];
__int64 j__pthread_self();
__int64 nn__os__ConvertToTimeSpan();
__int64 nn__os__GetSystemTick();
__int64 nn__socket__GetSockOpt();
__attribute__((visibility("hidden"))) __int64 nullsub_1096();
__int64 pthread_mutex_lock();
__int64 pthread_mutex_unlock();
extern __attribute__((visibility("hidden"))) __int64 qword_19154C0;
extern __attribute__((visibility("hidden"))) __int64 qword_19154C8;
__int64 std____shared_weak_count____release_weak();
__int64 std____tree_remove();
__int64 std__condition_variable___condition_variable();
__int64 std__mutex___mutex();
__int64 std__shared_timed_mutex__lock_shared();
__int64 std__shared_timed_mutex__unlock_shared();
__attribute__((visibility("hidden"))) __int64 sub_10C930();
__attribute__((visibility("hidden"))) __int64 sub_10CC70();
__attribute__((visibility("hidden"))) __int64 sub_126230();
__attribute__((visibility("hidden"))) __int64 sub_12B280();
__attribute__((visibility("hidden"))) __int64 sub_12B4B0();
__attribute__((visibility("hidden"))) __int64 sub_142440();
__attribute__((visibility("hidden"))) __int64 sub_142580();
__attribute__((visibility("hidden"))) __int64 sub_14EA00();
__attribute__((visibility("hidden"))) __int64 sub_14EBE0();
__attribute__((visibility("hidden"))) __int64 sub_257400();
__attribute__((visibility("hidden"))) _Bool sub_260850();
__attribute__((visibility("hidden"))) __int64 sub_28B5F0();
__attribute__((visibility("hidden"))) __int64 sub_2C2960();
__attribute__((visibility("hidden"))) _Bool sub_2C2F70();
__attribute__((visibility("hidden"))) __int64 sub_2C3070();
__attribute__((visibility("hidden"))) _Bool sub_2C6640();
__attribute__((visibility("hidden"))) __int64 sub_2FAE70();
__attribute__((visibility("hidden"))) __int64 sub_2FAEE0();
__attribute__((visibility("hidden"))) __int64 sub_36EA0();
__attribute__((visibility("hidden"))) __int64 sub_37030();
__attribute__((visibility("hidden"))) __int64 sub_380D0();
__attribute__((visibility("hidden"))) __int64 sub_3B2E10();
__attribute__((visibility("hidden"))) __int64 sub_3DA260();
__attribute__((visibility("hidden"))) __int64 sub_3E1950();
__attribute__((visibility("hidden"))) __int64 sub_3E19A0();
__attribute__((visibility("hidden"))) __int64 sub_3E1A00();
__attribute__((visibility("hidden"))) __int64 sub_459BE0();
__attribute__((visibility("hidden"))) __int64 sub_459EF0();
__attribute__((visibility("hidden"))) __int64 sub_483450();
__attribute__((visibility("hidden"))) __int64 sub_485070();
__attribute__((visibility("hidden"))) __int64 sub_4AC100();
__attribute__((visibility("hidden"))) __int64 sub_4C3990();
__attribute__((visibility("hidden"))) _Bool sub_4D3CD0();
__attribute__((visibility("hidden"))) __int64 sub_4D6990();
__attribute__((visibility("hidden"))) __int64 sub_4ECA10();
__attribute__((visibility("hidden"))) __int64 sub_4EE210();
__attribute__((visibility("hidden"))) __int64 sub_4EE230();
__attribute__((visibility("hidden"))) __int64 sub_4F4810();
__attribute__((visibility("hidden"))) __int64 sub_4F5FA0();
__attribute__((visibility("hidden"))) __int64 sub_518A40();
__attribute__((visibility("hidden"))) __int64 sub_519280();
__attribute__((visibility("hidden"))) __int64 sub_51D650();
__attribute__((visibility("hidden"))) __int64 sub_54CA70();
__attribute__((visibility("hidden"))) __int64 sub_54CAB0();
__attribute__((visibility("hidden"))) __int64 sub_554100();
__attribute__((visibility("hidden"))) __int64 sub_56A940();
__attribute__((visibility("hidden"))) __int64 sub_56C9F0();
__attribute__((visibility("hidden"))) __int64 sub_56CA00();
__attribute__((visibility("hidden"))) _Bool sub_576540();
__attribute__((visibility("hidden"))) __int64 sub_577290();
__attribute__((visibility("hidden"))) __int64 sub_578410();
__attribute__((visibility("hidden"))) __int64 sub_57EDC0();
__attribute__((visibility("hidden"))) __int64 sub_57EFF0();
__attribute__((visibility("hidden"))) _Bool sub_57F110();
__attribute__((visibility("hidden"))) _Bool sub_589530();
__attribute__((visibility("hidden"))) __int64 sub_5B50D0();
__attribute__((visibility("hidden"))) int sub_5BCD60();
__attribute__((visibility("hidden"))) __int64 sub_5F7870();
__attribute__((visibility("hidden"))) __int64 sub_9B180();
__attribute__((visibility("hidden"))) __int64 sub_C2320();
__attribute__((visibility("hidden"))) __int64 sub_C24F0();
__attribute__((visibility("hidden"))) __int64 sub_C2610();
__attribute__((visibility("hidden"))) __int64 sub_F1820();
__attribute__((visibility("hidden"))) __int64 sub_F1930();
extern __attribute__((visibility("hidden"))) char unk_1326E41;

// N11ubiservices27HttpRequestManagerComponentE, virtual slot 6
bool __fastcall sub_538D0(char *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // x8
  pthread_mutex_t *v3; // x21
  unsigned __int64 v6; // x8
  unsigned int v7; // w20
  char *v8; // x9
  __int64 v9; // x19
  __int64 v10; // t1
  char *v11; // x8
  unsigned int v12; // w10
  bool v13; // cf
  _BOOL4 v14; // w10
  char *v16; // x19
  _DWORD *v17; // x0
  int v18; // w8

  v2 = atomic_load(a2);
  v3 = (pthread_mutex_t *)(v2 + 24);
  pthread_mutex_lock((pthread_mutex_t *)(v2 + 24));
  v6 = atomic_load(a2);
  v7 = *(_DWORD *)(v6 + 272);
  pthread_mutex_unlock(v3);
  v10 = *(_QWORD *)(a1 + 32);
  v9 = a1 + 32;
  v8 = v10;
  if ( v10 == 0 )
    return true;
  v11 = v9;
  do
  {
    v12 = *(_DWORD *)(v8 + 32);
    v13 = v12 >= v7;
    v14 = v12 < v7;
    if ( v13 )
      v11 = v8;
    v8 = *(_QWORD *)(v8 + 8LL * v14);
  }
  while ( v8 != 0 );
  if ( v11 == v9 )
    return true;
  if ( *(_DWORD *)(v11 + 32) > v7 )
    return true;
  v16 = *(_QWORD *)(v11 + 40);
  v17 = *(_DWORD **)(v16 + 8);
  v18 = v17[4];
  if ( v18 == 0 )
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v17 + 16LL))(v17);
    v18 = *(_DWORD *)(*(_QWORD *)(v16 + 8) + 16LL);
  }
  return v18 != 0;
}

// N11ubiservices18HttpRetryComponentE, virtual slot 4
int __fastcall sub_53C00(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // x21
  unsigned __int64 v3; // x8
  pthread_mutex_t *v4; // x20
  unsigned __int64 v6; // x19

  v2 = atomic_load(a2);
  v3 = atomic_load(a2);
  v4 = (pthread_mutex_t *)(v3 + 24);
  pthread_mutex_lock((pthread_mutex_t *)(v3 + 24));
  v6 = atomic_load(a2);
  pthread_mutex_unlock(v4);
  if ( *(_BYTE *)(v6 + 232) != 0 )
    return 2;
  else
    return 2 * (unsigned int)(*(_DWORD *)(v2 + 368) == 0);
}

bool __fastcall sub_55190(__int64 a1)
{
  unsigned __int64 v1; // x8
  unsigned __int64 v3; // x8
  unsigned __int64 v5; // x21
  pthread_mutex_t *v6; // x20
  _QWORD *v7; // x9
  unsigned __int64 v8; // x21
  _QWORD *v9; // t1
  _QWORD *v10; // x8
  unsigned int v11; // w21
  unsigned __int64 v12; // x0
  unsigned __int64 v13; // x20
  unsigned int v14; // w19
  int v15; // w21

  v1 = atomic_load((unsigned __int64 *)(a1 + 24));
  if ( *(_QWORD *)(v1 + 56) != 0 )
    return false;
  v3 = atomic_load((unsigned __int64 *)(a1 + 16));
  if ( *(_QWORD *)(*(_QWORD *)(v3 + 16) + 64LL) != 0 )
    return false;
  v5 = atomic_load((unsigned __int64 *)(*(_QWORD *)(a1 + 48) + 48LL));
  v6 = (pthread_mutex_t *)(v5 + 32);
  pthread_mutex_lock((pthread_mutex_t *)(v5 + 32));
  v9 = *(_QWORD **)(v5 + 80);
  v8 = v5 + 80;
  v7 = v9;
  if ( v9 == nullptr )
    goto LABEL_9;
  do
  {
    v10 = v7;
    v7 = (_QWORD *)*v7;
  }
  while ( v7 != nullptr );
  if ( v10 == (_QWORD *)v8 || v10[4] != 0 )
  {
LABEL_9:
    pthread_mutex_unlock(v6);
  }
  else
  {
    v15 = *((_DWORD *)v10 + 20);
    pthread_mutex_unlock(v6);
    if ( v15 != 0 )
      return false;
  }
  if ( *(_BYTE *)(a1 + 42) != 0 )
    return true;
  v11 = *(_DWORD *)(a1 + 32);
  v12 = atomic_load((unsigned __int64 *)(a1 + 24));
  if ( v11 < (*(unsigned int (__fastcall **)(unsigned __int64))(*(_QWORD *)v12 + 24LL))(v12) )
    return false;
  v13 = atomic_load((unsigned __int64 *)(a1 + 24));
  v14 = *(_DWORD *)(a1 + 32);
  if ( *(_BYTE *)(v13 + 76) != 0
    && (*(unsigned int (__fastcall **)(unsigned __int64))(*(_QWORD *)v13 + 24LL))(v13) <= v14 )
  {
    return true;
  }
  if ( *(_QWORD *)(v13 + 56) == 0 )
    return false;
  if ( *(_DWORD *)(v13 + 64) <= v14 )
    return *(_DWORD *)(v13 + 68) >= v14;
  return false;
}

bool __fastcall sub_795D0(__int64 a1)
{
  unsigned __int64 *v1; // x20
  unsigned __int64 v2; // x8
  __int64 v3; // x19
  __int64 v4; // x21
  unsigned __int64 v5; // x8

  v1 = (unsigned __int64 *)(a1 + 8);
  v2 = atomic_load((unsigned __int64 *)(a1 + 8));
  v3 = *(_QWORD *)(v2 + 72);
  v4 = *(_QWORD *)(v2 + 80);
  if ( v3 == v4 )
  {
LABEL_4:
    v5 = atomic_load(v1);
    return *(_BYTE *)(v5 + 104) != 0;
  }
  else
  {
    while ( (sub_795D0(v3) & 1) == 0 )
    {
      v3 += 16;
      if ( v4 == v3 )
        goto LABEL_4;
    }
    return true;
  }
}

__int64 __fastcall sub_956A0(unsigned __int64 *a1)
{
  unsigned __int64 v1; // x19
  __int64 result; // x0
  pthread_mutex_t *v3; // x20
  __int64 v4; // x21
  __int64 v5; // x0

  v1 = atomic_load(a1);
  result = *(_QWORD *)(v1 + 72);
  if ( result == 0 )
  {
    v3 = (pthread_mutex_t *)(*(_QWORD *)(v1 + 16) + 8LL);
    pthread_mutex_lock(v3);
    if ( *(_QWORD *)(v1 + 72) == 0 )
    {
      v4 = sub_36EA0(0x70u, 4u, 0, 1086324736);
      sub_9B180(v4, v1);
      v5 = *(_QWORD *)(v1 + 72);
      *(_QWORD *)(v1 + 72) = v4;
      if ( v5 != 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    }
    pthread_mutex_unlock(v3);
    return *(_QWORD *)(v1 + 72);
  }
  return result;
}

__int64 __fastcall sub_95840(unsigned __int64 *a1)
{
  unsigned __int64 v1; // x20
  __int64 result; // x0
  pthread_mutex_t *v3; // x19
  _QWORD *v4; // x0
  _QWORD *v5; // x8
  __int64 v6; // x0

  v1 = atomic_load(a1);
  result = *(_QWORD *)(v1 + 200);
  if ( result == 0 )
  {
    v3 = (pthread_mutex_t *)(*(_QWORD *)(v1 + 16) + 8LL);
    pthread_mutex_lock(v3);
    if ( *(_QWORD *)(v1 + 200) == 0 )
    {
      v4 = (_QWORD *)sub_36EA0(0x10u, 4u, 0, 1086324736);
      *v4 = ((char *)((__int64*)goff_18ECC98) + 16);
      v4[1] = v1;
      v5 = v4;
      v6 = *(_QWORD *)(v1 + 200);
      *(_QWORD *)(v1 + 200) = v5;
      if ( v6 != 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    }
    pthread_mutex_unlock(v3);
    return *(_QWORD *)(v1 + 200);
  }
  return result;
}

__int64 __fastcall sub_98F20(__int64 a1, __int64 *a2)
{
  __int64 result; // x0
  pthread_mutex_t *v4; // x20
  __int64 v6; // x22
  __int64 v7; // x21

  result = *a2;
  if ( *a2 == 0 )
  {
    v4 = (pthread_mutex_t *)(*(_QWORD *)(a1 + 16) + 8LL);
    pthread_mutex_lock(v4);
    if ( *a2 == 0 )
    {
      v6 = sub_36EA0(0x48u, 4u, 0, 1086324736);
      sub_C2320(v6, a1);
      v7 = *a2;
      *a2 = v6;
      if ( v7 != 0 )
      {
        sub_C24F0(v7);
        sub_37030(v7);
      }
    }
    pthread_mutex_unlock(v4);
    return *a2;
  }
  return result;
}

__int64 __fastcall sub_990B0(__int64 a1, __int64 *a2)
{
  __int64 result; // x0
  pthread_mutex_t *v4; // x20
  __int64 v6; // x22
  __int64 v7; // x21

  result = *a2;
  if ( *a2 == 0 )
  {
    v4 = (pthread_mutex_t *)(*(_QWORD *)(a1 + 16) + 8LL);
    pthread_mutex_lock(v4);
    if ( *a2 == 0 )
    {
      v6 = sub_36EA0(0x20u, 4u, 0, 1086324736);
      sub_F1820(v6, a1);
      v7 = *a2;
      *a2 = v6;
      if ( v7 != 0 )
      {
        sub_F1930(v7);
        sub_37030(v7);
      }
    }
    pthread_mutex_unlock(v4);
    return *a2;
  }
  return result;
}

__int64 __fastcall sub_99380(__int64 a1, __int64 *a2)
{
  __int64 result; // x0
  pthread_mutex_t *v4; // x20
  __int64 v6; // x22
  __int64 v7; // x21

  result = *a2;
  if ( *a2 == 0 )
  {
    v4 = (pthread_mutex_t *)(*(_QWORD *)(a1 + 16) + 8LL);
    pthread_mutex_lock(v4);
    if ( *a2 == 0 )
    {
      v6 = sub_36EA0(0x48u, 4u, 0, 1086324736);
      sub_12B280(v6, a1);
      v7 = *a2;
      *a2 = v6;
      if ( v7 != 0 )
      {
        sub_12B4B0(v7);
        sub_37030(v7);
      }
    }
    pthread_mutex_unlock(v4);
    return *a2;
  }
  return result;
}

__int64 __fastcall sub_99420(__int64 a1, __int64 *a2)
{
  __int64 result; // x0
  pthread_mutex_t *v4; // x20
  __int64 v6; // x22
  __int64 v7; // x21

  result = *a2;
  if ( *a2 == 0 )
  {
    v4 = (pthread_mutex_t *)(*(_QWORD *)(a1 + 16) + 8LL);
    pthread_mutex_lock(v4);
    if ( *a2 == 0 )
    {
      v6 = sub_36EA0(0x28u, 4u, 0, 1086324736);
      sub_142440(v6, a1);
      v7 = *a2;
      *a2 = v6;
      if ( v7 != 0 )
      {
        sub_142580(v7);
        sub_37030(v7);
      }
    }
    pthread_mutex_unlock(v4);
    return *a2;
  }
  return result;
}

__int64 __fastcall sub_995B0(__int64 a1, __int64 *a2)
{
  __int64 result; // x0
  pthread_mutex_t *v4; // x20
  __int64 v6; // x22
  __int64 v7; // x21

  result = *a2;
  if ( *a2 == 0 )
  {
    v4 = (pthread_mutex_t *)(*(_QWORD *)(a1 + 16) + 8LL);
    pthread_mutex_lock(v4);
    if ( *a2 == 0 )
    {
      v6 = sub_36EA0(0x38u, 4u, 0, 1086324736);
      sub_14EA00(v6, a1);
      v7 = *a2;
      *a2 = v6;
      if ( v7 != 0 )
      {
        sub_14EBE0(v7);
        sub_37030(v7);
      }
    }
    pthread_mutex_unlock(v4);
    return *a2;
  }
  return result;
}

__int64 __fastcall sub_99650(__int64 a1, __int64 *a2)
{
  __int64 result; // x0
  pthread_mutex_t *v4; // x20
  __int64 v6; // x22
  __int64 v7; // x21

  result = *a2;
  if ( *a2 == 0 )
  {
    v4 = (pthread_mutex_t *)(*(_QWORD *)(a1 + 16) + 8LL);
    pthread_mutex_lock(v4);
    if ( *a2 == 0 )
    {
      v6 = sub_36EA0(0xA8u, 4u, 0, 1086324736);
      sub_10C930(v6, a1);
      v7 = *a2;
      *a2 = v6;
      if ( v7 != 0 )
      {
        sub_10CC70(v7);
        sub_37030(v7);
      }
    }
    pthread_mutex_unlock(v4);
    return *a2;
  }
  return result;
}

__int64 __fastcall sub_996F0(__int64 a1, __int64 *a2)
{
  __int64 result; // x0
  pthread_mutex_t *v4; // x20
  __int64 v6; // x22
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

  result = *a2;
  if ( *a2 == 0 )
  {
    v4 = (pthread_mutex_t *)(*(_QWORD *)(a1 + 16) + 8LL);
    pthread_mutex_lock(v4);
    if ( *a2 == 0 )
    {
      v6 = sub_36EA0(0x20u, 4u, 0, 1086324736);
      sub_126230(v6, a1);
      v7 = *a2;
      *a2 = v6;
      if ( v7 != 0 )
      {
        sub_C2610(v7 + 8);
        v8 = (unsigned __int64 *)(v7 + 24);
        v9 = __atomic_exchange_n(v8, 0, 5);
        if ( v9 != 0 )
        {
          v10 = (unsigned int *)(v9 + 8);
          v12 = __atomic_sub_fetch(v10, 1, 5);
          if ( v12 == 0 )
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
        v13 = (unsigned __int64 *)(v7 + 16);
        v14 = __atomic_exchange_n(v13, 0, 5);
        if ( v14 != 0 )
        {
          v15 = (unsigned int *)(v14 + 8);
          v17 = __atomic_sub_fetch(v15, 1, 5);
          if ( v17 == 0 )
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        sub_C2610(v7 + 8);
        sub_37030(v7);
      }
    }
    pthread_mutex_unlock(v4);
    return *a2;
  }
  return result;
}

bool __fastcall sub_191880(unsigned __int64 *a1)
{
  unsigned __int64 v1; // x20
  __int64 SystemTick; // x0
  unsigned __int64 v5; // x8

  v1 = a1[5];
  SystemTick = nn__os__GetSystemTick((char *)a1);
  if ( v1 < (unsigned __int64)((double)(unsigned __int64)nn__os__ConvertToTimeSpan(SystemTick)
                             * 1000000000.0
                             / 1000000000.0) )
    return true;
  v5 = atomic_load(a1 + 2);
  return (unsigned int)(*(_DWORD *)(v5 + 24) - 3) < 2;
}

// N5storm4echo9voicechat17ChatterDescriptorE, virtual slot 19
bool __fastcall sub_258EE0(__int64 a1, __int64 a2)
{
  if ( (sub_576540(a1, a2)) == 0 )
    return false;
  if ( (sub_57F110(a1 + 40, a2 + 40)) == 0 )
    return false;
  if ( (sub_57F110(a1 + 88, a2 + 88)) != 0 )
    return *(_QWORD *)(a1 + 272) == *(_QWORD *)(a2 + 272);
  return false;
}

// N5storm4echo6object8outEvent9ReadyFailE, virtual slot 13
int __fastcall sub_264180(__int64 a1, __int64 a2)
{
  _Bool v4; // w8
  __int64 result; // x0
  _Bool v6; // w0
  unsigned int v7; // w8
  unsigned int dest; // [xsp+Ch] [xbp-14h] BYREF

  dest = 0;
  v4 = sub_260850(a1, a2);
  result = 0;
  if ( (v4 & 1) != 0 )
  {
    v6 = sub_589530(a2, &dest, 0x20u, 1);
    v7 = __builtin_bswap32(dest);
    dest = v7;
    if ( (v6 & 1) != 0 )
    {
      result = 1;
      *(_DWORD *)(a1 + 56) = v7;
    }
    else
    {
      return 0;
    }
  }
  return result;
}

// N5storm15NetPropertyDataINS_4GUIDENS_20NetPropertyDataTraitIS1_EEEE, virtual slot 19
bool __fastcall sub_2B63E0(__int64 a1, __int64 a2)
{
  size_t v4; // x2

  if ( (sub_576540()) == 0 )
    return false;
  v4 = *(unsigned __int8 *)(a1 + 26);
  return (_DWORD)v4 == *(unsigned __int8 *)(a2 + 26)
      && memcmp((const void *)(a1 + 27), (const void *)(a2 + 27), v4) == 0;
}

// N5storm15NetPropertyDataINS_9FixedGuidImEENS_20NetPropertyDataTraitIS2_EEEE, virtual slot 19
bool __fastcall sub_2B71A0(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0 && *(_QWORD *)(a1 + 32) == *(_QWORD *)(a2 + 32);
}

// N5storm4echo18LanManager_NetworkE, virtual slot 0
__int64 __fastcall sub_2D0B10(_QWORD *a1)
{
  __int64 *v1; // x8
  _QWORD *v3; // x20
  __int64 v4; // x0

  v1 = ((__int64 *)goff_18F1510 + 107);
  *a1 = ((__int64 *)goff_18F1510 + 2);
  a1[4] = v1;
  v3 = a1 + 4;
  sub_2FAE70(a1 + 28, a1[29]);
  sub_28B5F0(a1 + 24, a1[25]);
  v4 = a1[21];
  if ( v4 != 0 )
  {
    a1[22] = v4;
    sub_56CA00(v4, &unk_1326E41, 0);
  }
  sub_2FAEE0(a1 + 12, a1[13]);
  nullsub_1096(v3);
  return sub_577290(a1);
}

// N5storm4echo18LanManager_NetworkE, virtual slot 1
void __fastcall sub_2D0C10(_QWORD *a1)
{
  __int64 *v1; // x8
  _QWORD *v3; // x20
  __int64 v4; // x0

  v1 = ((__int64 *)goff_18F1510 + 107);
  *a1 = ((__int64 *)goff_18F1510 + 2);
  a1[4] = v1;
  v3 = a1 + 4;
  sub_2FAE70(a1 + 28, a1[29]);
  sub_28B5F0(a1 + 24, a1[25]);
  v4 = a1[21];
  if ( v4 != 0 )
  {
    a1[22] = v4;
    sub_56CA00(v4, &unk_1326E41, 0);
  }
  sub_2FAEE0(a1 + 12, a1[13]);
  nullsub_1096(v3);
  sub_577290(a1);
  _ZdlPv(a1);
}

// N5storm18NetPropertyIntegerIjNS_20BinaryNumericalTraitIjLh2ELh0ELb0ENS_19DefaultValueFunctorIjLm0EEEEEEE, virtual slot 19
bool __fastcall sub_302A30(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0 && *(_DWORD *)(a1 + 28) == *(_DWORD *)(a2 + 28);
}

// N5storm18NetPropertyIntegerIjNS_20BinaryNumericalTraitIjLh4ELh0ELb0ENS_19DefaultValueFunctorIjLm0EEEEEEE, virtual slot 19
bool __fastcall sub_3030D0(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0 && *(_DWORD *)(a1 + 28) == *(_DWORD *)(a2 + 28);
}

bool __fastcall sub_3281C0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // w8
  int v4; // w9
  int v8; // w21
  int v9; // w0

  v3 = *(_DWORD *)(a3 + 72);
  v4 = *(_DWORD *)(a2 + 72);
  if ( v3 < v4 )
    return true;
  if ( v3 > v4 )
    return false;
  v8 = sub_5BCD60(*(_QWORD *)(a2 + 32));
  v9 = sub_5BCD60(*(_QWORD *)(a3 + 32));
  if ( v9 > v8 )
    return true;
  if ( v9 < v8 )
    return false;
  return *(_QWORD *)(a3 + 56) < *(_QWORD *)(a2 + 56);
}

__int64 __fastcall sub_35A9A0(_QWORD *a1, unsigned int *a2)
{
  char *v2; // x19
  unsigned __int64 v5; // x10
  unsigned __int64 v6; // x8
  unsigned __int64 v7; // x12
  unsigned __int64 v8; // x9
  __int64 **v9; // x11
  __int64 *v10; // x11
  unsigned __int64 v11; // x12
  __int64 v12; // x10
  __int64 v13; // x20

  v2 = (char *)(a1 + 10);
  std__shared_timed_mutex__lock_shared((char *)(a1 + 10));
  v5 = a1[23];
  if ( v5 == 0 )
    goto LABEL_23;
  v6 = *a2;
  v7 = v5 - 1;
  if ( ((v5 - 1) & v5) != 0 )
  {
    v8 = *a2;
    if ( v5 <= v6 )
      v8 = v6 % v5;
    v9 = *(__int64 ***)(a1[22] + 8 * v8);
    if ( v9 == nullptr )
      goto LABEL_23;
  }
  else
  {
    v8 = v7 & v6;
    v9 = *(__int64 ***)(a1[22] + 8 * (v7 & v6));
    if ( v9 == nullptr )
      goto LABEL_23;
  }
  v10 = *v9;
  if ( v10 != nullptr )
  {
    if ( ((v5 - 1) & v5) != 0 )
    {
      while ( 1 )
      {
        v11 = v10[1];
        if ( v11 == v6 )
        {
          if ( *((_DWORD *)v10 + 4) == (_DWORD)v6 )
            goto LABEL_25;
        }
        else
        {
          if ( v11 >= v5 )
            v11 %= v5;
          if ( v11 != v8 )
            goto LABEL_23;
        }
        v10 = (__int64 *)*v10;
        if ( v10 == nullptr )
          goto LABEL_23;
      }
    }
    do
    {
      v12 = v10[1];
      if ( v12 == v6 )
      {
        if ( *((_DWORD *)v10 + 4) == (_DWORD)v6 )
        {
LABEL_25:
          v13 = v10[3];
          goto LABEL_24;
        }
      }
      else if ( (v12 & v7) != v8 )
      {
        break;
      }
      v10 = (__int64 *)*v10;
    }
    while ( v10 != nullptr );
  }
LABEL_23:
  v13 = 0;
LABEL_24:
  std__shared_timed_mutex__unlock_shared(v2);
  return v13;
}

// N5storm9transport32TransportManagerNetStartupParamsE, virtual slot 1
void __fastcall sub_36C030(_QWORD *a1)
{
  char *v2; // x20
  unsigned __int64 *v3; // x8
  unsigned __int64 v4; // x9

  *a1 = ((__int64 *)goff_18F2F88 + 2);
  if ( (a1[24] & 1) != 0 )
  {
    sub_56CA00(a1[26], &unk_1326E41, 0);
    if ( (a1[21] & 1) == 0 )
    {
LABEL_3:
      if ( (a1[18] & 1) == 0 )
        goto LABEL_4;
      goto LABEL_8;
    }
  }
  else if ( (a1[21] & 1) == 0 )
  {
    goto LABEL_3;
  }
  sub_56CA00(a1[23], &unk_1326E41, 0);
  if ( (a1[18] & 1) == 0 )
  {
LABEL_4:
    v2 = (char *)a1[6];
    if ( v2 == nullptr )
      goto LABEL_12;
    goto LABEL_9;
  }
LABEL_8:
  sub_56CA00(a1[20], &unk_1326E41, 0);
  v2 = (char *)a1[6];
  if ( v2 == nullptr )
  {
LABEL_12:
    _ZdlPv(a1);
    return;
  }
LABEL_9:
  v3 = (unsigned __int64 *)((char *)v2 + 8);
  v4 = __atomic_fetch_sub(v3, 1, 5);
  if ( v4 != 0 )
    goto LABEL_12;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 16LL))(v2);
  std____shared_weak_count____release_weak(v2);
  _ZdlPv(a1);
}

// N5storm17NetPropertyVectorINS_15TNetPropertyRefINS_15NetPropertyNullEEELm0EE10VectorSizeE, virtual slot 19
bool __fastcall sub_374410(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0
      && *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) - **(_QWORD **)(a1 + 32) == *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL)
                                                                           - **(_QWORD **)(a2 + 32);
}

// N5storm4echo43CTransmissionHistoryTouchedBitsHierarchicalE, virtual slot 7
bool __fastcall sub_38BEA0(__int64 a1)
{
  return (sub_2C6640(a1 + 88)) == 0 || (*(_BYTE *)(a1 + 32) & 1) == 0;
}

// N5storm4echo5group14PeerConnectionE, virtual slot 0
__int64 __fastcall sub_3A1350(_QWORD *a1)
{
  char *v2; // x20
  unsigned __int64 *v3; // x8
  unsigned __int64 v4; // x9

  *a1 = ((__int64 *)goff_18F4670 + 2);
  sub_3DA260(a1 + 20, a1[21]);
  v2 = (char *)a1[18];
  if ( v2 == nullptr )
    return sub_56A940(a1);
  v3 = (unsigned __int64 *)((char *)v2 + 8);
  v4 = __atomic_fetch_sub(v3, 1, 5);
  if ( v4 != 0 )
    return sub_56A940(a1);
  (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 16LL))(v2);
  std____shared_weak_count____release_weak(v2);
  return sub_56A940(a1);
}

// N5storm9transport24TransportManager_NetworkE, virtual slot 0
__int64 __fastcall sub_3BA290(__int64 a1)
{
  __int64 *v1; // x8
  __int64 *v2; // x10
  __int64 v4; // x20
  char *v5; // x21
  unsigned __int64 *v6; // x8
  unsigned __int64 v7; // x9
  __int64 v8; // x0
  __int64 v9; // x0
  char *v10; // x21
  unsigned __int64 *v11; // x8
  unsigned __int64 v12; // x9
  __int64 v13; // x1

  v1 = ((__int64*)goff_18F4A60);
  v2 = ((__int64 *)((__int64*)goff_18F4A60) + 67);
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18F4A60) + 2);
  *(_QWORD *)(a1 + 24) = v2;
  v4 = a1 + 24;
  *(_QWORD *)(a1 + 56) = v1 + 167;
  *(_QWORD *)(a1 + 88) = v1 + 175;
  *(_QWORD *)(a1 + 96) = v1 + 180;
  *(_QWORD *)(a1 + 104) = v1 + 189;
  *(_QWORD *)(a1 + 112) = v1 + 197;
  sub_57EFF0(a1 + 4624);
  sub_3E1950(a1 + 4592, *(_QWORD *)(a1 + 4600));
  if ( (*(_BYTE *)(a1 + 4512) & 1) != 0 )
  {
    sub_56CA00(*(_QWORD *)(a1 + 4528), &unk_1326E41, 0);
    if ( (*(_BYTE *)(a1 + 4480) & 1) == 0 )
    {
LABEL_3:
      if ( (*(_BYTE *)(a1 + 4456) & 1) == 0 )
        goto LABEL_4;
      goto LABEL_8;
    }
  }
  else if ( (*(_BYTE *)(a1 + 4480) & 1) == 0 )
  {
    goto LABEL_3;
  }
  sub_56CA00(*(_QWORD *)(a1 + 4496), &unk_1326E41, 0);
  if ( (*(_BYTE *)(a1 + 4456) & 1) == 0 )
  {
LABEL_4:
    v5 = *(char **)(a1 + 4344);
    if ( v5 == nullptr )
      goto LABEL_13;
    goto LABEL_9;
  }
LABEL_8:
  sub_56CA00(*(_QWORD *)(a1 + 4472), &unk_1326E41, 0);
  v5 = *(char **)(a1 + 4344);
  if ( v5 != nullptr )
  {
LABEL_9:
    v6 = (unsigned __int64 *)((char *)v5 + 8);
    v7 = __atomic_fetch_sub(v6, 1, 5);
    if ( v7 == 0 )
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 16LL))(v5);
      std____shared_weak_count____release_weak(v5);
    }
  }
LABEL_13:
  sub_578410(a1 + 4128);
  sub_3E19A0(a1 + 4104, *(_QWORD *)(a1 + 4112));
  v8 = *(_QWORD *)(a1 + 4040);
  if ( v8 != 0 )
  {
    *(_QWORD *)(a1 + 4048) = v8;
    sub_56CA00(v8, &unk_1326E41, 0);
  }
  sub_257400(a1 + 3992);
  v9 = *(_QWORD *)(a1 + 3968);
  if ( v9 != 0 )
  {
    *(_QWORD *)(a1 + 3976) = v9;
    sub_56CA00(v9, &unk_1326E41, 0);
  }
  v10 = *(char **)(a1 + 3960);
  if ( v10 != nullptr )
  {
    v11 = (unsigned __int64 *)((char *)v10 + 8);
    v12 = __atomic_fetch_sub(v11, 1, 5);
    if ( v12 == 0 )
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 16LL))(v10);
      std____shared_weak_count____release_weak(v10);
    }
  }
  sub_3B2E10(a1 + 160);
  *(_QWORD *)(a1 + 56) = ((__int64 *)((__int64*)goff_18F4A68) + 2);
  v13 = *(_QWORD *)(a1 + 72);
  sub_3E1A00(a1 + 64, v13);
  sub_577290(v4);
  return nullsub_1096(a1);
}

// N5storm9transport10Connection30RecvPeerDescriptorUpdatedEventE, virtual slot 1
void __fastcall sub_3E0EC0(_QWORD *a1)
{
  char *v1; // x20
  unsigned __int64 *v3; // x8
  unsigned __int64 v4; // x9

  v1 = (char *)a1[6];
  *a1 = ((__int64 *)goff_18F49A0 + 2);
  if ( v1 == nullptr )
    goto LABEL_5;
  v3 = (unsigned __int64 *)((char *)v1 + 8);
  v4 = __atomic_fetch_sub(v3, 1, 5);
  if ( v4 == 0 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 16LL))(v1);
    std____shared_weak_count____release_weak(v1);
    _ZdlPv(a1);
  }
  else
  {
LABEL_5:
    _ZdlPv(a1);
  }
}

_QWORD *__fastcall sub_407E30(_QWORD *result, int a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // x8
  int v7; // [xsp+Ch] [xbp-4h] BYREF
  int v6; // [xsp+8h] [xbp-8h] BYREF
  __int64 v5; // [xsp+0h] [xbp-10h] BYREF

  v7 = a2;
  v6 = a4;
  v5 = a3;
  v4 = result[88];
  if ( v4 >= result[89] )
    return (_QWORD *)sub_459BE0((char *)(result + 87), &v7, &v5, &v6);
  *(_QWORD *)v4 = a3;
  *(_DWORD *)(v4 + 8) = a2;
  *(_DWORD *)(v4 + 12) = a4;
  result[88] += 16LL;
  return result;
}

void __fastcall sub_407FE0(_QWORD *a1, int a2, int a3)
{
  _DWORD *v3; // x8
  int v5; // [xsp+Ch] [xbp-4h] BYREF
  int v4; // [xsp+8h] [xbp-8h] BYREF

  v5 = a2;
  v4 = a3;
  v3 = (_DWORD *)a1[100];
  if ( (unsigned __int64)v3 >= a1[101] )
  {
    sub_459EF0((char *)(a1 + 99), &v5, &v4);
  }
  else
  {
    *v3 = a2;
    v3[1] = v4;
    a1[100] += 8LL;
  }
}

void __fastcall sub_408050(_QWORD *a1, int a2, int a3)
{
  _DWORD *v3; // x8
  int v5; // [xsp+Ch] [xbp-4h] BYREF
  int v4; // [xsp+8h] [xbp-8h] BYREF

  v5 = a2;
  v4 = a3;
  v3 = (_DWORD *)a1[103];
  if ( (unsigned __int64)v3 >= a1[104] )
  {
    sub_459EF0((char *)(a1 + 102), &v5, &v4);
  }
  else
  {
    *v3 = a2;
    v3[1] = v4;
    a1[103] += 8LL;
  }
}

void __fastcall sub_4080C0(_QWORD *a1, int a2, int a3)
{
  _DWORD *v3; // x8
  int v5; // [xsp+Ch] [xbp-4h] BYREF
  int v4; // [xsp+8h] [xbp-8h] BYREF

  v5 = a2;
  v4 = a3;
  v3 = (_DWORD *)a1[106];
  if ( (unsigned __int64)v3 >= a1[107] )
  {
    sub_459EF0((char *)(a1 + 105), &v5, &v4);
  }
  else
  {
    *v3 = a2;
    v3[1] = v4;
    a1[106] += 8LL;
  }
}

// N5storm15NetPropertyDataINS_4echo21ObjectReplicationModeENS1_37NetPropertyObjectReplicationModeTraitEEE, virtual slot 19
bool __fastcall sub_447D40(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) == 0 )
    return false;
  if ( *(_DWORD *)(a1 + 28) == *(_DWORD *)(a2 + 28) )
    return *(_DWORD *)(a1 + 32) == *(_DWORD *)(a2 + 32);
  return false;
}

// N5storm15NetPropertyDataINS_4echo19ObjectMigrationModeENS1_35NetPropertyObjectMigrationModeTraitEEE, virtual slot 19
bool __fastcall sub_448470(__int64 a1, __int64 a2)
{
  if ( (sub_576540()) == 0 )
    return false;
  if ( *(_DWORD *)(a1 + 28) != *(_DWORD *)(a2 + 28) )
    return false;
  if ( *(_DWORD *)(a1 + 32) != *(_DWORD *)(a2 + 32) )
    return false;
  if ( *(_DWORD *)(a1 + 36) != *(_DWORD *)(a2 + 36) )
    return false;
  if ( *(_DWORD *)(a1 + 40) != *(_DWORD *)(a2 + 40) )
    return false;
  if ( *(unsigned __int8 *)(a1 + 44) == *(unsigned __int8 *)(a2 + 44) )
    return *(unsigned __int8 *)(a1 + 45) == *(unsigned __int8 *)(a2 + 45);
  return false;
}

// N5storm21SimplePunchControllerE, virtual slot 0
__int64 __fastcall sub_4606E0(__int64 a1)
{
  *(_QWORD *)a1 = ((__int64 *)goff_18F6BD0 + 2);
  sub_485070(a1 + 528, *(_QWORD *)(a1 + 536));
  if ( (*(_BYTE *)(a1 + 496) & 1) != 0 )
  {
    sub_56CA00(*(_QWORD *)(a1 + 512), &unk_1326E41, 0);
    if ( (*(_BYTE *)(a1 + 408) & 1) == 0 )
    {
LABEL_3:
      sub_578410(a1 + 200);
      if ( (*(_BYTE *)(a1 + 176) & 1) == 0 )
        goto LABEL_4;
      goto LABEL_12;
    }
  }
  else if ( (*(_BYTE *)(a1 + 408) & 1) == 0 )
  {
    goto LABEL_3;
  }
  sub_56CA00(*(_QWORD *)(a1 + 424), &unk_1326E41, 0);
  sub_578410(a1 + 200);
  if ( (*(_BYTE *)(a1 + 176) & 1) == 0 )
  {
LABEL_4:
    if ( (*(_BYTE *)(a1 + 144) & 1) == 0 )
      goto LABEL_5;
    goto LABEL_13;
  }
LABEL_12:
  sub_56CA00(*(_QWORD *)(a1 + 192), &unk_1326E41, 0);
  if ( (*(_BYTE *)(a1 + 144) & 1) == 0 )
  {
LABEL_5:
    if ( (*(_BYTE *)(a1 + 120) & 1) == 0 )
      goto LABEL_6;
    goto LABEL_14;
  }
LABEL_13:
  sub_56CA00(*(_QWORD *)(a1 + 160), &unk_1326E41, 0);
  if ( (*(_BYTE *)(a1 + 120) & 1) == 0 )
  {
LABEL_6:
    if ( (*(_BYTE *)(a1 + 96) & 1) == 0 )
      goto LABEL_7;
LABEL_15:
    sub_56CA00(*(_QWORD *)(a1 + 112), &unk_1326E41, 0);
    if ( (*(_BYTE *)(a1 + 72) & 1) == 0 )
      return sub_577290(a1);
LABEL_16:
    sub_56CA00(*(_QWORD *)(a1 + 88), &unk_1326E41, 0);
    return sub_577290(a1);
  }
LABEL_14:
  sub_56CA00(*(_QWORD *)(a1 + 136), &unk_1326E41, 0);
  if ( (*(_BYTE *)(a1 + 96) & 1) != 0 )
    goto LABEL_15;
LABEL_7:
  if ( (*(_BYTE *)(a1 + 72) & 1) != 0 )
    goto LABEL_16;
  return sub_577290(a1);
}

bool __fastcall sub_47A560(__int64 a1)
{
  unsigned __int64 v2; // x8
  unsigned __int64 v3; // x8

  if ( *(_BYTE *)(a1 + 114) == 0 )
    return false;
  if ( (sub_4D3CD0(a1 + 128)) == 0 )
    return false;
  if ( *(_BYTE *)(a1 + 993) == 0 )
    return true;
  v2 = *(unsigned __int8 *)(a1 + 1000);
  if ( (v2 & 1) != 0 )
    v3 = *(_QWORD *)(a1 + 1008);
  else
    v3 = v2 >> 1;
  return v3 != 0;
}

__int64 __fastcall sub_47BFC0(__int64 a1)
{
  __int64 result; // x0

  if ( (sub_2C2F70(a1, goff_18F7078)) == 0 )
    return 1;
  result = sub_2C3070(a1, goff_18F7078);
  if ( result != 0 )
    return *(unsigned int *)(result + 28);
  return result;
}

_QWORD *__fastcall sub_49BF60(_QWORD *result, __int64 a2, __int64 a3)
{
  _QWORD *v3; // x8
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF
  __int64 v4; // [xsp+0h] [xbp-10h] BYREF

  v4 = a3;
  v5 = a2;
  if ( a2 != 0 )
  {
    v3 = (_QWORD *)result[11];
    if ( (unsigned __int64)v3 >= result[12] )
    {
      return (_QWORD *)sub_4C3990((char *)(result + 10), &v5, &v4);
    }
    else
    {
      *v3 = a2;
      v3[1] = a3;
      result[11] += 16LL;
    }
  }
  return result;
}

__int64 __fastcall sub_4A1D90(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x10
  __int64 v3; // x19

  v1 = ((__int64*)goff_18F7A68);
  v2 = ((char *)((__int64*)goff_18F7A68) + 1072);
  *(_QWORD *)(a1 - 88) = ((char *)((__int64*)goff_18F7A68) + 16);
  v3 = a1 - 88;
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 8) = v1 + 1200;
  *(_QWORD *)(a1 + 16) = v1 + 1264;
  sub_577290((unsigned int *)(a1 + 24));
  return sub_483450(v3);
}

void __fastcall sub_4A1EE0(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x10
  void *v3; // x19

  v1 = ((__int64*)goff_18F7A68);
  v2 = ((char *)((__int64*)goff_18F7A68) + 1072);
  *(_QWORD *)(a1 - 88) = ((char *)((__int64*)goff_18F7A68) + 16);
  v3 = (void *)(a1 - 88);
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 8) = v1 + 1200;
  *(_QWORD *)(a1 + 16) = v1 + 1264;
  sub_577290((unsigned int *)(a1 + 24));
  sub_483450(v3);
  _ZdlPv(v3);
}

// N5storm20SimpleSessionHandlerE, virtual slot 139
void sub_4ABFC0(__int64 a1, __int64 a2)
{
  __int64 v4; // x1
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x9
  __int64 v10; // x8
  __int64 v11; // x0
  unsigned int v12; // w1
  __int64 v13; // x0
  __int64 v14; // x9
  __int64 v15; // x8
  __int64 v16; // x0
  __int64 v17; // x2
  __int64 v18; // x0

  *(_DWORD *)(*(_QWORD *)(a1 + 48) + 12LL) = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 84);
  v4 = *(_QWORD *)(a2 + 56);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL);
  if ( v5 != 0 )
  {
    sub_2C2960(v5, v4);
    v6 = *(_QWORD *)(a2 + 72);
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL);
    if ( v7 == 0 )
      goto LABEL_9;
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(__int64, void *, int))(*(_QWORD *)v4 + 40LL))(v4, &unk_1326E41, 0);
    v9 = *(_QWORD *)(a1 + 48);
    v10 = v8;
    v11 = *(_QWORD *)(v9 + 16);
    *(_QWORD *)(v9 + 16) = v10;
    if ( v11 != 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v6 = *(_QWORD *)(a2 + 72);
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL);
    if ( v7 == 0 )
    {
LABEL_9:
      v13 = (*(__int64 (__fastcall **)(__int64, void *, int))(*(_QWORD *)v6 + 40LL))(v6, &unk_1326E41, 0);
      v14 = *(_QWORD *)(a1 + 48);
      v15 = v13;
      v16 = *(_QWORD *)(v14 + 24);
      *(_QWORD *)(v14 + 24) = v15;
      if ( v16 != 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      v12 = *(_DWORD *)(a1 + 56);
      if ( v12 == *(_DWORD *)(a1 + 60) )
        goto LABEL_12;
LABEL_14:
      v17 = *(_QWORD *)(a1 + 256);
      v18 = a1;
      { sub_4AC100(v18, v12, v17); return; }
    }
  }
  sub_5B50D0(v7, v6);
  v12 = *(_DWORD *)(a1 + 56);
  if ( v12 != *(_DWORD *)(a1 + 60) )
    goto LABEL_14;
LABEL_12:
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL);
  v18 = a1;
  { sub_4AC100(v18, v12, v17); return; }
}

// N5storm20SimpleSessionHandlerE, virtual slot 167
__int64 __fastcall sub_4AE530(__int64 a1, __int64 a2)
{
  __int64 v2; // x21
  __int64 v3; // x9
  _QWORD *v6; // x9
  _QWORD *v7; // x11
  __int64 (__fastcall *v10)(); // [xsp+18h] [xbp-18h] BYREF
  __int64 v9; // [xsp+8h] [xbp-28h] BYREF

  v2 = *(_QWORD *)(a2 + 48);
  v3 = *(_QWORD *)(v2 + 32);
  *(_QWORD *)(a1 + 216) = v3;
  if ( v3 != 0 )
  {
    v6 = *(_QWORD **)(v2 + 32);
    v10 = goff_18F7AD8;
    v9 = a1 + 216;
    v7 = (_QWORD *)v6[11];
    if ( (unsigned __int64)v7 >= v6[12] )
    {
      sub_4C3990((char *)(v6 + 10), &v10, &v9);
      if ( *(_DWORD *)(a1 + 56) == -1 )
        goto LABEL_6;
      goto LABEL_5;
    }
    *v7 = goff_18F7AD8;
    v7[1] = a1 + 216;
    v6[11] += 16LL;
  }
  if ( *(_DWORD *)(a1 + 56) != -1 )
LABEL_5:
    **(_BYTE **)(a1 + 48) = 0;
LABEL_6:
  *(_QWORD *)(v2 + 48) = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(v2 + 24) = a1;
  *(_DWORD *)(v2 + 16) = *(_DWORD *)(a1 + 56);
  *(_QWORD *)(v2 + 56) = a1 + 104;
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 352LL))(*(_QWORD *)(a1 + 64), a2);
}

__int64 __fastcall sub_4DA6B0(_QWORD *a1, unsigned int *a2)
{
  __int64 result; // x0
  _QWORD *v4; // x9
  unsigned int v5; // w10
  _QWORD *v6; // x19
  __int64 i; // x11
  unsigned int v8; // w12
  bool v9; // cf
  _BOOL4 v10; // w12
  _QWORD *v11; // x10
  _QWORD *v12; // x9
  __int64 v13; // x10
  __int64 v14; // x11
  _QWORD *v15; // t1
  __int64 v16; // x0

  v4 = a1 + 1;
  result = a1[1];
  if ( result != 0 )
  {
    v5 = *a2;
    v6 = v4;
    for ( i = result; i != 0; i = *(_QWORD *)(i + 8LL * v10) )
    {
      v8 = *(_DWORD *)(i + 32);
      v9 = v8 >= v5;
      v10 = v8 < v5;
      if ( v9 )
        v6 = (_QWORD *)i;
    }
    if ( v6 == v4 )
    {
      return 0;
    }
    else if ( *((_DWORD *)v6 + 8) <= v5 )
    {
      v11 = (_QWORD *)v6[1];
      if ( v11 != nullptr )
      {
        do
        {
          v12 = v11;
          v11 = (_QWORD *)*v11;
        }
        while ( v11 != nullptr );
      }
      else
      {
        v13 = (__int64)(v6 + 2);
        v12 = (_QWORD *)v6[2];
        if ( (_QWORD *)*v12 != v6 )
        {
          do
          {
            v14 = *(_QWORD *)v13;
            v15 = *(_QWORD **)(*(_QWORD *)v13 + 16LL);
            v13 = *(_QWORD *)v13 + 16LL;
            v12 = v15;
          }
          while ( *v15 != v14 );
        }
      }
      if ( (_QWORD *)*a1 == v6 )
        *a1 = v12;
      --a1[2];
      std____tree_remove(result, v6);
      v16 = v6[7];
      if ( v16 != 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
        v6[7] = 0;
      }
      sub_56CA00(v6, &unk_1326E41, 0);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}

void sub_4EE2A0(__int64 result)
{
  _BYTE *v1; // x22
  __int64 v2; // x19
  __int64 v3; // x20
  _QWORD *i; // x21

  if ( *(char*)goff_18F9230 != 0 )
  {
    v1 = (_BYTE *)goff_18F88D8;
    v2 = result;
    v3 = result + 40;
    if ( *(char*)goff_18F88D8 == 0 )
      sub_4EE210(result + 40);
    for ( i = *(_QWORD **)(v2 + 8); i != *(_QWORD **)(v2 + 24); i = (_QWORD *)i[1] )
      result = (*(__int64 (__fastcall **)(_QWORD *))(*i + 24LL))(i);
    if ( *v1 == 0 )
      { sub_4EE230(v3); return; }
  }
  return;
}

__int64 __fastcall sub_4F6A30(char *a1, unsigned int a2)
{
  char *v4; // x9
  __int64 v5; // x20
  __int64 v6; // t1
  char *v7; // x8
  unsigned int v8; // w10
  bool v9; // cf
  _BOOL4 v10; // w10

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 80) + 8LL) != 0 )
    j__pthread_self();
  v6 = *(_QWORD *)(a1 + 48);
  v5 = a1 + 48;
  v4 = v6;
  if ( v6 == 0 )
    return 0;
  v7 = v5;
  do
  {
    v8 = *(_DWORD *)(v4 + 32);
    v9 = v8 >= a2;
    v10 = v8 < a2;
    if ( v9 )
      v7 = v4;
    v4 = *(_QWORD *)(v4 + 8LL * v10);
  }
  while ( v4 != 0 );
  if ( v7 == v5 )
    return 0;
  if ( *(_DWORD *)(v7 + 32) <= a2 )
    return *(_QWORD *)(v7 + 40);
  return 0;
}

__int64 __fastcall sub_4FD820(char *a1, __int64 a2)
{
  char *v2; // x20
  __int64 v3; // x21

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a1 + 8;
  if ( v2 == a1 + 8 )
    return 0;
  while ( ((*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v2 + 16) + 48LL))(*(_QWORD *)(v2 + 16), a2) & 1) == 0 )
  {
    v2 = *(_QWORD *)(v2 + 8);
    if ( v2 == v3 )
      return 0;
  }
  return *(_QWORD *)(v2 + 16);
}

__int64 __fastcall sub_509FB0(__int64 a1)
{
  __int64 v1; // x19
  __int64 v2; // x20
  __int64 v3; // x8

  v1 = *((__int64*)goff_18F94E0);
  v2 = *(unsigned int *)(a1 + 8);
  if ( *(char*)goff_18F87A0 != 0 && (_DWORD)(v3 = *(unsigned int *)sub_4D6990(*((__int64*)goff_18F87B0))) != 0 )
    return *(_QWORD *)(v1 + 216 * v2 + 16) + 96 * v3;
  else
    return v1 + 216 * v2 + 24;
}

__int64 __fastcall sub_50A030(unsigned int a1)
{
  __int64 v1; // x19
  __int64 v2; // x20
  __int64 v3; // x8

  v1 = *((__int64*)goff_18F94E0);
  v2 = a1;
  if ( *(char*)goff_18F87A0 != 0 && (_DWORD)(v3 = *(unsigned int *)sub_4D6990(*((__int64*)goff_18F87B0))) != 0 )
    return *(_QWORD *)(v1 + 216 * v2 + 16) + 96 * v3;
  else
    return v1 + 216 * v2 + 24;
}

void sub_50F520(__int64 result, int a2)
{
  unsigned __int8 *v2; // x22
  __int64 v4; // x19
  __int64 v5; // x21
  int v6; // w8

  v2 = (unsigned __int8 *)goff_18F88D8;
  v4 = result;
  if ( *(char*)goff_18F88D8 != 0 )
  {
    *(_DWORD *)(result + 28) += a2;
    *(_BYTE *)(result + 24) = 1;
  }
  else
  {
    v5 = *(_QWORD *)((__int64*)goff_18F95B8);
    sub_4EE210(*(_QWORD *)((__int64*)goff_18F95B8));
    v6 = *v2;
    *(_DWORD *)(v4 + 28) += a2;
    *(_BYTE *)(v4 + 24) = 1;
    if ( v6 == 0 )
      { sub_4EE230(v5); return; }
  }
  return;
}

_Bool __fastcall sub_50F930(__int64 a1, __int64 a2, _WORD *a3, unsigned __int16 a4)
{
__attribute__((visibility("hidden"))) __int64 sub_4FAEC0(__typeof__(a2));
__attribute__((visibility("hidden"))) _Bool sub_5118B0(__typeof__(a1), __typeof__(a2), __typeof__(a4));

  if ( (sub_5118B0(a1, a2, a4)) == 0 )
    return 0;
  *a3 = sub_4FAEC0(a2);
  return 1;
}

// N5storm2mm20BerkeleySocketDriver14BerkeleySocketE, virtual slot 8
__int64 __fastcall sub_512510(__int64 a1)
{
  _BYTE *v1; // x20
  __int64 v2; // x19

  v1 = (_BYTE *)goff_18F88D8;
  if ( *(char*)goff_18F88D8 != 0 )
    return 1;
  v2 = a1 + 16;
  sub_4EE210(a1 + 16);
  if ( *v1 != 0 )
    return 1;
  sub_4EE230(v2);
  return 1;
}

__int64 sub_513810()
{
  __int64 v0; // x19
  __int64 v1; // x8

  v0 = qword_19154C0;
  if ( *(char*)goff_18F87A0 != 0 && (_DWORD)(v1 = *(unsigned int *)sub_4D6990(*((__int64*)goff_18F87B0))) != 0 )
    return *(unsigned __int16 *)(*(_QWORD *)(v0 + 16) + 2 * v1);
  else
    return *(unsigned __int16 *)(v0 + 24);
}

__int64 sub_513880()
{
  __int64 v0; // x19
  __int64 v1; // x8

  v0 = qword_19154C8;
  if ( *(char*)goff_18F87A0 != 0 && (_DWORD)(v1 = *(unsigned int *)sub_4D6990(*((__int64*)goff_18F87B0))) != 0 )
    return *(unsigned __int16 *)(*(_QWORD *)(v0 + 16) + 2 * v1);
  else
    return *(unsigned __int16 *)(v0 + 24);
}

_DWORD *__fastcall sub_5191A0(_DWORD *result, unsigned int a2)
{
  int v2; // w9

  result[8] += a2;
  v2 = result[9] + 1;
  result[9] = v2;
  if ( result[6] <= a2 )
  {
    if ( result[7] >= a2 )
      return result;
LABEL_5:
    result[7] = a2;
    return result;
  }
  result[6] = a2;
  if ( result[7] < a2 )
    goto LABEL_5;
  return result;
}

// N5storm2mm23JobProcessProtocolEventE, virtual slot 0
__int64 __fastcall sub_530820(_QWORD *a1)
{
  _QWORD *v1; // x19

  *a1 = ((__int64 *)goff_18F9A40 + 2);
  v1 = a1;
  if ( *(char*)goff_18F9A48 == 0 )
  {
    sub_518A40(a1[12]);
    a1 = v1;
  }
  return sub_4F4810((__int64)a1);
}

__int64 __fastcall sub_530E00(_QWORD *a1)
{
  _QWORD *v2; // x20
  __int64 result; // x0
  _BYTE *v4; // x8
  __int64 (__fastcall **v5)(); // x11
  __int64 (__fastcall *v6)(); // x12
  RecoveredSdkText self; // [xsp+8h] [xbp-18h] BYREF

  v2 = a1 + 1;
  *a1 = ((__int64 *)goff_18F9A60 + 2);
  Recovered_ResultTextConstruct(&self, "Protocol");
  sub_519280(v2, &self);
  Recovered_ResultTextDestroy(&self);
  result = sub_51D650(a1 + 6, 1);
  v4 = (_BYTE *)goff_18F9A68;
  if ( *(char*)goff_18F9A68 == 0 )
  {
    v5 = (__int64 (__fastcall **)())((__int64*)goff_18F96F8);
    v6 = goff_18F9A78;
    *((__int64*)goff_18F96F0) = ((__int64*)goff_18F9A70);
    *v5 = v6;
    *v4 = 1;
  }
  return result;
}

// N5storm2mm15JobFacadeLogoutE, virtual slot 12
void __fastcall sub_54A6C0(__int64 a1, __int64 a2)
{
  unsigned int v3; // w8
  RecoveredSdkResult self; // [xsp+8h] [xbp-38h] BYREF

  if ( *(_DWORD *)(a1 + 56) != 5 )
  {
    Recovered_ResultCopy(&self, (const RecoveredSdkResult *)(a2 + 72));
    sub_4F5FA0(&self);
    Recovered_ResultTextDestroy(&self.domain);
    *(_BYTE *)(a1 + 288) = 1;
    v3 = *(_DWORD *)(a1 + 160);
    if ( v3 > 4 || v3 == 1 )
      sub_4ECA10(a1 + 144, 4);
  }
}

// N5storm25SocketSchedulerInitParamsE, virtual slot 1
void __fastcall sub_55D2C0(_QWORD *a1)
{
  char *v1; // x20
  unsigned __int64 *v3; // x8
  unsigned __int64 v4; // x9

  v1 = (char *)a1[2];
  *a1 = ((__int64 *)((__int64*)goff_18F9D20) + 2);
  if ( v1 == nullptr )
    goto LABEL_5;
  v3 = (unsigned __int64 *)((char *)v1 + 8);
  v4 = __atomic_fetch_sub(v3, 1, 5);
  if ( v4 == 0 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 16LL))(v1);
    std____shared_weak_count____release_weak(v1);
    _ZdlPv(a1);
  }
  else
  {
LABEL_5:
    _ZdlPv(a1);
  }
}

// N5storm6SocketE, virtual slot 18
char *__fastcall sub_568CF0(__int64 a1, _BYTE *a2, _BYTE *a3, __int64 a4, __int64 a5, unsigned int *a6)
{
  char *result; // x0
  int v11; // [xsp+Ch] [xbp-14h] BYREF
  int v10; // [xsp+8h] [xbp-18h] BYREF

  result = (char *)*(unsigned int *)(a1 + 44);
  if ( (_DWORD)result == -1 || *(_DWORD *)(a1 + 40) != 2 )
    goto LABEL_6;
  v10 = 4;
  v11 = 0;
  result = (char *)nn__socket__GetSockOpt(result, 0xFFFF, 4103, (int)&v11, &v10, a6);
  if ( ((unsigned int)result & 0x80000000) != 0 )
    goto LABEL_7;
  if ( v11 != 0 )
  {
    if ( v11 == 111 )
    {
LABEL_6:
      *a2 = 1;
      *a3 = 0;
      return result;
    }
LABEL_7:
    *a2 = 0;
    return result;
  }
  *a2 = 1;
  *a3 = 1;
  return result;
}

__int64 __fastcall sub_570DB0(_QWORD *a1, unsigned __int16 *a2)
{
  __int64 result; // x0
  _QWORD *v4; // x9
  unsigned int v5; // w10
  _QWORD *v6; // x19
  __int64 i; // x11
  unsigned int v8; // w12
  bool v9; // cf
  _BOOL4 v10; // w12
  _QWORD *v11; // x10
  _QWORD *v12; // x9
  __int64 v13; // x10
  __int64 v14; // x11
  _QWORD *v15; // t1
  char *v16; // x20
  unsigned __int64 *v17; // x8
  unsigned __int64 v18; // x9

  v4 = a1 + 1;
  result = a1[1];
  if ( result != 0 )
  {
    v5 = *a2;
    v6 = v4;
    for ( i = result; i != 0; i = *(_QWORD *)(i + 8LL * v10) )
    {
      v8 = *(unsigned __int16 *)(i + 32);
      v9 = v8 >= v5;
      v10 = v8 < v5;
      if ( v9 )
        v6 = (_QWORD *)i;
    }
    if ( v6 == v4 )
    {
      return 0;
    }
    else if ( *((unsigned __int16 *)v6 + 16) <= v5 )
    {
      v11 = (_QWORD *)v6[1];
      if ( v11 != nullptr )
      {
        do
        {
          v12 = v11;
          v11 = (_QWORD *)*v11;
        }
        while ( v11 != nullptr );
      }
      else
      {
        v13 = (__int64)(v6 + 2);
        v12 = (_QWORD *)v6[2];
        if ( (_QWORD *)*v12 != v6 )
        {
          do
          {
            v14 = *(_QWORD *)v13;
            v15 = *(_QWORD **)(*(_QWORD *)v13 + 16LL);
            v13 = *(_QWORD *)v13 + 16LL;
            v12 = v15;
          }
          while ( *v15 != v14 );
        }
      }
      if ( (_QWORD *)*a1 == v6 )
        *a1 = v12;
      --a1[2];
      std____tree_remove(result, v6);
      v16 = (char *)v6[6];
      if ( v16 != nullptr )
      {
        v17 = (unsigned __int64 *)((char *)v16 + 8);
        v18 = __atomic_fetch_sub(v17, 1, 5);
        if ( v18 == 0 )
        {
          (*(void (__fastcall **)(char *))(*(_QWORD *)v16 + 16LL))(v16);
          std____shared_weak_count____release_weak(v16);
        }
      }
      sub_37030(v6);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}

bool __fastcall sub_5765F0(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 v5; // x0

  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
  return *(_DWORD *)(v5 + 4) >= a2 && *(_DWORD *)(v5 + 4LL * (a2 - 1) + 8) == *a3;
}

__int64 __fastcall sub_58A350(_DWORD *a1, _BYTE *a2, _Bool a3)
{
  __int64 result; // x0

  if ( a2 != nullptr )
  {
    if ( *a2 != 0 )
    {
      if ( a3 )
        result = sub_54CAB0(a2);
      else
        result = sub_54CA70(a2);
      *a1 = result;
    }
    else
    {
      *a1 = -1;
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    *a1 = -1;
    return 0xFFFFFFFFLL;
  }
  return result;
}

__int64 __fastcall sub_58A960(char *a1)
{
  __int64 v2; // x0
  __int64 v3; // x20
  __int64 v4; // x20
  __int64 v5; // x20
  char *result; // x0

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 != 0 )
  {
    sub_380D0(v2);
    *(_QWORD *)(a1 + 24) = 0;
  }
  v3 = *(_QWORD *)(a1 + 128);
  if ( v3 != 0 )
  {
    std__mutex___mutex((char *)(v3 + 8));
    std__condition_variable___condition_variable((char *)v3);
    sub_57EDC0(v3, 0LL, &unk_1326E41, 0);
    *(_QWORD *)(a1 + 128) = 0;
  }
  v4 = *(_QWORD *)(a1 + 120);
  if ( v4 != 0 )
  {
    std__mutex___mutex((char *)(v4 + 8));
    std__condition_variable___condition_variable((char *)v4);
    sub_57EDC0(v4, 0LL, &unk_1326E41, 0);
    *(_QWORD *)(a1 + 120) = 0;
  }
  v5 = *(_QWORD *)(a1 + 112);
  if ( v5 != 0 )
  {
    std__mutex___mutex((char *)(v5 + 8));
    std__condition_variable___condition_variable((char *)v5);
    sub_57EDC0(v5, 0LL, &unk_1326E41, 0);
    *(_QWORD *)(a1 + 112) = 0;
  }
  if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
    sub_56CA00(*(_QWORD *)(a1 + 96), &unk_1326E41, 0);
  result = *(_QWORD *)(a1 + 64);
  if ( a1 + 32 == result )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 32LL))(result);
  if ( result != 0 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 40LL))(result);
  return result;
}

// N5storm9transport6packet7inEvent14PacketReceivedE, virtual slot 5
__int64 __fastcall sub_5C1200(__int64 a1)
{
  __int64 result; // x0
  __int64 v3; // x8
  __int64 v4; // x9
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v7; // x9

  result = sub_56C9F0(72, 8, 1092624387, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = ((char *)goff_18EDE08 + 16);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(result + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = ((__int64 *)((__int64*)goff_18FADA8) + 2);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(result + 47) = *(_DWORD *)(a1 + 47);
  *(_QWORD *)(result + 32) = v3;
  *(_QWORD *)(result + 40) = v4;
  v5 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(result + 56) = v5;
  ++*(_WORD *)(v5 + 248);
  v6 = *(_QWORD *)(result + 56);
  v7 = *(_QWORD *)(v6 + 16);
  if ( v7 != 0 )
  {
    *(_DWORD *)(result + 64) = *(_DWORD *)(v7 + 28);
    *(_DWORD *)(result + 68) = *(_DWORD *)(*(_QWORD *)(v6 + 16) + 32LL);
  }
  else
  {
    *(_DWORD *)(result + 64) = 0;
    *(_DWORD *)(result + 68) = 0;
  }
  return result;
}

// N5storm9transport4Link10PunchEventE, virtual slot 1
void __fastcall sub_5C26D0(_QWORD *a1)
{
  char *v1; // x20
  unsigned __int64 *v3; // x8
  unsigned __int64 v4; // x9

  v1 = (char *)a1[43];
  *a1 = ((char *)((__int64*)goff_18FAAC0) + 16);
  if ( v1 == nullptr )
    goto LABEL_5;
  v3 = (unsigned __int64 *)((char *)v1 + 8);
  v4 = __atomic_fetch_sub(v3, 1, 5);
  if ( v4 == 0 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 16LL))(v1);
    std____shared_weak_count____release_weak(v1);
    _ZdlPv(a1);
  }
  else
  {
LABEL_5:
    _ZdlPv(a1);
  }
}

// N5storm17NetPropertyVectorINS_15NetPropertyDataINS_9IPAddressENS_20NetPropertyDataTraitIS2_EEEELm0EE10VectorSizeE, virtual slot 19
bool __fastcall sub_5C68D0(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0
      && *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) - **(_QWORD **)(a1 + 32) == *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL)
                                                                           - **(_QWORD **)(a2 + 32);
}

size_t *__fastcall sub_5F6490(size_t a1, __int64 a2, unsigned int a3)
{
  size_t *v4; // x0
  size_t *v5; // x20

  if ( a1 == 0 )
    return nullptr;
  v4 = (size_t *)sub_554100(a1 + 8, 16, 1092669441, a2, a3);
  v5 = v4;
  if ( v4 != nullptr )
  {
    *v4 = a1;
    v5 = v4 + 1;
    memset(v4 + 1, 0, a1);
  }
  return v5;
}

size_t *__fastcall sub_5F6520(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  size_t *v4; // x19
  size_t v5; // x20
  size_t *v6; // x0

  v4 = nullptr;
  if ( a1 == 0 || a2 == 0 )
    return v4;
  v5 = a2 * a1;
  if ( a2 * a1 != 0 )
  {
    v6 = (size_t *)sub_554100(v5 + 8, 16, 1092669441, a3, a4);
    v4 = v6;
    if ( v6 != nullptr )
    {
      *v6 = v5;
      v4 = v6 + 1;
      memset(v6 + 1, 0, v5);
    }
    return v4;
  }
  return nullptr;
}

// N5storm5punch8internal7inEvent12RefreshEntryE, virtual slot 0
__int64 __fastcall sub_6022A0(__int64 a1)
{
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18FBB08) + 2);
  sub_5F7870(a1 + 280);
  if ( (*(_BYTE *)(a1 + 248) & 1) != 0 )
  {
    sub_56CA00(*(_QWORD *)(a1 + 264), &unk_1326E41, 0);
    if ( (*(_BYTE *)(a1 + 216) & 1) == 0 )
      return sub_578410(a1 + 32);
LABEL_6:
    sub_56CA00(*(_QWORD *)(a1 + 232), &unk_1326E41, 0);
    return sub_578410(a1 + 32);
  }
  if ( (*(_BYTE *)(a1 + 216) & 1) != 0 )
    goto LABEL_6;
  return sub_578410(a1 + 32);
}

// N5storm5punch8internal7inEvent20AddPortMappingResultE, virtual slot 0
__int64 __fastcall sub_6056B0(__int64 a1)
{
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18FB8A0) + 2);
  sub_5F7870(a1 + 312);
  if ( (*(_BYTE *)(a1 + 264) & 1) != 0 )
  {
    sub_56CA00(*(_QWORD *)(a1 + 280), &unk_1326E41, 0);
    if ( (*(_BYTE *)(a1 + 232) & 1) == 0 )
      return sub_578410(a1 + 48);
LABEL_6:
    sub_56CA00(*(_QWORD *)(a1 + 248), &unk_1326E41, 0);
    return sub_578410(a1 + 48);
  }
  if ( (*(_BYTE *)(a1 + 232) & 1) != 0 )
    goto LABEL_6;
  return sub_578410(a1 + 48);
}

// N5storm5punch8internal7inEvent24GetSpecificMappingResultE, virtual slot 0
__int64 __fastcall sub_605FE0(__int64 a1)
{
  *(_QWORD *)a1 = ((__int64 *)((__int64*)goff_18FB8B0) + 2);
  sub_5F7870(a1 + 312);
  if ( (*(_BYTE *)(a1 + 264) & 1) != 0 )
  {
    sub_56CA00(*(_QWORD *)(a1 + 280), &unk_1326E41, 0);
    if ( (*(_BYTE *)(a1 + 232) & 1) == 0 )
      return sub_578410(a1 + 48);
LABEL_6:
    sub_56CA00(*(_QWORD *)(a1 + 248), &unk_1326E41, 0);
    return sub_578410(a1 + 48);
  }
  if ( (*(_BYTE *)(a1 + 232) & 1) != 0 )
    goto LABEL_6;
  return sub_578410(a1 + 48);
}

// N5storm5punch28UpnpThreadCommandGetSpecificE, virtual slot 0
__int64 __fastcall sub_609920(__int64 a1)
{
  *(_QWORD *)a1 = ((__int64 *)goff_18FB900 + 2);
  sub_5F7870(a1 + 280);
  if ( (*(_BYTE *)(a1 + 248) & 1) != 0 )
  {
    sub_56CA00(*(_QWORD *)(a1 + 264), &unk_1326E41, 0);
    if ( (*(_BYTE *)(a1 + 216) & 1) == 0 )
      return sub_578410(a1 + 32);
LABEL_6:
    sub_56CA00(*(_QWORD *)(a1 + 232), &unk_1326E41, 0);
    return sub_578410(a1 + 32);
  }
  if ( (*(_BYTE *)(a1 + 216) & 1) != 0 )
    goto LABEL_6;
  return sub_578410(a1 + 32);
}

// N5storm5punch22DetectNetworkInitParamE, virtual slot 1
void __fastcall sub_60FCC0(_QWORD *a1)
{
  char *v1; // x20
  unsigned __int64 *v3; // x8
  unsigned __int64 v4; // x9

  v1 = (char *)a1[8];
  *a1 = ((__int64 *)((__int64*)goff_18FB260) + 2);
  if ( v1 == nullptr )
    goto LABEL_5;
  v3 = (unsigned __int64 *)((char *)v1 + 8);
  v4 = __atomic_fetch_sub(v3, 1, 5);
  if ( v4 == 0 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 16LL))(v1);
    std____shared_weak_count____release_weak(v1);
    _ZdlPv(a1);
  }
  else
  {
LABEL_5:
    _ZdlPv(a1);
  }
}

// N5storm5punch29TraversalImplNetworkInitParamE, virtual slot 1
void __fastcall sub_60FD40(_QWORD *a1)
{
  char *v1; // x20
  unsigned __int64 *v3; // x8
  unsigned __int64 v4; // x9

  v1 = (char *)a1[8];
  *a1 = ((__int64 *)((__int64*)goff_18FB268) + 2);
  if ( v1 == nullptr )
    goto LABEL_5;
  v3 = (unsigned __int64 *)((char *)v1 + 8);
  v4 = __atomic_fetch_sub(v3, 1, 5);
  if ( v4 == 0 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 16LL))(v1);
    std____shared_weak_count____release_weak(v1);
    _ZdlPv(a1);
  }
  else
  {
LABEL_5:
    _ZdlPv(a1);
  }
}

// N5storm5punch24UpnpImplNetworkInitParamE, virtual slot 1
void __fastcall sub_60FDC0(_QWORD *a1)
{
  char *v1; // x20
  unsigned __int64 *v3; // x8
  unsigned __int64 v4; // x9

  v1 = (char *)a1[8];
  *a1 = ((__int64 *)((__int64*)goff_18FB270) + 2);
  if ( v1 == nullptr )
    goto LABEL_5;
  v3 = (unsigned __int64 *)((char *)v1 + 8);
  v4 = __atomic_fetch_sub(v3, 1, 5);
  if ( v4 == 0 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 16LL))(v1);
    std____shared_weak_count____release_weak(v1);
    _ZdlPv(a1);
  }
  else
  {
LABEL_5:
    _ZdlPv(a1);
  }
}

__int64 __fastcall sub_62AAE0(_QWORD *a1, unsigned int *a2)
{
  __int64 result; // x0
  _QWORD *v4; // x9
  unsigned int v5; // w10
  _QWORD *v6; // x19
  __int64 i; // x11
  unsigned int v8; // w12
  bool v9; // cf
  _BOOL4 v10; // w12
  _QWORD *v11; // x10
  _QWORD *v12; // x9
  __int64 v13; // x10
  __int64 v14; // x11
  _QWORD *v15; // t1

  v4 = a1 + 1;
  result = a1[1];
  if ( result != 0 )
  {
    v5 = *a2;
    v6 = v4;
    for ( i = result; i != 0; i = *(_QWORD *)(i + 8LL * v10) )
    {
      v8 = *(_DWORD *)(i + 32);
      v9 = v8 >= v5;
      v10 = v8 < v5;
      if ( v9 )
        v6 = (_QWORD *)i;
    }
    if ( v6 == v4 )
    {
      return 0;
    }
    else if ( *((_DWORD *)v6 + 8) <= v5 )
    {
      v11 = (_QWORD *)v6[1];
      if ( v11 != nullptr )
      {
        do
        {
          v12 = v11;
          v11 = (_QWORD *)*v11;
        }
        while ( v11 != nullptr );
      }
      else
      {
        v13 = (__int64)(v6 + 2);
        v12 = (_QWORD *)v6[2];
        if ( (_QWORD *)*v12 != v6 )
        {
          do
          {
            v14 = *(_QWORD *)v13;
            v15 = *(_QWORD **)(*(_QWORD *)v13 + 16LL);
            v13 = *(_QWORD *)v13 + 16LL;
            v12 = v15;
          }
          while ( *v15 != v14 );
        }
      }
      if ( (_QWORD *)*a1 == v6 )
        *a1 = v12;
      --a1[2];
      std____tree_remove(result, v6);
      sub_578410(v6 + 5);
      sub_56CA00(v6, &unk_1326E41, 0);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}

