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
struct Big { char data[4096]; };
inline void* operator new(size_t, void* where) noexcept { return where; }
extern "C" {
void* memcpy(void*, const void*, size_t); void* memset(void*, int, size_t); void* memmove(void*, const void*, size_t); int memcmp(const void*, const void*, size_t); size_t strlen(const char*); int strcmp(const char*, const char*); char* strcpy(char*, const char*); char* strncpy(char*, const char*, size_t); int strncmp(const char*, const char*, size_t); void free(void*) noexcept; void* malloc(size_t); float fabsf(float); float sqrtf(float); float floorf(float); float ceilf(float);
__int64 Recovered_ResultTextConstruct(...);
extern char goff_18EC818[];
extern char goff_18EDD08[];
extern char goff_18EDD18[];
extern char goff_18EDF98[];
extern char goff_18EE0B8[];
extern char goff_18EE0C8[];
extern char goff_18EE0D8[];
extern char goff_18EE0E0[];
extern char goff_18EE0F8[];
extern char goff_18EE100[];
extern char goff_18EE120[];
extern char goff_18EE148[];
extern char goff_18EE150[];
extern char goff_18EE160[];
extern char goff_18EE168[];
extern char goff_18EE170[];
extern char goff_18EE178[];
extern char goff_18EE180[];
extern char goff_18EE188[];
extern char goff_18EE190[];
extern char goff_18EE198[];
extern char goff_18EEE10[];
extern char goff_18F1208[];
extern char goff_18F1518[];
extern char goff_18F28F0[];
extern char goff_18F28F8[];
extern char goff_18F2CF0[];
extern char goff_18F2D38[];
extern char goff_18F4948[];
extern char goff_18F5A10[];
extern char goff_18F6C88[];
extern char goff_18F7A40[];
extern char goff_18F8718[];
extern char goff_18F8720[];
extern char goff_18F8728[];
extern char goff_18F8730[];
extern char goff_18F8738[];
extern char goff_18F8740[];
extern char goff_18FA228[];
extern char goff_18FA680[];
extern char goff_18FA9D0[];
extern char goff_18FB8B8[];
__attribute__((visibility("hidden"))) __int64 nullsub_1152(...);
extern __attribute__((visibility("hidden"))) __int64 qword_1912460;
extern __attribute__((visibility("hidden"))) __int64 qword_1913338;
extern __attribute__((visibility("hidden"))) __int64 qword_1913340;
extern __attribute__((visibility("hidden"))) __int64 qword_1914468;
__int64 std____shared_weak_count__lock(...);
__int64 std__mutex__lock(...);
__int64 std__mutex__unlock(...);
__int64 std__shared_timed_mutex__lock(...);
__int64 std__shared_timed_mutex__lock_shared(...);
__int64 std__shared_timed_mutex__unlock(...);
__int64 std__shared_timed_mutex__unlock_shared(...);
__int64 std__string__basic_string(...);
__attribute__((visibility("hidden"))) __int64 sub_1E54D0(...);
__attribute__((visibility("hidden"))) __int64 sub_257C10(...);
__attribute__((visibility("hidden"))) __int64 sub_2643E0(...);
__attribute__((visibility("hidden"))) __int64 sub_264540(...);
__attribute__((visibility("hidden"))) __int64 sub_2B7A60(...);
__attribute__((visibility("hidden"))) __int64 sub_2B8A90(...);
__attribute__((visibility("hidden"))) __int64 sub_2B8AD0(...);
__attribute__((visibility("hidden"))) __int64 sub_2B8B00(...);
__attribute__((visibility("hidden"))) __int64 sub_2BAA10(...);
__attribute__((visibility("hidden"))) __int64 sub_2BCEF0(...);
__attribute__((visibility("hidden"))) __int64 sub_2D5CD0(...);
__attribute__((visibility("hidden"))) __int64 sub_2E45E0(...);
__attribute__((visibility("hidden"))) __int64 sub_2FAC80(...);
__attribute__((visibility("hidden"))) __int64 sub_313860(...);
__attribute__((visibility("hidden"))) __int64 sub_313C80(...);
__attribute__((visibility("hidden"))) __int64 sub_314890(...);
__attribute__((visibility("hidden"))) __int64 sub_314A90(...);
__attribute__((visibility("hidden"))) __int64 sub_315310(...);
__attribute__((visibility("hidden"))) __int64 sub_338270(...);
__attribute__((visibility("hidden"))) __int64 sub_33B6E0(...);
__attribute__((visibility("hidden"))) __int64 sub_33C4C0(...);
__attribute__((visibility("hidden"))) __int64 sub_33D920(...);
__attribute__((visibility("hidden"))) __int64 sub_33E470(...);
__attribute__((visibility("hidden"))) __int64 sub_33EB70(...);
__attribute__((visibility("hidden"))) __int64 sub_340FB0(...);
__attribute__((visibility("hidden"))) __int64 sub_34F7E0(...);
__attribute__((visibility("hidden"))) __int64 sub_352510(...);
__attribute__((visibility("hidden"))) __int64 sub_354910(...);
__attribute__((visibility("hidden"))) __int64 sub_3593C0(...);
__attribute__((visibility("hidden"))) __int64 sub_36EA0(...);
__attribute__((visibility("hidden"))) __int64 sub_37030(...);
__attribute__((visibility("hidden"))) __int64 sub_3784E0(...);
__attribute__((visibility("hidden"))) __int64 sub_3789E0(...);
__attribute__((visibility("hidden"))) __int64 sub_388DA0(...);
__attribute__((visibility("hidden"))) __int64 sub_389F00(...);
__attribute__((visibility("hidden"))) __int64 sub_38B230(...);
__attribute__((visibility("hidden"))) __int64 sub_38BD20(...);
__attribute__((visibility("hidden"))) __int64 sub_39D110(...);
__attribute__((visibility("hidden"))) __int64 sub_3E15C0(...);
__attribute__((visibility("hidden"))) __int64 sub_4145D0(...);
__attribute__((visibility("hidden"))) __int64 sub_414F80(...);
__attribute__((visibility("hidden"))) __int64 sub_415030(...);
__attribute__((visibility("hidden"))) __int64 sub_415110(...);
__attribute__((visibility("hidden"))) __int64 sub_4185B0(...);
__attribute__((visibility("hidden"))) __int64 sub_4210B0(...);
__attribute__((visibility("hidden"))) __int64 sub_421550(...);
__attribute__((visibility("hidden"))) __int64 sub_48D1D0(...);
__attribute__((visibility("hidden"))) __int64 sub_48D490(...);
__attribute__((visibility("hidden"))) __int64 sub_48D770(...);
__attribute__((visibility("hidden"))) __int64 sub_48DA30(...);
__attribute__((visibility("hidden"))) __int64 sub_48DD10(...);
__attribute__((visibility("hidden"))) __int64 sub_48DFF0(...);
__attribute__((visibility("hidden"))) __int64 sub_4B2DB0(...);
__attribute__((visibility("hidden"))) __int64 sub_4F5EF0(...);
__attribute__((visibility("hidden"))) __int64 sub_4FABF0(...);
__attribute__((visibility("hidden"))) __int64 sub_4FAC60(...);
__attribute__((visibility("hidden"))) __int64 sub_50C400(...);
__attribute__((visibility("hidden"))) __int64 sub_51EF40(...);
__attribute__((visibility("hidden"))) __int64 sub_543E30(...);
__attribute__((visibility("hidden"))) __int64 sub_543E40(...);
__attribute__((visibility("hidden"))) __int64 sub_543E50(...);
__attribute__((visibility("hidden"))) __int64 sub_543E60(...);
__attribute__((visibility("hidden"))) __int64 sub_543E70(...);
__attribute__((visibility("hidden"))) __int64 sub_543E80(...);
__attribute__((visibility("hidden"))) __int64 sub_5490B0(...);
__attribute__((visibility("hidden"))) __int64 sub_54C530(...);
__attribute__((visibility("hidden"))) __int64 sub_54C960(...);
__attribute__((visibility("hidden"))) __int64 sub_54D420(...);
__attribute__((visibility("hidden"))) __int64 sub_54D4C0(...);
__attribute__((visibility("hidden"))) unsigned int sub_54D560(...);
__attribute__((visibility("hidden"))) __int64 sub_552BA0(...);
__attribute__((visibility("hidden"))) __int64 sub_553B00(...);
__attribute__((visibility("hidden"))) __int64 sub_556C40(...);
__attribute__((visibility("hidden"))) __int64 sub_56B030(...);
__attribute__((visibility("hidden"))) __int64 sub_56C9F0(...);
__attribute__((visibility("hidden"))) __int64 sub_56CA00(...);
__attribute__((visibility("hidden"))) __int64 sub_56CD80(...);
__attribute__((visibility("hidden"))) __int64 sub_56DC80(...);
__attribute__((visibility("hidden"))) __int64 sub_571270(...);
__attribute__((visibility("hidden"))) __int64 sub_571390(...);
__attribute__((visibility("hidden"))) __int64 sub_5753C0(...);
__attribute__((visibility("hidden"))) __int64 sub_575E20(...);
__attribute__((visibility("hidden"))) __int64 sub_5773C0(...);
__attribute__((visibility("hidden"))) __int64 sub_578210(...);
__attribute__((visibility("hidden"))) __int64 sub_578410(...);
__attribute__((visibility("hidden"))) __int64 sub_57D200(...);
__attribute__((visibility("hidden"))) __int64 sub_57EDA0(...);
__attribute__((visibility("hidden"))) __int64 sub_57EDC0(...);
__attribute__((visibility("hidden"))) __int64 sub_57EF80(...);
__attribute__((visibility("hidden"))) __int64 sub_57EF90(...);
__attribute__((visibility("hidden"))) __int64 sub_5859F0(...);
__attribute__((visibility("hidden"))) __int64 sub_586640(...);
__attribute__((visibility("hidden"))) __int64 sub_5889E0(...);
__attribute__((visibility("hidden"))) __int64 sub_588E20(...);
__attribute__((visibility("hidden"))) __int64 sub_5894B0(...);
__attribute__((visibility("hidden"))) __int64 sub_58A960(...);
__attribute__((visibility("hidden"))) __int64 sub_58AEC0(...);
__attribute__((visibility("hidden"))) __int64 sub_58B010(...);
__attribute__((visibility("hidden"))) __int64 sub_58B1B0(...);
__attribute__((visibility("hidden"))) __int64 sub_58C640(...);
__attribute__((visibility("hidden"))) __int64 sub_58C7A0(...);
__attribute__((visibility("hidden"))) __int64 sub_592810(...);
__attribute__((visibility("hidden"))) __int64 sub_5A07D0(...);
__attribute__((visibility("hidden"))) __int64 sub_5A8850(...);
__attribute__((visibility("hidden"))) __int64 sub_5B87B0(...);
__attribute__((visibility("hidden"))) unsigned int sub_5C8CB0(...);
__attribute__((visibility("hidden"))) __int64 sub_5D0C40(...);
__attribute__((visibility("hidden"))) __int64 sub_5D0DC0(...);
__attribute__((visibility("hidden"))) __int64 sub_5E03F0(...);
__attribute__((visibility("hidden"))) __int64 sub_5E0500(...);
__attribute__((visibility("hidden"))) __int64 sub_5E24E0(...);
__attribute__((visibility("hidden"))) __int64 sub_5E25F0(...);
__attribute__((visibility("hidden"))) __int64 sub_5E2AF0(...);
__attribute__((visibility("hidden"))) __int64 sub_5E2C00(...);
__attribute__((visibility("hidden"))) __int64 sub_5E3610(...);
__attribute__((visibility("hidden"))) __int64 sub_5E41C0(...);
__attribute__((visibility("hidden"))) __int64 sub_5E5110(...);
__attribute__((visibility("hidden"))) __int64 sub_5E9E90(...);
__attribute__((visibility("hidden"))) __int64 sub_5FA30(...);
__attribute__((visibility("hidden"))) __int64 sub_628C10(...);
__attribute__((visibility("hidden"))) __int64 sub_697BF0(...);
__attribute__((visibility("hidden"))) __int64 sub_7E7E0(...);
__attribute__((visibility("hidden"))) __int64 sub_C22610(...);
extern __attribute__((visibility("hidden"))) char unk_1326E41;
extern __attribute__((visibility("hidden"))) char unk_13610B8;

Big sub_410F0(__int64 a1)
{
  Big ret_;
  unsigned __int64 *a2 = (unsigned __int64 *)&ret_;

  __int64 v3; // x8
  __int64 v4; // x1
  unsigned __int64 result; // x0
  unsigned int *v6; // x8
  __int64 *v7; // x9
  unsigned int v8; // w9

  v3 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v3 + 16) != 0 )
  {
    v4 = *(_QWORD *)(v3 + 8);
    if ( v4 != 0 )
      { sub_7E7E0(a2, v4); return ret_; }
  }
  result = sub_36EA0(0x28u, 4u, 0, 1086324736);
  *(_DWORD *)(result + 8) = 0;
  v6 = (unsigned int *)(result + 8);
  v7 = ((__int64*)goff_18EC818);
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)result = (_QWORD)(v7 + 2);
  *(_QWORD *)(result + 16) = 0;
  *a2 = 0;
  if ( result != 0 )
  {
    v8 = __atomic_fetch_add(v6, 1, 5);
    __atomic_exchange_n(a2, result, 5);
  }
  else
  {
    __atomic_exchange_n(a2, 0, 5);
  }
  return ret_;
  return ret_;
}
Big sub_411A0(__int64 a1)
{
  Big ret_;
  unsigned __int64 *a2 = (unsigned __int64 *)&ret_;

  __int64 v3; // x1
  unsigned __int64 result; // x0
  unsigned int *v5; // x8
  __int64 *v6; // x9
  unsigned int v7; // w9

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  if ( v3 != 0 && (*(_WORD *)(v3 + 22) & 0x400) != 0 )
  {
    if ( (*(_WORD *)(v3 + 22) & 0x1000) == 0 )
      v3 = *(_QWORD *)(v3 + 8);
    { sub_7E7E0(a2, v3); return ret_; }
  }
  else
  {
    result = sub_36EA0(0x28u, 4u, 0, 1086324736);
    *(_DWORD *)(result + 8) = 0;
    v5 = (unsigned int *)(result + 8);
    v6 = ((__int64*)goff_18EC818);
    *(_QWORD *)(result + 24) = 0;
    *(_QWORD *)(result + 32) = 0;
    *(_QWORD *)result = (_QWORD)(v6 + 2);
    *(_QWORD *)(result + 16) = 0;
    *a2 = 0;
    if ( result != 0 )
    {
      v7 = __atomic_fetch_add(v5, 1, 5);
      __atomic_exchange_n(a2, result, 5);
    }
    else
    {
      __atomic_exchange_n(a2, 0, 5);
    }
  }
  return ret_;
  return ret_;
}
Big sub_FD030(char *result)
{
  Big ret_;
  __int64 a2 = (__int64)&ret_;

  unsigned __int64 v2; // x10

  if ( *((_DWORD *)result + 13) != 0 )
  {
    v2 = atomic_load((unsigned __int64 *)result + 7);
    if ( v2 != 0 )
      { new ((void*)((char **)a2)) Big(((Big(*)(__typeof__((unsigned __int64 *)result + 7), __typeof__(*((unsigned int *)result + 13))))sub_5FA30)((unsigned __int64 *)result + 7, *((unsigned int *)result + 13))); return ret_; }
  }
  *(_QWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)a2 = 0;
  return ret_;
  return ret_;
}

// N11ubiservices25WebSocketHandshakeRequestE, virtual slot 3
Big sub_FE700()
{
  Big ret_;
  __int64 a1 = (__int64)&ret_;

  { sub_7E7E0(a1, &unk_1326E41); return ret_; }
  return ret_;
}

Big sub_258A10(__int64 a1, __int64 unused1, int a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  __int64 v3; // x22

  v3 = a1 + 304;
  sub_57EF80(a1 + 304);
  *(_DWORD *)(a1 + 36) -= a2;
  *a3 = 1;
  { sub_57EF90(v3); return ret_; }
  return ret_;
}

Big sub_258A60(__int64 a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  __int64 v2; // x20

  v2 = a1 + 304;
  sub_57EF80(a1 + 304);
  *a2 = 1;
  { sub_57EF90(v2); return ret_; }
  return ret_;
}

Big sub_25DCD0(__int64 *a1, int a2, __int64 *a3)
{
  Big ret_;
  _QWORD *a4 = (_QWORD *)&ret_;

  __int64 result; // x0
  __int64 v9; // x0
  __int64 v10; // [xsp+8h] [xbp-28h] BYREF

  result = sub_313860();
  if ( result != 0 )
  {
    v9 = sub_313860();
    v10 = *a3;
    { new ((void*)((__int64)a4)) Big(((Big(*)(__typeof__(v9), __typeof__(a1), __typeof__(a2), __typeof__(&v10)))sub_313C80)(v9, a1, a2, &v10)); return ret_; }
  }
  else
  {
    *a4 = 4293967345LL;
  }
  return ret_;
  return ret_;
}

Big sub_264380(__int64 a1, int a2, __int64 a3, unsigned int a4, char a5, int a6, __int64 *a7)
{
  Big ret_;
  _DWORD *a8 = (_DWORD *)&ret_;

  _QWORD *result; // x0
  _QWORD *v10; // [xsp+8h] [xbp-8h] BYREF
  __int64 v9; // [xsp+0h] [xbp-10h] BYREF

  v9 = *a7;
  v10 = nullptr;
  new ((void*)(a8)) Big(((Big(*)(__typeof__(a1), __typeof__(a2), __typeof__(a3), __typeof__(a4), __typeof__(a5 & 1), __typeof__((__int64 *)&v10), __typeof__(a6), __typeof__(&v9)))sub_2643E0)(a1, a2, a3, a4, a5 & 1, (__int64 *)&v10, a6, &v9));
  result = v10;
  v10 = nullptr;
  if ( result != nullptr )
    { (_QWORD *)sub_2B7A60(result, (__int64)&unk_1326E41, 0); return ret_; }
  return ret_;
  return ret_;
}

Big sub_264650(int a1, _DWORD *a2, int a3, __int64 *a4)
{
  Big ret_;
  __int64 a5 = (__int64)&ret_;

  __int64 v10; // x24
  __int64 v11; // x0
  __int64 v12; // x8
  __int64 result; // x0
  __int64 v14; // [xsp+8h] [xbp-38h] BYREF

  v10 = sub_313860();
  v11 = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v12 = *a4;
  *(_DWORD *)(v11 + 8) = a3;
  *(_DWORD *)(v11 + 32) = a1;
  *(_QWORD *)(v11 + 16) = v12;
  *(_QWORD *)(v11 + 24) = 0;
  *(_QWORD *)v11 = (_QWORD)(((__int64 *)((__int64*)goff_18EE0B8) + 2));
  *(_DWORD *)(v11 + 36) = *a2;
  *(_DWORD *)(v11 + 40) = a2[1];
  v14 = v11;
  new ((void*)(a5)) Big(((Big(*)(__typeof__(v10), __typeof__(&v14)))sub_314A90)(v10, &v14));
  result = v14;
  v14 = 0;
  if ( result != 0 )
    { (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result); return ret_; }
  return ret_;
  return ret_;
}
Big sub_264810(int a1, int a2, __int64 *a3)
{
  Big ret_;
  __int64 a4 = (__int64)&ret_;

  __int64 v8; // x23
  __int64 v9; // x0
  __int64 v10; // x8
  __int64 result; // x0
  __int64 v12; // [xsp+8h] [xbp-28h] BYREF

  v8 = sub_313860();
  v9 = sub_56C9F0(40, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v10 = *a3;
  *(_DWORD *)(v9 + 8) = a2;
  *(_DWORD *)(v9 + 32) = a1;
  *(_QWORD *)(v9 + 16) = v10;
  *(_QWORD *)(v9 + 24) = 0;
  *(_QWORD *)v9 = (_QWORD)(((__int64 *)((__int64*)goff_18EE0C8) + 2));
  v12 = v9;
  new ((void*)(a4)) Big(((Big(*)(__typeof__(v8), __typeof__(&v12)))sub_314A90)(v8, &v12));
  result = v12;
  v12 = 0;
  if ( result != 0 )
    { (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result); return ret_; }
  return ret_;
  return ret_;
}
Big sub_264AA0(int a1, int a2, int a3, __int64 *a4)
{
  Big ret_;
  __int64 a5 = (__int64)&ret_;

  __int64 v10; // x24
  __int64 v11; // x0
  __int64 v12; // x8
  __int64 *v13; // x9
  __int64 result; // x0
  __int64 v15; // [xsp+8h] [xbp-38h] BYREF

  v10 = sub_313860();
  v11 = sub_56C9F0(40, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v12 = *a4;
  *(_DWORD *)(v11 + 8) = a3;
  v13 = ((__int64*)goff_18EE0D8);
  *(_QWORD *)(v11 + 16) = v12;
  *(_QWORD *)(v11 + 24) = 0;
  *(_QWORD *)v11 = (_QWORD)(v13 + 2);
  *(_DWORD *)(v11 + 32) = a1;
  *(_DWORD *)(v11 + 36) = a2;
  v15 = v11;
  new ((void*)(a5)) Big(((Big(*)(__typeof__(v10), __typeof__(&v15)))sub_314A90)(v10, &v15));
  result = v15;
  v15 = 0;
  if ( result != 0 )
    { (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result); return ret_; }
  return ret_;
  return ret_;
}
Big sub_264B60(int a1, int a2, __int64 *a3)
{
  Big ret_;
  __int64 a4 = (__int64)&ret_;

  __int64 v8; // x23
  __int64 v9; // x0
  __int64 v10; // x8
  __int64 result; // x0
  __int64 v12; // [xsp+8h] [xbp-28h] BYREF

  v8 = sub_313860();
  v9 = sub_56C9F0(40, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v10 = *a3;
  *(_DWORD *)(v9 + 8) = a2;
  *(_DWORD *)(v9 + 32) = a1;
  *(_QWORD *)(v9 + 16) = v10;
  *(_QWORD *)(v9 + 24) = 0;
  *(_QWORD *)v9 = (_QWORD)(((__int64 *)((__int64*)goff_18EE0E0) + 2));
  v12 = v9;
  new ((void*)(a4)) Big(((Big(*)(__typeof__(v8), __typeof__(&v12)))sub_314A90)(v8, &v12));
  result = v12;
  v12 = 0;
  if ( result != 0 )
    { (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result); return ret_; }
  return ret_;
  return ret_;
}
Big sub_265050(int a1, _DWORD *a2, int a3, __int64 *a4)
{
  Big ret_;
  _DWORD *a5 = (_DWORD *)&ret_;

  _QWORD *v10; // x24
  __int64 v11; // x0
  __int64 v12; // x8
  __int64 *v13; // x8
  __int64 result; // x0
  __int64 v15; // [xsp+8h] [xbp-38h] BYREF

  v10 = (_QWORD *)sub_313860();
  v11 = sub_56C9F0(40, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v12 = *a4;
  *(_DWORD *)(v11 + 8) = a3;
  *(_QWORD *)(v11 + 16) = v12;
  *(_QWORD *)(v11 + 24) = 0;
  v13 = ((__int64*)goff_18EE0F8);
  *(_DWORD *)(v11 + 32) = a1;
  *(_QWORD *)v11 = (_QWORD)(v13 + 2);
  *(_DWORD *)(v11 + 36) = *a2;
  v15 = v11;
  new ((void*)(a5)) Big(((Big(*)(__typeof__(v10), __typeof__((__int64)&v15)))sub_315310)(v10, (__int64)&v15));
  result = v15;
  v15 = 0;
  if ( result != 0 )
    { (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result); return ret_; }
  return ret_;
  return ret_;
}
Big sub_265120(int a1, _DWORD *a2, int a3, int a4, int a5, int a6, __int64 *a7)
{
  Big ret_;
  __int64 a8 = (__int64)&ret_;

  __int64 v16; // x27
  __int64 v17; // x0
  __int64 v18; // x8
  __int64 *v19; // x9
  __int64 result; // x0
  __int64 v21; // [xsp+8h] [xbp-48h] BYREF

  v16 = sub_313860();
  v17 = sub_56C9F0(56, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v18 = *a7;
  *(_DWORD *)(v17 + 8) = a6;
  *(_DWORD *)(v17 + 32) = a1;
  v19 = ((__int64*)goff_18EE100);
  *(_QWORD *)(v17 + 16) = v18;
  *(_QWORD *)(v17 + 24) = 0;
  *(_QWORD *)v17 = (_QWORD)(v19 + 2);
  *(_DWORD *)(v17 + 36) = *a2;
  *(_DWORD *)(v17 + 40) = a3;
  *(_DWORD *)(v17 + 44) = a4;
  *(_DWORD *)(v17 + 48) = a5;
  v21 = v17;
  new ((void*)(a8)) Big(((Big(*)(__typeof__(v16), __typeof__(&v21)))sub_314A90)(v16, &v21));
  result = v21;
  v21 = 0;
  if ( result != 0 )
    { (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result); return ret_; }
  return ret_;
  return ret_;
}
Big sub_2655A0(int a1, int a2, __int64 *a3)
{
  Big ret_;
  __int64 a4 = (__int64)&ret_;

  __int64 v8; // x23
  __int64 v9; // x0
  __int64 v10; // x8
  __int64 result; // x0
  __int64 v12; // [xsp+8h] [xbp-28h] BYREF

  v8 = sub_313860();
  v9 = sub_56C9F0(40, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v10 = *a3;
  *(_DWORD *)(v9 + 8) = a2;
  *(_DWORD *)(v9 + 32) = a1;
  *(_QWORD *)(v9 + 16) = v10;
  *(_QWORD *)(v9 + 24) = 0;
  *(_QWORD *)v9 = (_QWORD)(((__int64 *)((__int64*)goff_18EE120) + 2));
  v12 = v9;
  new ((void*)(a4)) Big(((Big(*)(__typeof__(v8), __typeof__(&v12)))sub_314A90)(v8, &v12));
  result = v12;
  v12 = 0;
  if ( result != 0 )
    { (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result); return ret_; }
  return ret_;
  return ret_;
}
Big sub_265A60(int a1, int a2, __int64 *a3)
{
  Big ret_;
  __int64 a4 = (__int64)&ret_;

  __int64 v8; // x23
  __int64 v9; // x0
  __int64 v10; // x8
  __int64 result; // x0
  __int64 v12; // [xsp+8h] [xbp-28h] BYREF

  v8 = sub_313860();
  v9 = sub_56C9F0(40, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v10 = *a3;
  *(_DWORD *)(v9 + 8) = a2;
  *(_DWORD *)(v9 + 32) = a1;
  *(_QWORD *)(v9 + 16) = v10;
  *(_QWORD *)(v9 + 24) = 0;
  *(_QWORD *)v9 = (_QWORD)(((__int64 *)((__int64*)goff_18EE148) + 2));
  v12 = v9;
  new ((void*)(a4)) Big(((Big(*)(__typeof__(v8), __typeof__(&v12)))sub_314A90)(v8, &v12));
  result = v12;
  v12 = 0;
  if ( result != 0 )
    { (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result); return ret_; }
  return ret_;
  return ret_;
}
Big sub_265DF0(int a1, int a2, __int64 *a3)
{
  Big ret_;
  __int64 a4 = (__int64)&ret_;

  __int64 v8; // x23
  __int64 v9; // x0
  __int64 v10; // x8
  __int64 result; // x0
  __int64 v12; // [xsp+8h] [xbp-28h] BYREF

  v8 = sub_313860();
  v9 = sub_56C9F0(40, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v10 = *a3;
  *(_DWORD *)(v9 + 8) = a2;
  *(_QWORD *)(v9 + 16) = v10;
  *(_QWORD *)(v9 + 24) = 0;
  *(_DWORD *)(v9 + 32) = a1;
  *(_DWORD *)(v9 + 36) = -1;
  *(_QWORD *)v9 = (_QWORD)(((__int64 *)((__int64*)goff_18EE160) + 2));
  v12 = v9;
  new ((void*)(a4)) Big(((Big(*)(__typeof__(v8), __typeof__(&v12)))sub_314A90)(v8, &v12));
  result = v12;
  v12 = 0;
  if ( result != 0 )
    { (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result); return ret_; }
  return ret_;
  return ret_;
}
Big sub_265EB0(int a1, int a2, __int64 *a3)
{
  Big ret_;
  __int64 a4 = (__int64)&ret_;

  __int64 v8; // x23
  __int64 v9; // x0
  __int64 v10; // x8
  __int64 result; // x0
  __int64 v12; // [xsp+8h] [xbp-28h] BYREF

  v8 = sub_313860();
  v9 = sub_56C9F0(40, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v10 = *a3;
  *(_DWORD *)(v9 + 8) = a2;
  *(_QWORD *)(v9 + 16) = v10;
  *(_QWORD *)(v9 + 24) = 0;
  *(_DWORD *)(v9 + 32) = a1;
  *(_DWORD *)(v9 + 36) = -1;
  *(_QWORD *)v9 = (_QWORD)(((__int64 *)((__int64*)goff_18EE168) + 2));
  v12 = v9;
  new ((void*)(a4)) Big(((Big(*)(__typeof__(v8), __typeof__(&v12)))sub_314A90)(v8, &v12));
  result = v12;
  v12 = 0;
  if ( result != 0 )
    { (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result); return ret_; }
  return ret_;
  return ret_;
}
Big sub_265F70(int a1, int a2, __int64 *a3)
{
  Big ret_;
  __int64 a4 = (__int64)&ret_;

  __int64 v8; // x23
  __int64 v9; // x0
  __int64 v10; // x8
  __int64 result; // x0
  __int64 v12; // [xsp+8h] [xbp-28h] BYREF

  v8 = sub_313860();
  v9 = sub_56C9F0(40, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v10 = *a3;
  *(_DWORD *)(v9 + 8) = a2;
  *(_DWORD *)(v9 + 32) = a1;
  *(_QWORD *)(v9 + 16) = v10;
  *(_QWORD *)(v9 + 24) = 0;
  *(_QWORD *)v9 = (_QWORD)(((__int64 *)((__int64*)goff_18EE170) + 2));
  v12 = v9;
  new ((void*)(a4)) Big(((Big(*)(__typeof__(v8), __typeof__(&v12)))sub_314A90)(v8, &v12));
  result = v12;
  v12 = 0;
  if ( result != 0 )
    { (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result); return ret_; }
  return ret_;
  return ret_;
}
Big sub_266020(int a1, int a2, __int64 *a3)
{
  Big ret_;
  __int64 a4 = (__int64)&ret_;

  __int64 v8; // x23
  __int64 v9; // x0
  __int64 v10; // x8
  __int64 result; // x0
  __int64 v12; // [xsp+8h] [xbp-28h] BYREF

  v8 = sub_313860();
  v9 = sub_56C9F0(40, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v10 = *a3;
  *(_DWORD *)(v9 + 8) = a2;
  *(_DWORD *)(v9 + 32) = a1;
  *(_QWORD *)(v9 + 16) = v10;
  *(_QWORD *)(v9 + 24) = 0;
  *(_QWORD *)v9 = (_QWORD)(((__int64 *)((__int64*)goff_18EE178) + 2));
  v12 = v9;
  new ((void*)(a4)) Big(((Big(*)(__typeof__(v8), __typeof__(&v12)))sub_314A90)(v8, &v12));
  result = v12;
  v12 = 0;
  if ( result != 0 )
    { (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result); return ret_; }
  return ret_;
  return ret_;
}
Big sub_2660D0(int a1, int a2, int a3, __int64 *a4)
{
  Big ret_;
  __int64 a5 = (__int64)&ret_;

  _QWORD *v10; // x24
  __int64 v11; // x0
  __int64 v12; // x8
  __int64 *v13; // x9
  __int64 result; // x0
  __int64 v15; // [xsp+8h] [xbp-38h] BYREF

  v10 = (_QWORD *)sub_313860();
  v11 = sub_56C9F0(40, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v12 = *a4;
  *(_DWORD *)(v11 + 8) = a3;
  v13 = ((__int64*)goff_18EE180);
  *(_QWORD *)(v11 + 16) = v12;
  *(_QWORD *)(v11 + 24) = 0;
  *(_QWORD *)v11 = (_QWORD)(v13 + 2);
  *(_DWORD *)(v11 + 32) = a1;
  *(_DWORD *)(v11 + 36) = a2;
  v15 = v11;
  new ((void*)(a5)) Big(((Big(*)(__typeof__(v10), __typeof__(&v15)))sub_314890)(v10, &v15));
  result = v15;
  v15 = 0;
  if ( result != 0 )
    { (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result); return ret_; }
  return ret_;
  return ret_;
}
Big sub_266190(int a1, int a2, int a3, __int64 *a4)
{
  Big ret_;
  __int64 a5 = (__int64)&ret_;

  __int64 v10; // x24
  __int64 v11; // x0
  __int64 v12; // x8
  __int64 *v13; // x9
  __int64 result; // x0
  __int64 v15; // [xsp+8h] [xbp-38h] BYREF

  v10 = sub_313860();
  v11 = sub_56C9F0(40, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v12 = *a4;
  *(_DWORD *)(v11 + 8) = a3;
  v13 = ((__int64*)goff_18EE188);
  *(_QWORD *)(v11 + 16) = v12;
  *(_QWORD *)(v11 + 24) = 0;
  *(_QWORD *)v11 = (_QWORD)(v13 + 2);
  *(_DWORD *)(v11 + 32) = a1;
  *(_DWORD *)(v11 + 36) = a2;
  v15 = v11;
  new ((void*)(a5)) Big(((Big(*)(__typeof__(v10), __typeof__(&v15)))sub_314A90)(v10, &v15));
  result = v15;
  v15 = 0;
  if ( result != 0 )
    { (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result); return ret_; }
  return ret_;
  return ret_;
}
Big sub_266250(int a1, int a2, __int64 *a3)
{
  Big ret_;
  __int64 a4 = (__int64)&ret_;

  __int64 v8; // x23
  __int64 v9; // x0
  __int64 v10; // x8
  __int64 result; // x0
  __int64 v12; // [xsp+8h] [xbp-28h] BYREF

  v8 = sub_313860();
  v9 = sub_56C9F0(40, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v10 = *a3;
  *(_DWORD *)(v9 + 8) = a2;
  *(_DWORD *)(v9 + 32) = a1;
  *(_QWORD *)(v9 + 16) = v10;
  *(_QWORD *)(v9 + 24) = 0;
  *(_QWORD *)v9 = (_QWORD)(((__int64 *)((__int64*)goff_18EE190) + 2));
  v12 = v9;
  new ((void*)(a4)) Big(((Big(*)(__typeof__(v8), __typeof__(&v12)))sub_314A90)(v8, &v12));
  result = v12;
  v12 = 0;
  if ( result != 0 )
    { (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result); return ret_; }
  return ret_;
  return ret_;
}
Big sub_266300(int a1, int a2, __int64 *a3)
{
  Big ret_;
  __int64 a4 = (__int64)&ret_;

  __int64 v8; // x23
  __int64 v9; // x0
  __int64 v10; // x8
  __int64 result; // x0
  __int64 v12; // [xsp+8h] [xbp-28h] BYREF

  v8 = sub_313860();
  v9 = sub_56C9F0(40, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v10 = *a3;
  *(_DWORD *)(v9 + 8) = a2;
  *(_DWORD *)(v9 + 32) = a1;
  *(_QWORD *)(v9 + 16) = v10;
  *(_QWORD *)(v9 + 24) = 0;
  *(_QWORD *)v9 = (_QWORD)(((__int64 *)((__int64*)goff_18EE198) + 2));
  v12 = v9;
  new ((void*)(a4)) Big(((Big(*)(__typeof__(v8), __typeof__(&v12)))sub_314A90)(v8, &v12));
  result = v12;
  v12 = 0;
  if ( result != 0 )
    { (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result); return ret_; }
  return ret_;
  return ret_;
}
// N5storm18DataContainerEmptyE, virtual slot 5
_QWORD *__fastcall sub_29ABA0(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // x0
  _QWORD *v5; // x20
  __int64 v7; // [xsp+8h] [xbp-18h] BYREF

  v4 = (_QWORD *)sub_56C9F0(8, 8, 1092624384, 0LL, a2, a3);
  *v4 = (_QWORD)(((__int64 *)((__int64*)goff_18EE150) + 2));
  v5 = v4;
  new ((void*)(&v7)) Big(((Big(*)(__typeof__((__int64)v4), __typeof__(a1), __typeof__(0)))sub_5753C0)((__int64)v4, a1, 0));
  return v5;
}
// N5storm4echo3GRO18GROManager_NetworkE, virtual slot 104
Big sub_2CD240(__int64 a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  _QWORD *result; // x0
  __int64 v4; // [xsp+8h] [xbp-8h] BYREF

  new ((void*)(&v4)) Big((*(Big(**)(_QWORD, __int64, void *, int))(**(_QWORD **)(*(_QWORD *)(a1 + 48) + 32LL)
                                                                                             + 64LL))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL), a1, &unk_1326E41, 0));
  *a2 = 1;
  return ret_;
  return ret_;
}

// N5storm4echo3GRO18GROManager_NetworkE, virtual slot 106
Big sub_2CD360(char *a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  __int64 v4; // x21
  __int64 v5; // x8
  __int64 v6; // x0
  char *result; // x0
  __int64 v8; // x8

  if ( *(_QWORD *)(a1 + 152) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 160);
    if ( v4 == sub_586640() )
    {
      v5 = *(_QWORD *)(a1 + 168) + 1LL;
    }
    else
    {
      std__shared_timed_mutex__lock(*(char **)(a1 + 152));
      v6 = sub_586640();
      v5 = 1;
      *(_QWORD *)(a1 + 160) = v6;
    }
    *(_QWORD *)(a1 + 168) = v5;
  }
  sub_2FAC80(a1 + 176, *(_QWORD **)(a1 + 184));
  result = *(char **)(a1 + 152);
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 176) = (_QWORD)(a1 + 184);
  if ( result != nullptr )
  {
    v8 = *(_QWORD *)(a1 + 168) - 1LL;
    *(_QWORD *)(a1 + 168) = v8;
    if ( v8 == 0 )
    {
      *(_QWORD *)(a1 + 160) = -1;
      result = (char *)std__shared_timed_mutex__unlock(result);
    }
  }
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *a2 = 1;
  return ret_;
  return ret_;
}
// N5storm4echo3GRO18GROManager_NetworkE, virtual slot 107
Big sub_2CD430(__int64 a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  _QWORD *result; // x0
  __int64 v4; // [xsp+8h] [xbp-8h] BYREF

  new ((void*)(&v4)) Big((*(Big(**)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 48) + 32LL)
                                                                             + 72LL))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL), a1));
  *a2 = 1;
  return ret_;
  return ret_;
}

// N5storm4echo18LanManager_NetworkE, virtual slot 99
Big sub_2D0DA0(__int64 a1, __int64 a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  unsigned __int64 result; // x0
  __int64 v7; // [xsp+8h] [xbp-18h] BYREF

  *(_QWORD *)(a1 + 152) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 24);
  result = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 128) = result;
  if ( result != 0 )
    new ((void*)(&v7)) Big(((Big(*)(__typeof__(result), __typeof__(*(_DWORD *)(a1 + 16))))sub_556C40)(result, *(_DWORD *)(a1 + 16)));
  *(_DWORD *)(a1 + 248) = *(_DWORD *)(a2 + 40);
  *a3 = 1;
  return ret_;
  return ret_;
}

Big sub_2D0E10(__int64 a1, __int64 a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  unsigned __int64 result; // x0
  __int64 v7; // [xsp+8h] [xbp-18h] BYREF

  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 24);
  result = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 96) = result;
  if ( result != 0 )
    new ((void*)(&v7)) Big(((Big(*)(__typeof__(result), __typeof__(*(_DWORD *)(a1 - 16))))sub_556C40)(result, *(_DWORD *)(a1 - 16)));
  *(_DWORD *)(a1 + 216) = *(_DWORD *)(a2 + 40);
  *a3 = 1;
  return ret_;
  return ret_;
}

// N5storm4echo25ObjectTypeRegistry_CommonE, virtual slot 3
Big sub_2D5C80(__int64 result, __int64 a3)
{
  Big ret_;
  int *a2 = (int *)&ret_;

  if ( a3 != 0 )
  {
    *(_QWORD *)(result + 24) = *(_QWORD *)(a3 + 8);
    if ( *(_BYTE *)(a3 + 16) != 0 && *(_BYTE *)(result + 104) == 0 )
      { new ((void*)(a2)) Big(((Big(*)(__typeof__(result)))sub_2D5CD0)(result)); return ret_; }
    else
      *(_QWORD *)a2 = 1;
  }
  else
  {
    *(_QWORD *)a2 = 4293967296LL;
  }
  return ret_;
  return ret_;
}

// NSt3__110__function6__funcIZN5storm4echo6engine19SEngineParamStartUpC1EvE4$_25NS_9allocatorIS6_EEFNS_10unique_ptrINS2_6Stream18ICompressionPolicyENS2_6memory7DeleterISB_EEEEvEEE, virtual slot 6
Big sub_303980()
{
  Big ret_;
  _QWORD *a1 = (_QWORD *)&ret_;

  _QWORD *result; // x0

  result = (_QWORD *)sub_57EDA0(8, 0LL, &unk_1326E41, 0);
  *result = (_QWORD)(((char *)((__int64*)goff_18F28F0) + 16));
  *a1 = (_QWORD)(result);
  return ret_;
  return ret_;
}
// NSt3__110__function6__funcIZN5storm4echo6engine19SEngineParamStartUpC1EvE4$_26NS_9allocatorIS6_EEFNS_10unique_ptrINS2_6Stream20IDecompressionPolicyENS2_6memory7DeleterISB_EEEEvEEE, virtual slot 6
Big sub_303BE0()
{
  Big ret_;
  _QWORD *a1 = (_QWORD *)&ret_;

  _QWORD *result; // x0

  result = (_QWORD *)sub_57EDA0(8, 0LL, &unk_1326E41, 0);
  *result = (_QWORD)(goff_18F28F8 + 16);
  *a1 = (_QWORD)(result);
  return ret_;
  return ret_;
}
// N5storm4echo6player21PlayerManager_NetworkE, virtual slot 2
Big sub_30FCA0(_QWORD *a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  __int64 v4; // x0
  _QWORD *result; // x0
  __int64 v6; // [xsp+8h] [xbp-18h] BYREF

  v4 = *(_QWORD *)(a1[2] + 32LL);
  a1[7] = v4;
  a1[8] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
  new ((void*)(&v6)) Big((*(Big(**)(_QWORD, _QWORD *, void *, int))(*(_QWORD *)a1[7] + 64LL))(a1[7], a1 + 3, &unk_1326E41, 0));
  *a2 = 1;
  return ret_;
  return ret_;
}

Big sub_312210(char *result)
{
  Big ret_;
  _WORD *a2 = (_WORD *)&ret_;

  __int64 v2; // x9

  v2 = 3000;
  if ( (*(_DWORD *)(result + 24) & 2) == 0 )
    v2 = 2936;
  *a2 = *(_WORD *)(result + v2);
  return ret_;
  return ret_;
}

Big sub_3145B0(__int64 a1, int a2, __int64 *a3)
{
  Big ret_;
  __int64 a4 = (__int64)&ret_;

  __int64 v4; // x23
  __int64 v9; // x0
  __int64 v10; // x9
  __int64 v11; // x8
  __int64 v12; // x9
  unsigned int v13; // w0
  __int64 result; // x0
  __int64 v15; // [xsp+8h] [xbp-28h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v9 = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v11 = *(_QWORD *)(a1 + 16);
  v10 = *a3;
  *(_DWORD *)(v9 + 8) = a2;
  *(_QWORD *)(v9 + 16) = v10;
  *(_QWORD *)(v9 + 24) = 0;
  v12 = (long long)(goff_18F2D38);
  *(_QWORD *)v9 = v12 + 16;
  *(_DWORD *)(v9 + 32) = 4;
  *(_QWORD *)(v9 + 40) = v11;
  v15 = v9;
  v13 = sub_54D560(*(_QWORD *)(a1 + 8));
  new ((void*)(a4)) Big(((Big(*)(__typeof__(v4), __typeof__(&v15), __typeof__(v13)))sub_54D420)(v4, &v15, v13));
  result = v15;
  v15 = 0;
  if ( result != 0 )
    { (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result); return ret_; }
  return ret_;
  return ret_;
}
Big sub_321DA0(__int64 result, unsigned int *a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  unsigned int v3 __attribute__((aligned(8)));

  if ( *(_DWORD *)(result + 1160) != 0 )
  {
    v3 = *a2;
    { new ((void*)(a3)) Big(((Big(*)(__typeof__(result + 216), __typeof__(&v3)))sub_414F80)(result + 216, &v3)); return ret_; }
  }
  else
  {
    *a3 = 1;
  }
  return ret_;
  return ret_;
}

Big sub_321DE0(__int64 result, unsigned int *a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  unsigned int v3 __attribute__((aligned(8)));

  if ( *(_DWORD *)(result + 1160) != 0 )
  {
    v3 = *a2;
    { new ((void*)(a3)) Big(((Big(*)(__typeof__(result + 216), __typeof__(&v3)))sub_415030)(result + 216, &v3)); return ret_; }
  }
  else
  {
    *a3 = 1;
  }
  return ret_;
  return ret_;
}

// N5storm4echo31SessionGroupPeerManager_NetworkE, virtual slot 2
Big sub_32A030(_QWORD *a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  __int64 v4; // x0
  _QWORD *result; // x0
  __int64 v6; // [xsp+8h] [xbp-18h] BYREF

  v4 = *(_QWORD *)(a1[2] + 32LL);
  a1[12] = v4;
  a1[13] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
  new ((void*)(&v6)) Big((*(Big(**)(_QWORD, _QWORD *, void *, int))(*(_QWORD *)a1[12] + 64LL))(a1[12], a1 + 4, &unk_1326E41, 0));
  *a2 = 1;
  return ret_;
  return ret_;
}

// N5storm4echo31SessionGroupPeerManager_NetworkE, virtual slot 5
Big sub_32A120(_QWORD *a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  _QWORD *result; // x0
  __int64 v5; // [xsp+8h] [xbp-18h] BYREF

  result = (_QWORD *)a1[8];
  if ( result != nullptr )
    new ((void*)(&v5)) Big((*(Big(**)(_QWORD *, _QWORD *))(*result + 152LL))(result, a1 + 3));
  if ( a1[9] != 0 )
    a1[9] = 0;
  if ( a1[10] != 0 )
    a1[10] = 0;
  if ( a1[11] != 0 )
    a1[11] = 0;
  *a2 = 1;
  return ret_;
  return ret_;
}

// N5storm4echo31SessionGroupPeerManager_NetworkE, virtual slot 6
Big sub_32A190(__int64 a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  _QWORD *result; // x0
  __int64 v5; // [xsp+8h] [xbp-18h] BYREF

  new ((void*)(&v5)) Big((*(Big(**)(_QWORD, __int64))(**(_QWORD **)(a1 + 96) + 72LL))(*(_QWORD *)(a1 + 96), a1 + 32));
  *(_QWORD *)(a1 + 104) = 0;
  *a2 = 1;
  return ret_;
  return ret_;
}

// N5storm4echo31SessionGroupPeerManager_NetworkE, virtual slot 9
Big sub_32A580(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  Big ret_;
  _QWORD *a5 = (_QWORD *)&ret_;

  __int64 v6; // x0
  _QWORD *result; // x0
  __int64 v12; // [xsp+8h] [xbp-28h] BYREF

  v6 = *(_QWORD *)(a1 + 72);
  if ( v6 != 0 )
    new ((void*)(&v12)) Big((*(Big(**)(__int64, __int64, __int64, __int64))(*(_QWORD *)v6 + 72LL))(v6, a2, a3, a4));
  result = *(_QWORD **)(a1 + 80);
  if ( result != nullptr )
    new ((void*)(&v12)) Big((*(Big(**)(_QWORD *, __int64, __int64, __int64))(*result + 72LL))(result, a2, a3, a4));
  *a5 = 1;
  return ret_;
  return ret_;
}

Big sub_32A610(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  Big ret_;
  _QWORD *a5 = (_QWORD *)&ret_;

  __int64 v6; // x0
  _QWORD *result; // x0
  __int64 v12; // [xsp+8h] [xbp-28h] BYREF

  v6 = *(_QWORD *)(a1 + 48);
  if ( v6 != 0 )
    new ((void*)(&v12)) Big((*(Big(**)(__int64, __int64, __int64, __int64))(*(_QWORD *)v6 + 72LL))(v6, a2, a3, a4));
  result = *(_QWORD **)(a1 + 56);
  if ( result != nullptr )
    new ((void*)(&v12)) Big((*(Big(**)(_QWORD *, __int64, __int64, __int64))(*result + 72LL))(result, a2, a3, a4));
  *a5 = 1;
  return ret_;
  return ret_;
}

// N5storm4echo31SessionGroupPeerManager_NetworkE, virtual slot 10
Big sub_32A6A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  Big ret_;
  _QWORD *a5 = (_QWORD *)&ret_;

  __int64 v6; // x0
  _QWORD *result; // x0
  __int64 v12; // [xsp+8h] [xbp-28h] BYREF

  v6 = *(_QWORD *)(a1 + 72);
  if ( v6 != 0 )
    new ((void*)(&v12)) Big((*(Big(**)(__int64, __int64, __int64, __int64))(*(_QWORD *)v6 + 80LL))(v6, a2, a3, a4));
  result = *(_QWORD **)(a1 + 80);
  if ( result != nullptr )
    new ((void*)(&v12)) Big((*(Big(**)(_QWORD *, __int64, __int64, __int64))(*result + 80LL))(result, a2, a3, a4));
  *a5 = 1;
  return ret_;
  return ret_;
}

Big sub_32A730(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  Big ret_;
  _QWORD *a5 = (_QWORD *)&ret_;

  __int64 v6; // x0
  _QWORD *result; // x0
  __int64 v12; // [xsp+8h] [xbp-28h] BYREF

  v6 = *(_QWORD *)(a1 + 48);
  if ( v6 != 0 )
    new ((void*)(&v12)) Big((*(Big(**)(__int64, __int64, __int64, __int64))(*(_QWORD *)v6 + 80LL))(v6, a2, a3, a4));
  result = *(_QWORD **)(a1 + 56);
  if ( result != nullptr )
    new ((void*)(&v12)) Big((*(Big(**)(_QWORD *, __int64, __int64, __int64))(*result + 80LL))(result, a2, a3, a4));
  *a5 = 1;
  return ret_;
  return ret_;
}

// N5storm4echo31SessionGroupPeerManager_NetworkE, virtual slot 11
Big sub_32A7C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  Big ret_;
  _QWORD *a5 = (_QWORD *)&ret_;

  __int64 v6; // x0
  _QWORD *result; // x0
  __int64 v12; // [xsp+8h] [xbp-28h] BYREF

  v6 = *(_QWORD *)(a1 + 72);
  if ( v6 != 0 )
    new ((void*)(&v12)) Big((*(Big(**)(__int64, __int64, __int64, __int64))(*(_QWORD *)v6 + 88LL))(v6, a2, a3, a4));
  result = *(_QWORD **)(a1 + 80);
  if ( result != nullptr )
    new ((void*)(&v12)) Big((*(Big(**)(_QWORD *, __int64, __int64, __int64))(*result + 88LL))(result, a2, a3, a4));
  *a5 = 1;
  return ret_;
  return ret_;
}

Big sub_32A850(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  Big ret_;
  _QWORD *a5 = (_QWORD *)&ret_;

  __int64 v6; // x0
  _QWORD *result; // x0
  __int64 v12; // [xsp+8h] [xbp-28h] BYREF

  v6 = *(_QWORD *)(a1 + 48);
  if ( v6 != 0 )
    new ((void*)(&v12)) Big((*(Big(**)(__int64, __int64, __int64, __int64))(*(_QWORD *)v6 + 88LL))(v6, a2, a3, a4));
  result = *(_QWORD **)(a1 + 56);
  if ( result != nullptr )
    new ((void*)(&v12)) Big((*(Big(**)(_QWORD *, __int64, __int64, __int64))(*result + 88LL))(result, a2, a3, a4));
  *a5 = 1;
  return ret_;
  return ret_;
}

// N5storm4echo31SessionGroupPeerManager_NetworkE, virtual slot 12
Big sub_32A8E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  Big ret_;
  _QWORD *a7 = (_QWORD *)&ret_;

  __int64 v8; // x0
  _QWORD *result; // x0
  __int64 v16; // [xsp+8h] [xbp-38h] BYREF

  v8 = *(_QWORD *)(a1 + 72);
  if ( v8 != 0 )
    new ((void*)(&v16)) Big((*(Big(**)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v8 + 96LL))(v8, a2, a3, a4, a5, a6));
  result = *(_QWORD **)(a1 + 80);
  if ( result != nullptr )
    new ((void*)(&v16)) Big((*(Big(**)(_QWORD *, __int64, __int64, __int64, __int64, __int64))(*result + 96LL))(result, a2, a3, a4, a5, a6));
  *a7 = 1;
  return ret_;
  return ret_;
}

Big sub_32A990(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  Big ret_;
  _QWORD *a7 = (_QWORD *)&ret_;

  __int64 v8; // x0
  _QWORD *result; // x0
  __int64 v16; // [xsp+8h] [xbp-38h] BYREF

  v8 = *(_QWORD *)(a1 + 48);
  if ( v8 != 0 )
    new ((void*)(&v16)) Big((*(Big(**)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v8 + 96LL))(v8, a2, a3, a4, a5, a6));
  result = *(_QWORD **)(a1 + 56);
  if ( result != nullptr )
    new ((void*)(&v16)) Big((*(Big(**)(_QWORD *, __int64, __int64, __int64, __int64, __int64))(*result + 96LL))(result, a2, a3, a4, a5, a6));
  *a7 = 1;
  return ret_;
  return ret_;
}

// N5storm4echo31SessionGroupPeerManager_NetworkE, virtual slot 16
Big sub_32AF50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  Big ret_;
  _QWORD *a5 = (_QWORD *)&ret_;

  __int64 v6; // x0
  _QWORD *result; // x0
  __int64 v12; // [xsp+8h] [xbp-28h] BYREF

  v6 = *(_QWORD *)(a1 + 72);
  if ( v6 != 0 )
    new ((void*)(&v12)) Big((*(Big(**)(__int64, __int64, __int64, __int64))(*(_QWORD *)v6 + 128LL))(v6, a2, a3, a4));
  result = *(_QWORD **)(a1 + 80);
  if ( result != nullptr )
    new ((void*)(&v12)) Big((*(Big(**)(_QWORD *, __int64, __int64, __int64))(*result + 128LL))(result, a2, a3, a4));
  *a5 = 1;
  return ret_;
  return ret_;
}

Big sub_32AFE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  Big ret_;
  _QWORD *a5 = (_QWORD *)&ret_;

  __int64 v6; // x0
  _QWORD *result; // x0
  __int64 v12; // [xsp+8h] [xbp-28h] BYREF

  v6 = *(_QWORD *)(a1 + 48);
  if ( v6 != 0 )
    new ((void*)(&v12)) Big((*(Big(**)(__int64, __int64, __int64, __int64))(*(_QWORD *)v6 + 128LL))(v6, a2, a3, a4));
  result = *(_QWORD **)(a1 + 56);
  if ( result != nullptr )
    new ((void*)(&v12)) Big((*(Big(**)(_QWORD *, __int64, __int64, __int64))(*result + 128LL))(result, a2, a3, a4));
  *a5 = 1;
  return ret_;
  return ret_;
}

// N5storm4echo31SessionGroupPeerManager_NetworkE, virtual slot 17
Big sub_32B070(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  Big ret_;
  _QWORD *a5 = (_QWORD *)&ret_;

  __int64 v6; // x0
  _QWORD *result; // x0
  __int64 v12; // [xsp+8h] [xbp-28h] BYREF

  v6 = *(_QWORD *)(a1 + 72);
  if ( v6 != 0 )
    new ((void*)(&v12)) Big((*(Big(**)(__int64, __int64, __int64, __int64))(*(_QWORD *)v6 + 136LL))(v6, a2, a3, a4));
  result = *(_QWORD **)(a1 + 80);
  if ( result != nullptr )
    new ((void*)(&v12)) Big((*(Big(**)(_QWORD *, __int64, __int64, __int64))(*result + 136LL))(result, a2, a3, a4));
  *a5 = 1;
  return ret_;
  return ret_;
}

Big sub_32B100(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  Big ret_;
  _QWORD *a5 = (_QWORD *)&ret_;

  __int64 v6; // x0
  _QWORD *result; // x0
  __int64 v12; // [xsp+8h] [xbp-28h] BYREF

  v6 = *(_QWORD *)(a1 + 48);
  if ( v6 != 0 )
    new ((void*)(&v12)) Big((*(Big(**)(__int64, __int64, __int64, __int64))(*(_QWORD *)v6 + 136LL))(v6, a2, a3, a4));
  result = *(_QWORD **)(a1 + 56);
  if ( result != nullptr )
    new ((void*)(&v12)) Big((*(Big(**)(_QWORD *, __int64, __int64, __int64))(*result + 136LL))(result, a2, a3, a4));
  *a5 = 1;
  return ret_;
  return ret_;
}

// N5storm4echo31SessionGroupPeerManager_NetworkE, virtual slot 21
Big sub_32B590(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  Big ret_;
  _QWORD *a7 = (_QWORD *)&ret_;

  __int64 v8; // x0
  _QWORD *result; // x0
  __int64 v16; // [xsp+8h] [xbp-38h] BYREF

  v8 = *(_QWORD *)(a1 + 72);
  if ( v8 != 0 )
    new ((void*)(&v16)) Big((*(Big(**)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v8 + 168LL))(v8, a2, a3, a4, a5, a6));
  result = *(_QWORD **)(a1 + 80);
  if ( result != nullptr )
    new ((void*)(&v16)) Big((*(Big(**)(_QWORD *, __int64, __int64, __int64, __int64, __int64))(*result + 168LL))(result, a2, a3, a4, a5, a6));
  *a7 = 1;
  return ret_;
  return ret_;
}

Big sub_32B640(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  Big ret_;
  _QWORD *a7 = (_QWORD *)&ret_;

  __int64 v8; // x0
  _QWORD *result; // x0
  __int64 v16; // [xsp+8h] [xbp-38h] BYREF

  v8 = *(_QWORD *)(a1 + 48);
  if ( v8 != 0 )
    new ((void*)(&v16)) Big((*(Big(**)(__int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v8 + 168LL))(v8, a2, a3, a4, a5, a6));
  result = *(_QWORD **)(a1 + 56);
  if ( result != nullptr )
    new ((void*)(&v16)) Big((*(Big(**)(_QWORD *, __int64, __int64, __int64, __int64, __int64))(*result + 168LL))(result, a2, a3, a4, a5, a6));
  *a7 = 1;
  return ret_;
  return ret_;
}

// N5storm4echo31SessionGroupPeerManager_NetworkE, virtual slot 22
Big sub_32B6F0(__int64 a1, __int64 a2, __int64 a3)
{
  Big ret_;
  _QWORD *a4 = (_QWORD *)&ret_;

  __int64 v5; // x0
  _QWORD *result; // x0
  __int64 v10; // [xsp+8h] [xbp-28h] BYREF

  v5 = *(_QWORD *)(a1 + 72);
  if ( v5 != 0 )
    new ((void*)(&v10)) Big((*(Big(**)(__int64, __int64, __int64))(*(_QWORD *)v5 + 176LL))(v5, a2, a3));
  result = *(_QWORD **)(a1 + 80);
  if ( result != nullptr )
    new ((void*)(&v10)) Big((*(Big(**)(_QWORD *, __int64, __int64))(*result + 176LL))(result, a2, a3));
  *a4 = 1;
  return ret_;
  return ret_;
}

Big sub_32B770(__int64 a1, __int64 a2, __int64 a3)
{
  Big ret_;
  _QWORD *a4 = (_QWORD *)&ret_;

  __int64 v5; // x0
  _QWORD *result; // x0
  __int64 v10; // [xsp+8h] [xbp-28h] BYREF

  v5 = *(_QWORD *)(a1 + 48);
  if ( v5 != 0 )
    new ((void*)(&v10)) Big((*(Big(**)(__int64, __int64, __int64))(*(_QWORD *)v5 + 176LL))(v5, a2, a3));
  result = *(_QWORD **)(a1 + 56);
  if ( result != nullptr )
    new ((void*)(&v10)) Big((*(Big(**)(_QWORD *, __int64, __int64))(*result + 176LL))(result, a2, a3));
  *a4 = 1;
  return ret_;
  return ret_;
}

// N5storm4echo7session22SessionManager_NetworkE, virtual slot 2
Big sub_337980(_QWORD *a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  __int64 v4; // x0
  _QWORD *result; // x0
  __int64 v6; // [xsp+8h] [xbp-18h] BYREF

  v4 = *(_QWORD *)(a1[2] + 32LL);
  a1[8] = v4;
  a1[9] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
  new ((void*)(&v6)) Big((*(Big(**)(_QWORD, _QWORD *, void *, int))(*(_QWORD *)a1[8] + 64LL))(a1[8], a1 + 4, &unk_1326E41, 0));
  *a2 = 1;
  return ret_;
  return ret_;
}

// N5storm4echo7session22SessionManager_NetworkE, virtual slot 6
Big sub_3381F0(__int64 a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  _QWORD *result; // x0
  __int64 v5; // [xsp+8h] [xbp-18h] BYREF

  new ((void*)(&v5)) Big((*(Big(**)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 72LL))(*(_QWORD *)(a1 + 64), a1 + 32));
  *(_QWORD *)(a1 + 72) = 0;
  *a2 = 1;
  return ret_;
  return ret_;
}

// N5storm4echo7session22SessionManager_NetworkE, virtual slot 4
Big sub_338240(__int64 a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  __int64 result; // x0
  __int64 v4; // [xsp+8h] [xbp-8h] BYREF

  new ((void*)(&v4)) Big(((Big(*)(__typeof__(a1)))sub_338270)(a1));
  *a2 = 1;
  return ret_;
  return ret_;
}

// N5storm4echo27SessionStreamPacker_NetworkE, virtual slot 2
Big sub_34F310(__int64 a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  __int64 v3; // x21
  _QWORD *result; // x0
  __int64 v6; // [xsp+8h] [xbp-18h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  *(_QWORD *)(a1 + 224) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  new ((void*)(&v6)) Big((*(Big(**)(__int64, __int64, void *, int))(*(_QWORD *)v3 + 64LL))(v3, a1 + 32, &unk_1326E41, 0));
  *a2 = 1;
  return ret_;
  return ret_;
}

// N5storm4echo27SessionStreamPacker_NetworkE, virtual slot 6
Big sub_34F650(__int64 a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  _QWORD *result; // x0
  __int64 v5; // [xsp+8h] [xbp-18h] BYREF

  new ((void*)(&v5)) Big((*(Big(**)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 32LL)
                                                                             + 72LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL), a1 + 32));
  *(_QWORD *)(a1 + 224) = 0;
  *a2 = 1;
  return ret_;
  return ret_;
}

// N5storm4echo7session23SessionTimeManager_MainE, virtual slot 99
Big sub_352B10(_QWORD *a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  __int64 v4; // x0
  _QWORD *result; // x0
  __int64 v6; // [xsp+8h] [xbp-18h] BYREF

  v4 = *(_QWORD *)(a1[6] + 32LL);
  a1[105] = v4;
  a1[104] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
  new ((void*)(&v6)) Big((*(Big(**)(_QWORD, _QWORD *, void *, int))(*(_QWORD *)a1[105] + 64LL))(a1[105], a1, &unk_1326E41, 0));
  *a2 = 1;
  return ret_;
  return ret_;
}

Big sub_352B80(_QWORD *a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  _QWORD *v4; // x21
  __int64 v5; // x0
  _QWORD *result; // x0
  __int64 v7; // [xsp+8h] [xbp-18h] BYREF

  v4 = a1 - 4;
  v5 = *(_QWORD *)(a1[2] + 32LL);
  a1[101] = v5;
  a1[100] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 56LL))(v5);
  new ((void*)(&v7)) Big((*(Big(**)(_QWORD, _QWORD *, void *, int))(*(_QWORD *)a1[101] + 64LL))(a1[101], v4, &unk_1326E41, 0));
  *a2 = 1;
  return ret_;
  return ret_;
}

// N5storm4echo7session23SessionTimeManager_MainE, virtual slot 102
Big sub_352D70(__int64 a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  _QWORD *result; // x0
  __int64 v5; // [xsp+8h] [xbp-18h] BYREF

  new ((void*)(&v5)) Big((*(Big(**)(_QWORD, __int64))(**(_QWORD **)(a1 + 840) + 72LL))(*(_QWORD *)(a1 + 840), a1));
  *(_QWORD *)(a1 + 832) = 0;
  *a2 = 1;
  return ret_;
  return ret_;
}

// N5storm4echo7session23SessionTimeManager_MainE, virtual slot 98
Big sub_352E10(_QWORD *result, __int64 a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  __int64 v4; // [xsp+8h] [xbp-8h] BYREF

  if ( result[103] != 0 )
    new ((void*)(&v4)) Big(((Big(*)(__typeof__(result), __typeof__(a2), __typeof__(result + 7)))sub_352510)(result, a2, result + 7));
  *a3 = 1;
  return ret_;
  return ret_;
}

// N5storm4echo7session26SessionTimeManager_NetworkE, virtual slot 2
Big sub_3540B0(_QWORD *a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  __int64 v4; // x0
  _QWORD *result; // x0
  __int64 v6; // [xsp+8h] [xbp-18h] BYREF

  v4 = *(_QWORD *)(a1[2] + 32LL);
  a1[106] = v4;
  a1[107] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
  new ((void*)(&v6)) Big((*(Big(**)(_QWORD, _QWORD *, void *, int))(*(_QWORD *)a1[106] + 64LL))(a1[106], a1 + 3, &unk_1326E41, 0));
  *a2 = 1;
  return ret_;
  return ret_;
}

// N5storm4echo7session26SessionTimeManager_NetworkE, virtual slot 6
Big sub_354400(__int64 a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  _QWORD *result; // x0
  __int64 v5; // [xsp+8h] [xbp-18h] BYREF

  new ((void*)(&v5)) Big((*(Big(**)(_QWORD, __int64))(**(_QWORD **)(a1 + 848) + 72LL))(*(_QWORD *)(a1 + 848), a1 + 24));
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 856) = 0;
  *a2 = 1;
  return ret_;
  return ret_;
}

// N5storm4echo7session26SessionTimeManager_NetworkE, virtual slot 4
Big sub_354450(_QWORD *result, __int64 a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  __int64 v4; // [xsp+8h] [xbp-8h] BYREF

  if ( result[7] != 0 )
    new ((void*)(&v4)) Big(((Big(*)(__typeof__(result), __typeof__(a2), __typeof__(result + 10)))sub_352510)(result, a2, result + 10));
  *a3 = 1;
  return ret_;
  return ret_;
}

// N5storm4echo17StreamPacker_MainE, virtual slot 98
Big sub_3563C0(_QWORD *a1, __int64 a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  __int64 v5; // x0
  __int64 *v7; // x19
  _QWORD *v8; // x0
  _QWORD *v9; // x0
  unsigned __int64 result; // x0
  int v12 __attribute__((aligned(8)));
  __int64 v11; // [xsp+8h] [xbp-28h] BYREF

  v5 = *(_QWORD *)(a1[6] + 32LL);
  a1[14] = v5;
  a1[13] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 56LL))(v5);
  new ((void*)(&v11)) Big((*(Big(**)(_QWORD, _QWORD *, void *, int))(*(_QWORD *)a1[14] + 64LL))(a1[14], a1, &unk_1326E41, 0));
  a1[12] = *(_QWORD *)(a2 + 8);
  v7 = ((__int64*)goff_18EDD18);
  v8 = (_QWORD *)*((__int64*)goff_18EDD18);
  v12 = 262180290;
  new ((void*)(&v11)) Big(((Big(*)(__typeof__(v8), __typeof__(&v12)))sub_3784E0)(v8, &v12));
  v9 = (_QWORD *)*v7;
  v12 = 251617578;
  new ((void*)(&v11)) Big(((Big(*)(__typeof__(v9), __typeof__(&v12)))sub_3789E0)(v9, &v12));
  *a3 = 1;
  return ret_;
  return ret_;
}

Big sub_356490(_QWORD *a1, __int64 a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  _QWORD *v5; // x22
  __int64 v6; // x0
  __int64 *v8; // x19
  _QWORD *v9; // x0
  _QWORD *v10; // x0
  unsigned __int64 result; // x0
  int v13 __attribute__((aligned(8)));
  __int64 v12; // [xsp+0h] [xbp-30h] BYREF

  v5 = a1 - 4;
  v6 = *(_QWORD *)(a1[2] + 32LL);
  a1[10] = v6;
  a1[9] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL))(v6);
  new ((void*)(&v12)) Big((*(Big(**)(_QWORD, _QWORD *, void *, int))(*(_QWORD *)a1[10] + 64LL))(a1[10], v5, &unk_1326E41, 0));
  a1[8] = *(_QWORD *)(a2 + 8);
  v8 = ((__int64*)goff_18EDD18);
  v9 = (_QWORD *)*((__int64*)goff_18EDD18);
  v13 = 262180290;
  new ((void*)(&v12)) Big(((Big(*)(__typeof__(v9), __typeof__(&v13)))sub_3784E0)(v9, &v13));
  v10 = (_QWORD *)*v8;
  v13 = 251617578;
  new ((void*)(&v12)) Big(((Big(*)(__typeof__(v10), __typeof__(&v13)))sub_3789E0)(v10, &v13));
  *a3 = 1;
  return ret_;
  return ret_;
}

// N5storm4echo17StreamPacker_MainE, virtual slot 102
Big sub_3578A0(_QWORD *result, int a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  __int64 v4; // [xsp+8h] [xbp-8h] BYREF

  if ( *((_DWORD *)result + 104) != 0 )
    new ((void*)(&v4)) Big(((Big(*)(__typeof__((__int64)(result + 15)), __typeof__(a2)))sub_4145D0)((__int64)(result + 15), a2));
  *a3 = 1;
  return ret_;
  return ret_;
}

// N5storm4echo20StreamPacker_NetworkE, virtual slot 2
Big sub_357EE0(_QWORD *a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  __int64 v4; // x0
  _QWORD *result; // x0
  __int64 v6; // [xsp+8h] [xbp-18h] BYREF

  v4 = *(_QWORD *)(a1[2] + 32LL);
  a1[7] = v4;
  a1[8] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
  nullsub_1152(a1 + 213);
  new ((void*)(&v6)) Big((*(Big(**)(_QWORD, _QWORD *, void *, int))(*(_QWORD *)a1[7] + 64LL))(a1[7], a1 + 3, &unk_1326E41, 0));
  *a2 = 1;
  return ret_;
  return ret_;
}

// N5storm4echo20StreamPacker_NetworkE, virtual slot 5
Big sub_3583B0(__int64 a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  __int64 result; // x0
  __int64 v5; // [xsp+8h] [xbp-18h] BYREF

  new ((void*)(&v5)) Big((*(Big(**)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 56LL) + 40LL))(*(_QWORD *)(a1 + 128) + 56LL, a1 + 24));
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  result = sub_257C10(a1 + 1704);
  *(_DWORD *)(a1 + 188) = -1;
  *(_QWORD *)(a1 + 64) = 0;
  *a2 = 1;
  return ret_;
  return ret_;
}

Big sub_359EE0(__int64 result, unsigned int *a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  unsigned int v3 __attribute__((aligned(8)));

  if ( *(_DWORD *)(result + 1160) != 0 )
  {
    v3 = *a2;
    { new ((void*)(a3)) Big(((Big(*)(__typeof__(result + 216), __typeof__(&v3)))sub_415110)(result + 216, &v3)); return ret_; }
  }
  else
  {
    *a3 = 1;
  }
  return ret_;
  return ret_;
}

Big sub_35B070(__int64 a1, int a2, __int64 *a3)
{
  Big ret_;
  _QWORD *a4 = (_QWORD *)&ret_;

  char *v4; // x21
  _QWORD *v9; // x8
  __int64 v10; // x23
  __int64 result; // x0
  __int64 v12; // x9
  int v13; // w10
  _QWORD *v14; // x8
  __int64 v15; // x9
  __int64 v16; // x10
  __int64 v17; // x11

  v4 = (char *)(a1 + 1056);
  std__shared_timed_mutex__lock_shared((char *)(a1 + 1056));
  v9 = *(_QWORD **)(a1 + 1040);
  if ( v9 != nullptr )
  {
    while ( 1 )
    {
      v10 = v9[2];
      if ( *(_DWORD *)(v10 + 24) == a2 )
        break;
      v9 = (_QWORD *)*v9;
      if ( v9 == nullptr )
        goto LABEL_4;
    }
    result = std__shared_timed_mutex__unlock_shared(v4);
    if ( v10 != 0 )
    {
      std__shared_timed_mutex__lock((char *)(v10 + 80));
      v12 = a3[1];
      v13 = *(_DWORD *)((char *)a3 + 15);
      *(_QWORD *)(v10 + 28) = *a3;
      v14 = *(_QWORD **)(v10 + 56);
      *(_DWORD *)(v10 + 43) = v13;
      for ( *(_QWORD *)(v10 + 36) = v12; v14 != nullptr; v14 = (_QWORD *)*v14 )
      {
        v15 = v14[2];
        if ( *(_DWORD *)(v15 + 76) != *(_DWORD *)(v10 + 24) )
          break;
        v16 = *a3;
        v17 = a3[1];
        *(_DWORD *)(v15 + 71) = *(_DWORD *)((char *)a3 + 15);
        *(_QWORD *)(v15 + 56) = v16;
        *(_QWORD *)(v15 + 64) = v17;
      }
      result = std__shared_timed_mutex__unlock((char *)(v10 + 80));
    }
  }
  else
  {
LABEL_4:
    result = std__shared_timed_mutex__unlock_shared(v4);
  }
  *a4 = 1;
  return ret_;
  return ret_;
}

// N5storm4echo6player13PlayerMessageE, virtual slot 5
_QWORD *__fastcall sub_35BD70(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v4; // x0
  _QWORD *v5; // x20
  __int64 v7; // [xsp+8h] [xbp-18h] BYREF

  v4 = (_QWORD *)sub_56C9F0(8, 8, 1092624384, 0LL, a2, a3);
  *v4 = (_QWORD)(((__int64 *)goff_18F2CF0 + 2));
  v5 = v4;
  new ((void*)(&v7)) Big(((Big(*)(__typeof__((__int64)v4), __typeof__(a1), __typeof__(0)))sub_5753C0)((__int64)v4, a1, 0));
  return v5;
}
// N5storm4echo7session24SessionJoinAcceptMessageE, virtual slot 5
__int64 __fastcall sub_3630E0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // x20
  __int64 v6; // [xsp+8h] [xbp-18h] BYREF

  v4 = sub_56C9F0(400, 8, 1092624384, 0LL, a2, a3);
  sub_33B6E0(v4);
  new ((void*)(&v6)) Big(((Big(*)(__typeof__(v4), __typeof__(a1), __typeof__(0)))sub_5753C0)(v4, a1, 0));
  return v4;
}

// N5storm4echo7session25SessionJoinRequestMessageE, virtual slot 5
__int64 __fastcall sub_363A50(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // x20
  __int64 v6; // [xsp+8h] [xbp-18h] BYREF

  v4 = sub_56C9F0(376, 8, 1092624384, 0LL, a2, a3);
  sub_33C4C0(v4);
  new ((void*)(&v6)) Big(((Big(*)(__typeof__(v4), __typeof__(a1), __typeof__(0)))sub_5753C0)(v4, a1, 0));
  return v4;
}

// N5storm4echo7session25SessionPeerJoiningMessageE, virtual slot 5
__int64 __fastcall sub_365450(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // x20
  __int64 v6; // [xsp+8h] [xbp-18h] BYREF

  v4 = sub_56C9F0(288, 8, 1092624384, 0LL, a2, a3);
  sub_33D920(v4);
  new ((void*)(&v6)) Big(((Big(*)(__typeof__(v4), __typeof__(a1), __typeof__(0)))sub_5753C0)(v4, a1, 0));
  return v4;
}

// N5storm4echo7session22SessionPeerGoneMessageE, virtual slot 5
__int64 __fastcall sub_365D80(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // x20
  __int64 v6; // [xsp+8h] [xbp-18h] BYREF

  v4 = sub_56C9F0(240, 8, 1092624384, 0LL, a2, a3);
  sub_33E470(v4);
  new ((void*)(&v6)) Big(((Big(*)(__typeof__(v4), __typeof__(a1), __typeof__(0)))sub_5753C0)(v4, a1, 0));
  return v4;
}

// N5storm4echo7session18SessionKickMessageE, virtual slot 5
__int64 __fastcall sub_3661B0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // x20
  __int64 v6; // [xsp+8h] [xbp-18h] BYREF

  v4 = sub_56C9F0(240, 8, 1092624384, 0LL, a2, a3);
  sub_33EB70(v4);
  new ((void*)(&v6)) Big(((Big(*)(__typeof__(v4), __typeof__(a1), __typeof__(0)))sub_5753C0)(v4, a1, 0));
  return v4;
}

// N5storm4echo7session23SessionReachPeerMessageE, virtual slot 5
__int64 __fastcall sub_3697C0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // x20
  __int64 v6; // [xsp+8h] [xbp-18h] BYREF

  v4 = sub_56C9F0(216, 8, 1092624384, 0LL, a2, a3);
  sub_340FB0(v4);
  new ((void*)(&v6)) Big(((Big(*)(__typeof__(v4), __typeof__(a1), __typeof__(0)))sub_5753C0)(v4, a1, 0));
  return v4;
}

// NSt3__110__function6__funcIZN5storm4echo6player21PlayerManager_Network9OnStartupEPKNS2_10ActorParamEPNS2_11ActorResultEE3$_1NS_9allocatorISB_EEFvRKNS2_4GUIDERKNS2_10BasePacketERNS2_13DataContainerEEEE, virtual slot 6
void __fastcall sub_380790(__int64 a1)
{
  __int64 v2; // [xsp+8h] [xbp-8h] BYREF

  new ((void*)(&v2)) Big(((Big(*)(__typeof__(*(_QWORD *)(a1 + 8))))sub_2E45E0)(*(_QWORD *)(a1 + 8)));
}

// NSt3__110__function6__funcIZN5storm4echo23ProductEchoImpl_Network9OnStartupEPKNS2_10ActorParamEPNS2_11ActorResultEE4$_41NS_9allocatorISA_EEFvRKNS2_4GUIDERNS2_10BasePacketEEEE, virtual slot 6
void __fastcall sub_382F60(__int64 a1)
{
  __int64 v2; // [xsp+8h] [xbp-8h] BYREF

  new ((void*)(&v2)) Big(((Big(*)(__typeof__(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1264LL))))sub_34F7E0)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1264LL)));
}

// NSt3__110__function6__funcIZN5storm4echo23ProductEchoImpl_Network9OnStartupEPKNS2_10ActorParamEPNS2_11ActorResultEE4$_42NS_9allocatorISA_EEFvRKNS2_4GUIDERNS2_10BasePacketEEEE, virtual slot 6
void __fastcall sub_383050(__int64 a1)
{
  __int64 v2; // [xsp+8h] [xbp-8h] BYREF

  new ((void*)(&v2)) Big(((Big(*)(__typeof__(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1312LL))))sub_354910)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1312LL)));
}

// NSt3__110__function6__funcIZN5storm4echo23ProductEchoImpl_Network9OnStartupEPKNS2_10ActorParamEPNS2_11ActorResultEE4$_43NS_9allocatorISA_EEFvRKNS2_4GUIDERNS2_10BasePacketEEEE, virtual slot 6
void __fastcall sub_383140(__int64 a1)
{
  __int64 v2; // [xsp+8h] [xbp-8h] BYREF

  new ((void*)(&v2)) Big(((Big(*)(__typeof__(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1256LL))))sub_3593C0)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1256LL)));
}

// NSt3__110__function6__funcIZN5storm4echo23ProductEchoImpl_Network9OnStartupEPKNS2_10ActorParamEPNS2_11ActorResultEE4$_44NS_9allocatorISA_EEFvRKNS2_4GUIDERNS2_10BasePacketEEEE, virtual slot 6
void __fastcall sub_383230(__int64 a1)
{
  __int64 v2; // [xsp+8h] [xbp-8h] BYREF

  new ((void*)(&v2)) Big(((Big(*)(__typeof__(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1256LL))))sub_3593C0)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1256LL)));
}

// NSt3__110__function6__funcIZN5storm4echo7session26SessionTimeManager_Network9OnStartupEPKNS2_10ActorParamEPNS2_11ActorResultEE5$_174NS_9allocatorISB_EEFvRKNS2_4GUIDERNS2_10BasePacketEEEE, virtual slot 6
void __fastcall sub_387F70(__int64 a1)
{
  __int64 v2; // [xsp+8h] [xbp-8h] BYREF

  new ((void*)(&v2)) Big(((Big(*)(__typeof__(*(_QWORD *)(a1 + 8))))sub_354910)(*(_QWORD *)(a1 + 8)));
}

// NSt3__110__function6__funcIZN5storm4echo20StreamPacker_Network9OnStartupEPKNS2_10ActorParamEPNS2_11ActorResultEE5$_190NS_9allocatorISA_EEFvRKNS2_4GUIDERNS2_10BasePacketEEEE, virtual slot 6
void __fastcall sub_3882A0(__int64 a1)
{
  __int64 v2; // [xsp+8h] [xbp-8h] BYREF

  new ((void*)(&v2)) Big(((Big(*)(__typeof__(*(_QWORD *)(a1 + 8))))sub_3593C0)(*(_QWORD *)(a1 + 8)));
}

// NSt3__110__function6__funcIZN5storm4echo20StreamPacker_Network9OnStartupEPKNS2_10ActorParamEPNS2_11ActorResultEE5$_191NS_9allocatorISA_EEFvRKNS2_4GUIDERNS2_10BasePacketEEEE, virtual slot 6
void __fastcall sub_388390(__int64 a1)
{
  __int64 v2; // [xsp+8h] [xbp-8h] BYREF

  new ((void*)(&v2)) Big(((Big(*)(__typeof__(*(_QWORD *)(a1 + 8))))sub_3593C0)(*(_QWORD *)(a1 + 8)));
}

// N5storm4echo21EchoLinkPunchOperatorE, virtual slot 5
Big sub_3B4630(__int64 a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  __int64 result; // x0

  result = *(_QWORD *)(a1 + 8);
  if ( result != 0 )
    { new ((void*)((__int64)a2)) Big(((Big(*)(__typeof__(result)))sub_5E5110)(result)); return ret_; }
  *a2 = 4293967297LL;
  return ret_;
  return ret_;
}

// N5storm9transport24TransportManager_NetworkE, virtual slot 17
Big sub_3B8D30(__int64 result, unsigned int *a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  char *v4; // x21
  __int64 v5; // x20
  unsigned __int64 v7; // x8
  __int64 v8; // x20

  if ( *(_QWORD *)(result + 4336) != 0 )
  {
    v4 = (char *)(result + 3880);
    v5 = result;
    std__shared_timed_mutex__lock_shared((char *)(result + 3880));
    v7 = *a2;
    if ( (unsigned int)v7 <= 0x7F && (*(_QWORD *)(v5 + ((v7 >> 3) & 0x1FFFFFF8) + 248) & (1LL << v7)) != 0 )
    {
      v8 = *(_QWORD *)(v5 + 16 * v7 + 800);
      result = std__shared_timed_mutex__unlock_shared(v4);
      if ( v8 != 0 )
      {
        *(_DWORD *)(v8 + 792) = sub_58B010(*(char **)(v8 + 776));
        result = sub_58C640(*(_QWORD *)(v8 + 17824), v8, goff_18F4948, 0x4E20u);
      }
    }
    else
    {
      result = std__shared_timed_mutex__unlock_shared(v4);
    }
  }
  *a3 = 1;
  return ret_;
  return ret_;
}

// N5storm9transport21TransportManager_MainE, virtual slot 2
Big sub_3B98B0()
{
  Big ret_;
  _QWORD *a1 = (_QWORD *)&ret_;

  _QWORD *v2; // x0
  unsigned __int64 result; // x0
  int v5 __attribute__((aligned(8)));
  __int64 v4; // [xsp+8h] [xbp-18h] BYREF

  v2 = (_QWORD *)*((__int64*)goff_18EDD18);
  v5 = 891479743;
  new ((void*)(&v4)) Big(((Big(*)(__typeof__(v2), __typeof__(&v5)))sub_3E15C0)(v2, &v5));
  *a1 = 1;
  return ret_;
  return ret_;
}

// N5storm9transport24TransportManager_NetworkE, virtual slot 2
Big sub_3BA640(_QWORD *a1, __int64 a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  __int64 v5; // x0
  __int64 v7; // x9
  _QWORD *result; // x0
  __int64 v9; // x8
  __int64 v10; // [xsp+8h] [xbp-18h] BYREF

  v5 = *(_QWORD *)(a1[2] + 32LL);
  a1[15] = v5;
  a1[16] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 56LL))(v5);
  if ( a2 != 0 )
  {
    v7 = *(_QWORD *)(a2 + 16);
    a1[18] = *(_QWORD *)(a2 + 8);
    a1[19] = v7;
  }
  new ((void*)(&v10)) Big((*(Big(**)(_QWORD, _QWORD *, void *, int))(*(_QWORD *)a1[15] + 64LL))(a1[15], a1 + 3, &unk_1326E41, 0));
  a1[20] = a1[16];
  result = (_QWORD *)a1[19];
  if ( result != nullptr )
  {
    v9 = a1[18];
    if ( *(_QWORD *)(v9 + 8) != 0 )
    {
      a1[493] = (_QWORD)(result);
      new ((void*)(&v10)) Big(((Big(*)(__typeof__(result), __typeof__(a1[15]), __typeof__(*(_QWORD *)(v9 + 8)), __typeof__((__int64)(a1 + 14))))sub_5E3610)(result, a1[15], *(_QWORD *)(v9 + 8), (__int64)(a1 + 14)));
    }
  }
  *a3 = 1;
  return ret_;
  return ret_;
}
// N5storm9transport24TransportManager_NetworkE, virtual slot 6
Big sub_3BC2A0(_QWORD *a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  _QWORD *v3; // x0
  __int64 v5; // x0
  _QWORD *result; // x0
  __int64 v7; // [xsp+8h] [xbp-18h] BYREF

  v3 = (_QWORD *)a1[493];
  if ( v3 != nullptr )
  {
    new ((void*)(&v7)) Big(((Big(*)(__typeof__(v3)))sub_5E41C0)(v3));
    a1[493] = 0;
  }
  v5 = a1[15];
  a1[20] = 0;
  new ((void*)(&v7)) Big((*(Big(**)(__int64, _QWORD *))(*(_QWORD *)v5 + 72LL))(v5, a1 + 3));
  a1[16] = 0;
  *a2 = 1;
  return ret_;
  return ret_;
}

// N5storm9transport24TransportManager_NetworkE, virtual slot 38
Big sub_3BD7B0(__int64 a1, __int64 a2, __int64 a3)
{
  Big ret_;
  _QWORD *a4 = (_QWORD *)&ret_;

  _QWORD *v5; // x0
  __int64 v7; // x8
  __int64 v8; // x3
  __int64 result; // x0
  __int64 v10; // [xsp+8h] [xbp-18h] BYREF

  v10 = a2;
  v5 = *(_QWORD **)(a1 + 4328);
  v7 = v5[22];
  if ( v7 != 0 )
  {
    v8 = *(_QWORD *)(v7 + 104);
    if ( v8 != 0 )
      (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int64, void *, __int64 *, __int64))(*v5 + 200LL))(
        v5,
        a3,
        a2,
        v8,
        &unk_13610B8,
        ((__int64*)goff_18F1208),
        1);
  }
  result = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 4384) + 64LL))(
             *(_QWORD *)(a1 + 4384),
             &v10);
  *a4 = 1;
  return ret_;
  return ret_;
}

// NSt3__110__function6__funcIZN5storm4echo5group20GroupManager_Network9OnStartupEPKNS2_10ActorParamEPNS2_11ActorResultEE4$_41NS_9allocatorISB_EEFvRKNS2_4GUIDERKNS2_10BasePacketERNS2_13DataContainerEEEE, virtual slot 6
void __fastcall sub_3E4420(__int64 a1)
{
  __int64 v2; // [xsp+8h] [xbp-8h] BYREF

  new ((void*)(&v2)) Big(((Big(*)(__typeof__(*(_QWORD *)(a1 + 8))))sub_39D110)(*(_QWORD *)(a1 + 8)));
}

// N5storm4echo24AgentMementoHierarchicalE, virtual slot 15
Big sub_3F5D10(__int64 a1, __int64 unused1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  Big ret_;
  __int64 *a6 = (__int64 *)&ret_;

  __int16 v7; // w28
  __int64 v13; // x25
  __int64 v14; // x26
  __int64 v15; // x22
  __int64 v16; // x27
  __int64 result; // x0

  v7 = *(_WORD *)(a1 + 208);
  v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 56LL))(*(_QWORD *)(a1 + 40));
  v14 = sub_264540(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 56LL));
  v15 = *(_QWORD *)(a1 + 72) + 4LL;
  v16 = sub_57D200(296, 8, 1092628480, 0LL, &unk_1326E41, 0);
  result = sub_38B230(v16, v13, v7 & 1, v14, v15, a2, a3, a4, a5);
  *a6 = v16;
  return ret_;
  return ret_;
}

// N5storm4echo12AgentMessageE, virtual slot 15
Big sub_3FA9A0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  Big ret_;
  __int64 *a7 = (__int64 *)&ret_;

  __int64 v14; // x26
  __int64 v15; // x27
  __int64 result; // x0

  v14 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 56LL))(*(_QWORD *)(a1 + 40));
  v15 = sub_57EDA0(280, 0LL, &unk_1326E41, 0);
  result = sub_388DA0(v15, v14, a2, a3, a4, a5, a6, a1 + 72);
  *a7 = v15;
  return ret_;
  return ret_;
}

// N5storm4echo16AgentNetPropertyE, virtual slot 15
Big sub_3FDF30(__int64 a1, __int64 unused1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  Big ret_;
  __int64 *a6 = (__int64 *)&ret_;

  __int64 v12; // x25
  __int64 v13; // x22
  __int64 v14; // x26
  __int64 result; // x0

  v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 40) + 56LL))(*(_QWORD *)(a1 + 40));
  v13 = sub_264540(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL) + 56LL));
  v14 = sub_57EDA0(120, 0LL, &unk_1326E41, 0);
  result = sub_389F00(v14, v12, v13, a2, a3, a4, a5);
  *a6 = v14;
  return ret_;
  return ret_;
}

Big sub_407D30(__int64 a1, __int64 *a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  char *v3; // x19
  __int64 v7; // x0
  __int64 v8; // x8
  __int64 v9; // x8
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v13; // [xsp+8h] [xbp-28h] BYREF

  v3 = (char *)(a1 + 664);
  std__mutex__lock((char *)(a1 + 664));
  v7 = *(_QWORD *)(a1 + 656);
  if ( v7 == 0 )
  {
    v7 = sub_56C9F0(56, 8, 1092624387, 0LL, &unk_1326E41, 0);
    v8 = qword_1912460;
    *(_DWORD *)(v7 + 8) = -1;
    *(_QWORD *)(v7 + 40) = 0;
    *(_QWORD *)(v7 + 48) = 0;
    *(_QWORD *)(v7 + 24) = 0;
    *(_QWORD *)(v7 + 32) = 0;
    *(_QWORD *)(v7 + 16) = v8;
    *(_QWORD *)v7 = (_QWORD)(goff_18F5A10 + 16);
    v9 = *(_QWORD *)(a1 + 656);
    *(_QWORD *)(a1 + 656) = v7;
    if ( v9 != 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v7 = *(_QWORD *)(a1 + 656);
    }
  }
  v10 = *a2;
  *a2 = 0;
  v13 = v10;
  sub_552BA0((unsigned __int64 *)(v7 + 32), &v13);
  v11 = v13;
  v13 = 0;
  if ( v11 != 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  *a3 = 2;
  { std__mutex__unlock(v3); return ret_; }
  return ret_;
}
Big sub_4148F0(__int64 a1, int a2, int *a3)
{
  Big ret_;
  _QWORD *a4 = (_QWORD *)&ret_;

  __int64 v7; // x22
  char *v8; // x24
  __int64 result; // x0
  int v10 __attribute__((aligned(8)));

  v7 = 0;
  *a4 = 1;
  v8 = (char *)(a1 + 8);
  do
  {
    result = *(_QWORD *)(v8 + v7);
    if ( result != 0 )
    {
      v10 = *a3;
      result = sub_4185B0(result, result + 56, a2, &v10);
      *a4 = 1;
    }
    v7 += 8;
  }
  while ( v7 != 256 );
  return ret_;
  return ret_;
}
// N5storm4echo21ObjectManager_NetworkE, virtual slot 51
Big sub_421060(_QWORD *result, __int64 a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  __int64 v3; // x29
  __int64 v4; // x30
  unsigned int v5; // w1
  unsigned int v6; // w9
  unsigned int v7 __attribute__((aligned(8)));
  __int64 v8; // [xsp+10h] [xbp-10h]
  __int64 v9; // [xsp+18h] [xbp-8h]

  if ( *(_DWORD *)(result[9] + 8LL) == 3 )
  {
    v8 = v3;
    v9 = v4;
    v6 = *(_DWORD *)(a2 + 36);
    v5 = *(_DWORD *)(a2 + 40);
    v7 = v6;
    { new ((void*)(a3)) Big(((Big(*)(__typeof__(result), __typeof__(v5), __typeof__(&v7)))sub_4210B0)(result, v5, &v7)); return ret_; }
  }
  else
  {
    *a3 = 1;
  }
  return ret_;
  return ret_;
}

// N5storm4echo21ObjectManager_NetworkE, virtual slot 35
Big sub_421520(_QWORD *result, __int64 a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  if ( *(_DWORD *)(result[9] + 8LL) == 3 )
    { new ((void*)(a3)) Big(((Big(*)(__typeof__(result), __typeof__(a2), __typeof__(0)))sub_421550)(result, a2, 0)); return ret_; }
  *a3 = 1;
  return ret_;
  return ret_;
}

// N5storm4echo21ObjectManager_NetworkE, virtual slot 102
Big sub_42D460(__int64 a1, int a2, int a3)
{
  Big ret_;
  _QWORD *a4 = (_QWORD *)&ret_;

  __int64 v5; // x8
  __int64 v6; // x20
  __int64 result; // x0
  int v9; // [xsp+Ch] [xbp-14h] BYREF
  int v8; // [xsp+8h] [xbp-18h] BYREF

  v5 = *(_QWORD *)(a1 + 64);
  v8 = a3;
  v9 = a2;
  v6 = v5 + 16;
  sub_2B8AD0(v5 + 16, &v8);
  result = sub_2B8A90(v6, &v9);
  *a4 = 1;
  return ret_;
  return ret_;
}

Big sub_42D4B0(__int64 a1, int a2, int a3)
{
  Big ret_;
  _QWORD *a4 = (_QWORD *)&ret_;

  __int64 v5; // x8
  __int64 v6; // x20
  __int64 result; // x0
  int v9; // [xsp+Ch] [xbp-14h] BYREF
  int v8; // [xsp+8h] [xbp-18h] BYREF

  v5 = *(_QWORD *)(a1 + 32);
  v8 = a3;
  v9 = a2;
  v6 = v5 + 16;
  sub_2B8AD0(v5 + 16, &v8);
  result = sub_2B8A90(v6, &v9);
  *a4 = 1;
  return ret_;
  return ret_;
}

Big sub_42D500(__int64 a1, __int64 unused1, __int64 a2, char a3)
{
  Big ret_;
  _QWORD *a4 = (_QWORD *)&ret_;

  char v6; // w21
  __int64 result; // x0

  v6 = a3 & 1;
  result = sub_2B8B00(*(_QWORD *)(a1 + 64) + 16LL, a2);
  *(_BYTE *)(a1 + 437) = v6;
  *a4 = 1;
  return ret_;
  return ret_;
}

// N5storm10DataNumberIjLNS_19DataNumberQualifier11EQualifiersE4ELj0EEE, virtual slot 5
Big sub_444BF0(__int64 a1, __int64 a2)
{
  Big ret_;
  int *a3 = (int *)&ret_;

  int v5; // w22
  __int64 result; // x0
  unsigned int src; // [xsp+Ch] [xbp-24h] BYREF

  v5 = -1000000;
  if ( *(_DWORD *)(a1 + 20) == 0 )
  {
    result = sub_5894B0(a2, 0);
    if ( (result & 1) == 0 )
      goto LABEL_5;
    goto LABEL_4;
  }
  result = sub_5894B0(a2, 1);
  if ( (result & 1) != 0 )
  {
    src = __builtin_bswap32(*(_DWORD *)(a1 + 20));
    result = sub_588E20(a2, (char *)&src, 0x20u, 1);
    if ( (result & 1) != 0 )
LABEL_4:
      v5 = 1;
  }
LABEL_5:
  *a3 = v5;
  a3[1] = 0;
  return ret_;
  return ret_;
}

// N5storm28SimpleLanMatchmakingStrategyE, virtual slot 2
void sub_45DF20(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 *v3; // x19
  _QWORD *v4; // x0
  _QWORD *v5; // x0
  _QWORD *v6; // x0
  _QWORD *v7; // x0
  _QWORD *v8; // x0
  _QWORD *v9; // x0
  int v12 __attribute__((aligned(8)));
  __int64 v11; // [xsp+8h] [xbp-18h] BYREF

  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 48) = *a3;
  v3 = ((__int64*)goff_18EDD18);
  v4 = (_QWORD *)*((__int64*)goff_18EDD18);
  v12 = 1265855533;
  new ((void*)(&v11)) Big(((Big(*)(__typeof__(v4), __typeof__(&v12)))sub_48D1D0)(v4, &v12));
  v5 = (_QWORD *)*v3;
  v12 = -749528944;
  new ((void*)(&v11)) Big(((Big(*)(__typeof__(v5), __typeof__(&v12)))sub_48D490)(v5, &v12));
  v6 = (_QWORD *)*v3;
  v12 = -1687658837;
  new ((void*)(&v11)) Big(((Big(*)(__typeof__(v6), __typeof__(&v12)))sub_48D770)(v6, &v12));
  v7 = (_QWORD *)*v3;
  v12 = 25735265;
  new ((void*)(&v11)) Big(((Big(*)(__typeof__(v7), __typeof__(&v12)))sub_48DA30)(v7, &v12));
  v8 = (_QWORD *)*v3;
  v12 = 416115230;
  new ((void*)(&v11)) Big(((Big(*)(__typeof__(v8), __typeof__(&v12)))sub_48DD10)(v8, &v12));
  v9 = (_QWORD *)*v3;
  v12 = -877886168;
  new ((void*)(&v11)) Big(((Big(*)(__typeof__(v9), __typeof__(&v12)))sub_48DFF0)(v9, &v12));
}

// N5storm27SimpleNoMatchmakingStrategyE, virtual slot 2
void sub_45FB50(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 *v3; // x19
  _QWORD *v4; // x0
  _QWORD *v5; // x0
  _QWORD *v6; // x0
  _QWORD *v7; // x0
  _QWORD *v8; // x0
  _QWORD *v9; // x0
  int v12 __attribute__((aligned(8)));
  __int64 v11; // [xsp+8h] [xbp-18h] BYREF

  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 48) = *a3;
  v3 = ((__int64*)goff_18EDD18);
  v4 = (_QWORD *)*((__int64*)goff_18EDD18);
  v12 = 1265855533;
  new ((void*)(&v11)) Big(((Big(*)(__typeof__(v4), __typeof__(&v12)))sub_48D1D0)(v4, &v12));
  v5 = (_QWORD *)*v3;
  v12 = -749528944;
  new ((void*)(&v11)) Big(((Big(*)(__typeof__(v5), __typeof__(&v12)))sub_48D490)(v5, &v12));
  v6 = (_QWORD *)*v3;
  v12 = -1687658837;
  new ((void*)(&v11)) Big(((Big(*)(__typeof__(v6), __typeof__(&v12)))sub_48D770)(v6, &v12));
  v7 = (_QWORD *)*v3;
  v12 = 25735265;
  new ((void*)(&v11)) Big(((Big(*)(__typeof__(v7), __typeof__(&v12)))sub_48DA30)(v7, &v12));
  v8 = (_QWORD *)*v3;
  v12 = 416115230;
  new ((void*)(&v11)) Big(((Big(*)(__typeof__(v8), __typeof__(&v12)))sub_48DD10)(v8, &v12));
  v9 = (_QWORD *)*v3;
  v12 = -877886168;
  new ((void*)(&v11)) Big(((Big(*)(__typeof__(v9), __typeof__(&v12)))sub_48DFF0)(v9, &v12));
}

// N5storm21SimplePunchControllerE, virtual slot 99
Big sub_462500(__int64 result)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  __int64 v3; // x8
  __int64 v4; // x20
  _BYTE v5[8]; // [xsp+8h] [xbp-28h] BYREF

  v3 = *(_QWORD *)(result + 40);
  if ( v3 != 0 )
  {
    v4 = result;
    new ((void*)((__int64)v5)) Big(((Big(*)(__typeof__(v3 + 24), __typeof__(*(_DWORD *)(result + 16)), __typeof__(-1), __typeof__(&qword_1913338)))sub_5E24E0)(v3 + 24, *(_DWORD *)(result + 16), -1, &qword_1913338));
    new ((void*)((__int64)v5)) Big(((Big(*)(__typeof__(*(_QWORD *)(v4 + 40) + 16LL), __typeof__(*(_DWORD *)(v4 + 16)), __typeof__(-1), __typeof__(&qword_1913338)))sub_5E03F0)(*(_QWORD *)(v4 + 40) + 16LL, *(_DWORD *)(v4 + 16), -1, &qword_1913338));
    new ((void*)((__int64)v5)) Big(((Big(*)(__typeof__(*(_QWORD *)(v4 + 40) + 40LL), __typeof__(*(_DWORD *)(v4 + 16)), __typeof__(-1), __typeof__(&qword_1913338)))sub_5E2AF0)(*(_QWORD *)(v4 + 40) + 40LL, *(_DWORD *)(v4 + 16), -1, &qword_1913338));
  }
  *a2 = 1;
  return ret_;
  return ret_;
}

// N5storm21SimplePunchControllerE, virtual slot 102
Big sub_462740(__int64 result)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  __int64 v3; // x8
  __int64 v4; // x20
  _BYTE v5[8]; // [xsp+8h] [xbp-28h] BYREF

  v3 = *(_QWORD *)(result + 40);
  if ( v3 != 0 )
  {
    v4 = result;
    new ((void*)((__int64)v5)) Big(((Big(*)(__typeof__(v3 + 40), __typeof__(*(_DWORD *)(result + 16)), __typeof__(-1), __typeof__(&qword_1913338)))sub_5E2C00)(v3 + 40, *(_DWORD *)(result + 16), -1, &qword_1913338));
    new ((void*)((__int64)v5)) Big(((Big(*)(__typeof__(*(_QWORD *)(v4 + 40) + 16LL), __typeof__(*(_DWORD *)(v4 + 16)), __typeof__(-1), __typeof__(&qword_1913338)))sub_5E0500)(*(_QWORD *)(v4 + 40) + 16LL, *(_DWORD *)(v4 + 16), -1, &qword_1913338));
    new ((void*)((__int64)v5)) Big(((Big(*)(__typeof__(*(_QWORD *)(v4 + 40) + 24LL), __typeof__(*(_DWORD *)(v4 + 16)), __typeof__(-1), __typeof__(&qword_1913338)))sub_5E25F0)(*(_QWORD *)(v4 + 40) + 24LL, *(_DWORD *)(v4 + 16), -1, &qword_1913338));
  }
  *a2 = 1;
  return ret_;
  return ret_;
}

// N5storm21SimplePunchControllerE, virtual slot 105
Big sub_463C00(__int64 a1, __int64 a2)
{
  Big ret_;
  int *a3 = (int *)&ret_;

  int v4; // w8
  int v5; // w9
  unsigned int v6; // w20
  __int64 v7; // x9
  __int64 v8; // x8
  __int64 v9; // x23
  __int64 v10; // x21
  __int64 v11; // x22
  __int64 result; // x0
  __int64 v14; // [xsp+18h] [xbp-28h] BYREF
  __int64 v13; // [xsp+8h] [xbp-38h] BYREF

  v4 = *(_DWORD *)(a2 + 32);
  v5 = *(_DWORD *)(a2 + 36);
  *a3 = v4;
  a3[1] = v5;
  if ( v4 >= 1 )
    *(_BYTE *)(a1 + 49) = 0;
  v6 = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(a1 + 28) = -1;
  v7 = qword_1913340;
  *(_DWORD *)(a1 + 384) = -1;
  *(_DWORD *)(a1 + 472) = -1;
  v8 = *(_QWORD *)(a1 + 56);
  v9 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = v7;
  v10 = *(_QWORD *)(v8 + 48);
  v11 = sub_56C9F0(48, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v14 = v9;
  sub_5859F0(v11, a3, &v14);
  v13 = v11;
  new ((void*)((__int64)&v14)) Big(((Big(*)(__typeof__(v10), __typeof__(&v13), __typeof__(v6)))sub_54D420)(v10, &v13, v6));
  result = v13;
  v13 = 0;
  if ( result != 0 )
    { (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result); return ret_; }
  return ret_;
  return ret_;
}

// N5storm37SimpleUbiServicesControllerClientBaseE, virtual slot 25
Big sub_465500(__int64 a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  __int64 result; // x0
  __int64 v5; // x21
  __int64 v8; // [xsp+48h] [xbp-18h] BYREF
  _QWORD v7[6]; // [xsp+10h] [xbp-50h] BYREF
  __int64 v6; // [xsp+8h] [xbp-58h] BYREF

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 176LL))(a1);
  if ( (result & 1) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = 1;
    v8 = qword_1913340;
    sub_5859F0(v7, &v6, &v8);
    v7[0] = (_QWORD)(((__int64 *)((__int64*)goff_18F6C88) + 2));
    new ((void*)(&v8)) Big((*(Big(**)(__int64, _QWORD *))(*(_QWORD *)v5 + 32LL))(v5, v7));
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 176LL))(a1);
    *(_BYTE *)(a1 + 32) = result & 1;
  }
  *a2 = 1;
  return ret_;
  return ret_;
}
__int64 __fastcall sub_4699A0(__int64 a1)
{
  _QWORD *v2; // x20
  __int64 v3; // x21
  __int64 result; // x0
  __int64 v6; // [xsp+18h] [xbp-18h] BYREF
  unsigned int *v5; // [xsp+8h] [xbp-28h] BYREF

  v2 = *(_QWORD **)(*(_QWORD *)(sub_313860(a1) + 8) + 8LL);
  v3 = sub_56C9F0(160, 8, 1092624387, 0LL, &unk_1326E41, 0);
  sub_2BAA10(
    v3,
    a1 + 320,
    *(unsigned int *)(a1 + 288),
    *(_QWORD *)(a1 + 256),
    *(unsigned int *)(a1 + 296),
    *(_QWORD *)(a1 + 272),
    *(unsigned int *)(a1 + 292),
    *(_QWORD *)(a1 + 264));
  v6 = v3;
  new ((void*)(&v5)) Big(((Big(*)(__typeof__(v2), __typeof__(&v6), __typeof__(*(_DWORD *)(a1 + 192)), __typeof__(1)))sub_54D4C0)(v2, &v6, *(_DWORD *)(a1 + 192), 1));
  result = v6;
  v6 = 0;
  if ( result != 0 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  return result;
}

void __fastcall sub_46A350(_BYTE *result, __int64 a2)
{
  _BYTE *v3; // x19
  _QWORD *v4; // x21
  __int64 v5; // x22
  _BYTE *v7; // [xsp+8h] [xbp-28h] BYREF
  unsigned int *v6; // [xsp+0h] [xbp-30h] BYREF

  if ( result[368] != 0 )
  {
    v3 = result;
    v4 = *(_QWORD **)(*(_QWORD *)(sub_313860(result) + 8) + 8LL);
    v5 = sub_56C9F0(64, 8, 1092624387, 0LL, &unk_1326E41, 0);
    sub_2BCEF0(v5, v3 + 320, *((unsigned int *)v3 + 72), *(unsigned int *)(a2 + 56));
    v7 = (_BYTE *)v5;
    new ((void*)(&v6)) Big(((Big(*)(__typeof__(v4), __typeof__((__int64 *)&v7), __typeof__(*((_DWORD *)v3 + 48)), __typeof__(1)))sub_54D4C0)(v4, (__int64 *)&v7, *((_DWORD *)v3 + 48), 1));
    result = v7;
    v7 = nullptr;
    if ( result != nullptr )
      result = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)result + 8LL))(result);
    if ( *((_DWORD *)v3 + 73) == *(_DWORD *)(a2 + 56) )
      v3[472] = 1;
  }
  return;
}

// N5storm13SimpleAsyncOp8RegistryE, virtual slot 102
Big sub_474660(__int64 a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  __int64 v4; // x0
  _QWORD *result; // x0

  v4 = sub_57D200(40, 8, 1092677632, 0LL, &unk_1326E41, 0);
  *(_QWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 24) = 0;
  *(_QWORD *)v4 = 0;
  *(_QWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 32) = 1065353216;
  *(_QWORD *)(a1 + 64) = v4;
  result = (_QWORD *)sub_57D200(24, 8, 1092677632, 0LL, &unk_1326E41, 0);
  *result = (_QWORD)(result);
  result[1] = (_QWORD)(result);
  result[2] = 0;
  *(_QWORD *)(a1 + 72) = (_QWORD)(result);
  *(_BYTE *)(a1 + 80) = 1;
  *a2 = 1;
  return ret_;
  return ret_;
}
// N5storm22SimpleGlobalControllerE, virtual slot 103
Big sub_49A340(__int64 a1, __int64 a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  __int64 result; // x0

  *a3 = 1;
  result = *(_QWORD *)(a1 + 1096);
  *(_QWORD *)(a1 + 1096) = 0;
  if ( result != 0 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  *(_BYTE *)(a1 + 1122) = 0;
  if ( *(int *)(a2 + 32) >= 1 )
    *(_BYTE *)(a1 + 1121) = 0;
  return ret_;
  return ret_;
}

// N5storm22SimpleGlobalControllerE, virtual slot 100
Big sub_49B960(__int64 a1, __int64 a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  __int64 v4; // x22
  __int64 v7; // x23
  __int64 result; // x0
  __int64 v9; // x22
  __int64 i; // x21

  *(_BYTE *)(a1 + 1122) = 1;
  v4 = *(_QWORD *)(a2 + 32);
  v7 = sub_56C9F0(1232, 16, 1092624384, 0LL, &unk_1326E41, 0);
  sub_5B87B0(v7, v4);
  result = *(_QWORD *)(a1 + 1096);
  *(_QWORD *)(a1 + 1096) = v7;
  if ( result != 0 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  v9 = a1 + 32;
  for ( i = *(_QWORD *)(a1 + 40); i != v9; i = *(_QWORD *)(i + 8) )
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(i + 16) + 792LL))(*(_QWORD *)(i + 16), a2);
  *a3 = 1;
  return ret_;
  return ret_;
}

// N5storm22SimpleGlobalControllerE, virtual slot 101
Big sub_49BA20(__int64 result, __int64 a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  __int64 v3; // x22
  __int64 i; // x21

  v3 = *(_QWORD *)(result + 40);
  for ( i = result + 32; v3 != i; v3 = *(_QWORD *)(v3 + 8) )
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v3 + 16) + 800LL))(*(_QWORD *)(v3 + 16), a2);
  *a3 = 1;
  return ret_;
  return ret_;
}

// N5storm22SimpleObjectControllerE, virtual slot 123
Big sub_4A0C20(__int64 a1, _QWORD *a2, int a3, int a4, __int64 a5)
{
  Big ret_;
  _QWORD *a6 = (_QWORD *)&ret_;

  _QWORD *v12; // x25
  __int64 result; // x0
  __int64 v14; // x8

  v12 = (_QWORD *)sub_57D200(448, 16, 1092677632, 0LL, &unk_1326E41, 0);
  result = sub_4B2DB0((__int64)v12, *(_QWORD *)(a1 + 32), a3, -1, a5, a4);
  v14 = (long long)(goff_18F7A40);
  v12[55] = 0;
  *v12 = v14 + 16;
  *a2 = (_QWORD)(v12);
  *a6 = 1;
  return ret_;
  return ret_;
}
void sub_4A3340(__int64 a1, __int64 a2)
{
  __int64 v3; // [xsp+8h] [xbp-8h] BYREF

  *(_QWORD *)(a1 + 64) = a2;
  new ((void*)(&v3)) Big(((Big(*)(__typeof__(a2), __typeof__(a1)))sub_56CD80)(a2, a1));
}

// N5storm19SimpleObjectHandlerE, virtual slot 23
Big sub_4B0930(__int64 a1, __int64 a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  _QWORD *result; // x0
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  *(_BYTE *)(a1 + 156) = 0;
  *(_DWORD *)(a1 + 152) = *(_DWORD *)(a2 + 56);
  result = *(_QWORD **)(a1 + 168);
  if ( result != nullptr )
    new ((void*)(&v5)) Big(((Big(*)(__typeof__(result), __typeof__(a2)))sub_56B030)(result, a2));
  *a3 = 1;
  return ret_;
  return ret_;
}

// N5storm24SimpleTrackingControllerE, virtual slot 104
Big sub_4B2D30(__int64 a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  int v3; // w1
  __int64 v4; // x0
  __int64 result; // x0
  __int64 v7; // [xsp+18h] [xbp-8h] BYREF
  _BYTE v6[8]; // [xsp+8h] [xbp-18h] BYREF

  v3 = *(_DWORD *)(a1 + 16);
  v4 = *(_QWORD *)(a1 + 32) + 32LL;
  v7 = qword_1914468;
  new ((void*)((__int64)v6)) Big(((Big(*)(__typeof__(v4), __typeof__(v3), __typeof__(-1), __typeof__(&v7)))sub_58B1B0)(v4, v3, -1, &v7));
  *a2 = 1;
  return ret_;
  return ret_;
}

// N5storm19SimpleObjectHandlerE, virtual slot 4
Big sub_4B4910(__int64 a1, __int64 a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  _QWORD *result; // x0
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  *(_BYTE *)(a1 + 156) = 1;
  result = *(_QWORD **)(a1 + 168);
  if ( result != nullptr )
    new ((void*)(&v5)) Big(((Big(*)(__typeof__(result), __typeof__(a2)))sub_56B030)(result, a2));
  *a3 = 1;
  return ret_;
  return ret_;
}

// N5storm19SimpleObjectHandlerE, virtual slot 11
Big sub_4B4DB0(__int64 a1, __int64 a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  _QWORD *result; // x0
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  *(_DWORD *)(a1 + 152) = *(_DWORD *)(a2 + 56);
  result = *(_QWORD **)(a1 + 168);
  if ( result != nullptr )
    new ((void*)(&v5)) Big(((Big(*)(__typeof__(result), __typeof__(a2)))sub_56B030)(result, a2));
  *a3 = 1;
  return ret_;
  return ret_;
}

// N5storm19SimpleObjectHandlerE, virtual slot 12
Big sub_4B4DF0(__int64 a1, __int64 a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  _QWORD *result; // x0
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  *(_BYTE *)(a1 + 156) = 0;
  result = *(_QWORD **)(a1 + 168);
  if ( result != nullptr )
    new ((void*)(&v5)) Big(((Big(*)(__typeof__(result), __typeof__(a2)))sub_56B030)(result, a2));
  *a3 = 1;
  return ret_;
  return ret_;
}

// N5storm30SimpleStormMatchmakingStrategyE, virtual slot 30
Big sub_4CEE00(__int64 a1, __int64 a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  __int64 result; // x0
  __int64 v7; // x0

  result = *(_QWORD *)(*(_QWORD *)(a1 + 536) + 56LL);
  if ( result != 0 )
  {
    sub_543E80(result, ((__int64*)goff_18F8718), a1);
    sub_543E30(*(_QWORD *)(*(_QWORD *)(a1 + 536) + 56LL), ((__int64*)goff_18F8720), a1);
    sub_543E40(*(_QWORD *)(*(_QWORD *)(a1 + 536) + 56LL), ((__int64*)goff_18F8728), a1);
    sub_543E70(*(_QWORD *)(*(_QWORD *)(a1 + 536) + 56LL), ((__int64*)goff_18F8730), a1);
    sub_543E60(*(_QWORD *)(*(_QWORD *)(a1 + 536) + 56LL), ((__int64*)goff_18F8738), a1);
    result = sub_543E50(*(_QWORD *)(*(_QWORD *)(a1 + 536) + 56LL), goff_18F8740, a1);
    if ( a2 != 0 )
    {
      v7 = sub_5490B0(a2);
      result = sub_51EF40(v7, *(_QWORD *)(*(_QWORD *)(a1 + 536) + 56LL));
    }
  }
  *a3 = 1;
  return ret_;
  return ret_;
}

// N5storm2mm30IP2LocationProtocolAdminClientE, virtual slot 20
Big sub_4EB1E0()
{
  Big ret_;
  RecoveredSdkText *a1 = (RecoveredSdkText *)&ret_;

  Recovered_ResultTextConstruct(a1, "IP2LocationProtocolAdmin");
  return ret_;
}

// N5storm2mm12UDPTransport12TransportJobE, virtual slot 8
Big sub_4F4890()
{
  Big ret_;
  RecoveredSdkText *a1 = (RecoveredSdkText *)&ret_;

  Recovered_ResultTextConstruct(a1, (const char *)&unk_1326E41);
  return ret_;
}

Big sub_507C40(__int64 a1, int a2)
{
  Big ret_;
  __int64 a3 = (__int64)&ret_;

  *(_DWORD *)(a1 + 24) = a2;
  { sub_4F5EF0(a3, "Core", 0); return ret_; }
  return ret_;
}

Big sub_507C70(__int64 a1, int a2)
{
  Big ret_;
  __int64 a3 = (__int64)&ret_;

  *(_DWORD *)(a1 + 28) = a2;
  { sub_4F5EF0(a3, "Core", 0); return ret_; }
  return ret_;
}

Big sub_507CF0(__int64 a1, int a2)
{
  Big ret_;
  __int64 a3 = (__int64)&ret_;

  *(_DWORD *)(a1 + 32) = a2;
  { sub_4F5EF0(a3, "Core", 0); return ret_; }
  return ret_;
}

// N5storm2mm12UDPTransportE, virtual slot 2
Big sub_50C3D0(unsigned int *a1)
{
  Big ret_;
  __int64 a2 = (__int64)&ret_;

  sub_50C400(a1);
  { sub_4F5EF0(a2, "Core", 0); return ret_; }
  return ret_;
}

// N5storm2mm10TimedQueueINS0_15NetworkEmulator13NetworkPacketEEE, virtual slot 4
Big sub_510460(__int64 a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  __int64 v2; // x21
  _QWORD *v3; // x20
  __int64 v5; // x0

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a2 + 1;
  sub_4FABF0(a2 + 1);
  v5 = *(_QWORD *)(v2 + 16);
  *a2 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  { sub_4FAC60(v3, v2 + 24); return ret_; }
  return ret_;
}

// N5storm2mm13RootTransportE, virtual slot 2
Big sub_513C80()
{
  Big ret_;
  __int64 a1 = (__int64)&ret_;

  { sub_4F5EF0(a1, "Core", 0); return ret_; }
  return ret_;
}

// N5storm2mm15WebSocketStreamE, virtual slot 21
Big sub_518C00()
{
  Big ret_;
  __int64 a1 = (__int64)&ret_;

  { sub_4F5EF0(a1, "Core", 0); return ret_; }
  return ret_;
}

// N5storm2mm15WebSocketStreamE, virtual slot 22
Big sub_518C20()
{
  Big ret_;
  __int64 a1 = (__int64)&ret_;

  { sub_4F5EF0(a1, "Core", 0); return ret_; }
  return ret_;
}

// N5storm2mm18JobConnectEndPointE, virtual slot 8
Big sub_51D3F0()
{
  Big ret_;
  RecoveredSdkText *a1 = (RecoveredSdkText *)&ret_;

  Recovered_ResultTextConstruct(a1, (const char *)&unk_1326E41);
  return ret_;
}

Big sub_51DB80(__int64 a1)
{
  Big ret_;
  RecoveredSdkText *a2 = (RecoveredSdkText *)&ret_;

  const char *v2; // x1

  if ( *(_DWORD *)(a1 + 8) == 4 )
    v2 = *(const char **)a1;
  else
    v2 = (const char *)&unk_1326E41;
  Recovered_ResultTextConstruct(a2, v2);
  return ret_;
}

// N5storm2mm30GlobalNotificationEventManagerE, virtual slot 20
Big sub_529D50()
{
  Big ret_;
  RecoveredSdkText *a1 = (RecoveredSdkText *)&ret_;

  Recovered_ResultTextConstruct(a1, "NotificationProtocol");
  return ret_;
}

// N5storm2mm19LoginProtocolClientE, virtual slot 20
Big sub_52CA60()
{
  Big ret_;
  RecoveredSdkText *a1 = (RecoveredSdkText *)&ret_;

  Recovered_ResultTextConstruct(a1, "LoginProtocol");
  return ret_;
}

// N5storm2mm27ClientProtocolRequestBrokerE, virtual slot 15
Big sub_52DF50()
{
  Big ret_;
  RecoveredSdkText *a1 = (RecoveredSdkText *)&ret_;

  Recovered_ResultTextConstruct(a1, "Client");
  return ret_;
}

// N5storm2mm25MatchmakingProtocolClientE, virtual slot 20
Big sub_540F30()
{
  Big ret_;
  RecoveredSdkText *a1 = (RecoveredSdkText *)&ret_;

  Recovered_ResultTextConstruct(a1, "MatchmakingProtocol");
  return ret_;
}

Big sub_54D2B0(unsigned int *result, __int64 a2)
{
  Big ret_;
  int *a3 = (int *)&ret_;

  __int64 v4; // x1
  __int64 v5; // x9
  int v7; // w8
  unsigned __int64 v8; // x2
  __int64 v9; // [xsp+8h] [xbp-18h] BYREF

  v4 = *((_QWORD *)result + 1);
  v5 = *(_QWORD *)(v4 + 144);
  v7 = -1000000;
  if ( v5 != 0 && *(_BYTE *)(v5 + 13) != 0 )
  {
    v8 = *(unsigned int *)(a2 + 16);
    if ( (_DWORD)v8 != -1 )
    {
      new ((void*)(&v9)) Big(((Big(*)(__typeof__(v5 + 112 * ((v8 >> 28) & 3) + 40), __typeof__(v4), __typeof__(v8)))sub_553B00)(v5 + 112 * ((v8 >> 28) & 3) + 40, v4, v8));
      *(_DWORD *)(a2 + 16) = -1;
    }
    v7 = 1;
  }
  *a3 = v7;
  a3[1] = 0;
  return ret_;
  return ret_;
}

// N5storm12CoreImplMainE, virtual slot 9
Big sub_54D330(unsigned int *result, __int64 a2)
{
  Big ret_;
  int *a3 = (int *)&ret_;

  __int64 v3; // x9
  int v5; // w8
  unsigned __int64 v6; // x2
  __int64 v8; // [xsp+8h] [xbp-18h] BYREF

  v3 = *((_QWORD *)result + 18);
  v5 = -1000000;
  if ( v3 != 0 && *(_BYTE *)(v3 + 13) != 0 )
  {
    v6 = *(unsigned int *)(a2 + 16);
    if ( (_DWORD)v6 != -1 )
    {
      new ((void*)(&v8)) Big(((Big(*)(__typeof__(v3 + 112 * ((v6 >> 28) & 3) + 40), __typeof__((__int64)result), __typeof__(v6)))sub_553B00)(v3 + 112 * ((v6 >> 28) & 3) + 40, (__int64)result, v6));
      *(_DWORD *)(a2 + 16) = -1;
    }
    v5 = 1;
  }
  *a3 = v5;
  a3[1] = 0;
  return ret_;
  return ret_;
}

// N5storm6common21NetworkHelper_NetworkE, virtual slot 3
Big sub_555640(__int64 a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  _QWORD *result; // x0
  __int64 v4; // [xsp+8h] [xbp-8h] BYREF

  new ((void*)(&v4)) Big((*(Big(**)(_QWORD, __int64, void *, int))(**(_QWORD **)(a1 + 64)
                                                                                             + 64LL))(*(_QWORD *)(a1 + 64), a1 + 24, &unk_1326E41, 0));
  *a2 = 1;
  return ret_;
  return ret_;
}

// N5storm6common21NetworkHelper_NetworkE, virtual slot 5
Big sub_555690(__int64 a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  _QWORD *result; // x0
  __int64 v5; // x8
  __int64 v6; // x23
  __int64 v7; // x22
  __int64 v8; // x24
  __int64 v9; // [xsp+8h] [xbp-38h] BYREF

  new ((void*)(&v9)) Big((*(Big(**)(_QWORD, __int64))(**(_QWORD **)(a1 + 64) + 72LL))(*(_QWORD *)(a1 + 64), a1 + 24));
  v6 = *(_QWORD *)(a1 + 80);
  v5 = *(_QWORD *)(a1 + 88);
  if ( v5 != v6 )
  {
    do
    {
      v7 = *(_QWORD *)(v5 - 24);
      v8 = v5 - 32;
      *(_QWORD *)(v5 - 24) = 0;
      if ( v7 != 0 )
      {
        sub_58AEC0(v7);
        if ( (*(_BYTE *)(v7 + 144) & 1) != 0 )
          sub_56CA00(*(_QWORD *)(v7 + 160), &unk_1326E41, 0);
        sub_58A960(v7);
        result = (_QWORD *)sub_57EDC0(v7, 0LL, &unk_1326E41, 0);
      }
      v5 = v8;
    }
    while ( v6 != v8 );
  }
  *(_QWORD *)(a1 + 88) = v6;
  *(_QWORD *)(a1 + 104) = 0;
  *a2 = 1;
  return ret_;
  return ret_;
}

Big sub_559C80(_QWORD *a1, const void *a2, unsigned int a3)
{
  Big ret_;
  _QWORD *a4 = (_QWORD *)&ret_;

  _QWORD *v8; // x0
  void *result; // x0

  sub_1E54D0(a1 + 20);
  v8 = (_QWORD *)a1[17];
  if ( a1[18] < (unsigned __int64)a3 )
  {
    if ( v8 != a1 + 1 && v8 != nullptr )
      sub_37030(v8);
    v8 = (_QWORD *)sub_36EA0(a3, 0x10u, 0, 1092624384);
    a1[17] = (_QWORD)(v8);
    a1[18] = a3;
  }
  a1[19] = a3;
  result = memcpy(v8, a2, a3);
  *a4 = 1;
  return ret_;
  return ret_;
}
Big sub_561AD0(__int64 a1)
{
  Big ret_;
  __int64 a2 = (__int64)&ret_;

  { sub_54C960(a2, a1 + 152); return ret_; }
  return ret_;
}

// N5storm15BaseMultiSocketE, virtual slot 3
Big sub_562E00(__int64 a1, __int64 a2)
{
  Big ret_;
  int *a3 = (int *)&ret_;

  _QWORD *v3; // x20
  _QWORD *result; // x0
  int v7; // w8
  __int64 v8; // [xsp+8h] [xbp-18h] BYREF

  v3 = (_QWORD *)(a1 + 56);
  v8 = a2;
  result = (_QWORD *)sub_571270(a1 + 56, &v8);
  if ( result != nullptr )
  {
    v8 = a2;
    result = (_QWORD *)sub_571270(v3, &v8);
    if ( result != nullptr )
      result = (_QWORD *)sub_571390(v3, result);
    v7 = 1;
  }
  else
  {
    v7 = -999981;
  }
  *a3 = v7;
  a3[1] = 0;
  return ret_;
  return ret_;
}

Big sub_564E10(const void *a1, unsigned __int64 a2)
{
  Big ret_;
  size_t **a3 = (size_t **)&ret_;

  size_t *v6; // x0
  size_t v7; // x2
  size_t *v8; // x22
  void *result; // x0

  v6 = (size_t *)sub_57D200(1512, 8, 1092657164, 0LL, &unk_1326E41, 0);
  if ( a2 >= 0x5DC )
    v7 = 1500;
  else
    v7 = a2;
  v8 = v6;
  *v6 = v7;
  result = memcpy(v6 + 1, a1, v7);
  *a3 = v8;
  return ret_;
  return ret_;
}

// N5storm5stats20StatsManager_NetworkE, virtual slot 2
Big sub_56B680(_QWORD *a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  __int64 v4; // x0
  _QWORD *result; // x0
  __int64 v6; // [xsp+8h] [xbp-18h] BYREF

  v4 = *(_QWORD *)(a1[2] + 32LL);
  a1[7] = v4;
  a1[8] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
  new ((void*)(&v6)) Big((*(Big(**)(_QWORD, _QWORD *, void *, int))(*(_QWORD *)a1[7] + 64LL))(a1[7], a1 + 3, &unk_1326E41, 0));
  *a2 = 1;
  return ret_;
  return ret_;
}

// N5storm5stats20StatsManager_NetworkE, virtual slot 6
Big sub_56B700(__int64 a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  _QWORD *result; // x0
  __int64 v4; // [xsp+8h] [xbp-8h] BYREF

  new ((void*)(&v4)) Big((*(Big(**)(_QWORD, __int64))(**(_QWORD **)(a1 + 56) + 72LL))(*(_QWORD *)(a1 + 56), a1 + 24));
  *a2 = 1;
  return ret_;
  return ret_;
}

void sub_575D70(__int64 a1, __int64 a2)
{
  __int64 *v2; // x22
  __int64 v5; // x0
  __int64 *v6; // x8
  int v8 __attribute__((aligned(8)));

  v2 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *(_QWORD *)a1 = (_QWORD)(((__int64 *)((__int64*)goff_18EDD08) + 2));
  v5 = sub_56DC80(a1);
  v6 = ((__int64 *)((__int64*)goff_18FA228) + 2);
  *(_QWORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 16) = 1;
  *(_DWORD *)(a1 + 20) = -1;
  *(_QWORD *)a1 = (_QWORD)(v6);
  *(_QWORD *)(a1 + 8) = v5;
  *(_QWORD *)(a1 + 32) = (_QWORD)(v2);
  *(_QWORD *)(a1 + 40) = sub_56DC80(a1 + 32);
  *(_WORD *)(a1 + 48) = 1;
  *(_QWORD *)(a1 + 32) = (_QWORD)(((__int64 *)goff_18EEE10 + 2));
  new ((void*)(&v8)) Big(((Big(*)(__typeof__(a1), __typeof__(*(_QWORD *)(a2 + 24)), __typeof__(*(_BYTE *)(a2 + 49) == 1)))sub_575E20)(a1, *(_QWORD *)(a2 + 24), *(_BYTE *)(a2 + 49) == 1));
}
// N5storm4echo9voicechat17ChatterDescriptorE, virtual slot 10
Big sub_576670(__int64 a1)
{
  Big ret_;
  char *a2 = (char *)&ret_;

  unsigned int *v3; // x0

  v3 = (unsigned int *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1);
  *((_QWORD *)a2 + 1) = 0;
  *((_QWORD *)a2 + 2) = 0;
  *(_QWORD *)a2 = 0;
  { sub_C22610(v3, a2); return ret_; }
  return ret_;
}

Big sub_588880()
{
  Big ret_;
  _QWORD *a1 = (_QWORD *)&ret_;

  _QWORD *result; // x0

  result = (_QWORD *)sub_57EDA0(8, 0LL, &unk_1326E41, 0);
  *result = (_QWORD)(((char *)((__int64*)goff_18F28F0) + 16));
  *a1 = (_QWORD)(result);
  return ret_;
  return ret_;
}
Big sub_5888D0()
{
  Big ret_;
  _QWORD *a1 = (_QWORD *)&ret_;

  _QWORD *result; // x0

  result = (_QWORD *)sub_57EDA0(8, 0LL, &unk_1326E41, 0);
  *result = (_QWORD)(goff_18F28F8 + 16);
  *a1 = (_QWORD)(result);
  return ret_;
  return ret_;
}
void __fastcall sub_588970(char *a1, unsigned int a2, __int64 *a3, __int64 *a4)
{
  __int64 v4; // x8
  __int64 v5; // x8
  __int64 v6; // x8
  __int64 v8; // [xsp+8h] [xbp-8h] BYREF

  v4 = (long long)(((__int64*)goff_18FA680));
  *(_QWORD *)a1 = v4 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 8 * a2;
  *(_QWORD *)(a1 + 28) = 0;
  v5 = *a3;
  *a3 = 0;
  *(_QWORD *)(a1 + 40) = v5;
  v6 = *a4;
  *a4 = 0;
  *(_QWORD *)(a1 + 48) = v6;
  *(_BYTE *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  new ((void*)(&v8)) Big(((Big(*)(__typeof__(a1), __typeof__(a2), __typeof__(0)))sub_5889E0)(a1, a2, 0));
}
// N5storm17ThreadBufferStackE, virtual slot 2
Big sub_58B9C0(__int64 a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  __int64 result; // x0

  result = sub_57D200(32, 8, 1092624384, 0LL, &unk_1326E41, 0);
  *(_QWORD *)result = 0;
  *(_WORD *)(result + 6) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  *(_WORD *)(result + 22) = 0;
  *(_QWORD *)(a1 + 24) = result;
  *a2 = 1;
  return ret_;
  return ret_;
}

// N5storm12TimerManagerE, virtual slot 5
Big sub_58C470(__int64 result)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  __int64 v3; // x20
  _QWORD *v4; // x0
  __int64 v5; // x22

  if ( *(_QWORD *)(result + 40) != 0 )
  {
    v3 = result;
    do
    {
      v4 = *(_QWORD **)(v3 + 32);
      v5 = v4[2];
      *(_QWORD *)(*v4 + 8LL) = v4[1];
      *(_QWORD *)v4[1] = *v4;
      --*(_QWORD *)(v3 + 40);
      result = sub_56CA00(v4, &unk_1326E41, 0);
      if ( v5 != 0 )
        result = sub_57EDC0(v5, 0LL, &unk_1326E41, 0);
    }
    while ( *(_QWORD *)(v3 + 40) != 0 );
  }
  *a2 = 1;
  return ret_;
  return ret_;
}

Big sub_592320(__int64 result, __int64 a2)
{
  Big ret_;
  __int64 a3 = (__int64)&ret_;

  int v3; // w10
  __int64 v4; // x9
  __int64 v5; // x11

  v3 = *(_DWORD *)(result + 24);
  *(_QWORD *)a3 = (_QWORD)(((char *)((__int64*)goff_18EDF98) + 16));
  *(_QWORD *)(a3 + 8) = *(_QWORD *)(a2 + 8) & *(_QWORD *)(result + 8);
  v4 = *(_QWORD *)(a2 + 16);
  v5 = *(_QWORD *)(result + 16);
  *(_DWORD *)(a3 + 24) = v3;
  *(_QWORD *)(a3 + 16) = v5 & v4;
  return ret_;
  return ret_;
}
Big sub_592870(__int64 a1)
{
  Big ret_;
  __int64 a2 = (__int64)&ret_;

  __int64 v3; // x9
  __int64 v4; // x8

  *(_DWORD *)(a2 + 32) = 32;
  v3 = (long long)(((__int64*)goff_18FA9D0));
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  *(_QWORD *)(a2 + 48) = 0;
  v4 = (long long)(((__int64*)goff_18EDF98));
  *(_QWORD *)a2 = v3 + 16;
  *(_QWORD *)(a2 + 8) = v4 + 16;
  *(_QWORD *)(a2 + 56) = 0;
  *(_QWORD *)(a2 + 64) = 0;
  sub_38BD20(a2, a1);
  { sub_592810(a1, a2); return ret_; }
  return ret_;
}
// N5storm6common23TrackingManager_NetworkE, virtual slot 3
Big sub_593630(__int64 a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  __int64 v3; // x9
  _QWORD *result; // x0
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  *(_QWORD *)(a1 + 56) = v3;
  new ((void*)(&v5)) Big((*(Big(**)(__int64, __int64, void *, int))(*(_QWORD *)v3 + 64LL))(v3, a1 + 24, &unk_1326E41, 0));
  *a2 = 1;
  return ret_;
  return ret_;
}

// N5storm6common23TrackingManager_NetworkE, virtual slot 5
Big sub_593690(__int64 a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  _QWORD *result; // x0
  __int64 v4; // [xsp+8h] [xbp-8h] BYREF

  new ((void*)(&v4)) Big((*(Big(**)(_QWORD, __int64))(**(_QWORD **)(a1 + 56) + 72LL))(*(_QWORD *)(a1 + 56), a1 + 24));
  *a2 = 1;
  return ret_;
  return ret_;
}

// N5storm9transport26LinkManagerRegular_NetworkE, virtual slot 46
Big sub_5A4180(__int64 a1, __int64 unused1, __int64 a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  __int64 result; // x0
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  new ((void*)(&v5)) Big(((Big(*)(__typeof__(a1 + 56), __typeof__((__int64)((__int64*)goff_18F1208)), __typeof__(a2)))sub_5A8850)(a1 + 56, (__int64)((__int64*)goff_18F1208), a2));
  *a3 = 1;
  return ret_;
  return ret_;
}

Big sub_5A7190(__int64 a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  _QWORD *result; // x0
  __int64 v4; // [xsp+8h] [xbp-8h] BYREF

  new ((void*)(&v4)) Big((*(Big(**)())(*(_QWORD *)a1 + 344LL))());
  *a2 = 1;
  return ret_;
  return ret_;
}

Big sub_5A8E10(_QWORD *result, int *a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  __int64 v4; // x8
  int v5; // w9
  __int64 v6; // x0
  __int64 v7; // x3
  __int64 v8; // x9
  int v10 __attribute__((aligned(8)));
  __int64 v9; // [xsp+8h] [xbp-18h] BYREF

  if ( *((int *)result + 2) >= 3 )
  {
    v4 = result[22];
    if ( v4 != 0 )
    {
      v5 = *((_DWORD *)result + 144);
      v6 = result[23];
      v7 = (unsigned int)(2 * v5);
      v8 = *(_QWORD *)(v4 + 104);
      v10 = *a2;
      new ((void*)(&v9)) Big((*(Big(**)(__int64, __int64, int *, __int64))(*(_QWORD *)v6 + 56LL))(v6, v8, &v10, v7));
    }
  }
  *a3 = 1;
  return ret_;
  return ret_;
}

// N5storm9transport22NetworkManager_NetworkE, virtual slot 3
Big sub_5AC930(__int64 a1, __int64 a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  __int64 v4; // x8
  __int64 v5; // x9
  _QWORD *result; // x0
  __int64 v7; // [xsp+8h] [xbp-8h] BYREF

  *(_BYTE *)(a1 + 120) = 0;
  v5 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 16);
  *(_WORD *)(a1 + 152) = *(_WORD *)(a2 + 24);
  *(_QWORD *)(a1 + 136) = v5;
  *(_QWORD *)(a1 + 144) = v4;
  new ((void*)(&v7)) Big((*(Big(**)(__int64, __int64))(*(_QWORD *)v5 + 88LL))(v5, a1 + 96));
  *a3 = 1;
  return ret_;
  return ret_;
}

// N5storm9transport22NetworkManager_NetworkE, virtual slot 6
Big sub_5ACA90(_QWORD *result)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  __int64 v3; // [xsp+8h] [xbp-8h] BYREF

  if ( result[2] != 0 )
    new ((void*)(&v3)) Big((*(Big(**)(_QWORD, _QWORD *))(*(_QWORD *)result[13] + 72LL))(result[13], result + 3));
  *a2 = 1;
  return ret_;
  return ret_;
}

Big sub_5B53A0(__int64 a1, _BYTE *a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  char *v4; // x20
  __int64 v7; // x0
  __int64 v8; // x21
  char *v9; // x0
  __int64 v10; // x0
  _QWORD *v11; // x0
  __int64 v12; // x8
  unsigned __int64 *v13; // x8
  unsigned __int64 v14; // x9
  _QWORD *result; // x0
  __int64 v16; // x8
  unsigned __int64 *v17; // x8
  unsigned __int64 v18; // x9

  if ( *a2 != 0 )
  {
    v4 = (char *)(a1 + 4936);
    std__shared_timed_mutex__lock_shared((char *)(a1 + 4936));
    v7 = sub_5D0C40(a1 + 4872, a2);
    if ( v7 != 0 && (v8 = v7, (v9 = *(char **)(v7 + 48)) != nullptr) && *((_QWORD *)v9 + 1) != -1 )
    {
      *a3 = 0;
      v10 = std____shared_weak_count__lock(v9);
      a3[1] = v10;
      if ( v10 != 0 )
        *a3 = *(_QWORD *)(v8 + 40);
    }
    else
    {
      v11 = (_QWORD *)sub_5A07D0();
      *a3 = *v11;
      v12 = v11[1];
      a3[1] = v12;
      if ( v12 != 0 )
      {
        v13 = (unsigned __int64 *)(v12 + 8);
        v14 = __atomic_fetch_add(v13, 1, 0);
      }
    }
    { (_QWORD *)std__shared_timed_mutex__unlock_shared(v4); return ret_; }
  }
  else
  {
    result = (_QWORD *)sub_5A07D0();
    *a3 = *result;
    v16 = result[1];
    a3[1] = v16;
    if ( v16 != 0 )
    {
      v17 = (unsigned __int64 *)(v16 + 8);
      v18 = __atomic_fetch_add(v17, 1, 0);
    }
  }
  return ret_;
  return ret_;
}

Big sub_5B54A0(__int64 a1, _DWORD *a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  char *v4; // x20
  __int64 *v7; // x0
  __int64 *v8; // x21
  char *v9; // x0
  __int64 v10; // x0
  _QWORD *v11; // x0
  __int64 v12; // x8
  unsigned __int64 *v13; // x8
  unsigned __int64 v14; // x9
  _QWORD *result; // x0
  __int64 v16; // x8
  unsigned __int64 *v17; // x8
  unsigned __int64 v18; // x9

  if ( *a2 != 0 )
  {
    v4 = (char *)(a1 + 4936);
    std__shared_timed_mutex__lock_shared((char *)(a1 + 4936));
    v7 = (long long *)(sub_5D0DC0((_QWORD *)(a1 + 176), (__int64)a2));
    if ( v7 != nullptr && (v8 = v7, (v9 = (char *)v7[25]) != nullptr) && *((_QWORD *)v9 + 1) != -1 )
    {
      *a3 = 0;
      v10 = std____shared_weak_count__lock(v9);
      a3[1] = v10;
      if ( v10 != 0 )
        *a3 = v8[24];
    }
    else
    {
      v11 = (_QWORD *)sub_5A07D0();
      *a3 = *v11;
      v12 = v11[1];
      a3[1] = v12;
      if ( v12 != 0 )
      {
        v13 = (unsigned __int64 *)(v12 + 8);
        v14 = __atomic_fetch_add(v13, 1, 0);
      }
    }
    { (_QWORD *)std__shared_timed_mutex__unlock_shared(v4); return ret_; }
  }
  else
  {
    result = (_QWORD *)sub_5A07D0();
    *a3 = *result;
    v16 = result[1];
    a3[1] = v16;
    if ( v16 != 0 )
    {
      v17 = (unsigned __int64 *)(v16 + 8);
      v18 = __atomic_fetch_add(v17, 1, 0);
    }
  }
  return ret_;
  return ret_;
}
// N5storm12WakeUpSocketE, virtual slot 2
Big sub_5BEB30(__int64 a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  __int64 v2; // x20
  __int64 v4; // x0
  __int64 result; // x0
  char v6[4]; // [xsp+Ch] [xbp-14h] BYREF

  v6[0] = 1;
  v2 = *(_QWORD *)(a1 + 16);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 232LL))(v2);
  result = (*(__int64 (__fastcall **)(__int64, __int64, char *, __int64))(*(_QWORD *)v2 + 64LL))(v2, v4, v6, 1);
  *a2 = 1;
  return ret_;
  return ret_;
}

// N5storm12WakeUpSocketE, virtual slot 4
Big sub_5BEBB0(__int64 a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  int v4; // w22
  _BYTE v7[1500]; // [xsp+B4h] [xbp-60Ch] BYREF
  _BYTE v6[180]; // [xsp+0h] [xbp-6C0h] BYREF

  sub_5773C0(v6);
  v4 = *(__int64*)goff_18F1518;
  while ( (*(unsigned int (__fastcall **)(_QWORD, _BYTE *, _BYTE *, __int64))(**(_QWORD **)(a1 + 16) + 88LL))(
            *(_QWORD *)(a1 + 16),
            v6,
            v7,
            1500) != v4 )
    ;
  *a2 = 1;
  { sub_578410(v6); return ret_; }
  return ret_;
}

Big sub_5BEC40(__int64 a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  int v4; // w22
  _BYTE v7[1500]; // [xsp+B4h] [xbp-60Ch] BYREF
  _BYTE v6[180]; // [xsp+0h] [xbp-6C0h] BYREF

  sub_5773C0(v6);
  v4 = *(__int64*)goff_18F1518;
  while ( (*(unsigned int (__fastcall **)(_QWORD, _BYTE *, _BYTE *, __int64))(**(_QWORD **)(a1 + 8) + 88LL))(
            *(_QWORD *)(a1 + 8),
            v6,
            v7,
            1500) != v4 )
    ;
  *a2 = 1;
  { sub_578410(v6); return ret_; }
  return ret_;
}

// N5storm5punch30ProductPunchClientImpl_NetworkE, virtual slot 4
Big sub_5DE7E0()
{
  Big ret_;
  _QWORD *a1 = (_QWORD *)&ret_;

  _QWORD *result; // x0
  __int64 v3; // [xsp+8h] [xbp-8h] BYREF

  new ((void*)(&v3)) Big(((Big(*)())sub_54C530)());
  *a1 = 1;
  return ret_;
  return ret_;
}

Big sub_5E97A0(__int64 a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  __int64 v3; // x0
  __int64 v5; // x0
  __int64 v6; // x0

  v3 = *(_QWORD *)(a1 + 136);
  if ( v3 != 0 )
  {
    sub_58C7A0(v3, a1 + 104, a1 + 2820);
    sub_58C7A0(*(_QWORD *)(a1 + 136), a1 + 104, a1 + 2824);
    v5 = *(_QWORD *)(a1 + 136);
    if ( v5 != 0 )
    {
      sub_58C7A0(v5, a1 + 104, a1 + 2832);
      v6 = *(_QWORD *)(a1 + 136);
      if ( v6 != 0 )
        sub_58C640(v6, a1 + 104, a1 + 7872, *(unsigned int *)(a1 + 7880));
    }
  }
  ++*(_DWORD *)(a1 + 7876);
  { new ((void*)(a2)) Big(((Big(*)(__typeof__(a1), __typeof__(0x43u)))sub_5E9E90)(a1, 0x43u)); return ret_; }
  return ret_;
}

Big sub_5E9900(__int64 a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  __int64 v3; // x0
  __int64 v5; // x0
  __int64 result; // x0
  __int64 v7; // [xsp+8h] [xbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 136);
  if ( v3 != 0 )
  {
    sub_58C7A0(v3, a1 + 104, a1 + 2820);
    sub_58C7A0(*(_QWORD *)(a1 + 136), a1 + 104, a1 + 2824);
    v5 = *(_QWORD *)(a1 + 136);
    if ( v5 != 0 )
    {
      sub_58C7A0(v5, a1 + 104, a1 + 7872);
      sub_58C7A0(*(_QWORD *)(a1 + 136), a1 + 104, a1 + 2832);
      sub_58C7A0(*(_QWORD *)(a1 + 136), a1 + 104, a1 + 7864);
    }
  }
  new ((void*)(&v7)) Big(((Big(*)(__typeof__(a1), __typeof__(0x42u)))sub_5E9E90)(a1, 0x42u));
  result = *(_QWORD *)(a1 + 120);
  if ( result != 0 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 32LL))(result);
  *a2 = 1;
  return ret_;
  return ret_;
}

Big sub_5E99C0(__int64 a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  __int64 v3; // x0
  unsigned int v5; // w0
  __int64 result; // x0

  v3 = *(_QWORD *)(a1 + 136);
  if ( v3 != 0 )
  {
    sub_58C7A0(v3, a1 + 104, a1 + 2820);
    sub_58C7A0(*(_QWORD *)(a1 + 136), a1 + 104, a1 + 2824);
    if ( *(_QWORD *)(a1 + 136) != 0 )
    {
      v5 = sub_5C8CB0(a1 + 7856, a1 + 5352, a1 + 7856);
      sub_58C640(*(_QWORD *)(a1 + 136), a1 + 104, a1 + 2832, v5);
    }
  }
  result = *(_QWORD *)(a1 + 120);
  if ( result != 0 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 48LL))(result);
  *a2 = 1;
  return ret_;
  return ret_;
}

Big sub_5E9A60(char *a1)
{
  Big ret_;
  _QWORD *a2 = (_QWORD *)&ret_;

  __int64 v3; // x0
  char *result; // x0

  v3 = *(_QWORD *)(a1 + 136);
  if ( v3 != 0 )
  {
    sub_58C7A0(v3, a1 + 104, a1 + 2820);
    sub_58C7A0(*(_QWORD *)(a1 + 136), a1 + 104, a1 + 2824);
    v3 = *(_QWORD *)(a1 + 136);
  }
  sub_58C7A0(v3, a1 + 104, a1 + 7864);
  result = (char *)(*(_QWORD *)(a1 + 120));
  if ( result != 0 )
    result = (char *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 32LL))((long long)(result)));
  *a2 = 1;
  return ret_;
  return ret_;
}
// N5storm5punch23UpnpThreadCommandGetAllE, virtual slot 4
Big sub_5F8FB0(__int64 a1, __int64 *a2)
{
  Big ret_;
  __int64 *a3 = (__int64 *)&ret_;

  __int64 *v5; // x22
  __int64 v6; // x23
  __int64 v7; // x24
  __int64 v9; // x0
  int v10; // w5
  __int64 v11; // x25
  __int64 result; // x0
  __int64 v14; // [xsp+18h] [xbp-38h] BYREF
  __int64 v13; // [xsp+8h] [xbp-48h] BYREF

  v5 = (__int64 *)(a1 + 32);
  v6 = a1 + 56;
  v7 = a1 + 20;
  v9 = sub_56C9F0(536, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v14 = *a2;
  v10 = *(_DWORD *)(a1 + 504);
  v11 = v9;
  v13 = *(_QWORD *)(a1 + 512);
  result = sub_628C10(v9, v5, v6, v7, &v14, v10, &v13);
  *a3 = v11;
  return ret_;
  return ret_;
}

// N5storm5punch29UpnpThreadCommandRefreshEntryE, virtual slot 4
Big sub_5F9520(_WORD *a1, __int64 *a2)
{
  Big ret_;
  __int64 *a3 = (__int64 *)&ret_;

  _WORD *v5; // x22
  __int64 v7; // x0
  __int16 v8; // w24
  __int64 v9; // x23
  __int64 *v10; // x8
  __int64 result; // x0
  __int64 v12; // [xsp+8h] [xbp-38h] BYREF

  v5 = a1 + 10;
  v7 = sub_56C9F0(504, 8, 1092624387, 0LL, &unk_1326E41, 0);
  v8 = a1[336];
  v9 = v7;
  v12 = *a2;
  sub_5859F0(v7, v5, &v12);
  v10 = ((__int64*)goff_18FB8B8);
  *(_QWORD *)v9 = (_QWORD)(v10 + 2);
  *(_WORD *)(v9 + 48) = v8;
  std__string__basic_string((char *)(v9 + 56), (const char *)(a1 + 16));
  std__string__basic_string((char *)(v9 + 80), (const char *)(a1 + 28));
  std__string__basic_string((char *)(v9 + 104), (const char *)(a1 + 40));
  std__string__basic_string((char *)(v9 + 128), (const char *)(a1 + 52));
  sub_578210(v9 + 152, a1 + 64);
  result = sub_578210(v9 + 328, a1 + 152);
  *a3 = v9;
  return ret_;
  return ret_;
}
// N4Onyx4Flow12LoadingAgentE, virtual slot 2
Big sub_6989C0(__int64 a1, __int64 a2)
{
  Big ret_;
  __int64 a3 = (__int64)&ret_;

  { sub_697BF0(a3, *(_QWORD *)(a1 + 8), a2); return ret_; }
  return ret_;
}

}
