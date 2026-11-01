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
void* memcpy(void*, const void*, size_t); void* memset(void*, int, size_t); void* memmove(void*, const void*, size_t); int memcmp(const void*, const void*, size_t); size_t strlen(const char*); int strcmp(const char*, const char*); char* strcpy(char*, const char*); char* strncpy(char*, const char*, size_t); int strncmp(const char*, const char*, size_t); void free(void*); void* malloc(size_t); float fabsf(float); float sqrtf(float); float floorf(float); float ceilf(float);
__int64 _ZdlPv();
extern char goff_1841BD0[];
extern __attribute__((visibility("hidden"))) char hoff_1841BD0[];
extern __attribute__((visibility("hidden"))) __int64 qword_191B6C0;
extern __attribute__((visibility("hidden"))) __int64 qword_191CD10;
extern __attribute__((visibility("hidden"))) __int64 qword_191DCE8;
extern __attribute__((visibility("hidden"))) __int64 qword_1926BD8;
extern __attribute__((visibility("hidden"))) __int64 qword_1935058;
extern __attribute__((visibility("hidden"))) __int64 qword_1935138;
__attribute__((visibility("hidden"))) __int64 sub_1E7720();
__attribute__((visibility("hidden"))) __int64 sub_1E7A80();
__attribute__((visibility("hidden"))) __int64 sub_1EA9F0();
__attribute__((visibility("hidden"))) __int64 sub_1EAA00();
__attribute__((visibility("hidden"))) __int64 sub_1EAA10();
__attribute__((visibility("hidden"))) __int64 sub_1EAA20();
__attribute__((visibility("hidden"))) __int64 sub_1EAA30();
__attribute__((visibility("hidden"))) __int64 sub_1EB170();
__attribute__((visibility("hidden"))) __int64 sub_1EB1D0();
__attribute__((visibility("hidden"))) __int64 sub_1F54A0();
__attribute__((visibility("hidden"))) int sub_1FB080();
__attribute__((visibility("hidden"))) __int64 sub_1FBC90();
__attribute__((visibility("hidden"))) __int64 sub_20CBE0();
__attribute__((visibility("hidden"))) __int64 sub_20DDA0();
__attribute__((visibility("hidden"))) __int64 sub_21E160();
__attribute__((visibility("hidden"))) __int64 sub_21FFC0();
__attribute__((visibility("hidden"))) __int64 sub_23AAE0();
__attribute__((visibility("hidden"))) __int64 sub_23AAF0();
__attribute__((visibility("hidden"))) __int64 sub_23AB00();
__attribute__((visibility("hidden"))) __int64 sub_23AB10();
__attribute__((visibility("hidden"))) __int64 sub_23AB20();
__attribute__((visibility("hidden"))) __int64 sub_24F310();
__attribute__((visibility("hidden"))) __int64 sub_24F320();
__attribute__((visibility("hidden"))) __int64 sub_24F330();
__attribute__((visibility("hidden"))) __int64 sub_24F340();
__attribute__((visibility("hidden"))) __int64 sub_24F350();
__attribute__((visibility("hidden"))) __int64 sub_2500E0();
__attribute__((visibility("hidden"))) __int64 sub_250550();
__attribute__((visibility("hidden"))) __int64 sub_250740();
__attribute__((visibility("hidden"))) __int64 sub_2509B0();
__attribute__((visibility("hidden"))) __int64 sub_2509F0();
__attribute__((visibility("hidden"))) __int64 sub_250A30();
__attribute__((visibility("hidden"))) __int64 sub_2518E0();
__attribute__((visibility("hidden"))) __int64 sub_2518F0();
__attribute__((visibility("hidden"))) __int64 sub_252400();
__attribute__((visibility("hidden"))) __int64 sub_6782A0();
__attribute__((visibility("hidden"))) __int64 sub_67EDD0();
__attribute__((visibility("hidden"))) __int64 sub_682F80();
__attribute__((visibility("hidden"))) __int64 sub_683650();
__attribute__((visibility("hidden"))) __int64 sub_690410();
__attribute__((visibility("hidden"))) __int64 sub_69BDF0();
__attribute__((visibility("hidden"))) unsigned char sub_A82B30();
__attribute__((visibility("hidden"))) __int64 sub_C04BE0();

int __fastcall sub_1F9EA0(_QWORD *a1, __int64 a2)
{
  __int64 v5; // x0

  if ( (unsigned int)sub_1E7A80(a1[1], *(_QWORD *)(*a1 + 16LL)) != 0 )
    return 0;
  v5 = sub_1FBC90();
  return sub_1FB080(v5, a1[1], a1[2], *a1, a2);
}

__int64 __fastcall sub_20CCF0(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // x22
  __int64 v7; // x0

  v3 = *a1;
  v7 = sub_1E7720();
  return sub_20CBE0(v3, v7, a2, a3, a1[1], 1);
}

__int64 sub_24F190()
{
  __int64 v0; // x0
  __int64 v1; // x0
  __int64 v2; // x0
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 v6; // x0
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x0
  __int64 v46; // x0

  v0 = sub_24F350();
  v1 = sub_1EB170(v0);
  v2 = sub_250740(v1);
  v3 = sub_1EB170(v2);
  v4 = sub_250A30(v3);
  v5 = sub_1EB170(v4);
  v6 = sub_252400(v5);
  v7 = sub_1EB170(v6);
  v8 = sub_2518E0(v7);
  v9 = sub_1EB170(v8);
  v10 = sub_2518F0(v9);
  v11 = sub_1EB170(v10);
  v12 = sub_23AAE0(v11);
  v13 = sub_1EB170(v12);
  v14 = sub_23AAF0(v13);
  v15 = sub_1EB170(v14);
  v16 = sub_23AB00(v15);
  v17 = sub_1EB170(v16);
  v18 = sub_23AB10(v17);
  v19 = sub_1EB170(v18);
  v20 = sub_23AB20(v19);
  v21 = sub_1EB170(v20);
  v22 = sub_24F310(v21);
  v23 = sub_1EB170(v22);
  v24 = sub_24F320(v23);
  v25 = sub_1EB170(v24);
  v26 = sub_24F330(v25);
  v27 = sub_1EB170(v26);
  v28 = sub_24F340(v27);
  v29 = sub_1EB170(v28);
  v30 = sub_1F54A0(v29);
  sub_1EB1D0(v30);
  sub_20DDA0("ssl2-md5", 32769, "MD5");
  v31 = sub_20DDA0("ssl3-md5", 32769, "MD5");
  v32 = sub_1EA9F0(v31);
  sub_1EB1D0(v32);
  sub_20DDA0("ssl3-sha1", 32769, "SHA1");
  v33 = sub_20DDA0("RSA-SHA1-2", 32769, "RSA-SHA1");
  v34 = sub_1EAA00(v33);
  v35 = sub_1EB1D0(v34);
  v36 = sub_1EAA10(v35);
  v37 = sub_1EB1D0(v36);
  v38 = sub_1EAA20(v37);
  v39 = sub_1EB1D0(v38);
  v40 = sub_1EAA30(v39);
  v41 = sub_1EB1D0(v40);
  v42 = sub_2509B0(v41);
  sub_1EB1D0(v42);
  sub_20DDA0("DSA-SHA1-old", 32769, "DSA-SHA1");
  sub_20DDA0("DSS1", 32769, "DSA-SHA1");
  v43 = sub_20DDA0("dss1", 32769, "DSA-SHA1");
  v44 = sub_2509F0(v43);
  v45 = sub_1EB1D0(v44);
  v46 = sub_21FFC0(v45);
  sub_21E160(v46);
  return 1;
}

__int64 __fastcall sub_250750(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // x20
  void (__fastcall *v5)(__int64, __int64, unsigned __int64, __int64, __int64); // x8
  unsigned __int64 v6; // x19
  __int64 v7; // x22
  __int64 v8; // x21
  unsigned __int64 v10; // x29

  v4 = *(_QWORD *)(a1 + 120);
  v5 = *(void (__fastcall **)(__int64, __int64, unsigned __int64, __int64, __int64))(v4 + 768);
  v6 = a4;
  v7 = a3;
  v8 = a2;
  if ( v5 != nullptr )
  {
    v5(a3, a2, a4, v4, a1 + 40);
  }
  else
  {
    if ( a4 >> 62 != 0 )
    {
      v10 = a4;
      do
      {
        sub_2500E0(v7, v8, 0x4000000000000000LL, v4, v4 + 256, v4 + 512, a1 + 40, *(unsigned int *)(a1 + 16));
        v10 -= 0x4000000000000000LL;
        v7 += 0x4000000000000000LL;
        v8 += 0x4000000000000000LL;
      }
      while ( v10 >> 62 != 0 );
      v6 &= 0x3FFFFFFFFFFFFFFFuLL;
    }
    if ( v6 != 0 )
      sub_2500E0(v7, v8, v6, v4, v4 + 256, v4 + 512, a1 + 40, *(unsigned int *)(a1 + 16));
  }
  return 1;
}

__int64 __fastcall sub_2508E0(__int64 a1, __int64 a2)
{
  __int64 v2; // x20

  v2 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(v2 + 768) = 0;
  sub_250550(a2, v2);
  sub_250550(a2 + 8, v2 + 256);
  sub_250550(a2 + 16, v2 + 512);
  return 1;
}

// N5EE_US18UPlayManagerNativeE, virtual slot 0
void __fastcall sub_675FD0(_QWORD *a1)
{
  _QWORD *v2; // x0
  _QWORD *v3; // x20
  void *v4; // x0

  *a1 = ((void*)hoff_1841BD0);
  v2 = (_QWORD *)a1[3];
  if ( v2 != nullptr )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      _ZdlPv(v2);
      v2 = v3;
    }
    while ( v3 != nullptr );
  }
  v4 = (void *)a1[1];
  a1[1] = 0;
  if ( v4 != nullptr )
    _ZdlPv(v4);
}

// N5EE_US18UPlayManagerNativeE, virtual slot 1
void __fastcall sub_676040(_QWORD *a1)
{
  _QWORD *v2; // x0
  _QWORD *v3; // x20
  void *v4; // x0

  *a1 = ((void*)hoff_1841BD0);
  v2 = (_QWORD *)a1[3];
  if ( v2 != nullptr )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      _ZdlPv(v2);
      v2 = v3;
    }
    while ( v3 != nullptr );
  }
  v4 = (void *)a1[1];
  a1[1] = 0;
  if ( v4 != nullptr )
    _ZdlPv(v4);
  _ZdlPv(a1);
}

// N4Onyx8Graphics19VertexBufferDynamicE, virtual slot 3
__int64 __fastcall sub_684CB0(char *result)
{
  char *v1; // x20
  char *v2; // x19
  unsigned __int64 v3; // x22
  unsigned int *v4; // x8
  unsigned int v5; // w9
  unsigned int v6; // w9
  char *v7; // x8
  __int64 v8; // x20
  char *v9; // x21
  char *v10; // x0
  char *v11; // x21
  char *v12; // x0
  __int64 v13; // x20
  char *v14; // x21
  char *v15; // x0
  __int64 v16; // x20
  char *v17; // x21
  char *v18; // x0

  v1 = *(_QWORD *)(result + 80);
  v2 = result;
  *(_DWORD *)(result + 56) &= ~2u;
  if ( v1 != 0 )
  {
    if ( *(_DWORD *)(result + 104) == 0 )
      goto LABEL_12;
    v3 = 0;
    do
    {
      result = *(_QWORD *)(v1 + 8 * v3);
      v4 = (unsigned int *)(result + 8);
      v6 = __atomic_sub_fetch(v4, 1, 0);
      if ( v6 == 0 )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 24LL))(result);
      *(_QWORD *)(*(_QWORD *)(v2 + 80) + 8 * v3) = 0;
      v7 = *(_QWORD *)(v2 + 96);
      v8 = *(_QWORD *)(v7 + 8 * v3);
      if ( v8 != 0 )
      {
        v9 = qword_1926BD8;
        v10 = *(_QWORD *)(v9 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, *(_QWORD *)(v7 + 8 * v3)) + 880);
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 48LL))(v10, v8);
        v7 = *(_QWORD *)(v2 + 96);
      }
      *(_QWORD *)(v7 + 8 * v3) = 0;
      v1 = *(_QWORD *)(v2 + 80);
      ++v3;
    }
    while ( v3 < *(unsigned int *)(v2 + 104) );
    if ( v1 != 0 )
    {
LABEL_12:
      v11 = qword_1926BD8;
      v12 = *(_QWORD *)(v11 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v1) + 880);
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 48LL))(v12, v1);
    }
    *(_QWORD *)(v2 + 80) = 0;
  }
  v13 = *(_QWORD *)(v2 + 88);
  if ( v13 != 0 )
  {
    v14 = qword_1926BD8;
    v15 = *(_QWORD *)(v14 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, *(_QWORD *)(v2 + 88)) + 880);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 48LL))(v15, v13);
    *(_QWORD *)(v2 + 88) = 0;
  }
  v16 = *(_QWORD *)(v2 + 96);
  if ( v16 != 0 )
  {
    v17 = qword_1926BD8;
    v18 = *(_QWORD *)(v17 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, *(_QWORD *)(v2 + 96)) + 880);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 48LL))(v18, v16);
    *(_QWORD *)(v2 + 96) = 0;
  }
  return result;
}

// N4Onyx8Graphics7TextureE, virtual slot 3
__int64 __fastcall sub_6867C0(__int64 result)
{
  __int64 *v1; // x19
  unsigned int *v2; // x8
  unsigned int *v3; // x9
  unsigned int v4; // w10
  unsigned int v5; // w10
  unsigned int *v6; // x8
  unsigned int v7; // w9
  unsigned int v8; // w9

  *(_DWORD *)(result + 56) &= ~2u;
  if ( qword_191DCE8 != 0 )
  {
    v1 = *(__int64 **)(result + 88);
    if ( v1 != nullptr )
    {
      result = *v1;
      if ( *v1 != 0 )
      {
        v2 = (unsigned int *)v1[1];
        if ( v2 == nullptr )
          goto LABEL_10;
        v3 = v2 + 2;
        v5 = __atomic_sub_fetch(v3, 1, 0);
        if ( v5 == 0 )
          (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v2 + 24LL))(v2);
        result = *v1;
        v1[1] = 0;
        if ( result != 0 )
        {
LABEL_10:
          v6 = (unsigned int *)(result + 8);
          v8 = __atomic_sub_fetch(v6, 1, 0);
          if ( v8 == 0 )
            result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 24LL))(result);
          *v1 = 0;
        }
      }
    }
  }
  return result;
}

// N4Onyx8Graphics17IndexBufferStaticE, virtual slot 3
__int64 __fastcall sub_687250(__int64 a1)
{
  __int64 result; // x0
  unsigned int *v3; // x8
  unsigned int v4; // w9
  unsigned int v5; // w9
  __int64 v6; // x19
  __int64 v7; // x20
  __int64 v8; // x0

  *(_DWORD *)(a1 + 56) &= ~2u;
  result = *(_QWORD *)(a1 + 80);
  if ( result != 0 )
  {
    v3 = (unsigned int *)(result + 8);
    v5 = __atomic_sub_fetch(v3, 1, 0);
    if ( v5 == 0 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 24LL))(result);
    *(_QWORD *)(a1 + 80) = 0;
  }
  v6 = *(_QWORD *)(a1 + 96);
  if ( v6 != 0 )
  {
    v7 = qword_1926BD8;
    v8 = *(_QWORD *)(v7 + 8LL * (unsigned __int8)sub_A82B30(qword_1926BD8, v6) + 880);
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 48LL))(v8, v6);
  }
  return result;
}

// N4Onyx8Graphics17NewMaterialSystem10ShaderFileE, virtual slot 4
__int64 __fastcall sub_687B40(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1

  sub_6782A0();
  sub_682F80(a1 + 80, a2, a3);
  v6 = (unsigned int *)(a1 + 120);
  *(_QWORD *)a2 += ({ __auto_type h0_ = *(_QWORD *)(a2 + 8); __auto_type h1_ = a1 + 120; (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a2 + 8) + 48LL))(h0_, h1_, 4); });
  if ( *(_DWORD *)(a1 + 120) != 0 )
  {
    if ( ({ __auto_type h0_ = *(_QWORD *)(a2 + 8); (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 8) + 16LL))(h0_); }) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 128);
    }
    else
    {
      v8 = *v6;
      if ( (_DWORD)v8 != 0 )
        v7 = ({ __auto_type h0_ = *(_QWORD *)(qword_1935058 + 1368); (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(qword_1935058 + 1368) + 24LL))(h0_, v8, 4); });
      else
        v7 = 0;
      *(_QWORD *)(a1 + 128) = v7;
    }
    *(_QWORD *)a2 += ({ __auto_type h0_ = *(_QWORD *)(a2 + 8); __auto_type h2_ = *v6; (*(unsigned int (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a2 + 8) + 48LL))(h0_, v7, h2_); });
  }
  return sub_683650(a2, a1 + 136);
}

__int64 __fastcall sub_68FA30(char *a1)
{
  char *v1; // x8
  char *v2; // x20
  __int64 v4; // x0
  int *v5; // x8

  v2 = a1 + 120;
  v1 = *(_QWORD *)(a1 + 120);
  if ( v1 == 0 || (v4 = *(_QWORD *)(v1 + 8)) == 0 )
  {
    sub_67EDD0(qword_191CD10, 2025699073, v2);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v2 + 8LL) + 16LL))(*(_QWORD *)(*(_QWORD *)v2 + 8LL));
    if ( *(_QWORD *)v2 != 0 )
      v4 = *(_QWORD *)(*(_QWORD *)v2 + 8LL);
    else
      v4 = 0;
  }
  v5 = (int *)&qword_191B6C0;
  if ( *(_QWORD *)(a1 + 64) != 0 )
    v5 = *(int **)(a1 + 64);
  return sub_690410(v4, *v5);
}

// N4Onyx7SpawnerE, virtual slot 3
__int64 __fastcall sub_69B580(__int64 a1)
{
  __int64 result; // x0

  *(_BYTE *)(a1 + 305) = 0;
  result = sub_69BDF0(a1);
  if ( *(_QWORD *)(a1 + 288) != 0 )
    result = sub_C04BE0(qword_1935138, *(unsigned int *)(a1 + 272));
  *(_DWORD *)(a1 + 56) &= ~2u;
  return result;
}

