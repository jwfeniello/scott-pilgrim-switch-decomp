// The decompiler's text of these functions, compiled as C and compared with the original bytes.
// Every function here matches exactly, but this is a low-level view: nothing has been reviewed. Types
// are the decompiler's guesses, sub_ and qword_ names are address labels, and calls have no real
// prototypes. See docs/DECOMPILER_TEXT.md.
#include <arm_neon.h>
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
__int64 BYREF(...);
__int64 _ZdlPv(...);
extern char byte_154D880;
extern char byte_1924D60;
extern char byte_1924D64;
extern char byte_1924D68;
extern char byte_1924D6C;
extern int dword_191FB00;
extern char loc_B89250[];
__int64 nn__audio__ParseAdpcmHeader(...) noexcept;
__int64 nn__mem__NumberLineAllocator__Finalize(...) noexcept;
__int64 nn__os__FinalizeMutex(...) noexcept;
__int64 nn__os__GetSystemTick(...) noexcept;
__int64 nn__os__LockMutex(...) noexcept;
__int64 nn__os__UnlockMutex(...) noexcept;
__int64 nn__os__WaitEvent(...) noexcept;
extern void* off_1845338[];
extern void* off_18492C8[];
extern void* off_1852620[];
extern void* off_1863D38[];
extern void* off_1863D80[];
extern void* off_1866110[];
extern void* off_189B308[];
extern void* off_189C2B0[];
extern void* off_18A1700[];
extern void* off_18ABA40[];
extern void* off_18AEA10[];
extern void* off_18B1FE0[];
extern void* off_18B20A0[];
extern void* off_18B55F8[];
extern void* off_18B6FE8[];
extern void* off_18BC408[];
extern void* off_18CF808[];
extern void* off_18DC448[];
extern void* off_18DC550[];
extern void* off_18DC658[];
extern void* off_18DCA68[];
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
extern void* off_191B560[];
extern __int64 qword_191B6C0;
extern __int64 qword_191CD10;
extern __int64 qword_191FAF8;
extern __int64 qword_1924BC0;
extern __int64 qword_1926BD8;
extern __int64 qword_192AEB8;
extern __int64 qword_1935058;
extern __int64 qword_1939058;
extern __int64 qword_19397C8;
extern __int64 qword_19397F0;
extern __int64 qword_1939B10;
extern __int64 qword_194AF78;
extern __int64 qword_195B1E0;
extern __int64 qword_195B648;
extern __int64 qword_195B668;
__int64 sub_4A7340(...);
__int64 sub_56CA00(...);
__int64 sub_5766B0(...);
__int64 sub_6782A0(...);
__int64 sub_67EDD0(...);
__int64 sub_680A00(...);
__int64 sub_690EE0(...);
__int64 sub_6A2640(...);
__int64 sub_6EA720(...);
__int64 sub_6F0750(...);
__int64 sub_722190(...);
__int64 sub_72CD50(...);
__int64 sub_770D70(...);
__int64 sub_7712D0(...);
__int64 sub_7725E0(...);
__int64 sub_777710(...);
__int64 sub_778670(...);
__int64 sub_781380(...);
__int64 sub_796450(...);
__int64 sub_7EAAC0(...);
__int64 sub_7FD450(...);
__int64 sub_837F70(...);
__int64 sub_894BA0(...);
__int64 sub_A06DE0(...);
unsigned char sub_A82B30(...);
__int64 sub_A84740(...);
__int64 sub_A972B0(...);
__int64 sub_AA3540(...);
__int64 sub_AAEE30(...);
__int64 sub_AAEFD0(...);
__int64 sub_B19960(...);
float sub_B5E420(...);
__int64 sub_B9D3F0(...);
__int64 sub_BA57A0(...);
__int64 sub_BA7630(...);
__int64 sub_BB1C70(...);
__int64 sub_BFBCE0(...);
__int64 sub_C2C640(...);
__int64 sub_C37EB0(...);
__int64 sub_C57A30(...);
__int64 sub_CF6830(...);
__int64 sub_CF8C60(...);
__int64 sub_D22BE0(...);
__int64 sub_D2C900(...);
__int64 sub_D359B0(...);
__int64 sub_D3C490(...);
__int64 sub_D3E610(...);
__int64 sub_D64EE0(...);
__int64 sub_EC1810(...);
__int64 sub_EC21A0(...);
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
__int64 sub_F9FB50(...);
__int64 sub_FA0140(...);
__int64 x0(...);

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

__int64 __fastcall sub_6B4450(__int64 result) noexcept
{
  _QWORD *v1; // x19
  _QWORD *v2; // x23
  __int64 v3; // x20
  __int64 v4; // x21
  __int64 v5; // x0
  __int64 v6; // x20
  __int64 v7; // x0

  if ( result != 0 )
  {
    v1 = (_QWORD *)result;
    do
    {
      sub_6B4450(*v1);
      v2 = (_QWORD *)v1[1];
      v3 = v1[9];
      v1[8] = 0;
      if ( v3 != 0 )
      {
        v4 = qword_1926BD8;
        v5 = *(_QWORD *)(v4 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v3) + 880);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, v3);
      }
      v6 = qword_1926BD8;
      v7 = *(_QWORD *)(v6 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v1) + 880);
      result = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v7 + 48LL))(v7, v1);
      v1 = v2;
    }
    while ( v2 != nullptr );
  }
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

__int64 __fastcall sub_6F0A60(__int64 result) noexcept
{
  _QWORD *v1; // x19
  _QWORD *v2; // x23
  unsigned int *v3; // x8
  unsigned int v4; // w9
  unsigned int v5; // w9
  __int64 v6; // x20
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x20
  __int64 v10; // x0

  if ( result != 0 )
  {
    v1 = (_QWORD *)result;
    do
    {
      sub_6F0A60(*v1);
      v2 = (_QWORD *)v1[1];
      v3 = (unsigned int *)v1[7];
      if ( v3 != nullptr )
      {
        v5 = __atomic_sub_fetch(v3, 1, 0);
        if ( v5 == 0 )
        {
          v6 = v1[7];
          if ( v6 != 0 )
          {
            v7 = qword_1926BD8;
            v8 = *(_QWORD *)(v7 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v1[7]) + 880);
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 48LL))(v8, v6);
          }
        }
        v1[7] = 0;
      }
      v9 = qword_1926BD8;
      v10 = *(_QWORD *)(v9 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v1) + 880);
      result = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v10 + 48LL))(v10, v1);
      v1 = v2;
    }
    while ( v2 != nullptr );
  }
  return result;
}

// N4Onyx7Details20FunctionInternalHookINS0_23MemberFunctionRetained1IvNS_9Component14ComponentProxyINS_3DLC26EventQueryAvailableContentEEERKNS_5Event4BaseES6_EEEE, virtual slot 2
__int64 __fastcall sub_72D080(__int64 a1)
{
  __int64 v2; // x20
  __int128 v3; // q0

  v2 = sub_A972B0(qword_1935058 + 80, 168);
  *(_QWORD *)v2 = ((__int64)off_18492C8);
  *(_QWORD *)(v2 + 8) = 0;
  v3 = *(_OWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 32) = *(_QWORD *)(a1 + 32);
  *(_OWORD *)(v2 + 16) = v3;
  sub_72CD50(v2 + 40, a1 + 40);
  *(_QWORD *)(v2 + 8) = *(_QWORD *)(a1 + 8);
  return v2;
}

__int64 __fastcall sub_767E20(__int64 a1)
{
  __int64 v1; // x19
  int v3 __attribute__((aligned(8)));

  v1 = sub_770D70(a1 + 128);
  v3 = sub_BFBCE0("LevelTitle");
  return sub_7712D0(v1, &v3, 0);
}

__int64 __fastcall sub_767EB0(__int64 a1)
{
  __int64 v1; // x30
  char *v2; // x8
  __int64 v3; // x19
  int v5 __attribute__((aligned(8)));
  __int64 v6; // [xsp+18h] [xbp-8h]

  if ( byte_1924D64 != 0 )
  {
    v2 = &byte_1924D60;
LABEL_5:
    *v2 = 1;
    goto LABEL_6;
  }
  if ( byte_1924D68 != 0 )
  {
    v2 = &byte_1924D6C;
    goto LABEL_5;
  }
LABEL_6:
  v6 = v1;
  v3 = sub_770D70(a1 + 128);
  v5 = sub_BFBCE0("LevelTitle");
  return sub_7712D0(v3, &v5, 0);
}

// N5storm17NetPropertyVectorINS_15NetPropertyPairINS_18NetPropertyIntegerINS_8StringIdENS_14NumericalTraitIS3_NS_15MaxValueFunctorIS3_Lm0EEELh0ELb0ELb0ENS_19DefaultValueFunctorIS3_Lm0EEEEEEENS_15TNetPropertyRefINS_15NetPropertyNullEEEEELm0EEE, virtual slot 6
__int64 __fastcall sub_785200(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  __int64 v5; // x20
  __int64 i; // x21

  result = sub_5766B0(a1 + 56, a2);
  v5 = *(_QWORD *)(a1 + 32);
  for ( i = *(_QWORD *)(a1 + 40); v5 != i; v5 += 152 )
    result = sub_5766B0(v5, a2);
  return result;
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

_DWORD *__fastcall sub_7D1110(__int64 a1) noexcept
{
  _DWORD *result; // x0
  unsigned int *v3; // x1
  __int64 v4; // x19
  unsigned int v5; // w8
  unsigned int v6; // w8
  __int64 v7; // x20
  __int64 v8; // x0

  result = (_DWORD *)sub_AAEFD0(qword_1935058 + 1176, 4);
  *result = 1;
  v3 = *(unsigned int **)(a1 + 856);
  v4 = *(_QWORD *)(a1 + 848);
  *(_QWORD *)(a1 + 856) = (_QWORD)(result);
  *(_QWORD *)(a1 + 848) = 0;
  v6 = __atomic_sub_fetch(v3, 1, 0);
  if ( v6 == 0 )
  {
    result = (_DWORD *)sub_AAEE30(qword_1935058 + 1176, v3);
    if ( v4 != 0 )
    {
      v7 = qword_1926BD8;
      v8 = *(_QWORD *)(v7 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v4) + 880);
      return (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 48LL))(v8, v4);
    }
  }
  return result;
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

// N4Onyx7Details20FunctionInternalHookINS0_23MemberFunctionRetained1IvNS_9Component14ComponentProxyIN4SPTG14EventSetRecordEEERKNS_5Event4BaseES6_EEEE, virtual slot 2
__int64 __fastcall sub_7FB180(__int64 a1)
{
  __int64 v2; // x20
  __int64 v3; // x8
  __int64 v4; // t1
  __int64 v5; // x8

  v2 = sub_A972B0(qword_1935058 + 80, 104);
  *(_QWORD *)v2 = ((__int64)off_1852620);
  *(_QWORD *)(v2 + 8) = 0;
  v3 = *(_QWORD *)(a1 + 32);
  *(_OWORD *)(v2 + 16) = *(_OWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 32) = v3;
  *(_BYTE *)(v2 + 40) = *(_BYTE *)(a1 + 40);
  *(_DWORD *)(v2 + 44) = *(_DWORD *)(a1 + 44);
  v4 = *(_QWORD *)(a1 + 48);
  a1 += 48;
  *(_QWORD *)(v2 + 48) = v4;
  *(_QWORD *)(v2 + 56) = 0;
  *(_QWORD *)(v2 + 64) = 0;
  *(_QWORD *)(v2 + 72) = 0;
  sub_7EAAC0(v2 + 48, a1);
  v5 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(v2 + 93) = *(_QWORD *)(a1 + 45);
  *(_QWORD *)(v2 + 88) = v5;
  *(_QWORD *)(v2 + 8) = *(_QWORD *)(a1 - 40);
  return v2;
}

// N4SPTG9FlashMenu15FlashMenuBridgeE, virtual slot 5
__int64 __fastcall sub_7FD390(char *a1, char *a2)
{
  __int64 *v4; // x8

  sub_7FD450(a1, a2, 1048846, 3, 0, 0);
  sub_7FD450(a1, a2, 1048844, 2, 0, 0);
  sub_7FD450(a1, a2, 1048840, 11, 0, 0);
  sub_7FD450(a1, a2, 1048842, 13, 0, 0);
  v4 = &qword_191B6C0;
  if ( *(_QWORD *)(a2 + 64) != 0 )
    v4 = *(__int64 **)(a2 + 64);
  if ( *(_DWORD *)v4 == 1049748 )
    *(_QWORD *)(a1 + 40) = (_QWORD)(a2);
  return 0;
}
__int64 __fastcall sub_816420(__int64 result, _DWORD *a2)
{
  __int64 v3; // x19
  _DWORD *v4; // x21
  int v5 __attribute__((aligned(8)));

  v3 = result;
  if ( *(_DWORD *)(result + 1264) == 2 )
  {
    v4 = (_DWORD *)sub_6EA720(result + 368);
    v5 = sub_BFBCE0("CharacterDataMovie");
    result = sub_778670(v4, &v5, *(unsigned int *)(v3 + 564), 0);
  }
  if ( *a2 != 0 )
  {
    *(_DWORD *)(v3 + 1264) = 0;
  }
  else if ( *(_DWORD *)(v3 + 1264) == 1 )
  {
    *(_BYTE *)(v3 + 626) = 1;
  }
  return result;
}

__int64 __fastcall sub_826C80(__int64 a1)
{
  __int64 v1; // x30
  char *v2; // x8
  __int64 v3; // x19
  int v5 __attribute__((aligned(8)));
  __int64 v6; // [xsp+18h] [xbp-8h]

  if ( byte_1924D64 != 0 )
  {
    v2 = &byte_1924D60;
LABEL_5:
    *v2 = 1;
    goto LABEL_6;
  }
  if ( byte_1924D68 != 0 )
  {
    v2 = &byte_1924D6C;
    goto LABEL_5;
  }
LABEL_6:
  v6 = v1;
  v3 = sub_770D70(a1 + 728);
  v5 = sub_BFBCE0("LevelTitle");
  return sub_7712D0(v3, &v5, 0);
}

// N4SPTG14PauseMenuMovieE, virtual slot 43
__int64 __fastcall sub_82A450(__int64 a1)
{
  __int64 v1; // x19
  int v3 __attribute__((aligned(8)));

  v1 = sub_770D70(a1 + 728);
  v3 = sub_BFBCE0("WorldMap");
  return sub_7712D0(v1, &v3, 0);
}

// NSt3__110__function6__funcIZN4SPTG13DialogManager10ShowDialogEijNS_8functionIFvvEEES6_bE4$_10NS_9allocatorIS7_EES5_EE, virtual slot 6
__int64 __fastcall sub_82C090(__int64 a1)
{
  __int64 v1; // x8
  _DWORD *v2; // x19
  __int64 v3; // x8
  int v6 __attribute__((aligned(8)));

  v2 = *(_DWORD **)(a1 + 8);
  v1 = *(_QWORD *)(a1 + 16);
  v6 = -1;
  v3 = *(_QWORD *)(v1 + 152);
  if ( v3 != 0 && *(_QWORD *)(v3 + 8) != 0 )
    v6 = sub_BFBCE0((void *)(v3 + 24));
  return sub_778670(v2, &v6, *(unsigned int *)(a1 + 24), 0);
}

// NSt3__110__function6__funcIZN4SPTG14PauseMenuMovie9TickMovieEvE4$_31NS_9allocatorIS4_EEFvvEEE, virtual slot 6
__int64 __fastcall sub_82C2D0(__int64 a1)
{
  __int64 v1; // x30
  __int64 v2; // x8
  char *v3; // x9
  __int64 v4; // x19
  int v6 __attribute__((aligned(8)));
  __int64 v7; // [xsp+18h] [xbp-8h]

  v2 = *(_QWORD *)(a1 + 8);
  if ( byte_1924D64 != 0 )
  {
    v3 = &byte_1924D60;
LABEL_5:
    *v3 = 1;
    goto LABEL_6;
  }
  if ( byte_1924D68 != 0 )
  {
    v3 = &byte_1924D6C;
    goto LABEL_5;
  }
LABEL_6:
  v7 = v1;
  v4 = sub_770D70(v2 + 728);
  v6 = sub_BFBCE0("LevelTitle");
  return sub_7712D0(v4, &v6, 0);
}

__int64 __fastcall sub_847D00(__int64 a1)
{
  __int64 v1; // x20
  int v3; // w21
  __int64 v4; // x0
  __int64 result; // x0
  __int64 v6; // x8
  __int64 v7; // x20
  __int64 v8; // x9
  __int64 *v9; // x8
  __int64 *v10; // x9
  __int64 v11; // x10
  __int64 v12; // t1
  int v13; // w8

  v1 = a1 + 360;
  v3 = *(_DWORD *)(sub_777710(a1 + 360) + 6188);
  v4 = sub_777710(v1);
  result = sub_7725E0(v4 + 120);
  v7 = result + 80;
  v6 = *(_QWORD *)(result + 80);
  if ( v6 == 0 || (v8 = *(_QWORD *)(v6 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 794088402, v7);
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v7 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v7 + 8LL));
    v8 = *(_QWORD *)(*(_QWORD *)v7 + 8LL);
  }
  v9 = *(__int64 **)(v8 + 152);
  v10 = *(__int64 **)(v8 + 160);
  if ( v9 == v10 )
    goto LABEL_10;
  while ( 1 )
  {
    v12 = *v9++;
    v11 = v12;
    if ( *(_DWORD *)(v12 + 520) == v3 )
      break;
    if ( v10 == v9 )
      goto LABEL_10;
  }
  if ( v11 == 0 )
LABEL_10:
    v13 = 0;
  else
    v13 = *(_DWORD *)(v11 + 480);
  *(_DWORD *)(a1 + 564) = v13;
  return result;
}

__int64 __fastcall sub_847DC0(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x0
  __int64 v4; // x19
  int v6 __attribute__((aligned(8)));

  v1 = a1 + 728;
  sub_680A00(a1 + 728);
  sub_680A00(v1);
  v3 = sub_796450(a1 + 712);
  sub_6F0750(v3, a1 + 1608);
  v4 = sub_770D70(a1 + 704);
  v6 = sub_BFBCE0("TitleScreen");
  return sub_7712D0(v4, &v6, 0);
}

// N4SPTG12KeyboardMenu18KeyboardMenuBridgeE, virtual slot 5
__int64 __fastcall sub_853CB0(char *a1, char *a2)
{
  __int64 *v4; // x8

  sub_7FD450(a1, a2, 1048846, 3, 0, 0);
  sub_7FD450(a1, a2, 1048844, 2, 0, 0);
  sub_7FD450(a1, a2, 1048840, 11, 0, 0);
  sub_7FD450(a1, a2, 1048842, 13, 0, 0);
  v4 = &qword_191B6C0;
  if ( *(_QWORD *)(a2 + 64) != 0 )
    v4 = *(__int64 **)(a2 + 64);
  if ( *(_DWORD *)v4 == 1049748 )
    *(_QWORD *)(a1 + 40) = (_QWORD)(a2);
  sub_837F70(a1, a2);
  return 0;
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

__int64 __fastcall sub_913440(__int64 result)
{
  __int64 v1; // x19
  int v2 __attribute__((aligned(8)));

  if ( *(_BYTE *)(result + 153) != 0 )
  {
    v1 = sub_770D70(result + 176);
    v2 = sub_BFBCE0("LevelTitle");
    return sub_7712D0(v1, &v2, 0);
  }
  return result;
}

// N4SPTG10SPTG_PressE, virtual slot 15
void __fastcall sub_939FA0(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // x8
  _QWORD *v5; // x9
  _QWORD *v6; // x20

  if ( (a3 & 3) != 0 )
  {
    v3 = *(_QWORD *)(a2 + 16);
    if ( v3 != 0 )
    {
      v5 = *(_QWORD **)(a2 + 32);
      v6 = v5;
      do
      {
        if ( (*(_BYTE *)(*v6 + 56LL) & 1) != 0 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 104LL))(*v6);
          v5 = *(_QWORD **)(a2 + 32);
          v3 = *(_QWORD *)(a2 + 16);
        }
        ++v6;
      }
      while ( v6 != &v5[v3] );
    }
  }
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

void sub_A09290(char *result, _QWORD *a2)
{
  char *v2; // x20
  char *v4; // x21
  __int64 v5; // x0
  char *v6; // x8

  if ( *(_QWORD *)(result + 152) != 0 )
  {
    v2 = result;
    v4 = (char *)(sub_7725E0(result + 88) + 128);
    if ( *(_QWORD *)v4 == 0 || (v5 = *(_QWORD *)(*(_QWORD *)v4 + 8LL)) == 0 )
    {
      sub_67EDD0(qword_191CD10, 1325983354, v4);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v4 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v4 + 8LL));
      if ( *(_QWORD *)v4 != 0 )
        v5 = *(_QWORD *)(*(_QWORD *)v4 + 8LL);
      else
        v5 = 0;
    }
    sub_A06DE0(v5, *a2, *(_QWORD *)(v2 + 152));
    v6 = (char *)(*a2);
    *(_BYTE *)(v6 + 5040) = 1;
    *(_QWORD *)(v6 + 5164) = 0;
    *(_QWORD *)(v6 + 5180) = 0;
    *(_QWORD *)(v6 + 5172) = 0;
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

// N4Gear13AsynchGenericE, virtual slot 26
__int64 __fastcall sub_A845C0(__int64 a1, __int64 a2)
{
  __int64 v2; // x8
  _BYTE *v3; // x21
  __int64 result; // x0
  int v9; // [xsp+Ch] [xbp-24h] BYREF
  unsigned int v8; // [xsp+8h] [xbp-28h] BYREF
  __int64 v7; // [xsp+0h] [xbp-30h] BYREF

  v3 = *(_BYTE **)a2;
  v2 = *(_QWORD *)(a2 + 8);
  v8 = 0;
  v7 = v2;
  *(_DWORD *)(a1 + 1848) = 0;
  if ( (v3[40] & 0x20) != 0 )
  {
    (*(void (__fastcall **)(_BYTE *, __int64 *))(*(_QWORD *)v3 + 24LL))(v3, &v7);
  }
  else
  {
    v9 = 4;
    (*(__int64(**)(...))off_189B308)(0, &v9);
  }
  result = sub_A84740(v3, *(_QWORD *)(a2 + 24), *(unsigned int *)(a2 + 16), &v8);
  if ( (result & 1) == 0 && v7 + (unsigned __int64)v8 < *(unsigned int *)(a2 + 16) )
    *(_DWORD *)(a1 + 1848) = 10;
  return result;
}

// N4Gear8DiskFileE, virtual slot 1
__int64 __fastcall sub_A99250(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = 4;
  (*(__int64(**)(...))off_189B308)(0, &v6);
  *a4 = 0;
  return 1;
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

// N4Gear15GamePadKeyboardE, virtual slot 68
__int64 __fastcall sub_AAA7D0(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x19
  _QWORD *v3; // x20
  __int64 result; // x0
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x21

  v2 = a1 + 8;
  v1 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(a1 + 386) = 1;
  v3 = (_QWORD *)qword_192AEB8;
  result = (*(__int64 (__fastcall **)(__int64))(v1 + 16))(a1 + 8);
  if ( v3[34] <= (unsigned __int64)(unsigned __int8)result )
    result = sub_AA3540(v3, v2);
  v5 = v3[13];
  if ( v5 != 0 )
  {
    v6 = v3[14];
    v7 = v6;
    do
    {
      if ( *(_QWORD *)v7 != 0 || *(_QWORD *)(v7 + 32) != 0 )
      {
        result = (*(__int64 (__fastcall **)(__int64, __int64))(v7 + 40))(v7, v2);
        v5 = v3[13];
        v6 = v3[14];
      }
      v7 += 48;
    }
    while ( v7 != v6 + 48 * v5 );
  }
  return result;
}

// N4Gear15GamePadKeyboardE, virtual slot 69
__int64 __fastcall sub_AAA870(__int64 result)
{
  __int64 v1; // x21
  __int64 v2; // x8
  __int64 v3; // x9
  __int64 v4; // x19
  __int64 v5; // x20

  *(_BYTE *)(result + 386) = 0;
  v1 = qword_192AEB8;
  v2 = *(_QWORD *)(qword_192AEB8 + 144);
  if ( v2 != 0 )
  {
    v3 = *(_QWORD *)(qword_192AEB8 + 152);
    v4 = result + 8;
    v5 = v3;
    do
    {
      if ( *(_QWORD *)v5 != 0 || *(_QWORD *)(v5 + 32) != 0 )
      {
        result = (*(__int64 (__fastcall **)(__int64, __int64))(v5 + 40))(v5, v4);
        v2 = *(_QWORD *)(v1 + 144);
        v3 = *(_QWORD *)(v1 + 152);
      }
      v5 += 48;
    }
    while ( v5 != v3 + 48 * v2 );
  }
  return result;
}

// N4Gear12GamePadMouseE, virtual slot 68
__int64 __fastcall sub_AAAFE0(__int64 a1)
{
  __int64 v1; // x8
  __int64 v2; // x19
  _QWORD *v3; // x20
  __int64 result; // x0
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 v7; // x21

  v2 = a1 + 8;
  v1 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(a1 + 386) = 1;
  v3 = (_QWORD *)qword_192AEB8;
  result = (*(__int64 (__fastcall **)(__int64))(v1 + 16))(a1 + 8);
  if ( v3[34] <= (unsigned __int64)(unsigned __int8)result )
    result = sub_AA3540(v3, v2);
  v5 = v3[13];
  if ( v5 != 0 )
  {
    v6 = v3[14];
    v7 = v6;
    do
    {
      if ( *(_QWORD *)v7 != 0 || *(_QWORD *)(v7 + 32) != 0 )
      {
        result = (*(__int64 (__fastcall **)(__int64, __int64))(v7 + 40))(v7, v2);
        v5 = v3[13];
        v6 = v3[14];
      }
      v7 += 48;
    }
    while ( v7 != v6 + 48 * v5 );
  }
  return result;
}

// N4Gear12GamePadMouseE, virtual slot 69
__int64 __fastcall sub_AAB080(__int64 result)
{
  __int64 v1; // x21
  __int64 v2; // x8
  __int64 v3; // x9
  __int64 v4; // x19
  __int64 v5; // x20

  *(_BYTE *)(result + 386) = 0;
  v1 = qword_192AEB8;
  v2 = *(_QWORD *)(qword_192AEB8 + 144);
  if ( v2 != 0 )
  {
    v3 = *(_QWORD *)(qword_192AEB8 + 152);
    v4 = result + 8;
    v5 = v3;
    do
    {
      if ( *(_QWORD *)v5 != 0 || *(_QWORD *)(v5 + 32) != 0 )
      {
        result = (*(__int64 (__fastcall **)(__int64, __int64))(v5 + 40))(v5, v4);
        v2 = *(_QWORD *)(v1 + 144);
        v3 = *(_QWORD *)(v1 + 152);
      }
      v5 += 48;
    }
    while ( v5 != v3 + 48 * v2 );
  }
  return result;
}

__int64 __fastcall sub_AB7FD0(__int64 a1)
{
  __int64 v2; // x20

  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(qword_1935058 + 1368) + 16LL))(
         *(_QWORD *)(qword_1935058 + 1368),
         88);
  sub_BB1C70(v2, a1);
  *(_QWORD *)v2 = ((__int64)off_18B20A0);
  *(_BYTE *)(v2 + 24) = 0;
  *(_DWORD *)(v2 + 28) = 0;
  *(_BYTE *)(v2 + 32) = 1;
  *(_DWORD *)(v2 + 36) = 0;
  *(_QWORD *)(v2 + 80) = 0;
  *(_QWORD *)(v2 + 56) = 0;
  *(_QWORD *)(v2 + 64) = 0;
  *(_QWORD *)(v2 + 48) = qword_1935058 + 80;
  return v2;
}

__int64 __fastcall sub_AB8050(__int64 a1)
{
  __int64 v2; // x20

  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(qword_1935058 + 1368) + 16LL))(
         *(_QWORD *)(qword_1935058 + 1368),
         72);
  sub_BB1C70(v2, a1);
  *(_QWORD *)v2 = ((__int64)off_18B1FE0);
  *(_QWORD *)(v2 + 56) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_QWORD *)(v2 + 40) = 0;
  *(_QWORD *)(v2 + 24) = qword_1935058 + 80;
  *(_BYTE *)(v2 + 64) = 0;
  return v2;
}

// N4Onyx15TriggerDirectorE, virtual slot 15
void __fastcall sub_AC6490(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // x8
  _QWORD *v5; // x9
  _QWORD *v6; // x20

  if ( (a3 & 3) != 0
    && (qword_1924BC0 == 0 || *(_BYTE *)(qword_1924BC0 + 224) == 0 || *(_BYTE *)(qword_1924BC0 + 226) != 0) )
  {
    v4 = *(_QWORD *)(a2 + 16);
    if ( v4 != 0 )
    {
      v5 = *(_QWORD **)(a2 + 32);
      v6 = v5;
      do
      {
        if ( (*(_BYTE *)(*v6 + 56LL) & 1) != 0 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 104LL))(*v6);
          v5 = *(_QWORD **)(a2 + 32);
          v4 = *(_QWORD *)(a2 + 16);
        }
        ++v6;
      }
      while ( v6 != &v5[v4] );
    }
  }
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

// N4Onyx8Graphics24ModuleInstanceRenderUnitE, virtual slot 4
__int64 __fastcall sub_B4AD50(__int64 a1)
{
  __int64 v1; // x20
  __int64 v3; // x8
  __int64 v4; // x20
  __int64 v5; // t1
  __int64 v6; // x0

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  v5 = *(_QWORD *)(v1 + 80);
  v4 = v1 + 80;
  v3 = v5;
  if ( v5 == 0 || (v6 = *(_QWORD *)(v3 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 2092626935, v4);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v4 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v4 + 8LL));
    if ( *(_QWORD *)v4 != 0 )
      v6 = *(_QWORD *)(*(_QWORD *)v4 + 8LL);
    else
      v6 = 0;
  }
  return sub_B19960(v6, *(unsigned int *)(a1 + 48));
}

// N4Onyx34AdaptPerspectiveCameraViewStrategyE, virtual slot 3
void __fastcall sub_B5E520(__int64 a1, float *a2, __int64 a3)
{
  *(_QWORD *)(a1 + 8) = a3;
  *(float *)(a1 + 16) = (*(float (__fastcall **)(__int64))(*(_QWORD *)a3 + 104LL))(a3);
  *(float *)(*(_QWORD *)(a1 + 8) + 220LL) = sub_B5E420(a2);
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

// N4Onyx8Graphics20EvolutionDevelopment23ScreenRenderSetupSetterE, virtual slot 4
__int64 __fastcall sub_B89860(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // x0
  int v7; // [xsp+Ch] [xbp-24h] BYREF

  sub_6782A0();
  ((void (__fastcall *)(__int64, __int64, __int64))loc_B89250)(a1 + 80, a2, a3);
  v7 = *(_DWORD *)(a1 + 96);
  result = (*(__int64 (__fastcall **)(_QWORD, int *, __int64))(**(_QWORD **)(a2 + 8) + 48LL))(
             *(_QWORD *)(a2 + 8),
             &v7,
             4);
  *(_QWORD *)a2 += (unsigned int)result;
  *(_DWORD *)(a1 + 96) = v7;
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

// N4Onyx8Behavior9CrossfadeE, virtual slot 0
__int64 __fastcall sub_BA6720(__int64 a1, __int64 a2)
{
  int v5; // [xsp+Ch] [xbp-14h] BYREF

  sub_BA57A0(a1 + 8);
  *(_QWORD *)a2 += (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a2 + 8) + 48LL))(
                     *(_QWORD *)(a2 + 8),
                     a1 + 16,
                     4);
  v5 = *(_DWORD *)(a1 + 24);
  *(_QWORD *)a2 += (*(unsigned int (__fastcall **)(_QWORD, int *, __int64))(**(_QWORD **)(a2 + 8) + 48LL))(
                     *(_QWORD *)(a2 + 8),
                     &v5,
                     4);
  *(_DWORD *)(a1 + 24) = v5;
  return sub_BA7630(a2, a1 + 32);
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

// N4Onyx16f32ConstantTrackE, virtual slot 3
__int64 __fastcall sub_BBF370(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  int v7; // [xsp+1Ch] [xbp-14h] BYREF
  unsigned int v6; // [xsp+18h] [xbp-18h] BYREF
  __int16 v5; // [xsp+Ch] [xbp-24h] BYREF

  *(_QWORD *)a2 += (*(unsigned int (__fastcall **)(_QWORD, int *, __int64))(**(_QWORD **)(a2 + 8) + 48LL))(
                     *(_QWORD *)(a2 + 8),
                     &v7,
                     4);
  *(_DWORD *)(a1 + 12) = v7;
  *(_QWORD *)a2 += (*(unsigned int (__fastcall **)(_QWORD, unsigned int *, __int64))(**(_QWORD **)(a2 + 8) + 48LL))(
                     *(_QWORD *)(a2 + 8),
                     &v6,
                     4);
  v6 -= 4;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a1 + 8) & 0xFFFFFFFF0000FFFFLL | ((unsigned __int64)v6 << 16);
  *(_QWORD *)a2 += (*(unsigned int (__fastcall **)(_QWORD, __int16 *, __int64))(**(_QWORD **)(a2 + 8) + 48LL))(
                     *(_QWORD *)(a2 + 8),
                     &v5,
                     2);
  *(_WORD *)(a1 + 8) = v5;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a2 + 8) + 48LL))(
             *(_QWORD *)(a2 + 8),
             a1 + 16,
             4);
  *(_QWORD *)a2 += (unsigned int)result;
  return result;
}

// N4Onyx16s32ConstantTrackE, virtual slot 3
__int64 __fastcall sub_BBF4B0(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  int v7; // [xsp+1Ch] [xbp-14h] BYREF
  unsigned int v6; // [xsp+18h] [xbp-18h] BYREF
  __int16 v5; // [xsp+Ch] [xbp-24h] BYREF

  *(_QWORD *)a2 += (*(unsigned int (__fastcall **)(_QWORD, int *, __int64))(**(_QWORD **)(a2 + 8) + 48LL))(
                     *(_QWORD *)(a2 + 8),
                     &v7,
                     4);
  *(_DWORD *)(a1 + 12) = v7;
  *(_QWORD *)a2 += (*(unsigned int (__fastcall **)(_QWORD, unsigned int *, __int64))(**(_QWORD **)(a2 + 8) + 48LL))(
                     *(_QWORD *)(a2 + 8),
                     &v6,
                     4);
  v6 -= 4;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a1 + 8) & 0xFFFFFFFF0000FFFFLL | ((unsigned __int64)v6 << 16);
  *(_QWORD *)a2 += (*(unsigned int (__fastcall **)(_QWORD, __int16 *, __int64))(**(_QWORD **)(a2 + 8) + 48LL))(
                     *(_QWORD *)(a2 + 8),
                     &v5,
                     2);
  *(_WORD *)(a1 + 8) = v5;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a2 + 8) + 48LL))(
             *(_QWORD *)(a2 + 8),
             a1 + 16,
             4);
  *(_QWORD *)a2 += (unsigned int)result;
  return result;
}

// N4Onyx16u32ConstantTrackE, virtual slot 3
__int64 __fastcall sub_BBF5F0(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  int v7; // [xsp+1Ch] [xbp-14h] BYREF
  unsigned int v6; // [xsp+18h] [xbp-18h] BYREF
  __int16 v5; // [xsp+Ch] [xbp-24h] BYREF

  *(_QWORD *)a2 += (*(unsigned int (__fastcall **)(_QWORD, int *, __int64))(**(_QWORD **)(a2 + 8) + 48LL))(
                     *(_QWORD *)(a2 + 8),
                     &v7,
                     4);
  *(_DWORD *)(a1 + 12) = v7;
  *(_QWORD *)a2 += (*(unsigned int (__fastcall **)(_QWORD, unsigned int *, __int64))(**(_QWORD **)(a2 + 8) + 48LL))(
                     *(_QWORD *)(a2 + 8),
                     &v6,
                     4);
  v6 -= 4;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a1 + 8) & 0xFFFFFFFF0000FFFFLL | ((unsigned __int64)v6 << 16);
  *(_QWORD *)a2 += (*(unsigned int (__fastcall **)(_QWORD, __int16 *, __int64))(**(_QWORD **)(a2 + 8) + 48LL))(
                     *(_QWORD *)(a2 + 8),
                     &v5,
                     2);
  *(_WORD *)(a1 + 8) = v5;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a2 + 8) + 48LL))(
             *(_QWORD *)(a2 + 8),
             a1 + 16,
             4);
  *(_QWORD *)a2 += (unsigned int)result;
  return result;
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

// N4Onyx20ActionPlayerDirectorE, virtual slot 15
void __fastcall sub_BCBE90(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // x8
  _QWORD *v5; // x9
  _QWORD *v6; // x20

  if ( (a3 & 3) != 0 )
  {
    v3 = *(_QWORD *)(a2 + 16);
    if ( v3 != 0 )
    {
      v5 = *(_QWORD **)(a2 + 32);
      v6 = v5;
      do
      {
        if ( (*(_BYTE *)(*v6 + 56LL) & 1) != 0 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 104LL))(*v6);
          v5 = *(_QWORD **)(a2 + 32);
          v3 = *(_QWORD *)(a2 + 16);
        }
        ++v6;
      }
      while ( v6 != &v5[v3] );
    }
  }
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

// NSt3__110__function6__funcIZN5EE_US13StormInstance10QuickmatchENS_8functionIFvRKN5storm4echo7session8outEvent13SessionJoinedEEEENS4_IFvRKNS5_35SimpleMatchmakingMatchedAsPeerEventEEEENS4_IFvRKNS5_35SimpleMatchmakingMatchedAsHostEventEEEENS4_IFvRKNS5_32SimpleMatchmakingNotMatchedEventEEEENS4_IFvNS5_7E, virtual slot 3
__int64 __fastcall sub_C4F790(char *a1, _QWORD *a2)
{
  _QWORD *v3; // x1
  char *result; // x0

  *a2 = ((__int64)off_18BC408);
  v3 = a2 + 2;
  result = (char *)(*(_QWORD *)(a1 + 48));
  if ( result != 0 )
  {
    if ( a1 + 16 == result )
    {
      a2[6] = (_QWORD)(v3);
      result = (char *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 24LL))(*(_QWORD *)(a1 + 48)));
    }
    else
    {
      result = (char *)((*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)result + 16LL))((long long)(result), v3));
      a2[6] = (_QWORD)(result);
    }
  }
  else
  {
    a2[6] = 0;
  }
  a2[8] = *(_QWORD *)(a1 + 64);
  return (long long)(result);
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

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_14ComputeCircuitEN4Gear7Vector3IfEEEE, virtual slot 4
__int64 __fastcall sub_CC0270(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE v7[16]; // [xsp+0h] [xbp-30h] BYREF

  (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a4 + 40LL))(a4, a3, v7);
  (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a1 + 48LL))(a1, a2, v7);
  return 1;
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_14ComputeCircuitEN4Gear11Quaternion4IfEEEE, virtual slot 4
__int64 __fastcall sub_CC6E20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE v7[16]; // [xsp+0h] [xbp-30h] BYREF

  (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a4 + 40LL))(a4, a3, v7);
  (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a1 + 48LL))(a1, a2, v7);
  return 1;
}

// N4Onyx17CollisionObstacleE, virtual slot 3
__int64 __fastcall sub_CD3770(__int64 result) noexcept
{
  _QWORD *v1; // x20
  __int64 v2; // x19
  __int64 v3; // x21
  __int64 v4; // x21
  __int64 v5; // x22
  __int64 v6; // x23
  __int64 v7; // x0

  v1 = (_QWORD *)qword_1939058;
  v2 = result;
  if ( qword_1939058 != 0 )
  {
    v3 = qword_1926BD8;
    v4 = *(_QWORD *)(v3 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, qword_1939058) + 880);
    v5 = v1[4];
    v1[2] = 0;
    if ( v5 != 0 )
    {
      v6 = qword_1926BD8;
      v7 = *(_QWORD *)(v6 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v5) + 880);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, v5);
    }
    v1[4] = 0;
    v1[1] = 0;
    v1[2] = 0;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v4 + 48LL))(v4, v1);
    qword_1939058 = 0;
  }
  *(_DWORD *)(v2 + 56) &= ~2u;
  return result;
}

// N4Dare7Private10SndManagerE, virtual slot 3
__int64 __fastcall sub_CF87B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // w20

  nn__os__LockMutex(qword_19397C8);
  v7 = (*(unsigned int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 184LL))(a2, a3, a4);
  if ( v7 == 0 )
    sub_CF8C60(a2);
  nn__os__UnlockMutex(qword_19397C8);
  return v7;
}

// N4Dare7Private10SndManagerE, virtual slot 6
__int64 __fastcall sub_CF88A0(__int64 a1, __int64 a2)
{
  unsigned int v3; // w20

  nn__os__LockMutex(qword_19397C8);
  v3 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 208LL))(a2);
  if ( v3 == 0 )
    sub_CF8C60(a2);
  nn__os__UnlockMutex(qword_19397C8);
  return v3;
}

__int64 __fastcall sub_CF8A10(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // w20

  nn__os__LockMutex(qword_19397C8);
  v7 = (*(unsigned int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 184LL))(a2, a3, a4);
  if ( v7 == 0 )
    sub_CF8C60(a2);
  nn__os__UnlockMutex(qword_19397C8);
  return v7;
}

__int64 __fastcall sub_CF8B00(__int64 a1, __int64 a2)
{
  unsigned int v3; // w20

  nn__os__LockMutex(qword_19397C8);
  v3 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 208LL))(a2);
  if ( v3 == 0 )
    sub_CF8C60(a2);
  nn__os__UnlockMutex(qword_19397C8);
  return v3;
}

// N4Dare7Private17ValueInterpolatorIiEE, virtual slot 6
int __fastcall sub_D00770(__int64 a1, int a2, int a3, float a4)
{
  char *v8; // x0

  v8 = (char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  *(_DWORD *)(a1 + 56) = a2;
  *(_DWORD *)(a1 + 60) = a3;
  *(float *)(a1 + 32) = a4;
  if ( a4 > 0.0 )
  {
    *(_QWORD *)(a1 + 8) = nn__os__GetSystemTick(v8) - qword_195B648;
    *(_DWORD *)(a1 + 24) = 2;
  }
  return 0;
}

// N4Dare7Private9MasterBusE, virtual slot 5
int __fastcall sub_D21430(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  __int64 v4; // [xsp+8h] [xbp-18h] BYREF

  v4 = 0;
  result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 72LL))(a2, &v4);
  if ( (result & 0x80000000) == 0 )
  {
    result = 2147541001LL;
    if ( *(_DWORD *)(a1 + 1376) != 0
      && *(_DWORD *)v4 != 0
      && *(_DWORD *)(*(_QWORD *)(a1 + 1400) + 376LL * *(_QWORD *)(a1 + 1392) - 376) != 0 )
    {
      if ( **(_DWORD **)(v4 + 24) != 0 )
        return 0;
      else
        return 2147541001LL;
    }
  }
  return result;
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
__int64 __fastcall sub_D3C3C0(__int64 a1)
{
  unsigned __int64 *v2; // x19
  __int64 result; // x0
  __int64 v4; // x20
  _DWORD *v5; // x21
  void (__fastcall *v6)(_DWORD *); // x22
  _DWORD *v7; // [xsp+8h] [xbp-28h] BYREF

  nn__os__WaitEvent(*(_QWORD *)(a1 + 888) + 8LL);
  v7 = nullptr;
  v2 = (unsigned __int64 *)(a1 + 944);
  result = sub_D3C490((unsigned __int64 *)(a1 + 944), &v7);
  if ( (_DWORD)result != 0 )
  {
    v4 = a1 - 8;
    do
    {
      v5 = v7;
      if ( v7[2] == 0 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 16LL))(v7);
      v6 = (void (__fastcall *)(_DWORD *))(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 56LL))(v5);
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 24LL))(v5);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4) == 1 )
        v6(v5);
      result = sub_D3C490(v2, &v7);
    }
    while ( (_DWORD)result != 0 );
  }
  return result;
}

__int64 __fastcall sub_D5EF20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x22
  __int64 v7; // x1

  v3 = qword_19397F0;
  if ( qword_19397F0 == 0 )
  {
    v3 = sub_722190(488, 8);
    sub_CF6830(v3, v7);
    qword_19397F0 = v3;
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, a1, a2, a3);
}

__int64 __fastcall sub_D5F030(__int64 a1, __int64 a2)
{
  __int64 v2; // x21
  __int64 v5; // x1

  v2 = qword_19397F0;
  if ( qword_19397F0 == 0 )
  {
    v2 = sub_722190(488, 8);
    sub_CF6830(v2, v5);
    qword_19397F0 = v2;
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v2 + 48LL))(v2, a1, a2);
}

__int64 __fastcall sub_D5F1B0(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // x22
  __int64 v7; // x1
  unsigned int v8; // w19

  if ( qword_19397F0 == 0 )
  {
    v6 = sub_722190(488, 8);
    sub_CF6830(v6, v7);
    qword_19397F0 = v6;
  }
  nn__os__LockMutex(qword_19397C8);
  v8 = (*(unsigned int (__fastcall **)(__int64, __typeof__(a2), __typeof__(a3)))(*(_QWORD *)a1 + 248LL))(a1, a2, a3);
  nn__os__UnlockMutex(qword_19397C8);
  return v8;
}

__int64 __fastcall sub_D5F230(__int64 a1, __int64 a2)
{
  __int64 v4; // x21
  __int64 v5; // x1
  unsigned int v6; // w19

  if ( qword_19397F0 == 0 )
  {
    v4 = sub_722190(488, 8);
    sub_CF6830(v4, v5);
    qword_19397F0 = v4;
  }
  nn__os__LockMutex(qword_19397C8);
  v6 = (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 232LL))(a1, a2);
  nn__os__UnlockMutex(qword_19397C8);
  return v6;
}

__int64 __fastcall sub_D61B40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x22
  __int64 v7; // x1

  v3 = qword_19397F0;
  if ( qword_19397F0 == 0 )
  {
    v3 = sub_722190(488, 8);
    sub_CF6830(v3, v7);
    qword_19397F0 = v3;
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, a1, a2, a3);
}

__int64 __fastcall sub_D61C50(__int64 a1, __int64 a2)
{
  __int64 v2; // x21
  __int64 v5; // x1

  v2 = qword_19397F0;
  if ( qword_19397F0 == 0 )
  {
    v2 = sub_722190(488, 8);
    sub_CF6830(v2, v5);
    qword_19397F0 = v2;
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v2 + 48LL))(v2, a1, a2);
}

__int64 __fastcall sub_D61CB0(__int64 a1, unsigned int a2)
{
  __int64 v4; // x21
  __int64 v5; // x1

  if ( qword_19397F0 == 0 )
  {
    v4 = sub_722190(488, 8);
    sub_CF6830(v4, v5);
    qword_19397F0 = v4;
  }
  (*(void (__fastcall **)(__int64, __typeof__(a2)))(*(_QWORD *)a1 + 224LL))(a1, a2);
  return 1;
}

__int64 __fastcall sub_D61D10(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // x22
  __int64 v7; // x1
  unsigned int v8; // w19

  if ( qword_19397F0 == 0 )
  {
    v6 = sub_722190(488, 8);
    sub_CF6830(v6, v7);
    qword_19397F0 = v6;
  }
  nn__os__LockMutex(qword_19397C8);
  v8 = (*(unsigned int (__fastcall **)(__int64, __typeof__(a2), __typeof__(a3)))(*(_QWORD *)a1 + 248LL))(a1, a2, a3);
  nn__os__UnlockMutex(qword_19397C8);
  return v8;
}

__int64 __fastcall sub_D61D90(__int64 a1, __int64 a2)
{
  __int64 v4; // x21
  __int64 v5; // x1
  unsigned int v6; // w19

  if ( qword_19397F0 == 0 )
  {
    v4 = sub_722190(488, 8);
    sub_CF6830(v4, v5);
    qword_19397F0 = v4;
  }
  nn__os__LockMutex(qword_19397C8);
  v6 = (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 232LL))(a1, a2);
  nn__os__UnlockMutex(qword_19397C8);
  return v6;
}

// N4Dare7Private28ManagerVoiceForVirtualPlayerINS0_16ManagerToolVoiceEEE, virtual slot 31
__int64 __fastcall sub_D7B0A0(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // x0

  v5 = sub_D359B0(a1 + 64);
  return sub_D64EE0(v5, a2, a3);
}

// N4Dare7Private28ManagerVoiceForVirtualPlayerINS0_20ManagerHardwareVoiceEEE, virtual slot 1
void sub_D7B5F0(__int64 result, int a2)
{
  __int64 v3; // x19
  __int64 v4; // x1
  __int64 v5; // x21

  v3 = result;
  if ( *(_DWORD *)(result + 16) == 2 )
  {
    v4 = *(_QWORD *)(result + 128);
    if ( v4 != 0 )
    {
      v5 = qword_19397F0;
      if ( qword_19397F0 == 0 )
      {
        v5 = sub_722190(488, 8);
        sub_CF6830();
        qword_19397F0 = v5;
        v4 = *(_QWORD *)(v3 + 128);
      }
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v5 + 472) + 456LL))(*(_QWORD *)(v5 + 472), v4);
      *(_QWORD *)(v3 + 128) = 0;
    }
  }
  if ( a2 == 0 )
    *(_DWORD *)(v3 + 16) = 3;
  return;
}

// N4Dare7Private28ManagerVoiceForVirtualPlayerINS0_20ManagerHardwareVoiceEEE, virtual slot 30
__int64 __fastcall sub_D7C100(__int64 a1, __int64 a2)
{
  __int64 v2; // x21
  __int64 v5; // x1
  __int64 v6; // x8
  __int64 (__fastcall *v7)(_QWORD, __int64); // x2

  v2 = qword_19397F0;
  if ( qword_19397F0 == 0 )
  {
    v2 = sub_722190(488, 8);
    sub_CF6830(v2, v5);
    qword_19397F0 = v2;
  }
  v6 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(v6 + 24) == 1
    && (v7 = *(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v2 + 64) + 88LL)) != nullptr )
  {
    return v7(*(_QWORD *)(v6 + 8), a2);
  }
  else
  {
    return 2147541001LL;
  }
}

// N4Dare7Private28ManagerVoiceForVirtualPlayerINS0_17ManagerSynthVoiceEEE, virtual slot 30
__int64 __fastcall sub_D84C30(__int64 a1, __int64 a2)
{
  __int64 v2; // x21
  __int64 v5; // x1
  __int64 v6; // x8
  __int64 (__fastcall *v7)(_QWORD, __int64); // x2

  v2 = qword_19397F0;
  if ( qword_19397F0 == 0 )
  {
    v2 = sub_722190(488, 8);
    sub_CF6830(v2, v5);
    qword_19397F0 = v2;
  }
  v6 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(v6 + 24) == 1
    && (v7 = *(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v2 + 64) + 88LL)) != nullptr )
  {
    return v7(*(_QWORD *)(v6 + 8), a2);
  }
  else
  {
    return 2147541001LL;
  }
}

// N4Dare7Private28ManagerVoiceForVirtualPlayerINS0_17ManagerThemeVoiceEEE, virtual slot 30
__int64 __fastcall sub_D8A350(__int64 a1, __int64 a2)
{
  __int64 v2; // x21
  __int64 v5; // x1
  __int64 v6; // x8
  __int64 (__fastcall *v7)(_QWORD, __int64); // x2

  v2 = qword_19397F0;
  if ( qword_19397F0 == 0 )
  {
    v2 = sub_722190(488, 8);
    sub_CF6830(v2, v5);
    qword_19397F0 = v2;
  }
  v6 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(v6 + 24) == 1
    && (v7 = *(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v2 + 64) + 88LL)) != nullptr )
  {
    return v7(*(_QWORD *)(v6 + 8), a2);
  }
  else
  {
    return 2147541001LL;
  }
}

// N4Dare7Private28ManagerVoiceForVirtualPlayerINS0_17ManagerThemeVoiceEEE, virtual slot 31
__int64 __fastcall sub_D8A3E0(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // x0

  v5 = sub_D359B0(a1 + 192);
  return sub_D64EE0(v5, a2, a3);
}

// N4Dare7Private28ManagerVoiceForVirtualPlayerINS0_16ManagerToolVoiceEEE, virtual slot 30
__int64 __fastcall sub_D8DFE0(__int64 a1, __int64 a2)
{
  __int64 v2; // x21
  __int64 v5; // x1
  __int64 v6; // x8
  __int64 (__fastcall *v7)(_QWORD, __int64); // x2

  v2 = qword_19397F0;
  if ( qword_19397F0 == 0 )
  {
    v2 = sub_722190(488, 8);
    sub_CF6830(v2, v5);
    qword_19397F0 = v2;
  }
  v6 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(v6 + 24) == 1
    && (v7 = *(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v2 + 64) + 88LL)) != nullptr )
  {
    return v7(*(_QWORD *)(v6 + 8), a2);
  }
  else
  {
    return 2147541001LL;
  }
}

__int64 __fastcall sub_DA9B70(__int64 a1)
{
  __int64 v1; // x19

  sub_D2C900(a1 + 1072);
  v1 = qword_1939B10;
  if ( qword_1939B10 == 0 )
  {
    v1 = sub_722190(9416, 8);
    sub_D22BE0();
    qword_1939B10 = v1;
  }
  return sub_D3E610(v1);
}

// N2EE8HeatWave9AiffCodecE, virtual slot 3
__int64 __fastcall sub_DD1F00(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // x0
  unsigned int *v6; // x9
  unsigned int *v7; // x8
  unsigned int v8; // w10
  __int64 v9; // x8
  unsigned int *v10; // x8
  unsigned int v11; // w10
  unsigned int *v12; // x9
  unsigned int v13; // w10
  unsigned int v14; // w10

  v5 = (long long)(malloc(0x38u));
  *(_DWORD *)(v5 + 8) = 0;
  v6 = (unsigned int *)(v5 + 8);
  *(_QWORD *)v5 = ((__int64)off_18DC448);
  *(_QWORD *)(v5 + 16) = a2;
  if ( a2 != 0 )
  {
    v7 = (unsigned int *)(a2 + 8);
    v8 = __atomic_fetch_add(v7, 1, 0);
  }
  v9 = qword_195B668;
  *(_QWORD *)(v5 + 36) = 0;
  *(_QWORD *)(v5 + 28) = 0;
  *(_DWORD *)(v5 + 44) = 0;
  *(_DWORD *)(v5 + 24) = *(_DWORD *)(v9 + 320);
  *(_QWORD *)(v5 + 48) = 0;
  *(_QWORD *)v5 = ((__int64)off_18DC550);
  v10 = (unsigned int *)*a3;
  *a3 = v5;
  if ( v5 != 0 )
  {
    v11 = __atomic_fetch_add(v6, 1, 0);
  }
  if ( v10 != nullptr )
  {
    v12 = v10 + 2;
    v14 = __atomic_sub_fetch(v12, 1, 0);
    if ( v14 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  return 1;
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

// N2EE8HeatWave10FileSourceE, virtual slot 5
int __fastcall sub_DD2B50(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // x0

  (*(void (__fastcall **)(_QWORD, _QWORD, int))(**(_QWORD **)(a1 + 16) + 72LL))(
    *(_QWORD *)(a1 + 16),
    *(unsigned int *)(a1 + 24),
    0);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 16) + 40LL))(
             *(_QWORD *)(a1 + 16),
             a2,
             a3);
  if ( (result & 0x80000000) != 0 )
    return 0;
  *(_DWORD *)(a1 + 24) += result;
  return result;
}

// N2EE8HeatWave8PCMCodecE, virtual slot 3
__int64 __fastcall sub_DD5AF0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // x0
  unsigned int *v6; // x9
  unsigned int *v7; // x8
  unsigned int v8; // w10
  __int64 v9; // x8
  unsigned int *v10; // x8
  unsigned int v11; // w10
  unsigned int *v12; // x9
  unsigned int v13; // w10
  unsigned int v14; // w10

  v5 = (long long)(malloc(0x50u));
  *(_DWORD *)(v5 + 8) = 0;
  v6 = (unsigned int *)(v5 + 8);
  *(_QWORD *)v5 = ((__int64)off_18DC448);
  *(_QWORD *)(v5 + 16) = a2;
  if ( a2 != 0 )
  {
    v7 = (unsigned int *)(a2 + 8);
    v8 = __atomic_fetch_add(v7, 1, 0);
  }
  v9 = qword_195B668;
  *(_QWORD *)(v5 + 36) = 0;
  *(_QWORD *)(v5 + 28) = 0;
  *(_DWORD *)(v5 + 44) = 0;
  *(_DWORD *)(v5 + 24) = *(_DWORD *)(v9 + 320);
  *(_QWORD *)(v5 + 48) = 0;
  *(_QWORD *)v5 = ((__int64)off_18DCA68);
  v10 = (unsigned int *)*a3;
  *a3 = v5;
  if ( v5 != 0 )
  {
    v11 = __atomic_fetch_add(v6, 1, 0);
  }
  if ( v10 != nullptr )
  {
    v12 = v10 + 2;
    v14 = __atomic_sub_fetch(v12, 1, 0);
    if ( v14 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  return 1;
}
// N2EE8HeatWave8PCMCodecE, virtual slot 5
int __fastcall sub_DD5C50(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  int v8; // w0
  unsigned int v9; // w9
  int v10; // w8
  unsigned int v11; // w10
  unsigned int v12; // w8
  unsigned int v13; // w0

  v8 = (*(int (__fastcall **)(__typeof__(*(_QWORD *)(a1 + 16))))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16));
  v9 = *(_DWORD *)(a1 + 52);
  v10 = v8 - *(_DWORD *)(a1 + 48);
  v11 = v10 + a3;
  v12 = v9 - v10;
  if ( v11 > v9 )
    a3 = v12;
  v13 = (*(unsigned int (__fastcall **)(__typeof__(*(_QWORD *)(a1 + 16)), __int64, __typeof__(a3)))(**(_QWORD **)(a1 + 16) + 40LL))(
          *(_QWORD *)(a1 + 16),
          a2,
          a3);
  *a4 = v13;
  if ( v13 >= a3 )
    return 0;
  else
    return 4294967293LL;
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

// N2EE29NvnBackBufferRenderTargetViewE, virtual slot 11
__int64 __fastcall sub_E95530(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v3; // x21
  __int64 result; // x0

  v3 = *(_QWORD *)(*(_QWORD *)(qword_195B1E0 + 56) + 8LL * *(int *)(*(_QWORD *)(qword_195B1E0 + 56) + 9368LL) + 10144);
  result = (***(__int64 (__fastcall ****)(_QWORD))(v3 + 88))(*(_QWORD *)(v3 + 88));
  *a2 = result;
  *a3 = v3 + 96;
  return result;
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
// N2EE13NvnEventQueryE, virtual slot 13
bool __fastcall sub_EA78F0(__int64 a1, _DWORD *a2, int a3)
{
  unsigned int v5; // w0

  v5 = (*(__int64(**)(...))off_191B560)(a1 + 72, 0LL);
  if ( a2 != nullptr && a3 == 4 )
    *a2 = v5 < 2;
  return v5 > 1;
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
// N2EE8HeatWave16SwitchADPCMCodecE, virtual slot 2
int __fastcall sub_EB6050(int32x2_t *a1)
{
  int v2; // w8
  __int64 result; // x0
  unsigned __int64 v4; // x8
  _BYTE v5[96]; // [xsp+0h] [xbp-70h] BYREF

  ((unsigned long long*)&a1[6])[0] = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(qword_194AF78 + 80) + 104LL))(
                       *(_QWORD *)(qword_194AF78 + 80),
                       128);
  (*(void (__fastcall **)(unsigned __int64, int, int))(*(_QWORD *)((unsigned long long*)&a1[2])[0] + 32LL))(
    ((unsigned long long*)&a1[2])[0],
    0,
    0);
  v2 = (*(int (__fastcall **)(unsigned __int64, _BYTE *, __int64))(*(_QWORD *)((unsigned long long*)&a1[2])[0] + 40LL))(
         ((unsigned long long*)&a1[2])[0],
         v5,
         96);
  result = 0;
  if ( v2 == 96 )
  {
    nn__audio__ParseAdpcmHeader(((unsigned long long*)&a1[6])[0], v5, 96);
    v4 = ((unsigned long long*)&a1[6])[0];
    result = 1;
    ((unsigned int*)&a1[3])[1] = 1;
    ((unsigned long long*)&a1[4])[0] = ({ __typeof__(vrev64_s32(*(int32x2_t *)(v4 + 72))) lane_ = vrev64_s32(*(int32x2_t *)(v4 + 72)); ((unsigned long long*)&lane_)[0]; });
    if ( *(_BYTE *)(v4 + 80) != 0 )
    {
      ((unsigned long long*)&a1[5])[0] = *(unsigned __int64 *)(v4 + 84);
      return 1;
    }
  }
  return result;
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

void sub_EC1730(__int64 result, char *a2, int a3)
{
  unsigned int v3; // w19
  unsigned int v4; // w20
  __int64 v5; // x21
  unsigned int v6; // w22
  __int64 v7; // x20
  unsigned int v8; // w21

  v3 = a3 - 1;
  if ( a3 != 0 )
  {
    if ( a2 != 0 )
    {
      v4 = result - 1;
      do
      {
        if ( *(_DWORD *)(a2 + 84) >= v4 )
          break;
        v5 = *(_QWORD *)(a2 + 88);
        if ( (*(_QWORD *)a2 != 0 || *(_QWORD *)(a2 + 8) != 0 || *(_QWORD *)(a2 + 16) != 0 || *(_DWORD *)(a2 + 80) != 0)
          && *(_WORD *)(a2 + 40) == 0 )
        {
          v6 = *(_DWORD *)(a2 + 36) * *(__int16 *)(a2 + 34);
          sub_EC1810(a2);
          if ( v3 < v6 )
            break;
        }
        a2 = (char *)(v5);
      }
      while ( v5 != 0 );
    }
  }
  else if ( a2 != 0 )
  {
    do
    {
      v7 = *(_QWORD *)(a2 + 88);
      if ( (*(_QWORD *)a2 != 0 || *(_QWORD *)(a2 + 8) != 0 || *(_QWORD *)(a2 + 16) != 0 || *(_DWORD *)(a2 + 80) != 0)
        && *(_WORD *)(a2 + 40) == 0 )
      {
        v8 = *(_DWORD *)(a2 + 36) * *(__int16 *)(a2 + 34);
        sub_EC1810(a2);
        if ( v3 < v8 )
          break;
      }
      a2 = (char *)(v7);
    }
    while ( v7 != 0 );
  }
  return;
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

_QWORD *__fastcall sub_F2DC60(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // x19
  _QWORD *v5; // x0
  int v6; // w9
  __int64 v7; // x8
  __int64 v8; // x21
  unsigned __int64 v9; // x22
  _QWORD *v10; // x0

  v2 = nullptr;
  if ( a1 != 0 && a2 != nullptr )
  {
    v5 = (_QWORD *)(sub_F9FB50(*(_QWORD *)(a1 + 48), nullptr, 0x18u, 0LL, 0LL));
    v2 = v5;
    if ( v5 != nullptr )
    {
      v6 = *((unsigned __int16 *)a2 + 4);
      v7 = a2[2];
      *((_WORD *)v5 + 4) = v6;
      v5[2] = v7;
      if ( !(v6 == 1) )
      {
        if ( v6 != 2 )
        {
LABEL_12:
          sub_FA0140((__int64)v2);
          return nullptr;
        }
        v8 = *a2;
        if ( v8 != 0 )
        {
          v9 = 4 * v7 + 4;
          goto LABEL_10;
        }
      }
      else
      {
        v8 = *a2;
        if ( v8 != 0 )
        {
          v9 = v7 + 1;
LABEL_10:
          v10 = (_QWORD *)(sub_F9FB50(*(_QWORD *)(a1 + 48), nullptr, v9, 0LL, 0LL));
          *v2 = (_QWORD)(v10);
          if ( v10 != nullptr )
          {
            sub_EC21A0(v10, v8, (unsigned int)v9);
            return v2;
          }
          goto LABEL_12;
        }
      }
      return nullptr;
    }
  }
  return v2;
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

void sub_F79DF0(__int64 result, _QWORD *a2, int a3, __int64 *a4, int a5)
{
  unsigned int v5; // w21
  __int64 *v6; // x22
  int i; // w19
  __int64 v9; // x1
  __int64 v10; // t1
  __int64 v11; // t1

  if ( a5 >= 1 )
  {
    v5 = *(_DWORD *)(result + 128);
    v6 = (__int64 *)(*a2 + 8LL * a3);
    for ( i = a5; i > 0; --i )
    {
      v10 = *v6++;
      v9 = v10;
      v11 = *a4++;
      sub_EC21A0(v11, v9, v5);
    }
  }
  return;
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
