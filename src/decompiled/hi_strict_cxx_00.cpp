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
#define __fastcall
#define __cdecl
#define __noreturn
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
extern "C" {
void* memcpy(void*, const void*, size_t); void* memset(void*, int, size_t); void* memmove(void*, const void*, size_t); int memcmp(const void*, const void*, size_t); size_t strlen(const char*); int strcmp(const char*, const char*); char* strcpy(char*, const char*); char* strncpy(char*, const char*, size_t); int strncmp(const char*, const char*, size_t); void free(void*) noexcept; void* malloc(size_t); float fabsf(float); float sqrtf(float); float floorf(float); float ceilf(float);
__int64 _ZdlPv(...);
extern char byte_154D880;
extern int dword_191FB00;
__int64 nn__mem__NumberLineAllocator__Finalize(...) noexcept;
__int64 nn__os__FinalizeMutex(...) noexcept;
extern void* off_1845338[];
extern void* off_1863D38[];
extern void* off_1863D80[];
extern void* off_1866110[];
extern void* off_189C2B0[];
extern void* off_18A1700[];
extern void* off_18ABA40[];
extern void* off_18AEA10[];
extern void* off_18B55F8[];
extern void* off_18B6FE8[];
extern void* off_18CF808[];
extern void* off_18DC658[];
extern void* off_18DF550[];
extern void* off_18DF5B0[];
extern void* off_18DF8B0[];
extern void* off_18E0C48[];
extern void* off_18E6478[];
extern void* off_18E86B0[];
extern void* off_18E9950[];
extern void* off_18E9970[];
extern void* off_18E99C0[];
extern void* off_18E9A70[];
extern void* off_18E9B40[];
extern void* off_18EA8F0[];
extern void* off_18EA938[];
extern void* off_18EAC80[];
extern void* off_18EAD30[];
extern void* off_191A900[];
extern __int64 qword_191FAF8;
extern __int64 qword_1926BD8;
extern __int64 qword_1935058;
__int64 sub_4A7340(...);
__int64 sub_56CA00(...);
__int64 sub_690EE0(...);
__int64 sub_6A2640(...);
__int64 sub_781380(...);
__int64 sub_894BA0(...);
unsigned char sub_A82B30(...);
__int64 sub_AAEE30(...);
__int64 sub_B9D3F0(...);
__int64 sub_C2C640(...);
__int64 sub_C37EB0(...);
__int64 sub_C57A30(...);
__int64 sub_EC8DD0(...);
__int64 sub_EEA5A0(...);
__int64 sub_EEAD80(...);
__int64 sub_EF9DF0(...);
__int64 sub_EFB6C0(...);
__int64 sub_F061F0(...);
__int64 sub_F25830(...);
__int64 sub_F28890(...);
__int64 sub_F2EA40(...);
__int64 sub_F322F0(...);
__int64 sub_F35B60(...);
__int64 sub_F701B0(...);
__int64 sub_F70680(...);
__int64 sub_F72760(...);
__int64 sub_F951C0(...);
__int64 sub_FA0140(...);

// N4Onyx9BankQueryE, virtual slot 2
__int64 __fastcall sub_6A1E80(__int64 a1) noexcept
{
  __int64 v1; // x8
  __int64 v3; // x1
  __int64 result; // x0
  __int64 v5; // x8
  __int64 v6; // x2

  *(_DWORD *)(a1 + 56) |= 2u;
  v1 = *(_QWORD *)(a1 + 88);
  if ( v1 != 0 )
    v3 = *(_QWORD *)(v1 + 8);
  else
    v3 = 0;
  sub_6A2640(a1, v3);
  v5 = *(_QWORD *)(a1 + 128);
  result = *(_QWORD *)(a1 + 136);
  v6 = *(unsigned int *)(a1 + 144);
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 144) = 1;
  if ( v5 != 0 )
    return sub_690EE0(result, *(unsigned int *)(v5 + 48), v6);
  return result;
}

__int64 __fastcall sub_6A2140(__int64 a1, __int64 a2) noexcept
{
  __int64 v3; // x8
  __int64 result; // x0
  __int64 v5; // x8
  __int64 v6; // x2

  if ( a2 == 0 )
  {
    v3 = *(_QWORD *)(a1 + 88);
    if ( v3 != 0 )
      a2 = *(_QWORD *)(v3 + 8);
    else
      a2 = 0;
  }
  sub_6A2640(a1, a2);
  v5 = *(_QWORD *)(a1 + 128);
  result = *(_QWORD *)(a1 + 136);
  v6 = *(unsigned int *)(a1 + 144);
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 144) = 1;
  if ( v5 != 0 )
    return sub_690EE0(result, *(unsigned int *)(v5 + 48), v6);
  return result;
}

__int64 __fastcall sub_6A2910(__int64 result) noexcept
{
  if ( *(_QWORD *)result != 0 )
    return sub_690EE0(
             *(_QWORD *)(result + 8),
             *(unsigned int *)(*(_QWORD *)result + 48LL),
             *(unsigned int *)(result + 16));
  return result;
}

// N4Onyx8Graphics19RenderSurfaceNativeE, virtual slot 0
void __fastcall sub_6CF4E0(_QWORD *result) noexcept
{
  unsigned int *v1; // x8
  _QWORD *v2; // x19
  unsigned int v3; // w9
  unsigned int v4; // w9
  __int64 v5; // x20
  __int64 v6; // x21
  __int64 v7; // x0

  *result = ((__int64)off_1845338);
  v1 = (unsigned int *)result[5];
  if ( v1 != nullptr )
  {
    v2 = result;
    v4 = __atomic_sub_fetch(v1, 1, 0);
    if ( v4 == 0 )
    {
      v5 = result[5];
      if ( v5 != 0 )
      {
        v6 = qword_1926BD8;
        v7 = *(_QWORD *)(v6 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, result[5]) + 880);
        result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, v5);
      }
    }
    v2[5] = 0;
  }
  return;
}

void sub_6D7F20(__int64 result) noexcept
{
  unsigned int *v1; // x8
  __int64 v2; // x19
  unsigned int v3; // w9
  unsigned int v4; // w9
  __int64 v5; // x20
  __int64 v6; // x21
  __int64 v7; // x0

  v1 = *(unsigned int **)(result + 8);
  if ( v1 != nullptr )
  {
    v2 = result;
    v4 = __atomic_sub_fetch(v1, 1, 0);
    if ( v4 == 0 )
    {
      v5 = *(_QWORD *)(result + 8);
      if ( v5 != 0 )
      {
        v6 = qword_1926BD8;
        v7 = *(_QWORD *)(v6 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, *(_QWORD *)(result + 8)) + 880);
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, v5);
      }
    }
    *(_QWORD *)(v2 + 8) = 0;
  }
  return;
}

// N5storm14NetPropertyMapINS_18NetPropertyIntegerINS_8StringIdENS_14NumericalTraitIS2_NS_15MaxValueFunctorIS2_Lm0EEELh0ELb0ELb0ENS_19DefaultValueFunctorIS2_Lm0EEEEEEENS_15TNetPropertyRefINS_15NetPropertyNullEEEEE, virtual slot 1
__int64 __fastcall sub_787090(__int64 a1) noexcept
{
  sub_781380(a1);
  return sub_56CA00(a1, &byte_154D880, 0);
}

__int64 __fastcall sub_787760(__int64 a1) noexcept
{
  __int64 v1; // x19

  v1 = a1 - 8;
  sub_781380(a1 - 8);
  return sub_56CA00(v1, &byte_154D880, 0);
}

void sub_7E1370(__int64 result) noexcept
{
  unsigned int *v1; // x8
  __int64 *v2; // x19
  unsigned int v3; // w9
  unsigned int v4; // w9
  __int64 v5; // x19
  __int64 v6; // x20
  __int64 v7; // x0

  v1 = *(unsigned int **)(result + 8);
  v2 = (__int64 *)result;
  v4 = __atomic_sub_fetch(v1, 1, 0);
  if ( v4 == 0 )
  {
    sub_AAEE30(qword_1935058 + 1176, *(_QWORD *)(result + 8));
    v2[1] = 0;
    v5 = *v2;
    if ( v5 != 0 )
    {
      v6 = qword_1926BD8;
      v7 = *(_QWORD *)(v6 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v5) + 880);
      { (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, v5); return; }
    }
  }
  return;
}

__int64 __fastcall sub_880E70(__int64 a1) noexcept
{
  __int64 result; // x0
  __int64 v3; // x9
  __int64 v4; // x2

  v3 = *(_QWORD *)(a1 + 272);
  result = *(_QWORD *)(a1 + 280);
  v4 = *(unsigned int *)(a1 + 288);
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 288) = 1;
  if ( v3 != 0 )
    return sub_690EE0(result, *(unsigned int *)(v3 + 48), v4);
  return result;
}

// N4SPTG10LevelStageE, virtual slot 8
__int64 __fastcall sub_8823C0(__int64 a1) noexcept
{
  __int64 result; // x0
  __int64 v3; // x9
  __int64 v4; // x2

  v3 = *(_QWORD *)(a1 + 272);
  result = *(_QWORD *)(a1 + 280);
  v4 = *(unsigned int *)(a1 + 288);
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 288) = 1;
  if ( v3 != 0 )
    return sub_690EE0(result, *(unsigned int *)(v3 + 48), v4);
  return result;
}

void sub_897B40(__int64 result) noexcept
{
  unsigned int *v1; // x8
  __int64 *v2; // x19
  unsigned int v3; // w9
  unsigned int v4; // w9
  __int64 v5; // x0

  v1 = *(unsigned int **)(result + 8);
  v2 = (__int64 *)result;
  v4 = __atomic_sub_fetch(v1, 1, 0);
  if ( v4 == 0 )
  {
    sub_AAEE30(qword_1935058 + 1176, *(_QWORD *)(result + 8));
    v5 = *v2;
    v2[1] = 0;
    { sub_894BA0(v5); return; }
  }
  return;
}

// N4Onyx7Details20FunctionInternalHookINS0_23MemberFunctionRetained1IvNS_9Component14ComponentProxyIN4SPTG22EventGUIObjectReleasedEEERKNS_5Event4BaseES6_EEEE, virtual slot 0
void __fastcall sub_8B9C10(_QWORD *result) noexcept
{
  unsigned int *v1; // x8
  _QWORD *v2; // x19
  unsigned int v3; // w9
  unsigned int v4; // w9
  __int64 v5; // x20
  __int64 v6; // x21
  __int64 v7; // x0

  *result = ((__int64)off_1863D38);
  v1 = (unsigned int *)result[6];
  if ( v1 != nullptr )
  {
    v2 = result;
    v4 = __atomic_sub_fetch(v1, 1, 0);
    if ( v4 == 0 )
    {
      v5 = result[6];
      if ( v5 != 0 )
      {
        v6 = qword_1926BD8;
        v7 = *(_QWORD *)(v6 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, result[6]) + 880);
        result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, v5);
      }
    }
    v2[6] = 0;
  }
  return;
}

// N4Onyx7Details20FunctionInternalHookINS0_23MemberFunctionRetained1IvNS_9Component14ComponentProxyIN4SPTG21EventGUIObjectPressedEEERKNS_5Event4BaseES6_EEEE, virtual slot 0
void __fastcall sub_8B9E10(_QWORD *result) noexcept
{
  unsigned int *v1; // x8
  _QWORD *v2; // x19
  unsigned int v3; // w9
  unsigned int v4; // w9
  __int64 v5; // x20
  __int64 v6; // x21
  __int64 v7; // x0

  *result = ((__int64)off_1863D80);
  v1 = (unsigned int *)result[6];
  if ( v1 != nullptr )
  {
    v2 = result;
    v4 = __atomic_sub_fetch(v1, 1, 0);
    if ( v4 == 0 )
    {
      v5 = result[6];
      if ( v5 != 0 )
      {
        v6 = qword_1926BD8;
        v7 = *(_QWORD *)(v6 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, result[6]) + 880);
        result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, v5);
      }
    }
    v2[6] = 0;
  }
  return;
}

// N4Onyx7Details20FunctionInternalHookINS0_23MemberFunctionRetained1IvNS_9Component14ComponentProxyIN4SPTG22EventBitmapFontTextSetEEERKNS_5Event4BaseES6_EEEE, virtual slot 0
void __fastcall sub_8CC790(_QWORD *result) noexcept
{
  unsigned int *v1; // x8
  _QWORD *v2; // x19
  unsigned int v3; // w9
  unsigned int v4; // w9
  __int64 v5; // x20
  __int64 v6; // x21
  __int64 v7; // x0

  *result = ((__int64)off_1866110);
  v1 = (unsigned int *)result[6];
  if ( v1 != nullptr )
  {
    v2 = result;
    v4 = __atomic_sub_fetch(v1, 1, 0);
    if ( v4 == 0 )
    {
      v5 = result[6];
      if ( v5 != 0 )
      {
        v6 = qword_1926BD8;
        v7 = *(_QWORD *)(v6 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, result[6]) + 880);
        result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, v5);
      }
    }
    v2[6] = 0;
  }
  return;
}

void sub_962B10(__int64 result) noexcept
{
  unsigned int *v1; // x8
  __int64 v2; // x19
  unsigned int v3; // w9
  unsigned int v4; // w9
  __int64 v5; // x20
  __int64 v6; // x21
  __int64 v7; // x0

  v1 = *(unsigned int **)(result + 24);
  if ( v1 != nullptr )
  {
    v2 = result;
    v4 = __atomic_sub_fetch(v1, 1, 0);
    if ( v4 == 0 )
    {
      v5 = *(_QWORD *)(result + 24);
      if ( v5 != 0 )
      {
        v6 = qword_1926BD8;
        v7 = *(_QWORD *)(v6 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, *(_QWORD *)(result + 24)) + 880);
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, v5);
      }
    }
    *(_QWORD *)(v2 + 24) = 0;
  }
  return;
}

void sub_A82E80(__int64 result) noexcept
{
  __int64 v1; // x20
  __int64 v2; // x22
  _QWORD *v3; // x19
  __int64 v4; // x24
  __int64 v5; // x21
  __int64 v6; // x0

  v1 = *(_QWORD *)(result + 16);
  v2 = result + 8;
  v3 = (_QWORD *)result;
  if ( v1 != result + 8 )
  {
    do
    {
      v4 = *(_QWORD *)(v1 + 8);
      if ( v1 != 0 )
      {
        v5 = qword_1926BD8;
        v6 = *(_QWORD *)(v5 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v1) + 880);
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 48LL))(v6, v1);
      }
      v1 = v4;
    }
    while ( v4 != v2 );
  }
  v3[3] = 0;
  v3[2] = v2;
  v3[1] = v2;
  return;
}

// N4Gear26DynamicMemoryBlockProviderE, virtual slot 0
void __fastcall sub_A9C9F0(_QWORD *result) noexcept
{
  _QWORD *v1; // x19
  _QWORD *v2; // x21
  _QWORD *v3; // x20
  __int64 v4; // x9
  bool v5; // zf
  _QWORD *v6; // x8

  v1 = result;
  *result = ((__int64)off_189C2B0);
  v2 = result + 4;
  while ( 1 )
  {
    v3 = (_QWORD *)v1[3];
    if ( v3 == nullptr )
      break;
    v4 = *v3 + 8LL;
    v5 = *v3 == 0;
    v1[3] = *v3;
    if ( v5 )
      v6 = v2;
    else
      v6 = (_QWORD *)v4;
    *v6 = 0;
    *v3 = 0;
    v3[1] = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v1[1] + 48LL))(v1[1], v3[2]);
    result = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v1[1] + 48LL))(v1[1], v3);
  }
  return;
}

// N4Onyx7Details20FunctionInternalHookINS0_23MemberFunctionRetained1IvNS_9Component14ComponentProxyI12EventSetTextEERKNS_5Event4BaseES5_EEEE, virtual slot 0
void __fastcall sub_ADF920(_QWORD *result) noexcept
{
  unsigned int *v1; // x8
  _QWORD *v2; // x19
  unsigned int v3; // w9
  unsigned int v4; // w9
  __int64 v5; // x20
  __int64 v6; // x21
  __int64 v7; // x0

  *result = ((__int64)off_18A1700);
  v1 = (unsigned int *)result[6];
  if ( v1 != nullptr )
  {
    v2 = result;
    v4 = __atomic_sub_fetch(v1, 1, 0);
    if ( v4 == 0 )
    {
      v5 = result[6];
      if ( v5 != 0 )
      {
        v6 = qword_1926BD8;
        v7 = *(_QWORD *)(v6 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, result[6]) + 880);
        result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, v5);
      }
    }
    v2[6] = 0;
  }
  return;
}

void sub_B46DB0(__int64 result) noexcept
{
  _QWORD *v1; // x19
  __int64 v2; // x20
  __int64 v3; // x21
  __int64 v4; // x0

  v1 = (_QWORD *)(result + 8);
  v2 = *(_QWORD *)(result + 8);
  if ( v2 != 0 )
  {
    v3 = qword_1926BD8;
    v4 = *(_QWORD *)(v3 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v2) + 880);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, v2);
  }
  *v1 = 0;
  v1[1] = 0;
  return;
}

void sub_B46E10(__int64 result) noexcept
{
  _QWORD *v1; // x19
  __int64 v2; // x20
  __int64 v3; // x21
  __int64 v4; // x0

  v1 = (_QWORD *)(result + 8);
  v2 = *(_QWORD *)(result + 8);
  if ( v2 != 0 )
  {
    v3 = qword_1926BD8;
    v4 = *(_QWORD *)(v3 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v2) + 880);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, v2);
  }
  *v1 = 0;
  v1[1] = 0;
  return;
}

// N4Onyx8Graphics17NewMaterialSystem21MaterialParameterBaseE, virtual slot 1
void __fastcall sub_B62F10(_QWORD *result) noexcept
{
  unsigned int *v1; // x8
  _QWORD *v2; // x19
  unsigned int v3; // w9
  unsigned int v4; // w9
  __int64 v5; // x20
  __int64 v6; // x21
  __int64 v7; // x0

  *result = ((__int64)off_18ABA40);
  v1 = (unsigned int *)result[3];
  if ( v1 != nullptr )
  {
    v2 = result;
    v4 = __atomic_sub_fetch(v1, 1, 0);
    if ( v4 == 0 )
    {
      v5 = result[3];
      if ( v5 != 0 )
      {
        v6 = qword_1926BD8;
        v7 = *(_QWORD *)(v6 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, result[3]) + 880);
        result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, v5);
      }
    }
    v2[3] = 0;
  }
  return;
}

// N4Onyx8Graphics20EvolutionDevelopment26GenericRenderingFlowNativeE, virtual slot 3
_QWORD *__fastcall sub_B860E0(_QWORD *result) noexcept
{
  __int64 v1; // x20
  _QWORD *v2; // x19
  __int64 v3; // x21
  __int64 v4; // x0

  v1 = result[9];
  v2 = result;
  *result = ((__int64)off_18AEA10);
  result[7] = 0;
  if ( v1 != 0 )
  {
    v3 = qword_1926BD8;
    v4 = *(_QWORD *)(v3 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v1) + 880);
    result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, v1);
  }
  v2[9] = 0;
  v2[6] = 0;
  v2[7] = 0;
  return result;
}

// N4Onyx9Collision5CCD2DE, virtual slot 3
__int64 __fastcall sub_B9CCC0(__int64 result) noexcept
{
  __int64 v1; // x20
  __int64 v2; // x19
  __int64 v3; // x21
  __int64 v4; // x21
  unsigned int v5; // w8

  v1 = *(_QWORD *)(result + 88);
  v2 = result;
  if ( v1 != 0 )
  {
    v3 = qword_1926BD8;
    v4 = *(_QWORD *)(v3 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v1) + 880);
    sub_B9D3F0(*(_QWORD *)(v1 + 16));
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, v1);
  }
  v5 = *(_DWORD *)(v2 + 56) & 0xFFFFFFFD;
  *(_QWORD *)(v2 + 88) = 0;
  *(_DWORD *)(v2 + 56) = v5;
  return result;
}

// N4Onyx8Behavior5LayerE, virtual slot 4
void __fastcall sub_BB62A0(__int64 a1, __int64 a2) noexcept
{
  __int64 *v2; // x8
  __int64 v3; // x19
  __int64 v4; // x20
  __int64 v5; // x0

  v2 = *(__int64 **)(a2 + 8);
  v3 = *v2;
  *v2 = 0;
  if ( v3 != 0 )
  {
    v4 = qword_1926BD8;
    v5 = *(_QWORD *)(v4 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v3) + 880);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, v3);
  }
}

void sub_BC88B0(__int64 result) noexcept
{
  _QWORD *v1; // x19
  __int64 v2; // x20
  __int64 v3; // x21
  __int64 v4; // x0

  v1 = (_QWORD *)(result + 8);
  v2 = *(_QWORD *)(result + 8);
  if ( v2 != 0 )
  {
    v3 = qword_1926BD8;
    v4 = *(_QWORD *)(v3 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v2) + 880);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, v2);
  }
  *v1 = 0;
  v1[1] = 0;
  return;
}

void sub_BEAE10(__int64 result) noexcept
{
  _QWORD *v1; // x19
  __int64 v2; // x20
  __int64 v3; // x21
  __int64 v4; // x0

  v1 = (_QWORD *)(result + 8);
  v2 = *(_QWORD *)(result + 8);
  if ( v2 != 0 )
  {
    v3 = qword_1926BD8;
    v4 = *(_QWORD *)(v3 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v2) + 880);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, v2);
  }
  *v1 = 0;
  v1[1] = 0;
  return;
}

void sub_BEAE70(__int64 result) noexcept
{
  _QWORD *v1; // x19
  __int64 v2; // x20
  __int64 v3; // x21
  __int64 v4; // x0

  v1 = (_QWORD *)(result + 8);
  v2 = *(_QWORD *)(result + 8);
  if ( v2 != 0 )
  {
    v3 = qword_1926BD8;
    v4 = *(_QWORD *)(v3 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v2) + 880);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, v2);
  }
  *v1 = 0;
  v1[1] = 0;
  return;
}

void sub_BEAED0(__int64 result) noexcept
{
  _QWORD *v1; // x19
  __int64 v2; // x20
  __int64 v3; // x21
  __int64 v4; // x0

  v1 = (_QWORD *)(result + 8);
  v2 = *(_QWORD *)(result + 8);
  if ( v2 != 0 )
  {
    v3 = qword_1926BD8;
    v4 = *(_QWORD *)(v3 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v2) + 880);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, v2);
  }
  *v1 = 0;
  v1[1] = 0;
  return;
}

void sub_BEAF30(__int64 result) noexcept
{
  _QWORD *v1; // x19
  __int64 v2; // x20
  __int64 v3; // x21
  __int64 v4; // x0

  v1 = (_QWORD *)(result + 8);
  v2 = *(_QWORD *)(result + 8);
  if ( v2 != 0 )
  {
    v3 = qword_1926BD8;
    v4 = *(_QWORD *)(v3 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v2) + 880);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, v2);
  }
  *v1 = 0;
  v1[1] = 0;
  return;
}

void sub_BEAF90(__int64 result) noexcept
{
  _QWORD *v1; // x19
  __int64 v2; // x20
  __int64 v3; // x21
  __int64 v4; // x0

  v1 = (_QWORD *)(result + 8);
  v2 = *(_QWORD *)(result + 8);
  if ( v2 != 0 )
  {
    v3 = qword_1926BD8;
    v4 = *(_QWORD *)(v3 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v2) + 880);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, v2);
  }
  *v1 = 0;
  v1[1] = 0;
  return;
}

void sub_BEF670(__int64 result) noexcept
{
  _QWORD *v1; // x19
  __int64 v2; // x20
  __int64 v3; // x21
  __int64 v4; // x0

  v1 = (_QWORD *)(result + 8);
  v2 = *(_QWORD *)(result + 8);
  if ( v2 != 0 )
  {
    v3 = qword_1926BD8;
    v4 = *(_QWORD *)(v3 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v2) + 880);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, v2);
  }
  *v1 = 0;
  v1[1] = 0;
  return;
}

void sub_BEFE00(__int64 result) noexcept
{
  _QWORD *v1; // x19
  __int64 v2; // x20
  __int64 v3; // x21
  __int64 v4; // x0

  v1 = (_QWORD *)(result + 8);
  v2 = *(_QWORD *)(result + 8);
  if ( v2 != 0 )
  {
    v3 = qword_1926BD8;
    v4 = *(_QWORD *)(v3 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v2) + 880);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, v2);
  }
  *v1 = 0;
  v1[1] = 0;
  return;
}

__int64 __fastcall sub_BF1AF0(__int64 result) noexcept
{
  __int64 v1; // x20
  __int64 v2; // x19
  __int64 v3; // x21
  __int64 v4; // x0

  v1 = *(_QWORD *)(result + 8);
  v2 = result;
  if ( v1 != 0 )
  {
    v3 = qword_1926BD8;
    v4 = *(_QWORD *)(v3 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v1) + 880);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, v1);
  }
  *(_QWORD *)(v2 + 8) = 0;
  *(_DWORD *)v2 = 0;
  return result;
}

// N4Onyx16StringDescriptorE, virtual slot 0
void __fastcall sub_BF1F50(_QWORD *result) noexcept
{
  unsigned int *v1; // x8
  _QWORD *v2; // x19
  unsigned int v3; // w9
  unsigned int v4; // w9
  __int64 v5; // x20
  __int64 v6; // x21
  __int64 v7; // x0

  *result = ((__int64)off_18B55F8);
  v1 = (unsigned int *)result[2];
  if ( v1 != nullptr )
  {
    v2 = result;
    v4 = __atomic_sub_fetch(v1, 1, 0);
    if ( v4 == 0 )
    {
      v5 = result[2];
      if ( v5 != 0 )
      {
        v6 = qword_1926BD8;
        v7 = *(_QWORD *)(v6 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, result[2]) + 880);
        result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, v5);
      }
    }
    v2[2] = 0;
  }
  return;
}

// NSt3__110__function6__funcIZN5EE_US22BaseScottObjectHandler16BroadcastMessageERN5storm12INetPropertyERKNS4_8StringIdEE4$_54NS_9allocatorISA_EEFvPNS4_19SimpleResultRelayerEEEE, virtual slot 0
__int64 __fastcall sub_C22F70(__int64 result) noexcept
{
  *(_QWORD *)result = ((__int64)off_18B6FE8);
  if ( (*(_BYTE *)(result + 8) & 1) != 0 )
    return sub_56CA00(*(_QWORD *)(result + 24), &byte_154D880, 0);
  return result;
}

// NSt3__110__function6__funcIZN5EE_US22BaseScottObjectHandler16BroadcastMessageERN5storm12INetPropertyERKNS4_8StringIdEE4$_54NS_9allocatorISA_EEFvPNS4_19SimpleResultRelayerEEEE, virtual slot 4
__int64 __fastcall sub_C231D0(__int64 result) noexcept
{
  if ( (*(_BYTE *)(result + 8) & 1) != 0 )
    return sub_56CA00(*(_QWORD *)(result + 24), &byte_154D880, 0);
  return result;
}

// N5EE_US24PlayerProfileDataMementoE, virtual slot 1
__int64 __fastcall sub_C33F80(__int64 a1) noexcept
{
  sub_C2C640();
  return sub_56CA00(a1, &byte_154D880, 0);
}

__int64 __fastcall sub_C35120(__int64 a1) noexcept
{
  __int64 v1; // x19

  v1 = a1 - 8;
  sub_C2C640(a1 - 8);
  return sub_56CA00(v1, &byte_154D880, 0);
}

// N5EE_US21PlayerInfoDataMessageE, virtual slot 1
__int64 __fastcall sub_C38F40(__int64 a1) noexcept
{
  sub_C37EB0(a1);
  return sub_56CA00(a1, &byte_154D880, 0);
}

__int64 __fastcall sub_C39810(__int64 a1) noexcept
{
  __int64 v1; // x19

  v1 = a1 - 8;
  sub_C37EB0(a1 - 8);
  return sub_56CA00(v1, &byte_154D880, 0);
}

// N5EE_US19StormSessionHandlerE, virtual slot 1
__int64 __fastcall sub_C3A450(__int64 a1) noexcept
{
  sub_4A7340();
  return sub_56CA00(a1, &byte_154D880, 0);
}

__int64 __fastcall sub_C3C5D0(__int64 a1) noexcept
{
  __int64 v1; // x19

  v1 = a1 - 32;
  sub_4A7340(a1 - 32);
  return sub_56CA00(v1, &byte_154D880, 0);
}

// N4Onyx8Strategy5CheckE, virtual slot 15
int __fastcall sub_C583E0(__int64 a1) noexcept
{
  __int64 v2; // x20
  unsigned int *v3; // x8
  unsigned int v4; // w9
  unsigned int v5; // w9
  __int64 v7; // [xsp+8h] [xbp-18h] BYREF

  sub_C57A30(&v7);
  v2 = v7;
  if ( v7 != 0 )
  {
    v3 = (unsigned int *)(v7 + 8);
    v5 = __atomic_sub_fetch(v3, 1, 0);
    if ( v5 == 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
  }
  *(_DWORD *)(a1 + 864) = v2 == 0;
  *(_DWORD *)(a1 + 868) = 0;
  return 0;
}

// N4Dare7Private17DareDualSchedulerE, virtual slot 0
_QWORD *__fastcall sub_D32470(_QWORD *result) noexcept
{
  __int64 (__fastcall ***v1)(_QWORD); // x19

  v1 = (__int64 (__fastcall ***)(_QWORD))result[2];
  *result = ((__int64)off_18CF808);
  if ( v1 != nullptr )
  {
    result = (_QWORD *)(**v1)((_QWORD)(v1));
    if ( dword_191FB00 != 0 )
    {
      result = (_QWORD *)qword_191FAF8;
      if ( qword_191FAF8 != 0 )
        return (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(_QWORD)))(*(_QWORD *)qword_191FAF8
                                                                                              + 48LL))(
                           qword_191FAF8,
                           v1);
    }
  }
  return result;
}
// N2EE8HeatWave14AudioStreamPCME, virtual slot 1
void __fastcall sub_DD26E0(_DWORD *a1) noexcept
{
  *(_QWORD *)a1 = ((__int64)off_18DC658);
  a1[10] = 0;
  *((_QWORD *)a1 + 4) = 0;
  (*((void (__fastcall **)(_DWORD *, _QWORD, __int64))a1 + 2))(a1 + 8, *((_QWORD *)a1 + 3), 1);
  { free(a1); return; }
}

// N2EE14ShaderResourceE, virtual slot 1
void __fastcall sub_DF56B0(void **a1) noexcept
{
  unsigned int *v2; // x0
  unsigned int *v3; // x8
  unsigned int v4; // w9
  unsigned int v5; // w9
  unsigned int *v6; // x0
  unsigned int *v7; // x8
  unsigned int v8; // w9
  unsigned int v9; // w9
  unsigned int *v10; // x0
  unsigned int *v11; // x8
  unsigned int v12; // w9
  unsigned int v13; // w9

  *a1 = (void *)(((__int64)off_18DF8B0));
  free(a1[8]);
  v2 = (unsigned int *)a1[6];
  if ( v2 != nullptr )
  {
    v3 = v2 + 2;
    v5 = __atomic_sub_fetch(v3, 1, 0);
    if ( v5 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v2 + 24LL))(v2);
  }
  v6 = (unsigned int *)a1[4];
  *a1 = (void *)(((__int64)off_18DF550));
  if ( v6 != nullptr )
  {
    v7 = v6 + 2;
    v9 = __atomic_sub_fetch(v7, 1, 0);
    if ( v9 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  v10 = (unsigned int *)a1[2];
  *a1 = (void *)(((__int64)off_18DF5B0));
  if ( v10 != nullptr )
  {
    v11 = v10 + 2;
    *((_BYTE *)v10 + 12) = 0;
    v13 = __atomic_sub_fetch(v11, 1, 0);
    if ( v13 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  { free(a1); return; }
}
// N2EE11PrivateData8DataNodeE, virtual slot 0
void __fastcall sub_E0EF00(__int64 a1) noexcept
{
  unsigned int *v2; // x0
  unsigned int *v3; // x8
  unsigned int v4; // w9
  unsigned int v5; // w9

  *(_QWORD *)a1 = ((__int64)off_18E0C48);
  v2 = *(unsigned int **)(a1 + 24);
  if ( v2 != nullptr )
  {
    if ( *(_BYTE *)(a1 + 12) != 0 )
    {
      v3 = v2 + 2;
      v5 = __atomic_sub_fetch(v3, 1, 0);
      if ( v5 == 0 )
        (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v2 + 24LL))(v2);
      *(_BYTE *)(a1 + 12) = 0;
    }
    else
    {
      _ZdlPv(v2);
    }
    *(_QWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 16) = 0;
  }
}

// N2EE11PrivateData8DataNodeE, virtual slot 1
void __fastcall sub_E0EF70(_QWORD *a1) noexcept
{
  unsigned int *v2; // x0
  unsigned int *v3; // x8
  unsigned int v4; // w9
  unsigned int v5; // w9

  *a1 = ((__int64)off_18E0C48);
  v2 = (unsigned int *)a1[3];
  if ( v2 != nullptr )
  {
    if ( *((_BYTE *)a1 + 12) != 0 )
    {
      v3 = v2 + 2;
      v5 = __atomic_sub_fetch(v3, 1, 0);
      if ( v5 == 0 )
        (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v2 + 24LL))(v2);
    }
    else
    {
      _ZdlPv(v2);
    }
  }
  { free(a1); return; }
}

// N2EE13NvnMemoryPoolE, virtual slot 0
void __fastcall sub_E95A80(__int64 a1) noexcept
{
  *(_QWORD *)a1 = ((__int64)off_18E6478);
  (*(__int64(**)(...))off_191A900)(a1 + 48);
  { free(*(void **)(a1 + 40)); return; }
}

// N2EE13NvnMemoryPoolE, virtual slot 1
void __fastcall sub_E95AB0(void **a1) noexcept
{
  *a1 = (void *)(((__int64)off_18E6478));
  (*(__int64(**)(...))off_191A900)(a1 + 6);
  free(a1[5]);
  { free(a1); return; }
}
// N2EE22NvnMemoryPoolAllocatorE, virtual slot 0
void __fastcall sub_EA7BB0(__int64 a1) noexcept
{
  *(_QWORD *)a1 = ((__int64)off_18E86B0);
  nn__mem__NumberLineAllocator__Finalize((char *)(a1 + 304));
  nn__os__FinalizeMutex(a1 + 328);
  *(_QWORD *)a1 = ((__int64)off_18E6478);
  (*(__int64(**)(...))off_191A900)(a1 + 48);
  { free(*(void **)(a1 + 40)); return; }
}

// N2EE22NvnMemoryPoolAllocatorE, virtual slot 1
void __fastcall sub_EA7C00(void **a1) noexcept
{
  *a1 = (void *)(((__int64)off_18E86B0));
  nn__mem__NumberLineAllocator__Finalize((char *)(a1 + 38));
  nn__os__FinalizeMutex(a1 + 41);
  *a1 = (void *)(((__int64)off_18E6478));
  (*(__int64(**)(...))off_191A900)(a1 + 6);
  free(a1[5]);
  { free(a1); return; }
}
// N2EE11GpuPipeline12VertexShaderE, virtual slot 0
void __fastcall sub_EB8770(__int64 a1) noexcept
{
  __int64 v1; // x8
  __int64 v3; // x9
  unsigned int *v4; // x0
  unsigned int *v5; // x8
  unsigned int v6; // w9
  unsigned int v7; // w9
  unsigned int *v8; // x0
  unsigned int *v9; // x8
  unsigned int v10; // w9
  unsigned int v11; // w9

  *(_QWORD *)a1 = ((__int64)off_18E9970);
  v1 = *(_QWORD *)(a1 + 56);
  while ( v1 != 0 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 56) = --v1;
    v4 = *(unsigned int **)(v3 + 40 * v1 + 32);
    if ( v4 != nullptr )
    {
      v5 = v4 + 2;
      v7 = __atomic_sub_fetch(v5, 1, 0);
      if ( v7 == 0 )
        (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v4 + 24LL))(v4);
      v1 = *(_QWORD *)(a1 + 56);
    }
  }
  free(*(void **)(a1 + 40));
  v8 = *(unsigned int **)(a1 + 32);
  *(_QWORD *)a1 = ((__int64)off_18E9950);
  if ( v8 != nullptr )
  {
    v9 = v8 + 2;
    v11 = __atomic_sub_fetch(v9, 1, 0);
    if ( v11 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v8 + 24LL))(v8);
  }
  { free(*(void **)(a1 + 16)); return; }
}

// N2EE11GpuPipeline12VertexShaderE, virtual slot 1
void __fastcall sub_EB8830(void *a1) noexcept
{
  __int64 v1; // x8
  __int64 v3; // x9
  unsigned int *v4; // x0
  unsigned int *v5; // x8
  unsigned int v6; // w9
  unsigned int v7; // w9
  unsigned int *v8; // x0
  unsigned int *v9; // x8
  unsigned int v10; // w9
  unsigned int v11; // w9

  *(_QWORD *)a1 = ((__int64)off_18E9970);
  v1 = *((_QWORD *)a1 + 7);
  while ( v1 != 0 )
  {
    v3 = *((_QWORD *)a1 + 5);
    *((_QWORD *)a1 + 7) = --v1;
    v4 = *(unsigned int **)(v3 + 40 * v1 + 32);
    if ( v4 != nullptr )
    {
      v5 = v4 + 2;
      v7 = __atomic_sub_fetch(v5, 1, 0);
      if ( v7 == 0 )
        (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v4 + 24LL))(v4);
      v1 = *((_QWORD *)a1 + 7);
    }
  }
  free(*((void **)a1 + 5));
  v8 = *((unsigned int **)a1 + 4);
  *(_QWORD *)a1 = ((__int64)off_18E9950);
  if ( v8 != nullptr )
  {
    v9 = v8 + 2;
    v11 = __atomic_sub_fetch(v9, 1, 0);
    if ( v11 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v8 + 24LL))(v8);
  }
  free(*((void **)a1 + 2));
  { free(a1); return; }
}

// N2EE11GpuPipeline10BaseShaderI18ID3D11VertexShaderEE, virtual slot 0
void __fastcall sub_EB8900(__int64 a1) noexcept
{
  unsigned int *v2; // x0
  unsigned int *v3; // x8
  unsigned int v4; // w9
  unsigned int v5; // w9

  *(_QWORD *)a1 = ((__int64)off_18E9950);
  v2 = *(unsigned int **)(a1 + 32);
  if ( v2 != nullptr )
  {
    v3 = v2 + 2;
    v5 = __atomic_sub_fetch(v3, 1, 0);
    if ( v5 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v2 + 24LL))(v2);
  }
  { free(*(void **)(a1 + 16)); return; }
}

// N2EE11GpuPipeline10BaseShaderI18ID3D11VertexShaderEE, virtual slot 1
void __fastcall sub_EB8950(void *a1) noexcept
{
  unsigned int *v2; // x0
  unsigned int *v3; // x8
  unsigned int v4; // w9
  unsigned int v5; // w9

  *(_QWORD *)a1 = ((__int64)off_18E9950);
  v2 = *((unsigned int **)a1 + 4);
  if ( v2 != nullptr )
  {
    v3 = v2 + 2;
    v5 = __atomic_sub_fetch(v3, 1, 0);
    if ( v5 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v2 + 24LL))(v2);
  }
  free(*((void **)a1 + 2));
  { free(a1); return; }
}

// N2EE11GpuPipeline10BaseShaderI17ID3D11PixelShaderEE, virtual slot 0
void __fastcall sub_EB8CD0(__int64 a1) noexcept
{
  unsigned int *v2; // x0
  unsigned int *v3; // x8
  unsigned int v4; // w9
  unsigned int v5; // w9

  *(_QWORD *)a1 = ((__int64)off_18E99C0);
  v2 = *(unsigned int **)(a1 + 32);
  if ( v2 != nullptr )
  {
    v3 = v2 + 2;
    v5 = __atomic_sub_fetch(v3, 1, 0);
    if ( v5 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v2 + 24LL))(v2);
  }
  { free(*(void **)(a1 + 16)); return; }
}

// N2EE11GpuPipeline11PixelShaderE, virtual slot 1
void __fastcall sub_EB8D20(void *a1) noexcept
{
  unsigned int *v2; // x0
  unsigned int *v3; // x8
  unsigned int v4; // w9
  unsigned int v5; // w9

  *(_QWORD *)a1 = ((__int64)off_18E99C0);
  v2 = *((unsigned int **)a1 + 4);
  if ( v2 != nullptr )
  {
    v3 = v2 + 2;
    v5 = __atomic_sub_fetch(v3, 1, 0);
    if ( v5 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v2 + 24LL))(v2);
  }
  free(*((void **)a1 + 2));
  { free(a1); return; }
}

// N2EE11GpuPipeline10BaseShaderI17ID3D11PixelShaderEE, virtual slot 1
void __fastcall sub_EB8D80(void *a1) noexcept
{
  unsigned int *v2; // x0
  unsigned int *v3; // x8
  unsigned int v4; // w9
  unsigned int v5; // w9

  *(_QWORD *)a1 = ((__int64)off_18E99C0);
  v2 = *((unsigned int **)a1 + 4);
  if ( v2 != nullptr )
  {
    v3 = v2 + 2;
    v5 = __atomic_sub_fetch(v3, 1, 0);
    if ( v5 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v2 + 24LL))(v2);
  }
  free(*((void **)a1 + 2));
  { free(a1); return; }
}

// N2EE13GpuRingBufferE, virtual slot 0
void __fastcall sub_EB99C0(_QWORD *result) noexcept
{
  __int64 v1; // x20
  __int64 v2; // x8
  __int64 v3; // x21
  unsigned int *v4; // x0
  unsigned int *v5; // t1
  unsigned int *v6; // x8
  unsigned int v7; // w9
  unsigned int v8; // w9

  v1 = result[3];
  *result = ((__int64)off_18E9A70);
  if ( v1 != 0 )
  {
    v2 = *(_QWORD *)(v1 - 8);
    if ( v2 != 0 )
    {
      v3 = v1 + 8 * v2;
      do
      {
        v5 = *(unsigned int **)(v3 - 8);
        v3 -= 8;
        v4 = v5;
        if ( v5 != nullptr )
        {
          v6 = v4 + 2;
          v8 = __atomic_sub_fetch(v6, 1, 0);
          if ( v8 == 0 )
            (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v4 + 24LL))(v4);
        }
      }
      while ( v3 != v1 );
    }
    { free((void *)(v1 - 8)); return; }
  }
  return;
}

// N2EE13GpuRingBufferE, virtual slot 1
void __fastcall sub_EB9A40(_QWORD *a1) noexcept
{
  __int64 v1; // x21
  __int64 v3; // x8
  __int64 v4; // x22
  unsigned int *v5; // x0
  unsigned int *v6; // t1
  unsigned int *v7; // x8
  unsigned int v8; // w9
  unsigned int v9; // w9

  v1 = a1[3];
  *a1 = ((__int64)off_18E9A70);
  if ( v1 != 0 )
  {
    v3 = *(_QWORD *)(v1 - 8);
    if ( v3 != 0 )
    {
      v4 = v1 + 8 * v3;
      do
      {
        v6 = *(unsigned int **)(v4 - 8);
        v4 -= 8;
        v5 = v6;
        if ( v6 != nullptr )
        {
          v7 = v5 + 2;
          v9 = __atomic_sub_fetch(v7, 1, 0);
          if ( v9 == 0 )
            (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v5 + 24LL))(v5);
        }
      }
      while ( v4 != v1 );
    }
    free((void *)(v1 - 8));
  }
  { free(a1); return; }
}

__int64 __fastcall sub_EB9EC0(__int64 result) noexcept
{
  __int64 v1; // x8
  _QWORD *v2; // x19
  __int64 v3; // x20
  __int64 v4; // x21
  __int64 v5; // x0

  v1 = *(_QWORD *)(result + 24);
  v2 = (_QWORD *)result;
  *(_QWORD *)(result + 16) = 0;
  if ( v1 != 0 )
  {
    v3 = v1 - 64;
    v4 = qword_1926BD8;
    v5 = *(_QWORD *)(v4 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v1 - 64) + 880);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, v3);
  }
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  return result;
}

// 14PlatformPlayer, virtual slot 2
__int64 __fastcall sub_EC6540(__int64 a1) noexcept
{
  sub_EC8DD0(a1);
  return sub_FA0140(a1);
}

// 12ScriptObject, virtual slot 5
__int64 __fastcall sub_EEAA00(__int64 a1) noexcept
{
  __int64 result; // x0

  result = sub_EEA5A0(a1);
  if ( a1 != 0 )
    return sub_FA0140(a1);
  return result;
}

__int64 __fastcall sub_EEACC0(char *a1) noexcept
{
  __int64 result; // x0
  char *v3; // x20
  int v4; // w8
  __int64 i; // x22
  char *v6; // x21
  int v7; // w9
  char *v8; // x0

  result = *(_QWORD *)(a1 + 120);
  if ( result != 0 )
  {
    result = sub_EEAD80(result);
    *(_QWORD *)(a1 + 120) = 0;
  }
  v3 = (char *)(*(_QWORD *)(a1 + 128));
  if ( v3 != 0 )
  {
    v4 = *(_DWORD *)(v3 + 88);
    if ( v4 >= 1 )
    {
      for ( i = 0; i < v4; ++i )
      {
        v6 = (char *)(*(_QWORD *)(v3 + 8 + 8 * i));
        v7 = *(_DWORD *)(v6 + 16) - 1;
        *(_DWORD *)(v6 + 16) = v7;
        if ( v7 == 0 )
        {
          v8 = (char *)(*(_QWORD *)(v6 + 8));
          if ( v8 != 0 && *(_DWORD *)(v6 + 48) != 0 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))((long long)(v8));
            *(_QWORD *)(v6 + 8) = 0;
          }
          sub_FA0140(*(_QWORD *)(v6 + 40));
          *(_QWORD *)(v6 + 40) = 0;
          sub_FA0140(v6);
          v4 = *(_DWORD *)(v3 + 88);
        }
      }
    }
    *(_QWORD *)(v3 + 88) = 0;
    result = sub_FA0140(v3);
    *(_QWORD *)(a1 + 128) = 0;
  }
  return result;
}
// 21FireTweenScriptObject, virtual slot 5
__int64 __fastcall sub_EFA0D0(__int64 a1) noexcept
{
  __int64 result; // x0

  result = sub_EF9DF0();
  if ( a1 != 0 )
    return sub_FA0140(a1);
  return result;
}

void sub_F09A00(__int64 result) noexcept
{
  __int64 v1; // x20
  __int64 v2; // x19
  __int64 v3; // x21

  v1 = *(_QWORD *)(result + 24);
  *(_QWORD *)(result + 24) = 0;
  if ( v1 != 0 )
  {
    v2 = result;
    do
    {
      v3 = *(_QWORD *)(v1 + 16);
      sub_F09A00(v1);
      if ( v1 == *(_QWORD *)(*(_QWORD *)v2 + 872LL) )
        *(_QWORD *)(*(_QWORD *)v2 + 872LL) = 0;
      sub_F061F0(v1);
      sub_EFB6C0(*(_QWORD *)(v1 + 104));
      sub_FA0140(v1);
      v1 = v3;
    }
    while ( v3 != 0 );
  }
  return;
}

// 8RichEdit, virtual slot 1
__int64 __fastcall sub_F25BB0(__int64 a1) noexcept
{
  sub_F25830(a1);
  return sub_FA0140(a1);
}

// 15PlatformEDevice, virtual slot 1
__int64 __fastcall sub_F28920(_QWORD *a1) noexcept
{
  sub_F28890(a1);
  return sub_FA0140(a1);
}

__int64 __fastcall sub_F2C1E0(__int64 a1) noexcept
{
  __int64 result; // x0
  _QWORD *v3; // x20

  v3 = (_QWORD *)(a1 + 16);
  result = *(_QWORD *)(a1 + 16);
  if ( result != 0 )
  {
    result = sub_FA0140(result);
    *v3 = 0;
    v3[1] = 0;
    *(_WORD *)(a1 + 32) = -1;
  }
  return result;
}

// 12VarHashTable, virtual slot 1
__int64 __fastcall sub_F35B40(__int64 a1) noexcept
{
  sub_F35B60(a1);
  return sub_FA0140(a1);
}

// 27CorePlayerPropertyHashTable, virtual slot 1
__int64 __fastcall sub_F35FD0(__int64 a1) noexcept
{
  sub_F35B60(a1);
  return sub_FA0140(a1);
}

void sub_F4F4A0(__int64 result) noexcept
{
  __int64 v1; // x19
  int v2; // w8

  if ( result != 0 )
  {
    v1 = result;
    v2 = *(_DWORD *)(result + 192) - 1;
    *(_DWORD *)(result + 192) = v2;
    if ( v2 == 0 )
    {
      sub_F322F0(result);
      { sub_FA0140(v1); return; }
    }
  }
  return;
}

// 6XMLDom, virtual slot 1
__int64 __fastcall sub_F70260(__int64 a1) noexcept
{
  sub_F701B0(a1);
  return sub_FA0140(a1);
}

// 7XMLNode, virtual slot 1
__int64 __fastcall sub_F708F0(__int64 a1) noexcept
{
  __int64 result; // x0

  result = sub_F70680(a1);
  if ( a1 != 0 )
    return sub_FA0140(a1);
  return result;
}

// 6XMLDoc, virtual slot 1
__int64 __fastcall sub_F72830(_QWORD *a1) noexcept
{
  sub_F72760(a1);
  return sub_FA0140(a1);
}

void __fastcall sub_F83C20(__int64 a1, __int64 a2) noexcept
{
  __int64 v2; // x0

  if ( a2 != 0 )
  {
    v2 = *(_QWORD *)(a2 + 8);
    if ( v2 != 0 )
    {
      sub_F2EA40(v2);
      *(_QWORD *)(a2 + 8) = 0;
    }
    sub_FA0140(a2);
  }
}

// 19achwShapeOES_Stroke, virtual slot 1
__int64 __fastcall sub_F909C0(_QWORD *a1) noexcept
{
  _QWORD *v1; // x8
  _QWORD *v2; // x9
  __int64 v3; // x11
  __int64 v4; // x10

  *a1 = ((__int64)off_18EA8F0);
  v1 = a1 + 6;
  v2 = (_QWORD *)a1[6];
  if ( v2 != nullptr )
  {
    v3 = a1[7];
    if ( v3 != 0 )
      *(_QWORD *)(v3 + 16) = a1[8];
    v4 = a1[8];
    if ( v4 != 0 )
      *(_QWORD *)(v4 + 8) = v3;
    if ( (_QWORD *)*v2 == v1 )
      *v2 = a1[7];
    if ( (_QWORD *)v2[1] == v1 )
      v2[1] = v4;
    if ( (_QWORD *)v2[2] == v1 )
      v2[2] = a1[7];
    *v1 = 0;
    a1[7] = 0;
    a1[8] = 0;
  }
  *a1 = ((__int64)off_18E9B40);
  return sub_FA0140(a1);
}

// 25achwShapeOES_ScaledColors, virtual slot 1
__int64 __fastcall sub_F90BB0(_QWORD *a1) noexcept
{
  _QWORD *v1; // x8
  _QWORD *v2; // x9
  __int64 v3; // x11
  __int64 v4; // x10

  *a1 = ((__int64)off_18EA938);
  v1 = a1 + 6;
  v2 = (_QWORD *)a1[6];
  if ( v2 != nullptr )
  {
    v3 = a1[7];
    if ( v3 != 0 )
      *(_QWORD *)(v3 + 16) = a1[8];
    v4 = a1[8];
    if ( v4 != 0 )
      *(_QWORD *)(v4 + 8) = v3;
    if ( (_QWORD *)*v2 == v1 )
      *v2 = a1[7];
    if ( (_QWORD *)v2[1] == v1 )
      v2[1] = v4;
    if ( (_QWORD *)v2[2] == v1 )
      v2[2] = a1[7];
    *v1 = 0;
    a1[7] = 0;
    a1[8] = 0;
  }
  *a1 = ((__int64)off_18E9B40);
  return sub_FA0140(a1);
}

__int64 __fastcall sub_F94650(__int64 result) noexcept
{
  __int64 v1; // x8
  _QWORD *v2; // x19
  __int64 v3; // x20
  __int64 v4; // x21
  __int64 v5; // x0

  v1 = *(_QWORD *)(result + 32);
  v2 = (_QWORD *)result;
  *(_QWORD *)(result + 16) = 0;
  if ( v1 != 0 )
  {
    v3 = v1 - 64;
    v4 = qword_1926BD8;
    v5 = *(_QWORD *)(v4 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v1 - 64) + 880);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, v3);
  }
  v2[4] = 0;
  v2[1] = 0;
  v2[2] = 0;
  return result;
}

__int64 __fastcall sub_F946B0(__int64 result) noexcept
{
  __int64 v1; // x8
  _QWORD *v2; // x19
  __int64 v3; // x20
  __int64 v4; // x21
  __int64 v5; // x0

  v1 = *(_QWORD *)(result + 24);
  v2 = (_QWORD *)result;
  *(_QWORD *)(result + 16) = 0;
  if ( v1 != 0 )
  {
    v3 = v1 - 64;
    v4 = qword_1926BD8;
    v5 = *(_QWORD *)(v4 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v1 - 64) + 880);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, v3);
  }
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  return result;
}

void sub_F94E00(__int64 result) noexcept
{
  unsigned int *v1; // x8
  __int64 v2; // x19
  unsigned int v3; // w9
  unsigned int v4; // w9
  __int64 v5; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  __int64 v8; // x0

  v1 = *(unsigned int **)(result + 16);
  if ( v1 != nullptr )
  {
    v2 = result;
    v4 = __atomic_sub_fetch(v1, 1, 0);
    if ( v4 == 0 )
    {
      v5 = *(_QWORD *)(result + 16);
      if ( v5 != 0 )
      {
        v6 = v5 - 64;
        v7 = qword_1926BD8;
        v8 = *(_QWORD *)(v7 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v5 - 64) + 880);
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 48LL))(v8, v6);
      }
    }
    *(_QWORD *)(v2 + 16) = 0;
  }
  return;
}

__int64 __fastcall sub_F95560(__int64 result) noexcept
{
  __int64 v1; // x8
  _QWORD *v2; // x19
  __int64 v3; // x20
  __int64 v4; // x21
  __int64 v5; // x0

  v1 = *(_QWORD *)(result + 32);
  v2 = (_QWORD *)result;
  *(_QWORD *)(result + 16) = 0;
  if ( v1 != 0 )
  {
    v3 = v1 - 64;
    v4 = qword_1926BD8;
    v5 = *(_QWORD *)(v4 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v1 - 64) + 880);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, v3);
  }
  v2[4] = 0;
  v2[1] = 0;
  v2[2] = 0;
  return result;
}

void sub_F970B0(__int64 result) noexcept
{
  unsigned int *v1; // x8
  __int64 v2; // x19
  unsigned int v3; // w9
  unsigned int v4; // w9
  __int64 v5; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  __int64 v8; // x0

  v1 = *(unsigned int **)(result + 8);
  if ( v1 != nullptr )
  {
    v2 = result;
    v4 = __atomic_sub_fetch(v1, 1, 0);
    if ( v4 == 0 )
    {
      v5 = *(_QWORD *)(result + 8);
      if ( v5 != 0 )
      {
        v6 = v5 - 64;
        v7 = qword_1926BD8;
        v8 = *(_QWORD *)(v7 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v5 - 64) + 880);
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 48LL))(v8, v6);
      }
    }
    *(_QWORD *)(v2 + 8) = 0;
  }
  return;
}

void sub_F98F30(__int64 result) noexcept
{
  unsigned int *v1; // x8
  __int64 v2; // x19
  unsigned int v3; // w9
  unsigned int v4; // w9
  __int64 v5; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  __int64 v8; // x0

  v1 = *(unsigned int **)(result + 8);
  if ( v1 != nullptr )
  {
    v2 = result;
    v4 = __atomic_sub_fetch(v1, 1, 0);
    if ( v4 == 0 )
    {
      v5 = *(_QWORD *)(result + 8);
      if ( v5 != 0 )
      {
        v6 = v5 - 64;
        v7 = qword_1926BD8;
        v8 = *(_QWORD *)(v7 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v5 - 64) + 880);
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 48LL))(v8, v6);
      }
    }
    *(_QWORD *)(v2 + 8) = 0;
  }
  return;
}

_QWORD *__fastcall sub_F99040(_QWORD *result) noexcept
{
  __int64 v1; // x20
  _QWORD *v2; // x19
  __int64 v3; // x21
  __int64 v4; // x20
  __int64 v5; // x0

  v1 = *result;
  v2 = result;
  if ( *result != 0 )
  {
    sub_F951C0(*result);
    v3 = qword_1926BD8;
    v4 = v1 - 64;
    v5 = *(_QWORD *)(v3 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v4) + 880);
    result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, v4);
  }
  *v2 = 0;
  return result;
}

// N4fire18DefaultBasicStringIcEE, virtual slot 0
void __fastcall sub_F9BE40(_QWORD *result) noexcept
{
  unsigned int *v1; // x8
  _QWORD *v2; // x19
  unsigned int v3; // w9
  unsigned int v4; // w9
  __int64 v5; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  __int64 v8; // x0

  *result = ((__int64)off_18EAC80);
  v1 = (unsigned int *)result[2];
  if ( v1 != nullptr )
  {
    v2 = result;
    v4 = __atomic_sub_fetch(v1, 1, 0);
    if ( v4 == 0 )
    {
      v5 = result[2];
      if ( v5 != 0 )
      {
        v6 = v5 - 64;
        v7 = qword_1926BD8;
        v8 = *(_QWORD *)(v7 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v5 - 64) + 880);
        result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 48LL))(v8, v6);
      }
    }
    v2[2] = 0;
  }
  return;
}

__int64 __fastcall sub_F9C2C0(__int64 result) noexcept
{
  __int64 v1; // x8
  _QWORD *v2; // x19
  __int64 v3; // x20
  __int64 v4; // x21
  __int64 v5; // x0

  v1 = *(_QWORD *)(result + 32);
  v2 = (_QWORD *)result;
  *(_QWORD *)(result + 16) = 0;
  if ( v1 != 0 )
  {
    v3 = v1 - 64;
    v4 = qword_1926BD8;
    v5 = *(_QWORD *)(v4 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v1 - 64) + 880);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, v3);
  }
  v2[4] = 0;
  v2[1] = 0;
  v2[2] = 0;
  return result;
}

// N4fire18DefaultBasicStringIwEE, virtual slot 0
void __fastcall sub_F9F270(_QWORD *result) noexcept
{
  unsigned int *v1; // x8
  _QWORD *v2; // x19
  unsigned int v3; // w9
  unsigned int v4; // w9
  __int64 v5; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  __int64 v8; // x0

  *result = ((__int64)off_18EAD30);
  v1 = (unsigned int *)result[2];
  if ( v1 != nullptr )
  {
    v2 = result;
    v4 = __atomic_sub_fetch(v1, 1, 0);
    if ( v4 == 0 )
    {
      v5 = result[2];
      if ( v5 != 0 )
      {
        v6 = v5 - 64;
        v7 = qword_1926BD8;
        v8 = *(_QWORD *)(v7 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v5 - 64) + 880);
        result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 48LL))(v8, v6);
      }
    }
    v2[2] = 0;
  }
  return;
}

__int64 __fastcall sub_FA0FC0(__int64 result) noexcept
{
  __int64 v1; // x8
  _QWORD *v2; // x19
  __int64 v3; // x20
  __int64 v4; // x21
  __int64 v5; // x0

  v1 = *(_QWORD *)(result + 24);
  v2 = (_QWORD *)result;
  *(_QWORD *)(result + 16) = 0;
  if ( v1 != 0 )
  {
    v3 = v1 - 64;
    v4 = qword_1926BD8;
    v5 = *(_QWORD *)(v4 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v1 - 64) + 880);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, v3);
  }
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  return result;
}

__int64 __fastcall sub_FA13B0(__int64 result) noexcept
{
  __int64 v1; // x8
  _QWORD *v2; // x19
  __int64 v3; // x20
  __int64 v4; // x21
  __int64 v5; // x0

  v1 = *(_QWORD *)(result + 32);
  v2 = (_QWORD *)result;
  *(_QWORD *)(result + 16) = 0;
  if ( v1 != 0 )
  {
    v3 = v1 - 64;
    v4 = qword_1926BD8;
    v5 = *(_QWORD *)(v4 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v1 - 64) + 880);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, v3);
  }
  v2[4] = 0;
  v2[1] = 0;
  v2[2] = 0;
  return result;
}

void sub_FA1480(__int64 result) noexcept
{
  __int64 v1; // x8
  _QWORD *v2; // x19
  __int64 v3; // x20
  __int64 v4; // x21
  __int64 v5; // x0

  v2 = (_QWORD *)(result + 8);
  v1 = *(_QWORD *)(result + 8);
  if ( v1 != 0 )
  {
    v3 = v1 - 64;
    v4 = qword_1926BD8;
    v5 = *(_QWORD *)(v4 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v1 - 64) + 880);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, v3);
  }
  *v2 = 0;
  v2[1] = 0;
  return;
}

__int64 __fastcall sub_FA2950(__int64 result) noexcept
{
  __int64 v1; // x8
  _QWORD *v2; // x19
  __int64 v3; // x20
  __int64 v4; // x21
  __int64 v5; // x0

  v1 = *(_QWORD *)(result + 32);
  v2 = (_QWORD *)result;
  *(_QWORD *)(result + 16) = 0;
  if ( v1 != 0 )
  {
    v3 = v1 - 64;
    v4 = qword_1926BD8;
    v5 = *(_QWORD *)(v4 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v1 - 64) + 880);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, v3);
  }
  v2[4] = 0;
  v2[1] = 0;
  v2[2] = 0;
  return result;
}

}
