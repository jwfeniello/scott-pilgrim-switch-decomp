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
struct Big { char data[4096]; };
inline void* operator new(size_t, void* where) noexcept { return where; }
extern "C" {
void* memcpy(void*, const void*, size_t); void* memset(void*, int, size_t); void* memmove(void*, const void*, size_t); int memcmp(const void*, const void*, size_t); size_t strlen(const char*); int strcmp(const char*, const char*); char* strcpy(char*, const char*); char* strncpy(char*, const char*, size_t); int strncmp(const char*, const char*, size_t); void free(void*) noexcept; void* malloc(size_t); float fabsf(float); float sqrtf(float); float floorf(float); float ceilf(float);
__int64 d0(...);
extern __int64 qword_1924C88;
__int64 sub_680A00(...);
__int64 sub_6E9690(...);
__int64 sub_777710(...);

// N4SPTG7Network16NativeMatchmakerE, virtual slot 17
Big sub_7DCC70()
{
  Big ret_;
  __int64 a1 = (__int64)&ret_;

  __int64 v2; // x20

  v2 = qword_1924C88;
  sub_680A00(qword_1924C88 + 112);
  sub_777710(v2 + 96);
  { sub_6E9690(a1); return ret_; }
  return ret_;
}

// N4Gear19TimeFilteredGamePadE, virtual slot 73
Big sub_AABDF0(__int64 a1, int a2)
{
  Big ret_;
  float32x2_t *a3 = (float32x2_t *)&ret_;

  float32x2_t result; // d0

  ((unsigned long long*)&result)[0] = ({ __typeof__(vsub_f32(
                        *(float32x2_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 168LL))(a1),
                        *(float32x2_t *)(a1 + 8LL * a2 + 52))) lane_ = vsub_f32(
                        *(float32x2_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 168LL))(a1),
                        *(float32x2_t *)(a1 + 8LL * a2 + 52)); ((unsigned long long*)&lane_)[0]; });
  ((unsigned long long*)a3)[0] = ((unsigned long long*)&result)[0];
  return ret_;
  return ret_;
}

// N4Gear19TimeFilteredGamePadE, virtual slot 74
Big sub_AABE30(__int64 a1, int a2)
{
  Big ret_;
  float32x2_t *a3 = (float32x2_t *)&ret_;

  float32x2_t *v6; // x0
  __int64 v7; // x8
  float result; // s0

  v6 = (float32x2_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 192LL))(a1);
  v7 = a1 + 12LL * a2;
  ((unsigned long long*)a3)[0] = ({ __typeof__(vsub_f32((float32x2_t)((unsigned long long*)v6)[0], *(float32x2_t *)(v7 + 68))) lane_ = vsub_f32((float32x2_t)((unsigned long long*)v6)[0], *(float32x2_t *)(v7 + 68)); ((unsigned long long*)&lane_)[0]; });
  result = ((float*)&v6[1])[0] - *(float *)(v7 + 76);
  ((float*)&a3[1])[0] = result;
  return ret_;
  return ret_;
}

// N4Gear19TimeFilteredGamePadE, virtual slot 79
Big sub_AABF80(__int64 a1)
{
  Big ret_;
  float32x2_t *a2 = (float32x2_t *)&ret_;

  float32x2_t *v4; // x0
  float result; // s0

  v4 = (float32x2_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 240LL))(a1);
  ((unsigned long long*)a2)[0] = ({ __typeof__(vsub_f32((float32x2_t)((unsigned long long*)v4)[0], *(float32x2_t *)(a1 + 268))) lane_ = vsub_f32((float32x2_t)((unsigned long long*)v4)[0], *(float32x2_t *)(a1 + 268)); ((unsigned long long*)&lane_)[0]; });
  result = ((float*)&v4[1])[0] - *(float *)(a1 + 276);
  ((float*)&a2[1])[0] = result;
  return ret_;
  return ret_;
}

// N4Gear19TimeFilteredGamePadE, virtual slot 80
Big sub_AABFD0(float32x2_t *a1)
{
  Big ret_;
  float32x2_t *a2 = (float32x2_t *)&ret_;

  float32x2_t *v4; // x0
  float result; // s0

  v4 = (float32x2_t *)(*(__int64 (__fastcall **)(float32x2_t *))(((unsigned long long*)a1)[0] + 264))(a1);
  ((unsigned long long*)a2)[0] = ({ __typeof__(vsub_f32((float32x2_t)((unsigned long long*)v4)[0], a1[35])) lane_ = vsub_f32((float32x2_t)((unsigned long long*)v4)[0], a1[35]); ((unsigned long long*)&lane_)[0]; });
  result = ((float*)&v4[1])[0] - ((float*)&a1[36])[0];
  ((float*)&a2[1])[0] = result;
  return ret_;
  return ret_;
}

// N4Gear19TimeFilteredGamePadE, virtual slot 81
Big sub_AAC020(__int64 a1)
{
  Big ret_;
  float32x4_t *a2 = (float32x4_t *)&ret_;

  __int64 v4; // x0
  float32x4_t v5; // q1
  float v6; // s2
  float result; // s0

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 272LL))(a1);
  v5 = *(float32x4_t *)(v4 + 16);
  v6 = *(float *)(v4 + 32);
  *a2 = vsubq_f32(*(float32x4_t *)v4, *(float32x4_t *)(a1 + 292));
  a2[1] = vsubq_f32(v5, *(float32x4_t *)(a1 + 308));
  result = v6 - *(float *)(a1 + 324);
  ((float*)&a2[2])[0] = result;
  return ret_;
  return ret_;
}

// N4Gear19TimeFilteredGamePadE, virtual slot 82
Big sub_AAC080(__int64 a1, unsigned int a2)
{
  Big ret_;
  float32x2_t *a3 = (float32x2_t *)&ret_;

  float32x2_t *v6; // x0
  __int64 v7; // x8
  float result; // s0

  v6 = (float32x2_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 248LL))(a1);
  v7 = a1 + 12LL * a2;
  ((unsigned long long*)a3)[0] = ({ __typeof__(vsub_f32((float32x2_t)((unsigned long long*)v6)[0], *(float32x2_t *)(v7 + 132))) lane_ = vsub_f32((float32x2_t)((unsigned long long*)v6)[0], *(float32x2_t *)(v7 + 132)); ((unsigned long long*)&lane_)[0]; });
  result = ((float*)&v6[1])[0] - *(float *)(v7 + 140);
  ((float*)&a3[1])[0] = result;
  return ret_;
  return ret_;
}

// N4Gear19TimeFilteredGamePadE, virtual slot 83
Big sub_AAC0E0(__int64 a1, unsigned int a2)
{
  Big ret_;
  float32x2_t *a3 = (float32x2_t *)&ret_;

  float32x2_t *v6; // x0
  __int64 v7; // x8
  float result; // s0

  v6 = (float32x2_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 256LL))(a1);
  v7 = a1 + 12LL * a2;
  ((unsigned long long*)a3)[0] = ({ __typeof__(vsub_f32((float32x2_t)((unsigned long long*)v6)[0], *(float32x2_t *)(v7 + 156))) lane_ = vsub_f32((float32x2_t)((unsigned long long*)v6)[0], *(float32x2_t *)(v7 + 156)); ((unsigned long long*)&lane_)[0]; });
  result = ((float*)&v6[1])[0] - *(float *)(v7 + 164);
  ((float*)&a3[1])[0] = result;
  return ret_;
  return ret_;
}

}
