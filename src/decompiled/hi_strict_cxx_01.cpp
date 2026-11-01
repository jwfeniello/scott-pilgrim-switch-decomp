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
__attribute__((malloc)) void* _Znwm(size_t);
__int64 nn__audio__ParseAdpcmHeader(...) noexcept;
__int64 nn__mem__NumberLineAllocator__Finalize(...) noexcept;
__int64 nn__os__FinalizeMutex(...) noexcept;
__int64 nn__os__LockMutex(...) noexcept;
__int64 nn__os__UnlockMutex(...) noexcept;
extern void* off_1846110[];
extern void* off_18BBCA8[];
extern void* off_18BBD50[];
extern void* off_18BC0C0[];
extern void* off_18BC190[];
extern void* off_18BC238[];
extern void* off_18BC2E0[];
extern void* off_18BC408[];
extern void* off_18E6478[];
extern void* off_18E7CA0[];
extern void* off_18E86B0[];
extern void* off_18E8958[];
extern void* off_18E9950[];
extern void* off_18E9970[];
extern void* off_18E99C0[];
extern void* off_18E9A70[];
extern void* off_18E9B40[];
extern void* off_18E9B80[];
extern void* off_18EA678[];
extern void* off_18EA788[];
extern void* off_18EA8F0[];
extern void* off_18EA938[];
extern void* off_18EA9D0[];
extern void* off_18EAC80[];
extern void* off_18EAD30[];
extern void* off_191A900[];
extern void* off_191B560[];
extern __int64 qword_191B6C0;
extern __int64 qword_1926BD8;
extern __int64 qword_1939B38;
extern __int64 qword_194AF78;
extern __int64 qword_195B1E8;
__int64 sub_631EC0(...) noexcept;
__int64 sub_7FD450(...);
__int64 sub_837F70(...);
unsigned char sub_A82B30(...);
__int64 sub_D29AF0(...);
__int64 sub_DF74B0(...) noexcept;
__int64 sub_EA28A0(...);
__int64 sub_EBAE90(...);
__int64 sub_EC1810(...);
__int64 sub_EC21A0(...);
__int64 sub_EC2800(...);
__int64 sub_EC8DD0(...);
__int64 sub_EC9FD0(...) noexcept;
__int64 sub_ECB440(...);
__int64 sub_ECDC10(...);
__int64 sub_EDC6B0(...);
__int64 sub_EEA5A0(...);
__int64 sub_EEAD80(...);
__int64 sub_EEB410(...);
__int64 sub_EF3C60(...);
__int64 sub_EF9DF0(...);
__int64 sub_EFB6C0(...);
__int64 sub_F061F0(...);
__int64 sub_F11880(...) noexcept;
__int64 sub_F11DC0(...);
__int64 sub_F25830(...);
__int64 sub_F27F00(...) noexcept;
__int64 sub_F28890(...);
__int64 sub_F2EA40(...);
__int64 sub_F322F0(...);
__int64 sub_F34B70(...) noexcept;
__int64 sub_F34D70(...);
__int64 sub_F35090(...);
__int64 sub_F35410(...);
__int64 sub_F35B60(...);
__int64 sub_F701B0(...);
__int64 sub_F70680(...);
__int64 sub_F72760(...);
__int64 sub_F815A0(...);
__int64 sub_F951C0(...);
__int64 sub_F955C0(...);
__int64 sub_F95810(...);
__int64 sub_F95960(...);
__int64 sub_F9FB50(...);
__int64 sub_FA0140(...);
__int64 sub_FA3B40(...) noexcept;
__int64 sub_FA4960(...) noexcept;
extern char unk_18E9B80;

// NSt3__110__function6__funcIZN4Onyx7Profile25CheckAndHandleUbiservicesEPN4SPTG9FlashMenuENS_8functionIFvNS2_21ProfileCallbackResultEEEEE3$_6NS_9allocatorISB_EEFviEEE, virtual slot 2
_QWORD *__fastcall sub_6EEF20(_QWORD *a1)
{/*nothrow:((__int64)sub_FA3B40)*/
  _QWORD *v2; // x0
  _QWORD *v3; // x20
  _QWORD *v4; // x0

  v2 = (_QWORD *)_Znwm(0x60u);
  *v2 = ((__int64)off_1846110);
  v2[2] = a1[2];
  v3 = v2;
  v4 = (_QWORD *)a1[8];
  if ( v4 != nullptr )
  {
  { struct G0_ { __typeof__(v3)& v3; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_FA3B40((__int64)v3)); } } } g0_ = { v3, 0 };
    if ( a1 + 4 == v4 )
    {
      v3[8] = (_QWORD)(v3 + 4);
      (*(void (__fastcall **)(_QWORD *, __typeof__(v3 + 4)))(*v4 + 24LL))(v4, v3 + 4);
    }
    else
    {
      v3[8] = (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
    }
  g0_.ok = 1; }
  }
  else
  {
    v3[8] = 0;
  }
  v3[10] = a1[10];
  return v3;
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
// N4SPTG9HowToPlay15HowToPlayBridgeE, virtual slot 5
__int64 __fastcall sub_858220(char *a1, char *a2)
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
  sub_7FD450(a1, a2, 1049237, 4, 1, 1);
  sub_7FD450(a1, a2, 1049241, 5, 1, 1);
  sub_7FD450(a1, a2, 1049243, 7, 1, 1);
  sub_7FD450(a1, a2, 1049239, 6, 1, 1);
  return 0;
}
// NSt3__110__function6__funcIZZZZN5EE_US13StormInstance13CreateSessionEN5storm4echo17SessionDescriptorENS_8functionIFvNS4_7EResultEEEEENK3$_0clEbjENKUlvE0_clEvENKUlRNS4_13SimpleAsyncOpEE0_clESE_EUlvE_NS_9allocatorISG_EEFvvEEE, virtual slot 2
_QWORD *__fastcall sub_C4B250(_QWORD *a1)
{/*nothrow:((__int64)sub_FA3B40)*/
  _QWORD *v2; // x0
  _QWORD *v3; // x20
  _QWORD *v4; // x0

  v2 = (_QWORD *)_Znwm(0x60u);
  *v2 = ((__int64)off_18BBCA8);
  v2[2] = a1[2];
  v3 = v2;
  v4 = (_QWORD *)a1[8];
  if ( v4 != nullptr )
  {
  { struct G0_ { __typeof__(v3)& v3; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_FA3B40((__int64)v3)); } } } g0_ = { v3, 0 };
    if ( a1 + 4 == v4 )
    {
      v3[8] = (_QWORD)(v3 + 4);
      (*(void (__fastcall **)(_QWORD *, __typeof__(v3 + 4)))(*v4 + 24LL))(v4, v3 + 4);
    }
    else
    {
      v3[8] = (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
    }
  g0_.ok = 1; }
  }
  else
  {
    v3[8] = 0;
  }
  v3[10] = a1[10];
  return v3;
}
// NSt3__110__function6__funcIZZZZN5EE_US13StormInstance13CreateSessionEN5storm4echo17SessionDescriptorENS_8functionIFvNS4_7EResultEEEEENK3$_0clEbjENKUlvE0_clEvENKUlRNS4_13SimpleAsyncOpEE_clESE_EUlvE_NS_9allocatorISG_EEFvvEEE, virtual slot 2
_QWORD *__fastcall sub_C4B930(_QWORD *a1)
{/*nothrow:((__int64)sub_FA3B40)*/
  _QWORD *v2; // x0
  _QWORD *v3; // x20
  _QWORD *v4; // x0

  v2 = (_QWORD *)_Znwm(0x60u);
  *v2 = ((__int64)off_18BBD50);
  v2[2] = a1[2];
  v3 = v2;
  v4 = (_QWORD *)a1[8];
  if ( v4 != nullptr )
  {
  { struct G0_ { __typeof__(v3)& v3; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_FA3B40((__int64)v3)); } } } g0_ = { v3, 0 };
    if ( a1 + 4 == v4 )
    {
      v3[8] = (_QWORD)(v3 + 4);
      (*(void (__fastcall **)(_QWORD *, __typeof__(v3 + 4)))(*v4 + 24LL))(v4, v3 + 4);
    }
    else
    {
      v3[8] = (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
    }
  g0_.ok = 1; }
  }
  else
  {
    v3[8] = 0;
  }
  v3[10] = a1[10];
  return v3;
}
// NSt3__110__function6__funcIZZZN5EE_US13StormInstance11JoinSessionEPN5storm26ISimpleMatchmakingStrategy11SessionInfoEbNS_8functionIFvvEEENS8_IFvNS4_7EResultEEEEENK3$_1clEbjENKUlvE_clEvEUlvE_NS_9allocatorISG_EES9_EE, virtual slot 2
_QWORD *__fastcall sub_C4D5E0(_QWORD *a1)
{/*nothrow:((__int64)sub_FA3B40)*/
  _QWORD *v2; // x0
  _QWORD *v3; // x20
  _QWORD *v4; // x0

  v2 = (_QWORD *)_Znwm(0x60u);
  *v2 = ((__int64)off_18BC0C0);
  v2[2] = a1[2];
  v3 = v2;
  v4 = (_QWORD *)a1[8];
  if ( v4 != nullptr )
  {
  { struct G0_ { __typeof__(v3)& v3; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_FA3B40((__int64)v3)); } } } g0_ = { v3, 0 };
    if ( a1 + 4 == v4 )
    {
      v3[8] = (_QWORD)(v3 + 4);
      (*(void (__fastcall **)(_QWORD *, __typeof__(v3 + 4)))(*v4 + 24LL))(v4, v3 + 4);
    }
    else
    {
      v3[8] = (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
    }
  g0_.ok = 1; }
  }
  else
  {
    v3[8] = 0;
  }
  v3[10] = a1[10];
  return v3;
}
// NSt3__110__function6__funcIZZZN5EE_US13StormInstance11JoinSessionEPN5storm26ISimpleMatchmakingStrategy11SessionInfoEbNS_8functionIFvvEEENS8_IFvNS4_7EResultEEEEENK3$_1clEbjENKUlRNS4_13SimpleAsyncOpEE2_clESG_EUlvE_NS_9allocatorISI_EES9_EE, virtual slot 2
_QWORD *__fastcall sub_C4DF00(_QWORD *a1)
{/*nothrow:((__int64)sub_FA3B40)*/
  _QWORD *v2; // x0
  _QWORD *v3; // x20
  _QWORD *v4; // x0

  v2 = (_QWORD *)_Znwm(0x60u);
  *v2 = ((__int64)off_18BC190);
  v2[2] = a1[2];
  v3 = v2;
  v4 = (_QWORD *)a1[8];
  if ( v4 != nullptr )
  {
  { struct G0_ { __typeof__(v3)& v3; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_FA3B40((__int64)v3)); } } } g0_ = { v3, 0 };
    if ( a1 + 4 == v4 )
    {
      v3[8] = (_QWORD)(v3 + 4);
      (*(void (__fastcall **)(_QWORD *, __typeof__(v3 + 4)))(*v4 + 24LL))(v4, v3 + 4);
    }
    else
    {
      v3[8] = (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
    }
  g0_.ok = 1; }
  }
  else
  {
    v3[8] = 0;
  }
  v3[10] = a1[10];
  return v3;
}
// NSt3__110__function6__funcIZZZN5EE_US13StormInstance11JoinSessionEPN5storm26ISimpleMatchmakingStrategy11SessionInfoEbNS_8functionIFvvEEENS8_IFvNS4_7EResultEEEEENK3$_1clEbjENKUlRNS4_13SimpleAsyncOpEE1_clESG_EUlvE_NS_9allocatorISI_EES9_EE, virtual slot 2
_QWORD *__fastcall sub_C4E6C0(_QWORD *a1)
{/*nothrow:((__int64)sub_FA3B40)*/
  _QWORD *v2; // x0
  _QWORD *v3; // x20
  _QWORD *v4; // x0

  v2 = (_QWORD *)_Znwm(0x60u);
  *v2 = ((__int64)off_18BC238);
  v2[2] = a1[2];
  v3 = v2;
  v4 = (_QWORD *)a1[8];
  if ( v4 != nullptr )
  {
  { struct G0_ { __typeof__(v3)& v3; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_FA3B40((__int64)v3)); } } } g0_ = { v3, 0 };
    if ( a1 + 4 == v4 )
    {
      v3[8] = (_QWORD)(v3 + 4);
      (*(void (__fastcall **)(_QWORD *, __typeof__(v3 + 4)))(*v4 + 24LL))(v4, v3 + 4);
    }
    else
    {
      v3[8] = (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
    }
  g0_.ok = 1; }
  }
  else
  {
    v3[8] = 0;
  }
  v3[10] = a1[10];
  return v3;
}
// NSt3__110__function6__funcIZZZN5EE_US13StormInstance11JoinSessionEPN5storm26ISimpleMatchmakingStrategy11SessionInfoEbNS_8functionIFvvEEENS8_IFvNS4_7EResultEEEEENK3$_1clEbjENKUlRNS4_13SimpleAsyncOpEE0_clESG_EUlvE_NS_9allocatorISI_EES9_EE, virtual slot 2
_QWORD *__fastcall sub_C4EDD0(_QWORD *a1)
{/*nothrow:((__int64)sub_FA3B40)*/
  _QWORD *v2; // x0
  _QWORD *v3; // x20
  _QWORD *v4; // x0

  v2 = (_QWORD *)_Znwm(0x60u);
  *v2 = ((__int64)off_18BC2E0);
  v2[2] = a1[2];
  v3 = v2;
  v4 = (_QWORD *)a1[8];
  if ( v4 != nullptr )
  {
  { struct G0_ { __typeof__(v3)& v3; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_FA3B40((__int64)v3)); } } } g0_ = { v3, 0 };
    if ( a1 + 4 == v4 )
    {
      v3[8] = (_QWORD)(v3 + 4);
      (*(void (__fastcall **)(_QWORD *, __typeof__(v3 + 4)))(*v4 + 24LL))(v4, v3 + 4);
    }
    else
    {
      v3[8] = (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 16LL))(v4);
    }
  g0_.ok = 1; }
  }
  else
  {
    v3[8] = 0;
  }
  v3[10] = a1[10];
  return v3;
}
// NSt3__110__function6__funcIZN5EE_US13StormInstance10QuickmatchENS_8functionIFvRKN5storm4echo7session8outEvent13SessionJoinedEEEENS4_IFvRKNS5_35SimpleMatchmakingMatchedAsPeerEventEEEENS4_IFvRKNS5_35SimpleMatchmakingMatchedAsHostEventEEEENS4_IFvRKNS5_32SimpleMatchmakingNotMatchedEventEEEENS4_IFvNS5_7E, virtual slot 2
_QWORD *__fastcall sub_C4F6F0(char *a1)
{/*nothrow:((__int64)sub_FA3B40)*/
  _QWORD *v2; // x0
  _QWORD *v3; // x1
  _QWORD *v4; // x20
  char *v5; // x0

  v2 = (_QWORD *)_Znwm(0x50u);
  *v2 = ((__int64)off_18BC408);
  v3 = v2 + 2;
  v4 = v2;
  struct G0_ { void* p; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) sub_FA3B40(p); } } g0_ = { (void*)v4, 0 };
  v5 = (char *)(*(_QWORD *)(a1 + 48));
  if ( v5 != 0 )
  {
    if ( a1 + 16 == v5 )
    {
      v4[6] = (_QWORD)(v3);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))((long long)(v5));
    }
    else
    {
      v4[6] = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v5 + 16LL))((long long)(v5), v3);
    }
  }
  else
  {
    v4[6] = 0;
  }
  v4[8] = *(_QWORD *)(a1 + 64);
  g0_.ok = 1;
  return v4;
}
int __fastcall sub_D4D1A0(__int64 *a1)
{/*nothrow:((__int64)sub_FA4960)*/
  __int64 v2; // x0
  __int64 v3; // x0
  __int64 v4; // x19
  __int64 v5; // x21

  nn__os__LockMutex(qword_1939B38);
  v2 = nn__os__LockMutex(qword_1939B38);
  { struct G0_ {  int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_, t2_, t3_, t4_; t1_ = (__int64)(qword_1939B38); t2_ = (__int64)((__int64)sub_FA4960(t1_)); t3_ = (__int64)(qword_1939B38); t4_ = (__int64)((__int64)sub_FA4960(t3_)); } } } g0_ = { 0 };
  v3 = sub_D29AF0(v2);
  g0_.ok = 1; }
  v4 = *a1;
  v5 = *(_QWORD *)(*(_QWORD *)v3 + 16LL);
  nn__os__UnlockMutex(qword_1939B38);
  LODWORD(v4) = *(_DWORD *)(v5 + 24 * v4);
  nn__os__UnlockMutex(qword_1939B38);
  return (unsigned int)v4;
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
// N2EE14SwitchServicesE, virtual slot 0
__int64 __fastcall sub_EB05E0(_QWORD *a1) noexcept
{/*nothrow:((__int64)sub_DF74B0)*/
  unsigned int *v2; // x0
  unsigned int *v3; // x8
  unsigned int v4; // w9
  unsigned int v5; // w9
  unsigned int *v6; // x0
  unsigned int *v7; // x8
  unsigned int v8; // w9
  unsigned int v9; // w9

  *a1 = ((__int64)off_18E8958);
  v2 = (unsigned int *)a1[6];
  a1[6] = 0;
  { struct G0_ { __typeof__(a1)& a1; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_DF74B0((__int64)a1)); } } } g0_ = { a1, 0 };
  if ( v2 != nullptr )
  {
    v3 = v2 + 2;
    v5 = __atomic_sub_fetch(v3, 1, 0);
    if ( v5 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v2 + 24LL))(v2);
  }
  v6 = (unsigned int *)a1[7];
  a1[7] = 0;
  if ( v6 != nullptr )
  {
    v7 = v6 + 2;
    v9 = __atomic_sub_fetch(v7, 1, 0);
    if ( v9 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v6 + 24LL))(v6);
  }
  g0_.ok = 1; }
  return sub_DF74B0((__int64)a1);
}

// N2EE14SwitchServicesE, virtual slot 1
void __fastcall sub_EB0680(_QWORD *a1) noexcept
{/*nothrow:((__int64)sub_DF74B0)*/
  unsigned int *v2; // x0
  unsigned int *v3; // x8
  unsigned int v4; // w9
  unsigned int v5; // w9
  unsigned int *v6; // x0
  unsigned int *v7; // x8
  unsigned int v8; // w9
  unsigned int v9; // w9

  *a1 = ((__int64)off_18E8958);
  v2 = (unsigned int *)a1[6];
  a1[6] = 0;
  { struct G0_ { __typeof__(a1)& a1; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_DF74B0((__int64)a1)); } } } g0_ = { a1, 0 };
  if ( v2 != nullptr )
  {
    v3 = v2 + 2;
    v5 = __atomic_sub_fetch(v3, 1, 0);
    if ( v5 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v2 + 24LL))(v2);
  }
  v6 = (unsigned int *)a1[7];
  a1[7] = 0;
  if ( v6 != nullptr )
  {
    v7 = v6 + 2;
    v9 = __atomic_sub_fetch(v7, 1, 0);
    if ( v9 == 0 )
      (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v6 + 24LL))(v6);
  }
  g0_.ok = 1; }
  sub_DF74B0((__int64)a1);
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
__int64 __fastcall sub_EC27B0(__int64 a1) noexcept
{
  __int64 v2; // x0
  __int64 result; // x0

  v2 = *(_QWORD *)(a1 + 312);
  if ( v2 != 0 )
    [&]() __attribute__((always_inline)) noexcept { sub_FA0140(v2); }();
  { struct G0_ { __typeof__(a1)& a1; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { *(__int64*)(((char*)((__int64)a1) + 208)) = (__int64)(((__int64)&unk_18E9B80)); } } } g0_ = { a1, 0 };
  result = sub_EC2800(a1);
  g0_.ok = 1; }
  *(_QWORD *)(a1 + 208) = ((__int64)off_18E9B80);
  return result;
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

__int64 __fastcall sub_F118B0(__int64 a1) noexcept
{/*nothrow:((__int64)sub_F11880)*//*nothrow:((__int64)sub_F27F00)*/
  __int64 v2; // x0
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 result; // x0

  v2 = *(_QWORD *)(a1 + 32);
  { struct G0_ { __typeof__(a1)& a1; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_, t2_, t3_; t1_ = (__int64)((__int64)((__int64)a1) + 72); t2_ = (__int64)((__int64)sub_F27F00(t1_)); t3_ = (__int64)((__int64)sub_F11880((__int64)a1)); } } } g0_ = { a1, 0 };
  if ( v2 != 0 )
    sub_FA0140(v2);
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 != 0 )
    sub_FA0140(v3);
  g0_.ok = 1; }
  v4 = *(_QWORD *)(a1 + 72);
  if ( v4 != 0 && *(_QWORD *)(a1 + 96) != 0 )
    [&]() __attribute__((always_inline)) noexcept { sub_FA0140(v4); }();
  result = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 != 0 )
  {
    [&]() __attribute__((always_inline)) noexcept { result = sub_FA0140(result); }();
    *(_QWORD *)a1 = 0;
  }
  *(_DWORD *)(a1 + 8) = 0;
  return result;
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

// 9URLStream, virtual slot 0
__int64 __fastcall sub_F814E0(_QWORD *a1) noexcept
{/*nothrow:((__int64)sub_F34B70)*/
  _QWORD *v1; // x20
  __int64 v3; // x0
  __int64 v4; // x0

  v1 = (_QWORD *)a1[47];
  *a1 = ((__int64)off_18EA788);
  { struct G0_ { __typeof__(a1)& a1; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_, t2_; t1_ = (__int64)((__int64)((__int64)a1) + 72); t2_ = (__int64)((__int64)sub_F34B70(t1_)); } } } g0_ = { a1, 0 };
  if ( v1 != nullptr )
  {
    v3 = v1[5];
    if ( v3 == 0 || (sub_EEB410(v3), (v1 = (_QWORD *)a1[47]) != nullptr) )
    {
      v4 = v1[1];
      if ( v4 != 0 && v1[4] != 0 )
        [&]() __attribute__((always_inline)) noexcept { sub_FA0140(v4); }();
      [&]() __attribute__((always_inline)) noexcept { sub_FA0140(v1); }();
    }
    a1[47] = 0;
  }
  sub_F815A0(a1);
  g0_.ok = 1; }
  return sub_F34B70(a1 + 9);
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

// 20FireSetFlashVarEvent, virtual slot 1
__int64 __fastcall sub_F962B0(_QWORD *a1) noexcept
{/*nothrow:((__int64)sub_EC9FD0)*/
  __int64 result; // x0

  *a1 = ((__int64)off_18EA9D0);
  { struct G0_ { __typeof__(a1)& a1; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_EC9FD0((__int64)a1)); } } } g0_ = { a1, 0 };
  if ( a1[11] != 0 )
    sub_F34D70(a1 + 10);
  sub_FA0140(a1[9]);
  result = sub_FA0140(a1[13]);
  g0_.ok = 1; }
  *a1 = ((__int64)off_18EA678);
  if ( a1[8] != 0 )
  {
    result = a1[5];
    if ( result != 0 )
      { __auto_type r_ = [&]() __attribute__((always_inline)) noexcept { return sub_FA0140(result); }(); return r_; }
  }
  return result;
}

// 20FireSetFlashVarEvent, virtual slot 2
__int64 __fastcall sub_F96330(_QWORD *a1) noexcept
{/*nothrow:((__int64)sub_EC9FD0)*/
  __int64 v2; // x0

  *a1 = ((__int64)off_18EA9D0);
  { struct G0_ { __typeof__(a1)& a1; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_EC9FD0((__int64)a1)); } } } g0_ = { a1, 0 };
  if ( a1[11] != 0 )
    sub_F34D70(a1 + 10);
  sub_FA0140(a1[9]);
  sub_FA0140(a1[13]);
  g0_.ok = 1; }
  *a1 = ((__int64)off_18EA678);
  if ( a1[8] != 0 )
  {
    v2 = a1[5];
    if ( v2 != 0 )
      [&]() __attribute__((always_inline)) noexcept { sub_FA0140(v2); }();
  }
  { __auto_type r_ = [&]() __attribute__((always_inline)) noexcept { return sub_FA0140((__int64)a1); }(); return r_; }
}

int __fastcall sub_F96780(__int64 a1, __int16 a2)
{
  __int64 v2; // x20
  unsigned int v4; // w19
  int v6; // w8
  int v7; // w8
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x8
  int v11; // w9
  __int64 v12; // x8
  __int64 v13; // x0

  if ( a1 == 0 )
    return 1;
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 == 0 || *(_DWORD *)(v2 + 5676) != 0 )
    return 1;
  v6 = *(_DWORD *)(v2 + 6272);
  if ( v6 > 0 )
    return 6;
  *(_DWORD *)(v2 + 6272) = v6 + 1;
  *(_DWORD *)(v2 + 5800) = 1;
  { struct G0_ { __typeof__(v2)& v2; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_, t2_, t3_, t4_, t5_, t6_, t7_; t1_ = (__int64)(*(unsigned*)(((char*)((__int64)v2) + 6272))); t2_ = (__int64)((__int64)(t1_) - 1); *(unsigned*)(((char*)((__int64)v2) + 6272)) = (unsigned)(t2_); t3_ = (__int64)(*(unsigned char*)(((char*)((__int64)v2) + ((__int64)(6276) << 0)))); if ( (int)(__int64)(t3_) == 0 ) goto END_; t4_ = (__int64)(*(__int64*)(((char*)((__int64)v2) + 5640))); t5_ = (__int64)((__int64)(t4_) + 2096); t6_ = (__int64)((((__int64)(__int64)(t4_)) == ((__int64)(__int64)(0))) ? (__int64)(0) : (__int64)(t5_)); t7_ = (__int64)((__int64)sub_EBAE90(t6_)); END_:; } } } g0_ = { v2, 0 };
  sub_EDC6B0(v2, a2 == 0, 1);
  g0_.ok = 1; }
  v7 = *(_DWORD *)(v2 + 6272) - 1;
  *(_DWORD *)(v2 + 5800) = 0;
  *(_DWORD *)(v2 + 6272) = v7;
  if ( *(_BYTE *)(v2 + 6276) != 0 )
  {
    v8 = *(_QWORD *)(v2 + 5640);
    if ( v8 != 0 )
      v9 = v8 + 2096;
    else
      v9 = 0;
    [&]() __attribute__((always_inline)) noexcept { sub_EBAE90(v9); }();
  }
  v10 = *(_QWORD *)(a1 + 8);
  if ( v10 != 0 && *(_DWORD *)(v10 + 5676) == 0 )
  {
    v11 = *(_DWORD *)(v10 + 6272);
    if ( v11 <= 0 )
    {
      *(_DWORD *)(v10 + 6272) = v11 + 1;
      if ( (*(_DWORD *)(v10 + 120) & 0x80000000) != 0 )
      {
        v4 = 7;
      }
      else if ( *(_QWORD *)(v10 + 3064) != 0 )
      {
        v4 = 2;
      }
      else if ( *(_WORD *)(v10 + 4738) != 0 )
      {
        v4 = 3;
      }
      else
      {
        v4 = 8 * (*(_WORD *)(v10 + 4740) != 0);
      }
      *(_DWORD *)(v10 + 6272) = v11;
      if ( *(_BYTE *)(v10 + 6276) != 0 )
      {
        v12 = *(_QWORD *)(v10 + 5640);
        if ( v12 != 0 )
          v13 = v12 + 2096;
        else
          v13 = 0;
        [&]() __attribute__((always_inline)) noexcept { sub_EBAE90(v13); }();
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return 1;
  }
  return v4;
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
