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
extern char goff_18EDE08[];
extern char goff_18F7078[];
extern char goff_18F87A0[];
extern char goff_18F87B0[];
extern char goff_18F88D8[];
extern char goff_18F94E0[];
extern char goff_18FADA8[];
extern char goff_18FB8A0[];
extern char goff_18FB8B0[];
extern char goff_18FBB08[];
__int64 nn__os__ConvertToTimeSpan();
__int64 nn__os__GetSystemTick();
__int64 pthread_mutex_lock();
__int64 pthread_mutex_unlock();
extern __attribute__((visibility("hidden"))) __int64 qword_19154C0;
extern __attribute__((visibility("hidden"))) __int64 qword_19154C8;
__int64 std__condition_variable___condition_variable();
__int64 std__mutex___mutex();
__int64 std__shared_timed_mutex__lock_shared();
__int64 std__shared_timed_mutex__unlock_shared();
__attribute__((visibility("hidden"))) __int64 sub_10C930();
__attribute__((visibility("hidden"))) __int64 sub_10CC70();
__attribute__((visibility("hidden"))) __int64 sub_12B280();
__attribute__((visibility("hidden"))) __int64 sub_12B4B0();
__attribute__((visibility("hidden"))) __int64 sub_142440();
__attribute__((visibility("hidden"))) __int64 sub_142580();
__attribute__((visibility("hidden"))) __int64 sub_14EA00();
__attribute__((visibility("hidden"))) __int64 sub_14EBE0();
__attribute__((visibility("hidden"))) _Bool sub_2C2F70();
__attribute__((visibility("hidden"))) __int64 sub_2C3070();
__attribute__((visibility("hidden"))) _Bool sub_2C6640();
__attribute__((visibility("hidden"))) __int64 sub_36EA0();
__attribute__((visibility("hidden"))) __int64 sub_37030();
__attribute__((visibility("hidden"))) __int64 sub_380D0();
__attribute__((visibility("hidden"))) _Bool sub_4D3CD0();
__attribute__((visibility("hidden"))) __int64 sub_4D6990();
__attribute__((visibility("hidden"))) __int64 sub_4EE210();
__attribute__((visibility("hidden"))) __int64 sub_4EE230();
__attribute__((visibility("hidden"))) __int64 sub_54CA70();
__attribute__((visibility("hidden"))) __int64 sub_54CAB0();
__attribute__((visibility("hidden"))) __int64 sub_554100();
__attribute__((visibility("hidden"))) __int64 sub_56C9F0();
__attribute__((visibility("hidden"))) __int64 sub_56CA00();
__attribute__((visibility("hidden"))) _Bool sub_576540();
__attribute__((visibility("hidden"))) __int64 sub_578410();
__attribute__((visibility("hidden"))) __int64 sub_57EDC0();
__attribute__((visibility("hidden"))) _Bool sub_57F110();
__attribute__((visibility("hidden"))) __int64 sub_5F7870();
__attribute__((visibility("hidden"))) __int64 sub_9B180();
__attribute__((visibility("hidden"))) __int64 sub_C2320();
__attribute__((visibility("hidden"))) __int64 sub_C24F0();
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
  *(_QWORD *)result = goff_18EDE08 + 16;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(result + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(result + 24) = *(_QWORD *)(a1 + 24);
  *(_QWORD *)result = ((__int64*)goff_18FADA8) + 2;
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
  *(_QWORD *)a1 = ((__int64*)goff_18FBB08) + 2;
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
  *(_QWORD *)a1 = ((__int64*)goff_18FB8A0) + 2;
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
  *(_QWORD *)a1 = ((__int64*)goff_18FB8B0) + 2;
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

