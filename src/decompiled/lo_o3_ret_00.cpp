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
__attribute__((visibility("hidden"))) __int64 sub_313860(...);
__attribute__((visibility("hidden"))) __int64 sub_313F70(...);
__attribute__((visibility("hidden"))) __int64 sub_3145B0(...);
__attribute__((visibility("hidden"))) __int64 sub_34FF40(...);
__attribute__((visibility("hidden"))) __int64 sub_3500A0(...);
__attribute__((visibility("hidden"))) __int64 sub_464E10(...);

Big sub_25DF50(int a1, __int64 *a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  __int64 result; // x0
  _QWORD *v7; // x0
  __int64 v8; // [xsp+8h] [xbp-18h] BYREF

  result = sub_313860();
  if ( result != 0 && *(_BYTE *)(*(_QWORD *)(result + 16) + 2168LL) != 0 )
  {
    v7 = (_QWORD *)sub_313860();
    v8 = *a2;
    { new ((void*)((__int64)a3)) Big(((Big(*)(__typeof__(v7), __typeof__(a1), __typeof__(&v8)))sub_313F70)(v7, a1, &v8)); return ret_; }
  }
  else
  {
    *a3 = 4293967345LL;
  }
  return ret_;
  return ret_;
}

Big sub_25DFD0(int a1, __int64 *a2)
{
  Big ret_;
  _QWORD *a3 = (_QWORD *)&ret_;

  __int64 result; // x0
  __int64 v7; // x0
  __int64 v8; // [xsp+8h] [xbp-18h] BYREF

  result = sub_313860();
  if ( result != 0 )
  {
    v7 = sub_313860();
    v8 = *a2;
    { new ((void*)((__int64)a3)) Big(((Big(*)(__typeof__(v7), __typeof__(a1), __typeof__(&v8)))sub_3145B0)(v7, a1, &v8)); return ret_; }
  }
  else
  {
    *a3 = 4293967345LL;
  }
  return ret_;
  return ret_;
}

// N5storm4echo27SessionStreamPacker_NetworkE, virtual slot 8
Big sub_34FE20(_QWORD *result, unsigned int *a2, __int64 a3)
{
  Big ret_;
  _QWORD *a4 = (_QWORD *)&ret_;

  unsigned __int64 v4; // x10
  unsigned __int64 v6; // x8
  unsigned __int64 v7; // x11
  unsigned __int64 v8; // x9
  __int64 **v9; // x13
  __int64 *v10; // x20
  unsigned __int64 v11; // x11
  __int64 v12; // x10
  __int64 v13; // x20
  _QWORD *v14; // t1
  _QWORD *v15; // x1
  _QWORD *v16; // x0
  __int64 v17; // [xsp+8h] [xbp-18h] BYREF

  v4 = result[24];
  if ( v4 == 0 )
    goto LABEL_25;
  v6 = *a2;
  v7 = v4 - 1;
  if ( ((v4 - 1) & v4) != 0 )
  {
    v8 = *a2;
    if ( v4 <= v6 )
      v8 = v6 % v4;
    v9 = *(__int64 ***)(result[23] + 8 * v8);
    if ( v9 == nullptr )
      goto LABEL_25;
  }
  else
  {
    v8 = v7 & v6;
    v9 = *(__int64 ***)(result[23] + 8 * (v7 & v6));
    if ( v9 == nullptr )
      goto LABEL_25;
  }
  v10 = *v9;
  if ( *v9 != nullptr )
  {
    if ( ((v4 - 1) & v4) != 0 )
    {
      while ( 1 )
      {
        v11 = v10[1];
        if ( v11 == v6 )
        {
          if ( *((_DWORD *)v10 + 4) == (_DWORD)v6 )
            goto LABEL_24;
        }
        else
        {
          if ( v11 >= v4 )
            v11 %= v4;
          if ( v11 != v8 )
            goto LABEL_25;
        }
        v10 = (__int64 *)*v10;
        if ( v10 == nullptr )
          goto LABEL_25;
      }
    }
    do
    {
      v12 = v10[1];
      if ( v12 == v6 )
      {
        if ( *((_DWORD *)v10 + 4) == (_DWORD)v6 )
        {
LABEL_24:
          v14 = (_QWORD *)v10[3];
          v13 = (__int64)(v10 + 3);
          v15 = *(_QWORD **)(v13 + 8);
          v17 = a3;
          v16 = (_QWORD *)(sub_3500A0(v14, v15, &v17));
          result = (_QWORD *)(sub_34FF40(v13, v16, *(_QWORD **)(v13 + 8)));
          break;
        }
      }
      else if ( (v12 & v7) != v8 )
      {
        break;
      }
      v10 = (__int64 *)*v10;
    }
    while ( v10 != nullptr );
  }
LABEL_25:
  *a4 = 1;
  return ret_;
  return ret_;
}
// N5storm37SimpleUbiServicesControllerClientBaseE, virtual slot 2
Big sub_464F60(_QWORD *result)
{
  Big ret_;
  __int64 a2 = (__int64)&ret_;

  int v3; // w21
  _QWORD *v4; // x20
  int v5; // w9
  int v6; // w8
  __int64 v7; // [xsp+8h] [xbp-18h] BYREF

  if ( *((_BYTE *)result + 9) != 0 )
  {
    *(_QWORD *)a2 = 1;
  }
  else
  {
    v3 = 1;
    v4 = result;
    *((_BYTE *)result + 9) = 1;
    new ((void*)(&v7)) Big(((Big(*)())sub_464E10)());
    v5 = v7;
    if ( (v7 & 0x80000000) != 0 )
    {
      *((_BYTE *)v4 + 9) = 0;
      v6 = HIDWORD(v7);
      v3 = v5;
    }
    else
    {
      v6 = 0;
    }
    *(_DWORD *)a2 = v3;
    *(_DWORD *)(a2 + 4) = v6;
  }
  return ret_;
  return ret_;
}

}
