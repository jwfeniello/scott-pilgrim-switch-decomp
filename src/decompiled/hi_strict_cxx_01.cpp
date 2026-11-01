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
__attribute__((malloc)) void* _Znwm(size_t);
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
extern void* off_18E9B40[];
extern void* off_18E9B80[];
extern void* off_18E9FA0[];
extern void* off_18EA678[];
extern void* off_18EA788[];
extern void* off_18EA8F0[];
extern void* off_18EA938[];
extern void* off_18EA9D0[];
extern void* off_18EAC80[];
extern void* off_18EAD30[];
extern __int64 qword_191B6C0;
extern __int64 qword_1926BD8;
extern __int64 qword_1939B38;
__int64 sub_7FD450(...);
__int64 sub_837F70(...);
unsigned char sub_A82B30(...);
__int64 sub_D29AF0(...);
__int64 sub_EBAE90(...);
__int64 sub_EC21A0(...);
__int64 sub_EC27B0(...) noexcept;
__int64 sub_EC2800(...);
__int64 sub_EC9FD0(...) noexcept;
__int64 sub_EDC6B0(...);
__int64 sub_EEA160(...);
__int64 sub_EEA5A0(...) noexcept;
__int64 sub_EEB410(...);
__int64 sub_F2C1E0(...) noexcept;
__int64 sub_F2EA40(...);
__int64 sub_F322F0(...);
__int64 sub_F34B70(...) noexcept;
__int64 sub_F34D70(...);
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

// 18ThreadScriptObject, virtual slot 4
__int64 __fastcall sub_EEAF30(_QWORD *a1) noexcept
{/*nothrow:((__int64)sub_EEA5A0)*/
  *a1 = ((__int64)off_18E9FA0);
  { struct G0_ { __typeof__(a1)& a1; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_EEA5A0((__int64)a1)); } } } g0_ = { a1, 0 };
  sub_EEA160(a1);
  g0_.ok = 1; }
  return sub_EEA5A0(a1);
}

// 18ThreadScriptObject, virtual slot 5
__int64 __fastcall sub_EEAF70(_QWORD *a1) noexcept
{/*nothrow:((__int64)sub_EEA5A0)*/
  *a1 = ((__int64)off_18E9FA0);
  { struct G0_ { __typeof__(a1)& a1; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_EEA5A0((__int64)a1)); } } } g0_ = { a1, 0 };
  sub_EEA160(a1);
  g0_.ok = 1; }
  return sub_EEA5A0(a1);
}

__int64 __fastcall sub_F00DE0(_QWORD *a1) noexcept
{/*nothrow:((__int64)sub_EC27B0)*/
  _QWORD *v1; // x20
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 result; // x0

  v1 = (_QWORD *)a1[14];
  { struct G0_ { __typeof__(a1)& a1; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_, t2_; t1_ = (__int64)((__int64)((__int64)a1) + 184); t2_ = (__int64)((__int64)sub_EC27B0(t1_)); } } } g0_ = { a1, 0 };
  while ( v1 != nullptr )
  {
    v1 = (_QWORD *)*v1;
    sub_FA0140(v3);
    v3 = (__int64)v1;
  }
  v4 = a1[69];
  a1[14] = 0;
  sub_FA0140(v4);
  sub_FA0140(a1[71]);
  g0_.ok = 1; }
  v5 = a1[62];
  a1[71] = 0;
  if ( v5 != 0 )
    [&]() __attribute__((always_inline)) noexcept { sub_FA0140(v5); }();
  { struct G2_ { __typeof__(a1)& a1; int ok; __attribute__((always_inline)) ~G2_() { if ( !ok ) { *(__int64*)(((char*)((__int64)a1) + 392)) = (__int64)(((__int64)&unk_18E9B80)); } } } g2_ = { a1, 0 };
  result = sub_EC2800(a1 + 23);
  g2_.ok = 1; }
  a1[49] = ((__int64)off_18E9B80);
  return result;
}

__int64 __fastcall sub_F2C9C0(char *a1) noexcept
{/*nothrow:((__int64)sub_F2C1E0)*/
  __int64 v2; // x0
  __int64 v3; // x0
  __int64 *v4; // x20
  char *result; // x0

  v2 = *(_QWORD *)(a1 + 56);
  { struct G0_ { __typeof__(a1)& a1; int ok; __attribute__((always_inline)) ~G0_() { if ( !ok ) { __int64 t1_; t1_ = (__int64)((__int64)sub_F2C1E0((__int64)a1)); } } } g0_ = { a1, 0 };
  if ( v2 != 0 )
  {
    sub_FA0140(v2);
    *(_QWORD *)(a1 + 56) = 0;
    *(_WORD *)(a1 + 50) = 0;
  }
  v4 = (__int64 *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 != 0 )
  {
    sub_FA0140(v3);
    *v4 = 0;
    *(_QWORD *)(a1 + 24) = 0;
    *(_WORD *)(a1 + 32) = -1;
  }
  g0_.ok = 1; }
  result = (char *)(*(_QWORD *)(a1 + 64));
  if ( result != 0 )
  {
    *(_QWORD *)(result + 16) = 0;
    [&]() __attribute__((always_inline)) noexcept { sub_FA0140(result); }();
    result = (char *)(*v4);
    if ( *v4 != 0 )
    {
      [&]() __attribute__((always_inline)) noexcept { result = (char *)(sub_FA0140(result)); }();
      *v4 = 0;
      *(_QWORD *)(a1 + 24) = 0;
      *(_WORD *)(a1 + 32) = -1;
    }
  }
  return (long long)(result);
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
