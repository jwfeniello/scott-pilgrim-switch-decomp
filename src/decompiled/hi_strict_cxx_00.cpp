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
typedef char type_info; typedef struct { int v; } pthread_mutexattr_t; typedef struct { unsigned s_addr; } in_addr; typedef struct { unsigned short sa_family; char sa_data[14]; } sockaddr;
struct timezone { int tz_minuteswest; int tz_dsttime; };
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
extern "C" {
void* memcpy(void*, const void*, size_t); void* memset(void*, int, size_t); void* memmove(void*, const void*, size_t); int memcmp(const void*, const void*, size_t); size_t strlen(const char*); int strcmp(const char*, const char*); char* strcpy(char*, const char*); char* strncpy(char*, const char*, size_t); int strncmp(const char*, const char*, size_t); void free(void*) noexcept; void* malloc(size_t); float fabsf(float); float sqrtf(float); float floorf(float); float ceilf(float);
__int64 BYREF(...);
extern char _ZNSt12length_errorD1Ev[] __attribute__((weak));
extern char _ZTISt12length_error[] __attribute__((weak));
__int64 _ZdlPv(...);
__int64 _Znwm(...);
__int64 __cxa_allocate_exception(...);
__attribute__((noreturn)) __int64 __cxa_throw(...);
extern char byte_154D880;
extern char byte_1924D60;
extern char byte_1924D64;
extern char byte_1924D68;
extern char byte_1924D6C;
extern char byte_1925158;
extern int dword_191C440;
extern int dword_191C444;
extern int dword_191FB00;
extern char loc_B89250[];
__int64 nn__audio__ParseAdpcmHeader(...) noexcept;
__int64 nn__mem__NumberLineAllocator__Finalize(...) noexcept;
__int64 nn__os__FinalizeMutex(...) noexcept;
__int64 nn__os__GetSystemTick(...) noexcept;
__int64 nn__os__LockMutex(...) noexcept;
__int64 nn__os__SetThreadCoreMask(...) noexcept;
__int64 nn__os__UnlockMutex(...) noexcept;
__int64 nn__os__WaitEvent(...) noexcept;
extern void* off_1845338[];
extern void* off_1846090[];
extern void* off_1846790[];
extern void* off_18468A8[];
extern void* off_1846B38[];
extern void* off_1846E38[];
extern void* off_18492C8[];
extern void* off_1849988[];
extern void* off_1852620[];
extern void* off_1863D38[];
extern void* off_1863D80[];
extern void* off_1866110[];
extern void* off_189B308[];
extern void* off_189C188[];
extern void* off_189C2B0[];
extern void* off_18A1700[];
extern void* off_18ABA40[];
extern void* off_18AEA10[];
extern void* off_18B1FE0[];
extern void* off_18B20A0[];
extern void* off_18B55F8[];
extern void* off_18B6FE8[];
extern void* off_18B7150[];
extern void* off_18BB750[];
extern void* off_18BBFE8[];
extern void* off_18BC408[];
extern void* off_18C2F10[];
extern void* off_18C3CE8[];
extern void* off_18C4E50[];
extern void* off_18C72C0[];
extern void* off_18C7A08[];
extern void* off_18C7A88[];
extern void* off_18C7BD0[];
extern void* off_18C7E48[];
extern void* off_18CF808[];
extern void* off_18DC448[];
extern void* off_18DC550[];
extern void* off_18DC658[];
extern void* off_18DCA68[];
extern void* off_18DCDF8[];
extern void* off_18DCF70[];
extern void* off_18DD220[];
extern void* off_18DF550[];
extern void* off_18DF5B0[];
extern void* off_18DF8B0[];
extern void* off_18E0C48[];
extern void* off_18E6478[];
extern void* off_18E7CA0[];
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
extern __int64 qword_191C9C8;
extern __int64 qword_191CD10;
extern __int64 qword_191FAF8;
extern __int64 qword_19205D8;
extern __int64 qword_1924BC0;
extern __int64 qword_1926BD8;
extern __int64 qword_1926BE0;
extern __int64 qword_192AEB8;
extern __int64 qword_1935058;
extern __int64 qword_1935068;
extern __int64 qword_1939058;
extern __int64 qword_19397C8;
extern __int64 qword_19397F0;
extern __int64 qword_1939808;
extern __int64 qword_1939818;
extern __int64 qword_1939820;
extern __int64 qword_1939828;
extern __int64 qword_1939A88;
extern __int64 qword_1939AF8;
extern __int64 qword_1939B00;
extern __int64 qword_1939B08;
extern __int64 qword_1939B10;
extern __int64 qword_1939B30;
extern __int64 qword_1945E40;
extern __int64 qword_194AF78;
extern __int64 qword_195B1E0;
extern __int64 qword_195B1E8;
extern __int64 qword_195B648;
extern __int64 qword_195B668;
extern __int64 qword_195B670;
__int64 sub_36EA0(...);
__int64 sub_384E0(...);
__int64 sub_4A72A0(...);
__int64 sub_4A7340(...);
__int64 sub_56C9F0(...);
__int64 sub_56CA00(...);
__int64 sub_5766B0(...);
__int64 sub_631EC0(...) noexcept;
__int64 sub_676160(...);
__int64 sub_6764E0(...);
__int64 sub_6782A0(...);
__int64 sub_67EDD0(...);
__int64 sub_680A00(...);
__int64 sub_68B890(...);
__int64 sub_68F0E0(...);
__int64 sub_68F3B0(...);
__int64 sub_690EE0(...);
__int64 sub_6A2640(...);
__int64 sub_6C9460(...);
__int64 sub_6EA720(...);
__int64 sub_6EFD60(...);
__int64 sub_6F0750(...);
__int64 sub_6F3C00(...);
__int64 sub_722190(...);
__int64 sub_72CD50(...);
__int64 sub_7352D0(...);
__int64 sub_73560(...) noexcept;
__int64 sub_735FF0(...);
__int64 sub_736630(...) noexcept;
__int64 sub_770D70(...);
__int64 sub_7710B0(...);
__int64 sub_7712D0(...);
__int64 sub_7725E0(...);
__int64 sub_774B50(...);
__int64 sub_774E90(...);
__int64 sub_777710(...);
__int64 sub_778670(...);
__int64 sub_781380(...);
__int64 sub_783340(...);
__int64 sub_786260(...);
__int64 sub_787E10(...);
__int64 sub_79150(...);
__int64 sub_792D0(...) noexcept;
__int64 sub_796450(...);
__int64 sub_7B3D60(...);
__int64 sub_7B40A0(...);
__int64 sub_7D9B70(...);
__int64 sub_7EAAC0(...);
__int64 sub_7F4D50(...);
__int64 sub_7FD450(...);
__int64 sub_7FF900(...);
__int64 sub_81D750(...);
__int64 sub_81EAD0(...);
__int64 sub_873210(...);
__int64 sub_894BA0(...);
__int64 sub_8FB2B0(...);
__int64 sub_8FB610(...);
__int64 sub_945180(...);
__int64 sub_A06DE0(...);
__int64 sub_A1B6F0(...);
__int64 sub_A80D80(...);
__int64 sub_A80F20(...);
__int64 sub_A82910(...);
unsigned char sub_A82B30(...);
__int64 sub_A83420(...);
__int64 sub_A84740(...);
__int64 sub_A8A280(...);
__int64 sub_A972B0(...);
__int64 sub_A9BBF0(...);
__int64 sub_AA3540(...);
__int64 sub_AAEE30(...);
__int64 sub_AAEFD0(...);
__int64 sub_AC7EB0(...);
__int64 sub_B19960(...);
__int64 sub_B4EC10(...);
float sub_B5E420(...);
__int64 sub_B9D3F0(...);
__int64 sub_BA57A0(...);
__int64 sub_BA7630(...);
__int64 sub_BB1C70(...);
__int64 sub_BE8470(...);
__int64 sub_BF1900(...) noexcept;
__int64 sub_BF6E80(...);
__int64 sub_BFBCE0(...);
__int64 sub_C21760(...);
__int64 sub_C2C640(...);
__int64 sub_C2D650(...);
__int64 sub_C2F800(...);
__int64 sub_C31370(...);
__int64 sub_C33120(...);
__int64 sub_C37EB0(...);
__int64 sub_C57A30(...);
__int64 sub_C953B0(...);
__int64 sub_C9E7E0(...) noexcept;
__int64 sub_CA7E30(...);
__int64 sub_CA8450(...);
__int64 sub_CA8750(...) noexcept;
__int64 sub_CAB60(...);
__int64 sub_CBF1E0(...) noexcept;
__int64 sub_CC48E0(...);
__int64 sub_CC9220(...) noexcept;
__int64 sub_CF6830(...);
__int64 sub_CF8C60(...);
__int64 sub_D147F0(...);
__int64 sub_D22BE0(...);
__int64 sub_D28D50(...);
__int64 sub_D2C900(...);
__int64 sub_D31160(...) noexcept;
__int64 sub_D359B0(...);
__int64 sub_D3C490(...);
__int64 sub_D3E610(...);
__int64 sub_D441C0(...);
__int64 sub_D64EE0(...);
__int64 sub_D69810(...);
__int64 sub_D78A50(...);
__int64 sub_DABAD0(...);
__int64 sub_EA28A0(...);
__int64 sub_EC1810(...);
__int64 sub_EC21A0(...);
__int64 sub_EC8DD0(...);
__int64 sub_ECB440(...);
__int64 sub_ECDC10(...);
__int64 sub_EEA5A0(...);
__int64 sub_EEAD80(...);
__int64 sub_EF3C60(...);
__int64 sub_EF9DF0(...);
__int64 sub_EFB6C0(...);
__int64 sub_F061F0(...);
__int64 sub_F11DC0(...);
__int64 sub_F25830(...);
__int64 sub_F28890(...);
__int64 sub_F2EA40(...);
__int64 sub_F322F0(...);
__int64 sub_F34D70(...);
__int64 sub_F35090(...);
__int64 sub_F35410(...);
__int64 sub_F35B60(...);
__int64 sub_F701B0(...);
__int64 sub_F70680(...);
__int64 sub_F72760(...);
__int64 sub_F951C0(...);
__int64 sub_F955C0(...);
__int64 sub_F95810(...);
__int64 sub_F95960(...);
__int64 sub_F97B20(...);
__int64 sub_F9FB50(...);
__int64 sub_FA0140(...);
__int64 sub_FA3B40(...) noexcept;
__int64 sub_FA4960(...) noexcept;
__int64 sub_FA4B30(...) noexcept;
__int64 sub_FC8C0(...);
extern char unk_154D880;
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

// NSt3__110__function6__funcIZN4Onyx7Profile25CheckAndHandleUbiservicesEPN4SPTG9FlashMenuENS_8functionIFvNS2_21ProfileCallbackResultEEEEE3$_7NS_9allocatorISB_EEFvbEEE, virtual slot 2
_QWORD *__fastcall sub_6ED610(__int64 a1)
{/*nothrow:((__int64)sub_FA3B40)*/
  _QWORD *v2; // x19

  v2 = (_QWORD *)_Znwm(0xB0u);
  struct G0_ { void* p; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) sub_FA3B40(p); } } g0_ = { (void*)v2, 0 };
  *v2 = ((__int64)off_1846090);
  sub_6EFD60(v2 + 2, a1 + 16);
  g0_.ok = 1;
  return v2;
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

void __noreturn sub_6F3BB0()
{/*nothrow:((__int64)sub_FA4B30)*/
  char *exception; // x19

  exception = (char *)__cxa_allocate_exception(0x10u);
  { struct G0_ { __typeof__(exception)& exception; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_FA4B30((__int64)exception)); } } } g0_ = { exception, 0 };
  sub_6F3C00(exception);
  g0_.ok = 1; }
  __cxa_throw(exception, (type_info *)((__int64*)_ZTISt12length_error), (void (*)(void *))((__int64*)_ZNSt12length_errorD1Ev));
}

__int64 __fastcall sub_6F50D0(_QWORD *a1)
{/*nothrow:((__int64)sub_73560)*//*nothrow:((__int64)sub_792D0)*/
  unsigned __int64 *v2; // x22
  __int64 v3; // x0
  unsigned __int64 v4; // x20
  unsigned int *v5; // x23
  __int64 result; // x0
  unsigned int v7; // w8

  sub_79150(a1, 0LL);
  *a1 = ((__int64)off_1846790);
  v2 = a1 + 2;
  { struct G0_ { __typeof__(a1)& a1; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_792D0((__int64)a1)); } } } g0_ = { a1, 0 };
  v3 = sub_36EA0(168, 4, 0, 1086324736);
  v4 = sub_384E0(168, v3);
  *(_DWORD *)(v4 + 8) = 0;
  v5 = (unsigned int *)(v4 + 8);
  *(_QWORD *)v4 = ((__int64)off_18468A8);
  { struct G2_ { __typeof__(v3)& v3; __typeof__(v4)& v4; int ok; __attribute__((always_inline)) ~G2_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_73560((__int64)v4, (__int64)v3)); } } } g2_ = { v3, v4, 0 };
  result = sub_CAB60(v4 + 16);
  g2_.ok = 1; }
  g0_.ok = 1; }
  a1[2] = 0;
  v7 = __atomic_fetch_add(v5, 1, 5);
  __atomic_exchange_n(v2, v4, 5);
  return result;
}

__int64 __fastcall sub_700BF0(_QWORD *a1)
{/*nothrow:((__int64)sub_73560)*//*nothrow:((__int64)sub_792D0)*/
  unsigned __int64 *v2; // x22
  __int64 v3; // x0
  unsigned __int64 v4; // x20
  unsigned int *v5; // x23
  __int64 result; // x0
  unsigned int v7; // w8

  sub_79150(a1, 0LL);
  *a1 = ((__int64)off_1846B38);
  v2 = a1 + 2;
  { struct G0_ { __typeof__(a1)& a1; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_792D0((__int64)a1)); } } } g0_ = { a1, 0 };
  v3 = sub_36EA0(80, 4, 0, 1086324736);
  v4 = sub_384E0(80, v3);
  *(_DWORD *)(v4 + 8) = 0;
  v5 = (unsigned int *)(v4 + 8);
  *(_QWORD *)v4 = ((__int64)off_1846E38);
  { struct G2_ { __typeof__(v3)& v3; __typeof__(v4)& v4; int ok; __attribute__((always_inline)) ~G2_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_73560((__int64)v4, (__int64)v3)); } } } g2_ = { v3, v4, 0 };
  result = sub_FC8C0(v4 + 16);
  g2_.ok = 1; }
  g0_.ok = 1; }
  a1[2] = 0;
  v7 = __atomic_fetch_add(v5, 1, 5);
  __atomic_exchange_n(v2, v4, 5);
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

__int64 __fastcall sub_734DD0(__int64 a1) noexcept
{
  __int64 v1; // x8
  __int64 result; // x0

  v1 = *(_QWORD *)(a1 + 1152);
  *(_QWORD *)(a1 + 1288) = 0;
  if ( v1 != 0 || *(_QWORD *)(a1 + 1184) != 0 )
    (*(void (__fastcall **)(__int64))(a1 + 1192))(a1 + 1152);
  if ( *(_QWORD *)(a1 + 1024) != 0 || *(_QWORD *)(a1 + 1056) != 0 )
    (*(void (__fastcall **)(__int64))(a1 + 1064))(a1 + 1024);
  if ( *(_QWORD *)(a1 + 896) != 0 || *(_QWORD *)(a1 + 928) != 0 )
    (*(void (__fastcall **)(__int64))(a1 + 936))(a1 + 896);
  if ( *(_QWORD *)(a1 + 768) != 0 || *(_QWORD *)(a1 + 800) != 0 )
    (*(void (__fastcall **)(__int64))(a1 + 808))(a1 + 768);
  if ( *(_QWORD *)(a1 + 640) != 0 || *(_QWORD *)(a1 + 672) != 0 )
    (*(void (__fastcall **)(__int64))(a1 + 680))(a1 + 640);
  if ( *(_QWORD *)(a1 + 512) != 0 || *(_QWORD *)(a1 + 544) != 0 )
    (*(void (__fastcall **)(__int64))(a1 + 552))(a1 + 512);
  if ( *(_QWORD *)(a1 + 384) != 0 || *(_QWORD *)(a1 + 416) != 0 )
    (*(void (__fastcall **)(__int64))(a1 + 424))(a1 + 384);
  if ( *(_QWORD *)(a1 + 256) != 0 || *(_QWORD *)(a1 + 288) != 0 )
    (*(void (__fastcall **)(__int64))(a1 + 296))(a1 + 256);
  result = a1 + 128;
  if ( *(_QWORD *)(a1 + 128) != 0 || *(_QWORD *)(a1 + 160) != 0 )
    result = (*(__int64 (__fastcall **)(__int64))(a1 + 168))(result);
  if ( *(_QWORD *)a1 != 0 || *(_QWORD *)(a1 + 32) != 0 )
    return (*(__int64 (__fastcall **)(__int64))(a1 + 40))(a1);
  return result;
}

_QWORD *sub_735250()
{/*nothrow:((__int64)sub_736630)*/
  __int64 v0; // x0
  _QWORD *v1; // x19

  v0 = sub_676160(qword_191C9C8, 429100959);
  v1 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v0 + 16LL))(v0, 352);
  struct G0_ { void* p; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) sub_736630(p); } } g0_ = { (void*)v1, 0 };
  sub_7352D0();
  *v1 = ((__int64)off_1849988);
  sub_735FF0(v1 + 35);
  g0_.ok = 1;
  qword_19205D8 = (__int64)v1;
  return v1;
}

_QWORD *sub_73EC90()
{/*nothrow:((__int64)sub_736630)*/
  __int64 v0; // x0
  _QWORD *v1; // x19

  v0 = sub_676160(qword_191C9C8, 429100959);
  v1 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v0 + 16LL))(v0, 352);
  struct G0_ { void* p; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) sub_736630(p); } } g0_ = { (void*)v1, 0 };
  sub_7352D0();
  *v1 = ((__int64)off_1849988);
  sub_735FF0(v1 + 35);
  g0_.ok = 1;
  qword_19205D8 = (__int64)v1;
  return v1;
}

__int64 __fastcall sub_73EE20(__int64 result) noexcept
{
  __int64 v1; // x20
  _QWORD *v2; // x19
  __int64 v3; // x21
  __int64 v4; // x0
  __int64 v5; // x20
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x19
  __int64 v12; // x20
  __int64 v13; // x0

  v1 = *(_QWORD *)(result + 192);
  v2 = (_QWORD *)result;
  *(_QWORD *)(result + 184) = 0;
  if ( v1 != 0 )
  {
    v3 = qword_1926BD8;
    v4 = *(_QWORD *)(v3 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v1) + 880);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, v1);
  }
  v5 = v2[17];
  v2[16] = 0;
  if ( v5 != 0 )
  {
    v6 = qword_1926BD8;
    v7 = *(_QWORD *)(v6 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v5) + 880);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, v5);
  }
  v8 = v2[10];
  v2[9] = 0;
  if ( v8 != 0 )
  {
    v9 = qword_1926BD8;
    v10 = *(_QWORD *)(v9 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v8) + 880);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 48LL))(v10, v8);
  }
  v2[2] = 0;
  v11 = v2[3];
  if ( v11 != 0 )
  {
    v12 = qword_1926BD8;
    v13 = *(_QWORD *)(v12 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v11) + 880);
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 48LL))(v13, v11);
  }
  return result;
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

// N5storm15TNetPropertyRefINS_15NetPropertyNullEEE, virtual slot 5
__int64 __fastcall sub_7827A0(__int64 a1)
{
  __int64 v2; // x19

  v2 = sub_56C9F0(72, 8, 1092624384, 0LL, &byte_154D880, 0);
  struct G0_ { void* p; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) sub_56CA00(p, &unk_154D880, 0); } } g0_ = { (void*)v2, 0 };
  sub_783340(v2, a1);
  g0_.ok = 1;
  return v2;
}

// N5storm17NetPropertyVectorINS_15NetPropertyPairINS_18NetPropertyIntegerINS_8StringIdENS_14NumericalTraitIS3_NS_15MaxValueFunctorIS3_Lm0EEELh0ELb0ELb0ENS_19DefaultValueFunctorIS3_Lm0EEEEEEENS_15TNetPropertyRefINS_15NetPropertyNullEEEEELm0EEE, virtual slot 5
__int64 __fastcall sub_785190(__int64 a1)
{
  __int64 v2; // x19

  v2 = sub_56C9F0(104, 8, 1092624384, 0LL, &byte_154D880, 0);
  struct G0_ { void* p; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) sub_56CA00(p, &unk_154D880, 0); } } g0_ = { (void*)v2, 0 };
  sub_786260(v2, a1);
  g0_.ok = 1;
  return v2;
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

// N5storm14NetPropertyMapINS_18NetPropertyIntegerINS_8StringIdENS_14NumericalTraitIS2_NS_15MaxValueFunctorIS2_Lm0EEELh0ELb0ELb0ENS_19DefaultValueFunctorIS2_Lm0EEEEEEENS_15TNetPropertyRefINS_15NetPropertyNullEEEEE, virtual slot 5
__int64 __fastcall sub_7871C0(__int64 a1)
{
  __int64 v2; // x19

  v2 = sub_56C9F0(184, 8, 1092624384, 0LL, &byte_154D880, 0);
  struct G0_ { void* p; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) sub_56CA00(p, &unk_154D880, 0); } } g0_ = { (void*)v2, 0 };
  sub_787E10(v2, a1);
  g0_.ok = 1;
  return v2;
}

__int64 __fastcall sub_787760(__int64 a1) noexcept
{
  __int64 v1; // x19

  v1 = a1 - 8;
  sub_781380(a1 - 8);
  return sub_56CA00(v1, &byte_154D880, 0);
}

__int64 __fastcall sub_79A910(__int64 a1)
{
  __int64 v1; // x21
  __int64 v3; // x22
  __int64 v4; // x8
  __int64 *i; // x24
  __int64 v6; // t1
  __int64 result; // x0
  __int64 v8; // x8
  __int64 v9; // x23
  __int64 v10; // x8

  v1 = a1 + 80;
  v3 = sub_7725E0(a1 + 80) + 160;
  if ( *(_QWORD *)v3 == 0 || (v4 = *(_QWORD *)(*(_QWORD *)v3 + 8LL)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 200583607, v3);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v3 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v3 + 8LL));
    v4 = *(_QWORD *)(*(_QWORD *)v3 + 8LL);
  }
  for ( i = *(__int64 **)(v4 + 144); ; ++i )
  {
    result = sub_7725E0(v1);
    v9 = result + 160;
    v8 = *(_QWORD *)(result + 160);
    if ( v8 == 0 || (v10 = *(_QWORD *)(v8 + 8)) == 0 )
    {
      sub_67EDD0(qword_191CD10, 200583607, v9);
      result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v9 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v9 + 8LL));
      v10 = *(_QWORD *)(*(_QWORD *)v9 + 8LL);
    }
    if ( i == (__int64 *)(*(_QWORD *)(v10 + 144) + 8LL * *(_QWORD *)(v10 + 128)) )
      break;
    v6 = *i;
    *(_QWORD *)(a1 + 128) = v6;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 1272LL))(v6, a1 + 120);
  }
  return result;
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
// N5EE_US21GeneralNetworkMessageE, virtual slot 5
__int64 __fastcall sub_7D9FA0(__int64 a1)
{
  __int64 v2; // x19

  v2 = sub_56C9F0(288, 8, 1092624384, 0LL, &byte_154D880, 0);
  struct G0_ { void* p; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) sub_56CA00(p, &unk_154D880, 0); } } g0_ = { (void*)v2, 0 };
  sub_7D9B70(v2, a1);
  g0_.ok = 1;
  return v2;
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

// N4SPTG20WriteLeaderboardTaskE, virtual slot 4
__int64 __fastcall sub_7EBE30(__int64 a1)
{
  int v1; // w8
  _BYTE v3[16];

  v1 = *(_DWORD *)(a1 + 92);
  v3[0] = 0;
  (*(int*)((char*)v3 + 4)) = 1;
  (*(int*)((char*)v3 + 8)) = v1;
  { struct G0_ { __typeof__(v3)& v3; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { *(char*)&v3 = 0; } } } g0_ = { v3, 0 };
  { __auto_type r_ = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(a1 + 80) + 8LL))(*(_QWORD *)(a1 + 80), v3); g0_.ok = 1; return r_; }
  g0_.ok = 1; }
}

void __noreturn sub_7F4C30()
{/*nothrow:((__int64)sub_FA4B30)*/
  char *exception; // x19

  exception = (char *)__cxa_allocate_exception(0x10u);
  { struct G0_ { __typeof__(exception)& exception; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_FA4B30((__int64)exception)); } } } g0_ = { exception, 0 };
  sub_7F4D50(exception);
  g0_.ok = 1; }
  __cxa_throw(exception, (type_info *)((__int64*)_ZTISt12length_error), (void (*)(void *))((__int64*)_ZNSt12length_errorD1Ev));
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
// N4Onyx9Component7ComposeIN4SPTG9FlashMenuENS_4Meta10CollectionINS0_10Dependency9SingletonINS_7ProfileENS4_4NullEEES9_S9_S9_S9_S9_S9_S9_S9_S9_S9_S9_EEEE, virtual slot 27
__int64 __fastcall sub_803590(char *a1)
{/*nothrow:((__int64)sub_FA4960)*/
  __int64 v1; // x21
  char *v2; // x19
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x22
  __int64 v6; // x8

  v1 = *((_QWORD *)a1 + 21);
  v2 = a1;
  if ( v1 != 0 )
  {
    v3 = *((_QWORD *)a1 + 73);
    v4 = nn__os__LockMutex(*(_QWORD *)(*(_QWORD *)(v1 + 88) + 16LL));
    v5 = *((_QWORD *)v2 + 21);
    if ( v3 == 0 )
  { struct G0_ { __typeof__(v1)& v1; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_, t2_, t3_; t1_ = (__int64)(*(__int64*)(((char*)((__int64)v1) + 88))); t2_ = (__int64)(*(__int64*)(((char*)(t1_) + 16))); t3_ = (__int64)((__int64)sub_FA4960(t2_)); } } } g0_ = { v1, 0 };
      v3 = sub_F97B20(v4);
  g0_.ok = 1; }
    *(_QWORD *)(v5 + 160) = v3;
    a1 = (char *)nn__os__UnlockMutex(*(_QWORD *)(*(_QWORD *)(v1 + 88) + 16LL));
  }
  if ( byte_1925158 == 1 )
  {
    v6 = qword_1924BC0;
    if ( qword_1924BC0 != 0 )
      v6 = *(_QWORD *)(qword_1924BC0 + 296);
  }
  else
  {
    v6 = 1000000 * (nn__os__GetSystemTick(a1) - qword_195B648) / qword_195B670;
  }
  *((_QWORD *)v2 + 72) = v6;
  return sub_7FF900(v2);
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

__int64 __fastcall sub_81DCD0(__int64 a1, int a2)
{
  __int64 v2; // x20
  __int64 v5; // x0
  __int64 v6; // x23
  __int64 v7; // x9
  __int64 *v8; // x8
  __int64 *v9; // x9
  __int64 v10; // x10
  __int64 v11; // t1
  unsigned int v12; // w21
  __int64 v13; // x23
  __int64 v14; // x9
  char *v15; // x8
  char *v16; // x9
  unsigned __int64 v17; // x10
  __int64 v18; // x11
  __int64 v19; // x0

  v2 = a1 + 360;
  v5 = sub_777710(a1 + 360);
  v6 = sub_7725E0(v5 + 120) + 80;
  if ( *(_QWORD *)v6 == 0 || (v7 = *(_QWORD *)(*(_QWORD *)v6 + 8LL)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 794088402, v6);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v6 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v6 + 8LL));
    v7 = *(_QWORD *)(*(_QWORD *)v6 + 8LL);
  }
  v8 = *(__int64 **)(v7 + 152);
  v9 = *(__int64 **)(v7 + 160);
  if ( v8 == v9 )
    goto LABEL_10;
  while ( 1 )
  {
    v11 = *v8++;
    v10 = v11;
    if ( *(_DWORD *)(v11 + 480) == a2 )
      break;
    if ( v9 == v8 )
      goto LABEL_10;
  }
  if ( v10 == 0 )
LABEL_10:
    v12 = 6;
  else
    v12 = *(_DWORD *)(v10 + 520);
  v13 = sub_7725E0(a1 + 688) + 80;
  if ( *(_QWORD *)v13 == 0 || (v14 = *(_QWORD *)(*(_QWORD *)v13 + 8LL)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 794088402, v13);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v13 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v13 + 8LL));
    v14 = *(_QWORD *)(*(_QWORD *)v13 + 8LL);
  }
  v15 = *(char **)(v14 + 152);
  v16 = *(char **)(v14 + 160);
  if ( v15 != v16 )
  {
    v17 = v16 - 8 - v15;
    if ( (v17 & 8) == 0 )
    {
      if ( *(_DWORD *)(*(_QWORD *)v15 + 520LL) == v12 )
        *(_DWORD *)(*(_QWORD *)v15 + 520LL) = 6;
      v15 += 8;
    }
    if ( v17 >= 8 )
    {
      do
      {
        if ( *(_DWORD *)(*(_QWORD *)v15 + 520LL) == v12 )
          *(_DWORD *)(*(_QWORD *)v15 + 520LL) = 6;
        v18 = *((_QWORD *)v15 + 1);
        if ( *(_DWORD *)(v18 + 520) == v12 )
          *(_DWORD *)(v18 + 520) = 6;
        v15 += 16;
      }
      while ( v15 != v16 );
    }
  }
  v19 = sub_774E90(a1 + 352);
  sub_81D750(v19, v12);
  sub_777710(v2);
  return sub_81EAD0(a1);
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

__int64 __fastcall sub_837F70(__int64 a1, __int64 a2)
{
  sub_7FD450(a1, a2, 1048972, 0, 1, 0);
  sub_7FD450(a1, a2, 1048974, 1, 1, 0);
  sub_7FD450(a1, a2, 1048976, 2, 1, 0);
  sub_7FD450(a1, a2, 1048978, 3, 1, 0);
  sub_7FD450(a1, a2, 1048980, 11, 1, 0);
  sub_7FD450(a1, a2, 1048982, 13, 1, 0);
  sub_7FD450(a1, a2, 1049231, 4, 1, 0);
  sub_7FD450(a1, a2, 1049233, 5, 1, 0);
  sub_7FD450(a1, a2, 1049235, 7, 1, 0);
  return sub_7FD450(a1, a2, 1049229, 6, 1, 0);
}

__int64 __fastcall sub_83D4D0(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // x21
  __int64 v6; // x0
  __int64 v7; // x22
  __int64 v8; // x9
  __int64 *v9; // x8
  __int64 *v10; // x9
  __int64 v11; // x10
  __int64 v12; // t1
  int v13; // w22
  __int64 v14; // x0
  __int64 v15; // x0
  int v17 __attribute__((aligned(8)));

  v3 = a1 + 360;
  v17 = a2;
  v6 = sub_777710(a1 + 360);
  v7 = sub_7725E0(v6 + 120) + 80;
  if ( *(_QWORD *)v7 == 0 || (v8 = *(_QWORD *)(*(_QWORD *)v7 + 8LL)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 794088402, v7);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v7 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v7 + 8LL));
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
    if ( *(_DWORD *)(v12 + 480) == a3 )
      break;
    if ( v10 == v9 )
      goto LABEL_10;
  }
  if ( v11 == 0 )
LABEL_10:
    v13 = 6;
  else
    v13 = *(_DWORD *)(v11 + 520);
  v14 = sub_777710(v3);
  sub_680A00(v14 + 168);
  *(_DWORD *)(sub_777710(v3) + 6184) = v13;
  v15 = sub_6EA720(a1 + 368);
  return sub_7710B0(v15, &v17, a3);
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

// N4SPTG12InShopStatusE, virtual slot 27
__int64 __fastcall sub_854080(char *a1)
{/*nothrow:((__int64)sub_FA4960)*/
  __int64 v1; // x21
  char *v2; // x19
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x22
  __int64 v6; // x8

  v1 = *((_QWORD *)a1 + 21);
  v2 = a1;
  if ( v1 != 0 )
  {
    v3 = *((_QWORD *)a1 + 73);
    v4 = nn__os__LockMutex(*(_QWORD *)(*(_QWORD *)(v1 + 88) + 16LL));
    v5 = *((_QWORD *)v2 + 21);
    if ( v3 == 0 )
  { struct G0_ { __typeof__(v1)& v1; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_, t2_, t3_; t1_ = (__int64)(*(__int64*)(((char*)((__int64)v1) + 88))); t2_ = (__int64)(*(__int64*)(((char*)(t1_) + 16))); t3_ = (__int64)((__int64)sub_FA4960(t2_)); } } } g0_ = { v1, 0 };
      v3 = sub_F97B20(v4);
  g0_.ok = 1; }
    *(_QWORD *)(v5 + 160) = v3;
    a1 = (char *)nn__os__UnlockMutex(*(_QWORD *)(*(_QWORD *)(v1 + 88) + 16LL));
  }
  if ( byte_1925158 == 1 )
  {
    v6 = qword_1924BC0;
    if ( qword_1924BC0 != 0 )
      v6 = *(_QWORD *)(qword_1924BC0 + 296);
  }
  else
  {
    v6 = 1000000 * (nn__os__GetSystemTick(a1) - qword_195B648) / qword_195B670;
  }
  *((_QWORD *)v2 + 72) = v6;
  return sub_7FF900(v2);
}

// N4SPTG9DialogBoxE, virtual slot 27
__int64 __fastcall sub_86EC80(char *a1)
{/*nothrow:((__int64)sub_FA4960)*/
  __int64 v1; // x21
  char *v2; // x19
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x22
  __int64 v6; // x8
  __int64 result; // x0

  v1 = *((_QWORD *)a1 + 21);
  v2 = a1;
  if ( v1 != 0 )
  {
    v3 = *((_QWORD *)a1 + 73);
    v4 = nn__os__LockMutex(*(_QWORD *)(*(_QWORD *)(v1 + 88) + 16LL));
    v5 = *((_QWORD *)v2 + 21);
    if ( v3 == 0 )
  { struct G0_ { __typeof__(v1)& v1; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_, t2_, t3_; t1_ = (__int64)(*(__int64*)(((char*)((__int64)v1) + 88))); t2_ = (__int64)(*(__int64*)(((char*)(t1_) + 16))); t3_ = (__int64)((__int64)sub_FA4960(t2_)); } } } g0_ = { v1, 0 };
      v3 = sub_F97B20(v4);
  g0_.ok = 1; }
    *(_QWORD *)(v5 + 160) = v3;
    a1 = (char *)nn__os__UnlockMutex(*(_QWORD *)(*(_QWORD *)(v1 + 88) + 16LL));
  }
  if ( byte_1925158 == 1 )
  {
    v6 = qword_1924BC0;
    if ( qword_1924BC0 != 0 )
      v6 = *(_QWORD *)(qword_1924BC0 + 296);
  }
  else
  {
    v6 = 1000000 * (nn__os__GetSystemTick(a1) - qword_195B648) / qword_195B670;
  }
  *((_QWORD *)v2 + 72) = v6;
  result = sub_7FF900(v2);
  *((_DWORD *)v2 + 188) = 0;
  *((_BYTE *)v2 + 748) = 0;
  return result;
}

// N4SPTG9DebugMenuE, virtual slot 27
__int64 __fastcall sub_870010(char *a1)
{/*nothrow:((__int64)sub_FA4960)*/
  __int64 v1; // x21
  char *v2; // x19
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x22
  __int64 v6; // x8

  v1 = *((_QWORD *)a1 + 21);
  v2 = a1;
  if ( v1 != 0 )
  {
    v3 = *((_QWORD *)a1 + 73);
    v4 = nn__os__LockMutex(*(_QWORD *)(*(_QWORD *)(v1 + 88) + 16LL));
    v5 = *((_QWORD *)v2 + 21);
    if ( v3 == 0 )
  { struct G0_ { __typeof__(v1)& v1; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_, t2_, t3_; t1_ = (__int64)(*(__int64*)(((char*)((__int64)v1) + 88))); t2_ = (__int64)(*(__int64*)(((char*)(t1_) + 16))); t3_ = (__int64)((__int64)sub_FA4960(t2_)); } } } g0_ = { v1, 0 };
      v3 = sub_F97B20(v4);
  g0_.ok = 1; }
    *(_QWORD *)(v5 + 160) = v3;
    a1 = (char *)nn__os__UnlockMutex(*(_QWORD *)(*(_QWORD *)(v1 + 88) + 16LL));
  }
  if ( byte_1925158 == 1 )
  {
    v6 = qword_1924BC0;
    if ( qword_1924BC0 != 0 )
      v6 = *(_QWORD *)(qword_1924BC0 + 296);
  }
  else
  {
    v6 = 1000000 * (nn__os__GetSystemTick(a1) - qword_195B648) / qword_195B670;
  }
  *((_QWORD *)v2 + 72) = v6;
  return sub_7FF900(v2);
}

// N4SPTG11ControlMenuE, virtual slot 27
__int64 __fastcall sub_871F00(char *a1)
{/*nothrow:((__int64)sub_FA4960)*/
  __int64 v1; // x21
  char *v2; // x19
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x22
  __int64 v6; // x8

  v1 = *((_QWORD *)a1 + 21);
  v2 = a1;
  if ( v1 != 0 )
  {
    v3 = *((_QWORD *)a1 + 73);
    v4 = nn__os__LockMutex(*(_QWORD *)(*(_QWORD *)(v1 + 88) + 16LL));
    v5 = *((_QWORD *)v2 + 21);
    if ( v3 == 0 )
  { struct G0_ { __typeof__(v1)& v1; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_, t2_, t3_; t1_ = (__int64)(*(__int64*)(((char*)((__int64)v1) + 88))); t2_ = (__int64)(*(__int64*)(((char*)(t1_) + 16))); t3_ = (__int64)((__int64)sub_FA4960(t2_)); } } } g0_ = { v1, 0 };
      v3 = sub_F97B20(v4);
  g0_.ok = 1; }
    *(_QWORD *)(v5 + 160) = v3;
    a1 = (char *)nn__os__UnlockMutex(*(_QWORD *)(*(_QWORD *)(v1 + 88) + 16LL));
  }
  if ( byte_1925158 == 1 )
  {
    v6 = qword_1924BC0;
    if ( qword_1924BC0 != 0 )
      v6 = *(_QWORD *)(qword_1924BC0 + 296);
  }
  else
  {
    v6 = 1000000 * (nn__os__GetSystemTick(a1) - qword_195B648) / qword_195B670;
  }
  *((_QWORD *)v2 + 72) = v6;
  sub_7FF900(v2);
  return sub_873210(v2);
}

// N4SPTG30ControllerDisconnectionMessageE, virtual slot 27
__int64 __fastcall sub_873470(char *a1)
{/*nothrow:((__int64)sub_FA4960)*/
  __int64 v1; // x21
  char *v2; // x19
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x22
  __int64 v6; // x8
  __int64 result; // x0

  v1 = *((_QWORD *)a1 + 21);
  v2 = a1;
  if ( v1 != 0 )
  {
    v3 = *((_QWORD *)a1 + 73);
    v4 = nn__os__LockMutex(*(_QWORD *)(*(_QWORD *)(v1 + 88) + 16LL));
    v5 = *((_QWORD *)v2 + 21);
    if ( v3 == 0 )
  { struct G0_ { __typeof__(v1)& v1; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_, t2_, t3_; t1_ = (__int64)(*(__int64*)(((char*)((__int64)v1) + 88))); t2_ = (__int64)(*(__int64*)(((char*)(t1_) + 16))); t3_ = (__int64)((__int64)sub_FA4960(t2_)); } } } g0_ = { v1, 0 };
      v3 = sub_F97B20(v4);
  g0_.ok = 1; }
    *(_QWORD *)(v5 + 160) = v3;
    a1 = (char *)nn__os__UnlockMutex(*(_QWORD *)(*(_QWORD *)(v1 + 88) + 16LL));
  }
  if ( byte_1925158 == 1 )
  {
    v6 = qword_1924BC0;
    if ( qword_1924BC0 != 0 )
      v6 = *(_QWORD *)(qword_1924BC0 + 296);
  }
  else
  {
    v6 = 1000000 * (nn__os__GetSystemTick(a1) - qword_195B648) / qword_195B670;
  }
  *((_QWORD *)v2 + 72) = v6;
  result = sub_7FF900(v2);
  *((_BYTE *)v2 + 724) = 0;
  return result;
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

__int64 __fastcall sub_8CAF40(__int64 result, __int64 a2)
{
  unsigned int *v2; // x19
  unsigned int *v3; // x8
  unsigned int v4; // w9
  unsigned int v5; // w8
  unsigned int v6; // w8
  __int64 v7; // x20
  __int64 v8; // x0

  if ( result + 320 == a2 )
    return result;
  v2 = *(unsigned int **)(result + 328);
  v3 = *(unsigned int **)(a2 + 8);
  if ( v2 == v3 )
    return result;
  if ( v3 == nullptr )
  {
    *(_QWORD *)(result + 328) = 0;
    if ( v2 == nullptr )
      return result;
    goto LABEL_8;
  }
  v4 = __atomic_fetch_add(v3, 1, 0);
  *(_QWORD *)(result + 328) = *(_QWORD *)(a2 + 8);
  if ( v2 != nullptr )
  {
    LABEL_8:
      v6 = __atomic_sub_fetch(v2, 1, 0);
    if ( v6 == 0 )
    {
      v7 = qword_1926BD8;
      v8 = *(_QWORD *)(v7 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v2) + 880);
      return (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v8 + 48LL))(v8, v2);
    }
  }
  return result;
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

// N4SPTG11StrikerYetiE, virtual slot 17
__int64 __fastcall sub_93F600(__int64 a1)
{
  int v2; // w20
  __int64 result; // x0
  char *v4; // x22
  __int64 v5; // x8
  __int64 *v6; // x20
  __int64 v7; // x9
  _QWORD *v8; // x10
  __int64 v9; // x21
  __int64 v10; // x0

  (*(void (__fastcall **)(__int64, int, __int64, int, float))(*(_QWORD *)a1 + 176LL))(a1, 0, 1, 0, 1.0);
  v2 = *(unsigned __int8 *)(a1 + 736);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 576LL))(a1);
  if ( v2 != 0 )
  {
    result = sub_945180(
               a1,
               *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 752) + 16LL) + 28LL),
               *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 752) + 16LL) + 32LL));
    v4 = (char *)(*(_QWORD *)(a1 + 752));
    v5 = *(_QWORD *)(v4 + 24);
    if ( v5 == 0 )
      goto LABEL_8;
  }
  else
  {
    result = sub_945180(
               a1,
               *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 744) + 16LL) + 28LL),
               *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 744) + 16LL) + 32LL));
    v4 = (char *)(*(_QWORD *)(a1 + 744));
    v5 = *(_QWORD *)(v4 + 24);
    if ( v5 == 0 )
      goto LABEL_8;
  }
  v6 = *(__int64 **)(v4 + 16);
  v7 = *v6;
  v8 = (_QWORD *)v6[1];
  *(_QWORD *)(v7 + 8) = (_QWORD)(v8);
  *v8 = v7;
  if ( v6 != nullptr )
  {
    v9 = qword_1926BD8;
    v10 = *(_QWORD *)(v9 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v6) + 880);
    result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 48LL))(v10, v6);
    v5 = *(_QWORD *)(v4 + 24);
  }
  *(_QWORD *)(v4 + 24) = v5 - 1;
LABEL_8:
  if ( qword_1924BC0 != 0 && *(_BYTE *)(qword_1924BC0 + 224) != 0 )
    *(_QWORD *)(*(_QWORD *)(a1 + 728) + 5256LL) = a1;
  return result;
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

__int64 __fastcall sub_995C50(__int64 a1, unsigned int a2)
{
  __int64 v3; // x21
  __int64 v4; // x20
  __int64 result; // x0
  __int64 v6; // x8
  __int64 v7; // x20
  __int64 v8; // t1
  __int64 v9; // x21
  __int64 v10; // x8
  char *v11; // x19

  v3 = sub_774B50(a1 + 136) + 80;
  if ( *(_QWORD *)v3 != 0 && (v4 = *(_QWORD *)(*(_QWORD *)v3 + 8LL)) != 0
    || (sub_67EDD0(qword_191CD10, 1743956557, v3),
        result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v3 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v3 + 8LL)),
        *(_QWORD *)v3 != 0)
    && (v4 = *(_QWORD *)(*(_QWORD *)v3 + 8LL)) != 0 )
  {
    v8 = *(_QWORD *)(v4 + 112);
    v7 = v4 + 112;
    v6 = v8;
    if ( v8 == 0 || (v9 = *(_QWORD *)(v6 + 8)) == 0 )
    {
      sub_67EDD0(qword_191CD10, 1037755499, v7);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v7 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v7 + 8LL));
      if ( *(_QWORD *)v7 != 0 )
        v9 = *(_QWORD *)(*(_QWORD *)v7 + 8LL);
      else
        v9 = 0;
    }
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 112) + 8LL * a2);
    if ( v10 != 0 )
      v11 = (char *)(*(_QWORD *)(v10 + 8));
    else
      v11 = 0;
    result = sub_8FB2B0(v9);
    if ( (result & 0x80000000) == 0 )
      return sub_8FB610(*(_QWORD *)(v9 + 152) + 40LL * (int)result, v11 + 76);
  }
  return result;
}
// N4SPTG16InteractiveEffetE, virtual slot 13
void sub_9C61A0(__int64 result)
{
  __int64 v1; // x8
  __int64 v2; // x20
  __int64 v3; // x19
  __int64 v4; // x22
  __int64 v5; // x8
  __int64 v6; // x21
  __int64 v7; // x20

  v2 = result + 96;
  v1 = *(_QWORD *)(result + 96);
  v3 = result;
  if ( v1 == 0 || (v4 = *(_QWORD *)(v1 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 1682502063, v2);
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v2 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v2 + 8LL));
    if ( *(_QWORD *)v2 != 0 )
      v4 = *(_QWORD *)(*(_QWORD *)v2 + 8LL);
    else
      v4 = 0;
  }
  v6 = v3 + 104;
  v5 = *(_QWORD *)(v3 + 104);
  if ( v5 == 0 || (v7 = *(_QWORD *)(v5 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 704373816, v3 + 104);
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v6 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v6 + 8LL));
    if ( *(_QWORD *)v6 == 0 )
      return;
    v7 = *(_QWORD *)(*(_QWORD *)v6 + 8LL);
  }
  if ( v4 != 0 && v7 != 0 && *(_BYTE *)(v3 + 112) == 0 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 160LL))(v7);
    if ( (result & 1) != 0 && *(_BYTE *)(v3 + 113) != 0 )
    {
      *(_BYTE *)(v4 + 120) = 0;
      { (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 168LL))(v7, 1); return; }
    }
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
// N4SPTG4ToddE, virtual slot 240
__int64 __fastcall sub_A22390(_QWORD *a1)
{
  __int64 v2; // x0
  __int64 v3; // x8
  __int64 v4; // x22
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x8
  __int64 v8; // x22
  __int64 v9; // x1
  __int64 v10; // x0
  __int64 v11; // x8
  __int64 v12; // x21
  __int64 v13; // x1
  _QWORD *v14; // x20

  sub_A1B6F0((__int64)a1);
  v2 = sub_7B3D60(a1 + 374);
  v3 = a1[431];
  v4 = v2;
  if ( v3 == 0 || (v5 = *(_QWORD *)(v3 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 309210931, a1 + 431);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1[431] + 8LL) + 16LL))(*(_QWORD *)(a1[431] + 8LL));
    if ( a1[431] != 0 )
      v5 = *(_QWORD *)(a1[431] + 8LL);
    else
      v5 = 0;
  }
  sub_7B40A0(v4, v5, 0);
  v6 = sub_7B3D60(a1 + 374);
  v7 = a1[427];
  v8 = v6;
  if ( v7 == 0 || (v9 = *(_QWORD *)(v7 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 309210931, a1 + 427);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1[427] + 8LL) + 16LL))(*(_QWORD *)(a1[427] + 8LL));
    if ( a1[427] != 0 )
      v9 = *(_QWORD *)(a1[427] + 8LL);
    else
      v9 = 0;
  }
  sub_7B40A0(v8, v9, 0);
  v10 = sub_7B3D60(a1 + 374);
  v11 = a1[429];
  v12 = v10;
  if ( v11 == 0 || (v13 = *(_QWORD *)(v11 + 8)) == 0 )
  {
    v14 = a1 + 429;
    sub_67EDD0(qword_191CD10, 309210931, v14);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*v14 + 8LL) + 16LL))(*(_QWORD *)(*v14 + 8LL));
    if ( *v14 != 0 )
      v13 = *(_QWORD *)(*v14 + 8LL);
    else
      v13 = 0;
  }
  return sub_7B40A0(v12, v13, 0);
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

__int64 __fastcall sub_A832D0(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        int a9,
        int a10)
{
  __int64 SystemTick; // x0
  __int64 v15; // x9
  __int64 v16; // x8
  __int64 v17; // x19
  __int64 v18; // t1
  int v19; // w9
  char *v20; // x8

  *(_BYTE *)(a1 + 1196) = 1;
  *(_BYTE *)(a1 + 1144) = 1;
  *(_DWORD *)(a1 + 1212) = a2;
  *(_DWORD *)(a1 + 1216) = a3;
  *(_DWORD *)(a1 + 1208) = a8;
  *(_DWORD *)(a1 + 1712) = a4 * a3;
  *(_DWORD *)(a1 + 1716) = 2 * (a5 == -1);
  *(_DWORD *)(a1 + 1096) = a10 & 0x7FFFFFFF;
  *(_BYTE *)(a1 + 1100) = a10 < 0;
  *(_DWORD *)(a1 + 1204) = 0;
  SystemTick = nn__os__GetSystemTick((char *)a1);
  v16 = SystemTick - qword_195B648;
  v15 = qword_195B670;
  *(_DWORD *)(a1 + 1220) = *(_DWORD *)(a1 + 1712) >> 1;
  *(_DWORD *)(a1 + 1256) = 1000 * v16 / v15;
  *(_BYTE *)(a1 + 1368) = a6 == 0;
  if ( a6 != 0 )
    sub_A80F20(a1 + 1280, a6);
  if ( a7 == 0 )
  {
    a7 = 16;
    *(_DWORD *)(a1 + 1636) = 32;
  }
  sub_A82910(a1, a7);
  if ( *(_DWORD *)(a1 + 1716) == 0 )
    sub_A80D80(a1, a5);
  sub_A83420((char *)qword_1926BE0, a1);
  v18 = *(_QWORD *)(a1 + 208);
  v17 = a1 + 208;
  *(_BYTE *)(v17 + 329) = 1;
  v19 = *(_DWORD *)(v17 + 324);
  *(_DWORD *)(v17 + 324) = a9;
  (*(void (__fastcall **)(__int64, bool))(v18 + 72))(v17, v19 != a9);
  v20 = (char *)(v17 + 336);
  if ( *(_BYTE *)(v17 + 344) == 0 )
    v20 = 0;
  return nn__os__SetThreadCoreMask(v20 + 32, 1, 6);
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

// N4Gear10ZLibDeviceE, virtual slot 23
__int64 __fastcall sub_AA72E0(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v6; // x21
  char *v10; // [xsp+18h] [xbp-28h] BYREF
  char v9; // [xsp+14h] [xbp-2Ch] BYREF
  __int64 (__fastcall **v8)(); // [xsp+8h] [xbp-38h] BYREF

  v8 = (long long (**)())(((__int64)off_189C188));
  v10 = &v9;
  { struct G0_ { __typeof__(v9)& v9; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { *(char*)&v9 = 0; } } } g0_ = { v9, 0 };
  if ( (sub_A9BBF0(&v8, a3, "CHUNK", &v10, 1) & 1) != 0 )
    *a4 = 1;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, 32);
  sub_A8A280(v6, a2, (unsigned __int8)*a4);
  g0_.ok = 1; }
  return v6;
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

__int64 __fastcall sub_AC7D00(_QWORD *a1)
{
  void (__fastcall ***v1)(_QWORD); // x20
  __int64 v3; // x21
  __int64 v4; // x21
  __int64 v5; // x8
  _QWORD *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  _QWORD v10[2]; // [xsp+0h] [xbp-30h] BYREF

  v1 = (void (__fastcall ***)(_QWORD))a1[14];
  if ( v1 != nullptr )
  {
    v3 = qword_1926BD8;
    v4 = *(_QWORD *)(v3 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v1) + 880);
    (**v1)((_QWORD)(v1));
    (*(void (__fastcall **)(__int64, void (__fastcall ***)(_QWORD)))(*(_QWORD *)v4 + 48LL))(v4, v1);
  }
  v6 = a1 + 10;
  v5 = a1[10];
  if ( v5 == 0 || (v7 = *(_QWORD *)(v5 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 1961365923, a1 + 10);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*v6 + 8LL) + 16LL))(*(_QWORD *)(*v6 + 8LL));
    if ( *v6 != 0 )
      v7 = *(_QWORD *)(*v6 + 8LL);
    else
      v7 = 0;
  }
  a1[14] = sub_AC7EB0(v7);
  v8 = a1[8];
  v10[0] = (_QWORD)(a1);
  v10[1] = (_QWORD)(a1);
  { struct G0_ { __typeof__(v10)& v10; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { *(char*)&v10 = 0; } } } g0_ = { v10, 0 };
  { __auto_type r_ = sub_BF6E80(qword_1935068, v8, 1818424473, v10); g0_.ok = 1; return r_; }
  g0_.ok = 1; }
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

__int64 __fastcall sub_B56F20(__int64 result) noexcept
{
  __int64 v1; // x20
  _QWORD *v2; // x19
  __int64 v3; // x21
  __int64 v4; // x0
  __int64 v5; // x20
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x20
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x20
  __int64 v12; // x21
  __int64 v13; // x0

  v1 = *(_QWORD *)(result + 152);
  v2 = (_QWORD *)result;
  *(_QWORD *)(result + 136) = 0;
  if ( v1 != 0 )
  {
    v3 = qword_1926BD8;
    v4 = *(_QWORD *)(v3 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v1) + 880);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, v1);
  }
  v5 = v2[14];
  v2[19] = 0;
  v2[12] = 0;
  v2[16] = 0;
  v2[17] = 0;
  if ( v5 != 0 )
  {
    v6 = qword_1926BD8;
    v7 = *(_QWORD *)(v6 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v5) + 880);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, v5);
  }
  v8 = v2[9];
  v2[14] = 0;
  v2[7] = 0;
  v2[11] = 0;
  v2[12] = 0;
  if ( v8 != 0 )
  {
    v9 = qword_1926BD8;
    v10 = *(_QWORD *)(v9 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v8) + 880);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 48LL))(v10, v8);
  }
  v11 = v2[4];
  v2[9] = 0;
  v2[2] = 0;
  v2[6] = 0;
  v2[7] = 0;
  if ( v11 != 0 )
  {
    v12 = qword_1926BD8;
    v13 = *(_QWORD *)(v12 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v11) + 880);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 48LL))(v13, v11);
  }
  v2[4] = 0;
  v2[1] = 0;
  v2[2] = 0;
  return result;
}

__int64 __fastcall sub_B5C830(char *a1, char *a2)
{
  unsigned __int64 v3; // x8
  int v5; // w9
  __int64 v6; // x0
  void *v7; // x21
  __int64 v8; // x22
  char *v9; // x23
  char *v10; // x0
  unsigned __int64 v11; // x8
  int v12; // w9
  __int64 v13; // x0
  void *v14; // x21
  __int64 v15; // x22
  char *v16; // x23
  char *v17; // x0

  if ( a2 != a1 )
  {
    v3 = *(_QWORD *)(a2 + 24);
    if ( v3 <= *(_QWORD *)(a1 + 16) )
    {
      memcpy(*(void **)(a1 + 40), *(const void **)(a2 + 40), 8LL * (unsigned int)*(_QWORD *)(a2 + 24));
    }
    else
    {
      v5 = *(_DWORD *)(a2 + 16);
      if ( v5 != 0 )
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(
               *(_QWORD *)(a1 + 8),
               (unsigned int)(8 * v5));
        v3 = *(_QWORD *)(a2 + 24);
        v7 = (void *)v6;
      }
      else
      {
        v7 = nullptr;
      }
      memcpy(v7, *(const void **)(a2 + 40), 8LL * (unsigned int)v3);
      v8 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 24) = 0;
      if ( v8 != 0 )
      {
        v9 = (char *)(qword_1926BD8);
        v10 = (char *)(*(_QWORD *)(v9 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v8) + 880));
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 48LL))((long long)(v10), v8);
      }
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
      *(_QWORD *)(a1 + 40) = (_QWORD)(v7);
    }
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
    v11 = *(_QWORD *)(a2 + 64);
    if ( v11 <= *(_QWORD *)(a1 + 56) )
    {
      memcpy(*(void **)(a1 + 80), *(const void **)(a2 + 80), 8LL * (unsigned int)*(_QWORD *)(a2 + 64));
    }
    else
    {
      v12 = *(_DWORD *)(a2 + 56);
      if ( v12 != 0 )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 48) + 16LL))(
                *(_QWORD *)(a1 + 48),
                (unsigned int)(8 * v12));
        v11 = *(_QWORD *)(a2 + 64);
        v14 = (void *)v13;
      }
      else
      {
        v14 = nullptr;
      }
      memcpy(v14, *(const void **)(a2 + 80), 8LL * (unsigned int)v11);
      v15 = *(_QWORD *)(a1 + 80);
      *(_QWORD *)(a1 + 64) = 0;
      if ( v15 != 0 )
      {
        v16 = (char *)(qword_1926BD8);
        v17 = (char *)(*(_QWORD *)(v16 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v15) + 880));
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 48LL))((long long)(v17), v15);
      }
      *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
      *(_QWORD *)(a1 + 80) = (_QWORD)(v14);
    }
    *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  }
  return (long long)(a1);
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

__int64 __fastcall sub_BACFE0(__int64 *a1)
{
  __int64 result; // x0
  _QWORD v2[2]; // [xsp+0h] [xbp-20h] BYREF

  result = *a1;
  if ( result != 0 )
  {
    v2[0] = 0;
    v2[1] = 0;
  { struct G0_ { __typeof__(v2)& v2; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { *(char*)&v2 = 0; } } } g0_ = { v2, 0 };
    { __auto_type r_ = (*(__int64 (__fastcall **)(__int64, _QWORD *))(result + 8))(result, v2); g0_.ok = 1; return r_; }
  g0_.ok = 1; }
  }
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

__int64 __fastcall sub_BC89C0(__int64 a1, __int64 *a2)
{
  __int64 v3; // x0
  __int64 v5; // x21
  __int64 v6; // x8
  __int64 v7; // x21
  __int64 v8; // t1
  __int64 v9; // x8
  float32x2_t v10; // d1
  float32x4_t v11; // q0
  int v12; // w21
  int v13; // w22
  int v14; // w23
  int v15; // w24
  int v16; // w26
  int v17; // w25
  __int64 v18; // x8
  __int64 v19; // x19
  __int64 v20; // t1
  float32x2_t v21; // d8
  __int64 result; // x0
  __int64 v23; // x8
  _DWORD v26[4]; // [xsp+20h] [xbp-60h] BYREF
  __int64 v25; // [xsp+18h] [xbp-68h] BYREF
  float32x4_t v24; // [xsp+0h] [xbp-80h]

  v3 = *a2;
  v25 = *(_QWORD *)(a1 + 112);
  (*(void (__fastcall **)(__int64, __int64 *, _DWORD *, float))(*(_QWORD *)v3 + 144LL))(
    v3,
    &v25,
    v26,
    *(float *)(a1 + 120));
  v5 = *a2;
  v8 = *(_QWORD *)(v5 + 80);
  v7 = v5 + 80;
  v6 = v8;
  if ( v8 == 0 || (v9 = *(_QWORD *)(v6 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 36693834, v7);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v7 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v7 + 8LL));
    v9 = *(_QWORD *)(*(_QWORD *)v7 + 8LL);
  }
  v11 = vnegq_f32(*(float32x4_t *)(v9 + 88));
  ((unsigned long long*)&v10)[0] = *(unsigned __int64 *)(v9 + 104);
  v12 = *(_DWORD *)(v9 + 112);
  v13 = *(_DWORD *)(v9 + 116);
  v14 = *(_DWORD *)(v9 + 120);
  v15 = v26[0];
  v16 = v26[1];
  v17 = v26[2];
  v20 = *(_QWORD *)(a1 + 80);
  v19 = a1 + 80;
  v18 = v20;
  ((unsigned long long*)&v21)[0] = ({ __typeof__(vneg_f32(v10)) lane_ = vneg_f32(v10); ((unsigned long long*)&lane_)[0]; });
  if ( v20 == 0 || (result = *(_QWORD *)(v18 + 8)) == 0 )
  {
    v24 = v11;
    sub_67EDD0(qword_191CD10, 36693834, v19);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v19 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v19 + 8LL));
    if ( *(_QWORD *)v19 != 0 )
      result = *(_QWORD *)(*(_QWORD *)v19 + 8LL);
    else
      result = 0;
    v11 = v24;
  }
  *(_BYTE *)(result + 136) = 1;
  v23 = *(_QWORD *)(result + 144);
  *(float32x2_t *)(result + 104) = v21;
  *(_DWORD *)(result + 112) = v12;
  *(_DWORD *)(result + 116) = v13;
  *(_DWORD *)(result + 120) = v14;
  *(_DWORD *)(result + 124) = v15;
  *(_DWORD *)(result + 128) = v16;
  *(_DWORD *)(result + 132) = v17;
  *(float32x4_t *)(result + 88) = v11;
  if ( v23 != 0 )
    return sub_68F3B0(result);
  return result;
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

void __noreturn sub_BE8420()
{/*nothrow:((__int64)sub_FA4B30)*/
  char *exception; // x19

  exception = (char *)__cxa_allocate_exception(0x10u);
  { struct G0_ { __typeof__(exception)& exception; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_FA4B30((__int64)exception)); } } } g0_ = { exception, 0 };
  sub_BE8470(exception);
  g0_.ok = 1; }
  __cxa_throw(exception, (type_info *)((__int64*)_ZTISt12length_error), (void (*)(void *))((__int64*)_ZNSt12length_errorD1Ev));
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

// N5EE_US22PlayerGameInputMessageE, virtual slot 5
__int64 __fastcall sub_C21CA0(__int64 a1)
{
  __int64 v2; // x19

  v2 = sub_56C9F0(392, 8, 1092624384, 0LL, &byte_154D880, 0);
  struct G0_ { void* p; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) sub_56CA00(p, &unk_154D880, 0); } } g0_ = { (void*)v2, 0 };
  sub_C21760(v2, a1);
  g0_.ok = 1;
  return v2;
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

// NSt3__110__function6__funcIZN5EE_US12StormSyncSim27private_OnNextStepAnnouncedERNS2_21GeneralNetworkMessageEmE4$_66NS_9allocatorIS6_EEFvvEEE, virtual slot 2
_QWORD *__fastcall sub_C23810(__int64 a1)
{/*nothrow:((__int64)sub_FA3B40)*/
  _QWORD *v2; // x0
  _QWORD *v3; // x19

  v2 = (_QWORD *)_Znwm(0x130u);
  *v2 = ((__int64)off_18B7150);
  v3 = v2;
  struct G0_ { void* p; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) sub_FA3B40(p); } } g0_ = { (void*)v3, 0 };
  v2[1] = *(_QWORD *)(a1 + 8);
  sub_7D9B70(v2 + 2, a1 + 16);
  g0_.ok = 1;
  return v3;
}

// N5storm17NetPropertyVectorINS_18NetPropertyIntegerIbNS_14NumericalTraitIbNS_15MaxValueFunctorIbLm0EEELh0ELb0ELb0ENS_19DefaultValueFunctorIbLm0EEEEEEELm26EEE, virtual slot 5
__int64 __fastcall sub_C2CBC0(__int64 a1)
{
  __int64 v2; // x19

  v2 = sub_56C9F0(104, 8, 1092624384, 0LL, &byte_154D880, 0);
  struct G0_ { void* p; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) sub_56CA00(p, &unk_154D880, 0); } } g0_ = { (void*)v2, 0 };
  sub_C2D650(v2, a1);
  g0_.ok = 1;
  return v2;
}

// N5storm17NetPropertyVectorINS_18NetPropertyDecimalIfNS_14NumericalTraitIfNS_15MaxValueFunctorIfLm0EEELh0ELb0ELb0ENS_19DefaultValueFunctorIfLm0EEEEEEELm7EEE, virtual slot 5
__int64 __fastcall sub_C2E640(__int64 a1)
{
  __int64 v2; // x19

  v2 = sub_56C9F0(104, 8, 1092624384, 0LL, &byte_154D880, 0);
  struct G0_ { void* p; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) sub_56CA00(p, &unk_154D880, 0); } } g0_ = { (void*)v2, 0 };
  sub_C2F800(v2, a1);
  g0_.ok = 1;
  return v2;
}

// N5storm17NetPropertyVectorINS_18NetPropertyIntegerIbNS_14NumericalTraitIbNS_15MaxValueFunctorIbLm0EEELh0ELb0ELb0ENS_19DefaultValueFunctorIbLm0EEEEEEELm7EEE, virtual slot 5
__int64 __fastcall sub_C30C40(__int64 a1)
{
  __int64 v2; // x19

  v2 = sub_56C9F0(104, 8, 1092624384, 0LL, &byte_154D880, 0);
  struct G0_ { void* p; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) sub_56CA00(p, &unk_154D880, 0); } } g0_ = { (void*)v2, 0 };
  sub_C31370(v2, a1);
  g0_.ok = 1;
  return v2;
}

// N5storm17NetPropertyVectorINS0_INS_18NetPropertyIntegerIbNS_14NumericalTraitIbNS_15MaxValueFunctorIbLm0EEELh0ELb0ELb0ENS_19DefaultValueFunctorIbLm0EEEEEEELm7EEELm4EEE, virtual slot 5
__int64 __fastcall sub_C325D0(__int64 a1)
{
  __int64 v2; // x19

  v2 = sub_56C9F0(104, 8, 1092624384, 0LL, &byte_154D880, 0);
  struct G0_ { void* p; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) sub_56CA00(p, &unk_154D880, 0); } } g0_ = { (void*)v2, 0 };
  sub_C33120(v2, a1);
  g0_.ok = 1;
  return v2;
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

// N5storm20SimpleSessionHandlerE, virtual slot 102
__int64 __fastcall sub_C3AD00(__int64 a1)
{
  __int64 v2; // x19

  v2 = sub_56C9F0(416, 8, 1092624384, 0LL, &byte_154D880, 0);
  struct G0_ { void* p; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) sub_56CA00(p, &unk_154D880, 0); } } g0_ = { (void*)v2, 0 };
  sub_4A72A0(v2, a1);
  g0_.ok = 1;
  if ( v2 != 0 )
    return v2 + 32;
  else
    return 0;
}

__int64 __fastcall sub_C3C5D0(__int64 a1) noexcept
{
  __int64 v1; // x19

  v1 = a1 - 32;
  sub_4A7340(a1 - 32);
  return sub_56CA00(v1, &byte_154D880, 0);
}

__int64 __fastcall sub_C3C620(__int64 a1)
{
  __int64 v1; // x20
  __int64 v2; // x19

  v1 = a1 - 32;
  v2 = sub_56C9F0(416, 8, 1092624384, 0LL, &byte_154D880, 0);
  struct G0_ { void* p; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) sub_56CA00(p, &unk_154D880, 0); } } g0_ = { (void*)v2, 0 };
  sub_4A72A0(v2, v1);
  g0_.ok = 1;
  if ( v2 != 0 )
    return v2 + 32;
  else
    return 0;
}

// NSt3__110__function6__funcIZN5EE_US13StormInstance25DoWaitForStormMatchmakingENS_8functionIFvbjEEEE3$_4NS_9allocatorIS7_EEFvvEEE, virtual slot 2
__int64 __fastcall sub_C489C0(char *a1)
{/*nothrow:((__int64)sub_FA3B40)*/
  char *v2; // x0
  __int64 v3; // x8
  char *v4; // x19
  char *v5; // x0

  v2 = (char *)(_Znwm(0x50u));
  *(_QWORD *)v2 = ((__int64)off_18BB750);
  v3 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(v2 + 24) = *(_DWORD *)(a1 + 24);
  *(_QWORD *)(v2 + 16) = v3;
  v4 = v2;
  v5 = (char *)(*(_QWORD *)(a1 + 64));
  if ( v5 != 0 )
  {
  { struct G0_ { __typeof__(v4)& v4; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_FA3B40((__int64)v4)); } } } g0_ = { v4, 0 };
    if ( a1 + 32 == v5 )
    {
      *(_QWORD *)(v4 + 64) = (_QWORD)(v4 + 32);
      (*(void (__fastcall **)(__int64, __typeof__(v4 + 32)))(*(_QWORD *)v5 + 24LL))((long long)(v5), v4 + 32);
    }
    else
    {
      *(_QWORD *)(v4 + 64) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))((long long)(v5));
    }
  g0_.ok = 1; }
  }
  else
  {
    *(_QWORD *)(v4 + 64) = 0;
  }
  return (long long)(v4);
}
// NSt3__110__function6__funcIZZN5EE_US13StormInstance11JoinSessionEPN5storm26ISimpleMatchmakingStrategy11SessionInfoEbNS_8functionIFvvEEENS8_IFvNS4_7EResultEEEEENK3$_1clEbjEUlvE_NS_9allocatorISF_EES9_EE, virtual slot 2
_QWORD *__fastcall sub_C4D010(char *a1)
{/*nothrow:((__int64)sub_FA3B40)*/
  _QWORD *v2; // x0
  _QWORD *v3; // x19
  char *v4; // x0
  __int128 v5; // q0

  v2 = (_QWORD *)_Znwm(0x70u);
  *v2 = ((__int64)off_18BBFE8);
  v2[2] = *(_QWORD *)(a1 + 16);
  v3 = v2;
  v4 = (char *)(*(_QWORD *)(a1 + 64));
  if ( v4 != 0 )
  {
  { struct G0_ { __typeof__(v3)& v3; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_FA3B40((__int64)v3)); } } } g0_ = { v3, 0 };
    if ( a1 + 32 == v4 )
    {
      v3[8] = (_QWORD)(v3 + 4);
      (*(void (__fastcall **)(__int64, __typeof__(v3 + 4)))(*(_QWORD *)v4 + 24LL))((long long)(v4), v3 + 4);
    }
    else
    {
      v3[8] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))((long long)(v4));
    }
  g0_.ok = 1; }
  }
  else
  {
    v3[8] = 0;
  }
  v5 = *(_OWORD *)(a1 + 80);
  v3[12] = *(_QWORD *)(a1 + 96);
  *((_OWORD *)v3 + 5) = v5;
  return v3;
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

__int64 sub_C5DA50()
{/*nothrow:((__int64)sub_BF1900)*/
  __int64 v0; // x0
  __int64 v1; // x19
  __int64 v2; // x0
  _DWORD *v3; // x0

  v0 = sub_676160(qword_191C9C8, 946689293);
  v1 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v0 + 16LL))(v0, 120);
  struct G0_ { void* p; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) sub_BF1900(p); } } g0_ = { (void*)v1, 0 };
  sub_6764E0();
  *(_QWORD *)(v1 + 80) = 0;
  *(_QWORD *)v1 = ((__int64)off_18C7BD0);
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(qword_1935058 + 1368) + 16LL))(
         *(_QWORD *)(qword_1935058 + 1368),
         16);
  *(_QWORD *)v2 = 0;
  *(_DWORD *)(v2 + 8) = 1;
  *(_QWORD *)(v1 + 88) = v2;
  v3 = (_DWORD *)sub_AAEFD0(qword_1935058 + 1176, 4);
  *(_QWORD *)(v1 + 96) = (_QWORD)(v3);
  *v3 = 1;
  *(_QWORD *)v1 = ((__int64)off_18C7E48);
  *(_DWORD *)(v1 + 108) = 1048576000;
  *(_BYTE *)(v1 + 112) = 0;
  *(_DWORD *)(v1 + 116) = 1063675494;
  g0_.ok = 1;
  return v1;
}
__int64 sub_C5DCC0()
{/*nothrow:((__int64)sub_BF1900)*/
  __int64 v0; // x0
  __int64 v1; // x19
  __int64 v2; // x0
  _DWORD *v3; // x0

  v0 = sub_676160(qword_191C9C8, 946689293);
  v1 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v0 + 16LL))(v0, 136);
  struct G0_ { void* p; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) sub_BF1900(p); } } g0_ = { (void*)v1, 0 };
  sub_6764E0();
  *(_QWORD *)(v1 + 80) = 0;
  *(_QWORD *)v1 = ((__int64)off_18C7A08);
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(qword_1935058 + 1368) + 16LL))(
         *(_QWORD *)(qword_1935058 + 1368),
         16);
  *(_QWORD *)v2 = 0;
  *(_DWORD *)(v2 + 8) = 1;
  *(_QWORD *)(v1 + 88) = v2;
  v3 = (_DWORD *)sub_AAEFD0(qword_1935058 + 1176, 4);
  *(_QWORD *)(v1 + 96) = (_QWORD)(v3);
  *v3 = 1;
  *(_QWORD *)v1 = ((__int64)off_18C7A88);
  *(_QWORD *)(v1 + 104) = 0;
  *(_DWORD *)(v1 + 124) = 1065353216;
  *(_BYTE *)(v1 + 128) = 1;
  g0_.ok = 1;
  return v1;
}
__int64 sub_C5E1B0()
{/*nothrow:((__int64)sub_CC9220)*/
  __int64 v0; // x0
  __int64 v1; // x19

  v0 = sub_676160(qword_191C9C8, 129449108);
  v1 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v0 + 16LL))(v0, 128);
  struct G0_ { void* p; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) sub_CC9220(p); } } g0_ = { (void*)v1, 0 };
  sub_6764E0();
  *(_QWORD *)(v1 + 80) = 0;
  *(_QWORD *)(v1 + 88) = 0;
  *(_QWORD *)(v1 + 96) = 0;
  *(_QWORD *)v1 = ((__int64)off_18C72C0);
  *(_BYTE *)(v1 + 104) = 0;
  sub_68B890(v1 + 112, "Value");
  g0_.ok = 1;
  return v1;
}

__int64 sub_C60EB0()
{/*nothrow:((__int64)sub_CBF1E0)*/
  __int64 v0; // x0
  __int64 v1; // x19

  v0 = sub_676160(qword_191C9C8, 429100959);
  v1 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v0 + 16LL))(v0, 392);
  struct G0_ { void* p; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) sub_CBF1E0(p); } } g0_ = { (void*)v1, 0 };
  sub_CA7E30();
  *(_QWORD *)v1 = ((__int64)off_18C4E50);
  *(_QWORD *)(v1 + 384) = 0;
  *(_QWORD *)(v1 + 176) = v1;
  *(_DWORD *)(v1 + 240) = 1;
  sub_CA8450(v1, &dword_191C440);
  g0_.ok = 1;
  return v1;
}

__int64 sub_C636B0()
{/*nothrow:((__int64)sub_CA8750)*/
  __int64 v0; // x0
  __int64 v1; // x19

  v0 = sub_676160(qword_191C9C8, 429100959);
  v1 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v0 + 16LL))(v0, 392);
  struct G0_ { void* p; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) sub_CA8750(p); } } g0_ = { (void*)v1, 0 };
  sub_CA7E30();
  *(_QWORD *)v1 = ((__int64)off_18C3CE8);
  *(_QWORD *)(v1 + 384) = 0;
  *(_QWORD *)(v1 + 176) = v1;
  *(_DWORD *)(v1 + 240) = 1;
  sub_CA8450(v1, &dword_191C444);
  g0_.ok = 1;
  return v1;
}

_QWORD *sub_C645C0()
{/*nothrow:((__int64)sub_C9E7E0)*/
  __int64 v0; // x0
  _QWORD *v1; // x19
  __int64 v2; // x0
  _DWORD *v3; // x0

  v0 = sub_676160(qword_191C9C8, 429100959);
  v1 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v0 + 16LL))(v0, 304);
  struct G0_ { void* p; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) sub_C9E7E0(p); } } g0_ = { (void*)v1, 0 };
  sub_B4EC10((__int64)v1);
  v1[34] = 0;
  *v1 = ((__int64)off_18C2F10);
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(qword_1935058 + 1368) + 16LL))(
         *(_QWORD *)(qword_1935058 + 1368),
         16);
  *(_QWORD *)v2 = 0;
  *(_DWORD *)(v2 + 8) = 1;
  v1[35] = v2;
  v3 = (_DWORD *)sub_AAEFD0(qword_1935058 + 1176, 4);
  g0_.ok = 1;
  v1[36] = (_QWORD)(v3);
  *v3 = 1;
  v1[37] = 0xFFFF41200000LL;
  return v1;
}
void sub_C8D680(__int64 result)
{
  __int64 v1; // x8
  __int64 v2; // x22
  __int64 v3; // x20
  __int64 v4; // x19
  __int64 v5; // x8
  __int64 v6; // x22
  __int64 v7; // x8
  __int64 v8; // x9
  _DWORD *v9; // x8
  _DWORD *v10; // x1

  v2 = result + 80;
  v1 = *(_QWORD *)(result + 80);
  v3 = result;
  if ( v1 == 0 || (v4 = *(_QWORD *)(v1 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 36693834, v2);
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v2 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v2 + 8LL));
    if ( *(_QWORD *)v2 != 0 )
      v4 = *(_QWORD *)(*(_QWORD *)v2 + 8LL);
    else
      v4 = 0;
  }
  v6 = v3 + 88;
  v5 = *(_QWORD *)(v3 + 88);
  if ( v5 == 0 || (v7 = *(_QWORD *)(v5 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 36693834, v3 + 88);
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v6 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v6 + 8LL));
    v7 = *(_QWORD *)v6;
    if ( *(_QWORD *)v6 != 0 )
      v7 = *(_QWORD *)(v7 + 8);
  }
  if ( *(_DWORD *)(v3 + 120) != 0 )
  {
    v8 = *(_QWORD *)(v7 + 144);
    v9 = (_DWORD *)(v7 + 88);
    if ( v8 != 0 )
      v10 = (_DWORD *)(v8 + 32);
    else
      v10 = v9;
    { sub_6C9460(v4, v10); return; }
  }
  else
  {
    *(_BYTE *)(v4 + 136) = 1;
    *(_DWORD *)(v4 + 88) = *(_DWORD *)(v7 + 88);
    *(_DWORD *)(v4 + 92) = *(_DWORD *)(v7 + 92);
    *(_DWORD *)(v4 + 96) = *(_DWORD *)(v7 + 96);
    *(_DWORD *)(v4 + 100) = *(_DWORD *)(v7 + 100);
    *(_DWORD *)(v4 + 104) = *(_DWORD *)(v7 + 104);
    *(_DWORD *)(v4 + 108) = *(_DWORD *)(v7 + 108);
    *(_DWORD *)(v4 + 112) = *(_DWORD *)(v7 + 112);
    *(_DWORD *)(v4 + 116) = *(_DWORD *)(v7 + 116);
    *(_DWORD *)(v4 + 120) = *(_DWORD *)(v7 + 120);
    *(_DWORD *)(v4 + 124) = *(_DWORD *)(v7 + 124);
    *(_DWORD *)(v4 + 128) = *(_DWORD *)(v7 + 128);
    *(_DWORD *)(v4 + 132) = *(_DWORD *)(v7 + 132);
    if ( *(_QWORD *)(v4 + 144) != 0 )
      { sub_68F3B0(v4); return; }
  }
  return;
}

__int64 __fastcall sub_CB1780(_QWORD *a1)
{
  __int64 v1; // x8
  _QWORD *v2; // x20
  __int64 v4; // x22
  __int64 v5; // x0
  __int64 v6; // x8
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x8
  __int64 v10; // x22
  __int64 v11; // x1

  v2 = a1 + 11;
  v1 = a1[11];
  if ( v1 == 0 || (v4 = *(_QWORD *)(v1 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 36693834, v2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*v2 + 8LL) + 16LL))(*(_QWORD *)(*v2 + 8LL));
    if ( *v2 != 0 )
      v4 = *(_QWORD *)(*v2 + 8LL);
    else
      v4 = 0;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1[19] + 8LL) + 136LL))(*(_QWORD *)(a1[19] + 8LL));
  sub_68F0E0(v4, v5, 0);
  v6 = a1[11];
  if ( v6 == 0 || (v7 = *(_QWORD *)(v6 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 36693834, v2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*v2 + 8LL) + 16LL))(*(_QWORD *)(*v2 + 8LL));
    if ( *v2 != 0 )
      v7 = *(_QWORD *)(*v2 + 8LL);
    else
      v7 = 0;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1[20] + 8LL) + 136LL))(*(_QWORD *)(a1[20] + 8LL));
  sub_68F0E0(v7, v8, 0);
  v9 = a1[11];
  if ( v9 == 0 || (v10 = *(_QWORD *)(v9 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 36693834, v2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*v2 + 8LL) + 16LL))(*(_QWORD *)(*v2 + 8LL));
    if ( *v2 != 0 )
      v10 = *(_QWORD *)(*v2 + 8LL);
    else
      v10 = 0;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1[21] + 8LL) + 136LL))(*(_QWORD *)(a1[21] + 8LL));
  return sub_68F0E0(v10, v11, 0);
}

// N4Onyx8Gameplay8Circuits10Properties7Details40StaticMemberVariablePropertyRegistrationINS1_14ComputeCircuitEN4Gear7Vector3IfEEEE, virtual slot 4
__int64 __fastcall sub_CC0270(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE v7[16]; // [xsp+0h] [xbp-30h] BYREF

  (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a4 + 40LL))(a4, a3, v7);
  (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a1 + 48LL))(a1, a2, v7);
  return 1;
}

// N4Onyx8Gameplay8Circuits29F32CurveValuePublisherCircuitE, virtual slot 4
__int64 __fastcall sub_CC45A0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // w23
  unsigned int v7; // w23
  __int64 v8; // x0
  void (__fastcall ***v9)(_QWORD); // x21
  __int64 v10; // x22
  __int64 v11; // x22
  __int64 result; // x0
  __int64 v13; // [xsp+8h] [xbp-38h] BYREF

  sub_6782A0();
  *(_QWORD *)(a1 + 88) = a1;
  *(_QWORD *)a2 += (*(unsigned int (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a2 + 8) + 48LL))(
                     *(_QWORD *)(a2 + 8),
                     &v13,
                     4);
  if ( (_DWORD)v13 != 0 )
  {
    v6 = 0;
    do
    {
      sub_C953B0(a2, a3, a1 + 80);
      ++v6;
    }
    while ( v6 < (unsigned int)v13 );
  }
  *(_QWORD *)(a1 + 112) = a1;
  *(_QWORD *)a2 += (*(unsigned int (__fastcall **)(_QWORD, __int64 *, __int64))(**(_QWORD **)(a2 + 8) + 48LL))(
                     *(_QWORD *)(a2 + 8),
                     &v13,
                     4);
  if ( (_DWORD)v13 != 0 )
  {
    v7 = 0;
    do
    {
      sub_CC48E0(a2, a3, a1 + 104);
      ++v7;
    }
    while ( v7 < (unsigned int)v13 );
  }
  v13 = 0;
  sub_BA7630(a2, &v13);
  v8 = v13;
  v9 = *(void (__fastcall ****)(_QWORD))(a1 + 128);
  *(_QWORD *)(a1 + 128) = v13;
  if ( v9 != nullptr )
  {
    v10 = qword_1926BD8;
    v11 = *(_QWORD *)(v10 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v9) + 880);
    (**v9)((_QWORD)(v9));
    (*(void (__fastcall **)(__int64, void (__fastcall ***)(_QWORD)))(*(_QWORD *)v11 + 48LL))(v11, v9);
    v8 = *(_QWORD *)(a1 + 128);
  }
  if ( v8 != 0 )
    *(float *)(a1 + 136) = (*(float (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a2 + 8) + 48LL))(
             *(_QWORD *)(a2 + 8),
             a1 + 140,
             1);
  *(_QWORD *)a2 += (unsigned int)result;
  return result;
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

bool __fastcall sub_D175F0(__int64 *a1)
{/*nothrow:((__int64)sub_FA4960)*/
  __int64 v1; // x20
  __int64 (__fastcall **v3)(__int64, __int64, __int64); // x8
  int v4; // w0
  __int64 v5; // x8
  char v6; // w19

  v1 = qword_1939A88;
  if ( qword_1939A88 == 0 )
  {
    v1 = sub_722190(176, 8);
    sub_D147F0(v1);
    qword_1939A88 = v1;
  }
  nn__os__LockMutex(*(_QWORD *)(v1 + 136));
  if ( (a1[17] & 1) != 0 )
  {
  { struct G0_ { __typeof__(v1)& v1; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_, t2_; t1_ = (__int64)(*(__int64*)(((char*)((__int64)v1) + 136))); t2_ = (__int64)((__int64)sub_FA4960(t1_)); } } } g0_ = { v1, 0 };
    v3 = (__int64 (__fastcall **)(__int64, __int64, __int64))a1[16];
    *((_BYTE *)a1 + 1232) = 0;
    v4 = (*v3)(a1[7], a1[8], (__int64)a1 + 140);
    *((_DWORD *)a1 + 311) = 1;
    v5 = *a1;
    *((_DWORD *)a1 + 310) = v4;
    (*(void (__fastcall **)(__int64 *))(v5 + 64))(a1);
  g0_.ok = 1; }
    *((_BYTE *)a1 + 136) &= ~1u;
  }
  v6 = *((_BYTE *)a1 + 1232);
  nn__os__UnlockMutex(*(_QWORD *)(v1 + 136));
  return (v6 & 0x20) != 0;
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

void sub_D22FA0()
{
  __int64 v0; // x19
  __int64 v1; // x19
  __int64 v2; // x19
  __int64 v3; // x19

  v0 = qword_1939828;
  if ( qword_1939828 != 0 )
  {
    (**(void (__fastcall ***)(__int64))qword_1939828)(qword_1939828);
    if ( dword_191FB00 != 0 && qword_191FAF8 != 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(qword_191FAF8, v0);
  }
  v1 = qword_1939808;
  if ( qword_1939808 != 0 )
  {
    (**(void (__fastcall ***)(__int64))qword_1939808)(qword_1939808);
    if ( dword_191FB00 != 0 && qword_191FAF8 != 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(qword_191FAF8, v1);
  }
  v2 = qword_1939820;
  if ( qword_1939820 != 0 )
  {
    (**(void (__fastcall ***)(__int64))qword_1939820)(qword_1939820);
    if ( dword_191FB00 != 0 && qword_191FAF8 != 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(qword_191FAF8, v2);
    qword_1939820 = 0;
  }
  v3 = qword_1939818;
  if ( qword_1939818 != 0 )
  {
    (**(void (__fastcall ***)(__int64))qword_1939818)(qword_1939818);
    if ( dword_191FB00 != 0 && qword_191FAF8 != 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(qword_191FAF8, v3);
    qword_1939818 = 0;
  }
}

int __fastcall sub_D2F010(__int64 a1)
{/*nothrow:((__int64)sub_FA4960)*/
  __int64 v1; // x20

  v1 = qword_1939A88;
  if ( qword_1939A88 == 0 )
  {
    v1 = sub_722190(176, 8);
    sub_D147F0(v1);
    qword_1939A88 = v1;
  }
  nn__os__LockMutex(*(_QWORD *)(v1 + 136));
  { struct G0_ { __typeof__(v1)& v1; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_, t2_; t1_ = (__int64)(*(__int64*)(((char*)((__int64)v1) + 136))); t2_ = (__int64)((__int64)sub_FA4960(t1_)); } } } g0_ = { v1, 0 };
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1) != 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  }
  g0_.ok = 1; }
  return nn__os__UnlockMutex(*(_QWORD *)(v1 + 136));
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

void __noreturn sub_D44170()
{/*nothrow:((__int64)sub_FA4B30)*/
  char *exception; // x19

  exception = (char *)__cxa_allocate_exception(0x10u);
  { struct G0_ { __typeof__(exception)& exception; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_FA4B30((__int64)exception)); } } } g0_ = { exception, 0 };
  sub_D441C0(exception);
  g0_.ok = 1; }
  __cxa_throw(exception, (type_info *)((__int64*)_ZTISt12length_error), (void (*)(void *))((__int64*)_ZNSt12length_errorD1Ev));
}

__int64 __fastcall sub_D54040(unsigned int a1)
{
  __int64 v1; // x20
  unsigned int *v3; // x8
  unsigned int v4; // w9
  unsigned int v5; // w10
  __int64 v6; // x20
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x1

  v1 = qword_1939B30;
  if ( qword_1939B30 == 0 )
  {
    v1 = sub_722190(904, 8);
    sub_D28D50();
    qword_1939B30 = v1;
  }
  v3 = (unsigned int *)(v1 + 872);
LABEL_5:
  v4 = *v3;
  { __typeof__(*(v3)) e_ = (v4); if ( !__atomic_compare_exchange_n(v3, &e_, a1, 0, 5, 5) ) goto LABEL_5; v5 = e_; }
  if ( qword_19397F0 == 0 )
  {
    v6 = sub_722190(488, 8);
    sub_CF6830(v6, v7);
    qword_19397F0 = v6;
  }
  nn__os__LockMutex(qword_19397C8);
  v8 = qword_19397F0;
  if ( qword_19397F0 == 0 )
  {
    v8 = sub_722190(488, 8);
    sub_CF6830(v8, v9);
    qword_19397F0 = v8;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v8 + 472) + 320LL))(*(_QWORD *)(v8 + 472), a1);
  return nn__os__UnlockMutex(qword_19397C8);
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

__int64 __fastcall sub_D68820(__int64 *a1, __int64 a2, int a3, int a4, __int64 a5)
{/*nothrow:((__int64)sub_D31160)*/
  __int64 v10; // x20
  _BYTE v12[16]; // [xsp+0h] [xbp-50h] BYREF

  nn__os__LockMutex(qword_19397C8);
  sub_D69810((__int64)v12, a1);
  { struct G0_ { __typeof__(v12)& v12; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_D31160(((__int64)((char*)&v12 + 0)))); } } } g0_ = { v12, 0 };
  v10 = sub_D78A50((__int64)v12, a2, a3, a4);
  g0_.ok = 1; }
  sub_D31160(v12);
  if ( v10 == 0 )
    goto LABEL_4;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v10 + 168LL))(v10, a2, a5) == 0 )
  {
    sub_CF8C60(v10);
LABEL_4:
    v10 = -1;
  }
  nn__os__UnlockMutex(qword_19397C8);
  return v10;
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

void __fastcall sub_DA7810(_QWORD *result)
{
  __int64 v1; // x20
  _QWORD *v2; // x19
  __int64 (__fastcall ***v3)(_QWORD); // x20
  int v4; // w8
  __int64 v5; // x19
  __int64 v6; // x19
  __int64 v7; // x19

  v1 = qword_1945E40;
  v2 = result;
  if ( qword_1945E40 != 0 )
  {
    sub_DABAD0((_QWORD *)qword_1945E40);
    if ( dword_191FB00 != 0 )
    {
      result = (_QWORD *)qword_191FAF8;
      if ( qword_191FAF8 != 0 )
        result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(
                             qword_191FAF8,
                             v1);
    }
    qword_1945E40 = 0;
  }
  if ( *((_DWORD *)v2 + 290) <= 1u )
  {
    v3 = (__int64 (__fastcall ***)(_QWORD))v2[148];
    if ( v3 != nullptr )
    {
      result = (_QWORD *)(**v3)(v2[148]);
      if ( dword_191FB00 != 0 )
      {
        result = (_QWORD *)qword_191FAF8;
        if ( qword_191FAF8 != 0 )
          result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(_QWORD)))(*(_QWORD *)qword_191FAF8
                                                                                                  + 48LL))(
                               qword_191FAF8,
                               v3);
      }
      v4 = *((_DWORD *)v2 + 290) - 1;
      v2[148] = 0;
      *((_DWORD *)v2 + 290) = v4;
      v5 = qword_1939B08;
      if ( qword_1939B08 != 0 )
      {
        result = (_QWORD *)(**(__int64 (__fastcall ***)(__int64))qword_1939B08)(qword_1939B08);
        if ( dword_191FB00 != 0 )
        {
          result = (_QWORD *)qword_191FAF8;
          if ( qword_191FAF8 != 0 )
            result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(
                                 qword_191FAF8,
                                 v5);
        }
      }
      v6 = qword_1939B00;
      if ( qword_1939B00 != 0 )
      {
        result = (_QWORD *)(**(__int64 (__fastcall ***)(__int64))qword_1939B00)(qword_1939B00);
        if ( dword_191FB00 != 0 )
        {
          result = (_QWORD *)qword_191FAF8;
          if ( qword_191FAF8 != 0 )
            result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(
                                 qword_191FAF8,
                                 v6);
        }
      }
      v7 = qword_1939AF8;
      if ( qword_1939AF8 != 0 )
      {
        result = (_QWORD *)(**(__int64 (__fastcall ***)(__int64))qword_1939AF8)(qword_1939AF8);
        if ( dword_191FB00 != 0 )
        {
          result = (_QWORD *)qword_191FAF8;
          if ( qword_191FAF8 != 0 )
            { (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_191FAF8 + 48LL))(
                               qword_191FAF8,
                               v7); return; }
        }
      }
    }
  }
  return;
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

// N2EE16ButtonsInterfaceE, virtual slot 0
__int64 __fastcall sub_DD82B0(__int64 a1)
{
  void *v2; // x0
  void *v3; // x0
  unsigned int **v4; // x21
  __int64 v5; // x8
  unsigned int **v6; // x22
  int v7; // w8
  unsigned int *v8; // x0
  unsigned int v9; // w8
  unsigned int v10; // w8
  unsigned int *v11; // x0
  unsigned int v12; // w8
  unsigned int v13; // w8
  _QWORD *v14; // x21
  _QWORD *v15; // x20
  unsigned int *v16; // x0
  unsigned int *v17; // x8
  unsigned int v18; // w9
  unsigned int v19; // w9
  __int64 result; // x0
  unsigned int *v21; // x8
  unsigned int v22; // w9
  unsigned int v23; // w9

  *(_QWORD *)a1 = ((__int64)off_18DCDF8);
  v2 = *(void **)(a1 + 112);
  if ( v2 != nullptr )
    free(v2);
  v3 = *(void **)(a1 + 96);
  if ( v3 != nullptr )
    free(v3);
  v4 = *(unsigned int ***)(a1 + 80);
  if ( v4 != nullptr )
  {
    v5 = (__int64)*(v4 - 1);
    if ( v5 != 0 )
    {
      v6 = &v4[4 * v5];
      do
      {
        v7 = *((_DWORD *)v6 - 4);
        v6 -= 4;
        if ( v7 == 2 )
        {
          v8 = *v6;
          v10 = __atomic_sub_fetch(v8, 1, 0);
          if ( v10 == 0 )
            free(v8);
        }
      }
      while ( v6 != v4 );
    }
    free(v4 - 1);
  }
  if ( *(_DWORD *)(a1 + 72) == 2 )
  {
    v11 = *(unsigned int **)(a1 + 56);
    v13 = __atomic_sub_fetch(v11, 1, 0);
    if ( v13 == 0 )
      free(v11);
  }
  v14 = *(_QWORD **)(a1 + 24);
  *(_QWORD *)(a1 + 24) = 0;
  while ( v14 != nullptr )
  {
    v15 = v14;
    v14 = (_QWORD *)*v14;
    v16 = (unsigned int *)v15[1];
    if ( v16 != nullptr )
    {
      v17 = v16 + 2;
      v19 = __atomic_sub_fetch(v17, 1, 0);
      if ( v19 == 0 )
        (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v16 + 8LL))(v16);
    }
    free(v15);
  }
  result = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 40) = 0;
  if ( result != 0 )
  {
    v21 = (unsigned int *)(result + 8);
    v23 = __atomic_sub_fetch(v21, 1, 0);
    if ( v23 == 0 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

// N2EE22ForceFeedbackInterfaceE, virtual slot 0
__int64 __fastcall sub_DD9520(__int64 a1)
{
  void *v2; // x0
  unsigned int **v3; // x21
  __int64 v4; // x8
  unsigned int **v5; // x22
  int v6; // w8
  unsigned int *v7; // x0
  unsigned int v8; // w8
  unsigned int v9; // w8
  unsigned int *v10; // x0
  unsigned int v11; // w8
  unsigned int v12; // w8
  _QWORD *v13; // x21
  _QWORD *v14; // x20
  unsigned int *v15; // x0
  unsigned int *v16; // x8
  unsigned int v17; // w9
  unsigned int v18; // w9
  __int64 result; // x0
  unsigned int *v20; // x8
  unsigned int v21; // w9
  unsigned int v22; // w9

  *(_QWORD *)a1 = ((__int64)off_18DCF70);
  v2 = *(void **)(a1 + 96);
  if ( v2 != nullptr )
    free(v2);
  v3 = *(unsigned int ***)(a1 + 80);
  if ( v3 != nullptr )
  {
    v4 = (__int64)*(v3 - 1);
    if ( v4 != 0 )
    {
      v5 = &v3[5 * v4];
      do
      {
        v6 = *((_DWORD *)v5 - 6);
        v5 -= 5;
        if ( v6 == 2 )
        {
          v7 = *v5;
          v9 = __atomic_sub_fetch(v7, 1, 0);
          if ( v9 == 0 )
            free(v7);
        }
      }
      while ( v5 != v3 );
    }
    free(v3 - 1);
  }
  if ( *(_DWORD *)(a1 + 72) == 2 )
  {
    v10 = *(unsigned int **)(a1 + 56);
    v12 = __atomic_sub_fetch(v10, 1, 0);
    if ( v12 == 0 )
      free(v10);
  }
  v13 = *(_QWORD **)(a1 + 24);
  *(_QWORD *)(a1 + 24) = 0;
  while ( v13 != nullptr )
  {
    v14 = v13;
    v13 = (_QWORD *)*v13;
    v15 = (unsigned int *)v14[1];
    if ( v15 != nullptr )
    {
      v16 = v15 + 2;
      v18 = __atomic_sub_fetch(v16, 1, 0);
      if ( v18 == 0 )
        (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v15 + 8LL))(v15);
    }
    free(v14);
  }
  result = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 40) = 0;
  if ( result != 0 )
  {
    v20 = (unsigned int *)(result + 8);
    v22 = __atomic_sub_fetch(v20, 1, 0);
    if ( v22 == 0 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
}

// N2EE16PointerInterfaceE, virtual slot 0
__int64 __fastcall sub_DDBE80(__int64 a1)
{
  void *v2; // x0
  unsigned int **v3; // x21
  __int64 v4; // x8
  unsigned int **v5; // x22
  int v6; // w8
  unsigned int *v7; // x0
  unsigned int v8; // w8
  unsigned int v9; // w8
  unsigned int *v10; // x0
  unsigned int v11; // w8
  unsigned int v12; // w8
  _QWORD *v13; // x21
  _QWORD *v14; // x20
  unsigned int *v15; // x0
  unsigned int *v16; // x8
  unsigned int v17; // w9
  unsigned int v18; // w9
  __int64 result; // x0
  unsigned int *v20; // x8
  unsigned int v21; // w9
  unsigned int v22; // w9

  *(_QWORD *)a1 = ((__int64)off_18DD220);
  v2 = *(void **)(a1 + 96);
  if ( v2 != nullptr )
    free(v2);
  v3 = *(unsigned int ***)(a1 + 80);
  if ( v3 != nullptr )
  {
    v4 = (__int64)*(v3 - 1);
    if ( v4 != 0 )
    {
      v5 = &v3[3 * v4];
      do
      {
        v6 = *((_DWORD *)v5 - 2);
        v5 -= 3;
        if ( v6 == 2 )
        {
          v7 = *v5;
          v9 = __atomic_sub_fetch(v7, 1, 0);
          if ( v9 == 0 )
            free(v7);
        }
      }
      while ( v5 != v3 );
    }
    free(v3 - 1);
  }
  if ( *(_DWORD *)(a1 + 72) == 2 )
  {
    v10 = *(unsigned int **)(a1 + 56);
    v12 = __atomic_sub_fetch(v10, 1, 0);
    if ( v12 == 0 )
      free(v10);
  }
  v13 = *(_QWORD **)(a1 + 24);
  *(_QWORD *)(a1 + 24) = 0;
  while ( v13 != nullptr )
  {
    v14 = v13;
    v13 = (_QWORD *)*v13;
    v15 = (unsigned int *)v14[1];
    if ( v15 != nullptr )
    {
      v16 = v15 + 2;
      v18 = __atomic_sub_fetch(v16, 1, 0);
      if ( v18 == 0 )
        (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v15 + 8LL))(v15);
    }
    free(v14);
  }
  result = *(_QWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 40) = 0;
  if ( result != 0 )
  {
    v20 = (unsigned int *)(result + 8);
    v22 = __atomic_sub_fetch(v20, 1, 0);
    if ( v22 == 0 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  return result;
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
// N2EE16LocalUserManagerE, virtual slot 16
int __fastcall sub_DF7370(__int64 a1, _QWORD *a2, _QWORD *a3)
{/*nothrow:((__int64)sub_FA4960)*/
  __int64 v3; // x19
  unsigned __int64 v7; // x23
  unsigned int v8; // w24
  __int64 v9; // x0
  _QWORD *v10; // x0
  unsigned int v11; // w20
  __int64 v12; // x8
  unsigned int *v13; // x8
  unsigned int v14; // w9

  v3 = a1 + 48;
  struct G0_ { void* p; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) sub_FA4960(p); } } g0_ = { (void*)v3, 0 };
  nn__os__LockMutex(a1 + 48);
  if ( *(_QWORD *)(a1 + 136) != 0 )
  {
    v7 = 0;
    v8 = 1;
    while ( 1 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v7);
      v10 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 56LL))(v9);
      if ( *v10 == *a2 && v10[1] == a2[1] )
        break;
      v7 = v8++;
      if ( *(_QWORD *)(a1 + 136) <= v7 )
        goto LABEL_6;
    }
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v7);
    *a3 = v12;
    v13 = (unsigned int *)(v12 + 8);
    v14 = __atomic_fetch_add(v13, 1, 0);
    v11 = 0;
  }
  else
  {
LABEL_6:
    v11 = 0x80000003;
  }
  nn__os__UnlockMutex(v3);
  g0_.ok = 1;
  return v11;
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
// N2EE9NvnDeviceE, virtual slot 28
int __fastcall sub_E960D0(__int64 a1, __int64 a2, _QWORD *a3)
{/*nothrow:((__int64)sub_631EC0)*/
  _QWORD *v5; // x20
  unsigned int *v6; // x8
  unsigned int v7; // w9

  v5 = (_QWORD *)malloc(0x1618u);
  struct G0_ { void* p; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) sub_631EC0(p); } } g0_ = { (void*)v5, 0 };
  sub_EA28A0((__int64)v5, a1, *(_QWORD *)(a1 + 13424));
  g0_.ok = 1;
  *v5 = ((__int64)off_18E7CA0);
  v5[706] = qword_195B1E8;
  v6 = (unsigned int *)(v5 + 1);
  *a3 = (_QWORD)(v5);
  v7 = __atomic_fetch_add(v6, 1, 0);
  return 0;
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

_QWORD *__fastcall sub_ED8C00(__int64 a1, __int64 *a2)
{
  __int64 v2; // x20
  __int64 v4; // x8
  int v5; // w9
  int v6; // w10
  int v7; // w10
  __int64 *v8; // x8
  __int64 v9; // x0
  __int64 v10; // x2
  __int64 v11; // x0
  __int64 v12; // x8
  _QWORD *v13; // x19
  _QWORD v15[2]; // [xsp+0h] [xbp-30h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 5640) + 64LL);
  v15[0] = 2;
  sub_F35410((__int64)v15, v2, a2);
  v4 = v15[0];
  v5 = v15[0] & 7;
  LOBYTE(v6) = v15[0];
  v15[1] = v2;
  if ( v5 == 7 )
  {
    v6 = *(_DWORD *)((char *)((char *)0x8) + (v15[0] & 0xFFFFFFFFFFFFFFF8LL));
    v5 = v6 & 7;
  }
  v7 = v6 & 0x1F;
  if ( v5 == 2 )
    v5 = v7;
  { struct G0_ { __typeof__(v15)& v15; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_F34D70(((__int64)((char*)&v15 + 0)))); } } } g0_ = { v15, 0 };
  if ( v5 == 3 )
  {
    if ( (~LOBYTE(v15[0]) & 7) == 0 )
      v4 = *(_QWORD *)((char *)((char *)0x8) + (v15[0] & 0xFFFFFFFFFFFFFFF8LL));
    v8 = (__int64 *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v8 == nullptr
      || (v9 = v8[1]) == 0
      && ((v10 = v8[5]) == 0
       || (v11 = *v8, *v8 == 0)
       || (v12 = *(_QWORD *)(v11 + 152)) == 0
       || (v9 = sub_ECDC10(v11, *(_QWORD *)(v12 + 112) + 272LL, v10, 2)) == 0)
      || (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 48LL))(v9) == 0 )
    {
      sub_F34D70(v15);
      v15[0] = 10;
    }
  }
  if ( (unsigned int)sub_ECB440(a1) != 0 )
  {
    v13 = (_QWORD *)(*(_QWORD *)(a1 + 3888) + 8LL * *(int *)(a1 + 3896) - 8);
    if ( v15 != v13 )
    {
      sub_F34D70(v13);
      *v13 = v15[0];
      v15[0] = 2;
    }
  }
  g0_.ok = 1; }
  { __auto_type r_ = [&]() __attribute__((always_inline)) noexcept { return sub_F34D70(v15); }(); return (_QWORD *)(r_); }
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

bool __fastcall sub_EFA820(__int64 a1, __int64 a2, double *a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // x24
  double v11; // d0
  __int64 v12; // x8
  unsigned __int64 v13; // x0
  __int64 v14; // x19
  _QWORD v16[2]; // [xsp+0h] [xbp-50h] BYREF
  { struct G0_ { __typeof__(v16)& v16; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_F34D70(((__int64)((char*)&v16 + 0)))); } } } g0_ = { v16, 0 };

  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 5640LL) + 64LL);
  v16[0] = 2;
  v16[1] = v5;
  sub_F34D70(v16);
  v11 = *a3;
  if ( *a3 >= 0.0 && v11 <= 268435455.0 && v11 == (double)(int)v11 )
  {
    v12 = 8 * (int)v11;
LABEL_7:
    v16[0] = v12;
    goto LABEL_8;
  }
  v13 = (unsigned __int64)sub_F9FB50(*(_QWORD *)(v5 + 48), *(unsigned __int64 **)(v5 + 80), 8u, 0LL, 0LL);
  if ( v13 != 0 )
  {
    *(double *)v13 = *a3;
    v12 = v13 | 1;
    goto LABEL_7;
  }
LABEL_8:
  v14 = sub_EF3C60(a1, a2, v16, a4, a5, 1);
  [&]() __attribute__((always_inline)) noexcept { sub_F34D70(v16); }();
  { __auto_type r_ = v14 != 0; g0_.ok = 1; return r_; }
  g0_.ok = 1; }
}

_QWORD *__fastcall sub_EFA930(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v4; // x8
  __int64 v9; // x8
  _QWORD v11[2]; // [xsp+0h] [xbp-40h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 5640LL) + 64LL);
  v11[0] = 2;
  v11[1] = v4;
  { struct G0_ { __typeof__(v11)& v11; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_F34D70(((__int64)((char*)&v11 + 0)))); } } } g0_ = { v11, 0 };
  sub_F34D70(v11);
  v9 = 50;
  if ( a3 == 0 )
    v9 = 18;
  v11[0] = v9;
  sub_EF3C60(a1, a2, v11, 0, a4, 1);
  g0_.ok = 1; }
  { __auto_type r_ = [&]() __attribute__((always_inline)) noexcept { return sub_F34D70(v11); }(); return (_QWORD *)(r_); }
}
void __fastcall sub_EFF8A0(_QWORD *result)
{
  _QWORD *v1; // x1
  __int64 v2; // x8
  _QWORD *v3; // x19
  unsigned __int64 v4; // x0
  unsigned __int64 v5; // x20
  __int64 v6[2]; // [xsp+0h] [xbp-30h] BYREF

  if ( result[4] == 0 )
  {
    v1 = (_QWORD *)result[8];
    v2 = *(_QWORD *)(v1[705] + 64LL);
    v3 = result;
    v6[0] = 2;
  struct G0_ { void* p; __attribute__((always_inline)) ~G0_() { sub_F34D70(p); } } g0_ = { (void*)&v6 };
    v6[1] = v2;
    v4 = sub_F35090(v6, v1, 0, 0);
    v5 = v4;
    v3[4] = v4;
    if ( v4 != 0 && (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v4 + 48LL))(v4) == 0 )
      ++*(_DWORD *)(v5 + 16);
    return;
  }
  return;
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

int __fastcall sub_F14200(__int64 a1)
{
  int v1; // w23
  int v2; // w8
  __int64 v4; // x19
  __int64 v5; // x8
  unsigned int v6; // w21
  int i; // w22
  short v9[8]; // [xsp+0h] [xbp-40h] BYREF

  if ( *(int *)(a1 + 1260) <= *(int *)(a1 + 712) )
    v1 = *(int *)(a1 + 1260);
  else
    v1 = *(int *)(a1 + 712);
  if ( v1 < 1 )
  {
    return 0;
  }
  else
  {
    v2 = *(int *)(a1 + 956);
    v4 = a1 + 904;
    *(int *)(a1 + 956) = v2 + 1;
    if ( v2 == 0 )
    {
      v5 = *(_QWORD *)(a1 + 920);
      if ( v5 != 0 && ((*(_BYTE *)(v5 + 557) & 1) != 0 || *(_BYTE *)(v5 + 1312) != 0) || *(int *)(a1 + 964) != 0 )
      {
        *(int *)(a1 + 952) = 2;
      }
      else
      {
        *(int *)(a1 + 952) = 1;
        ({ __auto_type h0_ = a1 + 904; (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 904) + 32LL))(h0_, 0); });
      }
    }
    v6 = 0;
    for ( i = 0; i < v1; ++i )
    {
  { struct G0_ { __typeof__(v4)& v4; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_, t2_, t3_; t1_ = (__int64)(*(__int64*)(((char*)((__int64)v4) + 0))); t2_ = (__int64)(*(__int64*)(((char*)(t1_) + 40))); t3_ = (__int64)((__int64)((__int64(*)(...))(t2_))((__int64)v4)); } } } g0_ = { v4, 0 };
      sub_F11DC0(a1, (unsigned int)i, v9);
  g0_.ok = 1; }
      v6 += v9[3];
    }
    [&]() __attribute__((always_inline)) noexcept { (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4); }();
  }
  return v6;
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

void sub_F95420(__int64 result, __int64 a2)
{
  __int64 v2; // x2
  _QWORD *v3; // x20
  __int64 v4; // x19
  __int64 *v5; // x22
  char i; // w8
  __int64 v7; // x21
  int v8; // w23
  __int64 v9; // x8
  unsigned int **v10; // x21
  unsigned int *v11; // t1
  __int64 *v12; // x21
  __int64 v13; // t1

  *(_QWORD *)result = a2;
  *(_BYTE *)(result + 8) = *(_BYTE *)(a2 + 232);
  v2 = *(_QWORD *)(a2 + 256);
  v3 = (_QWORD *)a2;
  v4 = result;
  *(_BYTE *)(a2 + 232) = 1;
  if ( v2 != 0 )
  {
    v5 = *(__int64 **)(a2 + 264);
    for ( i = 1; ; i = *((_BYTE *)v3 + 232) )
    {
      v7 = *v5;
      v8 = *((_DWORD *)v5 + 2);
      if ( i != 0 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*v3 + 168LL) + 40LL))(
                   *(_QWORD *)(*v3 + 168LL),
                   *v5);
        if ( (result & 0x80000000) == 0 )
          *(_DWORD *)(*v3 + 256LL) -= v8;
      }
      else
      {
        sub_F955C0(v3 + 30, v2 + 1, v2);
        v9 = v3[33] + 16LL * v3[32];
        *(_QWORD *)v9 = v7;
        *(_DWORD *)(v9 + 8) = v8;
        ++v3[32];
      }
      v3 = *(_QWORD **)v4;
      v2 = *(_QWORD *)(*(_QWORD *)v4 + 256LL);
      v5 += 2;
      if ( v5 == (__int64 *)(*(_QWORD *)(*(_QWORD *)v4 + 264LL) + 16 * v2) )
        break;
    }
  }
  if ( v3[37] != 0 )
  {
    v10 = (unsigned int **)v3[39];
    do
    {
      v11 = *v10++;
      sub_F95810((unsigned int *)v3, v11);
      v3 = *(_QWORD **)v4;
    }
    while ( v10 != (unsigned int **)(*(_QWORD *)(*(_QWORD *)v4 + 312LL) + 8LL * *(_QWORD *)(*(_QWORD *)v4 + 296LL)) );
  }
  if ( v3[42] != 0 )
  {
    v12 = (__int64 *)v3[44];
    do
    {
      v13 = *v12++;
      sub_F95960(v3, v13);
      v3 = *(_QWORD **)v4;
    }
    while ( v12 != (__int64 *)(*(_QWORD *)(*(_QWORD *)v4 + 352LL) + 8LL * *(_QWORD *)(*(_QWORD *)v4 + 336LL)) );
  }
  v3[32] = 0;
  v3[37] = 0;
  v3[42] = 0;
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
