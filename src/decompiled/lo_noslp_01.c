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
#define __udf(x) __builtin_unreachable()
#define atomic_load(p) __atomic_load_n(p, 2)
void* memcpy(void*, const void*, size_t); void* memset(void*, int, size_t); void* memmove(void*, const void*, size_t); int memcmp(const void*, const void*, size_t); size_t strlen(const char*); int strcmp(const char*, const char*); char* strcpy(char*, const char*); char* strncpy(char*, const char*, size_t); int strncmp(const char*, const char*, size_t); void free(void*); void* malloc(size_t); float fabsf(float); float sqrtf(float); float floorf(float); float ceilf(float);
__int64 Recovered_ResultCopy();
__int64 Recovered_ResultTextDestroy();
extern char goff_18EDD08[];
extern char goff_18EE490[];
extern char goff_18EE498[];
extern char goff_18F2620[];
extern char goff_18F26C8[];
extern char goff_18F99B8[];
extern char goff_18F99C0[];
extern char goff_18F9BB0[];
__attribute__((visibility("hidden"))) __int64 sub_290830();
__attribute__((visibility("hidden"))) __int64 sub_4EB320();
__attribute__((visibility("hidden"))) __int64 sub_4EC680();
__attribute__((visibility("hidden"))) __int64 sub_4ED030();
__attribute__((visibility("hidden"))) __int64 sub_4F48C0();
__attribute__((visibility("hidden"))) __int64 sub_51D050();
__attribute__((visibility("hidden"))) __int64 sub_51D320();
__attribute__((visibility("hidden"))) __int64 sub_51D3A0();
__attribute__((visibility("hidden"))) __int64 sub_56C9F0();
__attribute__((visibility("hidden"))) __int64 sub_56DC80();
__attribute__((visibility("hidden"))) __int64 sub_575CE0();
__attribute__((visibility("hidden"))) __int64 sub_57F050();
__attribute__((visibility("hidden"))) __int64 sub_583240();
__attribute__((visibility("hidden"))) __int64 sub_782A20();
extern __attribute__((visibility("hidden"))) char unk_1326E41;

// N5storm18DynamicTypeFactoryINS_27NetPropertyRefDataContainerEEE, virtual slot 2
_QWORD *__fastcall sub_2A0580(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // x19
  __int64 (__fastcall **v4)(); // x0
  __int64 *v5; // x8
  __int64 *v6; // x8

  v3 = (_QWORD *)sub_56C9F0(192, 8, 1092624384, 0LL, a2, a3);
  v4 = sub_583240();
  sub_57F050(v3, v4);
  v5 = ((__int64 *)((__int64*)goff_18EE490) + 24);
  *v3 = ((__int64 *)((__int64*)goff_18EE490) + 2);
  v3[1] = v5;
  sub_290830(v3 + 4, v3 + 1);
  sub_57F050(v3 + 13, v3 + 1);
  v6 = ((__int64 *)((__int64*)goff_18EE498) + 24);
  v3[13] = ((__int64 *)((__int64*)goff_18EE498) + 2);
  v3[14] = v6;
  sub_575CE0((__int64)(v3 + 17));
  return v3;
}

// N5storm18DynamicTypeFactoryINS_27NetPropertyRefDataContainerEEE, virtual slot 3
_QWORD *__fastcall sub_2A0620(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD *v5; // x20
  __int64 *v6; // x8
  __int64 *v7; // x8

  v5 = (_QWORD *)sub_56C9F0(192, 8, 1092624384, 0LL, a3, a4);
  sub_57F050(v5, a2);
  v6 = ((__int64 *)((__int64*)goff_18EE490) + 24);
  *v5 = ((__int64 *)((__int64*)goff_18EE490) + 2);
  v5[1] = v6;
  sub_290830(v5 + 4, v5 + 1);
  sub_57F050(v5 + 13, v5 + 1);
  v7 = ((__int64 *)((__int64*)goff_18EE498) + 24);
  v5[13] = ((__int64 *)((__int64*)goff_18EE498) + 2);
  v5[14] = v7;
  sub_575CE0((__int64)(v5 + 17));
  return v5;
}

__int64 __fastcall sub_312C80(_QWORD *a1, int a2, _QWORD **a3, int a4)
{
  __int64 *v4; // x24
  __int64 **v5; // x22
  _QWORD *v6; // x23
  __int64 *v10; // x26
  __int64 v11; // x21
  __int64 (__fastcall **v12)(); // x0
  __int64 v13; // x0

  v4 = ((__int64 *)((__int64*)goff_18EDD08) + 2);
  *a1 = ((__int64 *)goff_18F26C8 + 2);
  v5 = (__int64 **)a1;
  a1[1] = v4;
  v6 = a1 + 1;
  a1[2] = sub_56DC80(a1 + 1);
  *((_BYTE *)v5 + 24) = 1;
  v10 = ((__int64 *)goff_18F2620 + 2);
  *v6 = ((__int64 *)goff_18F2620 + 2);
  *((_DWORD *)v5 + 7) = a2;
  v11 = (__int64)(v5 + 4);
  v12 = sub_583240();
  sub_290830(v5 + 4, v12);
  v5[13] = v4;
  v5 += 13;
  v13 = sub_56DC80(v5);
  *v5 = v10;
  v5[1] = (__int64 *)v13;
  *((_BYTE *)v5 + 16) = 1;
  *((_DWORD *)v5 + 5) = a4;
  return sub_782A20(v11, a3);
}

__int64 __fastcall sub_52E990(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 (__fastcall *v5)(); // x9
  _QWORD v7[3]; // [xsp+8h] [xbp-28h] BYREF

  sub_51D050(a1, 1, a2, v7);
  *(_QWORD *)a1 = goff_18F99B8 + 16;
  sub_4EC680(a1 + 144);
  *(_QWORD *)(a1 + 136) = a3;
  v5 = ((__int64*)goff_18F99C0);
  *(_DWORD *)(a1 + 128) = 4096;
  v7[0] = v5;
  v7[1] = 0;
  v7[2] = &unk_1326E41;
  return sub_51D3A0(a1, v7);
}

void __fastcall sub_5495B0(__int64 a1)
{
  __int64 v1; // x8
  _BYTE *v3; // x21
  _QWORD *v4; // x0
  RecoveredSdkResult self; // [xsp+8h] [xbp-48h] BYREF
  __int64 v6; // [xsp+38h] [xbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 160);
  if ( v1 == a1 + 144 || (v3 = *(_BYTE **)(v1 + 40)) == nullptr )
  {
    Recovered_ResultCopy(&self, (const RecoveredSdkResult *)(a1 + 240));
    (*(void (__fastcall **)(__int64, RecoveredSdkResult *))(*(_QWORD *)a1 + 104LL))(a1, &self);
    Recovered_ResultTextDestroy(&self.domain);
  }
  else if ( v3[17] != 0
         && (v6 = *(_QWORD *)(a1 + 456),
             sub_4ED030(a1 + 312),
             (*(void (__fastcall **)(_BYTE *, __int64, __int64 *))(*(_QWORD *)v3 + 24LL))(v3, a1 + 312, &v6),
             *(_DWORD *)(a1 + 328) != 0) )
  {
    sub_4F48C0(a1);
    v4 = (_QWORD *)sub_4EB320(24, &unk_1326E41, 0);
    *v4 = goff_18F9BB0;
    v4[1] = 0;
    v4[2] = &unk_1326E41;
    sub_51D320(a1, a1 + 312, v4);
  }
  else
  {
    *(_QWORD *)&self.code = goff_18F9BB0;
    self.unknown08 = nullptr;
    *(_QWORD *)&self.unknown10 = &unk_1326E41;
    sub_51D3A0(a1, &self);
  }
}

