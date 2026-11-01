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
typedef unsigned long size_t; typedef long ssize_t; typedef struct { char data[48]; } pthread_mutex_t; typedef struct { char data[48]; } pthread_cond_t; typedef void FILE;
typedef union { unsigned long long n128_u64[2]; float n128_f32[4]; double n128_f64[2]; } __n128;
#define bool _Bool
#define true 1
#define false 0
#define __fastcall
#define __cdecl
#define __noreturn
#define nullptr ((void*)0)
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
#define __udf(x) __builtin_trap()
#define atomic_load(p) __atomic_load_n(p, 2)
void* memcpy(void*, const void*, size_t); void* memset(void*, int, size_t); void* memmove(void*, const void*, size_t); int memcmp(const void*, const void*, size_t); size_t strlen(const char*); int strcmp(const char*, const char*); void free(void*); void* malloc(size_t); float fabsf(float); float sqrtf(float); float floorf(float); float ceilf(float);
extern char goff_18F7078[];
extern char goff_18F88D8[];
__attribute__((visibility("hidden"))) _Bool sub_2C2F70();
__attribute__((visibility("hidden"))) __int64 sub_2C3070();
__attribute__((visibility("hidden"))) _Bool sub_2C6640();
__attribute__((visibility("hidden"))) __int64 sub_4EE210();
__attribute__((visibility("hidden"))) __int64 sub_4EE230();
__attribute__((visibility("hidden"))) _Bool sub_576540();

bool __fastcall sub_2B71A0(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0 && *(_QWORD *)(a1 + 32) == *(_QWORD *)(a2 + 32);
}

bool __fastcall sub_302A30(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0 && *(_DWORD *)(a1 + 28) == *(_DWORD *)(a2 + 28);
}

bool __fastcall sub_3030D0(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0 && *(_DWORD *)(a1 + 28) == *(_DWORD *)(a2 + 28);
}

bool __fastcall sub_38BEA0(__int64 a1)
{
  return (sub_2C6640(a1 + 88)) == 0 || (*(_BYTE *)(a1 + 32) & 1) == 0;
}

__int64 __fastcall sub_47BFC0(__int64 a1)
{
  __int64 result; // x0

  if ( (sub_2C2F70(a1, goff_18F7078)) == 0 )
    return 1;
  result = sub_2C3070(a1, goff_18F7078);
  if ( result != 0 )
    return *(unsigned int *)(result + 28);
  return result;
}

__int64 __fastcall sub_512510(__int64 a1)
{
  _BYTE *v1; // x20
  __int64 v2; // x19

  v1 = (_BYTE *)goff_18F88D8;
  if ( *(char*)goff_18F88D8 != 0 )
    return 1;
  v2 = a1 + 16;
  sub_4EE210(a1 + 16);
  if ( *v1 != 0 )
    return 1;
  sub_4EE230(v2);
  return 1;
}

bool __fastcall sub_5C68D0(__int64 a1, __int64 a2)
{
  return (sub_576540()) != 0
      && *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) - **(_QWORD **)(a1 + 32) == *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL)
                                                                           - **(_QWORD **)(a2 + 32);
}

