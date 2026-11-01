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
extern __int64 qword_1926BD8;
unsigned char sub_A82B30(...);

void sub_779250(__int64 result, unsigned __int64 a2, __int64 a3) noexcept
{
  unsigned __int64 v3; // x8
  unsigned __int64 v4; // x23
  __int64 v6; // x20
  __int64 v7; // x25
  unsigned __int64 i; // x24
  unsigned int *v9; // x8
  unsigned int v10; // w9
  unsigned int v11; // w9
  __int64 v12; // x21
  __int64 v13; // x22
  __int64 v14; // x0
  unsigned __int64 v15; // x21
  __int64 v16; // x8
  __int128 *v17; // x23
  __int64 v18; // x24
  unsigned __int64 v19; // x22
  __int128 v20; // q0
  unsigned int *v21; // x8
  unsigned int v22; // w9
  unsigned int *v23; // x8
  unsigned int v24; // w9
  unsigned int v25; // w9
  __int64 v26; // x19
  __int64 v27; // x20
  __int64 v28; // x0

  v3 = *(_QWORD *)(result + 16);
  v4 = v3 - a2;
  if ( v3 > a2 )
  {
    v6 = result;
    if ( v4 != 0 )
    {
      v7 = *(_QWORD *)(result + 24) + 40 * a3;
      for ( i = 0; i < v4; ++i )
      {
        v9 = *(unsigned int **)(v7 + 32);
        if ( v9 != nullptr )
        {
          v11 = __atomic_sub_fetch(v9, 1, 0);
          if ( v11 == 0 )
          {
            v12 = *(_QWORD *)(v7 + 32);
            if ( v12 != 0 )
            {
              v13 = qword_1926BD8;
              v14 = *(_QWORD *)(v13 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, *(_QWORD *)(v7 + 32)) + 880);
              result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 48LL))(v14, v12);
            }
          }
          *(_QWORD *)(v7 + 32) = 0;
        }
        v7 += 40;
      }
      v3 = *(_QWORD *)(v6 + 16);
    }
    v15 = v3 - (v4 + a3);
    if ( v3 != v4 + a3 )
    {
      v16 = *(_QWORD *)(v6 + 24);
      v17 = (__int128 *)(v16 + 40 * (v4 + a3));
      v18 = v16 + 40 * a3;
      v19 = 0;
      while ( 1 )
      {
        v20 = *v17;
        *(_QWORD *)(v18 + 16) = *((_QWORD *)v17 + 2);
        *(_OWORD *)v18 = v20;
        *(_QWORD *)(v18 + 24) = *((_QWORD *)v17 + 3);
        v21 = *((unsigned int **)v17 + 4);
        if ( v21 != nullptr )
          break;
        *(_QWORD *)(v18 + 32) = 0;
        v23 = *((unsigned int **)v17 + 4);
        if ( v23 != nullptr )
          goto LABEL_19;
LABEL_24:
        ++v19;
        v17 = (__int128 *)((char *)v17 + 40);
        v18 += 40;
        if ( v19 >= v15 )
          return;
      }
      v22 = __atomic_fetch_add(v21, 1, 0);
      *(_QWORD *)(v18 + 32) = *((_QWORD *)v17 + 4);
      v23 = *((unsigned int **)v17 + 4);
      if ( v23 == nullptr )
        goto LABEL_24;
      LABEL_19:
        v25 = __atomic_sub_fetch(v23, 1, 0);
      if ( v25 == 0 )
      {
        v26 = *((_QWORD *)v17 + 4);
        if ( v26 != 0 )
        {
          v27 = qword_1926BD8;
          v28 = *(_QWORD *)(v27 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, *((_QWORD *)v17 + 4)) + 880);
          result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 48LL))(v28, v26);
        }
      }
      *((_QWORD *)v17 + 4) = 0;
      goto LABEL_24;
    }
  }
  return;
}

}
