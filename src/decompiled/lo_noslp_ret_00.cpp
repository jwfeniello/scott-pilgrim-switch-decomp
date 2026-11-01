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
struct Big { char data[4096]; };
inline void* operator new(size_t, void* where) noexcept { return where; }
extern "C" {
void* memcpy(void*, const void*, size_t); void* memset(void*, int, size_t); void* memmove(void*, const void*, size_t); int memcmp(const void*, const void*, size_t); size_t strlen(const char*); int strcmp(const char*, const char*); char* strcpy(char*, const char*); char* strncpy(char*, const char*, size_t); int strncmp(const char*, const char*, size_t); void free(void*) noexcept; void* malloc(size_t); float fabsf(float); float sqrtf(float); float floorf(float); float ceilf(float);
__int64 Recovered_ResultTextCopy(...);
__int64 _Znwm(...);
extern char goff_18EDD08[];
extern char goff_18EDEF0[];
extern char goff_18EED80[];
extern char goff_18EED90[];
extern char goff_18EEE10[];
extern char goff_18F2620[];
extern char goff_18F2678[];
extern char goff_18F3010[];
extern char goff_18F3018[];
extern char goff_18F3020[];
extern char goff_18F3030[];
extern char goff_18F33E8[];
extern char goff_18F33F0[];
extern char goff_18F3418[];
extern char goff_18F3420[];
extern char goff_18F3428[];
extern char goff_18F3430[];
extern char goff_18F3498[];
extern char goff_18F34A0[];
extern char goff_18F34A8[];
extern char goff_18F34E0[];
extern char goff_18F39E8[];
extern char goff_18F5BB0[];
extern char goff_18F9B90[];
extern char goff_18F9B98[];
extern char goff_18FA210[];
__int64 std____shared_weak_count____release_weak(...);
__attribute__((visibility("hidden"))) __int64 sub_264540(...);
__attribute__((visibility("hidden"))) __int64 sub_268070(...);
__attribute__((visibility("hidden"))) __int64 sub_4EC680(...);
__attribute__((visibility("hidden"))) __int64 sub_51D050(...);
__attribute__((visibility("hidden"))) __int64 sub_51D3A0(...);
__attribute__((visibility("hidden"))) __int64 sub_549210(...);
__attribute__((visibility("hidden"))) __int64 sub_56C9F0(...);
__attribute__((visibility("hidden"))) __int64 sub_56DC80(...);
__attribute__((visibility("hidden"))) __int64 sub_5753C0(...);
__attribute__((visibility("hidden"))) __int64 sub_576650(...);
extern __attribute__((visibility("hidden"))) char unk_1326E41;

// N5storm4echo7session18SessionBaseMessageE, virtual slot 5
__int64 __fastcall sub_362C10(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // x0
  __int64 *v5; // x23
  __int64 v6; // x20
  __int64 **v7; // x21
  __int64 v8; // x0
  __int64 *v9; // x8
  __int64 v10; // x0
  __int64 *v11; // x8
  __int64 v13; // [xsp+8h] [xbp-38h] BYREF

  v4 = (_QWORD *)sub_56C9F0(80, 8, 1092624384, 0LL, a2, a3);
  v5 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v4 = (_QWORD)(((__int64 *)((__int64*)goff_18F3010) + 2));
  v6 = (__int64)v4;
  v4[1] = (_QWORD)(v5);
  v7 = (__int64 **)(v4 + 1);
  v8 = sub_56DC80(v4 + 1);
  v9 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  *(_QWORD *)(v6 + 16) = v8;
  *(_WORD *)(v6 + 24) = 1;
  *v7 = v9;
  *(_QWORD *)(v6 + 48) = (_QWORD)(v5);
  v10 = sub_56DC80(v6 + 48);
  *(_BYTE *)(v6 + 64) = 1;
  v11 = (long long *)(goff_18F2620);
  *(_QWORD *)(v6 + 56) = v10;
  *(_QWORD *)(v6 + 48) = (_QWORD)(v11 + 2);
  *(_DWORD *)(v6 + 68) = -1;
  *(_QWORD *)(v6 + 72) = 0;
  new ((void*)(&v13)) Big(((Big(*)(__typeof__(v6), __typeof__(a1), __typeof__(0)))sub_5753C0)(v6, a1, 0));
  return v6;
}
// N5storm4echo7session29SessionPeerUnreachableMessageE, virtual slot 5
__int64 __fastcall sub_363E10(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // x0
  __int64 *v5; // x23
  __int64 v6; // x20
  __int64 **v7; // x21
  __int64 v8; // x0
  __int64 *v9; // x25
  __int64 v10; // x0
  __int64 *v11; // x8
  __int64 v12; // x9
  __int64 *v13; // x26
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 *v17; // x8
  __int64 v19; // [xsp+8h] [xbp-48h] BYREF

  v4 = (_QWORD *)sub_56C9F0(216, 8, 1092624384, 0LL, a2, a3);
  v5 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v4 = (_QWORD)(((__int64 *)((__int64*)goff_18F3010) + 2));
  v6 = (__int64)v4;
  v4[1] = (_QWORD)(v5);
  v7 = (__int64 **)(v4 + 1);
  v8 = sub_56DC80(v4 + 1);
  v9 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  *(_QWORD *)(v6 + 16) = v8;
  *(_WORD *)(v6 + 24) = 1;
  *v7 = v9;
  *(_QWORD *)(v6 + 48) = (_QWORD)(v5);
  v10 = sub_56DC80(v6 + 48);
  v11 = (long long *)(goff_18F2620);
  *(_BYTE *)(v6 + 64) = 1;
  v12 = (long long)(((__int64*)goff_18F33E8));
  *(_QWORD *)(v6 + 56) = v10;
  v13 = v11 + 2;
  *(_QWORD *)(v6 + 48) = (_QWORD)(v11 + 2);
  *(_DWORD *)(v6 + 68) = -1;
  *(_QWORD *)(v6 + 72) = 0;
  *(_QWORD *)v6 = v12 + 16;
  *(_QWORD *)(v6 + 80) = (_QWORD)(v5);
  v14 = sub_56DC80(v6 + 80);
  *(_WORD *)(v6 + 96) = 1;
  *(_QWORD *)(v6 + 88) = v14;
  *(_QWORD *)(v6 + 80) = (_QWORD)(v9);
  *(_QWORD *)(v6 + 120) = (_QWORD)(v5);
  v15 = sub_56DC80(v6 + 120);
  *(_BYTE *)(v6 + 136) = 1;
  *(_QWORD *)(v6 + 128) = v15;
  *(_QWORD *)(v6 + 120) = (_QWORD)(v13);
  *(_DWORD *)(v6 + 140) = 0;
  *(_QWORD *)(v6 + 144) = (_QWORD)(v5);
  v16 = sub_56DC80(v6 + 144);
  *(_BYTE *)(v6 + 160) = 1;
  v17 = ((__int64 *)((__int64*)goff_18EED80) + 2);
  *(_QWORD *)(v6 + 152) = v16;
  *(_QWORD *)(v6 + 144) = (_QWORD)(v17);
  *(_QWORD *)(v6 + 176) = 0;
  *(_QWORD *)(v6 + 184) = 0;
  *(_QWORD *)(v6 + 168) = 0;
  *(_QWORD *)(v6 + 192) = (_QWORD)(v5);
  *(_QWORD *)(v6 + 200) = sub_56DC80(v6 + 192);
  *(_BYTE *)(v6 + 208) = 1;
  *(_QWORD *)(v6 + 192) = (_QWORD)(((__int64 *)goff_18F2678 + 2));
  *(_DWORD *)(v6 + 212) = -1;
  new ((void*)(&v19)) Big(((Big(*)(__typeof__(v6), __typeof__(a1), __typeof__(0)))sub_5753C0)(v6, a1, 0));
  return v6;
}
// N5storm4echo7session23SessionPeerLeaveMessageE, virtual slot 5
__int64 __fastcall sub_364440(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // x0
  __int64 *v5; // x23
  __int64 v6; // x20
  __int64 **v7; // x21
  __int64 v8; // x0
  __int64 *v9; // x25
  __int64 v10; // x0
  __int64 *v11; // x8
  __int64 v12; // x9
  __int64 *v13; // x26
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 *v17; // x8
  __int64 v19; // [xsp+8h] [xbp-48h] BYREF

  v4 = (_QWORD *)sub_56C9F0(216, 8, 1092624384, 0LL, a2, a3);
  v5 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v4 = (_QWORD)(((__int64 *)((__int64*)goff_18F3010) + 2));
  v6 = (__int64)v4;
  v4[1] = (_QWORD)(v5);
  v7 = (__int64 **)(v4 + 1);
  v8 = sub_56DC80(v4 + 1);
  v9 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  *(_QWORD *)(v6 + 16) = v8;
  *(_WORD *)(v6 + 24) = 1;
  *v7 = v9;
  *(_QWORD *)(v6 + 48) = (_QWORD)(v5);
  v10 = sub_56DC80(v6 + 48);
  v11 = (long long *)(goff_18F2620);
  *(_BYTE *)(v6 + 64) = 1;
  v12 = (long long)(((__int64*)goff_18F33F0));
  *(_QWORD *)(v6 + 56) = v10;
  v13 = v11 + 2;
  *(_QWORD *)(v6 + 48) = (_QWORD)(v11 + 2);
  *(_DWORD *)(v6 + 68) = -1;
  *(_QWORD *)(v6 + 72) = 0;
  *(_QWORD *)v6 = v12 + 16;
  *(_QWORD *)(v6 + 80) = (_QWORD)(v5);
  v14 = sub_56DC80(v6 + 80);
  *(_WORD *)(v6 + 96) = 1;
  *(_QWORD *)(v6 + 88) = v14;
  *(_QWORD *)(v6 + 80) = (_QWORD)(v9);
  *(_QWORD *)(v6 + 120) = (_QWORD)(v5);
  v15 = sub_56DC80(v6 + 120);
  *(_BYTE *)(v6 + 136) = 1;
  *(_QWORD *)(v6 + 128) = v15;
  *(_QWORD *)(v6 + 120) = (_QWORD)(v13);
  *(_DWORD *)(v6 + 140) = 0;
  *(_QWORD *)(v6 + 144) = (_QWORD)(v5);
  v16 = sub_56DC80(v6 + 144);
  *(_BYTE *)(v6 + 160) = 1;
  v17 = ((__int64 *)((__int64*)goff_18EED80) + 2);
  *(_QWORD *)(v6 + 152) = v16;
  *(_QWORD *)(v6 + 144) = (_QWORD)(v17);
  *(_QWORD *)(v6 + 176) = 0;
  *(_QWORD *)(v6 + 184) = 0;
  *(_QWORD *)(v6 + 168) = 0;
  *(_QWORD *)(v6 + 192) = (_QWORD)(v5);
  *(_QWORD *)(v6 + 200) = sub_56DC80(v6 + 192);
  *(_BYTE *)(v6 + 208) = 1;
  *(_QWORD *)(v6 + 192) = (_QWORD)(((__int64 *)goff_18F2678 + 2));
  *(_DWORD *)(v6 + 212) = -1;
  new ((void*)(&v19)) Big(((Big(*)(__typeof__(v6), __typeof__(a1), __typeof__(0)))sub_5753C0)(v6, a1, 0));
  return v6;
}
// N5storm4echo7session19SessionReadyMessageE, virtual slot 5
__int64 __fastcall sub_364A70(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // x0
  __int64 *v5; // x23
  __int64 v6; // x20
  __int64 **v7; // x21
  __int64 v8; // x0
  __int64 *v9; // x8
  __int64 v10; // x0
  __int64 *v11; // x8
  __int64 *v12; // x9
  __int64 v14; // [xsp+8h] [xbp-38h] BYREF

  v4 = (_QWORD *)sub_56C9F0(80, 8, 1092624384, 0LL, a2, a3);
  v5 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v4 = (_QWORD)(((__int64 *)((__int64*)goff_18F3010) + 2));
  v6 = (__int64)v4;
  v4[1] = (_QWORD)(v5);
  v7 = (__int64 **)(v4 + 1);
  v8 = sub_56DC80(v4 + 1);
  v9 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  *(_QWORD *)(v6 + 16) = v8;
  *(_WORD *)(v6 + 24) = 1;
  *v7 = v9;
  *(_QWORD *)(v6 + 48) = (_QWORD)(v5);
  v10 = sub_56DC80(v6 + 48);
  *(_BYTE *)(v6 + 64) = 1;
  v11 = (long long *)(goff_18F2620);
  *(_QWORD *)(v6 + 56) = v10;
  v12 = ((__int64*)goff_18F3498);
  *(_QWORD *)(v6 + 48) = (_QWORD)(v11 + 2);
  *(_DWORD *)(v6 + 68) = -1;
  *(_QWORD *)v6 = (_QWORD)(v12 + 2);
  *(_QWORD *)(v6 + 72) = 0;
  new ((void*)(&v14)) Big(((Big(*)(__typeof__(v6), __typeof__(a1), __typeof__(0)))sub_5753C0)(v6, a1, 0));
  return v6;
}
// N5storm4echo7session23SessionConnectedMessageE, virtual slot 5
__int64 __fastcall sub_364F60(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // x0
  __int64 *v5; // x23
  __int64 v6; // x20
  __int64 **v7; // x21
  __int64 v8; // x0
  __int64 *v9; // x8
  __int64 v10; // x0
  __int64 *v11; // x8
  __int64 *v12; // x9
  __int64 v14; // [xsp+8h] [xbp-38h] BYREF

  v4 = (_QWORD *)sub_56C9F0(80, 8, 1092624384, 0LL, a2, a3);
  v5 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v4 = (_QWORD)(((__int64 *)((__int64*)goff_18F3010) + 2));
  v6 = (__int64)v4;
  v4[1] = (_QWORD)(v5);
  v7 = (__int64 **)(v4 + 1);
  v8 = sub_56DC80(v4 + 1);
  v9 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  *(_QWORD *)(v6 + 16) = v8;
  *(_WORD *)(v6 + 24) = 1;
  *v7 = v9;
  *(_QWORD *)(v6 + 48) = (_QWORD)(v5);
  v10 = sub_56DC80(v6 + 48);
  *(_BYTE *)(v6 + 64) = 1;
  v11 = (long long *)(goff_18F2620);
  *(_QWORD *)(v6 + 56) = v10;
  v12 = (long long *)(goff_18F39E8);
  *(_QWORD *)(v6 + 48) = (_QWORD)(v11 + 2);
  *(_DWORD *)(v6 + 68) = -1;
  *(_QWORD *)v6 = (_QWORD)(v12 + 2);
  *(_QWORD *)(v6 + 72) = 0;
  new ((void*)(&v14)) Big(((Big(*)(__typeof__(v6), __typeof__(a1), __typeof__(0)))sub_5753C0)(v6, a1, 0));
  return v6;
}
// N5storm4echo7session27SessionPeerConnectedMessageE, virtual slot 5
__int64 __fastcall sub_365810(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // x0
  __int64 *v5; // x23
  __int64 v6; // x20
  __int64 **v7; // x21
  __int64 v8; // x0
  __int64 *v9; // x8
  __int64 v10; // x0
  __int64 *v11; // x8
  __int64 *v12; // x9
  __int64 *v13; // x25
  __int64 v14; // x0
  __int64 v16; // [xsp+8h] [xbp-38h] BYREF

  v4 = (_QWORD *)sub_56C9F0(128, 8, 1092624384, 0LL, a2, a3);
  v5 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v4 = (_QWORD)(((__int64 *)((__int64*)goff_18F3010) + 2));
  v6 = (__int64)v4;
  v4[1] = (_QWORD)(v5);
  v7 = (__int64 **)(v4 + 1);
  v8 = sub_56DC80(v4 + 1);
  v9 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  *(_QWORD *)(v6 + 16) = v8;
  *(_WORD *)(v6 + 24) = 1;
  *v7 = v9;
  *(_QWORD *)(v6 + 48) = (_QWORD)(v5);
  v10 = sub_56DC80(v6 + 48);
  v11 = (long long *)(goff_18F2620);
  *(_BYTE *)(v6 + 64) = 1;
  v12 = ((__int64*)goff_18F3030);
  *(_QWORD *)(v6 + 56) = v10;
  v13 = v11 + 2;
  *(_QWORD *)(v6 + 48) = (_QWORD)(v11 + 2);
  *(_DWORD *)(v6 + 68) = -1;
  *(_QWORD *)(v6 + 72) = 0;
  *(_QWORD *)v6 = (_QWORD)(v12 + 2);
  *(_QWORD *)(v6 + 80) = (_QWORD)(v5);
  v14 = sub_56DC80(v6 + 80);
  *(_BYTE *)(v6 + 96) = 1;
  *(_QWORD *)(v6 + 88) = v14;
  *(_QWORD *)(v6 + 80) = (_QWORD)(v13);
  *(_DWORD *)(v6 + 100) = 0;
  *(_QWORD *)(v6 + 104) = (_QWORD)(v5);
  *(_QWORD *)(v6 + 112) = sub_56DC80(v6 + 104);
  *(_BYTE *)(v6 + 120) = 1;
  *(_QWORD *)(v6 + 104) = (_QWORD)(v13);
  *(_DWORD *)(v6 + 124) = 0;
  new ((void*)(&v16)) Big(((Big(*)(__typeof__(v6), __typeof__(a1), __typeof__(0)))sub_5753C0)(v6, a1, 0));
  return v6;
}
// N5storm4echo7session23SessionGuidLeaveMessageE, virtual slot 5
__int64 __fastcall sub_366570(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // x0
  __int64 *v5; // x23
  __int64 v6; // x20
  __int64 **v7; // x21
  __int64 v8; // x0
  __int64 *v9; // x25
  __int64 v10; // x0
  __int64 *v11; // x8
  __int64 v12; // x9
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 *v15; // x8
  __int64 v17; // [xsp+8h] [xbp-48h] BYREF

  v4 = (_QWORD *)sub_56C9F0(192, 8, 1092624384, 0LL, a2, a3);
  v5 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v4 = (_QWORD)(((__int64 *)((__int64*)goff_18F3010) + 2));
  v6 = (__int64)v4;
  v4[1] = (_QWORD)(v5);
  v7 = (__int64 **)(v4 + 1);
  v8 = sub_56DC80(v4 + 1);
  v9 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  *(_QWORD *)(v6 + 16) = v8;
  *(_WORD *)(v6 + 24) = 1;
  *v7 = v9;
  *(_QWORD *)(v6 + 48) = (_QWORD)(v5);
  v10 = sub_56DC80(v6 + 48);
  v11 = (long long *)(goff_18F2620);
  *(_BYTE *)(v6 + 64) = 1;
  v12 = (long long)(((__int64*)goff_18F3418));
  *(_QWORD *)(v6 + 56) = v10;
  *(_QWORD *)(v6 + 48) = (_QWORD)(v11 + 2);
  *(_DWORD *)(v6 + 68) = -1;
  *(_QWORD *)(v6 + 72) = 0;
  *(_QWORD *)v6 = v12 + 16;
  *(_QWORD *)(v6 + 80) = (_QWORD)(v5);
  v13 = sub_56DC80(v6 + 80);
  *(_WORD *)(v6 + 96) = 1;
  *(_QWORD *)(v6 + 88) = v13;
  *(_QWORD *)(v6 + 80) = (_QWORD)(v9);
  *(_QWORD *)(v6 + 120) = (_QWORD)(v5);
  v14 = sub_56DC80(v6 + 120);
  *(_BYTE *)(v6 + 136) = 1;
  v15 = ((__int64 *)((__int64*)goff_18EED80) + 2);
  *(_QWORD *)(v6 + 128) = v14;
  *(_QWORD *)(v6 + 120) = (_QWORD)(v15);
  *(_QWORD *)(v6 + 152) = 0;
  *(_QWORD *)(v6 + 160) = 0;
  *(_QWORD *)(v6 + 144) = 0;
  *(_QWORD *)(v6 + 168) = (_QWORD)(v5);
  *(_QWORD *)(v6 + 176) = sub_56DC80(v6 + 168);
  *(_BYTE *)(v6 + 184) = 1;
  *(_QWORD *)(v6 + 168) = (_QWORD)(((__int64 *)goff_18F2678 + 2));
  *(_DWORD *)(v6 + 188) = -1;
  new ((void*)(&v17)) Big(((Big(*)(__typeof__(v6), __typeof__(a1), __typeof__(0)))sub_5753C0)(v6, a1, 0));
  return v6;
}
// N5storm4echo7session19SessionLeaveMessageE, virtual slot 5
__int64 __fastcall sub_366B60(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // x0
  __int64 *v5; // x23
  __int64 v6; // x20
  __int64 **v7; // x21
  __int64 v8; // x0
  __int64 *v9; // x25
  __int64 v10; // x0
  __int64 *v11; // x8
  __int64 v12; // x9
  __int64 *v13; // x26
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 *v17; // x8
  __int64 v19; // [xsp+8h] [xbp-48h] BYREF

  v4 = (_QWORD *)sub_56C9F0(216, 8, 1092624384, 0LL, a2, a3);
  v5 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v4 = (_QWORD)(((__int64 *)((__int64*)goff_18F3010) + 2));
  v6 = (__int64)v4;
  v4[1] = (_QWORD)(v5);
  v7 = (__int64 **)(v4 + 1);
  v8 = sub_56DC80(v4 + 1);
  v9 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  *(_QWORD *)(v6 + 16) = v8;
  *(_WORD *)(v6 + 24) = 1;
  *v7 = v9;
  *(_QWORD *)(v6 + 48) = (_QWORD)(v5);
  v10 = sub_56DC80(v6 + 48);
  v11 = (long long *)(goff_18F2620);
  *(_BYTE *)(v6 + 64) = 1;
  v12 = (long long)(((__int64*)goff_18F3420));
  *(_QWORD *)(v6 + 56) = v10;
  v13 = v11 + 2;
  *(_QWORD *)(v6 + 48) = (_QWORD)(v11 + 2);
  *(_DWORD *)(v6 + 68) = -1;
  *(_QWORD *)(v6 + 72) = 0;
  *(_QWORD *)v6 = v12 + 16;
  *(_QWORD *)(v6 + 80) = (_QWORD)(v5);
  v14 = sub_56DC80(v6 + 80);
  *(_WORD *)(v6 + 96) = 1;
  *(_QWORD *)(v6 + 88) = v14;
  *(_QWORD *)(v6 + 80) = (_QWORD)(v9);
  *(_QWORD *)(v6 + 120) = (_QWORD)(v5);
  v15 = sub_56DC80(v6 + 120);
  *(_BYTE *)(v6 + 136) = 1;
  *(_QWORD *)(v6 + 128) = v15;
  *(_QWORD *)(v6 + 120) = (_QWORD)(v13);
  *(_DWORD *)(v6 + 140) = 0;
  *(_QWORD *)(v6 + 144) = (_QWORD)(v5);
  v16 = sub_56DC80(v6 + 144);
  *(_BYTE *)(v6 + 160) = 1;
  v17 = ((__int64 *)((__int64*)goff_18EED80) + 2);
  *(_QWORD *)(v6 + 152) = v16;
  *(_QWORD *)(v6 + 144) = (_QWORD)(v17);
  *(_QWORD *)(v6 + 176) = 0;
  *(_QWORD *)(v6 + 184) = 0;
  *(_QWORD *)(v6 + 168) = 0;
  *(_QWORD *)(v6 + 192) = (_QWORD)(v5);
  *(_QWORD *)(v6 + 200) = sub_56DC80(v6 + 192);
  *(_BYTE *)(v6 + 208) = 1;
  *(_QWORD *)(v6 + 192) = (_QWORD)(((__int64 *)goff_18F2678 + 2));
  *(_DWORD *)(v6 + 212) = -1;
  new ((void*)(&v19)) Big(((Big(*)(__typeof__(v6), __typeof__(a1), __typeof__(0)))sub_5753C0)(v6, a1, 0));
  return v6;
}
// N5storm4echo7session22SessionDissolveMessageE, virtual slot 5
__int64 __fastcall sub_367190(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // x0
  __int64 *v5; // x23
  __int64 v6; // x20
  __int64 **v7; // x21
  __int64 v8; // x0
  __int64 *v9; // x8
  __int64 v10; // x0
  __int64 *v11; // x8
  __int64 v12; // x9
  __int64 v13; // x0
  __int64 *v14; // x8
  __int64 v16; // [xsp+8h] [xbp-38h] BYREF

  v4 = (_QWORD *)sub_56C9F0(152, 8, 1092624384, 0LL, a2, a3);
  v5 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v4 = (_QWORD)(((__int64 *)((__int64*)goff_18F3010) + 2));
  v6 = (__int64)v4;
  v4[1] = (_QWORD)(v5);
  v7 = (__int64 **)(v4 + 1);
  v8 = sub_56DC80(v4 + 1);
  v9 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  *(_QWORD *)(v6 + 16) = v8;
  *(_WORD *)(v6 + 24) = 1;
  *v7 = v9;
  *(_QWORD *)(v6 + 48) = (_QWORD)(v5);
  v10 = sub_56DC80(v6 + 48);
  v11 = (long long *)(goff_18F2620);
  *(_BYTE *)(v6 + 64) = 1;
  v12 = (long long)(((__int64*)goff_18F3428));
  *(_QWORD *)(v6 + 56) = v10;
  *(_QWORD *)(v6 + 48) = (_QWORD)(v11 + 2);
  *(_DWORD *)(v6 + 68) = -1;
  *(_QWORD *)(v6 + 72) = 0;
  *(_QWORD *)v6 = v12 + 16;
  *(_QWORD *)(v6 + 80) = (_QWORD)(v5);
  v13 = sub_56DC80(v6 + 80);
  *(_BYTE *)(v6 + 96) = 1;
  v14 = ((__int64 *)((__int64*)goff_18EED80) + 2);
  *(_QWORD *)(v6 + 88) = v13;
  *(_QWORD *)(v6 + 80) = (_QWORD)(v14);
  *(_QWORD *)(v6 + 112) = 0;
  *(_QWORD *)(v6 + 120) = 0;
  *(_QWORD *)(v6 + 104) = 0;
  *(_QWORD *)(v6 + 128) = (_QWORD)(v5);
  *(_QWORD *)(v6 + 136) = sub_56DC80(v6 + 128);
  *(_BYTE *)(v6 + 144) = 1;
  *(_QWORD *)(v6 + 128) = (_QWORD)(((__int64 *)goff_18F2678 + 2));
  *(_DWORD *)(v6 + 148) = -1;
  new ((void*)(&v16)) Big(((Big(*)(__typeof__(v6), __typeof__(a1), __typeof__(0)))sub_5753C0)(v6, a1, 0));
  return v6;
}
// N5storm4echo7session27SessionReJoinRequestMessageE, virtual slot 5
__int64 __fastcall sub_367740(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // x0
  __int64 *v5; // x23
  __int64 v6; // x20
  __int64 **v7; // x21
  __int64 v8; // x0
  __int64 *v9; // x8
  __int64 v10; // x0
  __int64 *v11; // x8
  __int64 *v12; // x9
  __int64 *v13; // x25
  __int64 v15; // [xsp+8h] [xbp-38h] BYREF

  v4 = (_QWORD *)sub_56C9F0(104, 8, 1092624384, 0LL, a2, a3);
  v5 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v4 = (_QWORD)(((__int64 *)((__int64*)goff_18F3010) + 2));
  v6 = (__int64)v4;
  v4[1] = (_QWORD)(v5);
  v7 = (__int64 **)(v4 + 1);
  v8 = sub_56DC80(v4 + 1);
  v9 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  *(_QWORD *)(v6 + 16) = v8;
  *(_WORD *)(v6 + 24) = 1;
  *v7 = v9;
  *(_QWORD *)(v6 + 48) = (_QWORD)(v5);
  v10 = sub_56DC80(v6 + 48);
  v11 = (long long *)(goff_18F2620);
  *(_BYTE *)(v6 + 64) = 1;
  v12 = ((__int64*)goff_18F3020);
  *(_QWORD *)(v6 + 56) = v10;
  v13 = v11 + 2;
  *(_QWORD *)(v6 + 48) = (_QWORD)(v11 + 2);
  *(_DWORD *)(v6 + 68) = -1;
  *(_QWORD *)(v6 + 72) = 0;
  *(_QWORD *)v6 = (_QWORD)(v12 + 2);
  *(_QWORD *)(v6 + 80) = (_QWORD)(v5);
  *(_QWORD *)(v6 + 88) = sub_56DC80(v6 + 80);
  *(_BYTE *)(v6 + 96) = 1;
  *(_QWORD *)(v6 + 80) = (_QWORD)(v13);
  *(_DWORD *)(v6 + 100) = 0;
  new ((void*)(&v15)) Big(((Big(*)(__typeof__(v6), __typeof__(a1), __typeof__(0)))sub_5753C0)(v6, a1, 0));
  return v6;
}
// N5storm4echo7session25SessionReJoinDelayMessageE, virtual slot 5
__int64 __fastcall sub_367C70(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // x0
  __int64 *v5; // x23
  __int64 v6; // x20
  __int64 **v7; // x21
  __int64 v8; // x0
  __int64 *v9; // x8
  __int64 v10; // x0
  __int64 *v11; // x8
  __int64 v12; // x9
  __int64 v14; // [xsp+8h] [xbp-38h] BYREF

  v4 = (_QWORD *)sub_56C9F0(80, 8, 1092624384, 0LL, a2, a3);
  v5 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v4 = (_QWORD)(((__int64 *)((__int64*)goff_18F3010) + 2));
  v6 = (__int64)v4;
  v4[1] = (_QWORD)(v5);
  v7 = (__int64 **)(v4 + 1);
  v8 = sub_56DC80(v4 + 1);
  v9 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  *(_QWORD *)(v6 + 16) = v8;
  *(_WORD *)(v6 + 24) = 1;
  *v7 = v9;
  *(_QWORD *)(v6 + 48) = (_QWORD)(v5);
  v10 = sub_56DC80(v6 + 48);
  *(_BYTE *)(v6 + 64) = 1;
  v11 = (long long *)(goff_18F2620);
  *(_QWORD *)(v6 + 56) = v10;
  v12 = (long long)(goff_18F34E0);
  *(_QWORD *)(v6 + 48) = (_QWORD)(v11 + 2);
  *(_DWORD *)(v6 + 68) = -1;
  *(_QWORD *)v6 = v12 + 16;
  *(_QWORD *)(v6 + 72) = 0;
  new ((void*)(&v14)) Big(((Big(*)(__typeof__(v6), __typeof__(a1), __typeof__(0)))sub_5753C0)(v6, a1, 0));
  return v6;
}
// N5storm4echo7session31SessionExitHostMigrationMessageE, virtual slot 5
__int64 __fastcall sub_368160(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // x0
  __int64 *v5; // x23
  __int64 v6; // x20
  __int64 **v7; // x21
  __int64 v8; // x0
  __int64 *v9; // x8
  __int64 v10; // x0
  __int64 *v11; // x8
  __int64 *v12; // x9
  __int64 *v13; // x25
  __int64 v15; // [xsp+8h] [xbp-38h] BYREF

  v4 = (_QWORD *)sub_56C9F0(104, 8, 1092624384, 0LL, a2, a3);
  v5 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v4 = (_QWORD)(((__int64 *)((__int64*)goff_18F3010) + 2));
  v6 = (__int64)v4;
  v4[1] = (_QWORD)(v5);
  v7 = (__int64 **)(v4 + 1);
  v8 = sub_56DC80(v4 + 1);
  v9 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  *(_QWORD *)(v6 + 16) = v8;
  *(_WORD *)(v6 + 24) = 1;
  *v7 = v9;
  *(_QWORD *)(v6 + 48) = (_QWORD)(v5);
  v10 = sub_56DC80(v6 + 48);
  v11 = (long long *)(goff_18F2620);
  *(_BYTE *)(v6 + 64) = 1;
  v12 = ((__int64*)goff_18F34A0);
  *(_QWORD *)(v6 + 56) = v10;
  v13 = v11 + 2;
  *(_QWORD *)(v6 + 48) = (_QWORD)(v11 + 2);
  *(_DWORD *)(v6 + 68) = -1;
  *(_QWORD *)(v6 + 72) = 0;
  *(_QWORD *)v6 = (_QWORD)(v12 + 2);
  *(_QWORD *)(v6 + 80) = (_QWORD)(v5);
  *(_QWORD *)(v6 + 88) = sub_56DC80(v6 + 80);
  *(_BYTE *)(v6 + 96) = 1;
  *(_QWORD *)(v6 + 80) = (_QWORD)(v13);
  *(_DWORD *)(v6 + 100) = 0;
  new ((void*)(&v15)) Big(((Big(*)(__typeof__(v6), __typeof__(a1), __typeof__(0)))sub_5753C0)(v6, a1, 0));
  return v6;
}
// N5storm4echo7session26SessionHostTransferMessageE, virtual slot 5
__int64 __fastcall sub_368690(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // x0
  __int64 *v5; // x23
  __int64 v6; // x20
  __int64 **v7; // x21
  __int64 v8; // x0
  __int64 *v9; // x8
  __int64 v10; // x0
  __int64 *v11; // x8
  __int64 v12; // x9
  __int64 *v13; // x25
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 *v16; // x8
  __int64 v17; // x0
  __int64 *v18; // x8
  __int64 v20; // [xsp+8h] [xbp-48h] BYREF

  v4 = (_QWORD *)sub_56C9F0(200, 8, 1092624384, 0LL, a2, a3);
  v5 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v4 = (_QWORD)(((__int64 *)((__int64*)goff_18F3010) + 2));
  v6 = (__int64)v4;
  v4[1] = (_QWORD)(v5);
  v7 = (__int64 **)(v4 + 1);
  v8 = sub_56DC80(v4 + 1);
  v9 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  *(_QWORD *)(v6 + 16) = v8;
  *(_WORD *)(v6 + 24) = 1;
  *v7 = v9;
  *(_QWORD *)(v6 + 48) = (_QWORD)(v5);
  v10 = sub_56DC80(v6 + 48);
  v11 = (long long *)(goff_18F2620);
  *(_BYTE *)(v6 + 64) = 1;
  v12 = (long long)(((__int64*)goff_18F3430));
  *(_QWORD *)(v6 + 56) = v10;
  v13 = v11 + 2;
  *(_QWORD *)(v6 + 48) = (_QWORD)(v11 + 2);
  *(_DWORD *)(v6 + 68) = -1;
  *(_QWORD *)(v6 + 72) = 0;
  *(_QWORD *)v6 = v12 + 16;
  *(_QWORD *)(v6 + 80) = (_QWORD)(v5);
  v14 = sub_56DC80(v6 + 80);
  *(_BYTE *)(v6 + 96) = 1;
  *(_QWORD *)(v6 + 88) = v14;
  *(_QWORD *)(v6 + 80) = (_QWORD)(v13);
  *(_DWORD *)(v6 + 100) = 0;
  *(_QWORD *)(v6 + 104) = (_QWORD)(v5);
  v15 = sub_56DC80(v6 + 104);
  v16 = (long long *)(goff_18EEE10);
  *(_QWORD *)(v6 + 112) = v15;
  *(_WORD *)(v6 + 120) = 1;
  *(_QWORD *)(v6 + 104) = (_QWORD)(v16 + 2);
  *(_QWORD *)(v6 + 128) = (_QWORD)(v5);
  v17 = sub_56DC80(v6 + 128);
  *(_BYTE *)(v6 + 144) = 1;
  v18 = ((__int64 *)((__int64*)goff_18EED80) + 2);
  *(_QWORD *)(v6 + 136) = v17;
  *(_QWORD *)(v6 + 128) = (_QWORD)(v18);
  *(_QWORD *)(v6 + 160) = 0;
  *(_QWORD *)(v6 + 168) = 0;
  *(_QWORD *)(v6 + 152) = 0;
  *(_QWORD *)(v6 + 176) = (_QWORD)(v5);
  *(_QWORD *)(v6 + 184) = sub_56DC80(v6 + 176);
  *(_BYTE *)(v6 + 192) = 1;
  *(_QWORD *)(v6 + 176) = (_QWORD)(((__int64 *)goff_18F2678 + 2));
  *(_DWORD *)(v6 + 196) = -1;
  new ((void*)(&v20)) Big(((Big(*)(__typeof__(v6), __typeof__(a1), __typeof__(0)))sub_5753C0)(v6, a1, 0));
  return v6;
}
// N5storm4echo7session28SessionPeerStreamOpenMessageE, virtual slot 5
__int64 __fastcall sub_369B80(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // x0
  __int64 *v5; // x23
  __int64 v6; // x20
  __int64 **v7; // x21
  __int64 v8; // x0
  __int64 *v9; // x8
  __int64 v10; // x0
  __int64 *v11; // x8
  __int64 *v12; // x9
  __int64 v14; // [xsp+8h] [xbp-38h] BYREF

  v4 = (_QWORD *)sub_56C9F0(80, 8, 1092624384, 0LL, a2, a3);
  v5 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v4 = (_QWORD)(((__int64 *)((__int64*)goff_18F3010) + 2));
  v6 = (__int64)v4;
  v4[1] = (_QWORD)(v5);
  v7 = (__int64 **)(v4 + 1);
  v8 = sub_56DC80(v4 + 1);
  v9 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  *(_QWORD *)(v6 + 16) = v8;
  *(_WORD *)(v6 + 24) = 1;
  *v7 = v9;
  *(_QWORD *)(v6 + 48) = (_QWORD)(v5);
  v10 = sub_56DC80(v6 + 48);
  *(_BYTE *)(v6 + 64) = 1;
  v11 = (long long *)(goff_18F2620);
  *(_QWORD *)(v6 + 56) = v10;
  v12 = ((__int64*)goff_18F34A8);
  *(_QWORD *)(v6 + 48) = (_QWORD)(v11 + 2);
  *(_DWORD *)(v6 + 68) = -1;
  *(_QWORD *)v6 = (_QWORD)(v12 + 2);
  *(_QWORD *)(v6 + 72) = 0;
  new ((void*)(&v14)) Big(((Big(*)(__typeof__(v6), __typeof__(a1), __typeof__(0)))sub_5753C0)(v6, a1, 0));
  return v6;
}
// N5storm4echo7session28SessionWaitingRestartMessageE, virtual slot 5
__int64 __fastcall sub_36A070(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // x0
  __int64 *v5; // x23
  __int64 v6; // x20
  __int64 **v7; // x21
  __int64 v8; // x0
  __int64 *v9; // x8
  __int64 v10; // x0
  __int64 *v11; // x8
  __int64 *v12; // x9
  __int64 v14; // [xsp+8h] [xbp-38h] BYREF

  v4 = (_QWORD *)sub_56C9F0(80, 8, 1092624384, 0LL, a2, a3);
  v5 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v4 = (_QWORD)(((__int64 *)((__int64*)goff_18F3010) + 2));
  v6 = (__int64)v4;
  v4[1] = (_QWORD)(v5);
  v7 = (__int64 **)(v4 + 1);
  v8 = sub_56DC80(v4 + 1);
  v9 = ((__int64 *)((__int64*)goff_18EED90) + 2);
  *(_QWORD *)(v6 + 16) = v8;
  *(_WORD *)(v6 + 24) = 1;
  *v7 = v9;
  *(_QWORD *)(v6 + 48) = (_QWORD)(v5);
  v10 = sub_56DC80(v6 + 48);
  *(_BYTE *)(v6 + 64) = 1;
  v11 = (long long *)(goff_18F2620);
  *(_QWORD *)(v6 + 56) = v10;
  v12 = ((__int64*)goff_18F3018);
  *(_QWORD *)(v6 + 48) = (_QWORD)(v11 + 2);
  *(_DWORD *)(v6 + 68) = -1;
  *(_QWORD *)v6 = (_QWORD)(v12 + 2);
  *(_QWORD *)(v6 + 72) = 0;
  new ((void*)(&v14)) Big(((Big(*)(__typeof__(v6), __typeof__(a1), __typeof__(0)))sub_5753C0)(v6, a1, 0));
  return v6;
}
Big sub_4047F0(__int64 a1, __int64 a2)
{
  Big ret_;
  int *a3 = (int *)&ret_;

  _DWORD *v6; // x22
  __int64 **result; // x0
  __int64 v8; // x22
  __int64 *v9; // x8
  char *v10; // x21
  unsigned __int64 *v11; // x8
  unsigned __int64 v12; // x9
  int v13; // w8

  v6 = (_DWORD *)sub_576650(a2);
  result = (__int64 **)sub_576650(*(_QWORD *)(a1 + 96));
  if ( *v6 == *(_DWORD *)result )
  {
    v8 = sub_56C9F0(512, 8, 1092624384, 0LL, &unk_1326E41, 0);
    sub_268070(v8, a2);
    result = (__int64 **)_Znwm(0x20u);
    v9 = ((__int64 *)((__int64*)goff_18EDEF0) + 2);
    result[2] = nullptr;
    *result = v9;
    result[3] = (__int64 *)v8;
    result[1] = nullptr;
    v10 = *(char **)(a1 + 104);
    *(_QWORD *)(a1 + 96) = v8;
    *(_QWORD *)(a1 + 104) = (_QWORD)(result);
    if ( v10 != nullptr )
    {
      v11 = (unsigned __int64 *)((char *)v10 + 8);
      v12 = __atomic_fetch_sub(v11, 1, 5);
      if ( v12 == 0 )
      {
        (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 16LL))(v10);
        result = (__int64 **)std____shared_weak_count____release_weak(v10);
      }
    }
    v13 = 1;
  }
  else
  {
    v13 = -1000000;
  }
  *a3 = v13;
  a3[1] = 0;
  return ret_;
  return ret_;
}
Big sub_4285A0(__int64 result, __int64 a2, int a3, int a4)
{
  Big ret_;
  int *a5 = (int *)&ret_;

  int v6; // w8
  __int64 v7; // x20
  __int64 v8; // x24
  __int64 v12; // x25
  __int64 **v13; // x0
  __int64 *v14; // x8
  char *v15; // x24
  unsigned __int64 *v16; // x8
  unsigned __int64 v17; // x9
  __int64 v18; // x0

  v6 = -1000000;
  if ( *(_BYTE *)(result + 126) == 0 )
  {
    v7 = result;
    if ( *(_BYTE *)(result + 124) == 0 )
    {
      v8 = *(_QWORD *)(a2 + 40);
      v12 = sub_56C9F0(512, 8, 1092624384, 0LL, &unk_1326E41, 0);
      sub_268070(v12, v8);
      v13 = (__int64 **)_Znwm(0x20u);
      v14 = ((__int64 *)((__int64*)goff_18EDEF0) + 2);
      v13[2] = nullptr;
      *v13 = v14;
      v13[3] = (__int64 *)v12;
      v13[1] = nullptr;
      v15 = *(char **)(v7 + 16);
      *(_QWORD *)(v7 + 8) = v12;
      *(_QWORD *)(v7 + 16) = (_QWORD)(v13);
      if ( v15 != nullptr )
      {
        v16 = (unsigned __int64 *)((char *)v15 + 8);
        v17 = __atomic_fetch_sub(v16, 1, 5);
        if ( v17 == 0 )
        {
          (*(void (__fastcall **)(char *))(*(_QWORD *)v15 + 16LL))(v15);
          std____shared_weak_count____release_weak(v15);
        }
      }
      *(_DWORD *)v7 = *(_DWORD *)(a2 + 36);
      *(_DWORD *)(v7 + 28) = a3;
      *(_DWORD *)(v7 + 24) = a4;
      *(_QWORD *)(v7 + 32) = *(_QWORD *)(a2 + 56);
      v18 = *(_QWORD *)(v7 + 8);
      result = sub_264540(v18);
      *(_QWORD *)(v7 + 88) = *(_QWORD *)result;
      *(_BYTE *)(v7 + 127) = *(_BYTE *)(a2 + 64);
      v6 = 1;
      *(_BYTE *)(v7 + 124) = 1;
    }
  }
  *a5 = v6;
  a5[1] = 0;
  return ret_;
  return ret_;
}
// N5storm4echo28CServiceUnicastDataContainerE, virtual slot 5
__int64 __fastcall sub_446670(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // x0
  __int64 *v5; // x9
  __int64 v6; // x20
  _QWORD *v7; // x21
  __int64 v9; // [xsp+8h] [xbp-18h] BYREF

  v4 = (_QWORD *)sub_56C9F0(40, 8, 1092624384, 0LL, a2, a3);
  v5 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *v4 = (_QWORD)(((__int64 *)goff_18F5BB0 + 2));
  v6 = (__int64)v4;
  v4[1] = (_QWORD)(v5);
  v7 = v4 + 1;
  v4[2] = sub_56DC80(v4 + 1);
  *(_WORD *)(v6 + 24) = 1;
  *v7 = (_QWORD)(((__int64 *)goff_18EEE10 + 2));
  *(_WORD *)(v6 + 32) = 0;
  new ((void*)(&v9)) Big(((Big(*)(__typeof__(v6), __typeof__(a1), __typeof__(0)))sub_5753C0)(v6, a1, 0));
  return v6;
}
__int64 __fastcall sub_549110(
        __int64 a1,
        unsigned int a2,
        __int64 *a3,
        const RecoveredSdkText *a4,
        const RecoveredSdkText *a5,
        const RecoveredSdkText *a6,
        __int16 a7)
{
  __int64 v13; // x8
  _QWORD v15[3]; // [xsp+8h] [xbp-58h] BYREF

  sub_51D050(a1, 1, a2, v15);
  *(_QWORD *)a1 = (_QWORD)(goff_18F9B90 + 16);
  new ((void*)((_QWORD **)(a1 + 136))) Big(((Big(*)(__typeof__(a3)))sub_549210)(a3));
  *(_QWORD *)(a1 + 160) = 0;
  sub_4EC680(a1 + 168);
  sub_4EC680(a1 + 312);
  *(_QWORD *)(a1 + 456) = (_QWORD)(a3);
  Recovered_ResultTextCopy((RecoveredSdkText *)(a1 + 464), a6);
  Recovered_ResultTextCopy((RecoveredSdkText *)(a1 + 472), a5);
  *(_WORD *)(a1 + 480) = a7;
  *(_QWORD *)(a1 + 488) = 0;
  Recovered_ResultTextCopy((RecoveredSdkText *)(a1 + 496), a4);
  *(_DWORD *)(a1 + 128) = 4;
  v13 = *(_QWORD *)(a1 + 456);
  if ( *(_DWORD *)(v13 + 80) == 0 )
    *(_DWORD *)(v13 + 80) = 1;
  v15[0] = (_QWORD)(((__int64*)goff_18F9B98));
  v15[1] = 0;
  v15[2] = (_QWORD)(&unk_1326E41);
  return sub_51D3A0(a1, v15);
}
Big sub_5754B0(__int64 a1, __int64 a2)
{
  Big ret_;
  int *a3 = (int *)&ret_;

  _DWORD *v6; // x22
  _DWORD *result; // x0
  int v8; // w8
  _QWORD v9[2]; // [xsp+0h] [xbp-30h] BYREF

  v6 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 72LL))(a1);
  result = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
  if ( *v6 == *result )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 112LL))(a1, a2);
    v9[0] = (_QWORD)(((char *)((__int64*)goff_18FA210) + 16));
    v9[1] = 0;
    result = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 104LL))(a1, v9);
    v8 = 1;
  }
  else
  {
    v8 = -1000000;
  }
  *a3 = v8;
  a3[1] = 0;
  return ret_;
  return ret_;
}
}
