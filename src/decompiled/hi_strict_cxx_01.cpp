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
extern void* off_1846110[];
extern void* off_18BBCA8[];
extern void* off_18BBD50[];
extern void* off_18BC0C0[];
extern void* off_18BC190[];
extern void* off_18BC238[];
extern void* off_18BC2E0[];
extern void* off_18BC408[];
extern __int64 qword_191B6C0;
__int64 sub_7FD450(...);
__int64 sub_837F70(...);
__int64 sub_FA3B40(...) noexcept;

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
}
