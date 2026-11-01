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
extern __int64 qword_191CD10;
extern __int64 qword_1926BD8;
__int64 sub_67EDD0(...);
__int64 sub_774B50(...);
__int64 sub_7751D0(...);
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

// N4SPTG19RTCCameraModeActionE, virtual slot 14
__int64 __fastcall sub_907380(char *a1)
{
  char *result; // x0
  char *v3; // x8
  char *v4; // x21
  char *v5; // x20
  int v6; // w22
  char *v7; // x8
  char *v8; // x21
  char *v9; // x8
  int v10; // w22
  char *v11; // x23
  char *v12; // x8
  char *v13; // x21
  char *v14; // x8
  __int64 v15; // x8
  char *v16; // x8
  char *v17; // x21
  __int64 v18; // x0
  char *v19; // x8
  char *v20; // x20
  __int64 v21; // t1
  char *v22; // x8

  *(_WORD *)(a1 + 152) = 1;
  result = (char *)(sub_774B50(a1 + 160));
  v4 = result + 80;
  v3 = (char *)(*(_QWORD *)(result + 80));
  if ( v3 == 0 || (v5 = (char *)(*(_QWORD *)(v3 + 8))) == 0 )
  {
    sub_67EDD0(qword_191CD10, 1743956557, v4);
    result = (char *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v4 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v4 + 8LL)));
    if ( *(_QWORD *)v4 != 0 )
      v5 = (char *)(*(_QWORD *)(*(_QWORD *)v4 + 8LL));
    else
      v5 = 0;
  }
  v6 = *(_DWORD *)(a1 + 180);
  v8 = v5 + 128;
  v7 = (char *)(*(_QWORD *)(v5 + 128));
  *(_DWORD *)(v5 + 188) = 1;
  if ( v7 == 0 || (v9 = (char *)(*(_QWORD *)(v7 + 8))) == 0 )
  {
    sub_67EDD0(qword_191CD10, 670407072, v5 + 128);
    result = (char *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v8 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v8 + 8LL)));
    v9 = (char *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL));
  }
  *(_DWORD *)(v9 + 120) = v6;
  if ( *(_DWORD *)(v5 + 188) == 1 )
  {
    v10 = *(_DWORD *)(a1 + 176);
    if ( *(_QWORD *)v8 == 0 || (v11 = (char *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL))) == 0 )
    {
      sub_67EDD0(qword_191CD10, 670407072, v5 + 128);
      result = (char *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v8 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v8 + 8LL)));
      if ( *(_QWORD *)v8 != 0 )
        v11 = (char *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL));
      else
        v11 = 0;
    }
    v13 = v5 + 160;
    v12 = (char *)(*(_QWORD *)(v5 + 160));
    if ( v12 == 0 || (v14 = (char *)(*(_QWORD *)(v12 + 8))) == 0 )
    {
      sub_67EDD0(qword_191CD10, 36693834, v5 + 160);
      result = (char *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v13 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v13 + 8LL)));
      v14 = (char *)(*(_QWORD *)(*(_QWORD *)v13 + 8LL));
    }
    v15 = *(_QWORD *)(v14 + 124);
    *(_BYTE *)(v11 + 128) = 1;
    *(_DWORD *)(v11 + 132) = v10;
    *(_DWORD *)(v11 + 136) = 0;
    *(_QWORD *)(v11 + 140) = v15;
    *(_DWORD *)(v11 + 148) = *(_DWORD *)(a1 + 168);
    *(_DWORD *)(v11 + 152) = *(_DWORD *)(a1 + 172);
  }
  if ( *(_BYTE *)(a1 + 184) != 0 )
  {
    v17 = v5 + 112;
    v16 = (char *)(*(_QWORD *)(v5 + 112));
    if ( v16 == 0 || (v18 = *(_QWORD *)(v16 + 8)) == 0 )
    {
      sub_67EDD0(qword_191CD10, 1037755499, v5 + 112);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v17 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v17 + 8LL));
      if ( *(_QWORD *)v17 != 0 )
        v18 = *(_QWORD *)(*(_QWORD *)v17 + 8LL);
      else
        v18 = 0;
    }
    result = (char *)(sub_7751D0(v18));
  }
  if ( *(_BYTE *)(a1 + 185) != 0 )
  {
    v21 = *(_QWORD *)(v5 + 120);
    v20 = v5 + 120;
    v19 = (char *)(v21);
    if ( v21 == 0 || (v22 = (char *)(*(_QWORD *)(v19 + 8))) == 0 )
    {
      sub_67EDD0(qword_191CD10, 1441120284, v20);
      result = (char *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v20 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v20 + 8LL)));
      v22 = (char *)(*(_QWORD *)(*(_QWORD *)v20 + 8LL));
    }
    *(_DWORD *)(v22 + 76) = 0;
  }
  return (long long)(result);
}
// N4SPTG28CameraMoveToCheckPointActionE, virtual slot 14
__int64 __fastcall sub_922E20(char *a1)
{
  char *v2; // x20
  char *v3; // x21
  char *v4; // x8
  char *v5; // x20
  char *v6; // x8
  char *v7; // x22
  char *v8; // x8
  char *v9; // x20
  char *v10; // x8
  __int64 v11; // x8
  char *v12; // x8
  char *v13; // x20
  __int64 v14; // x0
  __int64 result; // x0
  char *v16; // x8
  char *v17; // x20
  char *v18; // x8

  *(_WORD *)(a1 + 152) = 1;
  v2 = (char *)(sub_774B50(a1 + 160) + 80);
  if ( *(_QWORD *)v2 == 0 || (v3 = (char *)(*(_QWORD *)(*(_QWORD *)v2 + 8LL))) == 0 )
  {
    sub_67EDD0(qword_191CD10, 1743956557, v2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v2 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v2 + 8LL));
    if ( *(_QWORD *)v2 != 0 )
      v3 = (char *)(*(_QWORD *)(*(_QWORD *)v2 + 8LL));
    else
      v3 = 0;
  }
  v5 = v3 + 128;
  v4 = (char *)(*(_QWORD *)(v3 + 128));
  *(_DWORD *)(v3 + 188) = 1;
  if ( v4 == 0 || (v6 = (char *)(*(_QWORD *)(v4 + 8))) == 0 )
  {
    sub_67EDD0(qword_191CD10, 670407072, v3 + 128);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v5 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v5 + 8LL));
    v6 = (char *)(*(_QWORD *)(*(_QWORD *)v5 + 8LL));
  }
  *(_DWORD *)(v6 + 120) = -1;
  if ( *(_DWORD *)(v3 + 188) == 1 )
  {
    if ( *(_QWORD *)v5 == 0 || (v7 = (char *)(*(_QWORD *)(*(_QWORD *)v5 + 8LL))) == 0 )
    {
      sub_67EDD0(qword_191CD10, 670407072, v3 + 128);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v5 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v5 + 8LL));
      if ( *(_QWORD *)v5 != 0 )
        v7 = (char *)(*(_QWORD *)(*(_QWORD *)v5 + 8LL));
      else
        v7 = 0;
    }
    v9 = v3 + 160;
    v8 = (char *)(*(_QWORD *)(v3 + 160));
    if ( v8 == 0 || (v10 = (char *)(*(_QWORD *)(v8 + 8))) == 0 )
    {
      sub_67EDD0(qword_191CD10, 36693834, v3 + 160);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v9 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v9 + 8LL));
      v10 = (char *)(*(_QWORD *)(*(_QWORD *)v9 + 8LL));
    }
    v11 = *(_QWORD *)(v10 + 124);
    *(_BYTE *)(v7 + 128) = 1;
    *(_DWORD *)(v7 + 132) = 0;
    *(_DWORD *)(v7 + 136) = 0;
    *(_QWORD *)(v7 + 140) = v11;
    *(_DWORD *)(v7 + 148) = *(_DWORD *)(a1 + 172);
    *(_DWORD *)(v7 + 152) = *(_DWORD *)(a1 + 176);
  }
  v13 = v3 + 112;
  v12 = (char *)(*(_QWORD *)(v3 + 112));
  if ( v12 == 0 || (v14 = *(_QWORD *)(v12 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 1037755499, v3 + 112);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v13 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v13 + 8LL));
    if ( *(_QWORD *)v13 != 0 )
      v14 = *(_QWORD *)(*(_QWORD *)v13 + 8LL);
    else
      v14 = 0;
  }
  result = sub_7751D0(v14);
  v17 = v3 + 120;
  v16 = (char *)(*(_QWORD *)(v3 + 120));
  if ( v16 == 0 || (v18 = (char *)(*(_QWORD *)(v16 + 8))) == 0 )
  {
    sub_67EDD0(qword_191CD10, 1441120284, v3 + 120);
    result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v17 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v17 + 8LL));
    v18 = (char *)(*(_QWORD *)(*(_QWORD *)v17 + 8LL));
  }
  *(_DWORD *)(v18 + 76) = 0;
  *(_BYTE *)(v3 + 184) = 0;
  *(_BYTE *)(a1 + 168) = 1;
  return result;
}
}
